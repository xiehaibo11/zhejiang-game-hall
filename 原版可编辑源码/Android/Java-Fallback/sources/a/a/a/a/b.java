package a.a.a.a;

public class b {
    public static a.a.a.a.b a;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static a.a.a.a.b b() {
            a.a.a.a.b r0 = a.a.a.a.b.a
            if (r0 != 0) goto Lb
            a.a.a.a.b r0 = new a.a.a.a.b
            r0.<init>()
            a.a.a.a.b.a = r0
        Lb:
            a.a.a.a.b r0 = a.a.a.a.b.a
            return r0
    }

    public int a() {
            r1 = this;
            a.a.a.a.d r0 = a.a.a.a.d.b()
            int r0 = r0.a()
            return r0
    }

    public void a(android.app.Activity r3) {
            r2 = this;
            android.view.Window r0 = r3.getWindow()
            android.view.View r0 = r0.getDecorView()
            int r0 = r0.getSystemUiVisibility()
            r0 = r0 | 4102(0x1006, float:5.748E-42)
            android.view.Window r1 = r3.getWindow()
            android.view.View r1 = r1.getDecorView()
            r1.setSystemUiVisibility(r0)
            a.a.a.a.d r0 = a.a.a.a.d.b()
            r0.d(r3)
            return
    }

    public void b(android.app.Activity r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L25
            boolean r0 = a.a.a.a.e.d()
            if (r0 == 0) goto L17
            boolean r0 = a.a.a.a.h.a(r3)
            if (r0 == 0) goto L17
            r2.d(r3)
            goto L83
        L17:
            boolean r0 = a.a.a.a.e.d()
            if (r0 == 0) goto L21
            r2.c(r3)
            goto L83
        L21:
            r2.d(r3)
            goto L83
        L25:
            boolean r0 = a.a.a.a.e.b()
            if (r0 == 0) goto L39
            boolean r0 = a.a.a.a.c.a(r3)
            if (r0 == 0) goto L39
            android.view.Window r0 = r3.getWindow()
            a.a.a.a.c.a(r0)
            goto L4c
        L39:
            boolean r0 = a.a.a.a.e.d()
            if (r0 == 0) goto L4c
            boolean r0 = a.a.a.a.h.a(r3)
            if (r0 == 0) goto L4c
            android.view.Window r0 = r3.getWindow()
            a.a.a.a.h.a(r0)
        L4c:
            boolean r0 = a.a.a.a.e.c()
            if (r0 == 0) goto L60
            boolean r0 = a.a.a.a.a.b(r3)
            if (r0 == 0) goto L60
            android.view.Window r3 = r3.getWindow()
            a.a.a.a.a.a(r3)
            goto L83
        L60:
            boolean r0 = a.a.a.a.e.f()
            if (r0 == 0) goto L70
            boolean r0 = a.a.a.a.g.b(r3)
            if (r0 == 0) goto L70
            a.a.a.a.g.a(r3)
            goto L83
        L70:
            boolean r0 = a.a.a.a.e.e()
            if (r0 == 0) goto L80
            boolean r0 = a.a.a.a.g.a(r3)
            if (r0 == 0) goto L80
            a.a.a.a.g.b(r3)
            goto L83
        L80:
            r2.c(r3)
        L83:
            return
    }

    public final void c(android.app.Activity r3) {
            r2 = this;
            android.view.Window r0 = r3.getWindow()
            r1 = 1
            r3.requestWindowFeature(r1)
            r3 = 1024(0x400, float:1.435E-42)
            r0.setFlags(r3, r3)
            return
    }

    public final void d(android.app.Activity r3) {
            r2 = this;
            android.view.Window r3 = r3.getWindow()
            android.view.View r0 = r3.getDecorView()
            r1 = 5894(0x1706, float:8.259E-42)
            r0.setSystemUiVisibility(r1)
            r0 = 0
            r3.setStatusBarColor(r0)
            android.view.WindowManager$LayoutParams r0 = r3.getAttributes()
            r1 = 1
            r0.layoutInDisplayCutoutMode = r1
            r3.setAttributes(r0)
            return
    }
}
