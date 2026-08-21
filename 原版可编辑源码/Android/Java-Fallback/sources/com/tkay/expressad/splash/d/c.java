package com.tkay.expressad.splash.d;

public final class c implements com.tkay.core.common.a.g {
    private static java.lang.String b = "SplashProvider";
    private android.content.Context A;
    private boolean B;
    private com.tkay.expressad.foundation.d.c C;
    private com.tkay.expressad.splash.view.TYSplashPopView D;
    private boolean E;
    private boolean F;
    public boolean a;
    private java.lang.String c;
    private java.lang.String d;
    private int e;
    private long f;
    private int g;
    private int h;
    private com.tkay.expressad.splash.c.c i;
    private com.tkay.expressad.splash.c.d j;
    private com.tkay.expressad.splash.d.b k;
    private com.tkay.expressad.out.q l;
    private com.tkay.expressad.splash.d.d m;
    private com.tkay.expressad.splash.view.TYSplashView n;
    private com.tkay.expressad.splash.view.TYSplashWebview o;
    private android.view.ViewGroup p;
    private android.view.View q;
    private com.tkay.expressad.d.c r;
    private boolean s;
    private android.view.ViewGroup t;
    private boolean u;
    private int v;
    private int w;
    private int x;
    private java.lang.Object y;
    private java.lang.Object z;




    static {
            return
    }

    public c(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            r2.<init>()
            r0 = 5
            r2.e = r0
            r0 = 1
            r2.v = r0
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            int r0 = com.tkay.expressad.foundation.h.k.e(r0)
            r2.w = r0
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            int r0 = com.tkay.expressad.foundation.h.k.f(r0)
            r2.x = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r2.y = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r2.z = r0
            r0 = 0
            r2.a = r0
            r2.E = r0
            r2.F = r0
            android.content.res.Resources r0 = r3.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r0 = r0.widthPixels
            r2.w = r0
            android.content.res.Resources r0 = r3.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r0 = r0.heightPixels
            r2.x = r0
            r2.d = r4
            r2.c = r5
            r2.A = r3
            com.tkay.expressad.splash.c.d r0 = r2.j
            if (r0 != 0) goto L79
            if (r3 == 0) goto L66
            com.tkay.expressad.splash.c.d r0 = new com.tkay.expressad.splash.c.d
            r0.<init>(r3, r4, r5)
            r2.j = r0
            goto L79
        L66:
            com.tkay.expressad.splash.c.d r4 = new com.tkay.expressad.splash.c.d
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()
            android.content.Context r5 = r5.f()
            java.lang.String r0 = r2.d
            java.lang.String r1 = r2.c
            r4.<init>(r5, r0, r1)
            r2.j = r4
        L79:
            com.tkay.expressad.splash.view.TYSplashWebview r4 = r2.o
            if (r4 != 0) goto Laa
            if (r3 == 0) goto L87
            com.tkay.expressad.splash.view.TYSplashWebview r4 = new com.tkay.expressad.splash.view.TYSplashWebview     // Catch: java.lang.Exception -> L96
            r4.<init>(r3)     // Catch: java.lang.Exception -> L96
            r2.o = r4     // Catch: java.lang.Exception -> L96
            goto L96
        L87:
            com.tkay.expressad.splash.view.TYSplashWebview r4 = new com.tkay.expressad.splash.view.TYSplashWebview     // Catch: java.lang.Exception -> L96
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L96
            android.content.Context r5 = r5.f()     // Catch: java.lang.Exception -> L96
            r4.<init>(r5)     // Catch: java.lang.Exception -> L96
            r2.o = r4     // Catch: java.lang.Exception -> L96
        L96:
            com.tkay.expressad.splash.view.TYSplashWebview r4 = r2.o
            if (r4 == 0) goto Laa
            com.tkay.expressad.splash.view.b r5 = new com.tkay.expressad.splash.view.b
            java.lang.String r0 = r2.c
            com.tkay.expressad.splash.c.d r1 = r2.j
            com.tkay.expressad.splash.d.a r1 = r1.a()
            r5.<init>(r0, r1)
            r4.setWebViewClient(r5)
        Laa:
            com.tkay.expressad.splash.view.TYSplashView r4 = r2.n
            if (r4 != 0) goto Lce
            if (r3 == 0) goto Lb8
            com.tkay.expressad.splash.view.TYSplashView r4 = new com.tkay.expressad.splash.view.TYSplashView
            r4.<init>(r3)
            r2.n = r4
            goto Lc7
        Lb8:
            com.tkay.expressad.splash.view.TYSplashView r3 = new com.tkay.expressad.splash.view.TYSplashView
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()
            android.content.Context r4 = r4.f()
            r3.<init>(r4)
            r2.n = r3
        Lc7:
            com.tkay.expressad.splash.view.TYSplashView r3 = r2.n
            com.tkay.expressad.splash.view.TYSplashWebview r4 = r2.o
            r3.setSplashWebview(r4)
        Lce:
            return
    }

    private android.view.ViewGroup a(com.tkay.expressad.out.t r5) {
            r4 = this;
            com.tkay.expressad.splash.view.TYSplashPopView$a r0 = new com.tkay.expressad.splash.view.TYSplashPopView$a
            java.lang.String r1 = r4.d
            java.lang.String r2 = r4.c
            int r5 = r5.a()
            com.tkay.expressad.foundation.d.c r3 = r4.C
            r0.<init>(r1, r2, r5, r3)
            com.tkay.expressad.splash.view.TYSplashPopView r5 = new com.tkay.expressad.splash.view.TYSplashPopView
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            com.tkay.expressad.splash.d.d r2 = r4.m
            r5.<init>(r1, r0, r2)
            r4.D = r5
            return r5
    }

    private void a(int r6, int r7) {
            r5 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            int r0 = com.tkay.expressad.foundation.h.k.e(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            int r1 = com.tkay.expressad.foundation.h.k.f(r1)
            int r2 = r5.v
            r3 = 0
            r4 = 1
            if (r2 != r4) goto L2d
            int r6 = r7 * 4
            if (r1 < r6) goto L28
            int r1 = r1 - r7
            r5.x = r1
            r5.w = r0
            return
        L28:
            r5.x = r3
            r5.w = r3
            return
        L2d:
            r7 = 2
            if (r2 != r7) goto L3e
            int r7 = r6 * 4
            if (r0 < r7) goto L3a
            int r0 = r0 - r6
            r5.w = r0
            r5.x = r1
            return
        L3a:
            r5.x = r3
            r5.w = r3
        L3e:
            return
    }

    private void a(long r1) {
            r0 = this;
            r0.f = r1
            return
    }

    private void a(android.content.Context r5) {
            r4 = this;
            com.tkay.expressad.splash.c.d r0 = r4.j
            if (r0 != 0) goto L25
            if (r5 == 0) goto L12
            com.tkay.expressad.splash.c.d r0 = new com.tkay.expressad.splash.c.d
            java.lang.String r1 = r4.d
            java.lang.String r2 = r4.c
            r0.<init>(r5, r1, r2)
            r4.j = r0
            goto L25
        L12:
            com.tkay.expressad.splash.c.d r0 = new com.tkay.expressad.splash.c.d
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            java.lang.String r2 = r4.d
            java.lang.String r3 = r4.c
            r0.<init>(r1, r2, r3)
            r4.j = r0
        L25:
            com.tkay.expressad.splash.view.TYSplashWebview r0 = r4.o
            if (r0 != 0) goto L56
            if (r5 == 0) goto L33
            com.tkay.expressad.splash.view.TYSplashWebview r0 = new com.tkay.expressad.splash.view.TYSplashWebview     // Catch: java.lang.Exception -> L42
            r0.<init>(r5)     // Catch: java.lang.Exception -> L42
            r4.o = r0     // Catch: java.lang.Exception -> L42
            goto L42
        L33:
            com.tkay.expressad.splash.view.TYSplashWebview r0 = new com.tkay.expressad.splash.view.TYSplashWebview     // Catch: java.lang.Exception -> L42
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L42
            android.content.Context r1 = r1.f()     // Catch: java.lang.Exception -> L42
            r0.<init>(r1)     // Catch: java.lang.Exception -> L42
            r4.o = r0     // Catch: java.lang.Exception -> L42
        L42:
            com.tkay.expressad.splash.view.TYSplashWebview r0 = r4.o
            if (r0 == 0) goto L56
            com.tkay.expressad.splash.view.b r1 = new com.tkay.expressad.splash.view.b
            java.lang.String r2 = r4.c
            com.tkay.expressad.splash.c.d r3 = r4.j
            com.tkay.expressad.splash.d.a r3 = r3.a()
            r1.<init>(r2, r3)
            r0.setWebViewClient(r1)
        L56:
            com.tkay.expressad.splash.view.TYSplashView r0 = r4.n
            if (r0 != 0) goto L7a
            if (r5 == 0) goto L64
            com.tkay.expressad.splash.view.TYSplashView r0 = new com.tkay.expressad.splash.view.TYSplashView
            r0.<init>(r5)
            r4.n = r0
            goto L73
        L64:
            com.tkay.expressad.splash.view.TYSplashView r5 = new com.tkay.expressad.splash.view.TYSplashView
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            r5.<init>(r0)
            r4.n = r5
        L73:
            com.tkay.expressad.splash.view.TYSplashView r5 = r4.n
            com.tkay.expressad.splash.view.TYSplashWebview r0 = r4.o
            r5.setSplashWebview(r0)
        L7a:
            return
    }

    private void a(android.view.View r3, android.widget.RelativeLayout.LayoutParams r4) {
            r2 = this;
            r2.q = r3
            if (r3 == 0) goto L12
            int r0 = r4.width
            int r1 = r4.height
            r2.a(r0, r1)
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.n
            if (r0 == 0) goto L12
            r0.setIconVg(r3, r4)
        L12:
            return
    }

    private void a(com.tkay.expressad.foundation.d.c r3, int r4, boolean r5) {
            r2 = this;
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.n
            boolean r0 = com.tkay.expressad.splash.c.b.a(r0, r3)
            if (r0 != 0) goto L23
            if (r4 <= 0) goto L19
            com.tkay.expressad.splash.c.d r0 = r2.j
            android.os.Handler r0 = r0.a
            com.tkay.expressad.splash.d.c$1 r1 = new com.tkay.expressad.splash.d.c$1
            r1.<init>(r2, r3, r4, r5)
            r3 = 1
            r0.postDelayed(r1, r3)
            return
        L19:
            com.tkay.expressad.splash.d.d r3 = r2.m
            if (r3 == 0) goto L22
            java.lang.String r4 = "campaignEx is not ready"
            r3.a(r4)
        L22:
            return
        L23:
            r2.l()
            com.tkay.expressad.splash.c.d r4 = r2.j
            int r5 = r2.e
            r4.a(r5)
            com.tkay.expressad.splash.c.d r4 = r2.j
            android.view.ViewGroup r5 = r2.t
            r4.a(r5)
            com.tkay.expressad.splash.c.d r4 = r2.j
            com.tkay.expressad.splash.d.d r5 = r2.m
            r4.a(r5)
            android.view.ViewGroup r4 = r2.p
            if (r4 == 0) goto L54
            r4.removeAllViews()
            com.tkay.expressad.splash.view.TYSplashView r4 = r2.n
            com.tkay.core.common.l.u.a(r4)
            android.view.ViewGroup r4 = r2.p
            com.tkay.expressad.splash.view.TYSplashView r5 = r2.n
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            r4.addView(r5, r0)
        L54:
            com.tkay.expressad.splash.c.d r4 = r2.j
            boolean r5 = r2.u
            r4.a(r5)
            com.tkay.expressad.splash.c.d r4 = r2.j
            com.tkay.expressad.splash.view.TYSplashView r5 = r2.n
            r4.a(r3, r5)
            return
    }

    static void a(com.tkay.expressad.splash.d.c r0, com.tkay.expressad.foundation.d.c r1, int r2, boolean r3) {
            r0.a(r1, r2, r3)
            return
    }

    private void a(java.lang.String r1, android.view.ViewGroup r2) {
            r0 = this;
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L10
            com.tkay.expressad.out.q r1 = r0.l
            if (r1 == 0) goto L13
            java.lang.String r2 = "token is null or empty"
            r1.a(r2)
            return
        L10:
            r0.a(r2)
        L13:
            return
    }

    private void b(int r1) {
            r0 = this;
            r0.v = r1
            return
    }

    private void b(android.view.ViewGroup r1) {
            r0 = this;
            r0.t = r1
            return
    }

    private void c(boolean r1) {
            r0 = this;
            r0.B = r1
            return
    }

    private java.lang.String h() {
            r1 = this;
            boolean r0 = r1.a
            if (r0 != 0) goto Ld
            com.tkay.expressad.splash.c.c r0 = r1.i
            if (r0 == 0) goto L16
            java.lang.String r0 = r0.a()
            return r0
        Ld:
            com.tkay.expressad.splash.c.d r0 = r1.j
            if (r0 == 0) goto L16
            java.lang.String r0 = r0.b()
            return r0
        L16:
            java.lang.String r0 = ""
            return r0
    }

    private void i() {
            r1 = this;
            r0 = 1
            r1.E = r0
            com.tkay.expressad.splash.view.TYSplashPopView r0 = r1.D
            if (r0 == 0) goto La
            r0.startCountDown()
        La:
            return
    }

    private void j() {
            r1 = this;
            r0 = 0
            r1.E = r0
            com.tkay.expressad.splash.view.TYSplashPopView r0 = r1.D
            if (r0 == 0) goto La
            r0.release()
        La:
            return
    }

    private void k() {
            r2 = this;
            com.tkay.expressad.splash.c.d r0 = r2.j
            if (r0 == 0) goto L7
            r0.d()
        L7:
            com.tkay.expressad.splash.view.TYSplashPopView r0 = r2.D
            if (r0 == 0) goto L12
            boolean r1 = r2.E
            if (r1 == 0) goto L12
            r0.reStartCountDown()
        L12:
            return
    }

    private void l() {
            r2 = this;
            com.tkay.expressad.splash.view.TYSplashWebview r0 = r2.o
            if (r0 == 0) goto Lc
            com.tkay.expressad.splash.d.c$2 r1 = new com.tkay.expressad.splash.d.c$2
            r1.<init>(r2)
            r0.setOnTouchListener(r1)
        Lc:
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.n
            if (r0 == 0) goto L18
            com.tkay.expressad.splash.d.c$3 r1 = new com.tkay.expressad.splash.d.c$3
            r1.<init>(r2)
            r0.setOnTouchListener(r1)
        L18:
            return
    }

    private void m() {
            r2 = this;
            com.tkay.expressad.splash.c.d r0 = r2.j
            if (r0 == 0) goto L7
            r0.e()
        L7:
            com.tkay.expressad.splash.view.TYSplashPopView r0 = r2.D
            if (r0 == 0) goto L12
            boolean r1 = r2.E
            if (r1 == 0) goto L12
            r0.pauseCountDown()
        L12:
            return
    }

    public final void a(int r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final void a(android.view.ViewGroup r8) {
            r7 = this;
            r7.p = r8
            com.tkay.expressad.splash.view.TYSplashView r0 = r7.n
            if (r0 == 0) goto L9
            r0.setDevContainer(r8)
        L9:
            com.tkay.expressad.splash.c.c r8 = r7.i
            if (r8 == 0) goto L12
            com.tkay.expressad.foundation.d.c r8 = r8.c()
            goto L13
        L12:
            r8 = 0
        L13:
            if (r8 == 0) goto L4f
            com.tkay.expressad.d.c r0 = r7.r
            if (r0 != 0) goto L2c
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r0 = r0.e()
            java.lang.String r1 = r7.c
            com.tkay.expressad.d.c r0 = com.tkay.expressad.d.b.a(r0, r1)
            r7.r = r0
        L2c:
            com.tkay.expressad.splash.d.d r6 = new com.tkay.expressad.splash.d.d
            com.tkay.expressad.out.q r2 = r7.l
            com.tkay.expressad.d.c r0 = r7.r
            double r3 = r0.a()
            r0 = r6
            r1 = r7
            r5 = r8
            r0.<init>(r1, r2, r3, r5)
            r7.m = r6
            int r0 = r7.e
            r1 = 2
            if (r0 < r1) goto L47
            r1 = 10
            if (r0 <= r1) goto L4a
        L47:
            r0 = 5
            r7.e = r0
        L4a:
            r0 = 0
            r7.a(r8, r0)
            return
        L4f:
            com.tkay.expressad.out.q r8 = r7.l
            if (r8 == 0) goto L58
            java.lang.String r0 = "campaignEx is vali"
            r8.a(r0)
        L58:
            return
    }

    final void a(com.tkay.expressad.foundation.d.c r8, boolean r9) {
            r7 = this;
            if (r8 == 0) goto L2d
            if (r9 == 0) goto L2d
            com.tkay.expressad.d.c r0 = r7.r
            if (r0 != 0) goto L1b
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r0 = r0.e()
            java.lang.String r1 = r7.c
            com.tkay.expressad.d.c r0 = com.tkay.expressad.d.b.a(r0, r1)
            r7.r = r0
        L1b:
            com.tkay.expressad.splash.d.d r0 = new com.tkay.expressad.splash.d.d
            com.tkay.expressad.out.q r3 = r7.l
            com.tkay.expressad.d.c r1 = r7.r
            double r4 = r1.a()
            r1 = r0
            r2 = r7
            r6 = r8
            r1.<init>(r2, r3, r4, r6)
            r7.m = r0
        L2d:
            r7.C = r8
            android.view.ViewGroup r0 = r7.p
            if (r0 != 0) goto L3d
            com.tkay.expressad.splash.d.d r8 = r7.m
            if (r8 == 0) goto L3c
            java.lang.String r9 = "container is null"
            r8.a(r9)
        L3c:
            return
        L3d:
            com.tkay.expressad.splash.c.d r1 = r7.j
            if (r1 != 0) goto L50
            com.tkay.expressad.splash.c.d r1 = new com.tkay.expressad.splash.c.d
            android.content.Context r0 = r0.getContext()
            java.lang.String r2 = r7.d
            java.lang.String r3 = r7.c
            r1.<init>(r0, r2, r3)
            r7.j = r1
        L50:
            r0 = 0
            r7.a(r8, r0, r9)
            return
    }

    public final void a(com.tkay.expressad.foundation.d.d r8) {
            r7 = this;
            java.lang.Object r0 = r7.y
            monitor-enter(r0)
            boolean r1 = r7.s     // Catch: java.lang.Throwable -> L88
            r2 = 1
            if (r1 == 0) goto L17
            com.tkay.expressad.splash.d.b r8 = r7.k     // Catch: java.lang.Throwable -> L88
            if (r8 == 0) goto L15
            com.tkay.expressad.splash.d.b r8 = r7.k     // Catch: java.lang.Throwable -> L88
            java.lang.String r1 = "current unit is loading"
            r8.a(r1)     // Catch: java.lang.Throwable -> L88
            r7.s = r2     // Catch: java.lang.Throwable -> L88
        L15:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L88
            return
        L17:
            r7.s = r2     // Catch: java.lang.Throwable -> L88
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L88
            com.tkay.expressad.splash.view.TYSplashView r0 = r7.n
            r0.clearResState()
            com.tkay.expressad.d.c r0 = new com.tkay.expressad.d.c
            r0.<init>()
            r7.r = r0
            com.tkay.expressad.splash.c.c r0 = r7.i
            if (r0 != 0) goto L3a
            com.tkay.expressad.splash.c.c r0 = new com.tkay.expressad.splash.c.c
            java.lang.String r1 = r7.d
            java.lang.String r2 = r7.c
            long r3 = r7.f
            r5 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 * r5
            r0.<init>(r1, r2, r3)
            r7.i = r0
        L3a:
            com.tkay.expressad.splash.d.b r0 = r7.k
            if (r0 == 0) goto L4a
            java.lang.String r1 = ""
            r0.b(r1)
            com.tkay.expressad.splash.c.c r0 = r7.i
            com.tkay.expressad.splash.d.b r1 = r7.k
            r0.a(r1)
        L4a:
            com.tkay.expressad.splash.view.TYSplashView r0 = r7.n
            r0.resetLoadState()
            com.tkay.expressad.splash.c.c r0 = r7.i
            int r1 = r7.e
            r0.b(r1)
            com.tkay.expressad.splash.c.c r0 = r7.i
            com.tkay.expressad.splash.view.TYSplashView r1 = r7.n
            r0.a(r1)
            com.tkay.expressad.splash.c.c r0 = r7.i
            com.tkay.expressad.d.c r1 = r7.r
            r0.a(r1)
            com.tkay.expressad.splash.c.c r0 = r7.i
            int r1 = r7.w
            int r2 = r7.x
            r0.a(r1, r2)
            com.tkay.expressad.splash.c.c r0 = r7.i
            boolean r1 = r7.u
            r0.b(r1)
            com.tkay.expressad.splash.c.c r0 = r7.i
            boolean r1 = r7.F
            r0.a(r1)
            com.tkay.expressad.splash.c.c r0 = r7.i
            int r1 = r7.v
            r0.a(r1)
            com.tkay.expressad.splash.c.c r0 = r7.i
            r0.a(r8)
            return
        L88:
            r8 = move-exception
            monitor-exit(r0)
            throw r8
    }

    public final void a(com.tkay.expressad.out.p r2) {
            r1 = this;
            com.tkay.expressad.splash.d.b r0 = r1.k
            if (r0 != 0) goto Lb
            com.tkay.expressad.splash.d.b r0 = new com.tkay.expressad.splash.d.b
            r0.<init>(r1)
            r1.k = r0
        Lb:
            com.tkay.expressad.splash.d.b r0 = r1.k
            r0.a(r2)
            return
    }

    public final void a(com.tkay.expressad.out.q r1) {
            r0 = this;
            r0.l = r1
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.F = r1
            return
    }

    public final boolean a() {
            r1 = this;
            boolean r0 = r1.s
            return r0
    }

    public final void b() {
            r1 = this;
            r0 = 0
            r1.s = r0
            return
    }

    public final void b(boolean r1) {
            r0 = this;
            r0.u = r1
            return
    }

    public final long c() {
            r2 = this;
            long r0 = r2.f
            return r0
    }

    public final boolean d() {
            r1 = this;
            boolean r0 = r1.u
            return r0
    }

    public final int e() {
            r1 = this;
            int r0 = r1.e
            return r0
    }

    public final void f() {
            r1 = this;
            r0 = 100
            r1.a(r0, r0)
            return
    }

    public final void g() {
            r2 = this;
            r0 = 0
            r2.C = r0
            com.tkay.expressad.out.q r1 = r2.l
            if (r1 == 0) goto L9
            r2.l = r0
        L9:
            com.tkay.expressad.splash.d.b r1 = r2.k
            if (r1 == 0) goto Lf
            r2.k = r0
        Lf:
            com.tkay.expressad.splash.d.d r1 = r2.m
            if (r1 == 0) goto L15
            r2.m = r0
        L15:
            com.tkay.expressad.splash.c.c r1 = r2.i
            if (r1 == 0) goto L1c
            r1.b()
        L1c:
            com.tkay.expressad.splash.c.d r1 = r2.j
            if (r1 == 0) goto L23
            r1.c()
        L23:
            android.content.Context r1 = r2.A
            if (r1 == 0) goto L29
            r2.A = r0
        L29:
            return
    }

    @Override
    public final boolean isReady() {
            r2 = this;
            com.tkay.expressad.splash.c.c r0 = r2.i
            com.tkay.expressad.foundation.d.c r0 = r0.c()
            if (r0 == 0) goto L18
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.n
            com.tkay.expressad.splash.c.c r1 = r2.i
            com.tkay.expressad.foundation.d.c r1 = r1.c()
            boolean r0 = com.tkay.expressad.splash.c.b.a(r0, r1)
            if (r0 == 0) goto L18
            r0 = 1
            return r0
        L18:
            r0 = 0
            return r0
    }
}
