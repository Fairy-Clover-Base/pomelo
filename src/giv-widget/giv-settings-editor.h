/* Generated by GOB (v2.0.20)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include "giv-settings.h"
#include <gtk/gtk.h>
#include <stdarg.h>
#include <stdlib.h>

#ifndef __GIV_SETTINGS_EDITOR_H__
#define __GIV_SETTINGS_EDITOR_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/*
 * Type checking and casting macros
 */
#define GIV_TYPE_SETTINGS_EDITOR	(giv_settings_editor_get_type())
#define GIV_SETTINGS_EDITOR(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), giv_settings_editor_get_type(), GivSettingsEditor)
#define GIV_SETTINGS_EDITOR_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), giv_settings_editor_get_type(), GivSettingsEditor const)
#define GIV_SETTINGS_EDITOR_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), giv_settings_editor_get_type(), GivSettingsEditorClass)
#define GIV_IS_SETTINGS_EDITOR(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), giv_settings_editor_get_type ())

#define GIV_SETTINGS_EDITOR_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), giv_settings_editor_get_type(), GivSettingsEditorClass)

/* Private structure type */
typedef struct _GivSettingsEditorPrivate GivSettingsEditorPrivate;

/*
 * Main object structure
 */
#ifndef __TYPEDEF_GIV_SETTINGS_EDITOR__
#define __TYPEDEF_GIV_SETTINGS_EDITOR__
typedef struct _GivSettingsEditor GivSettingsEditor;
#endif
struct _GivSettingsEditor {
	GtkDialog __parent__;
	/*< private >*/
	GivSettingsEditorPrivate *_priv;
};

/*
 * Class definition
 */
typedef struct _GivSettingsEditorClass GivSettingsEditorClass;
struct _GivSettingsEditorClass {
	GtkDialogClass __parent__;
};


/*
 * Public methods
 */
GType	giv_settings_editor_get_type	(void) G_GNUC_CONST;
#line 36 "src/giv-settings-editor.gob"
GtkWidget * 	giv_settings_editor_new	(GivSettings * giv_settings);
#line 63 "giv-settings-editor.h"
#line 165 "src/giv-settings-editor.gob"
bool 	giv_settings_editor_get_bool	(GivSettingsEditor * self,
					const char * label);
#line 67 "giv-settings-editor.h"
#line 175 "src/giv-settings-editor.gob"
void 	giv_settings_editor_apply	(GivSettingsEditor * self);
#line 70 "giv-settings-editor.h"

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif