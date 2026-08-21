package a.a.a.a;

import android.app.Activity;
import android.os.Build;
import android.view.Window;
import android.view.WindowManager;

public class b {
    public static b a;

    public b() {
    }

    public static b b() {
        if (a != null) goto L6;
        a = new b();
    L6:
        return a;
    }

    public void a(Activity r3) {
        int r0 = r3.getWindow().getDecorView().getSystemUiVisibility() | 4102;
        r3.getWindow().getDecorView().setSystemUiVisibility(r0);
        d.b().d(r3);
    }

    public final void c(Activity r3) {
        Window r0 = r3.getWindow();
        r3.requestWindowFeature(1);
        r0.setFlags(1024, 1024);
    }

    public final void d(Activity r3) {
        Window r32 = r3.getWindow();
        r32.getDecorView().setSystemUiVisibility(5894);
        r32.setStatusBarColor(0);
        WindowManager.LayoutParams r0 = r32.getAttributes();
        r0.layoutInDisplayCutoutMode = 1;
        r32.setAttributes(r0);
    }

    public void b(Activity r3) {
        if (Build.VERSION.SDK_INT < 28) goto L14;
        if (e.d() == false) goto L10;
        if (h.a(r3) == false) goto L10;
        d(r3);
        return;
    L10:
        if (e.d() == false) goto L12;
        c(r3);
        return;
    L12:
        d(r3);
        return;
    L14:
        if (e.b() == false) goto L19;
        if (c.a(r3) == false) goto L19;
        c.a(r3.getWindow());
    L24:
        if (e.c() == false) goto L29;
        if (a.b(r3) == false) goto L29;
        a.a(r3.getWindow());
        return;
    L29:
        if (e.f() == false) goto L34;
        if (g.b(r3) == false) goto L34;
        g.a(r3);
        return;
    L34:
        if (e.e() == true) goto L36;
    L38:
        c(r3);
        return;
    L36:
        if (g.a(r3) == false) goto L38;
        g.b(r3);
        return;
    L19:
        if (e.d() == false) goto L24;
        if (h.a(r3) == false) goto L24;
        h.a(r3.getWindow());
        goto L24
    }

    public int a() {
        return d.b().a();
    }
}
