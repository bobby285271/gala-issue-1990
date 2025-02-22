/* Main.c generated by valac 0.56.17, the Vala compiler
 * generated from Main.vala, do not modify */

/**/
/*  Copyright (C) 2014 Tom Beckmann*/
/**/
/*  This program is free software: you can redistribute it and/or modify*/
/*  it under the terms of the GNU General Public License as published by*/
/*  the Free Software Foundation, either version 3 of the License, or*/
/*  (at your option) any later version.*/
/**/
/*  This program is distributed in the hope that it will be useful,*/
/*  but WITHOUT ANY WARRANTY; without even the implied warranty of*/
/*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the*/
/*  GNU General Public License for more details.*/
/**/
/*  You should have received a copy of the GNU General Public License*/
/*  along with this program.  If not, see <http://www.gnu.org/licenses/>.*/
/**/
/*
  This is a template class showing some of the things that can be done
  with a gala plugin and how to do them.
*/

#include "gala-template.h"
#include "gala.h"
#include <clutter/clutter.h>
#include <glib.h>
#include <float.h>
#include <math.h>
#include <meta/display.h>
#include <meta/meta-plugin.h>
#include <mtk/mtk.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>

#define GALA_PLUGINS_TEMPLATE_MAIN_PADDING 50
#if !defined(VALA_STRICT_C)
#if !defined(__clang__) && defined(__GNUC__) && (__GNUC__ >= 14)
#pragma GCC diagnostic warning "-Wincompatible-pointer-types"
#elif defined(__clang__) && (__clang_major__ >= 16)
#pragma clang diagnostic ignored "-Wincompatible-function-pointer-types"
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#endif
#endif

enum  {
	GALA_PLUGINS_TEMPLATE_MAIN_0_PROPERTY,
	GALA_PLUGINS_TEMPLATE_MAIN_NUM_PROPERTIES
};
static GParamSpec* gala_plugins_template_main_properties[GALA_PLUGINS_TEMPLATE_MAIN_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _GalaPluginsTemplateMainPrivate {
	GalaWindowManager* wm;
	ClutterActor* red_box;
};

static gint GalaPluginsTemplateMain_private_offset;
static gpointer gala_plugins_template_main_parent_class = NULL;

static void gala_plugins_template_main_real_initialize (GalaPlugin* base,
                                                 GalaWindowManager* wm);
static gboolean gala_plugins_template_main_turn_green (GalaPluginsTemplateMain* self,
                                                ClutterEvent* event);
static gboolean _gala_plugins_template_main_turn_green_clutter_actor_button_press_event (ClutterActor* _sender,
                                                                                  ClutterEvent* event,
                                                                                  gpointer self);
static void gala_plugins_template_main_real_destroy (GalaPlugin* base);
static void gala_plugins_template_main_finalize (GObject * obj);
static GType gala_plugins_template_main_get_type_once (void);

static inline gpointer
gala_plugins_template_main_get_instance_private (GalaPluginsTemplateMain* self)
{
	return G_STRUCT_MEMBER_P (self, GalaPluginsTemplateMain_private_offset);
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 36 "../plugins/template/Main.vala"
	return self ? g_object_ref (self) : NULL;
#line 87 "Main.c"
}

static gboolean
_gala_plugins_template_main_turn_green_clutter_actor_button_press_event (ClutterActor* _sender,
                                                                         ClutterEvent* event,
                                                                         gpointer self)
{
	gboolean result;
	result = gala_plugins_template_main_turn_green ((GalaPluginsTemplateMain*) self, event);
#line 44 "../plugins/template/Main.vala"
	return result;
#line 99 "Main.c"
}

static void
gala_plugins_template_main_real_initialize (GalaPlugin* base,
                                            GalaWindowManager* wm)
{
	GalaPluginsTemplateMain * self;
	GalaWindowManager* _tmp0_;
	ClutterActor* _tmp1_;
	ClutterActor* _tmp2_;
	ClutterActor* _tmp3_;
	ClutterColor _tmp4_ = {0};
	ClutterActor* _tmp5_;
	ClutterActor* _tmp6_;
	MetaDisplay* display = NULL;
	MetaDisplay* _tmp7_;
	MetaDisplay* _tmp8_;
	MtkRectangle rect = {0};
	MtkRectangle _tmp9_ = {0};
	ClutterActor* _tmp10_;
	MtkRectangle _tmp11_;
	MtkRectangle _tmp12_;
	ClutterActor* _tmp13_;
	gfloat _tmp14_;
	gfloat _tmp15_;
	ClutterActor* _tmp16_;
	MtkRectangle _tmp17_;
	MtkRectangle _tmp18_;
	ClutterActor* _tmp19_;
	gfloat _tmp20_;
	gfloat _tmp21_;
	ClutterActor* _tmp22_;
	ClutterActor* _tmp23_;
	ClutterActor* _tmp24_;
	ClutterActor* _tmp25_;
#line 32 "../plugins/template/Main.vala"
	self = (GalaPluginsTemplateMain*) base;
#line 32 "../plugins/template/Main.vala"
	g_return_if_fail (wm != NULL);
#line 36 "../plugins/template/Main.vala"
	_tmp0_ = _g_object_ref0 (wm);
#line 36 "../plugins/template/Main.vala"
	_g_object_unref0 (self->priv->wm);
#line 36 "../plugins/template/Main.vala"
	self->priv->wm = _tmp0_;
#line 40 "../plugins/template/Main.vala"
	_tmp1_ = clutter_actor_new ();
#line 40 "../plugins/template/Main.vala"
	g_object_ref_sink (_tmp1_);
#line 40 "../plugins/template/Main.vala"
	_g_object_unref0 (self->priv->red_box);
#line 40 "../plugins/template/Main.vala"
	self->priv->red_box = _tmp1_;
#line 41 "../plugins/template/Main.vala"
	_tmp2_ = self->priv->red_box;
#line 41 "../plugins/template/Main.vala"
	clutter_actor_set_size (_tmp2_, (gfloat) 100, (gfloat) 100);
#line 42 "../plugins/template/Main.vala"
	_tmp3_ = self->priv->red_box;
#line 42 "../plugins/template/Main.vala"
	_tmp4_.red = (guint8) 255;
#line 42 "../plugins/template/Main.vala"
	_tmp4_.green = (guint8) 0;
#line 42 "../plugins/template/Main.vala"
	_tmp4_.blue = (guint8) 0;
#line 42 "../plugins/template/Main.vala"
	_tmp4_.alpha = (guint8) 255;
#line 42 "../plugins/template/Main.vala"
	clutter_actor_set_background_color (_tmp3_, &_tmp4_);
#line 43 "../plugins/template/Main.vala"
	_tmp5_ = self->priv->red_box;
#line 43 "../plugins/template/Main.vala"
	clutter_actor_set_reactive (_tmp5_, TRUE);
#line 44 "../plugins/template/Main.vala"
	_tmp6_ = self->priv->red_box;
#line 44 "../plugins/template/Main.vala"
	g_signal_connect_object (_tmp6_, "button-press-event", (GCallback) _gala_plugins_template_main_turn_green_clutter_actor_button_press_event, self, 0);
#line 49 "../plugins/template/Main.vala"
	_tmp7_ = meta_plugin_get_display ((MetaPlugin*) wm);
#line 49 "../plugins/template/Main.vala"
	_tmp8_ = _g_object_ref0 (_tmp7_);
#line 49 "../plugins/template/Main.vala"
	display = _tmp8_;
#line 50 "../plugins/template/Main.vala"
	meta_display_get_monitor_geometry (display, meta_display_get_primary_monitor (display), &_tmp9_);
#line 50 "../plugins/template/Main.vala"
	rect = _tmp9_;
#line 52 "../plugins/template/Main.vala"
	_tmp10_ = self->priv->red_box;
#line 52 "../plugins/template/Main.vala"
	_tmp11_ = rect;
#line 52 "../plugins/template/Main.vala"
	_tmp12_ = rect;
#line 52 "../plugins/template/Main.vala"
	_tmp13_ = self->priv->red_box;
#line 52 "../plugins/template/Main.vala"
	_tmp14_ = clutter_actor_get_width (_tmp13_);
#line 52 "../plugins/template/Main.vala"
	_tmp15_ = _tmp14_;
#line 52 "../plugins/template/Main.vala"
	clutter_actor_set_x (_tmp10_, ((_tmp11_.x + _tmp12_.width) - _tmp15_) - GALA_PLUGINS_TEMPLATE_MAIN_PADDING);
#line 53 "../plugins/template/Main.vala"
	_tmp16_ = self->priv->red_box;
#line 53 "../plugins/template/Main.vala"
	_tmp17_ = rect;
#line 53 "../plugins/template/Main.vala"
	_tmp18_ = rect;
#line 53 "../plugins/template/Main.vala"
	_tmp19_ = self->priv->red_box;
#line 53 "../plugins/template/Main.vala"
	_tmp20_ = clutter_actor_get_height (_tmp19_);
#line 53 "../plugins/template/Main.vala"
	_tmp21_ = _tmp20_;
#line 53 "../plugins/template/Main.vala"
	clutter_actor_set_y (_tmp16_, ((_tmp17_.y + _tmp18_.height) - _tmp21_) - GALA_PLUGINS_TEMPLATE_MAIN_PADDING);
#line 65 "../plugins/template/Main.vala"
	_tmp22_ = self->priv->red_box;
#line 65 "../plugins/template/Main.vala"
	gala_plugin_track_actor ((GalaPlugin*) self, _tmp22_);
#line 69 "../plugins/template/Main.vala"
	_tmp23_ = gala_window_manager_get_ui_group (wm);
#line 69 "../plugins/template/Main.vala"
	_tmp24_ = _tmp23_;
#line 69 "../plugins/template/Main.vala"
	_tmp25_ = self->priv->red_box;
#line 69 "../plugins/template/Main.vala"
	clutter_actor_add_child (_tmp24_, _tmp25_);
#line 32 "../plugins/template/Main.vala"
	_g_object_unref0 (display);
#line 229 "Main.c"
}

static gboolean
gala_plugins_template_main_turn_green (GalaPluginsTemplateMain* self,
                                       ClutterEvent* event)
{
	ClutterActor* _tmp0_;
	ClutterColor _tmp1_ = {0};
	gboolean result;
#line 73 "../plugins/template/Main.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 73 "../plugins/template/Main.vala"
	g_return_val_if_fail (event != NULL, FALSE);
#line 77 "../plugins/template/Main.vala"
	_tmp0_ = self->priv->red_box;
#line 77 "../plugins/template/Main.vala"
	_tmp1_.red = (guint8) 0;
#line 77 "../plugins/template/Main.vala"
	_tmp1_.green = (guint8) 255;
#line 77 "../plugins/template/Main.vala"
	_tmp1_.blue = (guint8) 0;
#line 77 "../plugins/template/Main.vala"
	_tmp1_.alpha = (guint8) 255;
#line 77 "../plugins/template/Main.vala"
	clutter_actor_set_background_color (_tmp0_, &_tmp1_);
#line 78 "../plugins/template/Main.vala"
	result = TRUE;
#line 78 "../plugins/template/Main.vala"
	return result;
#line 259 "Main.c"
}

static void
gala_plugins_template_main_real_destroy (GalaPlugin* base)
{
	GalaPluginsTemplateMain * self;
	ClutterActor* _tmp0_;
#line 85 "../plugins/template/Main.vala"
	self = (GalaPluginsTemplateMain*) base;
#line 89 "../plugins/template/Main.vala"
	_tmp0_ = self->priv->red_box;
#line 89 "../plugins/template/Main.vala"
	clutter_actor_destroy (_tmp0_);
#line 273 "Main.c"
}

GalaPluginsTemplateMain*
gala_plugins_template_main_construct (GType object_type)
{
	GalaPluginsTemplateMain * self = NULL;
#line 24 "../plugins/template/Main.vala"
	self = (GalaPluginsTemplateMain*) gala_plugin_construct (object_type);
#line 24 "../plugins/template/Main.vala"
	return self;
#line 284 "Main.c"
}

GalaPluginsTemplateMain*
gala_plugins_template_main_new (void)
{
#line 24 "../plugins/template/Main.vala"
	return gala_plugins_template_main_construct (GALA_PLUGINS_TEMPLATE_TYPE_MAIN);
#line 292 "Main.c"
}

static void
gala_plugins_template_main_class_init (GalaPluginsTemplateMainClass * klass,
                                       gpointer klass_data)
{
#line 24 "../plugins/template/Main.vala"
	gala_plugins_template_main_parent_class = g_type_class_peek_parent (klass);
#line 24 "../plugins/template/Main.vala"
	g_type_class_adjust_private_offset (klass, &GalaPluginsTemplateMain_private_offset);
#line 24 "../plugins/template/Main.vala"
	((GalaPluginClass *) klass)->initialize = (void (*) (GalaPlugin*, GalaWindowManager*)) gala_plugins_template_main_real_initialize;
#line 24 "../plugins/template/Main.vala"
	((GalaPluginClass *) klass)->destroy = (void (*) (GalaPlugin*)) gala_plugins_template_main_real_destroy;
#line 24 "../plugins/template/Main.vala"
	G_OBJECT_CLASS (klass)->finalize = gala_plugins_template_main_finalize;
#line 309 "Main.c"
}

static void
gala_plugins_template_main_instance_init (GalaPluginsTemplateMain * self,
                                          gpointer klass)
{
#line 24 "../plugins/template/Main.vala"
	self->priv = gala_plugins_template_main_get_instance_private (self);
#line 27 "../plugins/template/Main.vala"
	self->priv->wm = NULL;
#line 320 "Main.c"
}

static void
gala_plugins_template_main_finalize (GObject * obj)
{
	GalaPluginsTemplateMain * self;
#line 24 "../plugins/template/Main.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_PLUGINS_TEMPLATE_TYPE_MAIN, GalaPluginsTemplateMain);
#line 27 "../plugins/template/Main.vala"
	_g_object_unref0 (self->priv->wm);
#line 28 "../plugins/template/Main.vala"
	_g_object_unref0 (self->priv->red_box);
#line 24 "../plugins/template/Main.vala"
	G_OBJECT_CLASS (gala_plugins_template_main_parent_class)->finalize (obj);
#line 335 "Main.c"
}

 G_GNUC_NO_INLINE static GType
gala_plugins_template_main_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GalaPluginsTemplateMainClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gala_plugins_template_main_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GalaPluginsTemplateMain), 0, (GInstanceInitFunc) gala_plugins_template_main_instance_init, NULL };
	GType gala_plugins_template_main_type_id;
	gala_plugins_template_main_type_id = g_type_register_static (GALA_TYPE_PLUGIN, "GalaPluginsTemplateMain", &g_define_type_info, 0);
	GalaPluginsTemplateMain_private_offset = g_type_add_instance_private (gala_plugins_template_main_type_id, sizeof (GalaPluginsTemplateMainPrivate));
	return gala_plugins_template_main_type_id;
}

GType
gala_plugins_template_main_get_type (void)
{
	static gsize gala_plugins_template_main_type_id__once = 0;
	if (g_once_init_enter (&gala_plugins_template_main_type_id__once)) {
		GType gala_plugins_template_main_type_id;
		gala_plugins_template_main_type_id = gala_plugins_template_main_get_type_once ();
		g_once_init_leave (&gala_plugins_template_main_type_id__once, gala_plugins_template_main_type_id);
	}
	return gala_plugins_template_main_type_id__once;
}

void
register_plugin (GalaPluginInfo* result)
{
	gchar* _tmp0_;
	gchar* _tmp1_;
	GalaPluginInfo _tmp2_ = {0};
#line 100 "../plugins/template/Main.vala"
	_tmp0_ = g_strdup ("template-plugin");
#line 100 "../plugins/template/Main.vala"
	_tmp1_ = g_strdup ("Tom Beckmann <tomjonabc@gmail.com>");
#line 100 "../plugins/template/Main.vala"
	_g_free0 (_tmp2_.name);
#line 100 "../plugins/template/Main.vala"
	_tmp2_.name = _tmp0_;
#line 100 "../plugins/template/Main.vala"
	_g_free0 (_tmp2_.author);
#line 100 "../plugins/template/Main.vala"
	_tmp2_.author = _tmp1_;
#line 100 "../plugins/template/Main.vala"
	_tmp2_.plugin_type = GALA_PLUGINS_TEMPLATE_TYPE_MAIN;
#line 100 "../plugins/template/Main.vala"
	_tmp2_.provides = GALA_PLUGIN_FUNCTION_ADDITION;
#line 100 "../plugins/template/Main.vala"
	_tmp2_.load_priority = GALA_LOAD_PRIORITY_IMMEDIATE;
#line 100 "../plugins/template/Main.vala"
	*result = _tmp2_;
#line 100 "../plugins/template/Main.vala"
	return;
#line 388 "Main.c"
}

