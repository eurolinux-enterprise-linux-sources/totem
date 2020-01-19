/* GTK - The GIMP Toolkit
 * Copyright (C) 2013-2014 Red Hat, Inc.
 *
 * Authors:
 * - Bastien Nocera <bnocera@redhat.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * Modified by the GTK+ Team and others 2013.  See the AUTHORS
 * file for a list of people on the GTK+ Team.  See the ChangeLog
 * files for a list of changes.  These files are distributed with
 * GTK+ at ftp://ftp.gtk.org/pub/gtk/.
 */

#ifndef __TOTEM_MAIN_TOOLBAR_H__
#define __TOTEM_MAIN_TOOLBAR_H__

#include <gtk/gtkbox.h>

G_BEGIN_DECLS

#define TOTEM_TYPE_MAIN_TOOLBAR                 (totem_main_toolbar_get_type ())
#define TOTEM_MAIN_TOOLBAR(obj)                 (G_TYPE_CHECK_INSTANCE_CAST ((obj), TOTEM_TYPE_MAIN_TOOLBAR, TotemMainToolbar))
#define TOTEM_MAIN_TOOLBAR_CLASS(klass)         (G_TYPE_CHECK_CLASS_CAST ((klass), TOTEM_TYPE_MAIN_TOOLBAR, TotemMainToolbarClass))
#define TOTEM_IS_MAIN_TOOLBAR(obj)              (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TOTEM_TYPE_MAIN_TOOLBAR))
#define TOTEM_IS_MAIN_TOOLBAR_CLASS(klass)      (G_TYPE_CHECK_CLASS_TYPE ((klass), TOTEM_TYPE_MAIN_TOOLBAR))
#define TOTEM_MAIN_TOOLBAR_GET_CLASS(obj)       (G_TYPE_INSTANCE_GET_CLASS ((obj), TOTEM_TYPE_MAIN_TOOLBAR, TotemMainToolbarClass))

typedef struct _TotemMainToolbar        TotemMainToolbar;
typedef struct _TotemMainToolbarPrivate TotemMainToolbarPrivate;
typedef struct _TotemMainToolbarClass   TotemMainToolbarClass;

struct _TotemMainToolbar
{
  /*< private >*/
  GtkHeaderBar parent;

  TotemMainToolbarPrivate *priv;
};

struct _TotemMainToolbarClass
{
  GtkHeaderBarClass parent_class;
};

GType           totem_main_toolbar_get_type              (void) G_GNUC_CONST;
GtkWidget*      totem_main_toolbar_new                   (void);
void            totem_main_toolbar_set_search_mode       (TotemMainToolbar *bar,
							  gboolean          search_mode);
gboolean        totem_main_toolbar_get_search_mode       (TotemMainToolbar *bar);
void            totem_main_toolbar_set_select_mode       (TotemMainToolbar *bar,
							  gboolean          select_mode);
gboolean        totem_main_toolbar_get_select_mode       (TotemMainToolbar *bar);
void            totem_main_toolbar_set_title             (TotemMainToolbar *bar,
							  const char       *title);
const char *    totem_main_toolbar_get_title             (TotemMainToolbar *bar);
void            totem_main_toolbar_set_subtitle          (TotemMainToolbar *bar,
							  const char       *subtitle);
const char *    totem_main_toolbar_get_subtitle          (TotemMainToolbar *bar);
void            totem_main_toolbar_set_search_string     (TotemMainToolbar *bar,
						          const char       *search_string);
const char *    totem_main_toolbar_get_search_string     (TotemMainToolbar *bar);
void            totem_main_toolbar_set_n_selected        (TotemMainToolbar *bar,
							  guint             n_selected);
guint           totem_main_toolbar_get_n_selected        (TotemMainToolbar *bar);
void            totem_main_toolbar_set_custom_title      (TotemMainToolbar *bar,
							  GtkWidget        *title_widget);
GtkWidget *     totem_main_toolbar_get_custom_title      (TotemMainToolbar *bar);
void            totem_main_toolbar_set_select_menu_model (TotemMainToolbar *bar,
							  GMenuModel       *model);
GMenuModel *    totem_main_toolbar_get_select_menu_model (TotemMainToolbar *bar);
void            totem_main_toolbar_pack_start            (TotemMainToolbar *bar,
							  GtkWidget        *child);
void            totem_main_toolbar_pack_end              (TotemMainToolbar *bar,
							  GtkWidget        *child);

G_END_DECLS

#endif /* __TOTEM_MAIN_TOOLBAR_H__ */
