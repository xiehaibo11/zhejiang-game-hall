package com.mbridge.msdk.splash.d;

public final class c {
    private static java.lang.String b = "SplashProvider";
    private android.app.Activity A;
    private boolean B;
    private com.mbridge.msdk.foundation.entity.CampaignEx C;
    private com.mbridge.msdk.splash.view.MBSplashPopView D;
    private boolean E;
    public boolean a;
    private java.lang.String c;
    private java.lang.String d;
    private com.mbridge.msdk.out.MBridgeIds e;
    private int f;
    private long g;
    private com.mbridge.msdk.splash.c.c h;
    private com.mbridge.msdk.splash.c.d i;
    private com.mbridge.msdk.splash.d.b j;
    private com.mbridge.msdk.out.MBSplashShowListener k;
    private com.mbridge.msdk.splash.d.d l;
    private com.mbridge.msdk.splash.view.MBSplashView m;
    private com.mbridge.msdk.splash.view.MBSplashWebview n;
    private android.view.ViewGroup o;
    private android.view.View p;
    private com.mbridge.msdk.c.d q;
    private boolean r;
    private android.view.ViewGroup s;
    private com.mbridge.msdk.c.c t;
    private boolean u;
    private int v;
    private int w;
    private int x;
    private java.lang.Object y;
    private java.lang.Object z;




    static {
            return
    }

    public c(android.app.Activity r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            r2.<init>()
            r0 = 5
            r2.f = r0
            r0 = 1
            r2.v = r0
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            int r0 = com.mbridge.msdk.foundation.tools.v.x(r0)
            r2.w = r0
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            int r0 = com.mbridge.msdk.foundation.tools.v.y(r0)
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
            r2.d = r4
            r2.c = r5
            com.mbridge.msdk.out.MBridgeIds r0 = new com.mbridge.msdk.out.MBridgeIds
            r0.<init>(r4, r5)
            r2.e = r0
            r2.A = r3
            com.mbridge.msdk.splash.c.d r4 = r2.i
            if (r4 != 0) goto L6a
            if (r3 == 0) goto L57
            com.mbridge.msdk.splash.c.d r4 = new com.mbridge.msdk.splash.c.d
            java.lang.String r5 = r2.d
            java.lang.String r0 = r2.c
            r4.<init>(r3, r5, r0)
            r2.i = r4
            goto L6a
        L57:
            com.mbridge.msdk.splash.c.d r4 = new com.mbridge.msdk.splash.c.d
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r5 = r5.j()
            java.lang.String r0 = r2.d
            java.lang.String r1 = r2.c
            r4.<init>(r5, r0, r1)
            r2.i = r4
        L6a:
            com.mbridge.msdk.splash.view.MBSplashWebview r4 = r2.n
            if (r4 != 0) goto L9b
            if (r3 == 0) goto L78
            com.mbridge.msdk.splash.view.MBSplashWebview r4 = new com.mbridge.msdk.splash.view.MBSplashWebview     // Catch: java.lang.Exception -> L87
            r4.<init>(r3)     // Catch: java.lang.Exception -> L87
            r2.n = r4     // Catch: java.lang.Exception -> L87
            goto L87
        L78:
            com.mbridge.msdk.splash.view.MBSplashWebview r4 = new com.mbridge.msdk.splash.view.MBSplashWebview     // Catch: java.lang.Exception -> L87
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L87
            android.content.Context r5 = r5.j()     // Catch: java.lang.Exception -> L87
            r4.<init>(r5)     // Catch: java.lang.Exception -> L87
            r2.n = r4     // Catch: java.lang.Exception -> L87
        L87:
            com.mbridge.msdk.splash.view.MBSplashWebview r4 = r2.n
            if (r4 == 0) goto L9b
            com.mbridge.msdk.splash.view.a r5 = new com.mbridge.msdk.splash.view.a
            java.lang.String r0 = r2.c
            com.mbridge.msdk.splash.c.d r1 = r2.i
            com.mbridge.msdk.splash.d.a r1 = r1.a()
            r5.<init>(r0, r1)
            r4.setWebViewClient(r5)
        L9b:
            com.mbridge.msdk.splash.view.MBSplashView r4 = r2.m
            if (r4 != 0) goto Lbf
            if (r3 == 0) goto La9
            com.mbridge.msdk.splash.view.MBSplashView r4 = new com.mbridge.msdk.splash.view.MBSplashView
            r4.<init>(r3)
            r2.m = r4
            goto Lb8
        La9:
            com.mbridge.msdk.splash.view.MBSplashView r3 = new com.mbridge.msdk.splash.view.MBSplashView
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r4 = r4.j()
            r3.<init>(r4)
            r2.m = r3
        Lb8:
            com.mbridge.msdk.splash.view.MBSplashView r3 = r2.m
            com.mbridge.msdk.splash.view.MBSplashWebview r4 = r2.n
            r3.setSplashWebview(r4)
        Lbf:
            com.mbridge.msdk.c.c r3 = r2.t
            if (r3 != 0) goto Lca
            com.mbridge.msdk.c.c r3 = new com.mbridge.msdk.c.c
            r3.<init>()
            r2.t = r3
        Lca:
            com.mbridge.msdk.c.c r3 = r2.t
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r4 = r4.j()
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r5 = r5.k()
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.l()
            java.lang.String r1 = r2.c
            r3.a(r4, r5, r0, r1)
            return
    }

    private android.view.ViewGroup a(android.app.Activity r4) {
            r3 = this;
            r0 = 0
            if (r4 == 0) goto La
            boolean r1 = r4.isFinishing()
            if (r1 == 0) goto La
            r4 = r0
        La:
            if (r4 != 0) goto L14
            java.lang.String r4 = com.mbridge.msdk.splash.d.c.b
            java.lang.String r1 = "splash can't show because, activity is null or activity is finishing"
            com.mbridge.msdk.foundation.tools.z.c(r4, r1)
            return r0
        L14:
            android.view.Window r4 = r4.getWindow()     // Catch: java.lang.Throwable -> L35
            android.view.View r4 = r4.getDecorView()     // Catch: java.lang.Throwable -> L35
            r1 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r4 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> L35
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4     // Catch: java.lang.Throwable -> L35
            r0 = 0
            android.view.View r0 = r4.getChildAt(r0)     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            r4 = r0
            goto L3c
        L2e:
            r0 = move-exception
            goto L39
        L30:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L2e
            goto L3c
        L35:
            r4 = move-exception
            r2 = r0
            r0 = r4
            r4 = r2
        L39:
            r0.printStackTrace()
        L3c:
            return r4
    }

    static void a(com.mbridge.msdk.splash.d.c r0, com.mbridge.msdk.foundation.entity.CampaignEx r1, int r2, boolean r3) {
            r0.b(r1, r2, r3)
            return
    }

    private void a(java.lang.String r8, int r9) {
            r7 = this;
            java.lang.Object r0 = r7.y
            monitor-enter(r0)
            boolean r1 = r7.r     // Catch: java.lang.Throwable -> Ldf
            r2 = 1
            if (r1 == 0) goto L17
            com.mbridge.msdk.splash.d.b r8 = r7.j     // Catch: java.lang.Throwable -> Ldf
            if (r8 == 0) goto L15
            com.mbridge.msdk.splash.d.b r8 = r7.j     // Catch: java.lang.Throwable -> Ldf
            java.lang.String r1 = "current unit is loading"
            r8.a(r1, r9)     // Catch: java.lang.Throwable -> Ldf
            r7.r = r2     // Catch: java.lang.Throwable -> Ldf
        L15:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ldf
            return
        L17:
            r7.r = r2     // Catch: java.lang.Throwable -> Ldf
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ldf
            int r0 = r7.f
            r1 = 2
            if (r0 < r1) goto Lc4
            r1 = 10
            if (r0 <= r1) goto L25
            goto Lc4
        L25:
            int r0 = r7.w
            if (r0 == 0) goto Lba
            int r0 = r7.x
            if (r0 != 0) goto L2f
            goto Lba
        L2f:
            r0 = 0
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L3c
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L3c
            boolean r0 = com.mbridge.msdk.mbjscommon.webEnvCheck.a.a(r1)     // Catch: java.lang.Exception -> L3c
        L3c:
            if (r0 != 0) goto L48
            com.mbridge.msdk.splash.d.b r8 = r7.j
            if (r8 == 0) goto L47
            java.lang.String r0 = "WebView is not available"
            r8.a(r0, r9)
        L47:
            return
        L48:
            com.mbridge.msdk.splash.view.MBSplashView r0 = r7.m
            r0.clearResState()
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            java.lang.String r2 = r7.c
            com.mbridge.msdk.c.d r0 = r0.c(r1, r2)
            r7.q = r0
            com.mbridge.msdk.splash.c.c r0 = r7.h
            if (r0 != 0) goto L75
            com.mbridge.msdk.splash.c.c r0 = new com.mbridge.msdk.splash.c.c
            java.lang.String r1 = r7.d
            java.lang.String r2 = r7.c
            long r3 = r7.g
            r5 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 * r5
            r0.<init>(r1, r2, r3)
            r7.h = r0
        L75:
            com.mbridge.msdk.splash.d.b r0 = r7.j
            if (r0 == 0) goto L83
            r0.a(r8)
            com.mbridge.msdk.splash.c.c r0 = r7.h
            com.mbridge.msdk.splash.d.b r1 = r7.j
            r0.a(r1)
        L83:
            com.mbridge.msdk.splash.view.MBSplashView r0 = r7.m
            r0.resetLoadState()
            com.mbridge.msdk.splash.c.c r0 = r7.h
            int r1 = r7.f
            r0.a(r1)
            com.mbridge.msdk.splash.c.c r0 = r7.h
            com.mbridge.msdk.splash.view.MBSplashView r1 = r7.m
            r0.a(r1)
            com.mbridge.msdk.splash.c.c r0 = r7.h
            com.mbridge.msdk.c.d r1 = r7.q
            r0.a(r1)
            com.mbridge.msdk.splash.c.c r0 = r7.h
            int r1 = r7.w
            int r2 = r7.x
            r0.a(r1, r2)
            com.mbridge.msdk.splash.c.c r0 = r7.h
            boolean r1 = r7.u
            r0.a(r1)
            com.mbridge.msdk.splash.c.c r0 = r7.h
            int r1 = r7.v
            r0.b(r1)
            com.mbridge.msdk.splash.c.c r0 = r7.h
            r0.a(r8, r9)
            return
        Lba:
            com.mbridge.msdk.splash.d.b r8 = r7.j
            if (r8 == 0) goto Lc3
            java.lang.String r0 = "width or height is 0  or width or height is too small"
            r8.a(r0, r9)
        Lc3:
            return
        Lc4:
            com.mbridge.msdk.splash.d.b r8 = r7.j
            if (r8 == 0) goto Lde
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "countDownTime must in 2 - 10 ,but now is "
            r0.append(r1)
            int r1 = r7.f
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r8.a(r0, r9)
        Lde:
            return
        Ldf:
            r8 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ldf
            throw r8
    }

    private void b(int r6, int r7) {
            r5 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            int r0 = com.mbridge.msdk.foundation.tools.v.x(r0)
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            int r1 = com.mbridge.msdk.foundation.tools.v.y(r1)
            int r2 = r5.v
            r3 = 0
            r4 = 1
            if (r2 != r4) goto L2d
            int r6 = r7 * 4
            if (r1 < r6) goto L28
            int r1 = r1 - r7
            r5.x = r1
            r5.w = r0
            goto L3e
        L28:
            r5.x = r3
            r5.w = r3
            goto L3e
        L2d:
            r7 = 2
            if (r2 != r7) goto L3e
            int r7 = r6 * 4
            if (r0 < r7) goto L3a
            int r0 = r0 - r6
            r5.w = r0
            r5.x = r1
            goto L3e
        L3a:
            r5.x = r3
            r5.w = r3
        L3e:
            return
    }

    private void b(com.mbridge.msdk.foundation.entity.CampaignEx r3, int r4, boolean r5) {
            r2 = this;
            com.mbridge.msdk.splash.view.MBSplashView r0 = r2.m
            boolean r0 = com.mbridge.msdk.splash.c.b.a(r0, r3)
            if (r0 != 0) goto L25
            if (r4 <= 0) goto L19
            com.mbridge.msdk.splash.c.d r0 = r2.i
            android.os.Handler r0 = r0.a
            com.mbridge.msdk.splash.d.c$1 r1 = new com.mbridge.msdk.splash.d.c$1
            r1.<init>(r2, r3, r4, r5)
            r3 = 1
            r0.postDelayed(r1, r3)
            goto L24
        L19:
            com.mbridge.msdk.splash.d.d r3 = r2.l
            if (r3 == 0) goto L24
            com.mbridge.msdk.out.MBridgeIds r4 = r2.e
            java.lang.String r5 = "campaignEx is not ready"
            r3.a(r4, r5)
        L24:
            return
        L25:
            r4 = 1
            r2.d(r4)
            android.view.ViewGroup r4 = r2.o
            android.view.ViewGroup$LayoutParams r4 = r4.getLayoutParams()
            r5 = -1
            if (r4 != 0) goto L38
            android.view.ViewGroup$LayoutParams r4 = new android.view.ViewGroup$LayoutParams
            r4.<init>(r5, r5)
            goto L3c
        L38:
            r4.height = r5
            r4.width = r5
        L3c:
            android.view.ViewGroup r5 = r2.o
            r5.setLayoutParams(r4)
            android.view.ViewGroup r4 = r2.o
            r4.removeAllViews()
            com.mbridge.msdk.splash.c.d r4 = r2.i
            int r5 = r2.f
            r4.a(r5)
            com.mbridge.msdk.splash.c.d r4 = r2.i
            android.view.ViewGroup r5 = r2.s
            r4.a(r5)
            com.mbridge.msdk.splash.c.d r4 = r2.i
            com.mbridge.msdk.splash.d.d r5 = r2.l
            r4.a(r5)
            java.lang.String r4 = com.mbridge.msdk.splash.d.c.b
            java.lang.String r5 = "start show process"
            com.mbridge.msdk.foundation.tools.z.d(r4, r5)
            android.view.ViewGroup r4 = r2.o
            if (r4 == 0) goto L75
            r4.removeAllViews()
            com.mbridge.msdk.splash.view.MBSplashView r4 = r2.m
            com.mbridge.msdk.foundation.tools.an.a(r4)
            android.view.ViewGroup r4 = r2.o
            com.mbridge.msdk.splash.view.MBSplashView r5 = r2.m
            r4.addView(r5)
        L75:
            com.mbridge.msdk.splash.c.d r4 = r2.i
            boolean r5 = r2.u
            r4.a(r5)
            com.mbridge.msdk.splash.c.d r4 = r2.i
            com.mbridge.msdk.splash.view.MBSplashView r5 = r2.m
            r4.a(r3, r5)
            return
    }

    public final android.view.ViewGroup a(com.mbridge.msdk.out.ZoomOutTypeEnum r5) {
            r4 = this;
            com.mbridge.msdk.splash.view.MBSplashPopView$a r0 = new com.mbridge.msdk.splash.view.MBSplashPopView$a
            java.lang.String r1 = r4.d
            java.lang.String r2 = r4.c
            int r5 = r5.getIndex()
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r4.C
            r0.<init>(r1, r2, r5, r3)
            com.mbridge.msdk.splash.view.MBSplashPopView r5 = new com.mbridge.msdk.splash.view.MBSplashPopView
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            com.mbridge.msdk.splash.d.d r2 = r4.l
            r5.<init>(r1, r0, r2)
            r4.D = r5
            return r5
    }

    public final void a(int r1) {
            r0 = this;
            r0.v = r1
            return
    }

    public final void a(int r1, int r2) {
            r0 = this;
            r0.b(r2, r1)
            return
    }

    public final void a(int r2, int r3, int r4, int r5) {
            r1 = this;
            com.mbridge.msdk.splash.view.MBSplashView r0 = r1.m     // Catch: java.lang.Throwable -> L28
            if (r0 == 0) goto L9
            com.mbridge.msdk.splash.view.MBSplashView r0 = r1.m     // Catch: java.lang.Throwable -> L28
            r0.setNotchPadding(r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L28
        L9:
            com.mbridge.msdk.splash.view.MBSplashWebview r0 = r1.n     // Catch: java.lang.Throwable -> L28
            if (r0 == 0) goto L32
            r0 = -999(0xfffffffffffffc19, float:NaN)
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.m.a(r0, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L28
            com.mbridge.msdk.mbjscommon.windvane.h r3 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L28
            com.mbridge.msdk.splash.view.MBSplashWebview r4 = r1.n     // Catch: java.lang.Throwable -> L28
            java.lang.String r5 = "oncutoutfetched"
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Throwable -> L28
            r0 = 0
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r0)     // Catch: java.lang.Throwable -> L28
            r3.a(r4, r5, r2)     // Catch: java.lang.Throwable -> L28
            goto L32
        L28:
            r2 = move-exception
            java.lang.String r3 = com.mbridge.msdk.splash.d.c.b
            java.lang.String r2 = r2.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r3, r2)
        L32:
            return
    }

    public final void a(long r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public final void a(android.view.View r3, android.widget.RelativeLayout.LayoutParams r4) {
            r2 = this;
            r2.p = r3
            if (r3 == 0) goto L12
            int r0 = r4.width
            int r1 = r4.height
            r2.b(r0, r1)
            com.mbridge.msdk.splash.view.MBSplashView r0 = r2.m
            if (r0 == 0) goto L12
            r0.setIconVg(r3, r4)
        L12:
            return
    }

    public final void a(android.view.ViewGroup r1) {
            r0 = this;
            r0.s = r1
            return
    }

    final void a(com.mbridge.msdk.foundation.entity.CampaignEx r8, int r9, boolean r10) {
            r7 = this;
            if (r8 == 0) goto L2e
            if (r10 == 0) goto L2e
            com.mbridge.msdk.c.d r0 = r7.q
            if (r0 != 0) goto L1c
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            java.lang.String r2 = r7.c
            com.mbridge.msdk.c.d r0 = r0.c(r1, r2)
            r7.q = r0
        L1c:
            com.mbridge.msdk.splash.d.d r0 = new com.mbridge.msdk.splash.d.d
            com.mbridge.msdk.out.MBSplashShowListener r3 = r7.k
            com.mbridge.msdk.c.d r1 = r7.q
            double r4 = r1.e()
            r1 = r0
            r2 = r7
            r6 = r8
            r1.<init>(r2, r3, r4, r6)
            r7.l = r0
        L2e:
            r7.C = r8
            android.view.ViewGroup r0 = r7.o
            if (r0 != 0) goto L40
            com.mbridge.msdk.splash.d.d r8 = r7.l
            if (r8 == 0) goto L3f
            com.mbridge.msdk.out.MBridgeIds r9 = r7.e
            java.lang.String r10 = "container is null"
            r8.a(r9, r10)
        L3f:
            return
        L40:
            com.mbridge.msdk.splash.c.d r1 = r7.i
            if (r1 != 0) goto L53
            com.mbridge.msdk.splash.c.d r1 = new com.mbridge.msdk.splash.c.d
            android.content.Context r0 = r0.getContext()
            java.lang.String r2 = r7.d
            java.lang.String r3 = r7.c
            r1.<init>(r0, r2, r3)
            r7.i = r1
        L53:
            r7.b(r8, r9, r10)
            return
    }

    public final void a(com.mbridge.msdk.out.MBSplashLoadListener r3) {
            r2 = this;
            com.mbridge.msdk.splash.d.b r0 = r2.j
            if (r0 != 0) goto Ld
            com.mbridge.msdk.splash.d.b r0 = new com.mbridge.msdk.splash.d.b
            com.mbridge.msdk.out.MBridgeIds r1 = r2.e
            r0.<init>(r2, r1)
            r2.j = r0
        Ld:
            com.mbridge.msdk.splash.d.b r0 = r2.j
            r0.a(r3)
            return
    }

    public final void a(com.mbridge.msdk.out.MBSplashShowListener r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public final void a(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 1
            if (r0 == 0) goto L11
            com.mbridge.msdk.splash.d.b r3 = r2.j
            if (r3 == 0) goto L14
            java.lang.String r0 = "token is null or empty"
            r3.a(r0, r1)
            goto L14
        L11:
            r2.a(r3, r1)
        L14:
            return
    }

    public final void a(java.lang.String r2, android.app.Activity r3) {
            r1 = this;
            android.view.ViewGroup r3 = r1.a(r3)
            if (r3 != 0) goto L11
            com.mbridge.msdk.splash.d.b r2 = r1.j
            if (r2 == 0) goto L10
            r3 = 1
            java.lang.String r0 = "activity is except,please check it"
            r2.a(r0, r3)
        L10:
            return
        L11:
            r1.a(r2, r3)
            return
    }

    public final void a(java.lang.String r2, android.view.ViewGroup r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L11
            com.mbridge.msdk.splash.d.b r2 = r1.j
            if (r2 == 0) goto L14
            r3 = 1
            java.lang.String r0 = "token is null or empty"
            r2.a(r0, r3)
            goto L14
        L11:
            r1.b(r2, r3)
        L14:
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.r = r1
            return
    }

    public final boolean a() {
            r1 = this;
            boolean r0 = r1.r
            return r0
    }

    public final long b() {
            r2 = this;
            long r0 = r2.g
            return r0
    }

    public final void b(int r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public final void b(java.lang.String r2) {
            r1 = this;
            r0 = 1
            r1.a(r2, r0)
            return
    }

    public final void b(java.lang.String r2, android.app.Activity r3) {
            r1 = this;
            android.view.ViewGroup r3 = r1.a(r3)
            if (r3 != 0) goto L11
            com.mbridge.msdk.splash.d.b r2 = r1.j
            if (r2 == 0) goto L10
            r3 = 1
            java.lang.String r0 = "activity is except,please check it"
            r2.a(r0, r3)
        L10:
            return
        L11:
            r1.b(r2, r3)
            return
    }

    public final void b(java.lang.String r2, android.view.ViewGroup r3) {
            r1 = this;
            r1.o = r3
            com.mbridge.msdk.splash.view.MBSplashView r0 = r1.m
            if (r0 == 0) goto L9
            r0.setDevContainer(r3)
        L9:
            r3 = 2
            r1.a(r2, r3)
            return
    }

    public final void b(boolean r1) {
            r0 = this;
            r0.u = r1
            return
    }

    public final void c(java.lang.String r2, android.app.Activity r3) {
            r1 = this;
            android.view.ViewGroup r3 = r1.a(r3)
            if (r3 != 0) goto L12
            com.mbridge.msdk.out.MBSplashShowListener r2 = r1.k
            if (r2 == 0) goto L11
            com.mbridge.msdk.out.MBridgeIds r3 = r1.e
            java.lang.String r0 = "activity is except,please check it"
            r2.onShowFailed(r3, r0)
        L11:
            return
        L12:
            r1.c(r2, r3)
            return
    }

    public final void c(java.lang.String r2, android.view.ViewGroup r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L12
            com.mbridge.msdk.out.MBSplashShowListener r2 = r1.k
            if (r2 == 0) goto L15
            com.mbridge.msdk.out.MBridgeIds r3 = r1.e
            java.lang.String r0 = "token is null or empty"
            r2.onShowFailed(r3, r0)
            goto L15
        L12:
            r1.d(r2, r3)
        L15:
            return
    }

    public final void c(boolean r1) {
            r0 = this;
            r0.B = r1
            return
    }

    public final boolean c() {
            r1 = this;
            boolean r0 = r1.u
            return r0
    }

    public final boolean c(java.lang.String r9) {
            r8 = this;
            com.mbridge.msdk.splash.view.MBSplashView r0 = r8.m
            java.lang.String r1 = r8.d
            java.lang.String r2 = r8.c
            boolean r4 = r8.u
            int r5 = r8.f
            r6 = 0
            r7 = 1
            r3 = r9
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = com.mbridge.msdk.splash.c.b.a(r0, r1, r2, r3, r4, r5, r6, r7)
            if (r9 == 0) goto L15
            r9 = 1
            goto L16
        L15:
            r9 = 0
        L16:
            return r9
    }

    public final int d() {
            r1 = this;
            int r0 = r1.f
            return r0
    }

    public final void d(java.lang.String r2, android.app.Activity r3) {
            r1 = this;
            android.view.ViewGroup r3 = r1.a(r3)
            if (r3 != 0) goto L12
            com.mbridge.msdk.out.MBSplashShowListener r2 = r1.k
            if (r2 == 0) goto L11
            com.mbridge.msdk.out.MBridgeIds r3 = r1.e
            java.lang.String r0 = "activity is except,please check it"
            r2.onShowFailed(r3, r0)
        L11:
            return
        L12:
            r1.d(r2, r3)
            return
    }

    public final void d(java.lang.String r16, android.view.ViewGroup r17) {
            r15 = this;
            r6 = r15
            r0 = r17
            r6.o = r0
            com.mbridge.msdk.splash.view.MBSplashView r1 = r6.m
            if (r1 == 0) goto Lc
            r1.setDevContainer(r0)
        Lc:
            com.mbridge.msdk.splash.view.MBSplashView r7 = r6.m
            java.lang.String r8 = r6.d
            java.lang.String r9 = r6.c
            boolean r11 = r6.u
            int r12 = r6.f
            r13 = 1
            r14 = 0
            r10 = r16
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = com.mbridge.msdk.splash.c.b.a(r7, r8, r9, r10, r11, r12, r13, r14)
            if (r7 == 0) goto L98
            com.mbridge.msdk.c.d r0 = r6.q
            if (r0 != 0) goto L38
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            java.lang.String r2 = r6.c
            com.mbridge.msdk.c.d r0 = r0.c(r1, r2)
            r6.q = r0
        L38:
            com.mbridge.msdk.splash.d.d r8 = new com.mbridge.msdk.splash.d.d
            com.mbridge.msdk.out.MBSplashShowListener r2 = r6.k
            com.mbridge.msdk.c.d r0 = r6.q
            double r3 = r0.e()
            r0 = r8
            r1 = r15
            r5 = r7
            r0.<init>(r1, r2, r3, r5)
            r6.l = r8
            java.lang.String r0 = com.mbridge.msdk.splash.d.c.b
            java.lang.String r1 = "show start"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            int r0 = r6.w
            if (r0 == 0) goto L8c
            int r0 = r6.x
            if (r0 != 0) goto L5a
            goto L8c
        L5a:
            int r0 = r6.f
            r1 = 2
            if (r0 < r1) goto L6f
            r1 = 10
            if (r0 <= r1) goto L64
            goto L6f
        L64:
            com.mbridge.msdk.c.d r0 = r6.q
            int r0 = r0.o()
            r1 = 0
            r15.a(r7, r0, r1)
            return
        L6f:
            com.mbridge.msdk.splash.d.d r0 = r6.l
            if (r0 == 0) goto L8b
            com.mbridge.msdk.out.MBridgeIds r1 = r6.e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "countDownTime must in 2 - 10 ,but now is "
            r2.append(r3)
            int r3 = r6.f
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.a(r1, r2)
        L8b:
            return
        L8c:
            com.mbridge.msdk.splash.d.d r0 = r6.l
            if (r0 == 0) goto L97
            com.mbridge.msdk.out.MBridgeIds r1 = r6.e
            java.lang.String r2 = "width or height is 0  or width or height is too small"
            r0.a(r1, r2)
        L97:
            return
        L98:
            com.mbridge.msdk.out.MBSplashShowListener r0 = r6.k
            if (r0 == 0) goto La3
            com.mbridge.msdk.out.MBridgeIds r1 = r6.e
            java.lang.String r2 = "campaignEx is vali"
            r0.onShowFailed(r1, r2)
        La3:
            return
    }

    public final void d(boolean r3) {
            r2 = this;
            com.mbridge.msdk.splash.view.MBSplashWebview r0 = r2.n
            if (r0 == 0) goto Lc
            com.mbridge.msdk.splash.d.c$2 r1 = new com.mbridge.msdk.splash.d.c$2
            r1.<init>(r2, r3)
            r0.setOnTouchListener(r1)
        Lc:
            com.mbridge.msdk.splash.view.MBSplashView r0 = r2.m
            if (r0 == 0) goto L18
            com.mbridge.msdk.splash.d.c$3 r1 = new com.mbridge.msdk.splash.d.c$3
            r1.<init>(r2, r3)
            r0.setOnTouchListener(r1)
        L18:
            return
    }

    public final java.lang.String e() {
            r1 = this;
            boolean r0 = r1.a
            if (r0 != 0) goto Ld
            com.mbridge.msdk.splash.c.c r0 = r1.h
            if (r0 == 0) goto L16
            java.lang.String r0 = r0.a()
            return r0
        Ld:
            com.mbridge.msdk.splash.c.d r0 = r1.i
            if (r0 == 0) goto L16
            java.lang.String r0 = r0.b()
            return r0
        L16:
            java.lang.String r0 = ""
            return r0
    }

    public final void f() {
            r1 = this;
            r0 = 1
            r1.E = r0
            com.mbridge.msdk.splash.view.MBSplashPopView r0 = r1.D
            if (r0 == 0) goto La
            r0.startCountDown()
        La:
            return
    }

    public final void g() {
            r4 = this;
            r0 = 0
            r4.E = r0
            com.mbridge.msdk.out.MBSplashShowListener r0 = r4.k
            if (r0 == 0) goto L13
            com.mbridge.msdk.out.MBridgeIds r1 = new com.mbridge.msdk.out.MBridgeIds
            java.lang.String r2 = r4.d
            java.lang.String r3 = r4.c
            r1.<init>(r2, r3)
            r0.onZoomOutPlayFinish(r1)
        L13:
            com.mbridge.msdk.splash.view.MBSplashPopView r0 = r4.D
            if (r0 == 0) goto L1a
            r0.release()
        L1a:
            return
    }

    public final void h() {
            r2 = this;
            com.mbridge.msdk.splash.c.d r0 = r2.i
            if (r0 == 0) goto L7
            r0.d()
        L7:
            com.mbridge.msdk.splash.view.MBSplashPopView r0 = r2.D
            if (r0 == 0) goto L12
            boolean r1 = r2.E
            if (r1 == 0) goto L12
            r0.reStartCountDown()
        L12:
            return
    }

    public final void i() {
            r2 = this;
            com.mbridge.msdk.splash.c.d r0 = r2.i
            if (r0 == 0) goto L7
            r0.e()
        L7:
            com.mbridge.msdk.splash.view.MBSplashPopView r0 = r2.D
            if (r0 == 0) goto L12
            boolean r1 = r2.E
            if (r1 == 0) goto L12
            r0.pauseCountDown()
        L12:
            return
    }

    public final void j() {
            r2 = this;
            r0 = 0
            r2.C = r0
            com.mbridge.msdk.out.MBSplashShowListener r1 = r2.k
            if (r1 == 0) goto L9
            r2.k = r0
        L9:
            com.mbridge.msdk.splash.d.b r1 = r2.j
            if (r1 == 0) goto Lf
            r2.j = r0
        Lf:
            com.mbridge.msdk.splash.d.d r1 = r2.l
            if (r1 == 0) goto L15
            r2.l = r0
        L15:
            com.mbridge.msdk.splash.c.c r1 = r2.h
            if (r1 == 0) goto L1c
            r1.b()
        L1c:
            com.mbridge.msdk.splash.c.d r1 = r2.i
            if (r1 == 0) goto L23
            r1.c()
        L23:
            android.app.Activity r1 = r2.A
            if (r1 == 0) goto L29
            r2.A = r0
        L29:
            return
    }
}
