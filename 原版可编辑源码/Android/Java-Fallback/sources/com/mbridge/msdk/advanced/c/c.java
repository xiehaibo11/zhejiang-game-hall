package com.mbridge.msdk.advanced.c;

public final class c {
    private static java.lang.String b = "NativeAdvancedProvider";
    private boolean A;
    private com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup B;
    private boolean C;
    private boolean D;
    private boolean E;
    private boolean F;
    private android.view.ViewTreeObserver.OnScrollChangedListener G;
    public boolean a;
    private java.lang.String c;
    private java.lang.String d;
    private com.mbridge.msdk.out.MBridgeIds e;
    private com.mbridge.msdk.advanced.b.a f;
    private com.mbridge.msdk.advanced.b.b g;
    private com.mbridge.msdk.advanced.c.b h;
    private com.mbridge.msdk.out.NativeAdvancedAdListener i;
    private com.mbridge.msdk.advanced.c.d j;
    private com.mbridge.msdk.advanced.view.MBNativeAdvancedView k;
    private com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview l;
    private com.mbridge.msdk.advanced.view.a m;
    private com.mbridge.msdk.c.d n;
    private boolean o;
    private com.mbridge.msdk.c.c p;
    private int q;
    private boolean r;
    private int s;
    private boolean t;
    private int u;
    private boolean v;
    private int w;
    private int x;
    private java.lang.Object y;
    private org.json.JSONObject z;


    static {
            return
    }

    public c(java.lang.String r4, java.lang.String r5, android.app.Activity r6) {
            r3 = this;
            r3.<init>()
            r0 = -1
            r3.q = r0
            r1 = 0
            r3.r = r1
            r3.s = r1
            r3.t = r1
            r3.u = r1
            r3.v = r1
            r3.w = r1
            r3.x = r1
            java.lang.Object r2 = new java.lang.Object
            r2.<init>()
            r3.y = r2
            r3.A = r1
            r2 = 1
            r3.F = r2
            r3.a = r1
            com.mbridge.msdk.advanced.c.c$1 r1 = new com.mbridge.msdk.advanced.c.c$1
            r1.<init>(r3)
            r3.G = r1
            r3.d = r4
            r3.c = r5
            com.mbridge.msdk.out.MBridgeIds r1 = new com.mbridge.msdk.out.MBridgeIds
            r1.<init>(r4, r5)
            r3.e = r1
            com.mbridge.msdk.advanced.b.b r4 = r3.g
            if (r4 != 0) goto L4f
            com.mbridge.msdk.advanced.b.b r4 = new com.mbridge.msdk.advanced.b.b
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r5 = r5.j()
            java.lang.String r1 = r3.d
            java.lang.String r2 = r3.c
            r4.<init>(r5, r1, r2)
            r3.g = r4
            r4.a(r3)
        L4f:
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r4 = r3.l
            if (r4 != 0) goto L80
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r4 = new com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview     // Catch: java.lang.Exception -> L62
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L62
            android.content.Context r5 = r5.j()     // Catch: java.lang.Exception -> L62
            r4.<init>(r5)     // Catch: java.lang.Exception -> L62
            r3.l = r4     // Catch: java.lang.Exception -> L62
        L62:
            com.mbridge.msdk.advanced.view.a r4 = r3.m
            if (r4 != 0) goto L75
            com.mbridge.msdk.advanced.view.a r4 = new com.mbridge.msdk.advanced.view.a     // Catch: java.lang.Exception -> L75
            java.lang.String r5 = r3.c     // Catch: java.lang.Exception -> L75
            com.mbridge.msdk.advanced.b.b r1 = r3.g     // Catch: java.lang.Exception -> L75
            com.mbridge.msdk.advanced.c.a r1 = r1.b()     // Catch: java.lang.Exception -> L75
            r4.<init>(r5, r1, r3)     // Catch: java.lang.Exception -> L75
            r3.m = r4     // Catch: java.lang.Exception -> L75
        L75:
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r4 = r3.l
            if (r4 == 0) goto L80
            com.mbridge.msdk.advanced.view.a r5 = r3.m
            if (r5 == 0) goto L80
            r4.setWebViewClient(r5)
        L80:
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r4 = r3.k
            if (r4 != 0) goto Lb2
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r4 = r4.j()
            if (r6 == 0) goto L8f
            goto L90
        L8f:
            r6 = r4
        L90:
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r4 = new com.mbridge.msdk.advanced.view.MBNativeAdvancedView
            r4.<init>(r6)
            r3.k = r4
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r5 = r3.l
            r4.setAdvancedNativeWebview(r5)
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r4 = r3.l
            if (r4 == 0) goto Lb2
            android.view.ViewParent r4 = r4.getParent()
            if (r4 != 0) goto Lb2
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r4 = r3.k
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r5 = r3.l
            android.view.ViewGroup$LayoutParams r6 = new android.view.ViewGroup$LayoutParams
            r6.<init>(r0, r0)
            r4.addView(r5, r6)
        Lb2:
            com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup r4 = r3.B
            if (r4 != 0) goto Lf9
            com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup r4 = new com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r5 = r5.j()
            r4.<init>(r5)
            r3.B = r4
            int r4 = r3.w
            if (r4 == 0) goto Ld8
            int r4 = r3.x
            if (r4 != 0) goto Lce
            goto Ld8
        Lce:
            android.view.ViewGroup$LayoutParams r4 = new android.view.ViewGroup$LayoutParams
            int r5 = r3.w
            int r6 = r3.x
            r4.<init>(r5, r6)
            goto Ldd
        Ld8:
            android.view.ViewGroup$LayoutParams r4 = new android.view.ViewGroup$LayoutParams
            r4.<init>(r0, r0)
        Ldd:
            com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup r5 = r3.B
            r5.setLayoutParams(r4)
            com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup r4 = r3.B
            r4.setProvider(r3)
            com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup r4 = r3.B
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r5 = r3.k
            r4.addView(r5)
            com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup r4 = r3.B
            android.view.ViewTreeObserver r4 = r4.getViewTreeObserver()
            android.view.ViewTreeObserver$OnScrollChangedListener r5 = r3.G
            r4.addOnScrollChangedListener(r5)
        Lf9:
            com.mbridge.msdk.c.c r4 = r3.p
            if (r4 != 0) goto L104
            com.mbridge.msdk.c.c r4 = new com.mbridge.msdk.c.c
            r4.<init>()
            r3.p = r4
        L104:
            com.mbridge.msdk.c.c r4 = r3.p
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r5 = r5.j()
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r6 = r6.k()
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.l()
            java.lang.String r1 = r3.c
            r4.a(r5, r6, r0, r1)
            return
    }

    private void a(com.mbridge.msdk.foundation.entity.CampaignEx r4) {
            r3 = this;
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r0 = r3.k
            java.lang.String r1 = r3.d
            java.lang.String r2 = r3.c
            boolean r0 = com.mbridge.msdk.advanced.b.c.a(r0, r4, r1, r2)
            if (r0 != 0) goto Ld
            return
        Ld:
            com.mbridge.msdk.advanced.b.b r0 = r3.g
            com.mbridge.msdk.advanced.c.d r1 = r3.j
            r0.a(r1)
            java.lang.String r0 = com.mbridge.msdk.advanced.c.c.b
            java.lang.String r1 = "start show process"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            com.mbridge.msdk.advanced.b.b r0 = r3.g
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r1 = r3.k
            r2 = 1
            r0.a(r4, r1, r2)
            return
    }

    private void a(java.lang.String r6, int r7) {
            r5 = this;
            r0 = 1
            r5.F = r0
            java.lang.Object r1 = r5.y
            monitor-enter(r1)
            boolean r2 = r5.o     // Catch: java.lang.Throwable -> Lc2
            if (r2 == 0) goto L19
            com.mbridge.msdk.advanced.c.b r6 = r5.h     // Catch: java.lang.Throwable -> Lc2
            if (r6 == 0) goto L17
            com.mbridge.msdk.advanced.c.b r6 = r5.h     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r2 = "current unit is loading"
            r6.a(r2, r7)     // Catch: java.lang.Throwable -> Lc2
            r5.o = r0     // Catch: java.lang.Throwable -> Lc2
        L17:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lc2
            return
        L19:
            r5.o = r0     // Catch: java.lang.Throwable -> Lc2
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lc2
            int r0 = r5.w
            if (r0 == 0) goto Lb8
            int r0 = r5.x
            if (r0 != 0) goto L26
            goto Lb8
        L26:
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r0 = r5.k
            if (r0 != 0) goto L34
            com.mbridge.msdk.advanced.c.b r6 = r5.h
            if (r6 == 0) goto L33
            java.lang.String r0 = "view is not ready"
            r6.a(r0, r7)
        L33:
            return
        L34:
            r0 = 0
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L41
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L41
            boolean r0 = com.mbridge.msdk.mbjscommon.webEnvCheck.a.a(r1)     // Catch: java.lang.Exception -> L41
        L41:
            if (r0 != 0) goto L4d
            com.mbridge.msdk.advanced.c.b r6 = r5.h
            if (r6 == 0) goto L4c
            java.lang.String r0 = "WebView is not available"
            r6.a(r0, r7)
        L4c:
            return
        L4d:
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r0 = r5.k
            r0.clearResStateAndRemoveClose()
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            java.lang.String r2 = r5.c
            com.mbridge.msdk.c.d r0 = r0.f(r1, r2)
            r5.n = r0
            if (r0 != 0) goto L70
            java.lang.String r0 = r5.c
            com.mbridge.msdk.c.d r0 = com.mbridge.msdk.c.d.c(r0)
            r5.n = r0
        L70:
            com.mbridge.msdk.advanced.b.a r0 = r5.f
            if (r0 != 0) goto L81
            com.mbridge.msdk.advanced.b.a r0 = new com.mbridge.msdk.advanced.b.a
            java.lang.String r1 = r5.d
            java.lang.String r2 = r5.c
            r3 = 0
            r0.<init>(r1, r2, r3)
            r5.f = r0
        L81:
            com.mbridge.msdk.advanced.c.b r0 = r5.h
            if (r0 == 0) goto L8f
            r0.a(r6)
            com.mbridge.msdk.advanced.b.a r0 = r5.f
            com.mbridge.msdk.advanced.c.b r1 = r5.h
            r0.a(r1)
        L8f:
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r0 = r5.k
            r0.resetLoadState()
            com.mbridge.msdk.advanced.b.a r0 = r5.f
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r1 = r5.k
            r0.a(r1)
            com.mbridge.msdk.advanced.b.a r0 = r5.f
            com.mbridge.msdk.c.d r1 = r5.n
            r0.a(r1)
            com.mbridge.msdk.advanced.b.a r0 = r5.f
            int r1 = r5.w
            int r2 = r5.x
            r0.a(r1, r2)
            com.mbridge.msdk.advanced.b.a r0 = r5.f
            int r1 = r5.q
            r0.a(r1)
            com.mbridge.msdk.advanced.b.a r0 = r5.f
            r0.a(r6, r7)
            return
        Lb8:
            com.mbridge.msdk.advanced.c.b r6 = r5.h
            if (r6 == 0) goto Lc1
            java.lang.String r0 = "width or height is 0  or width or height is too small"
            r6.a(r0, r7)
        Lc1:
            return
        Lc2:
            r6 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lc2
            throw r6
    }

    static boolean a(com.mbridge.msdk.advanced.c.c r0) {
            boolean r0 = r0.F
            return r0
    }

    static boolean a(com.mbridge.msdk.advanced.c.c r0, boolean r1) {
            r0.F = r1
            return r1
    }

    static com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup b(com.mbridge.msdk.advanced.c.c r0) {
            com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup r0 = r0.B
            return r0
    }

    private void b(org.json.JSONObject r4) {
            r3 = this;
            boolean r0 = r3.A
            if (r0 == 0) goto L19
            r3.z = r4
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r3.l
            if (r0 == 0) goto L19
            boolean r0 = r0.isDestoryed()
            if (r0 != 0) goto L19
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r3.l
            java.lang.String r1 = "setStyleList"
            java.lang.String r2 = ""
            com.mbridge.msdk.advanced.js.b.a(r0, r1, r2, r4)
        L19:
            return
    }

    static void c(com.mbridge.msdk.advanced.c.c r0) {
            r0.h()
            return
    }

    private void f() {
            r13 = this;
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r0 = r13.k
            java.lang.String r1 = r13.d
            java.lang.String r2 = r13.c
            int r4 = r13.q
            java.lang.String r3 = ""
            r5 = 1
            r6 = 1
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = com.mbridge.msdk.advanced.b.c.a(r0, r1, r2, r3, r4, r5, r6)
            if (r0 == 0) goto L5c
            com.mbridge.msdk.c.d r1 = r13.n
            if (r1 != 0) goto L2a
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r2 = r2.k()
            java.lang.String r3 = r13.c
            com.mbridge.msdk.c.d r1 = r1.d(r2, r3)
            r13.n = r1
        L2a:
            com.mbridge.msdk.advanced.c.d r1 = new com.mbridge.msdk.advanced.c.d
            com.mbridge.msdk.out.NativeAdvancedAdListener r9 = r13.i
            com.mbridge.msdk.c.d r2 = r13.n
            double r10 = r2.e()
            r7 = r1
            r8 = r13
            r12 = r0
            r7.<init>(r8, r9, r10, r12)
            r13.j = r1
            java.lang.String r1 = com.mbridge.msdk.advanced.c.c.b
            java.lang.String r2 = "show start"
            com.mbridge.msdk.foundation.tools.z.a(r1, r2)
            int r1 = r13.w
            if (r1 == 0) goto L51
            int r1 = r13.x
            if (r1 != 0) goto L4c
            goto L51
        L4c:
            r1 = 0
            r13.a(r0, r1)
            return
        L51:
            com.mbridge.msdk.advanced.c.d r0 = r13.j
            if (r0 == 0) goto L5c
            com.mbridge.msdk.out.MBridgeIds r1 = r13.e
            java.lang.String r2 = "width or height is 0  or width or height is too small"
            r0.a(r1, r2)
        L5c:
            return
    }

    private void f(int r5) {
            r4 = this;
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r4.l
            if (r0 == 0) goto L3b
            boolean r0 = r0.isDestoryed()
            if (r0 != 0) goto L3b
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r4.l     // Catch: java.lang.Throwable -> L31
            if (r0 == 0) goto L3b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L31
            r0.<init>()     // Catch: java.lang.Throwable -> L31
            java.lang.String r1 = "netstat"
            r0.put(r1, r5)     // Catch: java.lang.Throwable -> L31
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L31
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r1 = r4.l     // Catch: java.lang.Throwable -> L31
            java.lang.String r2 = "onNetstatChanged"
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L31
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L31
            r3 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r3)     // Catch: java.lang.Throwable -> L31
            r5.a(r1, r2, r0)     // Catch: java.lang.Throwable -> L31
            goto L3b
        L31:
            r5 = move-exception
            java.lang.String r0 = com.mbridge.msdk.advanced.c.c.b
            java.lang.String r5 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r5)
        L3b:
            return
    }

    private void g() {
            r1 = this;
            int r0 = r1.q
            r1.g(r0)
            int r0 = r1.s
            r1.h(r0)
            int r0 = r1.u
            r1.i(r0)
            org.json.JSONObject r0 = r1.z
            r1.b(r0)
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            int r0 = com.mbridge.msdk.foundation.tools.v.D(r0)
            r1.f(r0)
            return
    }

    private void g(int r4) {
            r3 = this;
            boolean r0 = r3.r
            if (r0 == 0) goto L34
            r3.q = r4
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r4 = r3.l
            if (r4 == 0) goto L34
            boolean r4 = r4.isDestoryed()
            if (r4 != 0) goto L34
            int r4 = r3.q
            r0 = 0
            java.lang.String r1 = ""
            r2 = 1
            if (r4 != r2) goto L25
            com.mbridge.msdk.advanced.b.b r4 = r3.g
            r4.a(r2)
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r4 = r3.l
            java.lang.String r2 = "showCloseButton"
            com.mbridge.msdk.advanced.js.b.a(r4, r2, r1, r0)
            goto L34
        L25:
            if (r4 != 0) goto L34
            com.mbridge.msdk.advanced.b.b r4 = r3.g
            r2 = 0
            r4.a(r2)
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r4 = r3.l
            java.lang.String r2 = "hideCloseButton"
            com.mbridge.msdk.advanced.js.b.a(r4, r2, r1, r0)
        L34:
            return
    }

    private void h() {
            r2 = this;
            boolean r0 = r2.C
            if (r0 == 0) goto L38
            boolean r0 = r2.D
            if (r0 == 0) goto L38
            boolean r0 = r2.E
            if (r0 != 0) goto Ld
            goto L38
        Ld:
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r0 = r2.k
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r0.getAdvancedNativeWebview()
            boolean r0 = com.mbridge.msdk.foundation.tools.am.a(r0)
            if (r0 != 0) goto L38
            com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup r0 = r2.B
            float r0 = r0.getAlpha()
            r1 = 1056964608(0x3f000000, float:0.5)
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 < 0) goto L38
            com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup r0 = r2.B
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L2e
            goto L38
        L2e:
            com.mbridge.msdk.advanced.b.b r0 = r2.g
            if (r0 == 0) goto L35
            r0.d()
        L35:
            r2.f()
        L38:
            return
    }

    private void h(int r4) {
            r3 = this;
            boolean r0 = r3.t
            if (r0 == 0) goto L1d
            r3.s = r4
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r3.l
            if (r0 == 0) goto L1d
            boolean r0 = r0.isDestoryed()
            if (r0 != 0) goto L1d
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r3.l
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            java.lang.String r1 = "setVolume"
            java.lang.String r2 = "mute"
            com.mbridge.msdk.advanced.js.b.a(r0, r1, r2, r4)
        L1d:
            return
    }

    private void i(int r4) {
            r3 = this;
            boolean r0 = r3.v
            if (r0 == 0) goto L1d
            r3.u = r4
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r3.l
            if (r0 == 0) goto L1d
            boolean r0 = r0.isDestoryed()
            if (r0 != 0) goto L1d
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r3.l
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            java.lang.String r1 = "setVideoPlayMode"
            java.lang.String r2 = "autoPlay"
            com.mbridge.msdk.advanced.js.b.a(r0, r1, r2, r4)
        L1d:
            return
    }

    public final void a(int r2) {
            r1 = this;
            r0 = 1
            r1.r = r0
            r1.g(r2)
            return
    }

    public final void a(int r2, int r3) {
            r1 = this;
            if (r2 <= 0) goto L12
            if (r3 <= 0) goto L12
            r1.x = r2
            r1.w = r3
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams
            r0.<init>(r3, r2)
            com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup r2 = r1.B
            r2.setLayoutParams(r0)
        L12:
            return
    }

    final void a(com.mbridge.msdk.foundation.entity.CampaignEx r7, boolean r8) {
            r6 = this;
            r6.g()
            com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup r0 = r6.B
            if (r0 == 0) goto L59
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto Le
            goto L59
        Le:
            if (r7 == 0) goto L3c
            if (r8 == 0) goto L3c
            com.mbridge.msdk.c.d r8 = r6.n
            if (r8 != 0) goto L2a
            com.mbridge.msdk.c.b r8 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.k()
            java.lang.String r1 = r6.c
            com.mbridge.msdk.c.d r8 = r8.d(r0, r1)
            r6.n = r8
        L2a:
            com.mbridge.msdk.advanced.c.d r8 = new com.mbridge.msdk.advanced.c.d
            com.mbridge.msdk.out.NativeAdvancedAdListener r2 = r6.i
            com.mbridge.msdk.c.d r0 = r6.n
            double r3 = r0.e()
            r0 = r8
            r1 = r6
            r5 = r7
            r0.<init>(r1, r2, r3, r5)
            r6.j = r8
        L3c:
            com.mbridge.msdk.advanced.b.b r8 = r6.g
            if (r8 != 0) goto L56
            com.mbridge.msdk.advanced.b.b r8 = new com.mbridge.msdk.advanced.b.b
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            java.lang.String r1 = r6.d
            java.lang.String r2 = r6.c
            r8.<init>(r0, r1, r2)
            r6.g = r8
            r8.a(r6)
        L56:
            r6.a(r7)
        L59:
            return
    }

    public final void a(com.mbridge.msdk.out.NativeAdvancedAdListener r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public final void a(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L12
            com.mbridge.msdk.out.NativeAdvancedAdListener r3 = r2.i
            if (r3 == 0) goto L15
            com.mbridge.msdk.out.MBridgeIds r0 = r2.e
            java.lang.String r1 = "bid  token is null or empty"
            r3.onLoadFailed(r0, r1)
            goto L15
        L12:
            r2.b(r3)
        L15:
            return
    }

    public final void a(org.json.JSONObject r2) {
            r1 = this;
            r0 = 1
            r1.A = r0
            r1.b(r2)
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.o = r1
            return
    }

    public final boolean a() {
            r1 = this;
            boolean r0 = r1.o
            return r0
    }

    public final com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup b() {
            r1 = this;
            com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup r0 = r1.B
            return r0
    }

    public final void b(int r2) {
            r1 = this;
            r0 = 1
            r1.t = r0
            r1.h(r2)
            return
    }

    public final void b(java.lang.String r3) {
            r2 = this;
            com.mbridge.msdk.advanced.c.b r0 = new com.mbridge.msdk.advanced.c.b
            com.mbridge.msdk.out.MBridgeIds r1 = r2.e
            r0.<init>(r2, r1)
            r2.h = r0
            com.mbridge.msdk.out.NativeAdvancedAdListener r1 = r2.i
            r0.a(r1)
            com.mbridge.msdk.advanced.c.b r0 = r2.h
            r0.a(r3)
            r0 = 2
            r2.a(r3, r0)
            return
    }

    public final int c() {
            r1 = this;
            int r0 = r1.q
            return r0
    }

    public final void c(int r2) {
            r1 = this;
            r0 = 1
            r1.v = r0
            r1.i(r2)
            return
    }

    public final boolean c(java.lang.String r9) {
            r8 = this;
            com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup r0 = r8.B
            if (r0 == 0) goto L17
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r1 = r8.k
            java.lang.String r2 = r8.d
            java.lang.String r3 = r8.c
            int r5 = r8.q
            r6 = 0
            r7 = 1
            r4 = r9
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = com.mbridge.msdk.advanced.b.c.a(r1, r2, r3, r4, r5, r6, r7)
            if (r9 == 0) goto L17
            r9 = 1
            goto L18
        L17:
            r9 = 0
        L18:
            return r9
    }

    public final java.lang.String d() {
            r1 = this;
            boolean r0 = r1.a
            if (r0 == 0) goto Ld
            com.mbridge.msdk.advanced.b.b r0 = r1.g
            if (r0 == 0) goto L16
            java.lang.String r0 = r0.a()
            return r0
        Ld:
            com.mbridge.msdk.advanced.b.a r0 = r1.f
            if (r0 == 0) goto L16
            java.lang.String r0 = r0.a()
            return r0
        L16:
            java.lang.String r0 = ""
            return r0
    }

    public final java.lang.String d(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.advanced.b.a r0 = r1.f
            if (r0 == 0) goto L9
            java.lang.String r2 = r0.a(r2)
            return r2
        L9:
            java.lang.String r2 = ""
            return r2
    }

    public final void d(int r3) {
            r2 = this;
            r0 = 1
            if (r3 == r0) goto L10
            r1 = 2
            if (r3 == r1) goto Ld
            r1 = 3
            if (r3 == r1) goto La
            goto L12
        La:
            r2.E = r0
            goto L12
        Ld:
            r2.D = r0
            goto L12
        L10:
            r2.C = r0
        L12:
            r2.h()     // Catch: java.lang.Exception -> L15
        L15:
            return
    }

    public final void e() {
            r3 = this;
            com.mbridge.msdk.out.NativeAdvancedAdListener r0 = r3.i
            r1 = 0
            if (r0 == 0) goto L7
            r3.i = r1
        L7:
            com.mbridge.msdk.advanced.c.b r0 = r3.h
            if (r0 == 0) goto Ld
            r3.h = r1
        Ld:
            com.mbridge.msdk.advanced.c.d r0 = r3.j
            if (r0 == 0) goto L13
            r3.j = r1
        L13:
            com.mbridge.msdk.advanced.b.a r0 = r3.f
            if (r0 == 0) goto L1f
            r0.a(r1)
            com.mbridge.msdk.advanced.b.a r0 = r3.f
            r0.b()
        L1f:
            com.mbridge.msdk.advanced.b.b r0 = r3.g
            if (r0 == 0) goto L26
            r0.c()
        L26:
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r0 = r3.k
            if (r0 == 0) goto L2d
            r0.destroy()
        L2d:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r3.d
            r0.append(r2)
            java.lang.String r2 = r3.c
            r0.append(r2)
            java.lang.String r2 = r3.d()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.advanced.common.b.b(r0)
            com.mbridge.msdk.advanced.view.a r0 = r3.m
            if (r0 == 0) goto L51
            r0.a()
        L51:
            com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup r0 = r3.B
            if (r0 == 0) goto L65
            android.view.ViewTreeObserver r0 = r0.getViewTreeObserver()
            android.view.ViewTreeObserver$OnScrollChangedListener r2 = r3.G
            r0.removeOnScrollChangedListener(r2)
            com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup r0 = r3.B
            r0.removeAllViews()
            r3.B = r1
        L65:
            return
    }

    public final void e(int r3) {
            r2 = this;
            r0 = 1
            r1 = 0
            if (r3 == r0) goto L11
            r0 = 2
            if (r3 == r0) goto Le
            r0 = 3
            if (r3 == r0) goto Lb
            goto L13
        Lb:
            r2.E = r1
            goto L13
        Le:
            r2.D = r1
            goto L13
        L11:
            r2.C = r1
        L13:
            com.mbridge.msdk.advanced.b.b r3 = r2.g
            if (r3 == 0) goto L1a
            r3.e()
        L1a:
            return
    }
}
