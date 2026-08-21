package com.tkay.expressad.mbbanner.a.d;

public final class c {
    private static java.lang.String c = "BannerShowManager";
    private float A;
    private android.view.View.OnClickListener B;
    private com.tkay.expressad.mbbanner.a.c.a C;
    private com.tkay.expressad.atsignalcommon.a.b D;
    com.tkay.expressad.a.a a;
    com.tkay.expressad.out.c b;
    private com.tkay.expressad.mbbanner.a.c.c d;
    private boolean e;
    private com.tkay.expressad.foundation.d.c f;
    private com.tkay.expressad.out.TemplateBannerView g;
    private android.widget.ImageView h;
    private com.tkay.expressad.mbbanner.view.TYBannerWebView i;
    private android.widget.ImageView j;
    private boolean k;
    private boolean l;
    private boolean m;
    private boolean n;
    private boolean o;
    private boolean p;
    private boolean q;
    private java.lang.String r;
    private java.lang.String s;
    private java.util.List<com.tkay.expressad.foundation.d.c> t;
    private int u;
    private long v;
    private com.tkay.expressad.mbbanner.a.a.c w;
    private android.os.Handler x;
    private com.tkay.expressad.foundation.g.g.a y;
    private float z;












    static {
            return
    }

    public c(com.tkay.expressad.out.TemplateBannerView r3, com.tkay.expressad.mbbanner.a.c.c r4, java.lang.String r5, java.lang.String r6, boolean r7, com.tkay.expressad.d.c r8) {
            r2 = this;
            r2.<init>()
            r0 = 15000(0x3a98, double:7.411E-320)
            r2.v = r0
            com.tkay.expressad.mbbanner.a.d.c$1 r0 = new com.tkay.expressad.mbbanner.a.d.c$1
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r2, r1)
            r2.x = r0
            com.tkay.expressad.mbbanner.a.d.c$4 r0 = new com.tkay.expressad.mbbanner.a.d.c$4
            r0.<init>(r2)
            r2.y = r0
            com.tkay.expressad.mbbanner.a.d.c$5 r0 = new com.tkay.expressad.mbbanner.a.d.c$5
            r0.<init>(r2)
            r2.B = r0
            com.tkay.expressad.mbbanner.a.d.c$6 r0 = new com.tkay.expressad.mbbanner.a.d.c$6
            r0.<init>(r2)
            r2.C = r0
            com.tkay.expressad.mbbanner.a.d.c$2 r0 = new com.tkay.expressad.mbbanner.a.d.c$2
            r0.<init>(r2)
            r2.D = r0
            r2.e = r7
            r2.g = r3
            r2.r = r6
            r2.s = r5
            com.tkay.expressad.mbbanner.a.c.e r3 = new com.tkay.expressad.mbbanner.a.c.e
            r3.<init>(r4, r8)
            r2.d = r3
            return
    }

    static float a(com.tkay.expressad.mbbanner.a.d.c r0, float r1) {
            r0.z = r1
            return r1
    }

    private static java.lang.String a(com.tkay.expressad.foundation.d.c r4) {
            java.lang.String r0 = ""
            if (r4 == 0) goto L74
            java.lang.String r1 = r4.p()
            com.tkay.expressad.videocommon.b.h r2 = com.tkay.expressad.videocommon.b.h.a()
            java.lang.String r1 = r2.b(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L73
            java.lang.String r1 = r4.q()
            boolean r4 = r4.ay()
            java.lang.String r2 = "file:////"
            if (r4 == 0) goto L53
            java.io.File r4 = new java.io.File     // Catch: java.lang.Exception -> L33
            r4.<init>(r1)     // Catch: java.lang.Exception -> L33
            boolean r3 = r4.exists()     // Catch: java.lang.Exception -> L33
            if (r3 == 0) goto L74
            java.lang.String r4 = com.tkay.expressad.foundation.h.m.a(r4)     // Catch: java.lang.Exception -> L33
        L31:
            r0 = r4
            goto L74
        L33:
            java.io.File r4 = new java.io.File
            r4.<init>(r1)
            boolean r0 = r4.exists()
            if (r0 == 0) goto L73
            boolean r0 = r4.isFile()
            if (r0 == 0) goto L73
            boolean r4 = r4.canRead()
            if (r4 == 0) goto L73
            java.lang.String r4 = java.lang.String.valueOf(r1)
            java.lang.String r4 = r2.concat(r4)
            goto L31
        L53:
            java.io.File r4 = new java.io.File
            r4.<init>(r1)
            boolean r0 = r4.exists()
            if (r0 == 0) goto L73
            boolean r0 = r4.isFile()
            if (r0 == 0) goto L73
            boolean r4 = r4.canRead()
            if (r4 == 0) goto L73
            java.lang.String r4 = java.lang.String.valueOf(r1)
            java.lang.String r0 = r2.concat(r4)
            goto L74
        L73:
            r0 = r1
        L74:
            return r0
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

    static void a(com.tkay.expressad.mbbanner.a.d.c r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    private void a(java.lang.String r3) {
            r2 = this;
            com.tkay.expressad.foundation.d.c r0 = r2.f
            if (r0 == 0) goto L18
            boolean r0 = r2.i()
            if (r0 != 0) goto L18
            android.os.Handler r0 = r2.x
            com.tkay.expressad.foundation.g.g.a r1 = r2.y
            r0.removeCallbacks(r1)
            com.tkay.expressad.mbbanner.a.c.c r0 = r2.d
            if (r0 == 0) goto L18
            r0.a(r3)
        L18:
            return
    }

    static boolean a(com.tkay.expressad.mbbanner.a.d.c r0) {
            boolean r0 = r0.q
            return r0
    }

    static boolean a(com.tkay.expressad.mbbanner.a.d.c r0, boolean r1) {
            r0.p = r1
            return r1
    }

    static float b(com.tkay.expressad.mbbanner.a.d.c r0, float r1) {
            r0.A = r1
            return r1
    }

    private com.tkay.expressad.foundation.d.c b(com.tkay.expressad.foundation.d.d r2) {
            r1 = this;
            if (r2 == 0) goto L18
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r2 = r2.J
            r1.t = r2
            if (r2 == 0) goto L18
            int r2 = r2.size()
            if (r2 <= 0) goto L18
            java.util.List<com.tkay.expressad.foundation.d.c> r2 = r1.t
            r0 = 0
            java.lang.Object r2 = r2.get(r0)
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2
            goto L19
        L18:
            r2 = 0
        L19:
            return r2
    }

    static void b() {
            return
    }

    private void b(com.tkay.expressad.foundation.d.c r3) {
            r2 = this;
            if (r3 == 0) goto L29
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r1 = r2.r
            c(r3, r0, r1)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r1 = r2.r
            b(r3, r0, r1)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r1 = r2.r
            a(r3, r0, r1)
        L29:
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

    static void b(com.tkay.expressad.mbbanner.a.d.c r0) {
            com.tkay.expressad.mbbanner.a.c.c r0 = r0.d
            if (r0 == 0) goto L7
            r0.d()
        L7:
            return
    }

    static java.lang.String c() {
            java.lang.String r0 = com.tkay.expressad.mbbanner.a.d.c.c
            return r0
    }

    private static void c(com.tkay.expressad.foundation.d.c r8, android.content.Context r9, java.lang.String r10) {
            java.lang.String r0 = r8.ag()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L18
            java.lang.String r4 = r8.ag()
            r5 = 0
            r6 = 1
            int r7 = com.tkay.expressad.a.a.a.i
            r1 = r9
            r2 = r8
            r3 = r10
            com.tkay.expressad.a.a.a(r1, r2, r3, r4, r5, r6, r7)
        L18:
            boolean r0 = android.text.TextUtils.isEmpty(r10)
            if (r0 != 0) goto L3a
            com.tkay.expressad.foundation.d.n r0 = r8.L()
            if (r0 == 0) goto L3a
            com.tkay.expressad.foundation.d.n r0 = r8.L()
            java.lang.String[] r0 = r0.o()
            if (r0 == 0) goto L3a
            com.tkay.expressad.foundation.d.n r0 = r8.L()
            java.lang.String[] r0 = r0.o()
            r1 = 0
            com.tkay.expressad.a.a.a(r9, r8, r10, r0, r1)
        L3a:
            return
    }

    static void c(com.tkay.expressad.mbbanner.a.d.c r2) {
            boolean r0 = r2.e
            if (r0 == 0) goto L2e
            android.widget.ImageView r0 = r2.j
            if (r0 == 0) goto L2e
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L2e
            android.widget.ImageView r0 = r2.j
            r1 = 8
            r0.setVisibility(r1)
            android.widget.ImageView r0 = r2.j
            r1 = 0
            r0.setOnClickListener(r1)
            com.tkay.expressad.out.TemplateBannerView r0 = r2.g
            if (r0 == 0) goto L2e
            android.widget.ImageView r0 = r2.j
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L2e
            com.tkay.expressad.out.TemplateBannerView r0 = r2.g
            android.widget.ImageView r2 = r2.j
            r0.removeView(r2)
        L2e:
            return
    }

    static void d(com.tkay.expressad.mbbanner.a.d.c r0) {
            r0.l()
            return
    }

    private void d(boolean r4) {
            r3 = this;
            com.tkay.expressad.out.TemplateBannerView r0 = r3.g
            if (r0 == 0) goto L69
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r1 = r3.r
            com.tkay.expressad.widget.FeedBackButton r0 = r0.b(r1)
            com.tkay.expressad.foundation.f.b r1 = com.tkay.expressad.foundation.f.b.a()
            boolean r1 = r1.b()
            if (r1 == 0) goto L49
            if (r4 == 0) goto L49
            if (r0 == 0) goto L49
            android.view.ViewParent r4 = r0.getParent()
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4
            if (r4 == 0) goto L27
            r4.removeView(r0)
        L27:
            r4 = 0
            r0.setVisibility(r4)
            android.view.ViewGroup$LayoutParams r4 = r0.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r4 = (android.widget.RelativeLayout.LayoutParams) r4
            if (r4 != 0) goto L3c
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams
            int r1 = com.tkay.expressad.foundation.f.b.a
            int r2 = com.tkay.expressad.foundation.f.b.b
            r4.<init>(r1, r2)
        L3c:
            r1 = 12
            r4.addRule(r1)
            r0.setLayoutParams(r4)
            com.tkay.expressad.out.TemplateBannerView r4 = r3.g
            r4.addView(r0)
        L49:
            com.tkay.expressad.foundation.f.b r4 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r0 = r3.r
            com.tkay.expressad.mbbanner.a.d.c$3 r1 = new com.tkay.expressad.mbbanner.a.d.c$3
            r1.<init>(r3)
            r4.a(r0, r1)
            com.tkay.expressad.foundation.d.c r4 = r3.f
            java.lang.String r0 = r3.r
            r4.l(r0)
            com.tkay.expressad.foundation.f.b r4 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r0 = r3.r
            com.tkay.expressad.foundation.d.c r1 = r3.f
            r4.a(r0, r1)
        L69:
            return
    }

    private boolean d() {
            r7 = this;
            com.tkay.expressad.foundation.d.c r0 = r7.f
            java.lang.String r3 = a(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 != 0) goto Lc6
            com.tkay.expressad.out.TemplateBannerView r0 = r7.g
            if (r0 == 0) goto Lbf
            com.tkay.expressad.mbbanner.view.TYBannerWebView r0 = r7.i
            if (r0 != 0) goto L3d
            com.tkay.expressad.mbbanner.view.TYBannerWebView r0 = new com.tkay.expressad.mbbanner.view.TYBannerWebView
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            r0.<init>(r2)
            r7.i = r0
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams
            r4 = -1
            r2.<init>(r4, r4)
            r0.setLayoutParams(r2)
            com.tkay.expressad.mbbanner.view.TYBannerWebView r0 = r7.i
            com.tkay.expressad.mbbanner.view.a r2 = new com.tkay.expressad.mbbanner.view.a
            java.lang.String r4 = r7.r
            java.util.List<com.tkay.expressad.foundation.d.c> r5 = r7.t
            com.tkay.expressad.mbbanner.a.c.a r6 = r7.C
            r2.<init>(r4, r5, r6)
            r0.setWebViewClient(r2)
        L3d:
            android.widget.ImageView r0 = r7.h
            if (r0 == 0) goto L46
            r2 = 8
            r0.setVisibility(r2)
        L46:
            com.tkay.expressad.mbbanner.view.TYBannerWebView r0 = r7.i
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L53
            com.tkay.expressad.mbbanner.view.TYBannerWebView r0 = r7.i
            r0.setVisibility(r1)
        L53:
            com.tkay.expressad.mbbanner.view.TYBannerWebView r0 = r7.i
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L6b
            com.tkay.expressad.out.TemplateBannerView r0 = r7.g
            com.tkay.expressad.mbbanner.view.TYBannerWebView r1 = r7.i
            r0.addView(r1)
            com.tkay.expressad.foundation.d.c r0 = r7.f
            boolean r0 = r0.H()
            r7.d(r0)
        L6b:
            r7.l()
            com.tkay.expressad.mbbanner.a.a.c r0 = new com.tkay.expressad.mbbanner.a.a.c
            com.tkay.expressad.out.TemplateBannerView r1 = r7.g
            android.content.Context r1 = r1.getContext()
            java.lang.String r2 = r7.s
            java.lang.String r4 = r7.r
            r0.<init>(r1, r2, r4)
            r7.w = r0
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r7.t
            r0.a(r1)
            com.tkay.expressad.mbbanner.a.a.c r0 = r7.w
            com.tkay.expressad.mbbanner.a.c.a r1 = r7.C
            r0.a(r1)
            com.tkay.expressad.mbbanner.a.a.c r0 = r7.w
            int r1 = r7.u
            r0.a(r1)
            com.tkay.expressad.mbbanner.view.TYBannerWebView r0 = r7.i
            com.tkay.expressad.atsignalcommon.a.b r1 = r7.D
            r0.setWebViewListener(r1)
            com.tkay.expressad.mbbanner.view.TYBannerWebView r0 = r7.i
            com.tkay.expressad.mbbanner.a.a.c r1 = r7.w
            r0.setObject(r1)
            java.lang.String r0 = "file"
            boolean r0 = r3.startsWith(r0)
            if (r0 != 0) goto Lb9
            com.tkay.expressad.mbbanner.view.TYBannerWebView r1 = r7.i
            com.tkay.expressad.foundation.d.c r0 = r7.f
            java.lang.String r2 = r0.p()
            r6 = 0
            java.lang.String r4 = "text/html"
            java.lang.String r5 = "utf-8"
            r1.loadDataWithBaseURL(r2, r3, r4, r5, r6)
            goto Lc4
        Lb9:
            com.tkay.expressad.mbbanner.view.TYBannerWebView r0 = r7.i
            r0.loadUrl(r3)
            goto Lc4
        Lbf:
            java.lang.String r0 = "banner show failed because banner view is exception"
            r7.a(r0)
        Lc4:
            r0 = 1
            return r0
        Lc6:
            return r1
    }

    private void e() {
            r3 = this;
            com.tkay.expressad.out.TemplateBannerView r0 = r3.g
            if (r0 == 0) goto L61
            com.tkay.expressad.mbbanner.view.TYBannerWebView r0 = r3.i
            if (r0 == 0) goto L15
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L15
            com.tkay.expressad.out.TemplateBannerView r0 = r3.g
            com.tkay.expressad.mbbanner.view.TYBannerWebView r1 = r3.i
            r0.removeView(r1)
        L15:
            android.widget.ImageView r0 = r3.h
            if (r0 != 0) goto L3a
            android.widget.ImageView r0 = new android.widget.ImageView
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            r0.<init>(r1)
            r3.h = r0
            com.tkay.expressad.mbbanner.a.d.c$7 r1 = new com.tkay.expressad.mbbanner.a.d.c$7
            r1.<init>(r3)
            r0.setOnTouchListener(r1)
            android.widget.ImageView r0 = r3.h
            com.tkay.expressad.mbbanner.a.d.c$8 r1 = new com.tkay.expressad.mbbanner.a.d.c$8
            r1.<init>(r3)
            r0.setOnClickListener(r1)
        L3a:
            com.tkay.expressad.foundation.d.c r0 = r3.f
            java.lang.String r0 = r0.be()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L5b
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            com.tkay.expressad.foundation.g.d.b r1 = com.tkay.expressad.foundation.g.d.b.a(r1)
            com.tkay.expressad.mbbanner.a.d.c$9 r2 = new com.tkay.expressad.mbbanner.a.d.c$9
            r2.<init>(r3)
            r1.a(r0, r2)
            return
        L5b:
            java.lang.String r0 = "banner show failed because campain is exception"
            r3.a(r0)
            return
        L61:
            java.lang.String r0 = "banner show failed because banner view is exception"
            r3.a(r0)
            return
    }

    static void e(com.tkay.expressad.mbbanner.a.d.c r0) {
            r0.h()
            return
    }

    private void f() {
            r4 = this;
            boolean r0 = r4.e
            if (r0 == 0) goto L38
            android.widget.ImageView r0 = r4.j
            if (r0 != 0) goto L38
            android.widget.ImageView r0 = new android.widget.ImageView
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            r0.<init>(r1)
            r4.j = r0
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            java.lang.String r2 = "tkay_banner_close"
            java.lang.String r3 = "drawable"
            int r1 = com.tkay.expressad.foundation.h.i.a(r1, r2, r3)
            r0.setBackgroundResource(r1)
            android.widget.ImageView r0 = r4.j
            r1 = 8
            r0.setVisibility(r1)
            android.widget.ImageView r0 = r4.j
            java.lang.String r1 = "closeButton"
            r0.setContentDescription(r1)
        L38:
            return
    }

    static void f(com.tkay.expressad.mbbanner.a.d.c r0) {
            r0.e()
            return
    }

    static com.tkay.expressad.mbbanner.a.c.c g(com.tkay.expressad.mbbanner.a.d.c r0) {
            com.tkay.expressad.mbbanner.a.c.c r0 = r0.d
            return r0
    }

    private boolean g() {
            r2 = this;
            com.tkay.expressad.out.TemplateBannerView r0 = r2.g
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            boolean r0 = com.tkay.expressad.foundation.h.y.a(r0)
            if (r0 != 0) goto L12
            boolean r0 = r2.p
            if (r0 != 0) goto L12
            r0 = 1
            return r0
        L12:
            return r1
    }

    static com.tkay.expressad.foundation.d.c h(com.tkay.expressad.mbbanner.a.d.c r0) {
            com.tkay.expressad.foundation.d.c r0 = r0.f
            return r0
    }

    private void h() {
            r10 = this;
            boolean r0 = r10.m
            r1 = 1
            if (r0 == 0) goto L2c
            boolean r0 = r10.n
            if (r0 != 0) goto L2c
            com.tkay.expressad.mbbanner.a.c.c r0 = r10.d
            if (r0 == 0) goto L2c
            r10.n = r1
            android.os.Handler r0 = r10.x
            com.tkay.expressad.foundation.g.g.a r2 = r10.y
            r0.removeCallbacks(r2)
            com.tkay.expressad.foundation.d.c r0 = r10.f
            if (r0 == 0) goto L2c
            boolean r0 = r0.am()
            if (r0 != 0) goto L2c
            com.tkay.expressad.foundation.d.c r0 = r10.f
            r0.an()
            com.tkay.expressad.mbbanner.a.c.c r0 = r10.d
            java.util.List<com.tkay.expressad.foundation.d.c> r2 = r10.t
            r0.a(r2)
        L2c:
            boolean r0 = r10.m
            if (r0 == 0) goto L1b9
            boolean r0 = r10.k
            if (r0 == 0) goto L1b9
            boolean r0 = r10.l
            if (r0 == 0) goto L1b9
            boolean r0 = r10.n
            if (r0 == 0) goto L1b9
            com.tkay.expressad.foundation.d.c r0 = r10.f
            if (r0 == 0) goto L1b9
            boolean r0 = r10.i()
            if (r0 != 0) goto L1b9
            com.tkay.expressad.out.TemplateBannerView r0 = r10.g
            r2 = 0
            if (r0 == 0) goto L57
            boolean r0 = com.tkay.expressad.foundation.h.y.a(r0)
            if (r0 != 0) goto L57
            boolean r0 = r10.p
            if (r0 != 0) goto L57
            r0 = r1
            goto L58
        L57:
            r0 = r2
        L58:
            r3 = 1000(0x3e8, double:4.94E-321)
            if (r0 != 0) goto L68
            com.tkay.expressad.out.TemplateBannerView r5 = r10.g
            if (r5 == 0) goto L68
            com.tkay.expressad.mbbanner.a.d.c$10 r6 = new com.tkay.expressad.mbbanner.a.d.c$10
            r6.<init>(r10)
            r5.postDelayed(r6, r3)
        L68:
            boolean r5 = r10.o
            if (r5 == 0) goto Lb9
            if (r0 == 0) goto Lb9
            r5 = 2
            int[] r5 = new int[r5]
            com.tkay.expressad.out.TemplateBannerView r6 = r10.g
            r6.getLocationInWindow(r5)
            com.tkay.expressad.mbbanner.view.TYBannerWebView r6 = r10.i
            r7 = r5[r2]
            float r7 = (float) r7
            r8 = r5[r1]
            float r8 = (float) r8
            com.tkay.expressad.mbbanner.a.a.a.a(r6, r7, r8)
            com.tkay.expressad.mbbanner.view.TYBannerWebView r6 = r10.i
            r7 = r5[r2]
            r5 = r5[r1]
            com.tkay.expressad.out.TemplateBannerView r8 = r10.g
            int r8 = r8.getWidth()
            com.tkay.expressad.out.TemplateBannerView r9 = r10.g
            int r9 = r9.getHeight()
            com.tkay.expressad.mbbanner.a.a.a.a(r6, r7, r5, r8, r9)
            r10.o = r2
            com.tkay.expressad.foundation.d.c r5 = r10.f
            java.lang.String r5 = r5.be()
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto Lb9
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()
            android.content.Context r5 = r5.f()
            com.tkay.expressad.foundation.g.d.b r5 = com.tkay.expressad.foundation.g.d.b.a(r5)
            com.tkay.expressad.foundation.d.c r6 = r10.f
            java.lang.String r6 = r6.be()
            r5.c(r6)
        Lb9:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = "showSuccessed:"
            r5.<init>(r6)
            com.tkay.expressad.foundation.d.c r6 = r10.f
            java.lang.String r6 = r6.aZ()
            r5.append(r6)
            if (r0 == 0) goto L1b4
            android.widget.ImageView r0 = r10.h
            java.lang.String r5 = "banner"
            if (r0 == 0) goto L112
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L112
            com.tkay.expressad.foundation.d.c r0 = r10.f
            if (r0 == 0) goto L1a3
            if (r0 == 0) goto L104
            com.tkay.core.common.b.m r6 = com.tkay.core.common.b.m.a()
            android.content.Context r6 = r6.f()
            java.lang.String r7 = r10.r
            c(r0, r6, r7)
            com.tkay.core.common.b.m r6 = com.tkay.core.common.b.m.a()
            android.content.Context r6 = r6.f()
            java.lang.String r7 = r10.r
            b(r0, r6, r7)
            com.tkay.core.common.b.m r6 = com.tkay.core.common.b.m.a()
            android.content.Context r6 = r6.f()
            java.lang.String r7 = r10.r
            a(r0, r6, r7)
        L104:
            com.tkay.expressad.foundation.d.c r0 = r10.f
            r0.c(r1)
            java.lang.String r0 = r10.r
            com.tkay.expressad.foundation.d.c r6 = r10.f
            com.tkay.expressad.foundation.g.a.f.a(r0, r6, r5)
            goto L1a3
        L112:
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r10.t
            if (r0 == 0) goto L1a3
            int r0 = r0.size()
            if (r0 <= 0) goto L1a3
            r0 = r2
            r6 = r0
            r7 = r6
        L11f:
            java.util.List<com.tkay.expressad.foundation.d.c> r8 = r10.t
            int r8 = r8.size()
            if (r0 >= r8) goto L177
            java.util.List<com.tkay.expressad.foundation.d.c> r8 = r10.t
            java.lang.Object r8 = r8.get(r0)
            com.tkay.expressad.foundation.d.c r8 = (com.tkay.expressad.foundation.d.c) r8
            boolean r8 = r8.s()
            if (r8 != 0) goto L174
            if (r0 == 0) goto L145
            java.util.List<com.tkay.expressad.foundation.d.c> r8 = r10.t
            java.lang.Object r8 = r8.get(r0)
            com.tkay.expressad.foundation.d.c r8 = (com.tkay.expressad.foundation.d.c) r8
            boolean r8 = r8.V()
            if (r8 != 0) goto L174
        L145:
            java.util.List<com.tkay.expressad.foundation.d.c> r6 = r10.t
            java.lang.Object r6 = r6.get(r0)
            com.tkay.expressad.foundation.d.c r6 = (com.tkay.expressad.foundation.d.c) r6
            com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()
            android.content.Context r7 = r7.f()
            java.lang.String r8 = r10.r
            c(r6, r7, r8)
            java.util.List<com.tkay.expressad.foundation.d.c> r6 = r10.t
            java.lang.Object r6 = r6.get(r0)
            com.tkay.expressad.foundation.d.c r6 = (com.tkay.expressad.foundation.d.c) r6
            r6.c(r1)
            java.lang.String r6 = r10.r
            java.util.List<com.tkay.expressad.foundation.d.c> r7 = r10.t
            java.lang.Object r7 = r7.get(r0)
            com.tkay.expressad.foundation.d.c r7 = (com.tkay.expressad.foundation.d.c) r7
            com.tkay.expressad.foundation.g.a.f.a(r6, r7, r5)
            r7 = r0
            r6 = r1
        L174:
            int r0 = r0 + 1
            goto L11f
        L177:
            if (r6 == 0) goto L1a3
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r10.t
            java.lang.Object r0 = r0.get(r7)
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()
            android.content.Context r5 = r5.f()
            java.lang.String r6 = r10.r
            b(r0, r5, r6)
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r10.t
            java.lang.Object r0 = r0.get(r7)
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()
            android.content.Context r5 = r5.f()
            java.lang.String r6 = r10.r
            a(r0, r5, r6)
        L1a3:
            r10.q = r1
            com.tkay.expressad.mbbanner.a.c.c r0 = r10.d
            if (r0 == 0) goto L1ae
            com.tkay.expressad.foundation.d.c r5 = r10.f
            r0.a(r5, r2)
        L1ae:
            android.os.Handler r0 = r10.x
            r0.sendEmptyMessageDelayed(r1, r3)
            return
        L1b4:
            com.tkay.expressad.foundation.d.c r0 = r10.f
            r0.c(r2)
        L1b9:
            return
    }

    static float i(com.tkay.expressad.mbbanner.a.d.c r0) {
            float r0 = r0.z
            return r0
    }

    private synchronized boolean i() {
            r3 = this;
            monitor-enter(r3)
            com.tkay.expressad.foundation.d.c r0 = r3.f     // Catch: java.lang.Throwable -> L11
            boolean r0 = r0.V()     // Catch: java.lang.Throwable -> L11
            if (r0 != 0) goto Lf
            com.tkay.expressad.foundation.d.c r1 = r3.f     // Catch: java.lang.Throwable -> L11
            r2 = 1
            r1.c(r2)     // Catch: java.lang.Throwable -> L11
        Lf:
            monitor-exit(r3)
            return r0
        L11:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    static float j(com.tkay.expressad.mbbanner.a.d.c r0) {
            float r0 = r0.A
            return r0
    }

    private void j() {
            r1 = this;
            com.tkay.expressad.mbbanner.a.c.c r0 = r1.d
            if (r0 == 0) goto L7
            r0.d()
        L7:
            return
    }

    static android.widget.ImageView k(com.tkay.expressad.mbbanner.a.d.c r0) {
            android.widget.ImageView r0 = r0.h
            return r0
    }

    private void k() {
            r3 = this;
            android.widget.ImageView r0 = r3.h
            if (r0 == 0) goto L44
            com.tkay.expressad.mbbanner.view.TYBannerWebView r0 = r3.i
            if (r0 == 0) goto Ld
            r1 = 8
            r0.setVisibility(r1)
        Ld:
            android.widget.ImageView r0 = r3.h
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L1b
            android.widget.ImageView r0 = r3.h
            r1 = 0
            r0.setVisibility(r1)
        L1b:
            com.tkay.expressad.out.TemplateBannerView r0 = r3.g
            if (r0 == 0) goto L44
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            r1 = 10
            r0.addRule(r1)
            android.widget.ImageView r1 = r3.h
            android.widget.ImageView$ScaleType r2 = android.widget.ImageView.ScaleType.FIT_XY
            r1.setScaleType(r2)
            android.widget.ImageView r1 = r3.h
            android.view.ViewParent r1 = r1.getParent()
            if (r1 != 0) goto L40
            com.tkay.expressad.out.TemplateBannerView r1 = r3.g
            android.widget.ImageView r2 = r3.h
            r1.addView(r2, r0)
        L40:
            r0 = 1
            r3.d(r0)
        L44:
            return
    }

    private void l() {
            r4 = this;
            boolean r0 = r4.e
            if (r0 == 0) goto L57
            android.widget.ImageView r0 = r4.j
            if (r0 == 0) goto L57
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L1b
            android.widget.ImageView r0 = r4.j
            r1 = 0
            r0.setVisibility(r1)
            android.widget.ImageView r0 = r4.j
            android.view.View$OnClickListener r1 = r4.B
            r0.setOnClickListener(r1)
        L1b:
            android.widget.ImageView r0 = r4.j
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L57
            com.tkay.expressad.out.TemplateBannerView r0 = r4.g
            if (r0 == 0) goto L57
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            r2 = 1094713344(0x41400000, float:12.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            android.content.Context r3 = r3.f()
            int r2 = com.tkay.expressad.foundation.h.t.b(r3, r2)
            r0.<init>(r1, r2)
            r1 = 11
            r0.addRule(r1)
            r1 = 10
            r0.addRule(r1)
            com.tkay.expressad.out.TemplateBannerView r1 = r4.g
            android.widget.ImageView r2 = r4.j
            r1.addView(r2, r0)
        L57:
            return
    }

    static boolean l(com.tkay.expressad.mbbanner.a.d.c r1) {
            r0 = 1
            r1.m = r0
            return r0
    }

    private void m() {
            r2 = this;
            boolean r0 = r2.e
            if (r0 == 0) goto L2e
            android.widget.ImageView r0 = r2.j
            if (r0 == 0) goto L2e
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L2e
            android.widget.ImageView r0 = r2.j
            r1 = 8
            r0.setVisibility(r1)
            android.widget.ImageView r0 = r2.j
            r1 = 0
            r0.setOnClickListener(r1)
            com.tkay.expressad.out.TemplateBannerView r0 = r2.g
            if (r0 == 0) goto L2e
            android.widget.ImageView r0 = r2.j
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L2e
            com.tkay.expressad.out.TemplateBannerView r0 = r2.g
            android.widget.ImageView r1 = r2.j
            r0.removeView(r1)
        L2e:
            return
    }

    static void m(com.tkay.expressad.mbbanner.a.d.c r3) {
            android.widget.ImageView r0 = r3.h
            if (r0 == 0) goto L44
            com.tkay.expressad.mbbanner.view.TYBannerWebView r0 = r3.i
            if (r0 == 0) goto Ld
            r1 = 8
            r0.setVisibility(r1)
        Ld:
            android.widget.ImageView r0 = r3.h
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L1b
            android.widget.ImageView r0 = r3.h
            r1 = 0
            r0.setVisibility(r1)
        L1b:
            com.tkay.expressad.out.TemplateBannerView r0 = r3.g
            if (r0 == 0) goto L44
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            r1 = 10
            r0.addRule(r1)
            android.widget.ImageView r1 = r3.h
            android.widget.ImageView$ScaleType r2 = android.widget.ImageView.ScaleType.FIT_XY
            r1.setScaleType(r2)
            android.widget.ImageView r1 = r3.h
            android.view.ViewParent r1 = r1.getParent()
            if (r1 != 0) goto L40
            com.tkay.expressad.out.TemplateBannerView r1 = r3.g
            android.widget.ImageView r2 = r3.h
            r1.addView(r2, r0)
        L40:
            r0 = 1
            r3.d(r0)
        L44:
            return
    }

    private static void n() {
            return
    }

    static boolean n(com.tkay.expressad.mbbanner.a.d.c r1) {
            r0 = 1
            r1.o = r0
            return r0
    }

    static com.tkay.expressad.out.TemplateBannerView o(com.tkay.expressad.mbbanner.a.d.c r0) {
            com.tkay.expressad.out.TemplateBannerView r0 = r0.g
            return r0
    }

    static com.tkay.expressad.mbbanner.view.TYBannerWebView p(com.tkay.expressad.mbbanner.a.d.c r0) {
            com.tkay.expressad.mbbanner.view.TYBannerWebView r0 = r0.i
            return r0
    }

    public final void a() {
            r2 = this;
            com.tkay.expressad.mbbanner.a.c.c r0 = r2.d
            r1 = 0
            if (r0 == 0) goto L7
            r2.d = r1
        L7:
            com.tkay.expressad.mbbanner.view.TYBannerWebView r0 = r2.i
            if (r0 == 0) goto Le
            r0.setWebViewListener(r1)
        Le:
            com.tkay.expressad.atsignalcommon.a.b r0 = r2.D
            if (r0 == 0) goto L14
            r2.D = r1
        L14:
            android.widget.ImageView r0 = r2.j
            if (r0 == 0) goto L1b
            r0.setOnClickListener(r1)
        L1b:
            android.widget.ImageView r0 = r2.h
            if (r0 == 0) goto L22
            r0.setOnClickListener(r1)
        L22:
            com.tkay.expressad.out.TemplateBannerView r0 = r2.g
            if (r0 == 0) goto L29
            r0.removeAllViews()
        L29:
            com.tkay.expressad.mbbanner.view.TYBannerWebView r0 = r2.i
            if (r0 == 0) goto L30
            r0.release()
        L30:
            com.tkay.expressad.mbbanner.a.a.c r0 = r2.w
            if (r0 == 0) goto L37
            r0.a()
        L37:
            com.tkay.expressad.mbbanner.a.c.a r0 = r2.C
            if (r0 == 0) goto L3d
            r2.C = r1
        L3d:
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r1 = r2.r
            r0.c(r1)
            return
    }

    public final void a(int r1, int r2, int r3, int r4) {
            r0 = this;
            if (r1 != r3) goto L5
            if (r2 != r4) goto L5
            return
        L5:
            com.tkay.expressad.mbbanner.view.TYBannerWebView r3 = r0.i
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r4 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> L10
            float r1 = (float) r1     // Catch: java.lang.Throwable -> L10
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L10
            r4.fireSizeChangeEvent(r3, r1, r2)     // Catch: java.lang.Throwable -> L10
        L10:
            return
    }

    public final void a(com.tkay.expressad.foundation.d.c r4, boolean r5, java.lang.String r6) {
            r3 = this;
            boolean r0 = r3.q
            if (r0 != 0) goto L5
            return
        L5:
            com.tkay.expressad.a.a r0 = r3.a
            if (r0 != 0) goto L1a
            com.tkay.expressad.a.a r0 = new com.tkay.expressad.a.a
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            java.lang.String r2 = r3.r
            r0.<init>(r1, r2)
            r3.a = r0
        L1a:
            com.tkay.expressad.a.a r0 = r3.a
            com.tkay.expressad.mbbanner.a.d.c$11 r1 = new com.tkay.expressad.mbbanner.a.d.c$11
            r1.<init>(r3)
            r0.a(r1)
            java.lang.String r0 = r3.r
            r4.l(r0)
            com.tkay.expressad.foundation.d.c r0 = r3.f
            boolean r0 = r0.W()
            if (r0 != 0) goto L36
            com.tkay.expressad.foundation.d.c r0 = r3.f
            r0.X()
        L36:
            com.tkay.expressad.mbbanner.a.c.c r0 = r3.d
            if (r0 == 0) goto L3d
            r0.a(r4)
        L3d:
            if (r5 == 0) goto L42
            android.text.TextUtils.isEmpty(r6)
        L42:
            return
    }

    public final void a(com.tkay.expressad.foundation.d.d r9) {
            r8 = this;
            r0 = 0
            if (r9 == 0) goto L18
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r9 = r9.J
            r8.t = r9
            if (r9 == 0) goto L18
            int r9 = r9.size()
            if (r9 <= 0) goto L18
            java.util.List<com.tkay.expressad.foundation.d.c> r9 = r8.t
            java.lang.Object r9 = r9.get(r0)
            com.tkay.expressad.foundation.d.c r9 = (com.tkay.expressad.foundation.d.c) r9
            goto L19
        L18:
            r9 = 0
        L19:
            r8.f = r9
            if (r9 != 0) goto L23
            java.lang.String r9 = "banner show failed because campain is exception"
            r8.a(r9)
            return
        L23:
            android.os.Handler r9 = r8.x
            com.tkay.expressad.foundation.g.g.a r1 = r8.y
            r9.removeCallbacks(r1)
            boolean r9 = r8.e
            r1 = 8
            if (r9 == 0) goto L62
            android.widget.ImageView r9 = r8.j
            if (r9 != 0) goto L62
            android.widget.ImageView r9 = new android.widget.ImageView
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            r9.<init>(r2)
            r8.j = r9
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            java.lang.String r3 = "tkay_banner_close"
            java.lang.String r4 = "drawable"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r4)
            r9.setBackgroundResource(r2)
            android.widget.ImageView r9 = r8.j
            r9.setVisibility(r1)
            android.widget.ImageView r9 = r8.j
            java.lang.String r2 = "closeButton"
            r9.setContentDescription(r2)
        L62:
            r8.m = r0
            r8.n = r0
            r8.q = r0
            com.tkay.expressad.foundation.d.c r9 = r8.f
            java.lang.String r9 = r9.q()
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 == 0) goto L7d
            com.tkay.expressad.foundation.d.c r9 = r8.f
            java.lang.String r9 = r9.p()
            android.text.TextUtils.isEmpty(r9)
        L7d:
            android.os.Handler r9 = r8.x
            com.tkay.expressad.foundation.g.g.a r2 = r8.y
            long r3 = r8.v
            r9.postDelayed(r2, r3)
            com.tkay.expressad.foundation.d.c r9 = r8.f
            java.lang.String r4 = a(r9)
            boolean r9 = android.text.TextUtils.isEmpty(r4)
            if (r9 != 0) goto L148
            com.tkay.expressad.out.TemplateBannerView r9 = r8.g
            if (r9 == 0) goto L142
            com.tkay.expressad.mbbanner.view.TYBannerWebView r9 = r8.i
            if (r9 != 0) goto Lc2
            com.tkay.expressad.mbbanner.view.TYBannerWebView r9 = new com.tkay.expressad.mbbanner.view.TYBannerWebView
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            r9.<init>(r2)
            r8.i = r9
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams
            r3 = -1
            r2.<init>(r3, r3)
            r9.setLayoutParams(r2)
            com.tkay.expressad.mbbanner.view.TYBannerWebView r9 = r8.i
            com.tkay.expressad.mbbanner.view.a r2 = new com.tkay.expressad.mbbanner.view.a
            java.lang.String r3 = r8.r
            java.util.List<com.tkay.expressad.foundation.d.c> r5 = r8.t
            com.tkay.expressad.mbbanner.a.c.a r6 = r8.C
            r2.<init>(r3, r5, r6)
            r9.setWebViewClient(r2)
        Lc2:
            android.widget.ImageView r9 = r8.h
            if (r9 == 0) goto Lc9
            r9.setVisibility(r1)
        Lc9:
            com.tkay.expressad.mbbanner.view.TYBannerWebView r9 = r8.i
            int r9 = r9.getVisibility()
            if (r9 == 0) goto Ld6
            com.tkay.expressad.mbbanner.view.TYBannerWebView r9 = r8.i
            r9.setVisibility(r0)
        Ld6:
            com.tkay.expressad.mbbanner.view.TYBannerWebView r9 = r8.i
            android.view.ViewParent r9 = r9.getParent()
            if (r9 != 0) goto Lee
            com.tkay.expressad.out.TemplateBannerView r9 = r8.g
            com.tkay.expressad.mbbanner.view.TYBannerWebView r0 = r8.i
            r9.addView(r0)
            com.tkay.expressad.foundation.d.c r9 = r8.f
            boolean r9 = r9.H()
            r8.d(r9)
        Lee:
            r8.l()
            com.tkay.expressad.mbbanner.a.a.c r9 = new com.tkay.expressad.mbbanner.a.a.c
            com.tkay.expressad.out.TemplateBannerView r0 = r8.g
            android.content.Context r0 = r0.getContext()
            java.lang.String r1 = r8.s
            java.lang.String r2 = r8.r
            r9.<init>(r0, r1, r2)
            r8.w = r9
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r8.t
            r9.a(r0)
            com.tkay.expressad.mbbanner.a.a.c r9 = r8.w
            com.tkay.expressad.mbbanner.a.c.a r0 = r8.C
            r9.a(r0)
            com.tkay.expressad.mbbanner.a.a.c r9 = r8.w
            int r0 = r8.u
            r9.a(r0)
            com.tkay.expressad.mbbanner.view.TYBannerWebView r9 = r8.i
            com.tkay.expressad.atsignalcommon.a.b r0 = r8.D
            r9.setWebViewListener(r0)
            com.tkay.expressad.mbbanner.view.TYBannerWebView r9 = r8.i
            com.tkay.expressad.mbbanner.a.a.c r0 = r8.w
            r9.setObject(r0)
            java.lang.String r9 = "file"
            boolean r9 = r4.startsWith(r9)
            if (r9 != 0) goto L13c
            com.tkay.expressad.mbbanner.view.TYBannerWebView r2 = r8.i
            com.tkay.expressad.foundation.d.c r9 = r8.f
            java.lang.String r3 = r9.p()
            r7 = 0
            java.lang.String r5 = "text/html"
            java.lang.String r6 = "utf-8"
            r2.loadDataWithBaseURL(r3, r4, r5, r6, r7)
            goto L147
        L13c:
            com.tkay.expressad.mbbanner.view.TYBannerWebView r9 = r8.i
            r9.loadUrl(r4)
            goto L147
        L142:
            java.lang.String r9 = "banner show failed because banner view is exception"
            r8.a(r9)
        L147:
            r0 = 1
        L148:
            if (r0 != 0) goto L162
            com.tkay.expressad.foundation.d.c r9 = r8.f
            java.lang.String r9 = r9.q()
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 == 0) goto L15f
            com.tkay.expressad.foundation.d.c r9 = r8.f
            java.lang.String r9 = r9.p()
            android.text.TextUtils.isEmpty(r9)
        L15f:
            r8.e()
        L162:
            return
    }

    public final void a(com.tkay.expressad.out.c r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final void a(boolean r2, int r3) {
            r1 = this;
            r1.u = r3
            r0 = 1
            if (r3 == 0) goto L6
            goto L22
        L6:
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r2 = r2.e()
            java.lang.String r3 = r1.r
            com.tkay.expressad.d.c r2 = com.tkay.expressad.d.b.c(r2, r3)
            if (r2 == 0) goto L24
            int r2 = r2.d()
            if (r2 != r0) goto L21
            r2 = r0
            goto L22
        L21:
            r2 = 0
        L22:
            r1.e = r2
        L24:
            return
    }

    public final void b(boolean r1) {
            r0 = this;
            r0.k = r1
            r0.h()
            return
    }

    public final void c(boolean r1) {
            r0 = this;
            r0.l = r1
            r0.h()
            return
    }
}
