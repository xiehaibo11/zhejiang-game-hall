package com.tkay.expressad.advanced.d;

public class c implements com.tkay.core.common.a.g {
    public static final int a = 1;
    public static final int b = 2;
    public static final int c = 3;
    private static java.lang.String g = "NativeAdvancedProvider";
    private int A;
    private java.lang.Object B;
    private org.json.JSONObject C;
    private boolean D;
    private com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup E;
    private boolean F;
    private boolean G;
    private boolean H;
    private boolean I;
    private android.view.ViewTreeObserver.OnScrollChangedListener J;
    public boolean d;
    boolean e;
    com.tkay.expressad.foundation.d.d f;
    private java.lang.String h;
    private java.lang.String i;
    private com.tkay.expressad.advanced.c.a j;
    private com.tkay.expressad.advanced.c.b k;
    private com.tkay.expressad.advanced.d.b l;
    private com.tkay.expressad.out.i m;
    private com.tkay.expressad.advanced.d.d n;
    private com.tkay.expressad.advanced.view.TYNativeAdvancedView o;
    private com.tkay.expressad.advanced.view.TYNativeAdvancedWebview p;
    private com.tkay.expressad.advanced.view.a q;
    private com.tkay.expressad.d.c r;
    private boolean s;
    private int t;
    private boolean u;
    private int v;
    private boolean w;
    private int x;
    private boolean y;
    private int z;



    static {
            return
    }

    public c(java.lang.String r4, java.lang.String r5, android.content.Context r6) {
            r3 = this;
            r3.<init>()
            r0 = -1
            r3.t = r0
            r1 = 0
            r3.u = r1
            r3.v = r1
            r3.w = r1
            r3.x = r1
            r3.y = r1
            r3.z = r1
            r3.A = r1
            java.lang.Object r2 = new java.lang.Object
            r2.<init>()
            r3.B = r2
            r3.D = r1
            r2 = 1
            r3.I = r2
            r3.d = r1
            com.tkay.expressad.advanced.d.c$1 r1 = new com.tkay.expressad.advanced.d.c$1
            r1.<init>(r3)
            r3.J = r1
            r3.i = r4
            r3.h = r5
            com.tkay.expressad.advanced.c.b r4 = r3.k
            if (r4 != 0) goto L48
            com.tkay.expressad.advanced.c.b r4 = new com.tkay.expressad.advanced.c.b
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()
            android.content.Context r5 = r5.f()
            java.lang.String r1 = r3.i
            java.lang.String r2 = r3.h
            r4.<init>(r5, r1, r2)
            r3.k = r4
            r4.a(r3)
        L48:
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r4 = r3.p
            if (r4 != 0) goto L79
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r4 = new com.tkay.expressad.advanced.view.TYNativeAdvancedWebview     // Catch: java.lang.Throwable -> L5b
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L5b
            android.content.Context r5 = r5.f()     // Catch: java.lang.Throwable -> L5b
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L5b
            r3.p = r4     // Catch: java.lang.Throwable -> L5b
        L5b:
            com.tkay.expressad.advanced.view.a r4 = r3.q
            if (r4 != 0) goto L6e
            com.tkay.expressad.advanced.view.a r4 = new com.tkay.expressad.advanced.view.a     // Catch: java.lang.Throwable -> L6e
            java.lang.String r5 = r3.h     // Catch: java.lang.Throwable -> L6e
            com.tkay.expressad.advanced.c.b r1 = r3.k     // Catch: java.lang.Throwable -> L6e
            com.tkay.expressad.advanced.d.a r1 = r1.b()     // Catch: java.lang.Throwable -> L6e
            r4.<init>(r5, r1, r3)     // Catch: java.lang.Throwable -> L6e
            r3.q = r4     // Catch: java.lang.Throwable -> L6e
        L6e:
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r4 = r3.p
            if (r4 == 0) goto L79
            com.tkay.expressad.advanced.view.a r5 = r3.q
            if (r5 == 0) goto L79
            r4.setWebViewClient(r5)
        L79:
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r4 = r3.o
            if (r4 != 0) goto L9f
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r4 = new com.tkay.expressad.advanced.view.TYNativeAdvancedView
            r4.<init>(r6)
            r3.o = r4
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r5 = r3.p
            r4.setAdvancedNativeWebview(r5)
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r4 = r3.p
            if (r4 == 0) goto L9f
            android.view.ViewParent r4 = r4.getParent()
            if (r4 != 0) goto L9f
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r4 = r3.o
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r5 = r3.p
            android.view.ViewGroup$LayoutParams r6 = new android.view.ViewGroup$LayoutParams
            r6.<init>(r0, r0)
            r4.addView(r5, r6)
        L9f:
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r4 = r3.E
            if (r4 != 0) goto Le6
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r4 = new com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()
            android.content.Context r5 = r5.f()
            r4.<init>(r5)
            r3.E = r4
            int r4 = r3.z
            if (r4 == 0) goto Lc5
            int r4 = r3.A
            if (r4 != 0) goto Lbb
            goto Lc5
        Lbb:
            android.view.ViewGroup$LayoutParams r4 = new android.view.ViewGroup$LayoutParams
            int r5 = r3.z
            int r6 = r3.A
            r4.<init>(r5, r6)
            goto Lca
        Lc5:
            android.view.ViewGroup$LayoutParams r4 = new android.view.ViewGroup$LayoutParams
            r4.<init>(r0, r0)
        Lca:
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r5 = r3.E
            r5.setLayoutParams(r4)
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r4 = r3.E
            r4.setProvider(r3)
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r4 = r3.E
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r5 = r3.o
            r4.addView(r5)
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r4 = r3.E
            android.view.ViewTreeObserver r4 = r4.getViewTreeObserver()
            android.view.ViewTreeObserver$OnScrollChangedListener r5 = r3.J
            r4.addOnScrollChangedListener(r5)
        Le6:
            return
    }

    private void a(android.content.Context r5) {
            r4 = this;
            com.tkay.expressad.advanced.c.b r0 = r4.k
            if (r0 != 0) goto L1a
            com.tkay.expressad.advanced.c.b r0 = new com.tkay.expressad.advanced.c.b
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            java.lang.String r2 = r4.i
            java.lang.String r3 = r4.h
            r0.<init>(r1, r2, r3)
            r4.k = r0
            r0.a(r4)
        L1a:
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r4.p
            if (r0 != 0) goto L4b
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = new com.tkay.expressad.advanced.view.TYNativeAdvancedWebview     // Catch: java.lang.Throwable -> L2d
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L2d
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L2d
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L2d
            r4.p = r0     // Catch: java.lang.Throwable -> L2d
        L2d:
            com.tkay.expressad.advanced.view.a r0 = r4.q
            if (r0 != 0) goto L40
            com.tkay.expressad.advanced.view.a r0 = new com.tkay.expressad.advanced.view.a     // Catch: java.lang.Throwable -> L40
            java.lang.String r1 = r4.h     // Catch: java.lang.Throwable -> L40
            com.tkay.expressad.advanced.c.b r2 = r4.k     // Catch: java.lang.Throwable -> L40
            com.tkay.expressad.advanced.d.a r2 = r2.b()     // Catch: java.lang.Throwable -> L40
            r0.<init>(r1, r2, r4)     // Catch: java.lang.Throwable -> L40
            r4.q = r0     // Catch: java.lang.Throwable -> L40
        L40:
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r4.p
            if (r0 == 0) goto L4b
            com.tkay.expressad.advanced.view.a r1 = r4.q
            if (r1 == 0) goto L4b
            r0.setWebViewClient(r1)
        L4b:
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r4.o
            r1 = -1
            if (r0 != 0) goto L72
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = new com.tkay.expressad.advanced.view.TYNativeAdvancedView
            r0.<init>(r5)
            r4.o = r0
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r5 = r4.p
            r0.setAdvancedNativeWebview(r5)
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r5 = r4.p
            if (r5 == 0) goto L72
            android.view.ViewParent r5 = r5.getParent()
            if (r5 != 0) goto L72
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r5 = r4.o
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r4.p
            android.view.ViewGroup$LayoutParams r2 = new android.view.ViewGroup$LayoutParams
            r2.<init>(r1, r1)
            r5.addView(r0, r2)
        L72:
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r5 = r4.E
            if (r5 != 0) goto Lb9
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r5 = new com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            r5.<init>(r0)
            r4.E = r5
            int r5 = r4.z
            if (r5 == 0) goto L98
            int r5 = r4.A
            if (r5 != 0) goto L8e
            goto L98
        L8e:
            android.view.ViewGroup$LayoutParams r5 = new android.view.ViewGroup$LayoutParams
            int r0 = r4.z
            int r1 = r4.A
            r5.<init>(r0, r1)
            goto L9d
        L98:
            android.view.ViewGroup$LayoutParams r5 = new android.view.ViewGroup$LayoutParams
            r5.<init>(r1, r1)
        L9d:
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r0 = r4.E
            r0.setLayoutParams(r5)
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r5 = r4.E
            r5.setProvider(r4)
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r5 = r4.E
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r4.o
            r5.addView(r0)
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r5 = r4.E
            android.view.ViewTreeObserver r5 = r5.getViewTreeObserver()
            android.view.ViewTreeObserver$OnScrollChangedListener r0 = r4.J
            r5.addOnScrollChangedListener(r0)
        Lb9:
            return
    }

    private void a(com.tkay.expressad.foundation.d.c r4) {
            r3 = this;
            com.tkay.expressad.advanced.c.b r0 = r3.k
            com.tkay.expressad.advanced.d.d r1 = r3.n
            r0.a(r1)
            com.tkay.expressad.advanced.c.b r0 = r3.k
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r1 = r3.o
            r2 = 1
            r0.a(r4, r1, r2)
            return
    }

    private void a(org.json.JSONObject r2) {
            r1 = this;
            r0 = 1
            r1.D = r0
            r1.b(r2)
            return
    }

    static boolean a(com.tkay.expressad.advanced.d.c r0) {
            boolean r0 = r0.I
            return r0
    }

    static boolean a(com.tkay.expressad.advanced.d.c r0, boolean r1) {
            r0.I = r1
            return r1
    }

    static com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup b(com.tkay.expressad.advanced.d.c r0) {
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r0 = r0.E
            return r0
    }

    private void b(int r2, int r3) {
            r1 = this;
            if (r2 <= 0) goto L12
            if (r3 <= 0) goto L12
            r1.A = r2
            r1.z = r3
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams
            r0.<init>(r3, r2)
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r2 = r1.E
            r2.setLayoutParams(r0)
        L12:
            return
    }

    private void b(org.json.JSONObject r4) {
            r3 = this;
            boolean r0 = r3.D
            if (r0 == 0) goto L19
            r3.C = r4
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r3.p
            if (r0 == 0) goto L19
            boolean r0 = r0.isDestroyed()
            if (r0 != 0) goto L19
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r3.p
            java.lang.String r1 = "setStyleList"
            java.lang.String r2 = ""
            com.tkay.expressad.advanced.js.NativeAdvancedJsUtils.sendThirdToH5(r0, r1, r2, r4)
        L19:
            return
    }

    static void c(com.tkay.expressad.advanced.d.c r0) {
            r0.j()
            return
    }

    static java.lang.String f() {
            java.lang.String r0 = com.tkay.expressad.advanced.d.c.g
            return r0
    }

    private void f(int r4) {
            r3 = this;
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r3.p
            if (r0 == 0) goto L34
            boolean r0 = r0.isDestroyed()
            if (r0 != 0) goto L34
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r3.p     // Catch: java.lang.Throwable -> L30
            if (r0 == 0) goto L2f
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L30
            r0.<init>()     // Catch: java.lang.Throwable -> L30
            java.lang.String r1 = "netstat"
            r0.put(r1, r4)     // Catch: java.lang.Throwable -> L30
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L30
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r4 = r3.p     // Catch: java.lang.Throwable -> L30
            java.lang.String r1 = "onNetstatChanged"
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L30
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L30
            r2 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r2)     // Catch: java.lang.Throwable -> L30
            com.tkay.expressad.atsignalcommon.windvane.j.a(r4, r1, r0)     // Catch: java.lang.Throwable -> L30
        L2f:
            return
        L30:
            r4 = move-exception
            r4.getMessage()
        L34:
            return
    }

    private void g() {
            r10 = this;
            r0 = 1
            com.tkay.expressad.foundation.d.c[] r1 = new com.tkay.expressad.foundation.d.c[r0]
            com.tkay.expressad.advanced.c.a r2 = r10.j
            r3 = 0
            if (r2 == 0) goto Le
            com.tkay.expressad.foundation.d.c r2 = r2.c()
            r1[r3] = r2
        Le:
            r2 = r1[r3]
            if (r2 == 0) goto L55
            com.tkay.expressad.d.c r2 = r10.r
            if (r2 != 0) goto L29
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r2 = r2.e()
            java.lang.String r4 = r10.h
            com.tkay.expressad.d.c r2 = com.tkay.expressad.d.b.b(r2, r4)
            r10.r = r2
        L29:
            com.tkay.expressad.advanced.d.d r2 = new com.tkay.expressad.advanced.d.d
            com.tkay.expressad.out.i r6 = r10.m
            com.tkay.expressad.d.c r4 = r10.r
            double r7 = r4.a()
            r9 = r1[r3]
            r4 = r2
            r5 = r10
            r4.<init>(r5, r6, r7, r9)
            r10.n = r2
            boolean r2 = r10.e
            if (r2 == 0) goto L41
            return
        L41:
            r10.e = r0
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r4 = r10.o
            r5 = r1[r3]
            java.lang.String r6 = r10.i
            java.lang.String r7 = r10.h
            int r8 = r10.t
            com.tkay.expressad.advanced.d.c$2 r9 = new com.tkay.expressad.advanced.d.c$2
            r9.<init>(r10, r1)
            com.tkay.expressad.advanced.c.c.a(r4, r5, r6, r7, r8, r9)
        L55:
            return
    }

    private void g(int r4) {
            r3 = this;
            boolean r0 = r3.u
            if (r0 == 0) goto L34
            r3.t = r4
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r4 = r3.p
            if (r4 == 0) goto L34
            boolean r4 = r4.isDestroyed()
            if (r4 != 0) goto L34
            int r4 = r3.t
            r0 = 0
            java.lang.String r1 = ""
            r2 = 1
            if (r4 != r2) goto L25
            com.tkay.expressad.advanced.c.b r4 = r3.k
            r4.a(r2)
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r4 = r3.p
            java.lang.String r2 = "showCloseButton"
            com.tkay.expressad.advanced.js.NativeAdvancedJsUtils.sendThirdToH5(r4, r2, r1, r0)
            return
        L25:
            if (r4 != 0) goto L34
            com.tkay.expressad.advanced.c.b r4 = r3.k
            r2 = 0
            r4.a(r2)
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r4 = r3.p
            java.lang.String r2 = "hideCloseButton"
            com.tkay.expressad.advanced.js.NativeAdvancedJsUtils.sendThirdToH5(r4, r2, r1, r0)
        L34:
            return
    }

    private java.lang.String h() {
            r1 = this;
            boolean r0 = r1.d
            if (r0 == 0) goto Ld
            com.tkay.expressad.advanced.c.b r0 = r1.k
            if (r0 == 0) goto L16
            java.lang.String r0 = r0.a()
            return r0
        Ld:
            com.tkay.expressad.advanced.c.a r0 = r1.j
            if (r0 == 0) goto L16
            java.lang.String r0 = r0.a()
            return r0
        L16:
            java.lang.String r0 = ""
            return r0
    }

    private void h(int r4) {
            r3 = this;
            boolean r0 = r3.w
            if (r0 == 0) goto L1d
            r3.v = r4
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r3.p
            if (r0 == 0) goto L1d
            boolean r0 = r0.isDestroyed()
            if (r0 != 0) goto L1d
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r3.p
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            java.lang.String r1 = "setVolume"
            java.lang.String r2 = "mute"
            com.tkay.expressad.advanced.js.NativeAdvancedJsUtils.sendThirdToH5(r0, r1, r2, r4)
        L1d:
            return
    }

    private void i() {
            r1 = this;
            int r0 = r1.t
            r1.g(r0)
            int r0 = r1.v
            r1.h(r0)
            int r0 = r1.x
            r1.i(r0)
            org.json.JSONObject r0 = r1.C
            r1.b(r0)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.f()
            int r0 = com.tkay.expressad.foundation.h.k.a()
            r1.f(r0)
            return
    }

    private void i(int r4) {
            r3 = this;
            boolean r0 = r3.y
            if (r0 == 0) goto L1d
            r3.x = r4
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r3.p
            if (r0 == 0) goto L1d
            boolean r0 = r0.isDestroyed()
            if (r0 != 0) goto L1d
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r3.p
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            java.lang.String r1 = "setVideoPlayMode"
            java.lang.String r2 = "autoPlay"
            com.tkay.expressad.advanced.js.NativeAdvancedJsUtils.sendThirdToH5(r0, r1, r2, r4)
        L1d:
            return
    }

    private void j() {
            r2 = this;
            boolean r0 = r2.F
            if (r0 == 0) goto L38
            boolean r0 = r2.G
            if (r0 == 0) goto L38
            boolean r0 = r2.H
            if (r0 != 0) goto Ld
            goto L38
        Ld:
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r2.o
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r0.getAdvancedNativeWebview()
            boolean r0 = com.tkay.expressad.foundation.h.y.a(r0)
            if (r0 != 0) goto L38
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r0 = r2.E
            float r0 = r0.getAlpha()
            r1 = 1056964608(0x3f000000, float:0.5)
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 < 0) goto L38
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r0 = r2.E
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L2e
            goto L38
        L2e:
            com.tkay.expressad.advanced.c.b r0 = r2.k
            if (r0 == 0) goto L35
            r0.d()
        L35:
            r2.g()
        L38:
            return
    }

    private void k() {
            r1 = this;
            com.tkay.expressad.advanced.c.b r0 = r1.k
            if (r0 == 0) goto L7
            r0.e()
        L7:
            return
    }

    public final java.lang.String a(java.lang.String r2) {
            r1 = this;
            com.tkay.expressad.advanced.c.a r0 = r1.j
            if (r0 == 0) goto L9
            java.lang.String r2 = r0.a(r2)
            return r2
        L9:
            java.lang.String r2 = ""
            return r2
    }

    public final void a(int r2) {
            r1 = this;
            r0 = 1
            r1.u = r0
            r1.g(r2)
            return
    }

    public final void a(int r2, int r3) {
            r1 = this;
            if (r2 <= 0) goto L12
            if (r3 <= 0) goto L12
            r1.A = r2
            r1.z = r3
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams
            r0.<init>(r3, r2)
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r2 = r1.E
            r2.setLayoutParams(r0)
        L12:
            return
    }

    final void a(com.tkay.expressad.foundation.d.c r7, boolean r8) {
            r6 = this;
            int r0 = r6.t
            r6.g(r0)
            int r0 = r6.v
            r6.h(r0)
            int r0 = r6.x
            r6.i(r0)
            org.json.JSONObject r0 = r6.C
            r6.b(r0)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.f()
            int r0 = com.tkay.expressad.foundation.h.k.a()
            r6.f(r0)
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r0 = r6.E
            if (r0 == 0) goto L83
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L2d
            goto L83
        L2d:
            if (r7 == 0) goto L5a
            if (r8 == 0) goto L5a
            com.tkay.expressad.d.c r8 = r6.r
            if (r8 != 0) goto L48
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.foundation.b.b r8 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r8 = r8.e()
            java.lang.String r0 = r6.h
            com.tkay.expressad.d.c r8 = com.tkay.expressad.d.b.b(r8, r0)
            r6.r = r8
        L48:
            com.tkay.expressad.advanced.d.d r8 = new com.tkay.expressad.advanced.d.d
            com.tkay.expressad.out.i r2 = r6.m
            com.tkay.expressad.d.c r0 = r6.r
            double r3 = r0.a()
            r0 = r8
            r1 = r6
            r5 = r7
            r0.<init>(r1, r2, r3, r5)
            r6.n = r8
        L5a:
            com.tkay.expressad.advanced.c.b r8 = r6.k
            if (r8 != 0) goto L74
            com.tkay.expressad.advanced.c.b r8 = new com.tkay.expressad.advanced.c.b
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r1 = r6.i
            java.lang.String r2 = r6.h
            r8.<init>(r0, r1, r2)
            r6.k = r8
            r8.a(r6)
        L74:
            com.tkay.expressad.advanced.c.b r8 = r6.k
            com.tkay.expressad.advanced.d.d r0 = r6.n
            r8.a(r0)
            com.tkay.expressad.advanced.c.b r8 = r6.k
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r6.o
            r1 = 1
            r8.a(r7, r0, r1)
        L83:
            return
    }

    public final void a(com.tkay.expressad.foundation.d.d r4) {
            r3 = this;
            r3.f = r4
            r0 = 1
            r3.I = r0
            r3.s = r0
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r3.o
            r0.clearResStateAndRemoveClose()
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r0 = r0.e()
            java.lang.String r1 = r3.h
            com.tkay.expressad.d.c r0 = com.tkay.expressad.d.b.d(r0, r1)
            r3.r = r0
            if (r0 != 0) goto L27
            com.tkay.expressad.d.c r0 = com.tkay.expressad.d.c.y()
            r3.r = r0
        L27:
            com.tkay.expressad.advanced.d.b r0 = new com.tkay.expressad.advanced.d.b
            r0.<init>(r3)
            r3.l = r0
            com.tkay.expressad.out.i r1 = r3.m
            r0.a(r1)
            com.tkay.expressad.advanced.c.a r0 = r3.j
            if (r0 != 0) goto L42
            com.tkay.expressad.advanced.c.a r0 = new com.tkay.expressad.advanced.c.a
            java.lang.String r1 = r3.i
            java.lang.String r2 = r3.h
            r0.<init>(r1, r2)
            r3.j = r0
        L42:
            com.tkay.expressad.advanced.d.b r0 = r3.l
            if (r0 == 0) goto L4b
            com.tkay.expressad.advanced.c.a r1 = r3.j
            r1.a(r0)
        L4b:
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r3.o
            r0.resetLoadState()
            com.tkay.expressad.advanced.c.a r0 = r3.j
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r1 = r3.o
            r0.a(r1)
            com.tkay.expressad.advanced.c.a r0 = r3.j
            com.tkay.expressad.d.c r1 = r3.r
            r0.a(r1)
            com.tkay.expressad.advanced.c.a r0 = r3.j
            int r1 = r3.z
            int r2 = r3.A
            r0.a(r1, r2)
            com.tkay.expressad.advanced.c.a r0 = r3.j
            int r1 = r3.t
            r0.a(r1)
            com.tkay.expressad.advanced.c.a r0 = r3.j
            r0.a(r4)
            return
    }

    public final void a(com.tkay.expressad.out.i r1) {
            r0 = this;
            r0.m = r1
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

    public final void b(int r2) {
            r1 = this;
            r0 = 1
            r1.w = r0
            r1.h(r2)
            return
    }

    public final com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup c() {
            r1 = this;
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r0 = r1.E
            return r0
    }

    public final void c(int r2) {
            r1 = this;
            r0 = 1
            r1.y = r0
            r1.i(r2)
            return
    }

    public final int d() {
            r1 = this;
            int r0 = r1.t
            return r0
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
            r2.H = r0
            goto L12
        Ld:
            r2.G = r0
            goto L12
        L10:
            r2.F = r0
        L12:
            r2.j()     // Catch: java.lang.Throwable -> L15
        L15:
            return
    }

    public final void e() {
            r3 = this;
            com.tkay.expressad.out.i r0 = r3.m
            r1 = 0
            if (r0 == 0) goto L7
            r3.m = r1
        L7:
            com.tkay.expressad.advanced.d.b r0 = r3.l
            if (r0 == 0) goto Ld
            r3.l = r1
        Ld:
            com.tkay.expressad.advanced.d.d r0 = r3.n
            if (r0 == 0) goto L13
            r3.n = r1
        L13:
            com.tkay.expressad.advanced.c.a r0 = r3.j
            if (r0 == 0) goto L1f
            r0.a(r1)
            com.tkay.expressad.advanced.c.a r0 = r3.j
            r0.b()
        L1f:
            com.tkay.expressad.advanced.c.b r0 = r3.k
            if (r0 == 0) goto L26
            r0.c()
        L26:
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r3.o
            if (r0 == 0) goto L2d
            r0.destroy()
        L2d:
            com.tkay.expressad.foundation.d.d r0 = r3.f
            java.lang.String r0 = r0.f()
            com.tkay.expressad.advanced.a.c.c(r0)
            com.tkay.expressad.advanced.view.a r0 = r3.q
            if (r0 == 0) goto L3d
            r0.a()
        L3d:
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r0 = r3.E
            if (r0 == 0) goto L51
            android.view.ViewTreeObserver r0 = r0.getViewTreeObserver()
            android.view.ViewTreeObserver$OnScrollChangedListener r2 = r3.J
            r0.removeOnScrollChangedListener(r2)
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r0 = r3.E
            r0.removeAllViews()
            r3.E = r1
        L51:
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
            r2.H = r1
            goto L13
        Le:
            r2.G = r1
            goto L13
        L11:
            r2.F = r1
        L13:
            com.tkay.expressad.advanced.c.b r3 = r2.k
            if (r3 == 0) goto L1a
            r3.e()
        L1a:
            return
    }

    @Override
    public boolean isReady() {
            r1 = this;
            r0 = 0
            return r0
    }
}
