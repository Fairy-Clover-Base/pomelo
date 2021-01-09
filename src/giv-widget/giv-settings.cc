/* Generated by GOB (v2.0.20)   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 20

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "giv-settings.h"

#include "giv-settings-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 14 "src/giv-settings.gob"

#include <glib/gstdio.h>

#line 30 "giv-settings.cc"
/* self casting macros */
#define SELF(x) GIV_SETTINGS(x)
#define SELF_CONST(x) GIV_SETTINGS_CONST(x)
#define IS_SELF(x) GIV_IS_SETTINGS(x)
#define TYPE_SELF GIV_TYPE_SETTINGS
#define SELF_CLASS(x) GIV_SETTINGS_CLASS(x)

#define SELF_GET_CLASS(x) GIV_SETTINGS_GET_CLASS(x)

/* self typedefs */
typedef GivSettings Self;
typedef GivSettingsClass SelfClass;

/* here are local prototypes */
static void giv_settings_init (GivSettings * o) G_GNUC_UNUSED;
static void giv_settings_class_init (GivSettingsClass * c) G_GNUC_UNUSED;

/* pointer to the class of our parent */
static GObjectClass *parent_class = NULL;

/* Short form macros */
#define self_new giv_settings_new
#define self_save_prefs giv_settings_save_prefs
GType
giv_settings_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (GivSettingsClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) giv_settings_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (GivSettings),
			0 /* n_preallocs */,
			(GInstanceInitFunc) giv_settings_init,
			NULL
		};

		type = g_type_register_static (G_TYPE_OBJECT, "GivSettings", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((GivSettings *)g_object_new(giv_settings_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static GivSettings * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static GivSettings *
GET_NEW_VARG (const char *first, ...)
{
	GivSettings *ret;
	va_list ap;
	va_start (ap, first);
	ret = (GivSettings *)g_object_new_valist (giv_settings_get_type (), first, ap);
	va_end (ap);
	return ret;
}


static void
___finalize(GObject *obj_self)
{
#define __GOB_FUNCTION__ "Giv:Settings::finalize"
	GivSettings *self G_GNUC_UNUSED = GIV_SETTINGS (obj_self);
	gpointer priv G_GNUC_UNUSED = self->_priv;
#define keyfile_path (self->_priv->keyfile_path)
#define VAR keyfile_path
	{
#line 23 "src/giv-settings.gob"
	 g_free(keyfile_path); }
#line 108 "giv-settings.cc"
	memset(&(keyfile_path), 0, sizeof(keyfile_path));
#undef VAR
#undef keyfile_path
	if(G_OBJECT_CLASS(parent_class)->finalize) \
		(* G_OBJECT_CLASS(parent_class)->finalize)(obj_self);
}
#undef __GOB_FUNCTION__

static void 
giv_settings_init (GivSettings * o)
{
#define __GOB_FUNCTION__ "Giv:Settings::init"
	o->_priv = G_TYPE_INSTANCE_GET_PRIVATE(o,GIV_TYPE_SETTINGS,GivSettingsPrivate);
#line 14 "src/giv-settings.gob"
	o->do_same_filetype_on_next = FALSE;
#line 124 "giv-settings.cc"
#line 14 "src/giv-settings.gob"
	o->default_show_subpixel = FALSE;
#line 127 "giv-settings.cc"
#line 14 "src/giv-settings.gob"
	o->default_auto_resize = TRUE;
#line 130 "giv-settings.cc"
#line 14 "src/giv-settings.gob"
	o->default_auto_contrast = FALSE;
#line 133 "giv-settings.cc"
#line 14 "src/giv-settings.gob"
	o->_priv->keyfile_path = NULL;
#line 136 "giv-settings.cc"
}
#undef __GOB_FUNCTION__
static void 
giv_settings_class_init (GivSettingsClass * c)
{
#define __GOB_FUNCTION__ "Giv:Settings::class_init"
	GObjectClass *g_object_class G_GNUC_UNUSED = (GObjectClass*) c;

	g_type_class_add_private(c,sizeof(GivSettingsPrivate));

	parent_class = (GObjectClass *)g_type_class_ref (G_TYPE_OBJECT);

	g_object_class->finalize = ___finalize;
}
#undef __GOB_FUNCTION__



#line 25 "src/giv-settings.gob"
GObject * 
giv_settings_new (const char * keyfile_path)
{
#line 159 "giv-settings.cc"
#define __GOB_FUNCTION__ "Giv:Settings::new"
{
#line 27 "src/giv-settings.gob"
	
        GivSettings *self = GIV_SETTINGS(GET_NEW);
        GError *error = NULL;
        selfp->keyfile_path = g_strdup(keyfile_path);

        GKeyFile *keyfile = g_key_file_new();
        GKeyFileFlags flags = GKeyFileFlags(0);

        /* Load the GKeyFile from keyfile.conf or return. */
        if (g_key_file_load_from_file (keyfile,
                                       selfp->keyfile_path,
                                       flags,
                                       &error)) {
            self->do_same_filetype_on_next = g_key_file_get_boolean(keyfile,
                                                                    "settings",
                                                                    "do_same_filetype_on_next",
                                                                    NULL);
            self->default_show_subpixel = g_key_file_get_boolean(keyfile,
                                                                 "settings",
                                                                 "default_show_subpixel",
                                                                 NULL);
            self->default_auto_resize = g_key_file_get_boolean(keyfile,
                                                                 "settings",
                                                                 "default_auto_resize",
                                                                 NULL);
            self->default_auto_contrast = g_key_file_get_boolean(keyfile,
                                                                 "settings",
                                                                 "default_auto_contrast",
                                                                 NULL);
        }
        else
            g_error_free(error);
        g_key_file_free(keyfile);

        return G_OBJECT(self);
    }}
#line 199 "giv-settings.cc"
#undef __GOB_FUNCTION__

#line 64 "src/giv-settings.gob"
int 
giv_settings_save_prefs (GivSettings * self)
{
#line 206 "giv-settings.cc"
#define __GOB_FUNCTION__ "Giv:Settings::save_prefs"
#line 64 "src/giv-settings.gob"
	g_return_val_if_fail (self != NULL, (int )0);
#line 64 "src/giv-settings.gob"
	g_return_val_if_fail (GIV_IS_SETTINGS (self), (int )0);
#line 212 "giv-settings.cc"
{
#line 66 "src/giv-settings.gob"
	
        GKeyFile *keyfile = g_key_file_new();
        GError *error = NULL;

        g_key_file_set_boolean(keyfile,
                               "settings",
                               "do_same_filetype_on_next",
                               self->do_same_filetype_on_next);
        g_key_file_set_boolean(keyfile,
                               "settings",
                               "default_show_subpixel",
                               self->default_show_subpixel);
        g_key_file_set_boolean(keyfile,
                               "settings",
                               "default_auto_contrast",
                               self->default_auto_contrast);
        g_key_file_set_boolean(keyfile,
                               "settings",
                               "default_auto_resize",
                               self->default_auto_resize);

        gchar *data = g_key_file_to_data(keyfile,NULL, NULL);
        gchar *dirname = g_path_get_dirname(selfp->keyfile_path);
        if (!g_file_test(dirname,
                         G_FILE_TEST_IS_DIR))
            g_mkdir_with_parents(dirname, 0755);

        if (g_file_test(dirname,
                        G_FILE_TEST_IS_DIR))
            g_file_set_contents(selfp->keyfile_path,
                                data,
                                -1,
                                &error);
        g_free(dirname);
        g_free(data);

        // Ignore errors
        if (error) {
            g_error_free(error);
            return 1;
        }
        return 0;
    }}
#line 258 "giv-settings.cc"
#undef __GOB_FUNCTION__