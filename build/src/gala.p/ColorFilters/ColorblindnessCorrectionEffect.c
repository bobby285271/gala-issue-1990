/* ColorblindnessCorrectionEffect.c generated by valac 0.56.17, the Vala compiler
 * generated from ColorblindnessCorrectionEffect.vala, do not modify */

/*
 * Copyright 2023 elementary, Inc. <https://elementary.io>
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include <clutter/clutter.h>
#include <glib-object.h>
#include <glib.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>

#define GALA_COLORBLINDNESS_CORRECTION_EFFECT_EFFECT_NAME "colorblindness-correction-filter"
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

#define GALA_TYPE_COLORBLINDNESS_CORRECTION_EFFECT (gala_colorblindness_correction_effect_get_type ())
#define GALA_COLORBLINDNESS_CORRECTION_EFFECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GALA_TYPE_COLORBLINDNESS_CORRECTION_EFFECT, GalaColorblindnessCorrectionEffect))
#define GALA_COLORBLINDNESS_CORRECTION_EFFECT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GALA_TYPE_COLORBLINDNESS_CORRECTION_EFFECT, GalaColorblindnessCorrectionEffectClass))
#define GALA_IS_COLORBLINDNESS_CORRECTION_EFFECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GALA_TYPE_COLORBLINDNESS_CORRECTION_EFFECT))
#define GALA_IS_COLORBLINDNESS_CORRECTION_EFFECT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GALA_TYPE_COLORBLINDNESS_CORRECTION_EFFECT))
#define GALA_COLORBLINDNESS_CORRECTION_EFFECT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GALA_TYPE_COLORBLINDNESS_CORRECTION_EFFECT, GalaColorblindnessCorrectionEffectClass))

typedef struct _GalaColorblindnessCorrectionEffect GalaColorblindnessCorrectionEffect;
typedef struct _GalaColorblindnessCorrectionEffectClass GalaColorblindnessCorrectionEffectClass;
typedef struct _GalaColorblindnessCorrectionEffectPrivate GalaColorblindnessCorrectionEffectPrivate;
enum  {
	GALA_COLORBLINDNESS_CORRECTION_EFFECT_0_PROPERTY,
	GALA_COLORBLINDNESS_CORRECTION_EFFECT_MODE_PROPERTY,
	GALA_COLORBLINDNESS_CORRECTION_EFFECT_STRENGTH_PROPERTY,
	GALA_COLORBLINDNESS_CORRECTION_EFFECT_TRANSITION_ACTOR_PROPERTY,
	GALA_COLORBLINDNESS_CORRECTION_EFFECT_NUM_PROPERTIES
};
static GParamSpec* gala_colorblindness_correction_effect_properties[GALA_COLORBLINDNESS_CORRECTION_EFFECT_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_bytes_unref0(var) ((var == NULL) ? NULL : (var = (g_bytes_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

struct _GalaColorblindnessCorrectionEffect {
	ClutterShaderEffect parent_instance;
	GalaColorblindnessCorrectionEffectPrivate * priv;
};

struct _GalaColorblindnessCorrectionEffectClass {
	ClutterShaderEffectClass parent_class;
};

struct _GalaColorblindnessCorrectionEffectPrivate {
	gint _mode;
	gdouble _strength;
	ClutterActor* _transition_actor;
};

static gint GalaColorblindnessCorrectionEffect_private_offset;
static gpointer gala_colorblindness_correction_effect_parent_class = NULL;

VALA_EXTERN GType gala_colorblindness_correction_effect_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GalaColorblindnessCorrectionEffect, g_object_unref)
VALA_EXTERN GalaColorblindnessCorrectionEffect* gala_colorblindness_correction_effect_new (gint mode,
                                                                               gdouble strength);
VALA_EXTERN GalaColorblindnessCorrectionEffect* gala_colorblindness_correction_effect_construct (GType object_type,
                                                                                     gint mode,
                                                                                     gdouble strength);
VALA_EXTERN gint gala_colorblindness_correction_effect_get_mode (GalaColorblindnessCorrectionEffect* self);
VALA_EXTERN void gala_colorblindness_correction_effect_set_mode (GalaColorblindnessCorrectionEffect* self,
                                                     gint value);
VALA_EXTERN gdouble gala_colorblindness_correction_effect_get_strength (GalaColorblindnessCorrectionEffect* self);
VALA_EXTERN void gala_colorblindness_correction_effect_set_strength (GalaColorblindnessCorrectionEffect* self,
                                                         gdouble value);
VALA_EXTERN ClutterActor* gala_colorblindness_correction_effect_get_transition_actor (GalaColorblindnessCorrectionEffect* self);
VALA_EXTERN void gala_colorblindness_correction_effect_set_transition_actor (GalaColorblindnessCorrectionEffect* self,
                                                                 ClutterActor* value);
static void gala_colorblindness_correction_effect_finalize (GObject * obj);
static GType gala_colorblindness_correction_effect_get_type_once (void);
static void _vala_gala_colorblindness_correction_effect_get_property (GObject * object,
                                                               guint property_id,
                                                               GValue * value,
                                                               GParamSpec * pspec);
static void _vala_gala_colorblindness_correction_effect_set_property (GObject * object,
                                                               guint property_id,
                                                               const GValue * value,
                                                               GParamSpec * pspec);

static inline gpointer
gala_colorblindness_correction_effect_get_instance_private (GalaColorblindnessCorrectionEffect* self)
{
	return G_STRUCT_MEMBER_P (self, GalaColorblindnessCorrectionEffect_private_offset);
}

GalaColorblindnessCorrectionEffect*
gala_colorblindness_correction_effect_construct (GType object_type,
                                                 gint mode,
                                                 gdouble strength)
{
	GalaColorblindnessCorrectionEffect * self = NULL;
	GError* _inner_error0_ = NULL;
#line 34 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	self = (GalaColorblindnessCorrectionEffect*) g_object_new (object_type, "shader-type", CLUTTER_FRAGMENT_SHADER, "mode", mode, "strength", strength, NULL);
#line 120 "ColorblindnessCorrectionEffect.c"
	{
		GBytes* bytes = NULL;
		GBytes* _tmp0_;
		gsize _tmp1_ = 0;
		guint8* _tmp2_;
#line 41 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		_tmp0_ = g_resources_lookup_data ("/io/elementary/desktop/gala/shaders/colorblindness-correction.vert", G_RESOURCE_LOOKUP_FLAGS_NONE, &_inner_error0_);
#line 41 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		bytes = _tmp0_;
#line 41 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 132 "ColorblindnessCorrectionEffect.c"
			goto __catch0_g_error;
		}
#line 42 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		_tmp2_ = g_bytes_get_data (bytes, &_tmp1_);
#line 42 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		clutter_shader_effect_set_shader_source ((ClutterShaderEffect*) self, (const gchar*) _tmp2_);
#line 40 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		_g_bytes_unref0 (bytes);
#line 141 "ColorblindnessCorrectionEffect.c"
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* e = NULL;
		GError* _tmp3_;
		const gchar* _tmp4_;
#line 40 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		e = _inner_error0_;
#line 40 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		_inner_error0_ = NULL;
#line 44 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		_tmp3_ = e;
#line 44 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		_tmp4_ = _tmp3_->message;
#line 44 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		g_critical ("ColorblindnessCorrectionEffect.vala:44: Unable to load colorblindness-" \
"correction.vert: %s", _tmp4_);
#line 40 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		_g_error_free0 (e);
#line 161 "ColorblindnessCorrectionEffect.c"
	}
	__finally0:
#line 40 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 40 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
#line 40 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		g_clear_error (&_inner_error0_);
#line 40 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		return NULL;
#line 172 "ColorblindnessCorrectionEffect.c"
	}
#line 33 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	return self;
#line 176 "ColorblindnessCorrectionEffect.c"
}

GalaColorblindnessCorrectionEffect*
gala_colorblindness_correction_effect_new (gint mode,
                                           gdouble strength)
{
#line 33 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	return gala_colorblindness_correction_effect_construct (GALA_TYPE_COLORBLINDNESS_CORRECTION_EFFECT, mode, strength);
#line 185 "ColorblindnessCorrectionEffect.c"
}

gint
gala_colorblindness_correction_effect_get_mode (GalaColorblindnessCorrectionEffect* self)
{
	gint result;
#line 11 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 11 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	result = self->priv->_mode;
#line 11 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	return result;
#line 198 "ColorblindnessCorrectionEffect.c"
}

void
gala_colorblindness_correction_effect_set_mode (GalaColorblindnessCorrectionEffect* self,
                                                gint value)
{
	GValue _tmp0_ = {0};
#line 12 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	g_return_if_fail (self != NULL);
#line 13 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	self->priv->_mode = value;
#line 14 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	g_value_init (&_tmp0_, G_TYPE_INT);
#line 14 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	g_value_set_int (&_tmp0_, self->priv->_mode);
#line 14 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	clutter_shader_effect_set_uniform_value ((ClutterShaderEffect*) self, "COLORBLIND_MODE", &_tmp0_);
#line 14 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	G_IS_VALUE (&_tmp0_) ? (g_value_unset (&_tmp0_), NULL) : NULL;
#line 12 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	g_object_notify_by_pspec ((GObject *) self, gala_colorblindness_correction_effect_properties[GALA_COLORBLINDNESS_CORRECTION_EFFECT_MODE_PROPERTY]);
#line 220 "ColorblindnessCorrectionEffect.c"
}

gdouble
gala_colorblindness_correction_effect_get_strength (GalaColorblindnessCorrectionEffect* self)
{
	gdouble result;
#line 19 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	g_return_val_if_fail (self != NULL, 0.0);
#line 19 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	result = self->priv->_strength;
#line 19 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	return result;
#line 233 "ColorblindnessCorrectionEffect.c"
}

void
gala_colorblindness_correction_effect_set_strength (GalaColorblindnessCorrectionEffect* self,
                                                    gdouble value)
{
	GValue _tmp0_ = {0};
#line 20 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	g_return_if_fail (self != NULL);
#line 21 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	self->priv->_strength = value;
#line 23 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	g_value_init (&_tmp0_, G_TYPE_DOUBLE);
#line 23 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	g_value_set_double (&_tmp0_, value);
#line 23 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	clutter_shader_effect_set_uniform_value ((ClutterShaderEffect*) self, "STRENGTH", &_tmp0_);
#line 23 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	G_IS_VALUE (&_tmp0_) ? (g_value_unset (&_tmp0_), NULL) : NULL;
#line 24 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	clutter_effect_queue_repaint ((ClutterEffect*) self);
#line 20 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	g_object_notify_by_pspec ((GObject *) self, gala_colorblindness_correction_effect_properties[GALA_COLORBLINDNESS_CORRECTION_EFFECT_STRENGTH_PROPERTY]);
#line 257 "ColorblindnessCorrectionEffect.c"
}

ClutterActor*
gala_colorblindness_correction_effect_get_transition_actor (GalaColorblindnessCorrectionEffect* self)
{
	ClutterActor* result;
	ClutterActor* _tmp0_;
#line 31 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 31 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	_tmp0_ = self->priv->_transition_actor;
#line 31 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	result = _tmp0_;
#line 31 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	return result;
#line 273 "ColorblindnessCorrectionEffect.c"
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 31 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	return self ? g_object_ref (self) : NULL;
#line 281 "ColorblindnessCorrectionEffect.c"
}

void
gala_colorblindness_correction_effect_set_transition_actor (GalaColorblindnessCorrectionEffect* self,
                                                            ClutterActor* value)
{
	ClutterActor* old_value;
#line 31 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	g_return_if_fail (self != NULL);
#line 31 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	old_value = gala_colorblindness_correction_effect_get_transition_actor (self);
#line 31 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	if (old_value != value) {
#line 295 "ColorblindnessCorrectionEffect.c"
		ClutterActor* _tmp0_;
#line 31 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		_tmp0_ = _g_object_ref0 (value);
#line 31 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		_g_object_unref0 (self->priv->_transition_actor);
#line 31 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		self->priv->_transition_actor = _tmp0_;
#line 31 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		g_object_notify_by_pspec ((GObject *) self, gala_colorblindness_correction_effect_properties[GALA_COLORBLINDNESS_CORRECTION_EFFECT_TRANSITION_ACTOR_PROPERTY]);
#line 305 "ColorblindnessCorrectionEffect.c"
	}
}

static void
gala_colorblindness_correction_effect_class_init (GalaColorblindnessCorrectionEffectClass * klass,
                                                  gpointer klass_data)
{
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	gala_colorblindness_correction_effect_parent_class = g_type_class_peek_parent (klass);
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	g_type_class_adjust_private_offset (klass, &GalaColorblindnessCorrectionEffect_private_offset);
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_gala_colorblindness_correction_effect_get_property;
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_gala_colorblindness_correction_effect_set_property;
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	G_OBJECT_CLASS (klass)->finalize = gala_colorblindness_correction_effect_finalize;
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_COLORBLINDNESS_CORRECTION_EFFECT_MODE_PROPERTY, gala_colorblindness_correction_effect_properties[GALA_COLORBLINDNESS_CORRECTION_EFFECT_MODE_PROPERTY] = g_param_spec_int ("mode", "mode", "mode", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_COLORBLINDNESS_CORRECTION_EFFECT_STRENGTH_PROPERTY, gala_colorblindness_correction_effect_properties[GALA_COLORBLINDNESS_CORRECTION_EFFECT_STRENGTH_PROPERTY] = g_param_spec_double ("strength", "strength", "strength", -G_MAXDOUBLE, G_MAXDOUBLE, 0.0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_COLORBLINDNESS_CORRECTION_EFFECT_TRANSITION_ACTOR_PROPERTY, gala_colorblindness_correction_effect_properties[GALA_COLORBLINDNESS_CORRECTION_EFFECT_TRANSITION_ACTOR_PROPERTY] = g_param_spec_object ("transition-actor", "transition-actor", "transition-actor", clutter_actor_get_type (), G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 329 "ColorblindnessCorrectionEffect.c"
}

static void
gala_colorblindness_correction_effect_instance_init (GalaColorblindnessCorrectionEffect * self,
                                                     gpointer klass)
{
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	self->priv = gala_colorblindness_correction_effect_get_instance_private (self);
#line 31 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	self->priv->_transition_actor = NULL;
#line 340 "ColorblindnessCorrectionEffect.c"
}

static void
gala_colorblindness_correction_effect_finalize (GObject * obj)
{
	GalaColorblindnessCorrectionEffect * self;
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_TYPE_COLORBLINDNESS_CORRECTION_EFFECT, GalaColorblindnessCorrectionEffect);
#line 31 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	_g_object_unref0 (self->priv->_transition_actor);
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	G_OBJECT_CLASS (gala_colorblindness_correction_effect_parent_class)->finalize (obj);
#line 353 "ColorblindnessCorrectionEffect.c"
}

 G_GNUC_NO_INLINE static GType
gala_colorblindness_correction_effect_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GalaColorblindnessCorrectionEffectClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gala_colorblindness_correction_effect_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GalaColorblindnessCorrectionEffect), 0, (GInstanceInitFunc) gala_colorblindness_correction_effect_instance_init, NULL };
	GType gala_colorblindness_correction_effect_type_id;
	gala_colorblindness_correction_effect_type_id = g_type_register_static (clutter_shader_effect_get_type (), "GalaColorblindnessCorrectionEffect", &g_define_type_info, 0);
	GalaColorblindnessCorrectionEffect_private_offset = g_type_add_instance_private (gala_colorblindness_correction_effect_type_id, sizeof (GalaColorblindnessCorrectionEffectPrivate));
	return gala_colorblindness_correction_effect_type_id;
}

GType
gala_colorblindness_correction_effect_get_type (void)
{
	static gsize gala_colorblindness_correction_effect_type_id__once = 0;
	if (g_once_init_enter (&gala_colorblindness_correction_effect_type_id__once)) {
		GType gala_colorblindness_correction_effect_type_id;
		gala_colorblindness_correction_effect_type_id = gala_colorblindness_correction_effect_get_type_once ();
		g_once_init_leave (&gala_colorblindness_correction_effect_type_id__once, gala_colorblindness_correction_effect_type_id);
	}
	return gala_colorblindness_correction_effect_type_id__once;
}

static void
_vala_gala_colorblindness_correction_effect_get_property (GObject * object,
                                                          guint property_id,
                                                          GValue * value,
                                                          GParamSpec * pspec)
{
	GalaColorblindnessCorrectionEffect * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_TYPE_COLORBLINDNESS_CORRECTION_EFFECT, GalaColorblindnessCorrectionEffect);
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	switch (property_id) {
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		case GALA_COLORBLINDNESS_CORRECTION_EFFECT_MODE_PROPERTY:
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		g_value_set_int (value, gala_colorblindness_correction_effect_get_mode (self));
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		break;
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		case GALA_COLORBLINDNESS_CORRECTION_EFFECT_STRENGTH_PROPERTY:
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		g_value_set_double (value, gala_colorblindness_correction_effect_get_strength (self));
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		break;
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		case GALA_COLORBLINDNESS_CORRECTION_EFFECT_TRANSITION_ACTOR_PROPERTY:
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		g_value_set_object (value, gala_colorblindness_correction_effect_get_transition_actor (self));
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		break;
#line 406 "ColorblindnessCorrectionEffect.c"
		default:
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		break;
#line 412 "ColorblindnessCorrectionEffect.c"
	}
}

static void
_vala_gala_colorblindness_correction_effect_set_property (GObject * object,
                                                          guint property_id,
                                                          const GValue * value,
                                                          GParamSpec * pspec)
{
	GalaColorblindnessCorrectionEffect * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_TYPE_COLORBLINDNESS_CORRECTION_EFFECT, GalaColorblindnessCorrectionEffect);
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
	switch (property_id) {
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		case GALA_COLORBLINDNESS_CORRECTION_EFFECT_MODE_PROPERTY:
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		gala_colorblindness_correction_effect_set_mode (self, g_value_get_int (value));
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		break;
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		case GALA_COLORBLINDNESS_CORRECTION_EFFECT_STRENGTH_PROPERTY:
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		gala_colorblindness_correction_effect_set_strength (self, g_value_get_double (value));
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		break;
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		case GALA_COLORBLINDNESS_CORRECTION_EFFECT_TRANSITION_ACTOR_PROPERTY:
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		gala_colorblindness_correction_effect_set_transition_actor (self, g_value_get_object (value));
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		break;
#line 444 "ColorblindnessCorrectionEffect.c"
		default:
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 6 "../src/ColorFilters/ColorblindnessCorrectionEffect.vala"
		break;
#line 450 "ColorblindnessCorrectionEffect.c"
	}
}

