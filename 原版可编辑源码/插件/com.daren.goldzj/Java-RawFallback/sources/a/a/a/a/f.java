package a.a.a.a;

public class f {
    public static a.a.a.a.f b;
    public android.widget.ImageView a;

    public class a implements java.lang.Runnable {
        public final a.a.a.a.f a;

        public a(a.a.a.a.f r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r2 = this;
                a.a.a.a.f r0 = r2.a
                android.widget.ImageView r0 = a.a.a.a.f.a(r0)
                if (r0 == 0) goto L13
                a.a.a.a.f r0 = r2.a
                android.widget.ImageView r0 = a.a.a.a.f.a(r0)
                r1 = 8
                r0.setVisibility(r1)
            L13:
                return
        }
    }

    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    public static a.a.a.a.f a() {
            a.a.a.a.f r0 = a.a.a.a.f.b
            if (r0 != 0) goto L17
            java.lang.Class<a.a.a.a.f> r0 = a.a.a.a.f.class
            monitor-enter(r0)
            a.a.a.a.f r1 = a.a.a.a.f.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            a.a.a.a.f r1 = new a.a.a.a.f     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            a.a.a.a.f.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            a.a.a.a.f r0 = a.a.a.a.f.b
            return r0
    }

    public static android.widget.ImageView a(a.a.a.a.f r0) {
            android.widget.ImageView r0 = r0.a
            return r0
    }

    public final int a(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "\\."
            java.lang.String[] r4 = r4.split(r0)
            r0 = 2
            r0 = r4[r0]
            r1 = 1
            r4 = r4[r1]
            int r3 = r2.a(r3, r0, r4)
            return r3
    }

    public final int a(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            android.content.res.Resources r0 = r2.getResources()     // Catch: java.lang.Exception -> Le
            r2.getPackageName()     // Catch: java.lang.Exception -> Le
            java.lang.String r2 = "com.daren.goldzj"
            int r2 = r0.getIdentifier(r3, r4, r2)     // Catch: java.lang.Exception -> Le
            return r2
        Le:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }

    public void a(android.app.Activity r2) {
            r1 = this;
            a.a.a.a.f$a r0 = new a.a.a.a.f$a     // Catch: java.lang.Exception -> L9
            r0.<init>(r1)     // Catch: java.lang.Exception -> L9
            r2.runOnUiThread(r0)     // Catch: java.lang.Exception -> L9
            goto Ld
        L9:
            r2 = move-exception
            r2.printStackTrace()
        Ld:
            return
    }

    public void a(android.app.Activity r3, java.lang.String r4) {
            r2 = this;
            android.widget.ImageView r0 = new android.widget.ImageView     // Catch: java.lang.Exception -> L23
            r0.<init>(r3)     // Catch: java.lang.Exception -> L23
            r2.a = r0     // Catch: java.lang.Exception -> L23
            android.widget.ImageView r0 = r2.a     // Catch: java.lang.Exception -> L23
            int r4 = r2.a(r3, r4)     // Catch: java.lang.Exception -> L23
            r0.setImageResource(r4)     // Catch: java.lang.Exception -> L23
            android.widget.ImageView r4 = r2.a     // Catch: java.lang.Exception -> L23
            android.widget.ImageView$ScaleType r0 = android.widget.ImageView.ScaleType.FIT_XY     // Catch: java.lang.Exception -> L23
            r4.setScaleType(r0)     // Catch: java.lang.Exception -> L23
            android.widget.ImageView r4 = r2.a     // Catch: java.lang.Exception -> L23
            android.view.WindowManager$LayoutParams r0 = new android.view.WindowManager$LayoutParams     // Catch: java.lang.Exception -> L23
            r1 = -1
            r0.<init>(r1, r1)     // Catch: java.lang.Exception -> L23
            r3.addContentView(r4, r0)     // Catch: java.lang.Exception -> L23
            goto L27
        L23:
            r3 = move-exception
            r3.printStackTrace()
        L27:
            return
    }
}
