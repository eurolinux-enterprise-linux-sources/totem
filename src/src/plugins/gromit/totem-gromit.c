/*
 *  Copyright (C) 2004 Bastien Nocera <hadess@hadess.net>
 *		  2007 Jan Arne Petersen <jpetersen@jpetersen.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA.
 *
 * The Totem project hereby grant permission for non-gpl compatible GStreamer
 * plugins to be used and distributed together with GStreamer and Totem. This
 * permission are above and beyond the permissions granted by the GPL license
 * Totem is covered by.
 *
 * Monday 7th February 2005: Christian Schaller: Add exception clause.
 * See license_change file for details.
 *
 */

#include <config.h>

#include <glib.h>
#include <glib-object.h>
#include <glib/gi18n-lib.h>
#include <gmodule.h>
#include <string.h>
#include <libpeas/peas-extension-base.h>
#include <libpeas/peas-object-module.h>
#include <libpeas/peas-activatable.h>
#include <sys/types.h>
#include <signal.h>
#include <fcntl.h>
#include <unistd.h>

#include <gdk/gdkkeysyms.h>

#include "totem-plugin.h"
#include "totem.h"
#include "totem-interface.h"

#define TOTEM_TYPE_GROMIT_PLUGIN		(totem_gromit_plugin_get_type ())
#define TOTEM_GROMIT_PLUGIN(o)			(G_TYPE_CHECK_INSTANCE_CAST ((o), TOTEM_TYPE_GROMIT_PLUGIN, TotemGromitPlugin))
#define TOTEM_GROMIT_PLUGIN_CLASS(k)		(G_TYPE_CHECK_CLASS_CAST((k), TOTEM_TYPE_GROMIT_PLUGIN, TotemGromitPluginClass))
#define TOTEM_IS_GROMIT_PLUGIN(o)		(G_TYPE_CHECK_INSTANCE_TYPE ((o), TOTEM_TYPE_GROMIT_PLUGIN))
#define TOTEM_IS_GROMIT_PLUGIN_CLASS(k)		(G_TYPE_CHECK_CLASS_TYPE ((k), TOTEM_TYPE_GROMIT_PLUGIN))
#define TOTEM_GROMIT_PLUGIN_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), TOTEM_TYPE_GROMIT_PLUGIN, TotemGromitPluginClass))

typedef struct {
	char *path;
	int id;
	GPid pid;

	gulong handler_id;
} TotemGromitPluginPrivate;

#define INTERVAL 10 /* seconds */

static const char *start_cmd[] =	{ NULL, "-a", "-k", "none", NULL };
static const char *toggle_cmd[] =	{ NULL, "-t", NULL };
static const char *clear_cmd[] =	{ NULL, "-c", NULL };
static const char *visibility_cmd[] =	{ NULL, "-v", NULL };
/* no quit command, we just kill the process */

#define DEFAULT_CONFIG							\
"#Default gromit configuration for Totem's telestrator mode		\n\
\"red Pen\" = PEN (size=5 color=\"red\");				\n\
\"blue Pen\" = \"red Pen\" (color=\"blue\");				\n\
\"yellow Pen\" = \"red Pen\" (color=\"yellow\");			\n\
\"green Marker\" = PEN (size=6 color=\"green\" arrowsize=1);		\n\
									\n\
\"Eraser\" = ERASER (size = 100);					\n\
									\n\
\"Core Pointer\" = \"red Pen\";						\n\
\"Core Pointer\"[SHIFT] = \"blue Pen\";					\n\
\"Core Pointer\"[CONTROL] = \"yellow Pen\";				\n\
\"Core Pointer\"[2] = \"green Marker\";					\n\
\"Core Pointer\"[Button3] = \"Eraser\";					\n\
\n"

TOTEM_PLUGIN_REGISTER(TOTEM_TYPE_GROMIT_PLUGIN, TotemGromitPlugin, totem_gromit_plugin)

static void
totem_gromit_ensure_config_file (void)
{
	char *path;
	GError *error = NULL;

	path = g_build_filename (g_get_user_config_dir (), "gromit", "gromitrc", NULL);
	if (g_file_test (path, G_FILE_TEST_EXISTS) != FALSE) {
		g_free (path);
		return;
	}

	g_debug ("%s doesn't exist so creating it", path);

	if (g_file_set_contents (path, DEFAULT_CONFIG, sizeof (DEFAULT_CONFIG), &error) == FALSE) {
		g_warning ("Could not write default config file: %s.", error->message);
		g_error_free (error);
	}
	g_free (path);
}

static gboolean
totem_gromit_available (TotemGromitPlugin *plugin)
{
	plugin->priv->path = g_find_program_in_path ("gromit");

	if (plugin->priv->path == NULL) {
		return FALSE;
	}

	start_cmd[0] = toggle_cmd[0] = clear_cmd[0] = visibility_cmd[0] = plugin->priv->path;
	totem_gromit_ensure_config_file ();

	return TRUE;
}

static void
launch (const char **cmd)
{
	g_spawn_sync (NULL, (char **)cmd, NULL, 0, NULL, NULL,
			NULL, NULL, NULL, NULL);
}

static void
totem_gromit_exit (TotemGromitPlugin *plugin)
{
	/* Nothing to do */
	if (plugin->priv->pid == -1) {
		if (plugin->priv->id != -1) {
			g_source_remove (plugin->priv->id);
			plugin->priv->id = -1;
		}
		return;
	}

	kill ((pid_t) plugin->priv->pid, SIGKILL);
	plugin->priv->pid = -1;
}

static gboolean
totem_gromit_timeout_cb (gpointer data)
{
	TotemGromitPlugin *plugin = TOTEM_GROMIT_PLUGIN (data);

	plugin->priv->id = -1;
	totem_gromit_exit (plugin);
	return FALSE;
}

static void
totem_gromit_toggle (TotemGromitPlugin *plugin)
{
	/* Not started */
	if (plugin->priv->pid == -1) {
		if (g_spawn_async (NULL,
				(char **)start_cmd, NULL, 0, NULL, NULL,
				&plugin->priv->pid, NULL) == FALSE) {
			g_printerr ("Couldn't start gromit");
			return;
		}
	} else if (plugin->priv->id == -1) { /* Started but disabled */
		g_source_remove (plugin->priv->id);
		plugin->priv->id = -1;
		launch (toggle_cmd);
	} else {
		/* Started and visible */
		g_source_remove (plugin->priv->id);
		plugin->priv->id = -1;
		launch (toggle_cmd);
	}
}

static void
totem_gromit_clear (TotemGromitPlugin *plugin, gboolean now)
{
	if (now != FALSE) {
		totem_gromit_exit (plugin);
		return;
	}

	launch (visibility_cmd);
	launch (clear_cmd);
	plugin->priv->id = g_timeout_add_seconds (INTERVAL, totem_gromit_timeout_cb, plugin);
	g_source_set_name_by_id (plugin->priv->id, "[totem] totem_gromit_timeout_cb");
}

static gboolean
on_window_key_press_event (GtkWidget *window, GdkEventKey *event, TotemGromitPlugin *plugin)
{
	if (event->state == 0 || !(event->state & GDK_CONTROL_MASK))
		return FALSE;

	switch (event->keyval) {
		case GDK_KEY_D:
		case GDK_KEY_d:
			totem_gromit_toggle (plugin);
			break;
		case GDK_KEY_E:
		case GDK_KEY_e:
			totem_gromit_clear (plugin, FALSE);
			break;
		default:
			return FALSE;
	}

	return TRUE;
}

static void
impl_activate (PeasActivatable *plugin)
{
	TotemGromitPlugin *pi = TOTEM_GROMIT_PLUGIN (plugin);
	GtkWindow *window;

	pi->priv->id = -1;
	pi->priv->pid = -1;

	if (!totem_gromit_available (pi)) {
		//FIXME
#if 0
		g_set_error_literal (error, TOTEM_PLUGIN_ERROR, TOTEM_PLUGIN_ERROR_ACTIVATION,
                                     _("The gromit binary was not found."));

		return FALSE;
#endif
	}

	window = totem_object_get_main_window (g_object_get_data (G_OBJECT (plugin), "object"));
	pi->priv->handler_id = g_signal_connect (G_OBJECT(window), "key-press-event", 
			G_CALLBACK (on_window_key_press_event), plugin);
	g_object_unref (window);
}

static void
impl_deactivate (PeasActivatable *plugin)
{
	TotemGromitPlugin *pi = TOTEM_GROMIT_PLUGIN (plugin);
	GtkWindow *window;

	if (pi->priv->handler_id != 0) {
		window = totem_object_get_main_window (g_object_get_data (G_OBJECT (plugin), "object"));
		g_signal_handler_disconnect (G_OBJECT(window), pi->priv->handler_id);
		pi->priv->handler_id = 0;
		g_object_unref (window);
	}

	totem_gromit_clear (pi, TRUE);

	g_free (pi->priv->path);
	pi->priv->path = NULL;
}

