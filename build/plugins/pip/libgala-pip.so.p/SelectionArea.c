/* SelectionArea.c generated by valac 0.56.17, the Vala compiler
 * generated from SelectionArea.vala, do not modify */

/**/
/*  Copyright (C) 2017 Santiago León O., Adam Bieńkowski*/
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

#include "gala-pip.h"
#include "gala.h"
#include <gdk/gdk.h>
#include <glib.h>
#include <clutter/clutter.h>
#include <cairo-gobject.h>
#include <glib-object.h>
#include <float.h>
#include <math.h>
#include <meta/meta-plugin.h>
#include <meta/display.h>
#include <meta/common.h>
#include <stdlib.h>

#if !defined(VALA_STRICT_C)
#if !defined(__clang__) && defined(__GNUC__) && (__GNUC__ >= 14)
#pragma GCC diagnostic warning "-Wincompatible-pointer-types"
#elif defined(__clang__) && (__clang_major__ >= 16)
#pragma clang diagnostic ignored "-Wincompatible-function-pointer-types"
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#endif
#endif

enum  {
	GALA_PLUGINS_PIP_SELECTION_AREA_0_PROPERTY,
	GALA_PLUGINS_PIP_SELECTION_AREA_WM_PROPERTY,
	GALA_PLUGINS_PIP_SELECTION_AREA_NUM_PROPERTIES
};
static GParamSpec* gala_plugins_pip_selection_area_properties[GALA_PLUGINS_PIP_SELECTION_AREA_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
enum  {
	GALA_PLUGINS_PIP_SELECTION_AREA_CAPTURED_SIGNAL,
	GALA_PLUGINS_PIP_SELECTION_AREA_SELECTED_SIGNAL,
	GALA_PLUGINS_PIP_SELECTION_AREA_CLOSED_SIGNAL,
	GALA_PLUGINS_PIP_SELECTION_AREA_NUM_SIGNALS
};
static guint gala_plugins_pip_selection_area_signals[GALA_PLUGINS_PIP_SELECTION_AREA_NUM_SIGNALS] = {0};

struct _GalaPluginsPIPSelectionAreaPrivate {
	GalaWindowManager* _wm;
	GalaModalProxy* modal_proxy;
	GdkPoint start_point;
	GdkPoint end_point;
	gboolean dragging;
	gboolean clicked;
};

static gint GalaPluginsPIPSelectionArea_private_offset;
static gpointer gala_plugins_pip_selection_area_parent_class = NULL;

static gboolean gala_plugins_pip_selection_area_real_key_press_event (ClutterActor* base,
                                                               ClutterEvent* e);
static gboolean gala_plugins_pip_selection_area_real_button_press_event (ClutterActor* base,
                                                                  ClutterEvent* e);
static gboolean gala_plugins_pip_selection_area_real_button_release_event (ClutterActor* base,
                                                                    ClutterEvent* e);
static void gala_plugins_pip_selection_area_get_selection_rectangle (GalaPluginsPIPSelectionArea* self,
                                                              gint* x,
                                                              gint* y,
                                                              gint* width,
                                                              gint* height);
static gboolean gala_plugins_pip_selection_area_real_motion_event (ClutterActor* base,
                                                            ClutterEvent* e);
static void gala_plugins_pip_selection_area_real_draw (GalaCanvasActor* base,
                                                cairo_t* ctx,
                                                gint width,
                                                gint height);
static void g_cclosure_user_marshal_VOID__INT_INT_INT_INT (GClosure * closure,
                                                    GValue * return_value,
                                                    guint n_param_values,
                                                    const GValue * param_values,
                                                    gpointer invocation_hint,
                                                    gpointer marshal_data);
static void g_cclosure_user_marshal_VOID__INT_INT (GClosure * closure,
                                            GValue * return_value,
                                            guint n_param_values,
                                            const GValue * param_values,
                                            gpointer invocation_hint,
                                            gpointer marshal_data);
static GObject * gala_plugins_pip_selection_area_constructor (GType type,
                                                       guint n_construct_properties,
                                                       GObjectConstructParam * construct_properties);
static void gala_plugins_pip_selection_area_finalize (GObject * obj);
static GType gala_plugins_pip_selection_area_get_type_once (void);
static void _vala_gala_plugins_pip_selection_area_get_property (GObject * object,
                                                         guint property_id,
                                                         GValue * value,
                                                         GParamSpec * pspec);
static void _vala_gala_plugins_pip_selection_area_set_property (GObject * object,
                                                         guint property_id,
                                                         const GValue * value,
                                                         GParamSpec * pspec);

static inline gpointer
gala_plugins_pip_selection_area_get_instance_private (GalaPluginsPIPSelectionArea* self)
{
	return G_STRUCT_MEMBER_P (self, GalaPluginsPIPSelectionArea_private_offset);
}

GalaPluginsPIPSelectionArea*
gala_plugins_pip_selection_area_construct (GType object_type,
                                           GalaWindowManager* wm)
{
	GalaPluginsPIPSelectionArea * self = NULL;
#line 31 "../plugins/pip/SelectionArea.vala"
	g_return_val_if_fail (wm != NULL, NULL);
#line 32 "../plugins/pip/SelectionArea.vala"
	self = (GalaPluginsPIPSelectionArea*) g_object_new (object_type, "wm", wm, NULL);
#line 31 "../plugins/pip/SelectionArea.vala"
	return self;
#line 132 "SelectionArea.c"
}

GalaPluginsPIPSelectionArea*
gala_plugins_pip_selection_area_new (GalaWindowManager* wm)
{
#line 31 "../plugins/pip/SelectionArea.vala"
	return gala_plugins_pip_selection_area_construct (GALA_PLUGINS_PIP_TYPE_SELECTION_AREA, wm);
#line 140 "SelectionArea.c"
}

static gboolean
gala_plugins_pip_selection_area_real_key_press_event (ClutterActor* base,
                                                      ClutterEvent* e)
{
	GalaPluginsPIPSelectionArea * self;
	gboolean result;
#line 48 "../plugins/pip/SelectionArea.vala"
	self = (GalaPluginsPIPSelectionArea*) base;
#line 48 "../plugins/pip/SelectionArea.vala"
	g_return_val_if_fail (e != NULL, FALSE);
#line 52 "../plugins/pip/SelectionArea.vala"
	if (clutter_event_get_key_symbol (e) == CLUTTER_KEY_Escape) {
#line 53 "../plugins/pip/SelectionArea.vala"
		gala_plugins_pip_selection_area_close (self);
#line 54 "../plugins/pip/SelectionArea.vala"
		g_signal_emit (self, gala_plugins_pip_selection_area_signals[GALA_PLUGINS_PIP_SELECTION_AREA_CLOSED_SIGNAL], 0);
#line 55 "../plugins/pip/SelectionArea.vala"
		result = TRUE;
#line 55 "../plugins/pip/SelectionArea.vala"
		return result;
#line 163 "SelectionArea.c"
	}
#line 58 "../plugins/pip/SelectionArea.vala"
	result = FALSE;
#line 58 "../plugins/pip/SelectionArea.vala"
	return result;
#line 169 "SelectionArea.c"
}

static gboolean
gala_plugins_pip_selection_area_real_button_press_event (ClutterActor* base,
                                                         ClutterEvent* e)
{
	GalaPluginsPIPSelectionArea * self;
	gboolean _tmp0_ = FALSE;
	gfloat press_x = 0.0F;
	gfloat press_y = 0.0F;
	gfloat _tmp1_ = 0.0F;
	gfloat _tmp2_ = 0.0F;
	GdkPoint _tmp3_ = {0};
	gboolean result;
#line 62 "../plugins/pip/SelectionArea.vala"
	self = (GalaPluginsPIPSelectionArea*) base;
#line 62 "../plugins/pip/SelectionArea.vala"
	g_return_val_if_fail (e != NULL, FALSE);
#line 66 "../plugins/pip/SelectionArea.vala"
	if (self->priv->dragging) {
#line 66 "../plugins/pip/SelectionArea.vala"
		_tmp0_ = TRUE;
#line 192 "SelectionArea.c"
	} else {
#line 66 "../plugins/pip/SelectionArea.vala"
		_tmp0_ = clutter_event_get_button (e) != CLUTTER_BUTTON_PRIMARY;
#line 196 "SelectionArea.c"
	}
#line 66 "../plugins/pip/SelectionArea.vala"
	if (_tmp0_) {
#line 67 "../plugins/pip/SelectionArea.vala"
		result = TRUE;
#line 67 "../plugins/pip/SelectionArea.vala"
		return result;
#line 204 "SelectionArea.c"
	}
#line 70 "../plugins/pip/SelectionArea.vala"
	self->priv->clicked = TRUE;
#line 73 "../plugins/pip/SelectionArea.vala"
	clutter_event_get_coords (e, &_tmp1_, &_tmp2_);
#line 73 "../plugins/pip/SelectionArea.vala"
	press_x = _tmp1_;
#line 73 "../plugins/pip/SelectionArea.vala"
	press_y = _tmp2_;
#line 74 "../plugins/pip/SelectionArea.vala"
	_tmp3_.x = (gint) press_x;
#line 74 "../plugins/pip/SelectionArea.vala"
	_tmp3_.y = (gint) press_y;
#line 74 "../plugins/pip/SelectionArea.vala"
	self->priv->start_point = _tmp3_;
#line 76 "../plugins/pip/SelectionArea.vala"
	result = TRUE;
#line 76 "../plugins/pip/SelectionArea.vala"
	return result;
#line 224 "SelectionArea.c"
}

static gboolean
gala_plugins_pip_selection_area_real_button_release_event (ClutterActor* base,
                                                           ClutterEvent* e)
{
	GalaPluginsPIPSelectionArea * self;
	gint x = 0;
	gint y = 0;
	gint w = 0;
	gint h = 0;
	gint _tmp2_ = 0;
	gint _tmp3_ = 0;
	gint _tmp4_ = 0;
	gint _tmp5_ = 0;
	GdkPoint _tmp6_ = {0};
	GdkPoint _tmp7_ = {0};
	ClutterContent* _tmp8_;
	ClutterContent* _tmp9_;
	gboolean result;
#line 80 "../plugins/pip/SelectionArea.vala"
	self = (GalaPluginsPIPSelectionArea*) base;
#line 80 "../plugins/pip/SelectionArea.vala"
	g_return_val_if_fail (e != NULL, FALSE);
#line 84 "../plugins/pip/SelectionArea.vala"
	if (clutter_event_get_button (e) != CLUTTER_BUTTON_PRIMARY) {
#line 85 "../plugins/pip/SelectionArea.vala"
		result = TRUE;
#line 85 "../plugins/pip/SelectionArea.vala"
		return result;
#line 255 "SelectionArea.c"
	}
#line 88 "../plugins/pip/SelectionArea.vala"
	if (!self->priv->dragging) {
#line 259 "SelectionArea.c"
		gfloat event_x = 0.0F;
		gfloat event_y = 0.0F;
		gfloat _tmp0_ = 0.0F;
		gfloat _tmp1_ = 0.0F;
#line 90 "../plugins/pip/SelectionArea.vala"
		clutter_event_get_coords (e, &_tmp0_, &_tmp1_);
#line 90 "../plugins/pip/SelectionArea.vala"
		event_x = _tmp0_;
#line 90 "../plugins/pip/SelectionArea.vala"
		event_y = _tmp1_;
#line 91 "../plugins/pip/SelectionArea.vala"
		g_signal_emit (self, gala_plugins_pip_selection_area_signals[GALA_PLUGINS_PIP_SELECTION_AREA_SELECTED_SIGNAL], 0, (gint) event_x, (gint) event_y);
#line 92 "../plugins/pip/SelectionArea.vala"
		gala_plugins_pip_selection_area_close (self);
#line 93 "../plugins/pip/SelectionArea.vala"
		result = TRUE;
#line 93 "../plugins/pip/SelectionArea.vala"
		return result;
#line 278 "SelectionArea.c"
	}
#line 96 "../plugins/pip/SelectionArea.vala"
	self->priv->dragging = FALSE;
#line 97 "../plugins/pip/SelectionArea.vala"
	self->priv->clicked = FALSE;
#line 100 "../plugins/pip/SelectionArea.vala"
	gala_plugins_pip_selection_area_get_selection_rectangle (self, &_tmp2_, &_tmp3_, &_tmp4_, &_tmp5_);
#line 100 "../plugins/pip/SelectionArea.vala"
	x = _tmp2_;
#line 100 "../plugins/pip/SelectionArea.vala"
	y = _tmp3_;
#line 100 "../plugins/pip/SelectionArea.vala"
	w = _tmp4_;
#line 100 "../plugins/pip/SelectionArea.vala"
	h = _tmp5_;
#line 101 "../plugins/pip/SelectionArea.vala"
	gala_plugins_pip_selection_area_close (self);
#line 102 "../plugins/pip/SelectionArea.vala"
	_tmp6_.x = 0;
#line 102 "../plugins/pip/SelectionArea.vala"
	_tmp6_.y = 0;
#line 102 "../plugins/pip/SelectionArea.vala"
	self->priv->start_point = _tmp6_;
#line 103 "../plugins/pip/SelectionArea.vala"
	_tmp7_.x = 0;
#line 103 "../plugins/pip/SelectionArea.vala"
	_tmp7_.y = 0;
#line 103 "../plugins/pip/SelectionArea.vala"
	self->priv->end_point = _tmp7_;
#line 104 "../plugins/pip/SelectionArea.vala"
	clutter_actor_hide ((ClutterActor*) self);
#line 105 "../plugins/pip/SelectionArea.vala"
	_tmp8_ = clutter_actor_get_content ((ClutterActor*) self);
#line 105 "../plugins/pip/SelectionArea.vala"
	_tmp9_ = _tmp8_;
#line 105 "../plugins/pip/SelectionArea.vala"
	clutter_content_invalidate (_tmp9_);
#line 107 "../plugins/pip/SelectionArea.vala"
	g_signal_emit (self, gala_plugins_pip_selection_area_signals[GALA_PLUGINS_PIP_SELECTION_AREA_CAPTURED_SIGNAL], 0, x, y, w, h);
#line 109 "../plugins/pip/SelectionArea.vala"
	result = TRUE;
#line 109 "../plugins/pip/SelectionArea.vala"
	return result;
#line 322 "SelectionArea.c"
}

static gboolean
gala_plugins_pip_selection_area_real_motion_event (ClutterActor* base,
                                                   ClutterEvent* e)
{
	GalaPluginsPIPSelectionArea * self;
	gfloat press_x = 0.0F;
	gfloat press_y = 0.0F;
	gfloat _tmp0_ = 0.0F;
	gfloat _tmp1_ = 0.0F;
	GdkPoint _tmp2_ = {0};
	ClutterContent* _tmp3_;
	ClutterContent* _tmp4_;
	gboolean result;
#line 113 "../plugins/pip/SelectionArea.vala"
	self = (GalaPluginsPIPSelectionArea*) base;
#line 113 "../plugins/pip/SelectionArea.vala"
	g_return_val_if_fail (e != NULL, FALSE);
#line 117 "../plugins/pip/SelectionArea.vala"
	if (!self->priv->clicked) {
#line 118 "../plugins/pip/SelectionArea.vala"
		result = TRUE;
#line 118 "../plugins/pip/SelectionArea.vala"
		return result;
#line 348 "SelectionArea.c"
	}
#line 122 "../plugins/pip/SelectionArea.vala"
	clutter_event_get_coords (e, &_tmp0_, &_tmp1_);
#line 122 "../plugins/pip/SelectionArea.vala"
	press_x = _tmp0_;
#line 122 "../plugins/pip/SelectionArea.vala"
	press_y = _tmp1_;
#line 123 "../plugins/pip/SelectionArea.vala"
	_tmp2_.x = (gint) press_x;
#line 123 "../plugins/pip/SelectionArea.vala"
	_tmp2_.y = (gint) press_y;
#line 123 "../plugins/pip/SelectionArea.vala"
	self->priv->end_point = _tmp2_;
#line 124 "../plugins/pip/SelectionArea.vala"
	_tmp3_ = clutter_actor_get_content ((ClutterActor*) self);
#line 124 "../plugins/pip/SelectionArea.vala"
	_tmp4_ = _tmp3_;
#line 124 "../plugins/pip/SelectionArea.vala"
	clutter_content_invalidate (_tmp4_);
#line 126 "../plugins/pip/SelectionArea.vala"
	if (!self->priv->dragging) {
#line 127 "../plugins/pip/SelectionArea.vala"
		self->priv->dragging = TRUE;
#line 372 "SelectionArea.c"
	}
#line 130 "../plugins/pip/SelectionArea.vala"
	result = TRUE;
#line 130 "../plugins/pip/SelectionArea.vala"
	return result;
#line 378 "SelectionArea.c"
}

void
gala_plugins_pip_selection_area_close (GalaPluginsPIPSelectionArea* self)
{
	GalaWindowManager* _tmp0_;
	MetaDisplay* _tmp1_;
	GalaModalProxy* _tmp2_;
#line 133 "../plugins/pip/SelectionArea.vala"
	g_return_if_fail (self != NULL);
#line 134 "../plugins/pip/SelectionArea.vala"
	_tmp0_ = self->priv->_wm;
#line 134 "../plugins/pip/SelectionArea.vala"
	_tmp1_ = meta_plugin_get_display ((MetaPlugin*) _tmp0_);
#line 134 "../plugins/pip/SelectionArea.vala"
	meta_display_set_cursor (_tmp1_, META_CURSOR_DEFAULT);
#line 136 "../plugins/pip/SelectionArea.vala"
	_tmp2_ = self->priv->modal_proxy;
#line 136 "../plugins/pip/SelectionArea.vala"
	if (_tmp2_ != NULL) {
#line 399 "SelectionArea.c"
		GalaWindowManager* _tmp3_;
		GalaModalProxy* _tmp4_;
#line 137 "../plugins/pip/SelectionArea.vala"
		_tmp3_ = self->priv->_wm;
#line 137 "../plugins/pip/SelectionArea.vala"
		_tmp4_ = self->priv->modal_proxy;
#line 137 "../plugins/pip/SelectionArea.vala"
		gala_window_manager_pop_modal (_tmp3_, _tmp4_);
#line 408 "SelectionArea.c"
	}
}

void
gala_plugins_pip_selection_area_start_selection (GalaPluginsPIPSelectionArea* self)
{
	GalaWindowManager* _tmp0_;
	MetaDisplay* _tmp1_;
	GalaWindowManager* _tmp2_;
	GalaModalProxy* _tmp3_;
#line 141 "../plugins/pip/SelectionArea.vala"
	g_return_if_fail (self != NULL);
#line 142 "../plugins/pip/SelectionArea.vala"
	_tmp0_ = self->priv->_wm;
#line 142 "../plugins/pip/SelectionArea.vala"
	_tmp1_ = meta_plugin_get_display ((MetaPlugin*) _tmp0_);
#line 142 "../plugins/pip/SelectionArea.vala"
	meta_display_set_cursor (_tmp1_, META_CURSOR_CROSSHAIR);
#line 143 "../plugins/pip/SelectionArea.vala"
	clutter_actor_grab_key_focus ((ClutterActor*) self);
#line 145 "../plugins/pip/SelectionArea.vala"
	_tmp2_ = self->priv->_wm;
#line 145 "../plugins/pip/SelectionArea.vala"
	_tmp3_ = gala_window_manager_push_modal (_tmp2_, (ClutterActor*) self);
#line 145 "../plugins/pip/SelectionArea.vala"
	_g_object_unref0 (self->priv->modal_proxy);
#line 145 "../plugins/pip/SelectionArea.vala"
	self->priv->modal_proxy = _tmp3_;
#line 437 "SelectionArea.c"
}

static void
gala_plugins_pip_selection_area_get_selection_rectangle (GalaPluginsPIPSelectionArea* self,
                                                         gint* x,
                                                         gint* y,
                                                         gint* width,
                                                         gint* height)
{
	gint _vala_x = 0;
	gint _vala_y = 0;
	gint _vala_width = 0;
	gint _vala_height = 0;
	GdkPoint _tmp0_;
	GdkPoint _tmp1_;
	GdkPoint _tmp2_;
	GdkPoint _tmp3_;
	GdkPoint _tmp4_;
	GdkPoint _tmp5_;
	GdkPoint _tmp6_;
	GdkPoint _tmp7_;
#line 148 "../plugins/pip/SelectionArea.vala"
	g_return_if_fail (self != NULL);
#line 149 "../plugins/pip/SelectionArea.vala"
	_tmp0_ = self->priv->start_point;
#line 149 "../plugins/pip/SelectionArea.vala"
	_tmp1_ = self->priv->end_point;
#line 149 "../plugins/pip/SelectionArea.vala"
	_vala_x = MIN (_tmp0_.x, _tmp1_.x);
#line 150 "../plugins/pip/SelectionArea.vala"
	_tmp2_ = self->priv->start_point;
#line 150 "../plugins/pip/SelectionArea.vala"
	_tmp3_ = self->priv->end_point;
#line 150 "../plugins/pip/SelectionArea.vala"
	_vala_y = MIN (_tmp2_.y, _tmp3_.y);
#line 151 "../plugins/pip/SelectionArea.vala"
	_tmp4_ = self->priv->start_point;
#line 151 "../plugins/pip/SelectionArea.vala"
	_tmp5_ = self->priv->end_point;
#line 151 "../plugins/pip/SelectionArea.vala"
	_vala_width = abs (_tmp4_.x - _tmp5_.x);
#line 152 "../plugins/pip/SelectionArea.vala"
	_tmp6_ = self->priv->start_point;
#line 152 "../plugins/pip/SelectionArea.vala"
	_tmp7_ = self->priv->end_point;
#line 152 "../plugins/pip/SelectionArea.vala"
	_vala_height = abs (_tmp6_.y - _tmp7_.y);
#line 148 "../plugins/pip/SelectionArea.vala"
	if (x) {
#line 148 "../plugins/pip/SelectionArea.vala"
		*x = _vala_x;
#line 489 "SelectionArea.c"
	}
#line 148 "../plugins/pip/SelectionArea.vala"
	if (y) {
#line 148 "../plugins/pip/SelectionArea.vala"
		*y = _vala_y;
#line 495 "SelectionArea.c"
	}
#line 148 "../plugins/pip/SelectionArea.vala"
	if (width) {
#line 148 "../plugins/pip/SelectionArea.vala"
		*width = _vala_width;
#line 501 "SelectionArea.c"
	}
#line 148 "../plugins/pip/SelectionArea.vala"
	if (height) {
#line 148 "../plugins/pip/SelectionArea.vala"
		*height = _vala_height;
#line 507 "SelectionArea.c"
	}
}

static void
gala_plugins_pip_selection_area_real_draw (GalaCanvasActor* base,
                                           cairo_t* ctx,
                                           gint width,
                                           gint height)
{
	GalaPluginsPIPSelectionArea * self;
	gint x = 0;
	gint y = 0;
	gint w = 0;
	gint h = 0;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	gint _tmp3_ = 0;
#line 155 "../plugins/pip/SelectionArea.vala"
	self = (GalaPluginsPIPSelectionArea*) base;
#line 155 "../plugins/pip/SelectionArea.vala"
	g_return_if_fail (ctx != NULL);
#line 156 "../plugins/pip/SelectionArea.vala"
	cairo_save (ctx);
#line 158 "../plugins/pip/SelectionArea.vala"
	cairo_set_operator (ctx, CAIRO_OPERATOR_CLEAR);
#line 159 "../plugins/pip/SelectionArea.vala"
	cairo_paint (ctx);
#line 161 "../plugins/pip/SelectionArea.vala"
	cairo_restore (ctx);
#line 163 "../plugins/pip/SelectionArea.vala"
	if (!self->priv->dragging) {
#line 164 "../plugins/pip/SelectionArea.vala"
		return;
#line 542 "SelectionArea.c"
	}
#line 168 "../plugins/pip/SelectionArea.vala"
	gala_plugins_pip_selection_area_get_selection_rectangle (self, &_tmp0_, &_tmp1_, &_tmp2_, &_tmp3_);
#line 168 "../plugins/pip/SelectionArea.vala"
	x = _tmp0_;
#line 168 "../plugins/pip/SelectionArea.vala"
	y = _tmp1_;
#line 168 "../plugins/pip/SelectionArea.vala"
	w = _tmp2_;
#line 168 "../plugins/pip/SelectionArea.vala"
	h = _tmp3_;
#line 170 "../plugins/pip/SelectionArea.vala"
	cairo_rectangle (ctx, (gdouble) x, (gdouble) y, (gdouble) w, (gdouble) h);
#line 171 "../plugins/pip/SelectionArea.vala"
	cairo_set_source_rgba (ctx, 0.1, 0.1, 0.1, 0.2);
#line 172 "../plugins/pip/SelectionArea.vala"
	cairo_fill (ctx);
#line 174 "../plugins/pip/SelectionArea.vala"
	cairo_rectangle (ctx, (gdouble) x, (gdouble) y, (gdouble) w, (gdouble) h);
#line 175 "../plugins/pip/SelectionArea.vala"
	cairo_set_source_rgb (ctx, 0.7, 0.7, 0.7);
#line 176 "../plugins/pip/SelectionArea.vala"
	cairo_set_line_width (ctx, 1.0);
#line 177 "../plugins/pip/SelectionArea.vala"
	cairo_stroke (ctx);
#line 568 "SelectionArea.c"
}

GalaWindowManager*
gala_plugins_pip_selection_area_get_wm (GalaPluginsPIPSelectionArea* self)
{
	GalaWindowManager* result;
	GalaWindowManager* _tmp0_;
#line 23 "../plugins/pip/SelectionArea.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 23 "../plugins/pip/SelectionArea.vala"
	_tmp0_ = self->priv->_wm;
#line 23 "../plugins/pip/SelectionArea.vala"
	result = _tmp0_;
#line 23 "../plugins/pip/SelectionArea.vala"
	return result;
#line 584 "SelectionArea.c"
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 23 "../plugins/pip/SelectionArea.vala"
	return self ? g_object_ref (self) : NULL;
#line 592 "SelectionArea.c"
}

static void
gala_plugins_pip_selection_area_set_wm (GalaPluginsPIPSelectionArea* self,
                                        GalaWindowManager* value)
{
	GalaWindowManager* old_value;
#line 23 "../plugins/pip/SelectionArea.vala"
	g_return_if_fail (self != NULL);
#line 23 "../plugins/pip/SelectionArea.vala"
	old_value = gala_plugins_pip_selection_area_get_wm (self);
#line 23 "../plugins/pip/SelectionArea.vala"
	if (old_value != value) {
#line 606 "SelectionArea.c"
		GalaWindowManager* _tmp0_;
#line 23 "../plugins/pip/SelectionArea.vala"
		_tmp0_ = _g_object_ref0 (value);
#line 23 "../plugins/pip/SelectionArea.vala"
		_g_object_unref0 (self->priv->_wm);
#line 23 "../plugins/pip/SelectionArea.vala"
		self->priv->_wm = _tmp0_;
#line 23 "../plugins/pip/SelectionArea.vala"
		g_object_notify_by_pspec ((GObject *) self, gala_plugins_pip_selection_area_properties[GALA_PLUGINS_PIP_SELECTION_AREA_WM_PROPERTY]);
#line 616 "SelectionArea.c"
	}
}

static void
g_cclosure_user_marshal_VOID__INT_INT_INT_INT (GClosure * closure,
                                               GValue * return_value,
                                               guint n_param_values,
                                               const GValue * param_values,
                                               gpointer invocation_hint,
                                               gpointer marshal_data)
{
	typedef void (*GMarshalFunc_VOID__INT_INT_INT_INT) (gpointer data1, gint arg_1, gint arg_2, gint arg_3, gint arg_4, gpointer data2);
	register GMarshalFunc_VOID__INT_INT_INT_INT callback;
	register GCClosure * cc;
	register gpointer data1;
	register gpointer data2;
	cc = (GCClosure *) closure;
#line 18 "../plugins/pip/SelectionArea.vala"
	g_return_if_fail (n_param_values == 5);
#line 18 "../plugins/pip/SelectionArea.vala"
	if (G_CCLOSURE_SWAP_DATA (closure)) {
#line 18 "../plugins/pip/SelectionArea.vala"
		data1 = closure->data;
#line 18 "../plugins/pip/SelectionArea.vala"
		data2 = param_values->data[0].v_pointer;
#line 642 "SelectionArea.c"
	} else {
#line 18 "../plugins/pip/SelectionArea.vala"
		data1 = param_values->data[0].v_pointer;
#line 18 "../plugins/pip/SelectionArea.vala"
		data2 = closure->data;
#line 648 "SelectionArea.c"
	}
#line 18 "../plugins/pip/SelectionArea.vala"
	callback = (GMarshalFunc_VOID__INT_INT_INT_INT) (marshal_data ? marshal_data : cc->callback);
#line 18 "../plugins/pip/SelectionArea.vala"
	callback (data1, g_value_get_int (param_values + 1), g_value_get_int (param_values + 2), g_value_get_int (param_values + 3), g_value_get_int (param_values + 4), data2);
#line 654 "SelectionArea.c"
}

static void
g_cclosure_user_marshal_VOID__INT_INT (GClosure * closure,
                                       GValue * return_value,
                                       guint n_param_values,
                                       const GValue * param_values,
                                       gpointer invocation_hint,
                                       gpointer marshal_data)
{
	typedef void (*GMarshalFunc_VOID__INT_INT) (gpointer data1, gint arg_1, gint arg_2, gpointer data2);
	register GMarshalFunc_VOID__INT_INT callback;
	register GCClosure * cc;
	register gpointer data1;
	register gpointer data2;
	cc = (GCClosure *) closure;
#line 18 "../plugins/pip/SelectionArea.vala"
	g_return_if_fail (n_param_values == 3);
#line 18 "../plugins/pip/SelectionArea.vala"
	if (G_CCLOSURE_SWAP_DATA (closure)) {
#line 18 "../plugins/pip/SelectionArea.vala"
		data1 = closure->data;
#line 18 "../plugins/pip/SelectionArea.vala"
		data2 = param_values->data[0].v_pointer;
#line 679 "SelectionArea.c"
	} else {
#line 18 "../plugins/pip/SelectionArea.vala"
		data1 = param_values->data[0].v_pointer;
#line 18 "../plugins/pip/SelectionArea.vala"
		data2 = closure->data;
#line 685 "SelectionArea.c"
	}
#line 18 "../plugins/pip/SelectionArea.vala"
	callback = (GMarshalFunc_VOID__INT_INT) (marshal_data ? marshal_data : cc->callback);
#line 18 "../plugins/pip/SelectionArea.vala"
	callback (data1, g_value_get_int (param_values + 1), g_value_get_int (param_values + 2), data2);
#line 691 "SelectionArea.c"
}

static GObject *
gala_plugins_pip_selection_area_constructor (GType type,
                                             guint n_construct_properties,
                                             GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	GalaPluginsPIPSelectionArea * self;
	GdkPoint _tmp0_ = {0};
	GdkPoint _tmp1_ = {0};
	gint screen_width = 0;
	gint screen_height = 0;
	GalaWindowManager* _tmp2_;
	MetaDisplay* _tmp3_;
	gint _tmp4_ = 0;
	gint _tmp5_ = 0;
#line 35 "../plugins/pip/SelectionArea.vala"
	parent_class = G_OBJECT_CLASS (gala_plugins_pip_selection_area_parent_class);
#line 35 "../plugins/pip/SelectionArea.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 35 "../plugins/pip/SelectionArea.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_PLUGINS_PIP_TYPE_SELECTION_AREA, GalaPluginsPIPSelectionArea);
#line 36 "../plugins/pip/SelectionArea.vala"
	_tmp0_.x = 0;
#line 36 "../plugins/pip/SelectionArea.vala"
	_tmp0_.y = 0;
#line 36 "../plugins/pip/SelectionArea.vala"
	self->priv->start_point = _tmp0_;
#line 37 "../plugins/pip/SelectionArea.vala"
	_tmp1_.x = 0;
#line 37 "../plugins/pip/SelectionArea.vala"
	_tmp1_.y = 0;
#line 37 "../plugins/pip/SelectionArea.vala"
	self->priv->end_point = _tmp1_;
#line 38 "../plugins/pip/SelectionArea.vala"
	g_object_set ((ClutterActor*) self, "visible", TRUE, NULL);
#line 39 "../plugins/pip/SelectionArea.vala"
	clutter_actor_set_reactive ((ClutterActor*) self, TRUE);
#line 42 "../plugins/pip/SelectionArea.vala"
	_tmp2_ = self->priv->_wm;
#line 42 "../plugins/pip/SelectionArea.vala"
	_tmp3_ = meta_plugin_get_display ((MetaPlugin*) _tmp2_);
#line 42 "../plugins/pip/SelectionArea.vala"
	meta_display_get_size (_tmp3_, &_tmp4_, &_tmp5_);
#line 42 "../plugins/pip/SelectionArea.vala"
	screen_width = _tmp4_;
#line 42 "../plugins/pip/SelectionArea.vala"
	screen_height = _tmp5_;
#line 43 "../plugins/pip/SelectionArea.vala"
	clutter_actor_set_width ((ClutterActor*) self, (gfloat) screen_width);
#line 44 "../plugins/pip/SelectionArea.vala"
	clutter_actor_set_height ((ClutterActor*) self, (gfloat) screen_height);
#line 35 "../plugins/pip/SelectionArea.vala"
	return obj;
#line 748 "SelectionArea.c"
}

static void
gala_plugins_pip_selection_area_class_init (GalaPluginsPIPSelectionAreaClass * klass,
                                            gpointer klass_data)
{
#line 18 "../plugins/pip/SelectionArea.vala"
	gala_plugins_pip_selection_area_parent_class = g_type_class_peek_parent (klass);
#line 18 "../plugins/pip/SelectionArea.vala"
	g_type_class_adjust_private_offset (klass, &GalaPluginsPIPSelectionArea_private_offset);
#line 18 "../plugins/pip/SelectionArea.vala"
	((ClutterActorClass *) klass)->key_press_event = (gboolean (*) (ClutterActor*, ClutterEvent*)) gala_plugins_pip_selection_area_real_key_press_event;
#line 18 "../plugins/pip/SelectionArea.vala"
	((ClutterActorClass *) klass)->button_press_event = (gboolean (*) (ClutterActor*, ClutterEvent*)) gala_plugins_pip_selection_area_real_button_press_event;
#line 18 "../plugins/pip/SelectionArea.vala"
	((ClutterActorClass *) klass)->button_release_event = (gboolean (*) (ClutterActor*, ClutterEvent*)) gala_plugins_pip_selection_area_real_button_release_event;
#line 18 "../plugins/pip/SelectionArea.vala"
	((ClutterActorClass *) klass)->motion_event = (gboolean (*) (ClutterActor*, ClutterEvent*)) gala_plugins_pip_selection_area_real_motion_event;
#line 18 "../plugins/pip/SelectionArea.vala"
	((GalaCanvasActorClass *) klass)->draw = (void (*) (GalaCanvasActor*, cairo_t*, gint, gint)) gala_plugins_pip_selection_area_real_draw;
#line 18 "../plugins/pip/SelectionArea.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_gala_plugins_pip_selection_area_get_property;
#line 18 "../plugins/pip/SelectionArea.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_gala_plugins_pip_selection_area_set_property;
#line 18 "../plugins/pip/SelectionArea.vala"
	G_OBJECT_CLASS (klass)->constructor = gala_plugins_pip_selection_area_constructor;
#line 18 "../plugins/pip/SelectionArea.vala"
	G_OBJECT_CLASS (klass)->finalize = gala_plugins_pip_selection_area_finalize;
#line 18 "../plugins/pip/SelectionArea.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_PLUGINS_PIP_SELECTION_AREA_WM_PROPERTY, gala_plugins_pip_selection_area_properties[GALA_PLUGINS_PIP_SELECTION_AREA_WM_PROPERTY] = g_param_spec_object ("wm", "wm", "wm", GALA_TYPE_WINDOW_MANAGER, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 18 "../plugins/pip/SelectionArea.vala"
	gala_plugins_pip_selection_area_signals[GALA_PLUGINS_PIP_SELECTION_AREA_CAPTURED_SIGNAL] = g_signal_new ("captured", GALA_PLUGINS_PIP_TYPE_SELECTION_AREA, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__INT_INT_INT_INT, G_TYPE_NONE, 4, G_TYPE_INT, G_TYPE_INT, G_TYPE_INT, G_TYPE_INT);
#line 18 "../plugins/pip/SelectionArea.vala"
	gala_plugins_pip_selection_area_signals[GALA_PLUGINS_PIP_SELECTION_AREA_SELECTED_SIGNAL] = g_signal_new ("selected", GALA_PLUGINS_PIP_TYPE_SELECTION_AREA, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__INT_INT, G_TYPE_NONE, 2, G_TYPE_INT, G_TYPE_INT);
#line 18 "../plugins/pip/SelectionArea.vala"
	gala_plugins_pip_selection_area_signals[GALA_PLUGINS_PIP_SELECTION_AREA_CLOSED_SIGNAL] = g_signal_new ("closed", GALA_PLUGINS_PIP_TYPE_SELECTION_AREA, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
#line 785 "SelectionArea.c"
}

static void
gala_plugins_pip_selection_area_instance_init (GalaPluginsPIPSelectionArea * self,
                                               gpointer klass)
{
#line 18 "../plugins/pip/SelectionArea.vala"
	self->priv = gala_plugins_pip_selection_area_get_instance_private (self);
#line 28 "../plugins/pip/SelectionArea.vala"
	self->priv->dragging = FALSE;
#line 29 "../plugins/pip/SelectionArea.vala"
	self->priv->clicked = FALSE;
#line 798 "SelectionArea.c"
}

static void
gala_plugins_pip_selection_area_finalize (GObject * obj)
{
	GalaPluginsPIPSelectionArea * self;
#line 18 "../plugins/pip/SelectionArea.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_PLUGINS_PIP_TYPE_SELECTION_AREA, GalaPluginsPIPSelectionArea);
#line 23 "../plugins/pip/SelectionArea.vala"
	_g_object_unref0 (self->priv->_wm);
#line 25 "../plugins/pip/SelectionArea.vala"
	_g_object_unref0 (self->priv->modal_proxy);
#line 18 "../plugins/pip/SelectionArea.vala"
	G_OBJECT_CLASS (gala_plugins_pip_selection_area_parent_class)->finalize (obj);
#line 813 "SelectionArea.c"
}

 G_GNUC_NO_INLINE static GType
gala_plugins_pip_selection_area_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GalaPluginsPIPSelectionAreaClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gala_plugins_pip_selection_area_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GalaPluginsPIPSelectionArea), 0, (GInstanceInitFunc) gala_plugins_pip_selection_area_instance_init, NULL };
	GType gala_plugins_pip_selection_area_type_id;
	gala_plugins_pip_selection_area_type_id = g_type_register_static (GALA_TYPE_CANVAS_ACTOR, "GalaPluginsPIPSelectionArea", &g_define_type_info, 0);
	GalaPluginsPIPSelectionArea_private_offset = g_type_add_instance_private (gala_plugins_pip_selection_area_type_id, sizeof (GalaPluginsPIPSelectionAreaPrivate));
	return gala_plugins_pip_selection_area_type_id;
}

GType
gala_plugins_pip_selection_area_get_type (void)
{
	static gsize gala_plugins_pip_selection_area_type_id__once = 0;
	if (g_once_init_enter (&gala_plugins_pip_selection_area_type_id__once)) {
		GType gala_plugins_pip_selection_area_type_id;
		gala_plugins_pip_selection_area_type_id = gala_plugins_pip_selection_area_get_type_once ();
		g_once_init_leave (&gala_plugins_pip_selection_area_type_id__once, gala_plugins_pip_selection_area_type_id);
	}
	return gala_plugins_pip_selection_area_type_id__once;
}

static void
_vala_gala_plugins_pip_selection_area_get_property (GObject * object,
                                                    guint property_id,
                                                    GValue * value,
                                                    GParamSpec * pspec)
{
	GalaPluginsPIPSelectionArea * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_PLUGINS_PIP_TYPE_SELECTION_AREA, GalaPluginsPIPSelectionArea);
#line 18 "../plugins/pip/SelectionArea.vala"
	switch (property_id) {
#line 18 "../plugins/pip/SelectionArea.vala"
		case GALA_PLUGINS_PIP_SELECTION_AREA_WM_PROPERTY:
#line 18 "../plugins/pip/SelectionArea.vala"
		g_value_set_object (value, gala_plugins_pip_selection_area_get_wm (self));
#line 18 "../plugins/pip/SelectionArea.vala"
		break;
#line 854 "SelectionArea.c"
		default:
#line 18 "../plugins/pip/SelectionArea.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 18 "../plugins/pip/SelectionArea.vala"
		break;
#line 860 "SelectionArea.c"
	}
}

static void
_vala_gala_plugins_pip_selection_area_set_property (GObject * object,
                                                    guint property_id,
                                                    const GValue * value,
                                                    GParamSpec * pspec)
{
	GalaPluginsPIPSelectionArea * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_PLUGINS_PIP_TYPE_SELECTION_AREA, GalaPluginsPIPSelectionArea);
#line 18 "../plugins/pip/SelectionArea.vala"
	switch (property_id) {
#line 18 "../plugins/pip/SelectionArea.vala"
		case GALA_PLUGINS_PIP_SELECTION_AREA_WM_PROPERTY:
#line 18 "../plugins/pip/SelectionArea.vala"
		gala_plugins_pip_selection_area_set_wm (self, g_value_get_object (value));
#line 18 "../plugins/pip/SelectionArea.vala"
		break;
#line 880 "SelectionArea.c"
		default:
#line 18 "../plugins/pip/SelectionArea.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 18 "../plugins/pip/SelectionArea.vala"
		break;
#line 886 "SelectionArea.c"
	}
}

