package a.a.a.a;

public class d {
    public static a.a.a.a.d b;
    public int a;

    public class a implements android.view.View.OnApplyWindowInsetsListener {
        public final android.app.Activity a;
        public final a.a.a.a.d b;

        public a(a.a.a.a.d r1, android.app.Activity r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public android.view.WindowInsets onApplyWindowInsets(android.view.View r4, android.view.WindowInsets r5) {
                r3 = this;
                r4 = 0
                java.lang.String r0 = "ymnsdk "
                if (r5 != 0) goto L10
                java.lang.String r1 = "setOnApplyWindowInsetsListener  windowInsets is null"
                android.util.Log.e(r0, r1)
                a.a.a.a.d r0 = r3.b
                a.a.a.a.d.a(r0, r4)
                return r5
            L10:
                android.view.DisplayCutout r1 = r5.getDisplayCutout()
                if (r1 != 0) goto L21
                a.a.a.a.d r1 = r3.b
                a.a.a.a.d.a(r1, r4)
                java.lang.String r4 = "cutout==null, is not notch screen"
                android.util.Log.e(r0, r4)
                goto L70
            L21:
                java.util.List r2 = r1.getBoundingRects()
                if (r2 == 0) goto L66
                int r2 = r2.size()
                if (r2 != 0) goto L2e
                goto L66
            L2e:
                a.a.a.a.d r4 = r3.b
                android.app.Activity r2 = r3.a
                boolean r4 = a.a.a.a.d.a(r4, r2)
                if (r4 == 0) goto L42
                a.a.a.a.d r4 = r3.b
                int r1 = r1.getSafeInsetLeft()
                a.a.a.a.d.a(r4, r1)
                goto L4b
            L42:
                a.a.a.a.d r4 = r3.b
                int r1 = r1.getSafeInsetTop()
                a.a.a.a.d.a(r4, r1)
            L4b:
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                java.lang.String r1 = "当前异形屏："
                r4.append(r1)
                a.a.a.a.d r1 = r3.b
                int r1 = a.a.a.a.d.a(r1)
                r4.append(r1)
                java.lang.String r4 = r4.toString()
                android.util.Log.i(r0, r4)
                goto L70
            L66:
                a.a.a.a.d r1 = r3.b
                a.a.a.a.d.a(r1, r4)
                java.lang.String r4 = "rects==null || rects.size()==0, is not notch screen"
                android.util.Log.e(r0, r4)
            L70:
                return r5
        }
    }

    public d() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            return
    }

    public static int a(a.a.a.a.d r0) {
            int r0 = r0.a
            return r0
    }

    public static int a(a.a.a.a.d r0, int r1) {
            r0.a = r1
            return r1
    }

    public static boolean a(a.a.a.a.d r0, android.app.Activity r1) {
            boolean r0 = r0.c(r1)
            return r0
    }

    public static a.a.a.a.d b() {
            a.a.a.a.d r0 = a.a.a.a.d.b
            if (r0 != 0) goto Lb
            a.a.a.a.d r0 = new a.a.a.a.d
            r0.<init>()
            a.a.a.a.d.b = r0
        Lb:
            a.a.a.a.d r0 = a.a.a.a.d.b
            return r0
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public final int a(android.app.Activity r3) {
            r2 = this;
            android.content.pm.PackageManager r0 = r3.getPackageManager()     // Catch: java.lang.Exception -> L11
            android.content.ComponentName r3 = r3.getComponentName()     // Catch: java.lang.Exception -> L11
            r1 = 128(0x80, float:1.8E-43)
            android.content.pm.ActivityInfo r3 = r0.getActivityInfo(r3, r1)     // Catch: java.lang.Exception -> L11
            int r3 = r3.screenOrientation     // Catch: java.lang.Exception -> L11
            return r3
        L11:
            r3 = move-exception
            r3.printStackTrace()
            r3 = 0
            return r3
    }

    public final int b(android.app.Activity r4) {
            r3 = this;
            boolean r0 = a.a.a.a.e.c()
            if (r0 == 0) goto L11
            boolean r0 = a.a.a.a.a.b(r4)
            if (r0 == 0) goto L11
            int r4 = a.a.a.a.a.a(r4)
            return r4
        L11:
            android.content.res.Resources r4 = r4.getResources()
            java.lang.String r0 = "status_bar_height"
            java.lang.String r1 = "dimen"
            java.lang.String r2 = "com.daren.goldzj"
            int r0 = r4.getIdentifier(r0, r1, r2)
            int r4 = r4.getDimensionPixelSize(r0)
            return r4
    }

    public final boolean c(android.app.Activity r2) {
            r1 = this;
            int r0 = r1.a(r2)
            android.content.res.Resources r2 = r2.getResources()
            r2.getConfiguration()
            r2 = 2
            if (r0 != r2) goto L10
            r2 = 1
            goto L11
        L10:
            r2 = 0
        L11:
            return r2
    }

    public void d(android.app.Activity r4) {
            r3 = this;
            boolean r0 = a.a.a.a.e.f()
            r1 = 0
            if (r0 == 0) goto La
            r3.a = r1
            return
        La:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 26
            if (r0 >= r2) goto L13
            r3.a = r1
            return
        L13:
            r1 = 28
            if (r0 >= r1) goto L1e
            int r4 = r3.b(r4)
            r3.a = r4
            return
        L1e:
            android.view.Window r0 = r4.getWindow()
            android.view.View r0 = r0.getDecorView()
            a.a.a.a.d$a r1 = new a.a.a.a.d$a
            r1.<init>(r3, r4)
            r0.setOnApplyWindowInsetsListener(r1)
            return
    }
}
