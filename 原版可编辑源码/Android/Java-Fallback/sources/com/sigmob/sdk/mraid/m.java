package com.sigmob.sdk.mraid;

public class m extends com.sigmob.sdk.videoAd.c implements com.sigmob.sdk.base.common.x {
    protected com.sigmob.sdk.base.common.r f;
    private int g;
    private com.sigmob.sdk.videoAd.a h;
    private int i;
    private boolean j;
    private com.sigmob.sdk.base.models.BaseAdUnit k;
    private com.sigmob.sdk.mraid.d l;
    private com.sigmob.sdk.mraid.q m;
    private com.sigmob.sdk.base.views.x n;
    private int o;
    private boolean p;
    private boolean q;
    private com.sigmob.sdk.base.views.q r;
    private boolean s;








    static class 8 {
        static final int[] a = null;

        static {
                com.sigmob.sdk.base.a[] r0 = com.sigmob.sdk.base.a.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.sigmob.sdk.mraid.m.8.a = r0
                com.sigmob.sdk.base.a r1 = com.sigmob.sdk.base.a.a     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.sigmob.sdk.mraid.m.8.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.sigmob.sdk.base.a r1 = com.sigmob.sdk.base.a.c     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                return
        }
    }

    public m(android.app.Activity r2, com.sigmob.sdk.base.models.BaseAdUnit r3, android.os.Bundle r4, android.os.Bundle r5, java.lang.String r6, com.sigmob.sdk.base.common.j r7) {
            r1 = this;
            r1.<init>(r2, r6, r7)
            r5 = 0
            r1.q = r5
            r1.s = r5
            r1.k = r3
            com.sigmob.sdk.base.common.h r3 = r3.getAdConfig()
            com.sigmob.sdk.videoAd.a r3 = (com.sigmob.sdk.videoAd.a) r3
            r1.h = r3
            android.app.Activity r6 = r1.k()
            com.sigmob.sdk.base.models.BaseAdUnit r7 = r1.k
            r0 = 0
            r3.a(r6, r7, r0)
            com.sigmob.sdk.videoAd.a r3 = r1.h
            r3.a(r1)
            com.czhj.sdk.common.ClientMetadata r3 = com.czhj.sdk.common.ClientMetadata.getInstance()
            int r3 = r3.getInsetBottom()
            r1.i = r3
            com.sigmob.sdk.base.models.BaseAdUnit r3 = r1.k
            com.sigmob.sdk.base.models.rtb.Ad r3 = r3.getAd()
            java.lang.Integer r3 = r3.display_orientation
            int r3 = r3.intValue()
            r6 = 1
            if (r3 == r6) goto L47
            r7 = 2
            if (r3 == r7) goto L45
            r3 = 3
            java.lang.String r7 = "REQUESTED_ORIENTATION"
            int r3 = r4.getInt(r7, r3)
            goto L48
        L45:
            r3 = 6
            goto L48
        L47:
            r3 = 7
        L48:
            r1.g = r3
            com.sigmob.sdk.base.common.j r3 = r1.h()
            int r7 = r1.g
            r3.a(r7)
            android.app.Activity r3 = r1.k()
            r3.requestWindowFeature(r6)
            android.app.Activity r3 = r1.k()
            android.view.Window r3 = r3.getWindow()
            r6 = 16778240(0x1000400, float:2.3512757E-38)
            r3.addFlags(r6)
            int r3 = r1.g
            r1.b(r2, r3, r4)
            android.view.ViewGroup r2 = r1.j()
            r2.setBackgroundColor(r5)
            return
    }

    static int a(com.sigmob.sdk.mraid.m r0, int r1) {
            r0.o = r1
            return r1
    }

    static com.sigmob.sdk.base.models.BaseAdUnit a(com.sigmob.sdk.mraid.m r0) {
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r0.k
            return r0
    }

    static com.sigmob.sdk.base.views.q a(com.sigmob.sdk.mraid.m r0, com.sigmob.sdk.base.views.q r1) {
            r0.r = r1
            return r1
    }

    private void a(int r4, android.widget.RelativeLayout.LayoutParams r5) {
            r3 = this;
            android.content.Context r0 = r3.b
            r1 = 1092616192(0x41200000, float:10.0)
            int r0 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r1, r0)
            r1 = 1
            r2 = 10
            if (r4 == r1) goto L1d
            r1 = 2
            if (r4 == r1) goto L1d
            r1 = 3
            if (r4 == r1) goto L17
            r1 = 4
            if (r4 == r1) goto L17
            goto L2a
        L17:
            r5.addRule(r2)
            r4 = 11
            goto L22
        L1d:
            r5.addRule(r2)
            r4 = 9
        L22:
            r5.addRule(r4)
            int r4 = r0 * 2
            r5.setMargins(r0, r4, r0, r0)
        L2a:
            return
    }

    private void a(android.content.Context r3, int r4) {
            r2 = this;
            com.sigmob.sdk.base.views.x r0 = r2.n
            if (r0 == 0) goto L5
            return
        L5:
            com.sigmob.sdk.base.views.x r0 = new com.sigmob.sdk.base.views.x
            com.sigmob.sdk.videoAd.a r1 = r2.h
            int r1 = r1.n()
            r0.<init>(r3, r1)
            r2.n = r0
            r0.setVisibility(r4)
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams
            r0 = 1106247680(0x41f00000, float:30.0)
            int r1 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r0, r3)
            int r3 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r0, r3)
            r4.<init>(r1, r3)
            com.sigmob.sdk.videoAd.a r3 = r2.h
            int r3 = r3.n()
            r2.a(r3, r4)
            android.view.ViewGroup r3 = r2.j()
            com.sigmob.sdk.base.views.x r0 = r2.n
            r3.addView(r0, r4)
            com.sigmob.sdk.mraid.m$7 r3 = new com.sigmob.sdk.mraid.m$7
            r3.<init>(r2)
            com.sigmob.sdk.base.views.x r4 = r2.n
            r4.setOnTouchListener(r3)
            com.sigmob.sdk.base.views.x r3 = r2.n
            com.sigmob.sdk.base.models.BaseAdUnit r4 = r2.k
            r3.a(r4)
            com.sigmob.sdk.videoAd.a r3 = r2.h
            java.lang.String r3 = r3.h()
            if (r3 == 0) goto L54
            com.sigmob.sdk.base.views.x r4 = r2.n
            r4.a(r3)
        L54:
            return
    }

    static void a(com.sigmob.sdk.mraid.m r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    static boolean a(com.sigmob.sdk.mraid.m r0, boolean r1) {
            r0.j = r1
            return r1
    }

    static com.sigmob.sdk.mraid.d b(com.sigmob.sdk.mraid.m r0) {
            com.sigmob.sdk.mraid.d r0 = r0.l
            return r0
    }

    static void b(com.sigmob.sdk.mraid.m r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    static boolean b(com.sigmob.sdk.mraid.m r0, boolean r1) {
            r0.p = r1
            return r1
    }

    static com.sigmob.sdk.videoAd.a c(com.sigmob.sdk.mraid.m r0) {
            com.sigmob.sdk.videoAd.a r0 = r0.h
            return r0
    }

    static void c(com.sigmob.sdk.mraid.m r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    static boolean c(com.sigmob.sdk.mraid.m r0, boolean r1) {
            r0.q = r1
            return r1
    }

    static void d(com.sigmob.sdk.mraid.m r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    static boolean d(com.sigmob.sdk.mraid.m r0) {
            boolean r0 = r0.j
            return r0
    }

    static boolean d(com.sigmob.sdk.mraid.m r0, boolean r1) {
            r0.s = r1
            return r1
    }

    static int e(com.sigmob.sdk.mraid.m r0) {
            int r0 = r0.o
            return r0
    }

    static void e(com.sigmob.sdk.mraid.m r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    static java.lang.String f(com.sigmob.sdk.mraid.m r0) {
            java.lang.String r0 = r0.a
            return r0
    }

    static void f(com.sigmob.sdk.mraid.m r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    static com.sigmob.sdk.base.common.j g(com.sigmob.sdk.mraid.m r0) {
            com.sigmob.sdk.base.common.j r0 = r0.d
            return r0
    }

    static void g(com.sigmob.sdk.mraid.m r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    static java.lang.String h(com.sigmob.sdk.mraid.m r0) {
            java.lang.String r0 = r0.a
            return r0
    }

    static void h(com.sigmob.sdk.mraid.m r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    static com.sigmob.sdk.base.common.j i(com.sigmob.sdk.mraid.m r0) {
            com.sigmob.sdk.base.common.j r0 = r0.d
            return r0
    }

    static void i(com.sigmob.sdk.mraid.m r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    static boolean j(com.sigmob.sdk.mraid.m r0) {
            boolean r0 = r0.p
            return r0
    }

    static com.sigmob.sdk.base.common.j k(com.sigmob.sdk.mraid.m r0) {
            com.sigmob.sdk.base.common.j r0 = r0.d
            return r0
    }

    static com.sigmob.sdk.base.views.q l(com.sigmob.sdk.mraid.m r0) {
            com.sigmob.sdk.base.views.q r0 = r0.r
            return r0
    }

    private void l() {
            r2 = this;
            com.sigmob.sdk.base.views.x r0 = r2.n
            if (r0 == 0) goto L8
            r1 = 4
            r0.setVisibility(r1)
        L8:
            return
    }

    static android.app.Activity m(com.sigmob.sdk.mraid.m r0) {
            android.app.Activity r0 = r0.k()
            return r0
    }

    private void m() {
            r2 = this;
            com.sigmob.sdk.base.views.x r0 = r2.n
            r1 = 0
            if (r0 != 0) goto La
            android.content.Context r0 = r2.b
            r2.a(r0, r1)
        La:
            com.sigmob.sdk.base.views.x r0 = r2.n
            r0.setVisibility(r1)
            return
    }

    static boolean n(com.sigmob.sdk.mraid.m r0) {
            boolean r0 = r0.s
            return r0
    }

    static void o(com.sigmob.sdk.mraid.m r0) {
            r0.l()
            return
    }

    static void p(com.sigmob.sdk.mraid.m r0) {
            r0.m()
            return
    }

    static android.content.Context q(com.sigmob.sdk.mraid.m r0) {
            android.content.Context r0 = r0.i()
            return r0
    }

    static com.sigmob.sdk.base.common.j r(com.sigmob.sdk.mraid.m r0) {
            com.sigmob.sdk.base.common.j r0 = r0.h()
            return r0
    }

    public android.view.View a() {
            r5 = this;
            java.lang.String r0 = r5.a
            if (r0 == 0) goto L9
            com.sigmob.sdk.mraid.s$a r0 = com.sigmob.sdk.mraid.s.a(r0)
            goto La
        L9:
            r0 = 0
        La:
            if (r0 == 0) goto L17
            com.sigmob.sdk.mraid.d r1 = r0.d()
            if (r1 == 0) goto L17
            com.sigmob.sdk.mraid.d r1 = r0.d()
            goto L22
        L17:
            com.sigmob.sdk.mraid.d r1 = new com.sigmob.sdk.mraid.d
            android.content.Context r2 = r5.b
            com.sigmob.sdk.base.models.BaseAdUnit r3 = r5.k
            com.sigmob.sdk.base.models.PlacementType r4 = com.sigmob.sdk.base.models.PlacementType.INTERSTITIAL
            r1.<init>(r2, r3, r4)
        L22:
            r5.l = r1
            com.sigmob.sdk.mraid.d r1 = r5.l
            com.sigmob.sdk.base.common.e r2 = r5.e
            r1.a(r2)
            com.sigmob.sdk.mraid.d r1 = r5.l
            com.sigmob.sdk.mraid.m$2 r2 = new com.sigmob.sdk.mraid.m$2
            r2.<init>(r5)
            r1.a(r2)
            com.sigmob.sdk.mraid.d r1 = r5.l
            com.sigmob.sdk.mraid.m$3 r2 = new com.sigmob.sdk.mraid.m$3
            r2.<init>(r5)
            r1.a(r2)
            com.sigmob.sdk.mraid.d r1 = r5.l
            com.sigmob.sdk.mraid.m$4 r2 = new com.sigmob.sdk.mraid.m$4
            r2.<init>(r5)
            r1.a(r2)
            if (r0 == 0) goto L52
            com.sigmob.sdk.base.common.r r0 = r0.c()
            r5.f = r0
            goto L8b
        L52:
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r5.k
            java.lang.String r0 = r0.getHtmlData()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L6f
            com.sigmob.sdk.mraid.d r0 = r5.l
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r5.k
            java.lang.String r1 = r1.getHtmlData()
            com.sigmob.sdk.mraid.m$5 r2 = new com.sigmob.sdk.mraid.m$5
            r2.<init>(r5)
            r0.a(r1, r2)
            goto L8b
        L6f:
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r5.k
            java.lang.String r0 = r0.getHtmlUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L8b
            com.sigmob.sdk.mraid.d r0 = r5.l
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r5.k
            java.lang.String r1 = r1.getHtmlUrl()
            com.sigmob.sdk.mraid.m$6 r2 = new com.sigmob.sdk.mraid.m$6
            r2.<init>(r5)
            r0.b(r1, r2)
        L8b:
            com.sigmob.sdk.mraid.d r0 = r5.l
            android.widget.FrameLayout r0 = r0.p()
            return r0
    }

    @Override
    public void a(android.content.res.Configuration r1) {
            r0 = this;
            return
    }

    @Override
    public void a(android.os.Bundle r1) {
            r0 = this;
            return
    }

    public void a(com.sigmob.sdk.base.common.a r4) {
            r3 = this;
            com.sigmob.sdk.mraid.d r0 = r3.l
            java.lang.Integer r0 = r0.e()
            com.sigmob.sdk.mraid.d r1 = r3.l
            com.sigmob.sdk.mraid.m$1 r2 = new com.sigmob.sdk.mraid.m$1
            r2.<init>(r3, r4, r0)
            r1.a(r2)
            return
    }

    public void a(com.sigmob.sdk.mraid.q r2) {
            r1 = this;
            r1.m = r2
            com.sigmob.sdk.mraid.d r0 = r1.l
            if (r0 == 0) goto L9
            r0.a(r2)
        L9:
            return
    }

    @Override
    public void a(boolean r9, com.sigmob.sdk.base.a r10) {
            r8 = this;
            java.lang.String r0 = "com.sigmob.action.interstitial.click"
            r8.a(r0)
            if (r9 == 0) goto L68
            int[] r9 = com.sigmob.sdk.mraid.m.8.a
            int r10 = r10.ordinal()
            r9 = r9[r10]
            r10 = 1
            if (r9 == r10) goto L4b
            r10 = 2
            if (r9 == r10) goto L30
            com.sigmob.sdk.base.models.BaseAdUnit r9 = r8.k
            com.sigmob.sdk.base.models.ClickCommon r9 = r9.getClickCommon()
            com.sigmob.sdk.base.a r0 = com.sigmob.sdk.base.a.b
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r8.k
            java.lang.String r3 = r9.isDeeplink
            java.lang.String r4 = r9.clickUrl
            java.lang.String r5 = r9.clickCoordinate
            int r9 = r8.o
            long r6 = (long) r9
            java.lang.String r1 = "click"
            com.sigmob.sdk.base.common.z.a(r0, r1, r2, r3, r4, r5, r6)
            com.sigmob.sdk.base.common.a r9 = com.sigmob.sdk.base.common.a.c
            goto L65
        L30:
            com.sigmob.sdk.base.models.BaseAdUnit r9 = r8.k
            com.sigmob.sdk.base.models.ClickCommon r9 = r9.getClickCommon()
            com.sigmob.sdk.base.a r0 = com.sigmob.sdk.base.a.c
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r8.k
            java.lang.String r3 = r9.isDeeplink
            java.lang.String r4 = r9.clickUrl
            java.lang.String r5 = r9.clickCoordinate
            int r9 = r8.o
            long r6 = (long) r9
            java.lang.String r1 = "click"
            com.sigmob.sdk.base.common.z.a(r0, r1, r2, r3, r4, r5, r6)
            com.sigmob.sdk.base.common.a r9 = com.sigmob.sdk.base.common.a.v
            goto L65
        L4b:
            com.sigmob.sdk.base.models.BaseAdUnit r9 = r8.k
            com.sigmob.sdk.base.models.ClickCommon r9 = r9.getClickCommon()
            com.sigmob.sdk.base.a r0 = com.sigmob.sdk.base.a.a
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r8.k
            java.lang.String r3 = r9.isDeeplink
            java.lang.String r4 = r9.clickUrl
            java.lang.String r5 = r9.clickCoordinate
            int r9 = r8.o
            long r6 = (long) r9
            java.lang.String r1 = "click"
            com.sigmob.sdk.base.common.z.a(r0, r1, r2, r3, r4, r5, r6)
            com.sigmob.sdk.base.common.a r9 = com.sigmob.sdk.base.common.a.u
        L65:
            r8.a(r9)
        L68:
            return
    }

    @Override
    public void b() {
            r4 = this;
            super.b()
            com.sigmob.sdk.base.common.r r0 = r4.f
            if (r0 == 0) goto Ld
            com.sigmob.sdk.base.common.a r1 = com.sigmob.sdk.base.common.a.h
            r2 = 0
            r0.a(r1, r2)
        Ld:
            android.view.View r0 = r4.a()
            android.view.ViewGroup r1 = r4.j()
            android.widget.FrameLayout$LayoutParams r2 = new android.widget.FrameLayout$LayoutParams
            r3 = -1
            r2.<init>(r3, r3)
            r1.addView(r0, r2)
            com.sigmob.sdk.mraid.d r0 = r4.l
            if (r0 == 0) goto L29
            android.app.Activity r1 = r4.k()
            r0.a(r1)
        L29:
            java.lang.String r0 = "com.sigmob.action.interstitial.vopen"
            r4.a(r0)
            return
    }

    @Override
    public void c() {
            r1 = this;
            boolean r0 = r1.q
            if (r0 == 0) goto La
            java.lang.String r0 = "com.sigmob.action.interstitial.dismiss"
            r1.a(r0)
            return
        La:
            com.sigmob.sdk.mraid.d r0 = r1.l
            r0.b()
            return
    }

    @Override
    public void d() {
            r1 = this;
            com.sigmob.sdk.mraid.d r0 = r1.l
            r0.c()
            return
    }

    @Override
    public void e() {
            r3 = this;
            com.sigmob.sdk.base.common.r r0 = r3.f
            if (r0 == 0) goto L12
            com.sigmob.sdk.base.common.a r1 = com.sigmob.sdk.base.common.a.x
            r2 = 0
            r0.a(r1, r2)
            com.sigmob.sdk.base.common.r r0 = r3.f
            r0.a()
            r0 = 0
            r3.f = r0
        L12:
            com.sigmob.sdk.mraid.d r0 = r3.l
            if (r0 == 0) goto L19
            r0.l()
        L19:
            com.sigmob.sdk.videoAd.a r0 = r3.h
            r0.k()
            boolean r0 = r3.q
            if (r0 != 0) goto L27
            java.lang.String r0 = "com.sigmob.action.interstitial.dismiss"
            r3.a(r0)
        L27:
            super.e()
            return
    }

    @Override
    public void f() {
            r0 = this;
            return
    }

    @Override
    public boolean g() {
            r1 = this;
            r0 = 0
            return r0
    }
}
