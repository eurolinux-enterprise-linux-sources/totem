/* totem-interface.c
 *
 *  Copyright (C) 2005 Bastien Nocera
 *
 *  The Gnome Library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public License as
 *  published by the Free Software Foundation; either version 2 of the
 *  License, or (at your option) any later version.
 *
 *  The Gnome Library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public
 *  License along with the Gnome Library; see the file COPYING.LIB.  If not,
 *  see <http://www.gnu.org/licenses/>.
 *
 *  Author: Bastien Nocera <hadess@hadess.net>
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

/**
 * SECTION:totem-interface
 * @short_description: interface utility/loading/error functions
 * @stability: Unstable
 * @include: totem-interface.h
 *
 * A collection of interface utility functions, for loading interfaces and displaying errors.
 **/

#include "config.h"

#include <glib.h>
#include <glib/gi18n.h>
#include <gtk/gtk.h>
#include <gtk/gtkx.h>

#include "totem-interface.h"

static GtkWidget *
totem_interface_error_dialog (const char *title, const char *reason,
		GtkWindow *parent)
{
	GtkWidget *error_dialog;

	if (reason == NULL)
		g_warning ("%s called with reason == NULL", G_STRFUNC);

	error_dialog =
		gtk_message_dialog_new (NULL,
				GTK_DIALOG_MODAL,
				GTK_MESSAGE_ERROR,
				GTK_BUTTONS_OK,
				"%s", title);
	gtk_message_dialog_format_secondary_text
		(GTK_MESSAGE_DIALOG (error_dialog), "%s", reason);

	gtk_window_set_transient_for (GTK_WINDOW (error_dialog),
				      GTK_WINDOW (parent));
	gtk_window_set_title (GTK_WINDOW (error_dialog), ""); /* as per HIG */
	gtk_dialog_set_default_response (GTK_DIALOG (error_dialog),
			GTK_RESPONSE_OK);
	gtk_window_set_modal (GTK_WINDOW (error_dialog), TRUE);

	return error_dialog;
}

/**
 * totem_interface_error:
 * @title: the error title
 * @reason: the error reason (secondary text)
 * @parent: the error dialogue's parent #GtkWindow
 *
 * Display a modal error dialogue with @title as its primary error text, and @reason
 * as its secondary text.
 **/
void
totem_interface_error (const char *title, const char *reason,
		GtkWindow *parent)
{
	GtkWidget *error_dialog;

	error_dialog = totem_interface_error_dialog (title, reason, parent);

	g_signal_connect (G_OBJECT (error_dialog), "response", G_CALLBACK
			(gtk_widget_destroy), error_dialog);

	gtk_window_present (GTK_WINDOW (error_dialog));
}

/**
 * totem_interface_error_blocking:
 * @title: the error title
 * @reason: the error reason (secondary text)
 * @parent: the error dialogue's parent #GtkWindow
 *
 * Display a modal error dialogue like totem_interface_error() which blocks until the user has
 * dismissed it.
 **/
void
totem_interface_error_blocking (const char *title, const char *reason,
		GtkWindow *parent)
{
	GtkWidget *error_dialog;

	error_dialog = totem_interface_error_dialog (title, reason, parent);

	gtk_dialog_run (GTK_DIALOG (error_dialog));
	gtk_widget_destroy (error_dialog);
}

/**
 * totem_interface_error_with_link:
 * @title: the error title
 * @reason: the error reason (secondary text)
 * @uri: the URI to open
 * @label: a label for the URI's button, or %NULL to use @uri as the label
 * @parent: the error dialogue's parent #GtkWindow
 *
 * Display a modal error dialogue like totem_interface_error(),
 * but add a button which will open @uri in a browser window.
 **/
void
totem_interface_error_with_link (const char *title, const char *reason,
				 const char *uri, const char *label, GtkWindow *parent)
{
	GtkWidget *error_dialog, *link_button, *hbox;

	if (label == NULL)
		label = uri;

	error_dialog = totem_interface_error_dialog (title, reason, parent);
	link_button = gtk_link_button_new_with_label (uri, label);

	hbox = gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 0);
	gtk_box_set_homogeneous (GTK_BOX (hbox), TRUE);
	gtk_box_pack_start (GTK_BOX (hbox), link_button, FALSE, FALSE, 0);
	gtk_box_pack_start (GTK_BOX (gtk_dialog_get_content_area (GTK_DIALOG (error_dialog))), hbox, TRUE, FALSE, 0);
	gtk_widget_show_all (hbox);

	gtk_dialog_set_default_response (GTK_DIALOG (error_dialog), GTK_RESPONSE_OK);

	g_signal_connect (G_OBJECT (error_dialog), "response", G_CALLBACK
			(gtk_widget_destroy), error_dialog);

	gtk_window_present (GTK_WINDOW (error_dialog));
}

/**
 * totem_interface_load:
 * @name: the #GtkBuilder UI file to load
 * @fatal: %TRUE if errors loading the file should be fatal, %FALSE otherwise
 * @parent: (allow-none): the parent window to use when displaying error dialogues, or %NULL
 * @user_data: (allow-none): the user data to pass to gtk_builder_connect_signals(), or %NULL
 *
 * Load a #GtkBuilder UI file with the given name and return the #GtkBuilder instance for it. If loading the file fails, an error dialogue is shown.
 *
 * Return value: (transfer full): the loaded #GtkBuilder object, or %NULL
 */
GtkBuilder *
totem_interface_load (const char *name, gboolean fatal, GtkWindow *parent, gpointer user_data)
{
	GtkBuilder *builder = NULL;
	char *filename;

	filename = totem_interface_get_full_path (name);
	if (filename == NULL) {
		char *msg;

		msg = g_strdup_printf (_("Couldn't load the '%s' interface. %s"), name, _("The file does not exist."));
		if (fatal == FALSE)
			totem_interface_error (msg, _("Make sure that Totem is properly installed."), parent);
		else
			totem_interface_error_blocking (msg, _("Make sure that Totem is properly installed."), parent);

		g_free (msg);
		return NULL;
	}

	builder = totem_interface_load_with_full_path (filename, fatal, parent,
						       user_data);
	g_free (filename);

	return builder;
}

/**
 * totem_interface_load_with_full_path:
 * @filename: the #GtkBuilder UI file path to load
 * @fatal: %TRUE if errors loading the file should be fatal, %FALSE otherwise
 * @parent: (allow-none): the parent window to use when displaying error dialogues, or %NULL
 * @user_data: (allow-none): the user data to pass to gtk_builder_connect_signals(), or %NULL
 *
 * Load a #GtkBuilder UI file from the given path and return the #GtkBuilder instance for it. If loading the file fails, an error dialogue is shown.
 *
 * Return value: (transfer full): the loaded #GtkBuilder object, or %NULL
 */
GtkBuilder *
totem_interface_load_with_full_path (const char *filename, gboolean fatal, 
				     GtkWindow *parent, gpointer user_data)
{
	GtkBuilder *builder = NULL;
	GError *error = NULL;

	if (filename != NULL) {
		builder = gtk_builder_new ();
		gtk_builder_set_translation_domain (builder, GETTEXT_PACKAGE);
	}

	if (builder == NULL || gtk_builder_add_from_file (builder, filename, &error) == FALSE) {
		char *msg;

		msg = g_strdup_printf (_("Couldn't load the '%s' interface. %s"), filename, error->message);
		if (fatal == FALSE)
			totem_interface_error (msg, _("Make sure that Totem is properly installed."), parent);
		else
			totem_interface_error_blocking (msg, _("Make sure that Totem is properly installed."), parent);

		g_free (msg);
		g_error_free (error);

		return NULL;
	}

	gtk_builder_connect_signals (builder, user_data);

	return builder;
}

/**
 * totem_interface_load_pixbuf:
 * @name: the image file name
 *
 * Load the image called @name in the directory given by totem_interface_get_full_path() into a #GdkPixbuf.
 *
 * Return value: (transfer full): the loaded pixbuf, or %NULL
 */
GdkPixbuf*
totem_interface_load_pixbuf (const char *name)
{
	GdkPixbuf *pix;
	char *filename;

	filename = totem_interface_get_full_path (name);
	if (filename == NULL)
		return NULL;
	pix = gdk_pixbuf_new_from_file (filename, NULL);
	g_free (filename);
	return pix;
}

char *
totem_interface_get_full_path (const char *name)
{
	char *filename;

#ifdef TOTEM_RUN_IN_SOURCE_TREE
	/* Try the GtkBuilder file in the source tree first */
	filename = g_build_filename ("..", "data", name, NULL);
	if (g_file_test (filename, G_FILE_TEST_EXISTS) == FALSE)
	{
		g_free (filename);
		/* Try the local file */
		filename = g_build_filename (DATADIR,
				"totem", name, NULL);

		if (g_file_test (filename, G_FILE_TEST_EXISTS) == FALSE)
		{
			g_free (filename);
			return NULL;
		}
	}
#else
	filename = g_build_filename (DATADIR,
	                                "totem", name, NULL);
#endif

	return filename;
}

/**
 * totem_interface_create_header_button:
 * @header: The header widget to put the button in
 * @button: The button to use in the header
 * @icon_name: The icon name for the button image
 * @pack_type: A #GtkPackType to tell us where to include the button
 *
 * Return value: (transfer none): the button passed as input
 */
GtkWidget *
totem_interface_create_header_button (GtkWidget  *header,
				      GtkWidget  *button,
				      const char *icon_name,
				      GtkPackType pack_type)
{
	GtkWidget *image;
	GtkStyleContext *context;

	image = gtk_image_new_from_icon_name (icon_name, GTK_ICON_SIZE_MENU);
	gtk_button_set_image (GTK_BUTTON (button), image);
	context = gtk_widget_get_style_context (button);
	gtk_style_context_add_class (context, "image-button");
	g_object_set (G_OBJECT (button), "valign", GTK_ALIGN_CENTER, NULL);

	if (pack_type == GTK_PACK_END)
		gtk_header_bar_pack_end (GTK_HEADER_BAR (header), button);
	else
		gtk_header_bar_pack_start (GTK_HEADER_BAR (header), button);

	return button;
}
