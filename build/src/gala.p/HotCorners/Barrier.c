/* Barrier.c generated by valac 0.56.17, the Vala compiler
 * generated from Barrier.vala, do not modify */

/*
 * Copyright 2024 elementary, Inc. (https://elementary.io)
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include <glib-object.h>
#include <glib.h>
#include <meta/barrier.h>
#include <float.h>
#include <math.h>
#include <meta/meta-backend.h>

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

#define GALA_TYPE_BARRIER (gala_barrier_get_type ())
#define GALA_BARRIER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GALA_TYPE_BARRIER, GalaBarrier))
#define GALA_BARRIER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GALA_TYPE_BARRIER, GalaBarrierClass))
#define GALA_IS_BARRIER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GALA_TYPE_BARRIER))
#define GALA_IS_BARRIER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GALA_TYPE_BARRIER))
#define GALA_BARRIER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GALA_TYPE_BARRIER, GalaBarrierClass))

typedef struct _GalaBarrier GalaBarrier;
typedef struct _GalaBarrierClass GalaBarrierClass;
typedef struct _GalaBarrierPrivate GalaBarrierPrivate;
enum  {
	GALA_BARRIER_0_PROPERTY,
	GALA_BARRIER_TRIGGERED_PROPERTY,
	GALA_BARRIER_TRIGGER_PRESSURE_THRESHOLD_PROPERTY,
	GALA_BARRIER_RELEASE_PRESSURE_THRESHOLD_PROPERTY,
	GALA_BARRIER_RETRIGGER_PRESSURE_THRESHOLD_PROPERTY,
	GALA_BARRIER_RETRIGGER_DELAY_PROPERTY,
	GALA_BARRIER_NUM_PROPERTIES
};
static GParamSpec* gala_barrier_properties[GALA_BARRIER_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
enum  {
	GALA_BARRIER_TRIGGER_SIGNAL,
	GALA_BARRIER_NUM_SIGNALS
};
static guint gala_barrier_signals[GALA_BARRIER_NUM_SIGNALS] = {0};

struct _GalaBarrier {
	GObject parent_instance;
	GalaBarrierPrivate * priv;
};

struct _GalaBarrierClass {
	GObjectClass parent_class;
};

struct _GalaBarrierPrivate {
	gboolean _triggered;
	gint _trigger_pressure_threshold;
	gint _release_pressure_threshold;
	gint _retrigger_pressure_threshold;
	gint _retrigger_delay;
	MetaBarrier* barrier;
	guint32 triggered_time;
	gdouble pressure;
};

static gint GalaBarrier_private_offset;
static gpointer gala_barrier_parent_class = NULL;

VALA_EXTERN GType gala_barrier_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GalaBarrier, g_object_unref)
VALA_EXTERN GalaBarrier* gala_barrier_new (MetaBackend* backend,
                               gint x1,
                               gint y1,
                               gint x2,
                               gint y2,
                               MetaBarrierDirection directions,
                               gint trigger_pressure_threshold,
                               gint release_pressure_threshold,
                               gint retrigger_pressure_threshold,
                               gint retrigger_delay);
VALA_EXTERN GalaBarrier* gala_barrier_construct (GType object_type,
                                     MetaBackend* backend,
                                     gint x1,
                                     gint y1,
                                     gint x2,
                                     gint y2,
                                     MetaBarrierDirection directions,
                                     gint trigger_pressure_threshold,
                                     gint release_pressure_threshold,
                                     gint retrigger_pressure_threshold,
                                     gint retrigger_delay);
static void gala_barrier_on_hit (GalaBarrier* self,
                          MetaBarrierEvent* event);
static void _gala_barrier_on_hit_meta_barrier_hit (MetaBarrier* _sender,
                                            MetaBarrierEvent* event,
                                            gpointer self);
static void gala_barrier_on_left (GalaBarrier* self);
static void _gala_barrier_on_left_meta_barrier_left (MetaBarrier* _sender,
                                              MetaBarrierEvent* event,
                                              gpointer self);
VALA_EXTERN gboolean gala_barrier_get_triggered (GalaBarrier* self);
VALA_EXTERN gint gala_barrier_get_trigger_pressure_threshold (GalaBarrier* self);
static void gala_barrier_emit_trigger (GalaBarrier* self,
                                guint32 time);
VALA_EXTERN gint gala_barrier_get_release_pressure_threshold (GalaBarrier* self);
VALA_EXTERN gint gala_barrier_get_retrigger_pressure_threshold (GalaBarrier* self);
VALA_EXTERN gint gala_barrier_get_retrigger_delay (GalaBarrier* self);
VALA_EXTERN void gala_barrier_set_triggered (GalaBarrier* self,
                                 gboolean value);
static void gala_barrier_set_trigger_pressure_threshold (GalaBarrier* self,
                                                  gint value);
static void gala_barrier_set_release_pressure_threshold (GalaBarrier* self,
                                                  gint value);
static void gala_barrier_set_retrigger_pressure_threshold (GalaBarrier* self,
                                                    gint value);
static void gala_barrier_set_retrigger_delay (GalaBarrier* self,
                                       gint value);
static void gala_barrier_finalize (GObject * obj);
static GType gala_barrier_get_type_once (void);
static void _vala_gala_barrier_get_property (GObject * object,
                                      guint property_id,
                                      GValue * value,
                                      GParamSpec * pspec);
static void _vala_gala_barrier_set_property (GObject * object,
                                      guint property_id,
                                      const GValue * value,
                                      GParamSpec * pspec);

static inline gpointer
gala_barrier_get_instance_private (GalaBarrier* self)
{
	return G_STRUCT_MEMBER_P (self, GalaBarrier_private_offset);
}

/**
     * @param trigger_pressure_threshold The amount of pixels to travel additionally for
     * the barrier to trigger. Set to 0 to immediately activate.
     * @param retrigger_pressure_threshold The amount of pixels to travel additionally for
     * the barrier to trigger again. Set to int.MAX to disallow retrigger.
     */
static void
_gala_barrier_on_hit_meta_barrier_hit (MetaBarrier* _sender,
                                       MetaBarrierEvent* event,
                                       gpointer self)
{
#line 51 "../src/HotCorners/Barrier.vala"
	gala_barrier_on_hit ((GalaBarrier*) self, event);
#line 164 "Barrier.c"
}

static void
_gala_barrier_on_left_meta_barrier_left (MetaBarrier* _sender,
                                         MetaBarrierEvent* event,
                                         gpointer self)
{
#line 52 "../src/HotCorners/Barrier.vala"
	gala_barrier_on_left ((GalaBarrier*) self);
#line 174 "Barrier.c"
}

GalaBarrier*
gala_barrier_construct (GType object_type,
                        MetaBackend* backend,
                        gint x1,
                        gint y1,
                        gint x2,
                        gint y2,
                        MetaBarrierDirection directions,
                        gint trigger_pressure_threshold,
                        gint release_pressure_threshold,
                        gint retrigger_pressure_threshold,
                        gint retrigger_delay)
{
	GalaBarrier * self = NULL;
	GError* _inner_error0_ = NULL;
#line 30 "../src/HotCorners/Barrier.vala"
	g_return_val_if_fail (backend != NULL, NULL);
#line 42 "../src/HotCorners/Barrier.vala"
	self = (GalaBarrier*) g_object_new (object_type, "trigger-pressure-threshold", trigger_pressure_threshold, "release-pressure-threshold", release_pressure_threshold, "retrigger-pressure-threshold", retrigger_pressure_threshold, "retrigger-delay", retrigger_delay, NULL);
#line 196 "Barrier.c"
	{
		MetaBarrier* _tmp0_ = NULL;
		MetaBarrier* _tmp1_;
		MetaBarrier* _tmp2_;
		MetaBarrier* _tmp3_;
		MetaBarrier* _tmp4_;
#line 50 "../src/HotCorners/Barrier.vala"
		_tmp1_ = meta_barrier_new (backend, x1, y1, x2, y2, directions, META_BARRIER_FLAG_NONE, &_inner_error0_);
#line 50 "../src/HotCorners/Barrier.vala"
		_tmp0_ = _tmp1_;
#line 50 "../src/HotCorners/Barrier.vala"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 209 "Barrier.c"
			goto __catch0_g_error;
		}
#line 50 "../src/HotCorners/Barrier.vala"
		_tmp2_ = _tmp0_;
#line 50 "../src/HotCorners/Barrier.vala"
		_tmp0_ = NULL;
#line 50 "../src/HotCorners/Barrier.vala"
		_g_object_unref0 (self->priv->barrier);
#line 50 "../src/HotCorners/Barrier.vala"
		self->priv->barrier = _tmp2_;
#line 51 "../src/HotCorners/Barrier.vala"
		_tmp3_ = self->priv->barrier;
#line 51 "../src/HotCorners/Barrier.vala"
		g_signal_connect_object (_tmp3_, "hit", (GCallback) _gala_barrier_on_hit_meta_barrier_hit, self, 0);
#line 52 "../src/HotCorners/Barrier.vala"
		_tmp4_ = self->priv->barrier;
#line 52 "../src/HotCorners/Barrier.vala"
		g_signal_connect_object (_tmp4_, "left", (GCallback) _gala_barrier_on_left_meta_barrier_left, self, 0);
#line 49 "../src/HotCorners/Barrier.vala"
		_g_object_unref0 (_tmp0_);
#line 230 "Barrier.c"
	}
	goto __finally0;
	__catch0_g_error:
	{
#line 49 "../src/HotCorners/Barrier.vala"
		g_clear_error (&_inner_error0_);
#line 54 "../src/HotCorners/Barrier.vala"
		g_warning ("Barrier.vala:54: Failed to create Meta Barrier");
#line 239 "Barrier.c"
	}
	__finally0:
#line 49 "../src/HotCorners/Barrier.vala"
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 49 "../src/HotCorners/Barrier.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
#line 49 "../src/HotCorners/Barrier.vala"
		g_clear_error (&_inner_error0_);
#line 49 "../src/HotCorners/Barrier.vala"
		return NULL;
#line 250 "Barrier.c"
	}
#line 30 "../src/HotCorners/Barrier.vala"
	return self;
#line 254 "Barrier.c"
}

GalaBarrier*
gala_barrier_new (MetaBackend* backend,
                  gint x1,
                  gint y1,
                  gint x2,
                  gint y2,
                  MetaBarrierDirection directions,
                  gint trigger_pressure_threshold,
                  gint release_pressure_threshold,
                  gint retrigger_pressure_threshold,
                  gint retrigger_delay)
{
#line 30 "../src/HotCorners/Barrier.vala"
	return gala_barrier_construct (GALA_TYPE_BARRIER, backend, x1, y1, x2, y2, directions, trigger_pressure_threshold, release_pressure_threshold, retrigger_pressure_threshold, retrigger_delay);
#line 271 "Barrier.c"
}

static void
gala_barrier_on_hit (GalaBarrier* self,
                     MetaBarrierEvent* event)
{
	gboolean _tmp0_ = FALSE;
	MetaBarrier* _tmp1_;
	MetaBarrierDirection _tmp2_;
	MetaBarrierDirection _tmp3_;
	gboolean _tmp7_ = FALSE;
	gboolean _tmp8_;
	gboolean _tmp10_ = FALSE;
	gboolean _tmp11_;
	gboolean _tmp14_ = FALSE;
	gboolean _tmp15_ = FALSE;
	gboolean _tmp16_;
#line 62 "../src/HotCorners/Barrier.vala"
	g_return_if_fail (self != NULL);
#line 62 "../src/HotCorners/Barrier.vala"
	g_return_if_fail (event != NULL);
#line 63 "../src/HotCorners/Barrier.vala"
	_tmp1_ = self->priv->barrier;
#line 63 "../src/HotCorners/Barrier.vala"
	g_object_get (_tmp1_, "directions", &_tmp2_, NULL);
#line 63 "../src/HotCorners/Barrier.vala"
	_tmp3_ = _tmp2_;
#line 63 "../src/HotCorners/Barrier.vala"
	if ((_tmp3_ & META_BARRIER_DIRECTION_POSITIVE_X) == META_BARRIER_DIRECTION_POSITIVE_X) {
#line 63 "../src/HotCorners/Barrier.vala"
		_tmp0_ = TRUE;
#line 303 "Barrier.c"
	} else {
		MetaBarrier* _tmp4_;
		MetaBarrierDirection _tmp5_;
		MetaBarrierDirection _tmp6_;
#line 63 "../src/HotCorners/Barrier.vala"
		_tmp4_ = self->priv->barrier;
#line 63 "../src/HotCorners/Barrier.vala"
		g_object_get (_tmp4_, "directions", &_tmp5_, NULL);
#line 63 "../src/HotCorners/Barrier.vala"
		_tmp6_ = _tmp5_;
#line 63 "../src/HotCorners/Barrier.vala"
		_tmp0_ = (_tmp6_ & META_BARRIER_DIRECTION_NEGATIVE_X) == META_BARRIER_DIRECTION_NEGATIVE_X;
#line 316 "Barrier.c"
	}
#line 63 "../src/HotCorners/Barrier.vala"
	if (_tmp0_) {
#line 64 "../src/HotCorners/Barrier.vala"
		self->priv->pressure = self->priv->pressure + fabs (event->dx);
#line 322 "Barrier.c"
	} else {
#line 66 "../src/HotCorners/Barrier.vala"
		self->priv->pressure = self->priv->pressure + fabs (event->dy);
#line 326 "Barrier.c"
	}
#line 69 "../src/HotCorners/Barrier.vala"
	_tmp8_ = self->priv->_triggered;
#line 69 "../src/HotCorners/Barrier.vala"
	if (!_tmp8_) {
#line 332 "Barrier.c"
		gint _tmp9_;
#line 69 "../src/HotCorners/Barrier.vala"
		_tmp9_ = self->priv->_trigger_pressure_threshold;
#line 69 "../src/HotCorners/Barrier.vala"
		_tmp7_ = self->priv->pressure > ((gdouble) _tmp9_);
#line 338 "Barrier.c"
	} else {
#line 69 "../src/HotCorners/Barrier.vala"
		_tmp7_ = FALSE;
#line 342 "Barrier.c"
	}
#line 69 "../src/HotCorners/Barrier.vala"
	if (_tmp7_) {
#line 70 "../src/HotCorners/Barrier.vala"
		gala_barrier_emit_trigger (self, event->time);
#line 348 "Barrier.c"
	}
#line 73 "../src/HotCorners/Barrier.vala"
	_tmp11_ = self->priv->_triggered;
#line 73 "../src/HotCorners/Barrier.vala"
	if (!_tmp11_) {
#line 354 "Barrier.c"
		gint _tmp12_;
#line 73 "../src/HotCorners/Barrier.vala"
		_tmp12_ = self->priv->_release_pressure_threshold;
#line 73 "../src/HotCorners/Barrier.vala"
		_tmp10_ = self->priv->pressure > ((gdouble) _tmp12_);
#line 360 "Barrier.c"
	} else {
#line 73 "../src/HotCorners/Barrier.vala"
		_tmp10_ = FALSE;
#line 364 "Barrier.c"
	}
#line 73 "../src/HotCorners/Barrier.vala"
	if (_tmp10_) {
#line 368 "Barrier.c"
		MetaBarrier* _tmp13_;
#line 74 "../src/HotCorners/Barrier.vala"
		_tmp13_ = self->priv->barrier;
#line 74 "../src/HotCorners/Barrier.vala"
		meta_barrier_release (_tmp13_, event);
#line 374 "Barrier.c"
	}
#line 77 "../src/HotCorners/Barrier.vala"
	_tmp16_ = self->priv->_triggered;
#line 77 "../src/HotCorners/Barrier.vala"
	if (_tmp16_) {
#line 380 "Barrier.c"
		gint _tmp17_;
#line 77 "../src/HotCorners/Barrier.vala"
		_tmp17_ = self->priv->_retrigger_pressure_threshold;
#line 77 "../src/HotCorners/Barrier.vala"
		_tmp15_ = fabs (self->priv->pressure) > ((gdouble) _tmp17_);
#line 386 "Barrier.c"
	} else {
#line 77 "../src/HotCorners/Barrier.vala"
		_tmp15_ = FALSE;
#line 390 "Barrier.c"
	}
#line 77 "../src/HotCorners/Barrier.vala"
	if (_tmp15_) {
#line 394 "Barrier.c"
		gint _tmp18_;
#line 77 "../src/HotCorners/Barrier.vala"
		_tmp18_ = self->priv->_retrigger_delay;
#line 77 "../src/HotCorners/Barrier.vala"
		_tmp14_ = event->time > (_tmp18_ + self->priv->triggered_time);
#line 400 "Barrier.c"
	} else {
#line 77 "../src/HotCorners/Barrier.vala"
		_tmp14_ = FALSE;
#line 404 "Barrier.c"
	}
#line 77 "../src/HotCorners/Barrier.vala"
	if (_tmp14_) {
#line 78 "../src/HotCorners/Barrier.vala"
		gala_barrier_emit_trigger (self, event->time);
#line 410 "Barrier.c"
	}
}

static void
gala_barrier_emit_trigger (GalaBarrier* self,
                           guint32 time)
{
#line 82 "../src/HotCorners/Barrier.vala"
	g_return_if_fail (self != NULL);
#line 83 "../src/HotCorners/Barrier.vala"
	gala_barrier_set_triggered (self, TRUE);
#line 84 "../src/HotCorners/Barrier.vala"
	self->priv->pressure = (gdouble) 0;
#line 85 "../src/HotCorners/Barrier.vala"
	self->priv->triggered_time = time;
#line 87 "../src/HotCorners/Barrier.vala"
	g_signal_emit (self, gala_barrier_signals[GALA_BARRIER_TRIGGER_SIGNAL], 0);
#line 428 "Barrier.c"
}

static void
gala_barrier_on_left (GalaBarrier* self)
{
#line 90 "../src/HotCorners/Barrier.vala"
	g_return_if_fail (self != NULL);
#line 91 "../src/HotCorners/Barrier.vala"
	self->priv->pressure = (gdouble) 0;
#line 92 "../src/HotCorners/Barrier.vala"
	gala_barrier_set_triggered (self, FALSE);
#line 440 "Barrier.c"
}

gboolean
gala_barrier_get_triggered (GalaBarrier* self)
{
	gboolean result;
#line 12 "../src/HotCorners/Barrier.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 12 "../src/HotCorners/Barrier.vala"
	result = self->priv->_triggered;
#line 12 "../src/HotCorners/Barrier.vala"
	return result;
#line 453 "Barrier.c"
}

void
gala_barrier_set_triggered (GalaBarrier* self,
                            gboolean value)
{
	gboolean old_value;
#line 12 "../src/HotCorners/Barrier.vala"
	g_return_if_fail (self != NULL);
#line 12 "../src/HotCorners/Barrier.vala"
	old_value = gala_barrier_get_triggered (self);
#line 12 "../src/HotCorners/Barrier.vala"
	if (old_value != value) {
#line 12 "../src/HotCorners/Barrier.vala"
		self->priv->_triggered = value;
#line 12 "../src/HotCorners/Barrier.vala"
		g_object_notify_by_pspec ((GObject *) self, gala_barrier_properties[GALA_BARRIER_TRIGGERED_PROPERTY]);
#line 471 "Barrier.c"
	}
}

gint
gala_barrier_get_trigger_pressure_threshold (GalaBarrier* self)
{
	gint result;
#line 14 "../src/HotCorners/Barrier.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 14 "../src/HotCorners/Barrier.vala"
	result = self->priv->_trigger_pressure_threshold;
#line 14 "../src/HotCorners/Barrier.vala"
	return result;
#line 485 "Barrier.c"
}

static void
gala_barrier_set_trigger_pressure_threshold (GalaBarrier* self,
                                             gint value)
{
	gint old_value;
#line 14 "../src/HotCorners/Barrier.vala"
	g_return_if_fail (self != NULL);
#line 14 "../src/HotCorners/Barrier.vala"
	old_value = gala_barrier_get_trigger_pressure_threshold (self);
#line 14 "../src/HotCorners/Barrier.vala"
	if (old_value != value) {
#line 14 "../src/HotCorners/Barrier.vala"
		self->priv->_trigger_pressure_threshold = value;
#line 14 "../src/HotCorners/Barrier.vala"
		g_object_notify_by_pspec ((GObject *) self, gala_barrier_properties[GALA_BARRIER_TRIGGER_PRESSURE_THRESHOLD_PROPERTY]);
#line 503 "Barrier.c"
	}
}

gint
gala_barrier_get_release_pressure_threshold (GalaBarrier* self)
{
	gint result;
#line 15 "../src/HotCorners/Barrier.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 15 "../src/HotCorners/Barrier.vala"
	result = self->priv->_release_pressure_threshold;
#line 15 "../src/HotCorners/Barrier.vala"
	return result;
#line 517 "Barrier.c"
}

static void
gala_barrier_set_release_pressure_threshold (GalaBarrier* self,
                                             gint value)
{
	gint old_value;
#line 15 "../src/HotCorners/Barrier.vala"
	g_return_if_fail (self != NULL);
#line 15 "../src/HotCorners/Barrier.vala"
	old_value = gala_barrier_get_release_pressure_threshold (self);
#line 15 "../src/HotCorners/Barrier.vala"
	if (old_value != value) {
#line 15 "../src/HotCorners/Barrier.vala"
		self->priv->_release_pressure_threshold = value;
#line 15 "../src/HotCorners/Barrier.vala"
		g_object_notify_by_pspec ((GObject *) self, gala_barrier_properties[GALA_BARRIER_RELEASE_PRESSURE_THRESHOLD_PROPERTY]);
#line 535 "Barrier.c"
	}
}

gint
gala_barrier_get_retrigger_pressure_threshold (GalaBarrier* self)
{
	gint result;
#line 16 "../src/HotCorners/Barrier.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 16 "../src/HotCorners/Barrier.vala"
	result = self->priv->_retrigger_pressure_threshold;
#line 16 "../src/HotCorners/Barrier.vala"
	return result;
#line 549 "Barrier.c"
}

static void
gala_barrier_set_retrigger_pressure_threshold (GalaBarrier* self,
                                               gint value)
{
	gint old_value;
#line 16 "../src/HotCorners/Barrier.vala"
	g_return_if_fail (self != NULL);
#line 16 "../src/HotCorners/Barrier.vala"
	old_value = gala_barrier_get_retrigger_pressure_threshold (self);
#line 16 "../src/HotCorners/Barrier.vala"
	if (old_value != value) {
#line 16 "../src/HotCorners/Barrier.vala"
		self->priv->_retrigger_pressure_threshold = value;
#line 16 "../src/HotCorners/Barrier.vala"
		g_object_notify_by_pspec ((GObject *) self, gala_barrier_properties[GALA_BARRIER_RETRIGGER_PRESSURE_THRESHOLD_PROPERTY]);
#line 567 "Barrier.c"
	}
}

gint
gala_barrier_get_retrigger_delay (GalaBarrier* self)
{
	gint result;
#line 17 "../src/HotCorners/Barrier.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 17 "../src/HotCorners/Barrier.vala"
	result = self->priv->_retrigger_delay;
#line 17 "../src/HotCorners/Barrier.vala"
	return result;
#line 581 "Barrier.c"
}

static void
gala_barrier_set_retrigger_delay (GalaBarrier* self,
                                  gint value)
{
	gint old_value;
#line 17 "../src/HotCorners/Barrier.vala"
	g_return_if_fail (self != NULL);
#line 17 "../src/HotCorners/Barrier.vala"
	old_value = gala_barrier_get_retrigger_delay (self);
#line 17 "../src/HotCorners/Barrier.vala"
	if (old_value != value) {
#line 17 "../src/HotCorners/Barrier.vala"
		self->priv->_retrigger_delay = value;
#line 17 "../src/HotCorners/Barrier.vala"
		g_object_notify_by_pspec ((GObject *) self, gala_barrier_properties[GALA_BARRIER_RETRIGGER_DELAY_PROPERTY]);
#line 599 "Barrier.c"
	}
}

static void
gala_barrier_class_init (GalaBarrierClass * klass,
                         gpointer klass_data)
{
#line 9 "../src/HotCorners/Barrier.vala"
	gala_barrier_parent_class = g_type_class_peek_parent (klass);
#line 9 "../src/HotCorners/Barrier.vala"
	g_type_class_adjust_private_offset (klass, &GalaBarrier_private_offset);
#line 9 "../src/HotCorners/Barrier.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_gala_barrier_get_property;
#line 9 "../src/HotCorners/Barrier.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_gala_barrier_set_property;
#line 9 "../src/HotCorners/Barrier.vala"
	G_OBJECT_CLASS (klass)->finalize = gala_barrier_finalize;
#line 9 "../src/HotCorners/Barrier.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_BARRIER_TRIGGERED_PROPERTY, gala_barrier_properties[GALA_BARRIER_TRIGGERED_PROPERTY] = g_param_spec_boolean ("triggered", "triggered", "triggered", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 9 "../src/HotCorners/Barrier.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_BARRIER_TRIGGER_PRESSURE_THRESHOLD_PROPERTY, gala_barrier_properties[GALA_BARRIER_TRIGGER_PRESSURE_THRESHOLD_PROPERTY] = g_param_spec_int ("trigger-pressure-threshold", "trigger-pressure-threshold", "trigger-pressure-threshold", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 9 "../src/HotCorners/Barrier.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_BARRIER_RELEASE_PRESSURE_THRESHOLD_PROPERTY, gala_barrier_properties[GALA_BARRIER_RELEASE_PRESSURE_THRESHOLD_PROPERTY] = g_param_spec_int ("release-pressure-threshold", "release-pressure-threshold", "release-pressure-threshold", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 9 "../src/HotCorners/Barrier.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_BARRIER_RETRIGGER_PRESSURE_THRESHOLD_PROPERTY, gala_barrier_properties[GALA_BARRIER_RETRIGGER_PRESSURE_THRESHOLD_PROPERTY] = g_param_spec_int ("retrigger-pressure-threshold", "retrigger-pressure-threshold", "retrigger-pressure-threshold", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 9 "../src/HotCorners/Barrier.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_BARRIER_RETRIGGER_DELAY_PROPERTY, gala_barrier_properties[GALA_BARRIER_RETRIGGER_DELAY_PROPERTY] = g_param_spec_int ("retrigger-delay", "retrigger-delay", "retrigger-delay", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 9 "../src/HotCorners/Barrier.vala"
	gala_barrier_signals[GALA_BARRIER_TRIGGER_SIGNAL] = g_signal_new ("trigger", GALA_TYPE_BARRIER, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
#line 629 "Barrier.c"
}

static void
gala_barrier_instance_init (GalaBarrier * self,
                            gpointer klass)
{
#line 9 "../src/HotCorners/Barrier.vala"
	self->priv = gala_barrier_get_instance_private (self);
#line 12 "../src/HotCorners/Barrier.vala"
	self->priv->_triggered = FALSE;
#line 640 "Barrier.c"
}

static void
gala_barrier_finalize (GObject * obj)
{
	GalaBarrier * self;
	MetaBarrier* _tmp0_;
#line 9 "../src/HotCorners/Barrier.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_TYPE_BARRIER, GalaBarrier);
#line 59 "../src/HotCorners/Barrier.vala"
	_tmp0_ = self->priv->barrier;
#line 59 "../src/HotCorners/Barrier.vala"
	meta_barrier_destroy (_tmp0_);
#line 19 "../src/HotCorners/Barrier.vala"
	_g_object_unref0 (self->priv->barrier);
#line 9 "../src/HotCorners/Barrier.vala"
	G_OBJECT_CLASS (gala_barrier_parent_class)->finalize (obj);
#line 658 "Barrier.c"
}

/**
  * A pointer barrier supporting pressured activation.
  */
 G_GNUC_NO_INLINE static GType
gala_barrier_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GalaBarrierClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gala_barrier_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GalaBarrier), 0, (GInstanceInitFunc) gala_barrier_instance_init, NULL };
	GType gala_barrier_type_id;
	gala_barrier_type_id = g_type_register_static (G_TYPE_OBJECT, "GalaBarrier", &g_define_type_info, 0);
	GalaBarrier_private_offset = g_type_add_instance_private (gala_barrier_type_id, sizeof (GalaBarrierPrivate));
	return gala_barrier_type_id;
}

GType
gala_barrier_get_type (void)
{
	static gsize gala_barrier_type_id__once = 0;
	if (g_once_init_enter (&gala_barrier_type_id__once)) {
		GType gala_barrier_type_id;
		gala_barrier_type_id = gala_barrier_get_type_once ();
		g_once_init_leave (&gala_barrier_type_id__once, gala_barrier_type_id);
	}
	return gala_barrier_type_id__once;
}

static void
_vala_gala_barrier_get_property (GObject * object,
                                 guint property_id,
                                 GValue * value,
                                 GParamSpec * pspec)
{
	GalaBarrier * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_TYPE_BARRIER, GalaBarrier);
#line 9 "../src/HotCorners/Barrier.vala"
	switch (property_id) {
#line 9 "../src/HotCorners/Barrier.vala"
		case GALA_BARRIER_TRIGGERED_PROPERTY:
#line 9 "../src/HotCorners/Barrier.vala"
		g_value_set_boolean (value, gala_barrier_get_triggered (self));
#line 9 "../src/HotCorners/Barrier.vala"
		break;
#line 9 "../src/HotCorners/Barrier.vala"
		case GALA_BARRIER_TRIGGER_PRESSURE_THRESHOLD_PROPERTY:
#line 9 "../src/HotCorners/Barrier.vala"
		g_value_set_int (value, gala_barrier_get_trigger_pressure_threshold (self));
#line 9 "../src/HotCorners/Barrier.vala"
		break;
#line 9 "../src/HotCorners/Barrier.vala"
		case GALA_BARRIER_RELEASE_PRESSURE_THRESHOLD_PROPERTY:
#line 9 "../src/HotCorners/Barrier.vala"
		g_value_set_int (value, gala_barrier_get_release_pressure_threshold (self));
#line 9 "../src/HotCorners/Barrier.vala"
		break;
#line 9 "../src/HotCorners/Barrier.vala"
		case GALA_BARRIER_RETRIGGER_PRESSURE_THRESHOLD_PROPERTY:
#line 9 "../src/HotCorners/Barrier.vala"
		g_value_set_int (value, gala_barrier_get_retrigger_pressure_threshold (self));
#line 9 "../src/HotCorners/Barrier.vala"
		break;
#line 9 "../src/HotCorners/Barrier.vala"
		case GALA_BARRIER_RETRIGGER_DELAY_PROPERTY:
#line 9 "../src/HotCorners/Barrier.vala"
		g_value_set_int (value, gala_barrier_get_retrigger_delay (self));
#line 9 "../src/HotCorners/Barrier.vala"
		break;
#line 726 "Barrier.c"
		default:
#line 9 "../src/HotCorners/Barrier.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 9 "../src/HotCorners/Barrier.vala"
		break;
#line 732 "Barrier.c"
	}
}

static void
_vala_gala_barrier_set_property (GObject * object,
                                 guint property_id,
                                 const GValue * value,
                                 GParamSpec * pspec)
{
	GalaBarrier * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_TYPE_BARRIER, GalaBarrier);
#line 9 "../src/HotCorners/Barrier.vala"
	switch (property_id) {
#line 9 "../src/HotCorners/Barrier.vala"
		case GALA_BARRIER_TRIGGERED_PROPERTY:
#line 9 "../src/HotCorners/Barrier.vala"
		gala_barrier_set_triggered (self, g_value_get_boolean (value));
#line 9 "../src/HotCorners/Barrier.vala"
		break;
#line 9 "../src/HotCorners/Barrier.vala"
		case GALA_BARRIER_TRIGGER_PRESSURE_THRESHOLD_PROPERTY:
#line 9 "../src/HotCorners/Barrier.vala"
		gala_barrier_set_trigger_pressure_threshold (self, g_value_get_int (value));
#line 9 "../src/HotCorners/Barrier.vala"
		break;
#line 9 "../src/HotCorners/Barrier.vala"
		case GALA_BARRIER_RELEASE_PRESSURE_THRESHOLD_PROPERTY:
#line 9 "../src/HotCorners/Barrier.vala"
		gala_barrier_set_release_pressure_threshold (self, g_value_get_int (value));
#line 9 "../src/HotCorners/Barrier.vala"
		break;
#line 9 "../src/HotCorners/Barrier.vala"
		case GALA_BARRIER_RETRIGGER_PRESSURE_THRESHOLD_PROPERTY:
#line 9 "../src/HotCorners/Barrier.vala"
		gala_barrier_set_retrigger_pressure_threshold (self, g_value_get_int (value));
#line 9 "../src/HotCorners/Barrier.vala"
		break;
#line 9 "../src/HotCorners/Barrier.vala"
		case GALA_BARRIER_RETRIGGER_DELAY_PROPERTY:
#line 9 "../src/HotCorners/Barrier.vala"
		gala_barrier_set_retrigger_delay (self, g_value_get_int (value));
#line 9 "../src/HotCorners/Barrier.vala"
		break;
#line 776 "Barrier.c"
		default:
#line 9 "../src/HotCorners/Barrier.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 9 "../src/HotCorners/Barrier.vala"
		break;
#line 782 "Barrier.c"
	}
}

