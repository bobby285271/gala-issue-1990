/* CenteredWindow.c generated by valac 0.56.17, the Vala compiler
 * generated from CenteredWindow.vala, do not modify */

/*
 * Copyright 2024 elementary, Inc. (https://elementary.io)
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 * Authored by: Leonhard Kargl <leo.kargl@proton.me>
 */

#include <glib-object.h>
#include "gala.h"
#include <meta/window.h>
#include <glib.h>
#include <meta/display.h>
#include <meta/meta-plugin.h>
#include <mtk/mtk.h>
#include <meta/meta-monitor-manager.h>
#include <meta/meta-context.h>
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

#define GALA_TYPE_CENTERED_WINDOW (gala_centered_window_get_type ())
#define GALA_CENTERED_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GALA_TYPE_CENTERED_WINDOW, GalaCenteredWindow))
#define GALA_CENTERED_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GALA_TYPE_CENTERED_WINDOW, GalaCenteredWindowClass))
#define GALA_IS_CENTERED_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GALA_TYPE_CENTERED_WINDOW))
#define GALA_IS_CENTERED_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GALA_TYPE_CENTERED_WINDOW))
#define GALA_CENTERED_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GALA_TYPE_CENTERED_WINDOW, GalaCenteredWindowClass))

typedef struct _GalaCenteredWindow GalaCenteredWindow;
typedef struct _GalaCenteredWindowClass GalaCenteredWindowClass;
typedef struct _GalaCenteredWindowPrivate GalaCenteredWindowPrivate;
enum  {
	GALA_CENTERED_WINDOW_0_PROPERTY,
	GALA_CENTERED_WINDOW_WM_PROPERTY,
	GALA_CENTERED_WINDOW_WINDOW_PROPERTY,
	GALA_CENTERED_WINDOW_NUM_PROPERTIES
};
static GParamSpec* gala_centered_window_properties[GALA_CENTERED_WINDOW_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block58Data Block58Data;

struct _GalaCenteredWindow {
	GObject parent_instance;
	GalaCenteredWindowPrivate * priv;
};

struct _GalaCenteredWindowClass {
	GObjectClass parent_class;
};

struct _GalaCenteredWindowPrivate {
	GalaWindowManager* _wm;
	MetaWindow* _window;
};

struct _Block58Data {
	int _ref_count_;
	GalaCenteredWindow* self;
	gint x;
	gint y;
};

static gint GalaCenteredWindow_private_offset;
static gpointer gala_centered_window_parent_class = NULL;

VALA_EXTERN GType gala_centered_window_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GalaCenteredWindow, g_object_unref)
VALA_EXTERN GalaCenteredWindow* gala_centered_window_new (GalaWindowManager* wm,
                                              MetaWindow* window);
VALA_EXTERN GalaCenteredWindow* gala_centered_window_construct (GType object_type,
                                                    GalaWindowManager* wm,
                                                    MetaWindow* window);
static void gala_centered_window_position_window (GalaCenteredWindow* self);
static Block58Data* block58_data_ref (Block58Data* _data58_);
static void block58_data_unref (void * _userdata_);
VALA_EXTERN GalaWindowManager* gala_centered_window_get_wm (GalaCenteredWindow* self);
VALA_EXTERN MetaWindow* gala_centered_window_get_window (GalaCenteredWindow* self);
static gboolean __lambda114_ (Block58Data* _data58_);
static gboolean ___lambda114__gsource_func (gpointer self);
static void gala_centered_window_set_wm (GalaCenteredWindow* self,
                                  GalaWindowManager* value);
static void gala_centered_window_set_window (GalaCenteredWindow* self,
                                      MetaWindow* value);
static GObject * gala_centered_window_constructor (GType type,
                                            guint n_construct_properties,
                                            GObjectConstructParam * construct_properties);
static void _gala_centered_window_position_window_meta_window_size_changed (MetaWindow* _sender,
                                                                     gpointer self);
static void _gala_centered_window___lambda115_ (GalaCenteredWindow* self);
static void __gala_centered_window___lambda115__meta_monitor_manager_monitors_changed (MetaMonitorManager* _sender,
                                                                                gpointer self);
static void _gala_centered_window___lambda116_ (GalaCenteredWindow* self);
static void __gala_centered_window___lambda116__meta_window_shown (MetaWindow* _sender,
                                                            gpointer self);
static void gala_centered_window_finalize (GObject * obj);
static GType gala_centered_window_get_type_once (void);
static void _vala_gala_centered_window_get_property (GObject * object,
                                              guint property_id,
                                              GValue * value,
                                              GParamSpec * pspec);
static void _vala_gala_centered_window_set_property (GObject * object,
                                              guint property_id,
                                              const GValue * value,
                                              GParamSpec * pspec);

static inline gpointer
gala_centered_window_get_instance_private (GalaCenteredWindow* self)
{
	return G_STRUCT_MEMBER_P (self, GalaCenteredWindow_private_offset);
}

GalaCenteredWindow*
gala_centered_window_construct (GType object_type,
                                GalaWindowManager* wm,
                                MetaWindow* window)
{
	GalaCenteredWindow * self = NULL;
#line 12 "../src/ShellClients/CenteredWindow.vala"
	g_return_val_if_fail (wm != NULL, NULL);
#line 12 "../src/ShellClients/CenteredWindow.vala"
	g_return_val_if_fail (window != NULL, NULL);
#line 13 "../src/ShellClients/CenteredWindow.vala"
	self = (GalaCenteredWindow*) g_object_new (object_type, "wm", wm, "window", window, NULL);
#line 12 "../src/ShellClients/CenteredWindow.vala"
	return self;
#line 145 "CenteredWindow.c"
}

GalaCenteredWindow*
gala_centered_window_new (GalaWindowManager* wm,
                          MetaWindow* window)
{
#line 12 "../src/ShellClients/CenteredWindow.vala"
	return gala_centered_window_construct (GALA_TYPE_CENTERED_WINDOW, wm, window);
#line 154 "CenteredWindow.c"
}

static Block58Data*
block58_data_ref (Block58Data* _data58_)
{
#line 28 "../src/ShellClients/CenteredWindow.vala"
	g_atomic_int_inc (&_data58_->_ref_count_);
#line 28 "../src/ShellClients/CenteredWindow.vala"
	return _data58_;
#line 164 "CenteredWindow.c"
}

static void
block58_data_unref (void * _userdata_)
{
	Block58Data* _data58_;
	_data58_ = (Block58Data*) _userdata_;
#line 28 "../src/ShellClients/CenteredWindow.vala"
	if (g_atomic_int_dec_and_test (&_data58_->_ref_count_)) {
#line 174 "CenteredWindow.c"
		GalaCenteredWindow* self;
#line 28 "../src/ShellClients/CenteredWindow.vala"
		self = _data58_->self;
#line 28 "../src/ShellClients/CenteredWindow.vala"
		_g_object_unref0 (self);
#line 28 "../src/ShellClients/CenteredWindow.vala"
		g_slice_free (Block58Data, _data58_);
#line 182 "CenteredWindow.c"
	}
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 29 "../src/ShellClients/CenteredWindow.vala"
	return self ? g_object_ref (self) : NULL;
#line 191 "CenteredWindow.c"
}

static gboolean
__lambda114_ (Block58Data* _data58_)
{
	GalaCenteredWindow* self;
	MetaWindow* _tmp0_;
	gboolean result;
#line 36 "../src/ShellClients/CenteredWindow.vala"
	self = _data58_->self;
#line 37 "../src/ShellClients/CenteredWindow.vala"
	_tmp0_ = self->priv->_window;
#line 37 "../src/ShellClients/CenteredWindow.vala"
	meta_window_move_frame (_tmp0_, FALSE, _data58_->x, _data58_->y);
#line 38 "../src/ShellClients/CenteredWindow.vala"
	result = G_SOURCE_REMOVE;
#line 38 "../src/ShellClients/CenteredWindow.vala"
	return result;
#line 210 "CenteredWindow.c"
}

static gboolean
___lambda114__gsource_func (gpointer self)
{
	gboolean result;
	result = __lambda114_ (self);
#line 36 "../src/ShellClients/CenteredWindow.vala"
	return result;
#line 220 "CenteredWindow.c"
}

static void
gala_centered_window_position_window (GalaCenteredWindow* self)
{
	Block58Data* _data58_;
	MetaDisplay* display = NULL;
	GalaWindowManager* _tmp0_;
	MetaDisplay* _tmp1_;
	MetaDisplay* _tmp2_;
	MtkRectangle monitor_geom = {0};
	MtkRectangle _tmp3_ = {0};
	MtkRectangle window_rect = {0};
	MetaWindow* _tmp4_;
	MtkRectangle _tmp5_ = {0};
	MtkRectangle _tmp6_;
	MtkRectangle _tmp7_;
	MtkRectangle _tmp8_;
	MtkRectangle _tmp9_;
	MtkRectangle _tmp10_;
	MtkRectangle _tmp11_;
#line 28 "../src/ShellClients/CenteredWindow.vala"
	g_return_if_fail (self != NULL);
#line 28 "../src/ShellClients/CenteredWindow.vala"
	_data58_ = g_slice_new0 (Block58Data);
#line 28 "../src/ShellClients/CenteredWindow.vala"
	_data58_->_ref_count_ = 1;
#line 28 "../src/ShellClients/CenteredWindow.vala"
	_data58_->self = g_object_ref (self);
#line 29 "../src/ShellClients/CenteredWindow.vala"
	_tmp0_ = self->priv->_wm;
#line 29 "../src/ShellClients/CenteredWindow.vala"
	_tmp1_ = meta_plugin_get_display ((MetaPlugin*) _tmp0_);
#line 29 "../src/ShellClients/CenteredWindow.vala"
	_tmp2_ = _g_object_ref0 (_tmp1_);
#line 29 "../src/ShellClients/CenteredWindow.vala"
	display = _tmp2_;
#line 30 "../src/ShellClients/CenteredWindow.vala"
	meta_display_get_monitor_geometry (display, meta_display_get_primary_monitor (display), &_tmp3_);
#line 30 "../src/ShellClients/CenteredWindow.vala"
	monitor_geom = _tmp3_;
#line 31 "../src/ShellClients/CenteredWindow.vala"
	_tmp4_ = self->priv->_window;
#line 31 "../src/ShellClients/CenteredWindow.vala"
	meta_window_get_frame_rect (_tmp4_, &_tmp5_);
#line 31 "../src/ShellClients/CenteredWindow.vala"
	window_rect = _tmp5_;
#line 33 "../src/ShellClients/CenteredWindow.vala"
	_tmp6_ = monitor_geom;
#line 33 "../src/ShellClients/CenteredWindow.vala"
	_tmp7_ = monitor_geom;
#line 33 "../src/ShellClients/CenteredWindow.vala"
	_tmp8_ = window_rect;
#line 33 "../src/ShellClients/CenteredWindow.vala"
	_data58_->x = _tmp6_.x + ((_tmp7_.width - _tmp8_.width) / 2);
#line 34 "../src/ShellClients/CenteredWindow.vala"
	_tmp9_ = monitor_geom;
#line 34 "../src/ShellClients/CenteredWindow.vala"
	_tmp10_ = monitor_geom;
#line 34 "../src/ShellClients/CenteredWindow.vala"
	_tmp11_ = window_rect;
#line 34 "../src/ShellClients/CenteredWindow.vala"
	_data58_->y = _tmp9_.y + ((_tmp10_.height - _tmp11_.height) / 2);
#line 36 "../src/ShellClients/CenteredWindow.vala"
	g_idle_add_full (G_PRIORITY_DEFAULT_IDLE, ___lambda114__gsource_func, block58_data_ref (_data58_), block58_data_unref);
#line 28 "../src/ShellClients/CenteredWindow.vala"
	_g_object_unref0 (display);
#line 28 "../src/ShellClients/CenteredWindow.vala"
	block58_data_unref (_data58_);
#line 28 "../src/ShellClients/CenteredWindow.vala"
	_data58_ = NULL;
#line 292 "CenteredWindow.c"
}

GalaWindowManager*
gala_centered_window_get_wm (GalaCenteredWindow* self)
{
	GalaWindowManager* result;
	GalaWindowManager* _tmp0_;
#line 9 "../src/ShellClients/CenteredWindow.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 9 "../src/ShellClients/CenteredWindow.vala"
	_tmp0_ = self->priv->_wm;
#line 9 "../src/ShellClients/CenteredWindow.vala"
	result = _tmp0_;
#line 9 "../src/ShellClients/CenteredWindow.vala"
	return result;
#line 308 "CenteredWindow.c"
}

static void
gala_centered_window_set_wm (GalaCenteredWindow* self,
                             GalaWindowManager* value)
{
	GalaWindowManager* old_value;
#line 9 "../src/ShellClients/CenteredWindow.vala"
	g_return_if_fail (self != NULL);
#line 9 "../src/ShellClients/CenteredWindow.vala"
	old_value = gala_centered_window_get_wm (self);
#line 9 "../src/ShellClients/CenteredWindow.vala"
	if (old_value != value) {
#line 322 "CenteredWindow.c"
		GalaWindowManager* _tmp0_;
#line 9 "../src/ShellClients/CenteredWindow.vala"
		_tmp0_ = _g_object_ref0 (value);
#line 9 "../src/ShellClients/CenteredWindow.vala"
		_g_object_unref0 (self->priv->_wm);
#line 9 "../src/ShellClients/CenteredWindow.vala"
		self->priv->_wm = _tmp0_;
#line 9 "../src/ShellClients/CenteredWindow.vala"
		g_object_notify_by_pspec ((GObject *) self, gala_centered_window_properties[GALA_CENTERED_WINDOW_WM_PROPERTY]);
#line 332 "CenteredWindow.c"
	}
}

MetaWindow*
gala_centered_window_get_window (GalaCenteredWindow* self)
{
	MetaWindow* result;
	MetaWindow* _tmp0_;
#line 10 "../src/ShellClients/CenteredWindow.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 10 "../src/ShellClients/CenteredWindow.vala"
	_tmp0_ = self->priv->_window;
#line 10 "../src/ShellClients/CenteredWindow.vala"
	result = _tmp0_;
#line 10 "../src/ShellClients/CenteredWindow.vala"
	return result;
#line 349 "CenteredWindow.c"
}

static void
gala_centered_window_set_window (GalaCenteredWindow* self,
                                 MetaWindow* value)
{
	MetaWindow* old_value;
#line 10 "../src/ShellClients/CenteredWindow.vala"
	g_return_if_fail (self != NULL);
#line 10 "../src/ShellClients/CenteredWindow.vala"
	old_value = gala_centered_window_get_window (self);
#line 10 "../src/ShellClients/CenteredWindow.vala"
	if (old_value != value) {
#line 363 "CenteredWindow.c"
		MetaWindow* _tmp0_;
#line 10 "../src/ShellClients/CenteredWindow.vala"
		_tmp0_ = _g_object_ref0 (value);
#line 10 "../src/ShellClients/CenteredWindow.vala"
		_g_object_unref0 (self->priv->_window);
#line 10 "../src/ShellClients/CenteredWindow.vala"
		self->priv->_window = _tmp0_;
#line 10 "../src/ShellClients/CenteredWindow.vala"
		g_object_notify_by_pspec ((GObject *) self, gala_centered_window_properties[GALA_CENTERED_WINDOW_WINDOW_PROPERTY]);
#line 373 "CenteredWindow.c"
	}
}

static void
_gala_centered_window_position_window_meta_window_size_changed (MetaWindow* _sender,
                                                                gpointer self)
{
#line 17 "../src/ShellClients/CenteredWindow.vala"
	gala_centered_window_position_window ((GalaCenteredWindow*) self);
#line 383 "CenteredWindow.c"
}

static void
_gala_centered_window___lambda115_ (GalaCenteredWindow* self)
{
#line 21 "../src/ShellClients/CenteredWindow.vala"
	gala_centered_window_position_window (self);
#line 391 "CenteredWindow.c"
}

static void
__gala_centered_window___lambda115__meta_monitor_manager_monitors_changed (MetaMonitorManager* _sender,
                                                                           gpointer self)
{
#line 21 "../src/ShellClients/CenteredWindow.vala"
	_gala_centered_window___lambda115_ ((GalaCenteredWindow*) self);
#line 400 "CenteredWindow.c"
}

static void
_gala_centered_window___lambda116_ (GalaCenteredWindow* self)
{
	MetaWindow* _tmp0_;
	GalaWindowManager* _tmp1_;
	MetaDisplay* _tmp2_;
#line 25 "../src/ShellClients/CenteredWindow.vala"
	_tmp0_ = self->priv->_window;
#line 25 "../src/ShellClients/CenteredWindow.vala"
	_tmp1_ = self->priv->_wm;
#line 25 "../src/ShellClients/CenteredWindow.vala"
	_tmp2_ = meta_plugin_get_display ((MetaPlugin*) _tmp1_);
#line 25 "../src/ShellClients/CenteredWindow.vala"
	meta_window_focus (_tmp0_, meta_display_get_current_time (_tmp2_));
#line 417 "CenteredWindow.c"
}

static void
__gala_centered_window___lambda116__meta_window_shown (MetaWindow* _sender,
                                                       gpointer self)
{
#line 25 "../src/ShellClients/CenteredWindow.vala"
	_gala_centered_window___lambda116_ ((GalaCenteredWindow*) self);
#line 426 "CenteredWindow.c"
}

static GObject *
gala_centered_window_constructor (GType type,
                                  guint n_construct_properties,
                                  GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	GalaCenteredWindow * self;
	MetaWindow* _tmp0_;
	MetaWindow* _tmp1_;
	MetaMonitorManager* monitor_manager = NULL;
	GalaWindowManager* _tmp2_;
	MetaDisplay* _tmp3_;
	MetaContext* _tmp4_;
	MetaBackend* _tmp5_;
	MetaMonitorManager* _tmp6_;
	MetaMonitorManager* _tmp7_;
	MetaMonitorManager* _tmp8_;
	MetaWindow* _tmp9_;
#line 16 "../src/ShellClients/CenteredWindow.vala"
	parent_class = G_OBJECT_CLASS (gala_centered_window_parent_class);
#line 16 "../src/ShellClients/CenteredWindow.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 16 "../src/ShellClients/CenteredWindow.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_TYPE_CENTERED_WINDOW, GalaCenteredWindow);
#line 17 "../src/ShellClients/CenteredWindow.vala"
	_tmp0_ = self->priv->_window;
#line 17 "../src/ShellClients/CenteredWindow.vala"
	g_signal_connect_object (_tmp0_, "size-changed", (GCallback) _gala_centered_window_position_window_meta_window_size_changed, self, 0);
#line 18 "../src/ShellClients/CenteredWindow.vala"
	_tmp1_ = self->priv->_window;
#line 18 "../src/ShellClients/CenteredWindow.vala"
	meta_window_stick (_tmp1_);
#line 20 "../src/ShellClients/CenteredWindow.vala"
	_tmp2_ = self->priv->_wm;
#line 20 "../src/ShellClients/CenteredWindow.vala"
	_tmp3_ = meta_plugin_get_display ((MetaPlugin*) _tmp2_);
#line 20 "../src/ShellClients/CenteredWindow.vala"
	_tmp4_ = meta_display_get_context (_tmp3_);
#line 20 "../src/ShellClients/CenteredWindow.vala"
	_tmp5_ = meta_context_get_backend (_tmp4_);
#line 20 "../src/ShellClients/CenteredWindow.vala"
	_tmp6_ = meta_backend_get_monitor_manager (_tmp5_);
#line 20 "../src/ShellClients/CenteredWindow.vala"
	_tmp7_ = _g_object_ref0 (_tmp6_);
#line 20 "../src/ShellClients/CenteredWindow.vala"
	monitor_manager = _tmp7_;
#line 21 "../src/ShellClients/CenteredWindow.vala"
	_tmp8_ = monitor_manager;
#line 21 "../src/ShellClients/CenteredWindow.vala"
	g_signal_connect_object (_tmp8_, "monitors-changed", (GCallback) __gala_centered_window___lambda115__meta_monitor_manager_monitors_changed, self, 0);
#line 23 "../src/ShellClients/CenteredWindow.vala"
	gala_centered_window_position_window (self);
#line 25 "../src/ShellClients/CenteredWindow.vala"
	_tmp9_ = self->priv->_window;
#line 25 "../src/ShellClients/CenteredWindow.vala"
	g_signal_connect_object (_tmp9_, "shown", (GCallback) __gala_centered_window___lambda116__meta_window_shown, self, 0);
#line 16 "../src/ShellClients/CenteredWindow.vala"
	_g_object_unref0 (monitor_manager);
#line 16 "../src/ShellClients/CenteredWindow.vala"
	return obj;
#line 490 "CenteredWindow.c"
}

static void
gala_centered_window_class_init (GalaCenteredWindowClass * klass,
                                 gpointer klass_data)
{
#line 8 "../src/ShellClients/CenteredWindow.vala"
	gala_centered_window_parent_class = g_type_class_peek_parent (klass);
#line 8 "../src/ShellClients/CenteredWindow.vala"
	g_type_class_adjust_private_offset (klass, &GalaCenteredWindow_private_offset);
#line 8 "../src/ShellClients/CenteredWindow.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_gala_centered_window_get_property;
#line 8 "../src/ShellClients/CenteredWindow.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_gala_centered_window_set_property;
#line 8 "../src/ShellClients/CenteredWindow.vala"
	G_OBJECT_CLASS (klass)->constructor = gala_centered_window_constructor;
#line 8 "../src/ShellClients/CenteredWindow.vala"
	G_OBJECT_CLASS (klass)->finalize = gala_centered_window_finalize;
#line 8 "../src/ShellClients/CenteredWindow.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_CENTERED_WINDOW_WM_PROPERTY, gala_centered_window_properties[GALA_CENTERED_WINDOW_WM_PROPERTY] = g_param_spec_object ("wm", "wm", "wm", GALA_TYPE_WINDOW_MANAGER, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 8 "../src/ShellClients/CenteredWindow.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_CENTERED_WINDOW_WINDOW_PROPERTY, gala_centered_window_properties[GALA_CENTERED_WINDOW_WINDOW_PROPERTY] = g_param_spec_object ("window", "window", "window", meta_window_get_type (), G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 513 "CenteredWindow.c"
}

static void
gala_centered_window_instance_init (GalaCenteredWindow * self,
                                    gpointer klass)
{
#line 8 "../src/ShellClients/CenteredWindow.vala"
	self->priv = gala_centered_window_get_instance_private (self);
#line 522 "CenteredWindow.c"
}

static void
gala_centered_window_finalize (GObject * obj)
{
	GalaCenteredWindow * self;
#line 8 "../src/ShellClients/CenteredWindow.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_TYPE_CENTERED_WINDOW, GalaCenteredWindow);
#line 9 "../src/ShellClients/CenteredWindow.vala"
	_g_object_unref0 (self->priv->_wm);
#line 10 "../src/ShellClients/CenteredWindow.vala"
	_g_object_unref0 (self->priv->_window);
#line 8 "../src/ShellClients/CenteredWindow.vala"
	G_OBJECT_CLASS (gala_centered_window_parent_class)->finalize (obj);
#line 537 "CenteredWindow.c"
}

 G_GNUC_NO_INLINE static GType
gala_centered_window_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GalaCenteredWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gala_centered_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GalaCenteredWindow), 0, (GInstanceInitFunc) gala_centered_window_instance_init, NULL };
	GType gala_centered_window_type_id;
	gala_centered_window_type_id = g_type_register_static (G_TYPE_OBJECT, "GalaCenteredWindow", &g_define_type_info, 0);
	GalaCenteredWindow_private_offset = g_type_add_instance_private (gala_centered_window_type_id, sizeof (GalaCenteredWindowPrivate));
	return gala_centered_window_type_id;
}

GType
gala_centered_window_get_type (void)
{
	static gsize gala_centered_window_type_id__once = 0;
	if (g_once_init_enter (&gala_centered_window_type_id__once)) {
		GType gala_centered_window_type_id;
		gala_centered_window_type_id = gala_centered_window_get_type_once ();
		g_once_init_leave (&gala_centered_window_type_id__once, gala_centered_window_type_id);
	}
	return gala_centered_window_type_id__once;
}

static void
_vala_gala_centered_window_get_property (GObject * object,
                                         guint property_id,
                                         GValue * value,
                                         GParamSpec * pspec)
{
	GalaCenteredWindow * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_TYPE_CENTERED_WINDOW, GalaCenteredWindow);
#line 8 "../src/ShellClients/CenteredWindow.vala"
	switch (property_id) {
#line 8 "../src/ShellClients/CenteredWindow.vala"
		case GALA_CENTERED_WINDOW_WM_PROPERTY:
#line 8 "../src/ShellClients/CenteredWindow.vala"
		g_value_set_object (value, gala_centered_window_get_wm (self));
#line 8 "../src/ShellClients/CenteredWindow.vala"
		break;
#line 8 "../src/ShellClients/CenteredWindow.vala"
		case GALA_CENTERED_WINDOW_WINDOW_PROPERTY:
#line 8 "../src/ShellClients/CenteredWindow.vala"
		g_value_set_object (value, gala_centered_window_get_window (self));
#line 8 "../src/ShellClients/CenteredWindow.vala"
		break;
#line 584 "CenteredWindow.c"
		default:
#line 8 "../src/ShellClients/CenteredWindow.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 8 "../src/ShellClients/CenteredWindow.vala"
		break;
#line 590 "CenteredWindow.c"
	}
}

static void
_vala_gala_centered_window_set_property (GObject * object,
                                         guint property_id,
                                         const GValue * value,
                                         GParamSpec * pspec)
{
	GalaCenteredWindow * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_TYPE_CENTERED_WINDOW, GalaCenteredWindow);
#line 8 "../src/ShellClients/CenteredWindow.vala"
	switch (property_id) {
#line 8 "../src/ShellClients/CenteredWindow.vala"
		case GALA_CENTERED_WINDOW_WM_PROPERTY:
#line 8 "../src/ShellClients/CenteredWindow.vala"
		gala_centered_window_set_wm (self, g_value_get_object (value));
#line 8 "../src/ShellClients/CenteredWindow.vala"
		break;
#line 8 "../src/ShellClients/CenteredWindow.vala"
		case GALA_CENTERED_WINDOW_WINDOW_PROPERTY:
#line 8 "../src/ShellClients/CenteredWindow.vala"
		gala_centered_window_set_window (self, g_value_get_object (value));
#line 8 "../src/ShellClients/CenteredWindow.vala"
		break;
#line 616 "CenteredWindow.c"
		default:
#line 8 "../src/ShellClients/CenteredWindow.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 8 "../src/ShellClients/CenteredWindow.vala"
		break;
#line 622 "CenteredWindow.c"
	}
}

