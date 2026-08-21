package com.tkay.expressad.advanced.c;

public final class b {
    public android.os.Handler a;
    private java.lang.String b;
    private com.tkay.expressad.foundation.d.c c;
    private com.tkay.expressad.advanced.view.TYNativeAdvancedView d;
    private com.tkay.expressad.advanced.d.d e;
    private com.tkay.expressad.a.a f;
    private com.tkay.expressad.advanced.d.c g;
    private boolean h;
    private int i;
    private android.widget.ImageView j;
    private java.lang.String k;
    private java.lang.String l;
    private boolean m;
    private android.view.View.OnClickListener n;
    private com.tkay.expressad.advanced.d.a o;






    public b(android.content.Context r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = "NativeAdvancedShowManager"
            r3.b = r0
            r0 = -1
            r3.i = r0
            com.tkay.expressad.advanced.c.b$1 r0 = new com.tkay.expressad.advanced.c.b$1
            r0.<init>(r3)
            r3.n = r0
            com.tkay.expressad.advanced.c.b$2 r0 = new com.tkay.expressad.advanced.c.b$2
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r3, r1)
            r3.a = r0
            com.tkay.expressad.advanced.c.b$3 r0 = new com.tkay.expressad.advanced.c.b$3
            r0.<init>(r3)
            r3.o = r0
            r3.k = r6
            r3.l = r5
            android.widget.ImageView r5 = r3.j
            if (r5 != 0) goto L8f
            android.widget.ImageView r5 = new android.widget.ImageView
            r5.<init>(r4)
            r3.j = r5
            r6 = 1073741824(0x40000000, float:2.0)
            int r0 = com.tkay.expressad.foundation.h.t.b(r4, r6)
            int r1 = com.tkay.expressad.foundation.h.t.b(r4, r6)
            int r2 = com.tkay.expressad.foundation.h.t.b(r4, r6)
            int r4 = com.tkay.expressad.foundation.h.t.b(r4, r6)
            r5.setPadding(r0, r1, r2, r4)
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()
            android.content.Context r4 = r4.f()
            android.widget.ImageView r5 = r3.j
            android.widget.ImageView$ScaleType r6 = android.widget.ImageView.ScaleType.FIT_XY
            r5.setScaleType(r6)
            android.widget.ImageView r5 = r3.j
            android.view.ViewGroup$LayoutParams r5 = r5.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r5 = (android.widget.RelativeLayout.LayoutParams) r5
            if (r5 != 0) goto L71
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams
            r6 = 1105723392(0x41e80000, float:29.0)
            int r6 = com.tkay.expressad.foundation.h.t.b(r4, r6)
            r0 = 1098907648(0x41800000, float:16.0)
            int r0 = com.tkay.expressad.foundation.h.t.b(r4, r0)
            r5.<init>(r6, r0)
        L71:
            android.widget.ImageView r6 = r3.j
            r6.setLayoutParams(r5)
            android.widget.ImageView r5 = r3.j
            android.content.res.Resources r4 = r4.getResources()
            com.tkay.expressad.foundation.b.b r6 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r6 = r6.a()
            java.lang.String r0 = "tkay_native_advanced_close_icon"
            java.lang.String r1 = "drawable"
            int r4 = r4.getIdentifier(r0, r1, r6)
            r5.setImageResource(r4)
        L8f:
            return
    }

    static int a(com.tkay.expressad.advanced.c.b r0, int r1) {
            r0.i = r1
            return r1
    }

    private void a(android.view.View r2) {
            r1 = this;
            if (r2 == 0) goto L7
            android.view.View$OnClickListener r0 = r1.n
            r2.setOnClickListener(r0)
        L7:
            return
    }

    private static void a(com.tkay.expressad.foundation.d.c r3, android.content.Context r4, java.lang.String r5) {
            if (r3 == 0) goto L27
            java.util.List r0 = r3.e()     // Catch: java.lang.Throwable -> L23
            if (r0 == 0) goto L27
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L23
            if (r1 <= 0) goto L27
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L23
        L12:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L23
            if (r1 == 0) goto L27
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L23
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L23
            r2 = 1
            com.tkay.expressad.a.a.a(r4, r3, r5, r1, r2)     // Catch: java.lang.Throwable -> L23
            goto L12
        L23:
            r3 = move-exception
            r3.getMessage()
        L27:
            return
    }

    static boolean a(com.tkay.expressad.advanced.c.b r0) {
            boolean r0 = r0.h
            return r0
    }

    static boolean a(com.tkay.expressad.advanced.c.b r0, boolean r1) {
            r0.m = r1
            return r1
    }

    static void b(com.tkay.expressad.advanced.c.b r1) {
            com.tkay.expressad.advanced.d.d r0 = r1.e
            if (r0 == 0) goto La
            r0.c()
            r0 = 0
            r1.e = r0
        La:
            return
    }

    private void b(com.tkay.expressad.foundation.d.c r12) {
            r11 = this;
            boolean r0 = r12.s()
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L5d
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r10 = r11.k
            com.tkay.expressad.foundation.b.b r3 = com.tkay.expressad.foundation.b.b.b()
            r3.b(r0)
            java.lang.String r3 = r12.ag()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L31
            java.lang.String r6 = r12.ag()
            r7 = 0
            r8 = 1
            int r9 = com.tkay.expressad.a.a.a.i
            r3 = r0
            r4 = r12
            r5 = r10
            com.tkay.expressad.a.a.a(r3, r4, r5, r6, r7, r8, r9)
        L31:
            boolean r3 = android.text.TextUtils.isEmpty(r10)
            if (r3 != 0) goto L52
            com.tkay.expressad.foundation.d.n r3 = r12.L()
            if (r3 == 0) goto L52
            com.tkay.expressad.foundation.d.n r3 = r12.L()
            java.lang.String[] r3 = r3.o()
            if (r3 == 0) goto L52
            com.tkay.expressad.foundation.d.n r3 = r12.L()
            java.lang.String[] r3 = r3.o()
            com.tkay.expressad.a.a.a(r0, r12, r10, r3, r2)
        L52:
            r12.c(r1)
            java.lang.String r0 = r11.k
            java.lang.String r2 = "h5_native"
            com.tkay.expressad.foundation.g.a.f.a(r0, r12, r2)
            goto L5e
        L5d:
            r1 = r2
        L5e:
            if (r1 == 0) goto L7a
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r1 = r11.k
            b(r12, r0, r1)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r1 = r11.k
            a(r12, r0, r1)
        L7a:
            return
    }

    private static void b(com.tkay.expressad.foundation.d.c r8, android.content.Context r9, java.lang.String r10) {
            if (r8 == 0) goto L1f
            java.lang.String r0 = r8.ai()     // Catch: java.lang.Throwable -> L1b
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L1b
            if (r0 != 0) goto L1f
            java.lang.String r4 = r8.ai()     // Catch: java.lang.Throwable -> L1b
            r5 = 0
            r6 = 1
            int r7 = com.tkay.expressad.a.a.a.j     // Catch: java.lang.Throwable -> L1b
            r1 = r9
            r2 = r8
            r3 = r10
            com.tkay.expressad.a.a.a(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L1b
            goto L1f
        L1b:
            r8 = move-exception
            r8.getMessage()
        L1f:
            return
    }

    static com.tkay.expressad.foundation.d.c c(com.tkay.expressad.advanced.c.b r0) {
            com.tkay.expressad.foundation.d.c r0 = r0.c
            return r0
    }

    private static void c(com.tkay.expressad.foundation.d.c r8, android.content.Context r9, java.lang.String r10) {
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            r0.b(r9)
            java.lang.String r0 = r8.ag()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1f
            java.lang.String r4 = r8.ag()
            r5 = 0
            r6 = 1
            int r7 = com.tkay.expressad.a.a.a.i
            r1 = r9
            r2 = r8
            r3 = r10
            com.tkay.expressad.a.a.a(r1, r2, r3, r4, r5, r6, r7)
        L1f:
            boolean r0 = android.text.TextUtils.isEmpty(r10)
            if (r0 != 0) goto L41
            com.tkay.expressad.foundation.d.n r0 = r8.L()
            if (r0 == 0) goto L41
            com.tkay.expressad.foundation.d.n r0 = r8.L()
            java.lang.String[] r0 = r0.o()
            if (r0 == 0) goto L41
            com.tkay.expressad.foundation.d.n r0 = r8.L()
            java.lang.String[] r0 = r0.o()
            r1 = 0
            com.tkay.expressad.a.a.a(r9, r8, r10, r0, r1)
        L41:
            return
    }

    static com.tkay.expressad.advanced.view.TYNativeAdvancedView d(com.tkay.expressad.advanced.c.b r0) {
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r0.d
            return r0
    }

    static java.lang.String e(com.tkay.expressad.advanced.c.b r0) {
            java.lang.String r0 = r0.b
            return r0
    }

    static com.tkay.expressad.advanced.d.d f(com.tkay.expressad.advanced.c.b r0) {
            com.tkay.expressad.advanced.d.d r0 = r0.e
            return r0
    }

    private void f() {
            r5 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            android.widget.ImageView r1 = r5.j
            android.widget.ImageView$ScaleType r2 = android.widget.ImageView.ScaleType.FIT_XY
            r1.setScaleType(r2)
            android.widget.ImageView r1 = r5.j
            android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1
            if (r1 != 0) goto L2a
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r2 = 1105723392(0x41e80000, float:29.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r0, r2)
            r3 = 1098907648(0x41800000, float:16.0)
            int r3 = com.tkay.expressad.foundation.h.t.b(r0, r3)
            r1.<init>(r2, r3)
        L2a:
            android.widget.ImageView r2 = r5.j
            r2.setLayoutParams(r1)
            android.widget.ImageView r1 = r5.j
            android.content.res.Resources r0 = r0.getResources()
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r2 = r2.a()
            java.lang.String r3 = "tkay_native_advanced_close_icon"
            java.lang.String r4 = "drawable"
            int r0 = r0.getIdentifier(r3, r4, r2)
            r1.setImageResource(r0)
            return
    }

    private void g() {
            r12 = this;
            com.tkay.expressad.foundation.d.c r0 = r12.c
            boolean r0 = r0.V()
            if (r0 != 0) goto L90
            com.tkay.expressad.foundation.d.c r0 = r12.c
            r1 = 1
            r0.c(r1)
            com.tkay.expressad.foundation.d.c r0 = r12.c
            boolean r2 = r0.s()
            r9 = 0
            if (r2 != 0) goto L6c
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r10 = r2.f()
            java.lang.String r11 = r12.k
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
            r2.b(r10)
            java.lang.String r2 = r0.ag()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L40
            java.lang.String r5 = r0.ag()
            r6 = 0
            r7 = 1
            int r8 = com.tkay.expressad.a.a.a.i
            r2 = r10
            r3 = r0
            r4 = r11
            com.tkay.expressad.a.a.a(r2, r3, r4, r5, r6, r7, r8)
        L40:
            boolean r2 = android.text.TextUtils.isEmpty(r11)
            if (r2 != 0) goto L61
            com.tkay.expressad.foundation.d.n r2 = r0.L()
            if (r2 == 0) goto L61
            com.tkay.expressad.foundation.d.n r2 = r0.L()
            java.lang.String[] r2 = r2.o()
            if (r2 == 0) goto L61
            com.tkay.expressad.foundation.d.n r2 = r0.L()
            java.lang.String[] r2 = r2.o()
            com.tkay.expressad.a.a.a(r10, r0, r11, r2, r9)
        L61:
            r0.c(r1)
            java.lang.String r2 = r12.k
            java.lang.String r3 = "h5_native"
            com.tkay.expressad.foundation.g.a.f.a(r2, r0, r3)
            goto L6d
        L6c:
            r1 = r9
        L6d:
            if (r1 == 0) goto L89
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            java.lang.String r2 = r12.k
            b(r0, r1, r2)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            java.lang.String r2 = r12.k
            a(r0, r1, r2)
        L89:
            com.tkay.expressad.advanced.d.d r0 = r12.e
            if (r0 == 0) goto L90
            r0.a()
        L90:
            return
    }

    private static void h() {
            return
    }

    private void i() {
            r1 = this;
            com.tkay.expressad.advanced.d.d r0 = r1.e
            if (r0 == 0) goto La
            r0.c()
            r0 = 0
            r1.e = r0
        La:
            return
    }

    private static void j() {
            return
    }

    public final java.lang.String a() {
            r1 = this;
            com.tkay.expressad.foundation.d.c r0 = r1.c
            if (r0 == 0) goto L11
            java.lang.String r0 = r0.Z()
            if (r0 == 0) goto L11
            com.tkay.expressad.foundation.d.c r0 = r1.c
            java.lang.String r0 = r0.Z()
            return r0
        L11:
            java.lang.String r0 = ""
            return r0
    }

    public final void a(com.tkay.expressad.advanced.d.c r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public final void a(com.tkay.expressad.advanced.d.d r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final void a(com.tkay.expressad.foundation.d.c r2) {
            r1 = this;
            java.lang.String r0 = r1.k
            r2.l(r0)
            com.tkay.expressad.advanced.d.d r0 = r1.e
            if (r0 == 0) goto Lc
            r0.a(r2)
        Lc:
            return
    }

    public final void a(com.tkay.expressad.foundation.d.c r12, com.tkay.expressad.advanced.view.TYNativeAdvancedView r13, boolean r14) {
            r11 = this;
            if (r13 != 0) goto L3
            return
        L3:
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r1 = r11.k
            com.tkay.expressad.advanced.c.b$4 r2 = new com.tkay.expressad.advanced.c.b$4
            r2.<init>(r11, r13)
            r0.a(r1, r2)
            boolean r0 = r12.H()
            if (r0 == 0) goto L58
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            boolean r0 = r0.b()
            if (r0 == 0) goto L58
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r1 = r11.k
            com.tkay.expressad.widget.FeedBackButton r0 = r0.b(r1)
            if (r0 == 0) goto L58
            r1 = 0
            android.view.ViewGroup$LayoutParams r2 = r0.getLayoutParams()     // Catch: java.lang.Exception -> L36
            android.widget.RelativeLayout$LayoutParams r2 = (android.widget.RelativeLayout.LayoutParams) r2     // Catch: java.lang.Exception -> L36
            r1 = r2
            goto L3a
        L36:
            r2 = move-exception
            r2.printStackTrace()
        L3a:
            if (r1 != 0) goto L45
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            int r2 = com.tkay.expressad.foundation.f.b.a
            int r3 = com.tkay.expressad.foundation.f.b.b
            r1.<init>(r2, r3)
        L45:
            r2 = 12
            r1.addRule(r2)
            android.view.ViewParent r2 = r0.getParent()
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            if (r2 == 0) goto L55
            r2.removeView(r0)
        L55:
            r13.addView(r0, r1)
        L58:
            boolean r0 = r11.h
            r11.h = r0
            r11.c = r12
            r11.d = r13
            com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl r0 = r13.getAdvancedNativeJSBridgeImpl()
            if (r0 != 0) goto L7e
            com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl r0 = new com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl
            android.content.Context r1 = r13.getContext()
            java.lang.String r2 = r11.l
            java.lang.String r3 = r11.k
            r0.<init>(r1, r2, r3)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r1.add(r12)
            r0.setCampaignList(r1)
        L7e:
            boolean r1 = r11.h
            r0.setAllowSkip(r1)
            com.tkay.expressad.advanced.d.a r1 = r11.o
            r0.setNativeAdvancedBridgeListener(r1)
            r13.setAdvancedNativeJSBridgeImpl(r0)
            boolean r0 = r12.s()
            if (r0 != 0) goto L95
            boolean r0 = r11.h
            if (r0 != 0) goto L9c
        L95:
            android.widget.ImageView r0 = r11.j
            r1 = 8
            r0.setVisibility(r1)
        L9c:
            android.widget.ImageView r0 = r11.j
            if (r0 == 0) goto La5
            android.view.View$OnClickListener r1 = r11.n
            r0.setOnClickListener(r1)
        La5:
            android.widget.ImageView r0 = r11.j
            r13.setCloseView(r0)
            int r0 = r13.getVisibility()
            r1 = 0
            if (r0 == 0) goto Lb4
            r13.setVisibility(r1)
        Lb4:
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r13.getAdvancedNativeWebview()
            boolean r0 = com.tkay.expressad.foundation.h.y.a(r0)
            com.tkay.expressad.advanced.d.c r2 = r11.g
            if (r2 == 0) goto L1d8
            if (r0 != 0) goto L1d8
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r0 = r2.c()
            if (r0 == 0) goto L1d8
            com.tkay.expressad.advanced.d.c r0 = r11.g
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r0 = r0.c()
            float r0 = r0.getAlpha()
            r2 = 1056964608(0x3f000000, float:0.5)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L1d8
            com.tkay.expressad.advanced.d.c r0 = r11.g
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r0 = r0.c()
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L1d8
            boolean r0 = r11.m
            if (r0 == 0) goto Lea
            goto L1d8
        Lea:
            r13.show()
            com.tkay.expressad.foundation.b.b r14 = com.tkay.expressad.foundation.b.b.b()
            android.content.Context r0 = r13.getContext()
            r14.b(r0)
            java.lang.String r14 = r11.k
            r12.l(r14)
            com.tkay.expressad.foundation.f.b r14 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r0 = r11.k
            r14.a(r0, r12)
            com.tkay.expressad.foundation.d.c r14 = r11.c
            if (r14 == 0) goto L132
            boolean r14 = r14.ay()
            if (r14 == 0) goto L132
            if (r13 == 0) goto L132
            r13.getAdvancedNativeWebview()
            java.lang.String r14 = r12.Z()     // Catch: java.lang.Throwable -> L11d
            com.tkay.expressad.advanced.a.c.c(r14)     // Catch: java.lang.Throwable -> L11d
            goto L132
        L11d:
            r14 = move-exception
            r14.getMessage()
            com.tkay.expressad.foundation.d.c r14 = r11.c
            if (r14 == 0) goto L132
            r14.Z()
            com.tkay.expressad.foundation.d.c r14 = r11.c
            r14.aa()
            com.tkay.expressad.foundation.d.c r14 = r11.c
            r14.aZ()
        L132:
            com.tkay.expressad.foundation.d.c r14 = r11.c
            boolean r14 = r14.V()
            if (r14 != 0) goto L1c0
            com.tkay.expressad.foundation.d.c r14 = r11.c
            r0 = 1
            r14.c(r0)
            com.tkay.expressad.foundation.d.c r14 = r11.c
            boolean r2 = r14.s()
            if (r2 != 0) goto L19d
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r9 = r2.f()
            java.lang.String r10 = r11.k
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
            r2.b(r9)
            java.lang.String r2 = r14.ag()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L171
            java.lang.String r5 = r14.ag()
            r6 = 0
            r7 = 1
            int r8 = com.tkay.expressad.a.a.a.i
            r2 = r9
            r3 = r14
            r4 = r10
            com.tkay.expressad.a.a.a(r2, r3, r4, r5, r6, r7, r8)
        L171:
            boolean r2 = android.text.TextUtils.isEmpty(r10)
            if (r2 != 0) goto L192
            com.tkay.expressad.foundation.d.n r2 = r14.L()
            if (r2 == 0) goto L192
            com.tkay.expressad.foundation.d.n r2 = r14.L()
            java.lang.String[] r2 = r2.o()
            if (r2 == 0) goto L192
            com.tkay.expressad.foundation.d.n r2 = r14.L()
            java.lang.String[] r2 = r2.o()
            com.tkay.expressad.a.a.a(r9, r14, r10, r2, r1)
        L192:
            r14.c(r0)
            java.lang.String r1 = r11.k
            java.lang.String r2 = "h5_native"
            com.tkay.expressad.foundation.g.a.f.a(r1, r14, r2)
            r1 = r0
        L19d:
            if (r1 == 0) goto L1b9
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r1 = r11.k
            b(r14, r0, r1)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r1 = r11.k
            a(r14, r0, r1)
        L1b9:
            com.tkay.expressad.advanced.d.d r14 = r11.e
            if (r14 == 0) goto L1c0
            r14.a()
        L1c0:
            int r14 = r11.i
            r0 = -1
            if (r14 == r0) goto L1c8
            r13.changeCloseBtnState(r14)
        L1c8:
            java.lang.String r12 = r12.Z()
            com.tkay.expressad.advanced.a.c.c(r12)
            android.os.Handler r12 = r11.a
            r13 = 2
            r0 = 1000(0x3e8, double:4.94E-321)
            r12.sendEmptyMessageDelayed(r13, r0)
            return
        L1d8:
            if (r14 == 0) goto L1e4
            com.tkay.expressad.advanced.c.b$5 r14 = new com.tkay.expressad.advanced.c.b$5
            r14.<init>(r11, r12, r13)
            r0 = 200(0xc8, double:9.9E-322)
            r13.postDelayed(r14, r0)
        L1e4:
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public final com.tkay.expressad.advanced.d.a b() {
            r1 = this;
            com.tkay.expressad.advanced.d.a r0 = r1.o
            return r0
    }

    public final void c() {
            r2 = this;
            com.tkay.expressad.advanced.d.d r0 = r2.e
            r1 = 0
            if (r0 == 0) goto L7
            r2.e = r1
        L7:
            com.tkay.expressad.advanced.d.a r0 = r2.o
            if (r0 == 0) goto Ld
            r2.o = r1
        Ld:
            android.view.View$OnClickListener r0 = r2.n
            if (r0 == 0) goto L13
            r2.n = r1
        L13:
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r2.d
            if (r0 == 0) goto L1a
            r0.destroy()
        L1a:
            com.tkay.expressad.advanced.d.c r0 = r2.g
            if (r0 == 0) goto L20
            r2.g = r1
        L20:
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r1 = r2.k
            r0.c(r1)
            return
    }

    public final void d() {
            r3 = this;
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r3.d
            if (r0 == 0) goto L1d
            boolean r0 = com.tkay.expressad.foundation.f.b.c
            if (r0 != 0) goto L1d
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r3.d
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r0.getAdvancedNativeWebview()
            if (r0 == 0) goto L1d
            boolean r1 = r0.isDestroyed()
            if (r1 != 0) goto L1d
            java.lang.String r1 = "onViewAppeared"
            java.lang.String r2 = ""
            com.tkay.expressad.advanced.js.NativeAdvancedJsUtils.sendEventToH5(r0, r1, r2)
        L1d:
            return
    }

    public final void e() {
            r3 = this;
            com.tkay.expressad.advanced.view.TYNativeAdvancedView r0 = r3.d
            if (r0 == 0) goto L1a
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r0.getAdvancedNativeWebview()
            if (r0 == 0) goto L1a
            boolean r1 = r0.isDestroyed()
            if (r1 != 0) goto L1a
            com.tkay.expressad.atsignalcommon.windvane.j.a()
            java.lang.String r1 = "onViewDisappeared"
            java.lang.String r2 = ""
            com.tkay.expressad.atsignalcommon.windvane.j.a(r0, r1, r2)
        L1a:
            return
    }
}
