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

#include "gala.h"
#include <glib-object.h>
#include <glib.h>
#include <graphene-gobject.h>
#include <clutter/clutter.h>
#include <cairo-gobject.h>
#include <float.h>
#include <math.h>
#include <meta/meta-plugin.h>
#include <meta/display.h>
#include <meta/common.h>
#include <string.h>

#if !defined(VALA_STRICT_C)
#if !defined(__clang__) && defined(__GNUC__) && (__GNUC__ >= 14)
#pragma GCC diagnostic warning "-Wincompatible-pointer-types"
#elif defined(__clang__) && (__clang_major__ >= 16)
#pragma clang diagnostic ignored "-Wincompatible-function-pointer-types"
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#endif
#endif
#if !defined(VALA_EXTERN)
#if defined(_MSC_VER)
#define VALA_EXTERN __declspec(dllexport) extern
#elif __GNUC__ >= 4
#define VALA_EXTERN __attribute__((visibility("default"))) extern
#else
#define VALA_EXTERN extern
#endif
#endif

#define GALA_TYPE_SELECTION_AREA (gala_selection_area_get_type ())
#define GALA_SELECTION_AREA(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GALA_TYPE_SELECTION_AREA, GalaSelectionArea))
#define GALA_SELECTION_AREA_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GALA_TYPE_SELECTION_AREA, GalaSelectionAreaClass))
#define GALA_IS_SELECTION_AREA(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GALA_TYPE_SELECTION_AREA))
#define GALA_IS_SELECTION_AREA_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GALA_TYPE_SELECTION_AREA))
#define GALA_SELECTION_AREA_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GALA_TYPE_SELECTION_AREA, GalaSelectionAreaClass))

typedef struct _GalaSelectionArea GalaSelectionArea;
typedef struct _GalaSelectionAreaClass GalaSelectionAreaClass;
typedef struct _GalaSelectionAreaPrivate GalaSelectionAreaPrivate;
enum  {
	GALA_SELECTION_AREA_0_PROPERTY,
	GALA_SELECTION_AREA_WM_PROPERTY,
	GALA_SELECTION_AREA_CANCELLED_PROPERTY,
	GALA_SELECTION_AREA_NUM_PROPERTIES
};
static GParamSpec* gala_selection_area_properties[GALA_SELECTION_AREA_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
enum  {
	GALA_SELECTION_AREA_CLOSED_SIGNAL,
	GALA_SELECTION_AREA_NUM_SIGNALS
};
static guint gala_selection_area_signals[GALA_SELECTION_AREA_NUM_SIGNALS] = {0};

struct _GalaSelectionArea {
	GalaCanvasActor parent_instance;
	GalaSelectionAreaPrivate * priv;
};

struct _GalaSelectionAreaClass {
	GalaCanvasActorClass parent_class;
};

struct _GalaSelectionAreaPrivate {
	GalaWindowManager* _wm;
	gboolean _cancelled;
	GalaModalProxy* modal_proxy;
	graphene_point_t start_point;
	graphene_point_t end_point;
	gboolean dragging;
	gboolean clicked;
};

static gint GalaSelectionArea_private_offset;
static gpointer gala_selection_area_parent_class = NULL;

VALA_EXTERN GType gala_selection_area_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GalaSelectionArea, g_object_unref)
VALA_EXTERN GalaSelectionArea* gala_selection_area_new (GalaWindowManager* wm);
VALA_EXTERN GalaSelectionArea* gala_selection_area_construct (GType object_type,
                                                  GalaWindowManager* wm);
static gboolean gala_selection_area_real_key_press_event (ClutterActor* base,
                                                   ClutterEvent* e);
VALA_EXTERN void gala_selection_area_close (GalaSelectionArea* self);
static void gala_selection_area_set_cancelled (GalaSelectionArea* self,
                                        gboolean value);
static gboolean gala_selection_area_real_button_press_event (ClutterActor* base,
                                                      ClutterEvent* e);
static gboolean gala_selection_area_real_button_release_event (ClutterActor* base,
                                                        ClutterEvent* e);
static gboolean gala_selection_area_real_motion_event (ClutterActor* base,
                                                ClutterEvent* e);
VALA_EXTERN GalaWindowManager* gala_selection_area_get_wm (GalaSelectionArea* self);
VALA_EXTERN void gala_selection_area_start_selection (GalaSelectionArea* self);
VALA_EXTERN void gala_selection_area_get_selection_rectangle (GalaSelectionArea* self,
                                                  graphene_rect_t* result);
static void gala_selection_area_real_draw (GalaCanvasActor* base,
                                    cairo_t* ctx,
                                    gint width,
                                    gint height);
static void gala_selection_area_set_wm (GalaSelectionArea* self,
                                 GalaWindowManager* value);
VALA_EXTERN gboolean gala_selection_area_get_cancelled (GalaSelectionArea* self);
static GObject * gala_selection_area_constructor (GType type,
                                           guint n_construct_properties,
                                           GObjectConstructParam * construct_properties);
static void gala_selection_area_finalize (GObject * obj);
static GType gala_selection_area_get_type_once (void);
static void _vala_gala_selection_area_get_property (GObject * object,
                                             guint property_id,
                                             GValue * value,
                                             GParamSpec * pspec);
static void _vala_gala_selection_area_set_property (GObject * object,
                                             guint property_id,
                                             const GValue * value,
                                             GParamSpec * pspec);

static inline gpointer
gala_selection_area_get_instance_private (GalaSelectionArea* self)
{
	return G_STRUCT_MEMBER_P (self, GalaSelectionArea_private_offset);
}

GalaSelectionArea*
gala_selection_area_construct (GType object_type,
                               GalaWindowManager* wm)
{
	GalaSelectionArea * self = NULL;
#line 32 "../src/Widgets/SelectionArea.vala"
	g_return_val_if_fail (wm != NULL, NULL);
#line 33 "../src/Widgets/SelectionArea.vala"
	self = (GalaSelectionArea*) g_object_new (object_type, "wm", wm, NULL);
#line 32 "../src/Widgets/SelectionArea.vala"
	return self;
#line 157 "SelectionArea.c"
}

GalaSelectionArea*
gala_selection_area_new (GalaWindowManager* wm)
{
#line 32 "../src/Widgets/SelectionArea.vala"
	return gala_selection_area_construct (GALA_TYPE_SELECTION_AREA, wm);
#line 165 "SelectionArea.c"
}

static gboolean
gala_selection_area_real_key_press_event (ClutterActor* base,
                                          ClutterEvent* e)
{
	GalaSelectionArea * self;
	gboolean result;
#line 49 "../src/Widgets/SelectionArea.vala"
	self = (GalaSelectionArea*) base;
#line 49 "../src/Widgets/SelectionArea.vala"
	g_return_val_if_fail (e != NULL, FALSE);
#line 53 "../src/Widgets/SelectionArea.vala"
	if (clutter_event_get_key_symbol (e) == CLUTTER_KEY_Escape) {
#line 54 "../src/Widgets/SelectionArea.vala"
		gala_selection_area_close (self);
#line 55 "../src/Widgets/SelectionArea.vala"
		gala_selection_area_set_cancelled (self, TRUE);
#line 56 "../src/Widgets/SelectionArea.vala"
		g_signal_emit (self, gala_selection_area_signals[GALA_SELECTION_AREA_CLOSED_SIGNAL], 0);
#line 57 "../src/Widgets/SelectionArea.vala"
		result = TRUE;
#line 57 "../src/Widgets/SelectionArea.vala"
		return result;
#line 190 "SelectionArea.c"
	}
#line 60 "../src/Widgets/SelectionArea.vala"
	result = FALSE;
#line 60 "../src/Widgets/SelectionArea.vala"
	return result;
#line 196 "SelectionArea.c"
}

static gboolean
gala_selection_area_real_button_press_event (ClutterActor* base,
                                             ClutterEvent* e)
{
	GalaSelectionArea * self;
	gboolean _tmp0_ = FALSE;
	gfloat x = 0.0F;
	gfloat y = 0.0F;
	gfloat _tmp1_ = 0.0F;
	gfloat _tmp2_ = 0.0F;
	gboolean result;
#line 64 "../src/Widgets/SelectionArea.vala"
	self = (GalaSelectionArea*) base;
#line 64 "../src/Widgets/SelectionArea.vala"
	g_return_val_if_fail (e != NULL, FALSE);
#line 68 "../src/Widgets/SelectionArea.vala"
	if (self->priv->dragging) {
#line 68 "../src/Widgets/SelectionArea.vala"
		_tmp0_ = TRUE;
#line 218 "SelectionArea.c"
	} else {
#line 68 "../src/Widgets/SelectionArea.vala"
		_tmp0_ = clutter_event_get_button (e) != CLUTTER_BUTTON_PRIMARY;
#line 222 "SelectionArea.c"
	}
#line 68 "../src/Widgets/SelectionArea.vala"
	if (_tmp0_) {
#line 69 "../src/Widgets/SelectionArea.vala"
		result = TRUE;
#line 69 "../src/Widgets/SelectionArea.vala"
		return result;
#line 230 "SelectionArea.c"
	}
#line 72 "../src/Widgets/SelectionArea.vala"
	self->priv->clicked = TRUE;
#line 75 "../src/Widgets/SelectionArea.vala"
	clutter_event_get_coords (e, &_tmp1_, &_tmp2_);
#line 75 "../src/Widgets/SelectionArea.vala"
	x = _tmp1_;
#line 75 "../src/Widgets/SelectionArea.vala"
	y = _tmp2_;
#line 76 "../src/Widgets/SelectionArea.vala"
	graphene_point_init (&self->priv->start_point, x, y);
#line 78 "../src/Widgets/SelectionArea.vala"
	result = TRUE;
#line 78 "../src/Widgets/SelectionArea.vala"
	return result;
#line 246 "SelectionArea.c"
}

static gboolean
gala_selection_area_real_button_release_event (ClutterActor* base,
                                               ClutterEvent* e)
{
	GalaSelectionArea * self;
	ClutterContent* _tmp0_;
	ClutterContent* _tmp1_;
	gboolean result;
#line 82 "../src/Widgets/SelectionArea.vala"
	self = (GalaSelectionArea*) base;
#line 82 "../src/Widgets/SelectionArea.vala"
	g_return_val_if_fail (e != NULL, FALSE);
#line 86 "../src/Widgets/SelectionArea.vala"
	if (clutter_event_get_button (e) != CLUTTER_BUTTON_PRIMARY) {
#line 87 "../src/Widgets/SelectionArea.vala"
		result = TRUE;
#line 87 "../src/Widgets/SelectionArea.vala"
		return result;
#line 267 "SelectionArea.c"
	}
#line 90 "../src/Widgets/SelectionArea.vala"
	if (!self->priv->dragging) {
#line 91 "../src/Widgets/SelectionArea.vala"
		gala_selection_area_close (self);
#line 92 "../src/Widgets/SelectionArea.vala"
		gala_selection_area_set_cancelled (self, TRUE);
#line 93 "../src/Widgets/SelectionArea.vala"
		g_signal_emit (self, gala_selection_area_signals[GALA_SELECTION_AREA_CLOSED_SIGNAL], 0);
#line 94 "../src/Widgets/SelectionArea.vala"
		result = TRUE;
#line 94 "../src/Widgets/SelectionArea.vala"
		return result;
#line 281 "SelectionArea.c"
	}
#line 97 "../src/Widgets/SelectionArea.vala"
	self->priv->dragging = FALSE;
#line 98 "../src/Widgets/SelectionArea.vala"
	self->priv->clicked = FALSE;
#line 100 "../src/Widgets/SelectionArea.vala"
	gala_selection_area_close (self);
#line 101 "../src/Widgets/SelectionArea.vala"
	clutter_actor_hide ((ClutterActor*) self);
#line 102 "../src/Widgets/SelectionArea.vala"
	_tmp0_ = clutter_actor_get_content ((ClutterActor*) self);
#line 102 "../src/Widgets/SelectionArea.vala"
	_tmp1_ = _tmp0_;
#line 102 "../src/Widgets/SelectionArea.vala"
	clutter_content_invalidate (_tmp1_);
#line 104 "../src/Widgets/SelectionArea.vala"
	g_signal_emit (self, gala_selection_area_signals[GALA_SELECTION_AREA_CLOSED_SIGNAL], 0);
#line 105 "../src/Widgets/SelectionArea.vala"
	result = TRUE;
#line 105 "../src/Widgets/SelectionArea.vala"
	return result;
#line 303 "SelectionArea.c"
}

static gboolean
gala_selection_area_real_motion_event (ClutterActor* base,
                                       ClutterEvent* e)
{
	GalaSelectionArea * self;
	gfloat x = 0.0F;
	gfloat y = 0.0F;
	gfloat _tmp0_ = 0.0F;
	gfloat _tmp1_ = 0.0F;
	ClutterContent* _tmp2_;
	ClutterContent* _tmp3_;
	gboolean result;
#line 109 "../src/Widgets/SelectionArea.vala"
	self = (GalaSelectionArea*) base;
#line 109 "../src/Widgets/SelectionArea.vala"
	g_return_val_if_fail (e != NULL, FALSE);
#line 113 "../src/Widgets/SelectionArea.vala"
	if (!self->priv->clicked) {
#line 114 "../src/Widgets/SelectionArea.vala"
		result = TRUE;
#line 114 "../src/Widgets/SelectionArea.vala"
		return result;
#line 328 "SelectionArea.c"
	}
#line 118 "../src/Widgets/SelectionArea.vala"
	clutter_event_get_coords (e, &_tmp0_, &_tmp1_);
#line 118 "../src/Widgets/SelectionArea.vala"
	x = _tmp0_;
#line 118 "../src/Widgets/SelectionArea.vala"
	y = _tmp1_;
#line 119 "../src/Widgets/SelectionArea.vala"
	graphene_point_init (&self->priv->end_point, x, y);
#line 120 "../src/Widgets/SelectionArea.vala"
	_tmp2_ = clutter_actor_get_content ((ClutterActor*) self);
#line 120 "../src/Widgets/SelectionArea.vala"
	_tmp3_ = _tmp2_;
#line 120 "../src/Widgets/SelectionArea.vala"
	clutter_content_invalidate (_tmp3_);
#line 122 "../src/Widgets/SelectionArea.vala"
	if (!self->priv->dragging) {
#line 123 "../src/Widgets/SelectionArea.vala"
		self->priv->dragging = TRUE;
#line 348 "SelectionArea.c"
	}
#line 126 "../src/Widgets/SelectionArea.vala"
	result = TRUE;
#line 126 "../src/Widgets/SelectionArea.vala"
	return result;
#line 354 "SelectionArea.c"
}

void
gala_selection_area_close (GalaSelectionArea* self)
{
	GalaWindowManager* _tmp0_;
	MetaDisplay* _tmp1_;
	GalaModalProxy* _tmp2_;
#line 129 "../src/Widgets/SelectionArea.vala"
	g_return_if_fail (self != NULL);
#line 130 "../src/Widgets/SelectionArea.vala"
	_tmp0_ = self->priv->_wm;
#line 130 "../src/Widgets/SelectionArea.vala"
	_tmp1_ = meta_plugin_get_display ((MetaPlugin*) _tmp0_);
#line 130 "../src/Widgets/SelectionArea.vala"
	meta_display_set_cursor (_tmp1_, META_CURSOR_DEFAULT);
#line 132 "../src/Widgets/SelectionArea.vala"
	_tmp2_ = self->priv->modal_proxy;
#line 132 "../src/Widgets/SelectionArea.vala"
	if (_tmp2_ != NULL) {
#line 375 "SelectionArea.c"
		GalaWindowManager* _tmp3_;
		GalaModalProxy* _tmp4_;
#line 133 "../src/Widgets/SelectionArea.vala"
		_tmp3_ = self->priv->_wm;
#line 133 "../src/Widgets/SelectionArea.vala"
		_tmp4_ = self->priv->modal_proxy;
#line 133 "../src/Widgets/SelectionArea.vala"
		gala_window_manager_pop_modal (_tmp3_, _tmp4_);
#line 384 "SelectionArea.c"
	}
}

void
gala_selection_area_start_selection (GalaSelectionArea* self)
{
	GalaWindowManager* _tmp0_;
	MetaDisplay* _tmp1_;
	GalaWindowManager* _tmp2_;
	GalaModalProxy* _tmp3_;
#line 137 "../src/Widgets/SelectionArea.vala"
	g_return_if_fail (self != NULL);
#line 138 "../src/Widgets/SelectionArea.vala"
	_tmp0_ = self->priv->_wm;
#line 138 "../src/Widgets/SelectionArea.vala"
	_tmp1_ = meta_plugin_get_display ((MetaPlugin*) _tmp0_);
#line 138 "../src/Widgets/SelectionArea.vala"
	meta_display_set_cursor (_tmp1_, META_CURSOR_CROSSHAIR);
#line 139 "../src/Widgets/SelectionArea.vala"
	clutter_actor_grab_key_focus ((ClutterActor*) self);
#line 141 "../src/Widgets/SelectionArea.vala"
	_tmp2_ = self->priv->_wm;
#line 141 "../src/Widgets/SelectionArea.vala"
	_tmp3_ = gala_window_manager_push_modal (_tmp2_, (ClutterActor*) self);
#line 141 "../src/Widgets/SelectionArea.vala"
	_g_object_unref0 (self->priv->modal_proxy);
#line 141 "../src/Widgets/SelectionArea.vala"
	self->priv->modal_proxy = _tmp3_;
#line 413 "SelectionArea.c"
}

void
gala_selection_area_get_selection_rectangle (GalaSelectionArea* self,
                                             graphene_rect_t* result)
{
	graphene_point_t _tmp0_;
	graphene_rect_t _tmp1_ = {0};
	graphene_point_t _tmp2_;
	graphene_rect_t _tmp3_ = {0};
#line 144 "../src/Widgets/SelectionArea.vala"
	g_return_if_fail (self != NULL);
#line 145 "../src/Widgets/SelectionArea.vala"
	_tmp0_ = self->priv->start_point;
#line 145 "../src/Widgets/SelectionArea.vala"
	memset (&_tmp1_, 0, sizeof (graphene_rect_t));
#line 145 "../src/Widgets/SelectionArea.vala"
	_tmp1_.origin = _tmp0_;
#line 145 "../src/Widgets/SelectionArea.vala"
	_tmp1_.size = *graphene_size_zero ();
#line 145 "../src/Widgets/SelectionArea.vala"
	_tmp2_ = self->priv->end_point;
#line 145 "../src/Widgets/SelectionArea.vala"
	graphene_rect_expand (&_tmp1_, &_tmp2_, &_tmp3_);
#line 145 "../src/Widgets/SelectionArea.vala"
	*result = _tmp3_;
#line 145 "../src/Widgets/SelectionArea.vala"
	return;
#line 442 "SelectionArea.c"
}

static void
gala_selection_area_real_draw (GalaCanvasActor* base,
                               cairo_t* ctx,
                               gint width,
                               gint height)
{
	GalaSelectionArea * self;
	graphene_rect_t rect = {0};
	graphene_rect_t _tmp0_ = {0};
	graphene_rect_t _tmp1_;
	graphene_point_t _tmp2_;
	graphene_rect_t _tmp3_;
	graphene_point_t _tmp4_;
	graphene_rect_t _tmp5_;
	graphene_size_t _tmp6_;
	graphene_rect_t _tmp7_;
	graphene_size_t _tmp8_;
	graphene_rect_t _tmp9_;
	graphene_point_t _tmp10_;
	graphene_rect_t _tmp11_;
	graphene_point_t _tmp12_;
	graphene_rect_t _tmp13_;
	graphene_size_t _tmp14_;
	graphene_rect_t _tmp15_;
	graphene_size_t _tmp16_;
#line 151 "../src/Widgets/SelectionArea.vala"
	self = (GalaSelectionArea*) base;
#line 151 "../src/Widgets/SelectionArea.vala"
	g_return_if_fail (ctx != NULL);
#line 152 "../src/Widgets/SelectionArea.vala"
	cairo_save (ctx);
#line 154 "../src/Widgets/SelectionArea.vala"
	cairo_set_operator (ctx, CAIRO_OPERATOR_CLEAR);
#line 155 "../src/Widgets/SelectionArea.vala"
	cairo_paint (ctx);
#line 157 "../src/Widgets/SelectionArea.vala"
	cairo_restore (ctx);
#line 159 "../src/Widgets/SelectionArea.vala"
	if (!self->priv->dragging) {
#line 160 "../src/Widgets/SelectionArea.vala"
		return;
#line 486 "SelectionArea.c"
	}
#line 163 "../src/Widgets/SelectionArea.vala"
	cairo_translate (ctx, 0.5, 0.5);
#line 165 "../src/Widgets/SelectionArea.vala"
	gala_selection_area_get_selection_rectangle (self, &_tmp0_);
#line 165 "../src/Widgets/SelectionArea.vala"
	rect = _tmp0_;
#line 166 "../src/Widgets/SelectionArea.vala"
	_tmp1_ = rect;
#line 166 "../src/Widgets/SelectionArea.vala"
	_tmp2_ = _tmp1_.origin;
#line 166 "../src/Widgets/SelectionArea.vala"
	_tmp3_ = rect;
#line 166 "../src/Widgets/SelectionArea.vala"
	_tmp4_ = _tmp3_.origin;
#line 166 "../src/Widgets/SelectionArea.vala"
	_tmp5_ = rect;
#line 166 "../src/Widgets/SelectionArea.vala"
	_tmp6_ = _tmp5_.size;
#line 166 "../src/Widgets/SelectionArea.vala"
	_tmp7_ = rect;
#line 166 "../src/Widgets/SelectionArea.vala"
	_tmp8_ = _tmp7_.size;
#line 166 "../src/Widgets/SelectionArea.vala"
	cairo_rectangle (ctx, (gdouble) _tmp2_.x, (gdouble) _tmp4_.y, (gdouble) _tmp6_.width, (gdouble) _tmp8_.height);
#line 167 "../src/Widgets/SelectionArea.vala"
	cairo_set_source_rgba (ctx, 0.1, 0.1, 0.1, 0.2);
#line 168 "../src/Widgets/SelectionArea.vala"
	cairo_fill (ctx);
#line 170 "../src/Widgets/SelectionArea.vala"
	_tmp9_ = rect;
#line 170 "../src/Widgets/SelectionArea.vala"
	_tmp10_ = _tmp9_.origin;
#line 170 "../src/Widgets/SelectionArea.vala"
	_tmp11_ = rect;
#line 170 "../src/Widgets/SelectionArea.vala"
	_tmp12_ = _tmp11_.origin;
#line 170 "../src/Widgets/SelectionArea.vala"
	_tmp13_ = rect;
#line 170 "../src/Widgets/SelectionArea.vala"
	_tmp14_ = _tmp13_.size;
#line 170 "../src/Widgets/SelectionArea.vala"
	_tmp15_ = rect;
#line 170 "../src/Widgets/SelectionArea.vala"
	_tmp16_ = _tmp15_.size;
#line 170 "../src/Widgets/SelectionArea.vala"
	cairo_rectangle (ctx, (gdouble) _tmp10_.x, (gdouble) _tmp12_.y, (gdouble) _tmp14_.width, (gdouble) _tmp16_.height);
#line 171 "../src/Widgets/SelectionArea.vala"
	cairo_set_source_rgb (ctx, 0.7, 0.7, 0.7);
#line 172 "../src/Widgets/SelectionArea.vala"
	cairo_set_line_width (ctx, 1.0);
#line 173 "../src/Widgets/SelectionArea.vala"
	cairo_stroke (ctx);
#line 540 "SelectionArea.c"
}

GalaWindowManager*
gala_selection_area_get_wm (GalaSelectionArea* self)
{
	GalaWindowManager* result;
	GalaWindowManager* _tmp0_;
#line 22 "../src/Widgets/SelectionArea.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 22 "../src/Widgets/SelectionArea.vala"
	_tmp0_ = self->priv->_wm;
#line 22 "../src/Widgets/SelectionArea.vala"
	result = _tmp0_;
#line 22 "../src/Widgets/SelectionArea.vala"
	return result;
#line 556 "SelectionArea.c"
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 22 "../src/Widgets/SelectionArea.vala"
	return self ? g_object_ref (self) : NULL;
#line 564 "SelectionArea.c"
}

static void
gala_selection_area_set_wm (GalaSelectionArea* self,
                            GalaWindowManager* value)
{
	GalaWindowManager* old_value;
#line 22 "../src/Widgets/SelectionArea.vala"
	g_return_if_fail (self != NULL);
#line 22 "../src/Widgets/SelectionArea.vala"
	old_value = gala_selection_area_get_wm (self);
#line 22 "../src/Widgets/SelectionArea.vala"
	if (old_value != value) {
#line 578 "SelectionArea.c"
		GalaWindowManager* _tmp0_;
#line 22 "../src/Widgets/SelectionArea.vala"
		_tmp0_ = _g_object_ref0 (value);
#line 22 "../src/Widgets/SelectionArea.vala"
		_g_object_unref0 (self->priv->_wm);
#line 22 "../src/Widgets/SelectionArea.vala"
		self->priv->_wm = _tmp0_;
#line 22 "../src/Widgets/SelectionArea.vala"
		g_object_notify_by_pspec ((GObject *) self, gala_selection_area_properties[GALA_SELECTION_AREA_WM_PROPERTY]);
#line 588 "SelectionArea.c"
	}
}

gboolean
gala_selection_area_get_cancelled (GalaSelectionArea* self)
{
	gboolean result;
#line 24 "../src/Widgets/SelectionArea.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 24 "../src/Widgets/SelectionArea.vala"
	result = self->priv->_cancelled;
#line 24 "../src/Widgets/SelectionArea.vala"
	return result;
#line 602 "SelectionArea.c"
}

static void
gala_selection_area_set_cancelled (GalaSelectionArea* self,
                                   gboolean value)
{
	gboolean old_value;
#line 24 "../src/Widgets/SelectionArea.vala"
	g_return_if_fail (self != NULL);
#line 24 "../src/Widgets/SelectionArea.vala"
	old_value = gala_selection_area_get_cancelled (self);
#line 24 "../src/Widgets/SelectionArea.vala"
	if (old_value != value) {
#line 24 "../src/Widgets/SelectionArea.vala"
		self->priv->_cancelled = value;
#line 24 "../src/Widgets/SelectionArea.vala"
		g_object_notify_by_pspec ((GObject *) self, gala_selection_area_properties[GALA_SELECTION_AREA_CANCELLED_PROPERTY]);
#line 620 "SelectionArea.c"
	}
}

static GObject *
gala_selection_area_constructor (GType type,
                                 guint n_construct_properties,
                                 GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	GalaSelectionArea * self;
	gint screen_width = 0;
	gint screen_height = 0;
	GalaWindowManager* _tmp0_;
	MetaDisplay* _tmp1_;
	gint _tmp2_ = 0;
	gint _tmp3_ = 0;
#line 36 "../src/Widgets/SelectionArea.vala"
	parent_class = G_OBJECT_CLASS (gala_selection_area_parent_class);
#line 36 "../src/Widgets/SelectionArea.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 36 "../src/Widgets/SelectionArea.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_TYPE_SELECTION_AREA, GalaSelectionArea);
#line 37 "../src/Widgets/SelectionArea.vala"
	graphene_point_init (&self->priv->start_point, (gfloat) 0, (gfloat) 0);
#line 38 "../src/Widgets/SelectionArea.vala"
	graphene_point_init (&self->priv->end_point, (gfloat) 0, (gfloat) 0);
#line 39 "../src/Widgets/SelectionArea.vala"
	g_object_set ((ClutterActor*) self, "visible", TRUE, NULL);
#line 40 "../src/Widgets/SelectionArea.vala"
	clutter_actor_set_reactive ((ClutterActor*) self, TRUE);
#line 43 "../src/Widgets/SelectionArea.vala"
	_tmp0_ = self->priv->_wm;
#line 43 "../src/Widgets/SelectionArea.vala"
	_tmp1_ = meta_plugin_get_display ((MetaPlugin*) _tmp0_);
#line 43 "../src/Widgets/SelectionArea.vala"
	meta_display_get_size (_tmp1_, &_tmp2_, &_tmp3_);
#line 43 "../src/Widgets/SelectionArea.vala"
	screen_width = _tmp2_;
#line 43 "../src/Widgets/SelectionArea.vala"
	screen_height = _tmp3_;
#line 44 "../src/Widgets/SelectionArea.vala"
	clutter_actor_set_width ((ClutterActor*) self, (gfloat) screen_width);
#line 45 "../src/Widgets/SelectionArea.vala"
	clutter_actor_set_height ((ClutterActor*) self, (gfloat) screen_height);
#line 36 "../src/Widgets/SelectionArea.vala"
	return obj;
#line 668 "SelectionArea.c"
}

static void
gala_selection_area_class_init (GalaSelectionAreaClass * klass,
                                gpointer klass_data)
{
#line 19 "../src/Widgets/SelectionArea.vala"
	gala_selection_area_parent_class = g_type_class_peek_parent (klass);
#line 19 "../src/Widgets/SelectionArea.vala"
	g_type_class_adjust_private_offset (klass, &GalaSelectionArea_private_offset);
#line 19 "../src/Widgets/SelectionArea.vala"
	((ClutterActorClass *) klass)->key_press_event = (gboolean (*) (ClutterActor*, ClutterEvent*)) gala_selection_area_real_key_press_event;
#line 19 "../src/Widgets/SelectionArea.vala"
	((ClutterActorClass *) klass)->button_press_event = (gboolean (*) (ClutterActor*, ClutterEvent*)) gala_selection_area_real_button_press_event;
#line 19 "../src/Widgets/SelectionArea.vala"
	((ClutterActorClass *) klass)->button_release_event = (gboolean (*) (ClutterActor*, ClutterEvent*)) gala_selection_area_real_button_release_event;
#line 19 "../src/Widgets/SelectionArea.vala"
	((ClutterActorClass *) klass)->motion_event = (gboolean (*) (ClutterActor*, ClutterEvent*)) gala_selection_area_real_motion_event;
#line 19 "../src/Widgets/SelectionArea.vala"
	((GalaCanvasActorClass *) klass)->draw = (void (*) (GalaCanvasActor*, cairo_t*, gint, gint)) gala_selection_area_real_draw;
#line 19 "../src/Widgets/SelectionArea.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_gala_selection_area_get_property;
#line 19 "../src/Widgets/SelectionArea.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_gala_selection_area_set_property;
#line 19 "../src/Widgets/SelectionArea.vala"
	G_OBJECT_CLASS (klass)->constructor = gala_selection_area_constructor;
#line 19 "../src/Widgets/SelectionArea.vala"
	G_OBJECT_CLASS (klass)->finalize = gala_selection_area_finalize;
#line 19 "../src/Widgets/SelectionArea.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_SELECTION_AREA_WM_PROPERTY, gala_selection_area_properties[GALA_SELECTION_AREA_WM_PROPERTY] = g_param_spec_object ("wm", "wm", "wm", GALA_TYPE_WINDOW_MANAGER, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 19 "../src/Widgets/SelectionArea.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_SELECTION_AREA_CANCELLED_PROPERTY, gala_selection_area_properties[GALA_SELECTION_AREA_CANCELLED_PROPERTY] = g_param_spec_boolean ("cancelled", "cancelled", "cancelled", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
#line 19 "../src/Widgets/SelectionArea.vala"
	gala_selection_area_signals[GALA_SELECTION_AREA_CLOSED_SIGNAL] = g_signal_new ("closed", GALA_TYPE_SELECTION_AREA, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
#line 703 "SelectionArea.c"
}

static void
gala_selection_area_instance_init (GalaSelectionArea * self,
                                   gpointer klass)
{
#line 19 "../src/Widgets/SelectionArea.vala"
	self->priv = gala_selection_area_get_instance_private (self);
#line 29 "../src/Widgets/SelectionArea.vala"
	self->priv->dragging = FALSE;
#line 30 "../src/Widgets/SelectionArea.vala"
	self->priv->clicked = FALSE;
#line 716 "SelectionArea.c"
}

static void
gala_selection_area_finalize (GObject * obj)
{
	GalaSelectionArea * self;
#line 19 "../src/Widgets/SelectionArea.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_TYPE_SELECTION_AREA, GalaSelectionArea);
#line 22 "../src/Widgets/SelectionArea.vala"
	_g_object_unref0 (self->priv->_wm);
#line 26 "../src/Widgets/SelectionArea.vala"
	_g_object_unref0 (self->priv->modal_proxy);
#line 19 "../src/Widgets/SelectionArea.vala"
	G_OBJECT_CLASS (gala_selection_area_parent_class)->finalize (obj);
#line 731 "SelectionArea.c"
}

 G_GNUC_NO_INLINE static GType
gala_selection_area_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GalaSelectionAreaClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gala_selection_area_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GalaSelectionArea), 0, (GInstanceInitFunc) gala_selection_area_instance_init, NULL };
	GType gala_selection_area_type_id;
	gala_selection_area_type_id = g_type_register_static (GALA_TYPE_CANVAS_ACTOR, "GalaSelectionArea", &g_define_type_info, 0);
	GalaSelectionArea_private_offset = g_type_add_instance_private (gala_selection_area_type_id, sizeof (GalaSelectionAreaPrivate));
	return gala_selection_area_type_id;
}

GType
gala_selection_area_get_type (void)
{
	static gsize gala_selection_area_type_id__once = 0;
	if (g_once_init_enter (&gala_selection_area_type_id__once)) {
		GType gala_selection_area_type_id;
		gala_selection_area_type_id = gala_selection_area_get_type_once ();
		g_once_init_leave (&gala_selection_area_type_id__once, gala_selection_area_type_id);
	}
	return gala_selection_area_type_id__once;
}

static void
_vala_gala_selection_area_get_property (GObject * object,
                                        guint property_id,
                                        GValue * value,
                                        GParamSpec * pspec)
{
	GalaSelectionArea * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_TYPE_SELECTION_AREA, GalaSelectionArea);
#line 19 "../src/Widgets/SelectionArea.vala"
	switch (property_id) {
#line 19 "../src/Widgets/SelectionArea.vala"
		case GALA_SELECTION_AREA_WM_PROPERTY:
#line 19 "../src/Widgets/SelectionArea.vala"
		g_value_set_object (value, gala_selection_area_get_wm (self));
#line 19 "../src/Widgets/SelectionArea.vala"
		break;
#line 19 "../src/Widgets/SelectionArea.vala"
		case GALA_SELECTION_AREA_CANCELLED_PROPERTY:
#line 19 "../src/Widgets/SelectionArea.vala"
		g_value_set_boolean (value, gala_selection_area_get_cancelled (self));
#line 19 "../src/Widgets/SelectionArea.vala"
		break;
#line 778 "SelectionArea.c"
		default:
#line 19 "../src/Widgets/SelectionArea.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 19 "../src/Widgets/SelectionArea.vala"
		break;
#line 784 "SelectionArea.c"
	}
}

static void
_vala_gala_selection_area_set_property (GObject * object,
                                        guint property_id,
                                        const GValue * value,
                                        GParamSpec * pspec)
{
	GalaSelectionArea * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_TYPE_SELECTION_AREA, GalaSelectionArea);
#line 19 "../src/Widgets/SelectionArea.vala"
	switch (property_id) {
#line 19 "../src/Widgets/SelectionArea.vala"
		case GALA_SELECTION_AREA_WM_PROPERTY:
#line 19 "../src/Widgets/SelectionArea.vala"
		gala_selection_area_set_wm (self, g_value_get_object (value));
#line 19 "../src/Widgets/SelectionArea.vala"
		break;
#line 19 "../src/Widgets/SelectionArea.vala"
		case GALA_SELECTION_AREA_CANCELLED_PROPERTY:
#line 19 "../src/Widgets/SelectionArea.vala"
		gala_selection_area_set_cancelled (self, g_value_get_boolean (value));
#line 19 "../src/Widgets/SelectionArea.vala"
		break;
#line 810 "SelectionArea.c"
		default:
#line 19 "../src/Widgets/SelectionArea.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 19 "../src/Widgets/SelectionArea.vala"
		break;
#line 816 "SelectionArea.c"
	}
}

