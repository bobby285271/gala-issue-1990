/* gala.vapi generated by valac 0.56.17, do not modify. */

namespace Gala {
	namespace Drawing {
		[CCode (cheader_filename = "gala.h")]
		public class BufferSurface : GLib.Object {
			public BufferSurface (int width, int height);
			public Gala.Drawing.Color average_color ();
			public void clear ();
			public void exponential_blur (int radius);
			public void fast_blur (int radius, int process_count = 1);
			public void gaussian_blur (int radius);
			public Gdk.Pixbuf load_to_pixbuf ();
			public BufferSurface.with_buffer_surface (int width, int height, Gala.Drawing.BufferSurface model);
			public BufferSurface.with_surface (int width, int height, Cairo.Surface model);
			public Cairo.Context context { get; }
			public int height { get; private set; }
			public Cairo.Surface surface { get; private set; }
			public int width { get; private set; }
		}
		[CCode (cheader_filename = "gala.h")]
		public class Canvas : GLib.Object, Clutter.Content {
			public Canvas ();
			public void set_scale_factor (float new_scale_factor);
			public void set_size (int new_width, int new_height);
			public signal void draw (Cairo.Context cr, int width, int height);
		}
		[CCode (cheader_filename = "gala.h")]
		public class Color : GLib.Object {
			public double A;
			public double B;
			public double G;
			public double R;
			public const Gdk.RGBA DARK_BACKGROUND;
			public const Gdk.RGBA DARK_BORDER;
			public const Gdk.RGBA DARK_HIGHLIGHT;
			public const Gdk.RGBA LIGHT_BACKGROUND;
			public const Gdk.RGBA LIGHT_BORDER;
			public const Gdk.RGBA LIGHT_HIGHLIGHT;
			public const Gdk.RGBA TOOLTIP_BACKGROUND;
			public const Gdk.RGBA TOOLTIP_TEXT_COLOR;
			public Color (double R, double G, double B, double A);
			public Gala.Drawing.Color add_hue (double val);
			public static uint8 alpha_from_int (int color);
			public static uint8 blue_from_int (int color);
			public Gala.Drawing.Color brighten_val (double amount);
			public Gala.Drawing.Color darken_by_sat (double amount);
			public Gala.Drawing.Color darken_val (double amount);
			public Color.from_int (int color);
			public Color.from_rgba (Gdk.RGBA color);
			public Color.from_string (string color);
			public double get_hue ();
			public double get_sat ();
			public double get_val ();
			public static uint8 green_from_int (int color);
			public Gala.Drawing.Color multiply_sat (double amount);
			public static uint8 red_from_int (int color);
			public Gala.Drawing.Color set_alpha (double alpha);
			public Gala.Drawing.Color set_hue (double hue);
			public Gala.Drawing.Color set_max_sat (double sat);
			public Gala.Drawing.Color set_max_val (double val);
			public Gala.Drawing.Color set_min_sat (double sat);
			public Gala.Drawing.Color set_min_value (double val);
			public Gala.Drawing.Color set_sat (double sat);
			public Gala.Drawing.Color set_val (double val);
			public void settings_deserialize (string s);
			public string settings_serialize ();
			public int to_int ();
			public string to_string ();
		}
		[CCode (cheader_filename = "gala.h")]
		public class StyleManager : GLib.Object {
			public enum ColorScheme {
				NO_PREFERENCE,
				DARK,
				LIGHT
			}
			public StyleManager ();
			public static Gala.Drawing.StyleManager get_instance ();
			public Gala.Drawing.StyleManager.ColorScheme prefers_color_scheme { get; private set; }
			public Gdk.RGBA theme_accent_color { get; private set; }
		}
		[CCode (cheader_filename = "gala.h")]
		public class Utilities : GLib.Object {
			public Utilities ();
			public static Gala.Drawing.Color average_color (Gdk.Pixbuf source);
			public static void cairo_rounded_rectangle (Cairo.Context cr, double x, double y, double width, double height, double radius);
		}
	}
	[CCode (cheader_filename = "gala.h")]
	public class App : GLib.Object {
		public App (GLib.DesktopAppInfo info);
		public void add_window (Meta.Window window);
		public App.for_window (Meta.Window window);
		public GLib.SList<Posix.pid_t?> get_pids ();
		public unowned GLib.SList<Meta.Window> get_windows ();
		public void handle_startup_sequence (Meta.StartupSequence sequence);
		public static unowned Gala.App? new_from_startup_sequence (Meta.StartupSequence sequence);
		public void remove_window (Meta.Window window);
		public GLib.DesktopAppInfo? app_info { get; construct; }
		public string? description { get; }
		public GLib.Icon icon { get; }
		public string id { get; }
		public string name { get; }
		public Gala.AppState state { get; private set; }
	}
	[CCode (cheader_filename = "gala.h")]
	public class AppCache : GLib.Object {
		public AppCache ();
		public unowned GLib.DesktopAppInfo? lookup_id (string? id);
		public GLib.DesktopAppInfo? lookup_startup_wmclass (string? wm_class);
		public signal void changed ();
	}
	[CCode (cheader_filename = "gala.h")]
	public class AppSystem : GLib.Object {
		public AppSystem ();
		public static unowned Gala.AppSystem get_default ();
		public GLib.List<weak Gala.App> get_running_apps ();
		public unowned Gala.App? lookup_app (string id);
		public unowned Gala.App? lookup_desktop_wmclass (string? wmclass);
		public unowned Gala.App? lookup_startup_wmclass (string? wmclass);
		public void notify_app_state_changed (Gala.App app);
	}
	[CCode (cheader_filename = "gala.h")]
	public class CanvasActor : Clutter.Actor {
		public CanvasActor ();
		public override void allocate (Clutter.ActorBox box);
		protected virtual void draw (Cairo.Context canvas, int width, int height);
		public override void resource_scale_changed ();
	}
	[CCode (cheader_filename = "gala.h")]
	public class CloseButton : Clutter.Actor {
		public CloseButton (float scale);
		public override bool button_press_event (Clutter.Event e);
		public override bool button_release_event (Clutter.Event e);
		public override bool leave_event (Clutter.Event event);
		public float scale { get; set construct; }
		public signal void triggered (uint32 timestamp);
	}
	[CCode (cheader_filename = "gala.h")]
	public class DragDropAction : Clutter.Action {
		public DragDropAction (Gala.DragDropActionType type, string id);
		public void cancel ();
		public static void cancel_all_by_id (string id);
		public override bool handle_event (Clutter.Event event);
		public override void set_actor (Clutter.Actor? new_actor);
		public bool allow_bubbling { get; set; }
		public string drag_id { get; construct; }
		public Gala.DragDropActionType drag_type { get; construct; }
		public bool dragging { get; private set; }
		public Clutter.Actor? handle { get; private set; }
		public Clutter.Actor? hovered { private get; set; }
		public signal void actor_clicked (uint32 button);
		public signal void crossed (Clutter.Actor? target, bool hovered);
		public signal void destination_crossed (Clutter.Actor destination, bool hovered);
		public signal Clutter.Actor? drag_begin (float x, float y);
		public signal void drag_canceled ();
		public signal void drag_end (Clutter.Actor actor);
	}
	[CCode (cheader_filename = "gala.h")]
	public class ModalProxy : GLib.Object {
		public ModalProxy ();
		public void allow_all_keybindings ();
		public unowned Gala.KeybindingFilter? get_keybinding_filter ();
		public void set_keybinding_filter (Gala.KeybindingFilter? filter);
		public Clutter.Grab? grab { get; set; }
	}
	[CCode (cheader_filename = "gala.h")]
	public abstract class Plugin : GLib.Object {
		protected Plugin ();
		public abstract void destroy ();
		protected unowned Mtk.Rectangle[]? get_custom_region ();
		public unowned Mtk.Rectangle[] get_region ();
		public abstract void initialize (Gala.WindowManager wm);
		protected void set_custom_region (Mtk.Rectangle[]? custom_region);
		public void track_actor (Clutter.Actor actor);
		public void untrack_actor (Clutter.Actor actor);
		public void update_region ();
		protected bool freeze_track { get; set; }
		public signal void region_changed ();
	}
	[CCode (cheader_filename = "gala.h")]
	public class ShadowEffect : Clutter.Effect {
		public ShadowEffect (string css_class = "");
		public virtual Clutter.ActorBox get_bounding_box ();
		public override bool modify_paint_volume (Clutter.PaintVolume volume);
		public override void paint (Clutter.PaintNode node, Clutter.PaintContext context, Clutter.EffectPaintFlags flags);
		public int border_radius { get; set; }
		public string css_class { get; set construct; }
		public float scale_factor { get; set; }
		public uint8 shadow_opacity { get; set; }
	}
	[CCode (cheader_filename = "gala.h")]
	public class Utils {
		public Utils ();
		public static void clear_window_cache (Meta.Window window);
		public static Clutter.Actor create_resize_button (float scale);
		public static unowned Gtk.CssProvider? get_gala_css ();
		public static Gdk.Pixbuf get_icon_for_window (Meta.Window window, int icon_size, int scale);
		public static uint get_n_windows (Meta.Workspace workspace, bool on_primary = false);
		public static Gdk.Pixbuf? get_resize_button_pixbuf (float scale);
		[Version (deprecated = true, deprecated_since = "7.0.3", replacement = "Meta.Display.get_monitor_scale")]
		public static int get_ui_scaling_factor ();
		public static Clutter.Actor? get_window_actor_snapshot (Meta.WindowActor actor, Mtk.Rectangle inner_rect);
		public static int scale_to_int (int value, float scale_factor);
	}
	[CCode (cheader_filename = "gala.h")]
	public class WindowIcon : Clutter.Actor {
		public WindowIcon (Meta.Window window, int icon_size, int scale = 1);
		public int icon_size { get; construct; }
		public int scale { get; construct; }
		public Meta.Window window { get; construct; }
	}
	[CCode (cheader_filename = "gala.h")]
	public interface ActivatableComponent : GLib.Object {
		public abstract void close (GLib.HashTable<string,GLib.Variant>? hints = null);
		public abstract bool is_opened ();
		public abstract void open (GLib.HashTable<string,GLib.Variant>? hints = null);
	}
	[CCode (cheader_filename = "gala.h")]
	public interface BackgroundManagerInterface : Meta.BackgroundGroup {
		public abstract Meta.BackgroundActor newest_background_actor { get; }
	}
	[CCode (cheader_filename = "gala.h")]
	public interface WindowManager : Meta.Plugin {
		public abstract bool is_modal ();
		public abstract bool modal_proxy_valid (Gala.ModalProxy proxy);
		public abstract void move_window (Meta.Window? window, Meta.Workspace workspace, uint32 timestamp);
		public abstract void perform_action (Gala.ActionType type);
		public abstract void pop_modal (Gala.ModalProxy proxy);
		public abstract Gala.ModalProxy push_modal (Clutter.Actor actor);
		public abstract void switch_to_next_workspace (Meta.MotionDirection direction, uint32 timestamp);
		public abstract Meta.BackgroundGroup background_group { get; protected set; }
		public abstract bool enable_animations { get; protected set; }
		public abstract Clutter.Stage stage { get; protected set; }
		public abstract Clutter.Actor top_window_group { get; protected set; }
		public abstract Clutter.Actor ui_group { get; protected set; }
		public abstract Clutter.Actor window_group { get; protected set; }
		public abstract Gala.ActivatableComponent workspace_view { get; protected set; }
	}
	[CCode (cheader_filename = "gala.h")]
	public struct PluginInfo {
		public string name;
		public string author;
		public GLib.Type plugin_type;
		public Gala.PluginFunction provides;
		public Gala.LoadPriority load_priority;
		public string module_name;
	}
	[CCode (cheader_filename = "gala.h")]
	public enum ActionType {
		NONE,
		SHOW_WORKSPACE_VIEW,
		MAXIMIZE_CURRENT,
		HIDE_CURRENT,
		OPEN_LAUNCHER,
		CUSTOM_COMMAND,
		WINDOW_OVERVIEW,
		WINDOW_OVERVIEW_ALL,
		SWITCH_TO_WORKSPACE_PREVIOUS,
		SWITCH_TO_WORKSPACE_NEXT,
		SWITCH_TO_WORKSPACE_LAST,
		START_MOVE_CURRENT,
		START_RESIZE_CURRENT,
		TOGGLE_ALWAYS_ON_TOP_CURRENT,
		TOGGLE_ALWAYS_ON_VISIBLE_WORKSPACE_CURRENT,
		MOVE_CURRENT_WORKSPACE_LEFT,
		MOVE_CURRENT_WORKSPACE_RIGHT,
		CLOSE_CURRENT,
		SCREENSHOT_CURRENT
	}
	[CCode (cheader_filename = "gala.h", has_type_id = false)]
	public enum AnimationDuration {
		OPEN,
		CLOSE,
		HIDE,
		MENU_MAP,
		SNAP,
		WORKSPACE_SWITCH_MIN,
		WORKSPACE_SWITCH,
		NUDGE
	}
	[CCode (cheader_filename = "gala.h")]
	public enum AppState {
		STOPPED,
		STARTING,
		RUNNING
	}
	[CCode (cheader_filename = "gala.h")]
	[Flags]
	public enum DragDropActionType {
		SOURCE,
		DESTINATION
	}
	[CCode (cheader_filename = "gala.h")]
	public enum LoadPriority {
		IMMEDIATE,
		DEFERRED
	}
	[CCode (cheader_filename = "gala.h")]
	public enum PluginFunction {
		ADDITION,
		WINDOW_SWITCHER,
		WORKSPACE_VIEW,
		WINDOW_OVERVIEW
	}
	[CCode (cheader_filename = "gala.h")]
	[Flags]
	public enum WindowFlags {
		NONE,
		CAN_HIDE,
		CAN_MAXIMIZE,
		IS_MAXIMIZED,
		ALLOWS_MOVE,
		ALLOWS_RESIZE,
		ALWAYS_ON_TOP,
		ON_ALL_WORKSPACES,
		CAN_CLOSE,
		IS_TILED
	}
	[CCode (cheader_filename = "gala.h")]
	public delegate bool KeybindingFilter (Meta.KeyBinding binding);
	[CCode (cheader_filename = "gala.h")]
	public const string NOTIFICATION_DATA_KEY;
}
