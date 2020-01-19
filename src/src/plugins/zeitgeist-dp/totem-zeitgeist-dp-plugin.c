/* totem-zeitgeist-dp-plugin.c generated by valac 0.20.1.9-e6ff5, the Vala compiler
 * generated from totem-zeitgeist-dp-plugin.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <totem.h>
#include <libpeas/peas.h>
#include <zeitgeist.h>
#include <gio/gio.h>
#include "bacon-video-widget.h"


#define TYPE_MEDIA_INFO (media_info_get_type ())
typedef struct _MediaInfo MediaInfo;
#define _g_free0(var) (var = (g_free (var), NULL))

#define TYPE_ZEITGEIST_DP_PLUGIN (zeitgeist_dp_plugin_get_type ())
#define ZEITGEIST_DP_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_ZEITGEIST_DP_PLUGIN, ZeitgeistDpPlugin))
#define ZEITGEIST_DP_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_ZEITGEIST_DP_PLUGIN, ZeitgeistDpPluginClass))
#define IS_ZEITGEIST_DP_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_ZEITGEIST_DP_PLUGIN))
#define IS_ZEITGEIST_DP_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_ZEITGEIST_DP_PLUGIN))
#define ZEITGEIST_DP_PLUGIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_ZEITGEIST_DP_PLUGIN, ZeitgeistDpPluginClass))

typedef struct _ZeitgeistDpPlugin ZeitgeistDpPlugin;
typedef struct _ZeitgeistDpPluginClass ZeitgeistDpPluginClass;
typedef struct _ZeitgeistDpPluginPrivate ZeitgeistDpPluginPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_ptr_array_free0(var) ((var == NULL) ? NULL : (var = (g_ptr_array_free (var, TRUE), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
typedef struct _ZeitgeistDpPluginQueryMediaMimetypeData ZeitgeistDpPluginQueryMediaMimetypeData;

struct _MediaInfo {
	gint64 timestamp;
	gboolean sent_access;
	gchar* mrl;
	gchar* mimetype;
	gchar* title;
	gchar* interpretation;
	gchar* artist;
	gchar* album;
};

struct _ZeitgeistDpPlugin {
	GObject parent_instance;
	ZeitgeistDpPluginPrivate * priv;
};

struct _ZeitgeistDpPluginClass {
	GObjectClass parent_class;
};

struct _ZeitgeistDpPluginPrivate {
	MediaInfo current_media;
	guint media_info_timeout;
	guint timeout_id;
	gulong* signals;
	gint signals_length1;
	gint _signals_size_;
	ZeitgeistLog* zg_log;
	ZeitgeistDataSourceRegistry* zg_registry;
	GObject* _object;
};

struct _ZeitgeistDpPluginQueryMediaMimetypeData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	ZeitgeistDpPlugin* self;
	gchar* current_mrl;
	TotemObject* totem;
	GObject* _tmp0_;
	GObject* _tmp1_;
	gchar* mrl;
	const gchar* _tmp2_;
	gchar* _tmp3_;
	GFile* f;
	const gchar* _tmp4_;
	GFile* _tmp5_;
	GFileInfo* fi;
	GFile* _tmp6_;
	GFileInfo* _tmp7_;
	gboolean _tmp8_;
	MediaInfo _tmp9_;
	const gchar* _tmp10_;
	const gchar* _tmp11_;
	TotemObject* _tmp12_;
	gboolean _tmp13_;
	gboolean _tmp14_;
	GFileInfo* _tmp15_;
	const gchar* _tmp16_;
	gchar* _tmp17_;
	GError* err;
	GError * _inner_error_;
};


static gpointer zeitgeist_dp_plugin_parent_class = NULL;
static PeasActivatableInterface* zeitgeist_dp_plugin_peas_activatable_parent_iface = NULL;
static GType zeitgeist_dp_plugin_type_id = 0;

GType media_info_get_type (void) G_GNUC_CONST;
MediaInfo* media_info_dup (const MediaInfo* self);
void media_info_free (MediaInfo* self);
void media_info_copy (const MediaInfo* self, MediaInfo* dest);
void media_info_destroy (MediaInfo* self);
GType zeitgeist_dp_plugin_get_type (void) G_GNUC_CONST;
GType zeitgeist_dp_plugin_register_type (GTypeModule * module);
#define ZEITGEIST_DP_PLUGIN_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_ZEITGEIST_DP_PLUGIN, ZeitgeistDpPluginPrivate))
enum  {
	ZEITGEIST_DP_PLUGIN_DUMMY_PROPERTY,
	ZEITGEIST_DP_PLUGIN_OBJECT
};
static void zeitgeist_dp_plugin_real_activate (PeasActivatable* base);
GObject* peas_activatable_get_object (PeasActivatable* self);
static void zeitgeist_dp_plugin_file_has_played (ZeitgeistDpPlugin* self, const gchar* mrl, TotemObject* totem);
static void _vala_array_add1 (gulong** array, int* length, int* size, gulong value);
static void zeitgeist_dp_plugin_file_closed (ZeitgeistDpPlugin* self, TotemObject* totem);
static void _vala_array_add2 (gulong** array, int* length, int* size, gulong value);
static void zeitgeist_dp_plugin_metadata_changed (ZeitgeistDpPlugin* self, const gchar* artist, const gchar* title, const gchar* album, guint track_num, TotemObject* totem);
static void _vala_array_add3 (gulong** array, int* length, int* size, gulong value);
static void zeitgeist_dp_plugin_playing_changed (ZeitgeistDpPlugin* self);
static void _vala_array_add4 (gulong** array, int* length, int* size, gulong value);
static void zeitgeist_dp_plugin_real_deactivate (PeasActivatable* base);
static void zeitgeist_dp_plugin_real_update_state (PeasActivatable* base);
static void zeitgeist_dp_plugin_restart_watcher (ZeitgeistDpPlugin* self, guint interval);
static gboolean zeitgeist_dp_plugin_timeout_cb (ZeitgeistDpPlugin* self);
static gboolean _zeitgeist_dp_plugin_timeout_cb_gsource_func (gpointer self);
static gboolean zeitgeist_dp_plugin_wait_for_media_info (ZeitgeistDpPlugin* self);
static gboolean _zeitgeist_dp_plugin_wait_for_media_info_gsource_func (gpointer self);
static void zeitgeist_dp_plugin_send_event_to_zg (ZeitgeistDpPlugin* self, gboolean leave_event);
static void zeitgeist_dp_plugin_query_media_mimetype_data_free (gpointer _data);
static void zeitgeist_dp_plugin_query_media_mimetype (ZeitgeistDpPlugin* self, const gchar* current_mrl, GAsyncReadyCallback _callback_, gpointer _user_data_);
static void zeitgeist_dp_plugin_query_media_mimetype_finish (ZeitgeistDpPlugin* self, GAsyncResult* _res_);
static gboolean zeitgeist_dp_plugin_query_media_mimetype_co (ZeitgeistDpPluginQueryMediaMimetypeData* _data_);
static void zeitgeist_dp_plugin_query_media_mimetype_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
ZeitgeistDpPlugin* zeitgeist_dp_plugin_new (void);
ZeitgeistDpPlugin* zeitgeist_dp_plugin_construct (GType object_type);
static void zeitgeist_dp_plugin_finalize (GObject* obj);
static void _vala_zeitgeist_dp_plugin_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void peas_activatable_set_object (PeasActivatable* self, GObject* value);
static void _vala_zeitgeist_dp_plugin_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
void peas_register_types (GTypeModule* module);


void media_info_copy (const MediaInfo* self, MediaInfo* dest) {
	gint64 _tmp0_;
	gboolean _tmp1_;
	const gchar* _tmp2_;
	gchar* _tmp3_;
	const gchar* _tmp4_;
	gchar* _tmp5_;
	const gchar* _tmp6_;
	gchar* _tmp7_;
	const gchar* _tmp8_;
	gchar* _tmp9_;
	const gchar* _tmp10_;
	gchar* _tmp11_;
	const gchar* _tmp12_;
	gchar* _tmp13_;
	_tmp0_ = (*self).timestamp;
	(*dest).timestamp = _tmp0_;
	_tmp1_ = (*self).sent_access;
	(*dest).sent_access = _tmp1_;
	_tmp2_ = (*self).mrl;
	_tmp3_ = g_strdup (_tmp2_);
	_g_free0 ((*dest).mrl);
	(*dest).mrl = _tmp3_;
	_tmp4_ = (*self).mimetype;
	_tmp5_ = g_strdup (_tmp4_);
	_g_free0 ((*dest).mimetype);
	(*dest).mimetype = _tmp5_;
	_tmp6_ = (*self).title;
	_tmp7_ = g_strdup (_tmp6_);
	_g_free0 ((*dest).title);
	(*dest).title = _tmp7_;
	_tmp8_ = (*self).interpretation;
	_tmp9_ = g_strdup (_tmp8_);
	_g_free0 ((*dest).interpretation);
	(*dest).interpretation = _tmp9_;
	_tmp10_ = (*self).artist;
	_tmp11_ = g_strdup (_tmp10_);
	_g_free0 ((*dest).artist);
	(*dest).artist = _tmp11_;
	_tmp12_ = (*self).album;
	_tmp13_ = g_strdup (_tmp12_);
	_g_free0 ((*dest).album);
	(*dest).album = _tmp13_;
}


void media_info_destroy (MediaInfo* self) {
	_g_free0 ((*self).mrl);
	_g_free0 ((*self).mimetype);
	_g_free0 ((*self).title);
	_g_free0 ((*self).interpretation);
	_g_free0 ((*self).artist);
	_g_free0 ((*self).album);
}


MediaInfo* media_info_dup (const MediaInfo* self) {
	MediaInfo* dup;
	dup = g_new0 (MediaInfo, 1);
	media_info_copy (self, dup);
	return dup;
}


void media_info_free (MediaInfo* self) {
	media_info_destroy (self);
	g_free (self);
}


GType media_info_get_type (void) {
	static volatile gsize media_info_type_id__volatile = 0;
	if (g_once_init_enter (&media_info_type_id__volatile)) {
		GType media_info_type_id;
		media_info_type_id = g_boxed_type_register_static ("MediaInfo", (GBoxedCopyFunc) media_info_dup, (GBoxedFreeFunc) media_info_free);
		g_once_init_leave (&media_info_type_id__volatile, media_info_type_id);
	}
	return media_info_type_id__volatile;
}


static void _vala_array_add1 (gulong** array, int* length, int* size, gulong value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (gulong, *array, *size);
	}
	(*array)[(*length)++] = value;
}


static void _vala_array_add2 (gulong** array, int* length, int* size, gulong value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (gulong, *array, *size);
	}
	(*array)[(*length)++] = value;
}


static void _vala_array_add3 (gulong** array, int* length, int* size, gulong value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (gulong, *array, *size);
	}
	(*array)[(*length)++] = value;
}


static void _vala_array_add4 (gulong** array, int* length, int* size, gulong value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (gulong, *array, *size);
	}
	(*array)[(*length)++] = value;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void zeitgeist_dp_plugin_real_activate (PeasActivatable* base) {
	ZeitgeistDpPlugin * self;
	TotemObject* totem = NULL;
	GObject* _tmp0_ = NULL;
	GObject* _tmp1_;
	ZeitgeistLog* _tmp2_;
	ZeitgeistDataSourceRegistry* _tmp3_;
	gulong* _tmp4_;
	gint _tmp4__length1;
	gulong _tmp5_ = 0UL;
	gulong* _tmp6_;
	gint _tmp6__length1;
	gulong _tmp7_ = 0UL;
	gulong* _tmp8_;
	gint _tmp8__length1;
	gulong _tmp9_ = 0UL;
	gulong* _tmp10_;
	gint _tmp10__length1;
	gulong _tmp11_ = 0UL;
	GPtrArray* templates = NULL;
	GPtrArray* _tmp12_;
	ZeitgeistEvent* event = NULL;
	ZeitgeistEvent* _tmp13_;
	GPtrArray* _tmp14_;
	ZeitgeistDataSource* ds = NULL;
	GPtrArray* _tmp15_;
	ZeitgeistDataSource* _tmp16_;
	ZeitgeistDataSourceRegistry* _tmp17_;
	ZeitgeistDataSource* _tmp18_;
	self = (ZeitgeistDpPlugin*) base;
	g_object_get ((PeasActivatable*) self, "object", &_tmp0_, NULL);
	_tmp1_ = _tmp0_;
	totem = G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, totem_object_get_type (), TotemObject);
	_tmp2_ = zeitgeist_log_new ();
	_g_object_unref0 (self->priv->zg_log);
	self->priv->zg_log = _tmp2_;
	_tmp3_ = zeitgeist_data_source_registry_new ();
	_g_object_unref0 (self->priv->zg_registry);
	self->priv->zg_registry = _tmp3_;
	media_info_destroy (&self->priv->current_media);
	memset (&self->priv->current_media, 0, sizeof (MediaInfo));
	_tmp4_ = self->priv->signals;
	_tmp4__length1 = self->priv->signals_length1;
	_tmp5_ = g_signal_connect_swapped (totem, "file-has-played", (GCallback) zeitgeist_dp_plugin_file_has_played, self);
	_vala_array_add1 (&self->priv->signals, &self->priv->signals_length1, &self->priv->_signals_size_, _tmp5_);
	_tmp6_ = self->priv->signals;
	_tmp6__length1 = self->priv->signals_length1;
	_tmp7_ = g_signal_connect_swapped (totem, "file-closed", (GCallback) zeitgeist_dp_plugin_file_closed, self);
	_vala_array_add2 (&self->priv->signals, &self->priv->signals_length1, &self->priv->_signals_size_, _tmp7_);
	_tmp8_ = self->priv->signals;
	_tmp8__length1 = self->priv->signals_length1;
	_tmp9_ = g_signal_connect_swapped (totem, "metadata-updated", (GCallback) zeitgeist_dp_plugin_metadata_changed, self);
	_vala_array_add3 (&self->priv->signals, &self->priv->signals_length1, &self->priv->_signals_size_, _tmp9_);
	_tmp10_ = self->priv->signals;
	_tmp10__length1 = self->priv->signals_length1;
	_tmp11_ = g_signal_connect_swapped (totem, "notify::playing", (GCallback) zeitgeist_dp_plugin_playing_changed, self);
	_vala_array_add4 (&self->priv->signals, &self->priv->signals_length1, &self->priv->_signals_size_, _tmp11_);
	_tmp12_ = g_ptr_array_new ();
	templates = _tmp12_;
	_tmp13_ = zeitgeist_event_new_full ("", ZEITGEIST_ZG_USER_ACTIVITY, "application://totem.desktop", NULL, NULL);
	g_object_ref_sink (_tmp13_);
	event = _tmp13_;
	_tmp14_ = templates;
	g_ptr_array_add (_tmp14_, event);
	_tmp15_ = templates;
	templates = NULL;
	_tmp16_ = zeitgeist_data_source_new_full ("org.gnome.Totem,dataprovider", "Totem dataprovider", "Logs access/leave events for media files played with Totem", _tmp15_);
	g_object_ref_sink (_tmp16_);
	ds = _tmp16_;
	_tmp17_ = self->priv->zg_registry;
	_tmp18_ = _g_object_ref0 (ds);
	zeitgeist_data_source_registry_register_data_source (_tmp17_, _tmp18_, NULL, NULL, NULL);
	_g_object_unref0 (ds);
	_g_object_unref0 (event);
	_g_ptr_array_free0 (templates);
	_g_object_unref0 (totem);
}


static void zeitgeist_dp_plugin_real_deactivate (PeasActivatable* base) {
	ZeitgeistDpPlugin * self;
	TotemObject* totem = NULL;
	GObject* _tmp0_ = NULL;
	GObject* _tmp1_;
	TotemObject* _tmp2_;
	gulong* _tmp3_;
	gint _tmp3__length1;
	guint _tmp6_;
	guint _tmp8_;
	self = (ZeitgeistDpPlugin*) base;
	g_object_get ((PeasActivatable*) self, "object", &_tmp0_, NULL);
	_tmp1_ = _tmp0_;
	totem = G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, totem_object_get_type (), TotemObject);
	_tmp2_ = totem;
	zeitgeist_dp_plugin_file_closed (self, _tmp2_);
	_tmp3_ = self->priv->signals;
	_tmp3__length1 = self->priv->signals_length1;
	{
		gulong* id_collection = NULL;
		gint id_collection_length1 = 0;
		gint _id_collection_size_ = 0;
		gint id_it = 0;
		id_collection = _tmp3_;
		id_collection_length1 = _tmp3__length1;
		for (id_it = 0; id_it < _tmp3__length1; id_it = id_it + 1) {
			gulong id = 0UL;
			id = id_collection[id_it];
			{
				TotemObject* _tmp4_;
				gulong _tmp5_;
				_tmp4_ = totem;
				_tmp5_ = id;
				g_signal_handler_disconnect (_tmp4_, _tmp5_);
			}
		}
	}
	self->priv->signals = (g_free (self->priv->signals), NULL);
	self->priv->signals = NULL;
	self->priv->signals_length1 = 0;
	self->priv->_signals_size_ = self->priv->signals_length1;
	_tmp6_ = self->priv->media_info_timeout;
	if (_tmp6_ != ((guint) 0)) {
		guint _tmp7_;
		_tmp7_ = self->priv->media_info_timeout;
		g_source_remove (_tmp7_);
	}
	_tmp8_ = self->priv->timeout_id;
	if (_tmp8_ != ((guint) 0)) {
		guint _tmp9_;
		_tmp9_ = self->priv->timeout_id;
		g_source_remove (_tmp9_);
	}
	self->priv->media_info_timeout = (guint) 0;
	self->priv->timeout_id = (guint) 0;
	_g_object_unref0 (totem);
}


static void zeitgeist_dp_plugin_real_update_state (PeasActivatable* base) {
	ZeitgeistDpPlugin * self;
	self = (ZeitgeistDpPlugin*) base;
}


static gboolean _zeitgeist_dp_plugin_timeout_cb_gsource_func (gpointer self) {
	gboolean result;
	result = zeitgeist_dp_plugin_timeout_cb (self);
	return result;
}


static void zeitgeist_dp_plugin_restart_watcher (ZeitgeistDpPlugin* self, guint interval) {
	guint _tmp0_;
	guint _tmp2_;
	guint _tmp3_ = 0U;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->timeout_id;
	if (_tmp0_ != ((guint) 0)) {
		guint _tmp1_;
		_tmp1_ = self->priv->timeout_id;
		g_source_remove (_tmp1_);
	}
	_tmp2_ = interval;
	_tmp3_ = g_timeout_add_full (G_PRIORITY_DEFAULT, _tmp2_, _zeitgeist_dp_plugin_timeout_cb_gsource_func, g_object_ref (self), g_object_unref);
	self->priv->timeout_id = _tmp3_;
}


static gboolean _zeitgeist_dp_plugin_wait_for_media_info_gsource_func (gpointer self) {
	gboolean result;
	result = zeitgeist_dp_plugin_wait_for_media_info (self);
	return result;
}


static void zeitgeist_dp_plugin_file_has_played (ZeitgeistDpPlugin* self, const gchar* mrl, TotemObject* totem) {
	MediaInfo _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp3_;
	gchar* _tmp4_;
	GTimeVal cur_time = {0};
	GTimeVal _tmp5_;
	gint64 _tmp6_ = 0LL;
	guint _tmp7_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (mrl != NULL);
	g_return_if_fail (totem != NULL);
	_tmp0_ = self->priv->current_media;
	_tmp1_ = _tmp0_.mrl;
	if (_tmp1_ != NULL) {
		TotemObject* _tmp2_;
		_tmp2_ = totem;
		zeitgeist_dp_plugin_file_closed (self, _tmp2_);
	}
	media_info_destroy (&self->priv->current_media);
	memset (&self->priv->current_media, 0, sizeof (MediaInfo));
	_tmp3_ = mrl;
	_tmp4_ = g_strdup (_tmp3_);
	_g_free0 (self->priv->current_media.mrl);
	self->priv->current_media.mrl = _tmp4_;
	g_get_current_time (&cur_time);
	_tmp5_ = cur_time;
	_tmp6_ = zeitgeist_timestamp_from_timeval (&_tmp5_);
	self->priv->current_media.timestamp = _tmp6_;
	_tmp7_ = self->priv->media_info_timeout;
	if (_tmp7_ == ((guint) 0)) {
		guint _tmp8_ = 0U;
		_tmp8_ = g_timeout_add_full (G_PRIORITY_DEFAULT, (guint) 250, _zeitgeist_dp_plugin_wait_for_media_info_gsource_func, g_object_ref (self), g_object_unref);
		self->priv->media_info_timeout = _tmp8_;
		zeitgeist_dp_plugin_restart_watcher (self, (guint) 15000);
	}
}


static void zeitgeist_dp_plugin_file_closed (ZeitgeistDpPlugin* self, TotemObject* totem) {
	gboolean _tmp0_ = FALSE;
	MediaInfo _tmp1_;
	gboolean _tmp2_;
	gboolean _tmp5_;
	guint _tmp8_;
	guint _tmp10_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (totem != NULL);
	_tmp1_ = self->priv->current_media;
	_tmp2_ = _tmp1_.sent_access;
	if (_tmp2_) {
		MediaInfo _tmp3_;
		const gchar* _tmp4_;
		_tmp3_ = self->priv->current_media;
		_tmp4_ = _tmp3_.mrl;
		_tmp0_ = _tmp4_ != NULL;
	} else {
		_tmp0_ = FALSE;
	}
	_tmp5_ = _tmp0_;
	if (_tmp5_) {
		GTimeVal cur_time = {0};
		GTimeVal _tmp6_;
		gint64 _tmp7_ = 0LL;
		g_get_current_time (&cur_time);
		_tmp6_ = cur_time;
		_tmp7_ = zeitgeist_timestamp_from_timeval (&_tmp6_);
		self->priv->current_media.timestamp = _tmp7_;
		zeitgeist_dp_plugin_send_event_to_zg (self, TRUE);
		_g_free0 (self->priv->current_media.mrl);
		self->priv->current_media.mrl = NULL;
	}
	_tmp8_ = self->priv->media_info_timeout;
	if (_tmp8_ != ((guint) 0)) {
		guint _tmp9_;
		_tmp9_ = self->priv->media_info_timeout;
		g_source_remove (_tmp9_);
	}
	self->priv->media_info_timeout = (guint) 0;
	_tmp10_ = self->priv->timeout_id;
	if (_tmp10_ != ((guint) 0)) {
		guint _tmp11_;
		_tmp11_ = self->priv->timeout_id;
		g_source_remove (_tmp11_);
	}
	self->priv->timeout_id = (guint) 0;
}


static void zeitgeist_dp_plugin_metadata_changed (ZeitgeistDpPlugin* self, const gchar* artist, const gchar* title, const gchar* album, guint track_num, TotemObject* totem) {
	guint _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (totem != NULL);
	_tmp0_ = self->priv->media_info_timeout;
	if (_tmp0_ != ((guint) 0)) {
		const gchar* _tmp1_;
		gchar* _tmp2_;
		const gchar* _tmp3_;
		gchar* _tmp4_;
		const gchar* _tmp5_;
		gchar* _tmp6_;
		_tmp1_ = artist;
		_tmp2_ = g_strdup (_tmp1_);
		_g_free0 (self->priv->current_media.artist);
		self->priv->current_media.artist = _tmp2_;
		_tmp3_ = title;
		_tmp4_ = g_strdup (_tmp3_);
		_g_free0 (self->priv->current_media.title);
		self->priv->current_media.title = _tmp4_;
		_tmp5_ = album;
		_tmp6_ = g_strdup (_tmp5_);
		_g_free0 (self->priv->current_media.album);
		self->priv->current_media.album = _tmp6_;
	}
}


static gboolean zeitgeist_dp_plugin_timeout_cb (ZeitgeistDpPlugin* self) {
	gboolean result = FALSE;
	TotemObject* totem = NULL;
	GObject* _tmp0_ = NULL;
	GObject* _tmp1_;
	guint _tmp2_;
	g_return_val_if_fail (self != NULL, FALSE);
	g_object_get ((PeasActivatable*) self, "object", &_tmp0_, NULL);
	_tmp1_ = _tmp0_;
	totem = G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, totem_object_get_type (), TotemObject);
	_tmp2_ = self->priv->media_info_timeout;
	if (_tmp2_ != ((guint) 0)) {
		guint _tmp3_;
		TotemObject* _tmp4_;
		gchar* _tmp5_ = NULL;
		_tmp3_ = self->priv->media_info_timeout;
		g_source_remove (_tmp3_);
		self->priv->media_info_timeout = (guint) 0;
		_tmp4_ = totem;
		_tmp5_ = totem_get_short_title (_tmp4_);
		_g_free0 (self->priv->current_media.title);
		self->priv->current_media.title = _tmp5_;
		self->priv->timeout_id = (guint) 0;
		zeitgeist_dp_plugin_wait_for_media_info (self);
	}
	self->priv->timeout_id = (guint) 0;
	result = FALSE;
	_g_object_unref0 (totem);
	return result;
}


static void zeitgeist_dp_plugin_query_media_mimetype_data_free (gpointer _data) {
	ZeitgeistDpPluginQueryMediaMimetypeData* _data_;
	_data_ = _data;
	_g_free0 (_data_->current_mrl);
	_g_object_unref0 (_data_->self);
	g_slice_free (ZeitgeistDpPluginQueryMediaMimetypeData, _data_);
}


static void zeitgeist_dp_plugin_query_media_mimetype (ZeitgeistDpPlugin* self, const gchar* current_mrl, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	ZeitgeistDpPluginQueryMediaMimetypeData* _data_;
	ZeitgeistDpPlugin* _tmp0_;
	const gchar* _tmp1_;
	gchar* _tmp2_;
	_data_ = g_slice_new0 (ZeitgeistDpPluginQueryMediaMimetypeData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, zeitgeist_dp_plugin_query_media_mimetype);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, zeitgeist_dp_plugin_query_media_mimetype_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = current_mrl;
	_tmp2_ = g_strdup (_tmp1_);
	_g_free0 (_data_->current_mrl);
	_data_->current_mrl = _tmp2_;
	zeitgeist_dp_plugin_query_media_mimetype_co (_data_);
}


static void zeitgeist_dp_plugin_query_media_mimetype_finish (ZeitgeistDpPlugin* self, GAsyncResult* _res_) {
	ZeitgeistDpPluginQueryMediaMimetypeData* _data_;
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


static void zeitgeist_dp_plugin_query_media_mimetype_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	ZeitgeistDpPluginQueryMediaMimetypeData* _data_;
	_data_ = _user_data_;
	_data_->_source_object_ = source_object;
	_data_->_res_ = _res_;
	zeitgeist_dp_plugin_query_media_mimetype_co (_data_);
}


static gboolean zeitgeist_dp_plugin_query_media_mimetype_co (ZeitgeistDpPluginQueryMediaMimetypeData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		case 1:
		goto _state_1;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = NULL;
	g_object_get ((PeasActivatable*) _data_->self, "object", &_data_->_tmp0_, NULL);
	_data_->_tmp1_ = _data_->_tmp0_;
	_data_->totem = G_TYPE_CHECK_INSTANCE_CAST (_data_->_tmp1_, totem_object_get_type (), TotemObject);
	_data_->_tmp2_ = _data_->current_mrl;
	_data_->_tmp3_ = g_strdup (_data_->_tmp2_);
	_data_->mrl = _data_->_tmp3_;
	_data_->_tmp4_ = _data_->mrl;
	_data_->_tmp5_ = NULL;
	_data_->_tmp5_ = g_file_new_for_uri (_data_->_tmp4_);
	_data_->f = _data_->_tmp5_;
	{
		_data_->_tmp6_ = _data_->f;
		_data_->_state_ = 1;
		g_file_query_info_async (_data_->_tmp6_, G_FILE_ATTRIBUTE_STANDARD_CONTENT_TYPE, 0, G_PRIORITY_DEFAULT_IDLE, NULL, zeitgeist_dp_plugin_query_media_mimetype_ready, _data_);
		return FALSE;
		_state_1:
		_data_->_tmp7_ = NULL;
		_data_->_tmp7_ = g_file_query_info_finish (_data_->_tmp6_, _data_->_res_, &_data_->_inner_error_);
		_data_->fi = _data_->_tmp7_;
		if (_data_->_inner_error_ != NULL) {
			goto __catch0_g_error;
		}
		_data_->_tmp9_ = _data_->self->priv->current_media;
		_data_->_tmp10_ = _data_->_tmp9_.mrl;
		_data_->_tmp11_ = _data_->mrl;
		if (g_strcmp0 (_data_->_tmp10_, _data_->_tmp11_) != 0) {
			_data_->_tmp8_ = TRUE;
		} else {
			_data_->_tmp12_ = _data_->totem;
			_data_->_tmp13_ = FALSE;
			_data_->_tmp13_ = totem_object_is_playing (_data_->_tmp12_);
			_data_->_tmp8_ = !_data_->_tmp13_;
		}
		_data_->_tmp14_ = _data_->_tmp8_;
		if (_data_->_tmp14_) {
			_g_object_unref0 (_data_->fi);
			_g_object_unref0 (_data_->f);
			_g_free0 (_data_->mrl);
			_g_object_unref0 (_data_->totem);
			if (_data_->_state_ == 0) {
				g_simple_async_result_complete_in_idle (_data_->_async_result);
			} else {
				g_simple_async_result_complete (_data_->_async_result);
			}
			g_object_unref (_data_->_async_result);
			return FALSE;
		}
		_data_->_tmp15_ = _data_->fi;
		_data_->_tmp16_ = NULL;
		_data_->_tmp16_ = g_file_info_get_content_type (_data_->_tmp15_);
		_data_->_tmp17_ = g_strdup (_data_->_tmp16_);
		_g_free0 (_data_->self->priv->current_media.mimetype);
		_data_->self->priv->current_media.mimetype = _data_->_tmp17_;
		zeitgeist_dp_plugin_send_event_to_zg (_data_->self, FALSE);
		_data_->self->priv->current_media.sent_access = TRUE;
		_g_object_unref0 (_data_->fi);
	}
	goto __finally0;
	__catch0_g_error:
	{
		_data_->err = _data_->_inner_error_;
		_data_->_inner_error_ = NULL;
		_g_error_free0 (_data_->err);
	}
	__finally0:
	if (_data_->_inner_error_ != NULL) {
		_g_object_unref0 (_data_->f);
		_g_free0 (_data_->mrl);
		_g_object_unref0 (_data_->totem);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
		g_clear_error (&_data_->_inner_error_);
		return FALSE;
	}
	_g_object_unref0 (_data_->f);
	_g_free0 (_data_->mrl);
	_g_object_unref0 (_data_->totem);
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


static gboolean zeitgeist_dp_plugin_wait_for_media_info (ZeitgeistDpPlugin* self) {
	gboolean result = FALSE;
	TotemObject* totem = NULL;
	GObject* _tmp0_ = NULL;
	GObject* _tmp1_;
	gboolean _tmp2_ = FALSE;
	MediaInfo _tmp3_;
	const gchar* _tmp4_;
	gboolean _tmp7_;
	g_return_val_if_fail (self != NULL, FALSE);
	g_object_get ((PeasActivatable*) self, "object", &_tmp0_, NULL);
	_tmp1_ = _tmp0_;
	totem = G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, totem_object_get_type (), TotemObject);
	_tmp3_ = self->priv->current_media;
	_tmp4_ = _tmp3_.title;
	if (_tmp4_ != NULL) {
		TotemObject* _tmp5_;
		gboolean _tmp6_ = FALSE;
		_tmp5_ = totem;
		_tmp6_ = totem_object_is_playing (_tmp5_);
		_tmp2_ = _tmp6_;
	} else {
		_tmp2_ = FALSE;
	}
	_tmp7_ = _tmp2_;
	if (_tmp7_) {
		GValue val = {0};
		BaconVideoWidget* video = NULL;
		TotemObject* _tmp8_;
		GtkWidget* _tmp9_ = NULL;
		BaconVideoWidget* _tmp10_;
		BaconVideoWidget* _tmp11_;
		GValue _tmp12_ = {0};
		const gchar* _tmp13_ = NULL;
		gboolean _tmp14_ = FALSE;
		const gchar* _tmp15_;
		gchar* _tmp16_;
		MediaInfo _tmp17_;
		const gchar* _tmp18_;
		guint _tmp19_;
		_tmp8_ = totem;
		_tmp9_ = totem_object_get_video_widget (_tmp8_);
		_tmp10_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp9_, BACON_TYPE_VIDEO_WIDGET) ? ((BaconVideoWidget*) _tmp9_) : NULL;
		if (_tmp10_ == NULL) {
			_g_object_unref0 (_tmp9_);
		}
		video = _tmp10_;
		_tmp11_ = video;
		bacon_video_widget_get_metadata (_tmp11_, BVW_INFO_HAS_VIDEO, &_tmp12_);
		G_IS_VALUE (&val) ? (g_value_unset (&val), NULL) : NULL;
		val = _tmp12_;
		_tmp14_ = g_value_get_boolean (&val);
		if (_tmp14_) {
			_tmp13_ = ZEITGEIST_NFO_VIDEO;
		} else {
			_tmp13_ = ZEITGEIST_NFO_AUDIO;
		}
		_tmp15_ = _tmp13_;
		_tmp16_ = g_strdup (_tmp15_);
		_g_free0 (self->priv->current_media.interpretation);
		self->priv->current_media.interpretation = _tmp16_;
		_tmp17_ = self->priv->current_media;
		_tmp18_ = _tmp17_.mrl;
		zeitgeist_dp_plugin_query_media_mimetype (self, _tmp18_, NULL, NULL);
		_tmp19_ = self->priv->timeout_id;
		if (_tmp19_ != ((guint) 0)) {
			guint _tmp20_;
			_tmp20_ = self->priv->timeout_id;
			g_source_remove (_tmp20_);
		}
		self->priv->timeout_id = (guint) 0;
		self->priv->media_info_timeout = (guint) 0;
		result = FALSE;
		_g_object_unref0 (video);
		G_IS_VALUE (&val) ? (g_value_unset (&val), NULL) : NULL;
		_g_object_unref0 (totem);
		return result;
	}
	result = TRUE;
	_g_object_unref0 (totem);
	return result;
}


static void zeitgeist_dp_plugin_playing_changed (ZeitgeistDpPlugin* self) {
	TotemObject* totem = NULL;
	GObject* _tmp0_ = NULL;
	GObject* _tmp1_;
	gboolean _tmp2_ = FALSE;
	guint _tmp3_;
	gboolean _tmp6_;
	gboolean _tmp7_ = FALSE;
	TotemObject* _tmp8_;
	gboolean _tmp9_ = FALSE;
	gboolean _tmp12_;
	g_return_if_fail (self != NULL);
	g_object_get ((PeasActivatable*) self, "object", &_tmp0_, NULL);
	_tmp1_ = _tmp0_;
	totem = G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, totem_object_get_type (), TotemObject);
	_tmp3_ = self->priv->media_info_timeout;
	if (_tmp3_ == ((guint) 0)) {
		MediaInfo _tmp4_;
		gboolean _tmp5_;
		_tmp4_ = self->priv->current_media;
		_tmp5_ = _tmp4_.sent_access;
		_tmp2_ = _tmp5_ == FALSE;
	} else {
		_tmp2_ = FALSE;
	}
	_tmp6_ = _tmp2_;
	if (_tmp6_) {
		zeitgeist_dp_plugin_wait_for_media_info (self);
	}
	_tmp8_ = totem;
	_tmp9_ = totem_object_is_playing (_tmp8_);
	if (!_tmp9_) {
		MediaInfo _tmp10_;
		gboolean _tmp11_;
		_tmp10_ = self->priv->current_media;
		_tmp11_ = _tmp10_.sent_access;
		_tmp7_ = _tmp11_;
	} else {
		_tmp7_ = FALSE;
	}
	_tmp12_ = _tmp7_;
	if (_tmp12_) {
		TotemObject* _tmp13_;
		_tmp13_ = totem;
		zeitgeist_dp_plugin_file_closed (self, _tmp13_);
	}
	_g_object_unref0 (totem);
}


static void zeitgeist_dp_plugin_send_event_to_zg (ZeitgeistDpPlugin* self, gboolean leave_event) {
	gboolean _tmp0_ = FALSE;
	MediaInfo _tmp1_;
	const gchar* _tmp2_;
	gboolean _tmp5_;
	g_return_if_fail (self != NULL);
	_tmp1_ = self->priv->current_media;
	_tmp2_ = _tmp1_.mrl;
	if (_tmp2_ != NULL) {
		MediaInfo _tmp3_;
		const gchar* _tmp4_;
		_tmp3_ = self->priv->current_media;
		_tmp4_ = _tmp3_.title;
		_tmp0_ = _tmp4_ != NULL;
	} else {
		_tmp0_ = FALSE;
	}
	_tmp5_ = _tmp0_;
	if (_tmp5_) {
		const gchar* _tmp6_ = NULL;
		gboolean _tmp7_;
		gchar* event_interpretation = NULL;
		const gchar* _tmp8_;
		gchar* _tmp9_;
		gchar* origin = NULL;
		MediaInfo _tmp10_;
		const gchar* _tmp11_;
		gchar* _tmp12_ = NULL;
		ZeitgeistSubject* subject = NULL;
		MediaInfo _tmp13_;
		const gchar* _tmp14_;
		MediaInfo _tmp15_;
		const gchar* _tmp16_;
		MediaInfo _tmp17_;
		const gchar* _tmp18_;
		const gchar* _tmp19_ = NULL;
		MediaInfo _tmp20_;
		const gchar* _tmp21_;
		const gchar* _tmp22_;
		MediaInfo _tmp23_;
		const gchar* _tmp24_;
		ZeitgeistSubject* _tmp25_;
		ZeitgeistEvent* event = NULL;
		const gchar* _tmp26_;
		ZeitgeistSubject* _tmp27_;
		ZeitgeistEvent* _tmp28_;
		ZeitgeistEvent* _tmp29_;
		MediaInfo _tmp30_;
		gint64 _tmp31_;
		ZeitgeistLog* _tmp32_;
		ZeitgeistEvent* _tmp33_;
		_tmp7_ = leave_event;
		if (_tmp7_) {
			_tmp6_ = ZEITGEIST_ZG_LEAVE_EVENT;
		} else {
			_tmp6_ = ZEITGEIST_ZG_ACCESS_EVENT;
		}
		_tmp8_ = _tmp6_;
		_tmp9_ = g_strdup (_tmp8_);
		event_interpretation = _tmp9_;
		_tmp10_ = self->priv->current_media;
		_tmp11_ = _tmp10_.mrl;
		_tmp12_ = g_path_get_dirname (_tmp11_);
		origin = _tmp12_;
		_tmp13_ = self->priv->current_media;
		_tmp14_ = _tmp13_.mrl;
		_tmp15_ = self->priv->current_media;
		_tmp16_ = _tmp15_.interpretation;
		_tmp17_ = self->priv->current_media;
		_tmp18_ = _tmp17_.mrl;
		_tmp19_ = zeitgeist_manifestation_for_uri (_tmp18_);
		_tmp20_ = self->priv->current_media;
		_tmp21_ = _tmp20_.mimetype;
		_tmp22_ = origin;
		_tmp23_ = self->priv->current_media;
		_tmp24_ = _tmp23_.title;
		_tmp25_ = zeitgeist_subject_new_full (_tmp14_, _tmp16_, _tmp19_, _tmp21_, _tmp22_, _tmp24_, "");
		g_object_ref_sink (_tmp25_);
		subject = _tmp25_;
		_tmp26_ = event_interpretation;
		_tmp27_ = subject;
		_tmp28_ = zeitgeist_event_new_full (_tmp26_, ZEITGEIST_ZG_USER_ACTIVITY, "application://totem.desktop", _tmp27_, NULL, NULL);
		g_object_ref_sink (_tmp28_);
		event = _tmp28_;
		_tmp29_ = event;
		_tmp30_ = self->priv->current_media;
		_tmp31_ = _tmp30_.timestamp;
		zeitgeist_event_set_timestamp (_tmp29_, _tmp31_);
		_tmp32_ = self->priv->zg_log;
		_tmp33_ = event;
		zeitgeist_log_insert_events_no_reply (_tmp32_, _tmp33_, NULL, NULL);
		_g_object_unref0 (event);
		_g_object_unref0 (subject);
		_g_free0 (origin);
		_g_free0 (event_interpretation);
	}
}


ZeitgeistDpPlugin* zeitgeist_dp_plugin_construct (GType object_type) {
	ZeitgeistDpPlugin * self = NULL;
	self = (ZeitgeistDpPlugin*) g_object_new (object_type, NULL);
	return self;
}


ZeitgeistDpPlugin* zeitgeist_dp_plugin_new (void) {
	return zeitgeist_dp_plugin_construct (TYPE_ZEITGEIST_DP_PLUGIN);
}


static GObject* zeitgeist_dp_plugin_real_get_object (PeasActivatable* base) {
	GObject* result;
	ZeitgeistDpPlugin* self;
	GObject* _tmp0_;
	GObject* _tmp1_;
	self = (ZeitgeistDpPlugin*) base;
	_tmp0_ = self->priv->_object;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


static void zeitgeist_dp_plugin_real_set_object (PeasActivatable* base, GObject* value) {
	ZeitgeistDpPlugin* self;
	GObject* _tmp0_;
	GObject* _tmp1_;
	self = (ZeitgeistDpPlugin*) base;
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_object);
	self->priv->_object = _tmp1_;
	g_object_notify ((GObject *) self, "object");
}


static void zeitgeist_dp_plugin_class_init (ZeitgeistDpPluginClass * klass) {
	zeitgeist_dp_plugin_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (ZeitgeistDpPluginPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_zeitgeist_dp_plugin_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_zeitgeist_dp_plugin_set_property;
	G_OBJECT_CLASS (klass)->finalize = zeitgeist_dp_plugin_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), ZEITGEIST_DP_PLUGIN_OBJECT, g_param_spec_object ("object", "object", "object", G_TYPE_OBJECT, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
}


static void zeitgeist_dp_plugin_peas_activatable_interface_init (PeasActivatableInterface * iface) {
	zeitgeist_dp_plugin_peas_activatable_parent_iface = g_type_interface_peek_parent (iface);
	iface->activate = (void (*)(PeasActivatable*)) zeitgeist_dp_plugin_real_activate;
	iface->deactivate = (void (*)(PeasActivatable*)) zeitgeist_dp_plugin_real_deactivate;
	iface->update_state = (void (*)(PeasActivatable*)) zeitgeist_dp_plugin_real_update_state;
}


static void zeitgeist_dp_plugin_instance_init (ZeitgeistDpPlugin * self) {
	self->priv = ZEITGEIST_DP_PLUGIN_GET_PRIVATE (self);
}


static void zeitgeist_dp_plugin_finalize (GObject* obj) {
	ZeitgeistDpPlugin * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_ZEITGEIST_DP_PLUGIN, ZeitgeistDpPlugin);
	media_info_destroy (&self->priv->current_media);
	self->priv->signals = (g_free (self->priv->signals), NULL);
	_g_object_unref0 (self->priv->zg_log);
	_g_object_unref0 (self->priv->zg_registry);
	_g_object_unref0 (self->priv->_object);
	G_OBJECT_CLASS (zeitgeist_dp_plugin_parent_class)->finalize (obj);
}


GType zeitgeist_dp_plugin_get_type (void) {
	return zeitgeist_dp_plugin_type_id;
}


GType zeitgeist_dp_plugin_register_type (GTypeModule * module) {
	static const GTypeInfo g_define_type_info = { sizeof (ZeitgeistDpPluginClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) zeitgeist_dp_plugin_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ZeitgeistDpPlugin), 0, (GInstanceInitFunc) zeitgeist_dp_plugin_instance_init, NULL };
	static const GInterfaceInfo peas_activatable_info = { (GInterfaceInitFunc) zeitgeist_dp_plugin_peas_activatable_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	zeitgeist_dp_plugin_type_id = g_type_module_register_type (module, G_TYPE_OBJECT, "ZeitgeistDpPlugin", &g_define_type_info, 0);
	g_type_module_add_interface (module, zeitgeist_dp_plugin_type_id, peas_activatable_get_type (), &peas_activatable_info);
	return zeitgeist_dp_plugin_type_id;
}


static void _vala_zeitgeist_dp_plugin_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	ZeitgeistDpPlugin * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_ZEITGEIST_DP_PLUGIN, ZeitgeistDpPlugin);
	switch (property_id) {
		case ZEITGEIST_DP_PLUGIN_OBJECT:
		g_value_take_object (value, zeitgeist_dp_plugin_real_get_object ((PeasActivatable*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_zeitgeist_dp_plugin_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	ZeitgeistDpPlugin * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_ZEITGEIST_DP_PLUGIN, ZeitgeistDpPlugin);
	switch (property_id) {
		case ZEITGEIST_DP_PLUGIN_OBJECT:
		zeitgeist_dp_plugin_real_set_object ((PeasActivatable*) self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


void peas_register_types (GTypeModule* module) {
	PeasObjectModule* objmodule = NULL;
	GTypeModule* _tmp0_;
	PeasObjectModule* _tmp1_;
	g_return_if_fail (module != NULL);
	zeitgeist_dp_plugin_register_type (module);
	_tmp0_ = module;
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, peas_object_module_get_type ()) ? ((PeasObjectModule*) _tmp0_) : NULL);
	objmodule = _tmp1_;
	peas_object_module_register_extension_type (objmodule, peas_activatable_get_type (), TYPE_ZEITGEIST_DP_PLUGIN);
	_g_object_unref0 (objmodule);
}



