/* Gesture.c generated by valac 0.56.17, the Vala compiler
 * generated from Gesture.vala, do not modify */

/*
 * Copyright 2021 elementary, Inc (https://elementary.io)
 *           2021 José Expósito <jose.exposito89@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <glib-object.h>
#include <clutter/clutter.h>
#include <glib.h>
#include <gobject/gvaluecollector.h>

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

typedef enum  {
	GALA_GESTURE_DIRECTION_UNKNOWN = 0,
	GALA_GESTURE_DIRECTION_UP = 1,
	GALA_GESTURE_DIRECTION_DOWN = 2,
	GALA_GESTURE_DIRECTION_LEFT = 3,
	GALA_GESTURE_DIRECTION_RIGHT = 4,
	GALA_GESTURE_DIRECTION_IN = 5,
	GALA_GESTURE_DIRECTION_OUT = 6
} GalaGestureDirection;

#define GALA_TYPE_GESTURE_DIRECTION (gala_gesture_direction_get_type ())

#define GALA_TYPE_GESTURE (gala_gesture_get_type ())
#define GALA_GESTURE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GALA_TYPE_GESTURE, GalaGesture))
#define GALA_GESTURE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GALA_TYPE_GESTURE, GalaGestureClass))
#define GALA_IS_GESTURE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GALA_TYPE_GESTURE))
#define GALA_IS_GESTURE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GALA_TYPE_GESTURE))
#define GALA_GESTURE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GALA_TYPE_GESTURE, GalaGestureClass))

typedef struct _GalaGesture GalaGesture;
typedef struct _GalaGestureClass GalaGestureClass;
typedef struct _GalaGesturePrivate GalaGesturePrivate;
typedef struct _GalaParamSpecGesture GalaParamSpecGesture;

struct _GalaGesture {
	GTypeInstance parent_instance;
	volatile int ref_count;
	GalaGesturePrivate * priv;
	ClutterEventType type;
	GalaGestureDirection direction;
	gint fingers;
	ClutterInputDeviceType performed_on_device_type;
};

struct _GalaGestureClass {
	GTypeClass parent_class;
	void (*finalize) (GalaGesture *self);
};

struct _GalaParamSpecGesture {
	GParamSpec parent_instance;
};

static gpointer gala_gesture_parent_class = NULL;

VALA_EXTERN GType gala_gesture_direction_get_type (void) G_GNUC_CONST ;
VALA_EXTERN gpointer gala_gesture_ref (gpointer instance);
VALA_EXTERN void gala_gesture_unref (gpointer instance);
VALA_EXTERN GParamSpec* gala_param_spec_gesture (const gchar* name,
                                     const gchar* nick,
                                     const gchar* blurb,
                                     GType object_type,
                                     GParamFlags flags);
VALA_EXTERN void gala_value_set_gesture (GValue* value,
                             gpointer v_object);
VALA_EXTERN void gala_value_take_gesture (GValue* value,
                              gpointer v_object);
VALA_EXTERN gpointer gala_value_get_gesture (const GValue* value);
VALA_EXTERN GType gala_gesture_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GalaGesture, gala_gesture_unref)
VALA_EXTERN GalaGesture* gala_gesture_new (void);
VALA_EXTERN GalaGesture* gala_gesture_construct (GType object_type);
static void gala_gesture_finalize (GalaGesture * obj);
static GType gala_gesture_get_type_once (void);

/**
     * Physical direction of the gesture. This direction doesn't follow natural scroll preferences.
     */
 G_GNUC_NO_INLINE static GType
gala_gesture_direction_get_type_once (void)
{
	static const GEnumValue values[] = {{GALA_GESTURE_DIRECTION_UNKNOWN, "GALA_GESTURE_DIRECTION_UNKNOWN", "unknown"}, {GALA_GESTURE_DIRECTION_UP, "GALA_GESTURE_DIRECTION_UP", "up"}, {GALA_GESTURE_DIRECTION_DOWN, "GALA_GESTURE_DIRECTION_DOWN", "down"}, {GALA_GESTURE_DIRECTION_LEFT, "GALA_GESTURE_DIRECTION_LEFT", "left"}, {GALA_GESTURE_DIRECTION_RIGHT, "GALA_GESTURE_DIRECTION_RIGHT", "right"}, {GALA_GESTURE_DIRECTION_IN, "GALA_GESTURE_DIRECTION_IN", "in"}, {GALA_GESTURE_DIRECTION_OUT, "GALA_GESTURE_DIRECTION_OUT", "out"}, {0, NULL, NULL}};
	GType gala_gesture_direction_type_id;
	gala_gesture_direction_type_id = g_enum_register_static ("GalaGestureDirection", values);
	return gala_gesture_direction_type_id;
}

GType
gala_gesture_direction_get_type (void)
{
	static gsize gala_gesture_direction_type_id__once = 0;
	if (g_once_init_enter (&gala_gesture_direction_type_id__once)) {
		GType gala_gesture_direction_type_id;
		gala_gesture_direction_type_id = gala_gesture_direction_get_type_once ();
		g_once_init_leave (&gala_gesture_direction_type_id__once, gala_gesture_direction_type_id);
	}
	return gala_gesture_direction_type_id__once;
}

GalaGesture*
gala_gesture_construct (GType object_type)
{
	GalaGesture* self = NULL;
#line 37 "../src/Gestures/Gesture.vala"
	self = (GalaGesture*) g_type_create_instance (object_type);
#line 37 "../src/Gestures/Gesture.vala"
	return self;
#line 143 "Gesture.c"
}

GalaGesture*
gala_gesture_new (void)
{
#line 37 "../src/Gestures/Gesture.vala"
	return gala_gesture_construct (GALA_TYPE_GESTURE);
#line 151 "Gesture.c"
}

static void
gala_value_gesture_init (GValue* value)
{
#line 37 "../src/Gestures/Gesture.vala"
	value->data[0].v_pointer = NULL;
#line 159 "Gesture.c"
}

static void
gala_value_gesture_free_value (GValue* value)
{
#line 37 "../src/Gestures/Gesture.vala"
	if (value->data[0].v_pointer) {
#line 37 "../src/Gestures/Gesture.vala"
		gala_gesture_unref (value->data[0].v_pointer);
#line 169 "Gesture.c"
	}
}

static void
gala_value_gesture_copy_value (const GValue* src_value,
                               GValue* dest_value)
{
#line 37 "../src/Gestures/Gesture.vala"
	if (src_value->data[0].v_pointer) {
#line 37 "../src/Gestures/Gesture.vala"
		dest_value->data[0].v_pointer = gala_gesture_ref (src_value->data[0].v_pointer);
#line 181 "Gesture.c"
	} else {
#line 37 "../src/Gestures/Gesture.vala"
		dest_value->data[0].v_pointer = NULL;
#line 185 "Gesture.c"
	}
}

static gpointer
gala_value_gesture_peek_pointer (const GValue* value)
{
#line 37 "../src/Gestures/Gesture.vala"
	return value->data[0].v_pointer;
#line 194 "Gesture.c"
}

static gchar*
gala_value_gesture_collect_value (GValue* value,
                                  guint n_collect_values,
                                  GTypeCValue* collect_values,
                                  guint collect_flags)
{
#line 37 "../src/Gestures/Gesture.vala"
	if (collect_values[0].v_pointer) {
#line 205 "Gesture.c"
		GalaGesture * object;
		object = collect_values[0].v_pointer;
#line 37 "../src/Gestures/Gesture.vala"
		if (object->parent_instance.g_class == NULL) {
#line 37 "../src/Gestures/Gesture.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 212 "Gesture.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 37 "../src/Gestures/Gesture.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 216 "Gesture.c"
		}
#line 37 "../src/Gestures/Gesture.vala"
		value->data[0].v_pointer = gala_gesture_ref (object);
#line 220 "Gesture.c"
	} else {
#line 37 "../src/Gestures/Gesture.vala"
		value->data[0].v_pointer = NULL;
#line 224 "Gesture.c"
	}
#line 37 "../src/Gestures/Gesture.vala"
	return NULL;
#line 228 "Gesture.c"
}

static gchar*
gala_value_gesture_lcopy_value (const GValue* value,
                                guint n_collect_values,
                                GTypeCValue* collect_values,
                                guint collect_flags)
{
	GalaGesture ** object_p;
	object_p = collect_values[0].v_pointer;
#line 37 "../src/Gestures/Gesture.vala"
	if (!object_p) {
#line 37 "../src/Gestures/Gesture.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 243 "Gesture.c"
	}
#line 37 "../src/Gestures/Gesture.vala"
	if (!value->data[0].v_pointer) {
#line 37 "../src/Gestures/Gesture.vala"
		*object_p = NULL;
#line 249 "Gesture.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 37 "../src/Gestures/Gesture.vala"
		*object_p = value->data[0].v_pointer;
#line 253 "Gesture.c"
	} else {
#line 37 "../src/Gestures/Gesture.vala"
		*object_p = gala_gesture_ref (value->data[0].v_pointer);
#line 257 "Gesture.c"
	}
#line 37 "../src/Gestures/Gesture.vala"
	return NULL;
#line 261 "Gesture.c"
}

GParamSpec*
gala_param_spec_gesture (const gchar* name,
                         const gchar* nick,
                         const gchar* blurb,
                         GType object_type,
                         GParamFlags flags)
{
	GalaParamSpecGesture* spec;
#line 37 "../src/Gestures/Gesture.vala"
	g_return_val_if_fail (g_type_is_a (object_type, GALA_TYPE_GESTURE), NULL);
#line 37 "../src/Gestures/Gesture.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 37 "../src/Gestures/Gesture.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 37 "../src/Gestures/Gesture.vala"
	return G_PARAM_SPEC (spec);
#line 280 "Gesture.c"
}

gpointer
gala_value_get_gesture (const GValue* value)
{
#line 37 "../src/Gestures/Gesture.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, GALA_TYPE_GESTURE), NULL);
#line 37 "../src/Gestures/Gesture.vala"
	return value->data[0].v_pointer;
#line 290 "Gesture.c"
}

void
gala_value_set_gesture (GValue* value,
                        gpointer v_object)
{
	GalaGesture * old;
#line 37 "../src/Gestures/Gesture.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, GALA_TYPE_GESTURE));
#line 37 "../src/Gestures/Gesture.vala"
	old = value->data[0].v_pointer;
#line 37 "../src/Gestures/Gesture.vala"
	if (v_object) {
#line 37 "../src/Gestures/Gesture.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, GALA_TYPE_GESTURE));
#line 37 "../src/Gestures/Gesture.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 37 "../src/Gestures/Gesture.vala"
		value->data[0].v_pointer = v_object;
#line 37 "../src/Gestures/Gesture.vala"
		gala_gesture_ref (value->data[0].v_pointer);
#line 312 "Gesture.c"
	} else {
#line 37 "../src/Gestures/Gesture.vala"
		value->data[0].v_pointer = NULL;
#line 316 "Gesture.c"
	}
#line 37 "../src/Gestures/Gesture.vala"
	if (old) {
#line 37 "../src/Gestures/Gesture.vala"
		gala_gesture_unref (old);
#line 322 "Gesture.c"
	}
}

void
gala_value_take_gesture (GValue* value,
                         gpointer v_object)
{
	GalaGesture * old;
#line 37 "../src/Gestures/Gesture.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, GALA_TYPE_GESTURE));
#line 37 "../src/Gestures/Gesture.vala"
	old = value->data[0].v_pointer;
#line 37 "../src/Gestures/Gesture.vala"
	if (v_object) {
#line 37 "../src/Gestures/Gesture.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, GALA_TYPE_GESTURE));
#line 37 "../src/Gestures/Gesture.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 37 "../src/Gestures/Gesture.vala"
		value->data[0].v_pointer = v_object;
#line 343 "Gesture.c"
	} else {
#line 37 "../src/Gestures/Gesture.vala"
		value->data[0].v_pointer = NULL;
#line 347 "Gesture.c"
	}
#line 37 "../src/Gestures/Gesture.vala"
	if (old) {
#line 37 "../src/Gestures/Gesture.vala"
		gala_gesture_unref (old);
#line 353 "Gesture.c"
	}
}

static void
gala_gesture_class_init (GalaGestureClass * klass,
                         gpointer klass_data)
{
#line 37 "../src/Gestures/Gesture.vala"
	gala_gesture_parent_class = g_type_class_peek_parent (klass);
#line 37 "../src/Gestures/Gesture.vala"
	((GalaGestureClass *) klass)->finalize = gala_gesture_finalize;
#line 365 "Gesture.c"
}

static void
gala_gesture_instance_init (GalaGesture * self,
                            gpointer klass)
{
#line 37 "../src/Gestures/Gesture.vala"
	self->ref_count = 1;
#line 374 "Gesture.c"
}

static void
gala_gesture_finalize (GalaGesture * obj)
{
	GalaGesture * self;
#line 37 "../src/Gestures/Gesture.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_TYPE_GESTURE, GalaGesture);
#line 37 "../src/Gestures/Gesture.vala"
	g_signal_handlers_destroy (self);
#line 385 "Gesture.c"
}

 G_GNUC_NO_INLINE static GType
gala_gesture_get_type_once (void)
{
	static const GTypeValueTable g_define_type_value_table = { gala_value_gesture_init, gala_value_gesture_free_value, gala_value_gesture_copy_value, gala_value_gesture_peek_pointer, "p", gala_value_gesture_collect_value, "p", gala_value_gesture_lcopy_value };
	static const GTypeInfo g_define_type_info = { sizeof (GalaGestureClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gala_gesture_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GalaGesture), 0, (GInstanceInitFunc) gala_gesture_instance_init, &g_define_type_value_table };
	static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
	GType gala_gesture_type_id;
	gala_gesture_type_id = g_type_register_fundamental (g_type_fundamental_next (), "GalaGesture", &g_define_type_info, &g_define_type_fundamental_info, 0);
	return gala_gesture_type_id;
}

GType
gala_gesture_get_type (void)
{
	static gsize gala_gesture_type_id__once = 0;
	if (g_once_init_enter (&gala_gesture_type_id__once)) {
		GType gala_gesture_type_id;
		gala_gesture_type_id = gala_gesture_get_type_once ();
		g_once_init_leave (&gala_gesture_type_id__once, gala_gesture_type_id);
	}
	return gala_gesture_type_id__once;
}

gpointer
gala_gesture_ref (gpointer instance)
{
	GalaGesture * self;
	self = instance;
#line 37 "../src/Gestures/Gesture.vala"
	g_atomic_int_inc (&self->ref_count);
#line 37 "../src/Gestures/Gesture.vala"
	return instance;
#line 420 "Gesture.c"
}

void
gala_gesture_unref (gpointer instance)
{
	GalaGesture * self;
	self = instance;
#line 37 "../src/Gestures/Gesture.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 37 "../src/Gestures/Gesture.vala"
		GALA_GESTURE_GET_CLASS (self)->finalize (self);
#line 37 "../src/Gestures/Gesture.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 434 "Gesture.c"
	}
}

