package a.a.a.a;

import android.app.Activity;
import android.os.Build;
import android.view.Window;
import android.view.WindowManager;

public class b {
    public static b a;

    public static b b() {
        if (a == null) {
            a = new b();
        }
        return a;
    }

    public void a(Activity activity) {
        activity.getWindow().getDecorView().setSystemUiVisibility(activity.getWindow().getDecorView().getSystemUiVisibility() | 4102);
        d.b().d(activity);
    }

    public final void c(Activity activity) {
        Window window = activity.getWindow();
        activity.requestWindowFeature(1);
        window.setFlags(1024, 1024);
    }

    public final void d(Activity activity) {
        Window window = activity.getWindow();
        window.getDecorView().setSystemUiVisibility(5894);
        window.setStatusBarColor(0);
        WindowManager.LayoutParams attributes = window.getAttributes();
        attributes.layoutInDisplayCutoutMode = 1;
        window.setAttributes(attributes);
    }

    public void b(Activity activity) {
        if (Build.VERSION.SDK_INT >= 28) {
            if (e.d() && h.a(activity)) {
                d(activity);
                return;
            } else if (e.d()) {
                c(activity);
                return;
            } else {
                d(activity);
                return;
            }
        }
        if (e.b() && c.a(activity)) {
            c.a(activity.getWindow());
        } else if (e.d() && h.a(activity)) {
            h.a(activity.getWindow());
        }
        if (e.c() && a.b(activity)) {
            a.a(activity.getWindow());
            return;
        }
        if (e.f() && g.b(activity)) {
            g.a(activity);
        } else if (e.e() && g.a(activity)) {
            g.b(activity);
        } else {
            c(activity);
        }
    }

    public int a() {
        return d.b().a();
    }
}
