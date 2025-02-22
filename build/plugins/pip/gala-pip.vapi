/* gala-pip.vapi generated by valac 0.56.17, do not modify. */

namespace Gala {
	namespace Plugins {
		namespace PIP {
			[CCode (cheader_filename = "gala-pip.h")]
			public class Plugin : Gala.Plugin {
				public Plugin ();
				public override void destroy ();
				public override void initialize (Gala.WindowManager wm);
			}
			[CCode (cheader_filename = "gala-pip.h")]
			public class PopupWindow : Clutter.Actor {
				public PopupWindow (Gala.WindowManager wm, Meta.WindowActor window_actor);
				public override bool enter_event (Clutter.Event event);
				public override void hide ();
				public override bool leave_event (Clutter.Event event);
				public void set_container_clip (Graphene.Rect? container_clip);
				public override void show ();
				public Meta.WindowActor window_actor { get; construct; }
				public Gala.WindowManager wm { get; construct; }
				public signal void closed ();
			}
			[CCode (cheader_filename = "gala-pip.h")]
			public class SelectionArea : Gala.CanvasActor {
				public SelectionArea (Gala.WindowManager wm);
				public override bool button_press_event (Clutter.Event e);
				public override bool button_release_event (Clutter.Event e);
				public void close ();
				protected override void draw (Cairo.Context ctx, int width, int height);
				public override bool key_press_event (Clutter.Event e);
				public override bool motion_event (Clutter.Event e);
				public void start_selection ();
				public Gala.WindowManager wm { get; construct; }
				public signal void captured (int x, int y, int width, int height);
				public signal void closed ();
				public signal void selected (int x, int y);
			}
		}
	}
}
[CCode (cheader_filename = "gala-pip.h")]
public static Gala.PluginInfo register_plugin ();
