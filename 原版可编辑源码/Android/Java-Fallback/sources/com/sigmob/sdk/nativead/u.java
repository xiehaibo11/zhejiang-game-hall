package com.sigmob.sdk.nativead;

public class u extends com.sigmob.sdk.base.common.i {
    private static com.sigmob.sdk.nativead.n g;
    public final long f;
    private com.sigmob.sdk.nativead.z h;
    private com.sigmob.sdk.nativead.z i;
    private android.widget.RelativeLayout j;
    private android.widget.FrameLayout k;
    private com.sigmob.sdk.base.models.BaseAdUnit l;
    private com.sigmob.sdk.nativead.b m;
    private com.sigmob.sdk.mraid.d n;
    private android.view.View o;
    private com.sigmob.windad.natives.WindNativeAdData p;
    private com.sigmob.sdk.nativead.APKStatusBroadcastReceiver q;
    private android.widget.ImageView r;
    private com.sigmob.sdk.base.views.q s;
    private boolean t;
    private boolean u;









    public u(android.app.Activity r1, com.sigmob.sdk.base.models.BaseAdUnit r2, android.os.Bundle r3, android.os.Bundle r4, java.lang.String r5, com.sigmob.sdk.base.common.j r6) {
            r0 = this;
            r0.<init>(r1, r5, r6)
            r4 = 300(0x12c, double:1.48E-321)
            r0.f = r4
            r1 = 0
            r0.t = r1
            r0.l = r2
            com.sigmob.sdk.base.common.h r1 = r2.getAdConfig()
            com.sigmob.sdk.nativead.b r1 = (com.sigmob.sdk.nativead.b) r1
            r0.m = r1
            android.app.Activity r2 = r0.k()
            com.sigmob.sdk.base.models.BaseAdUnit r4 = r0.l
            r5 = 0
            r1.a(r2, r4, r5)
            java.lang.String r1 = "attr"
            android.os.Parcelable r1 = r3.getParcelable(r1)
            com.sigmob.sdk.nativead.z r1 = (com.sigmob.sdk.nativead.z) r1
            r0.h = r1
            com.sigmob.sdk.base.common.j r1 = r0.h()
            r2 = 1
            r1.a(r2)
            int r1 = com.sigmob.sdk.base.d.a()
            if (r1 == 0) goto L41
            android.app.Activity r3 = r0.k()
            android.content.res.Resources$Theme r3 = r3.getTheme()
            r3.applyStyle(r1, r2)
        L41:
            return
    }

    static com.sigmob.sdk.base.common.j a(com.sigmob.sdk.nativead.u r0) {
            com.sigmob.sdk.base.common.j r0 = r0.h()
            return r0
    }

    static com.sigmob.sdk.base.views.q a(com.sigmob.sdk.nativead.u r0, com.sigmob.sdk.base.views.q r1) {
            r0.s = r1
            return r1
    }

    static com.sigmob.sdk.nativead.z a(com.sigmob.sdk.nativead.u r0, com.sigmob.sdk.nativead.z r1) {
            r0.i = r1
            return r1
    }

    private void a(android.content.Context r3) {
            r2 = this;
            android.widget.ImageView r0 = r2.r
            if (r0 == 0) goto L5
            return
        L5:
            android.widget.ImageView r0 = new android.widget.ImageView
            r0.<init>(r3)
            r2.r = r0
            com.sigmob.sdk.base.views.o r3 = com.sigmob.sdk.base.views.o.e
            android.graphics.Bitmap r3 = r3.a()
            r0.setImageBitmap(r3)
            android.widget.ImageView r3 = r2.r
            android.widget.ImageView$ScaleType r0 = android.widget.ImageView.ScaleType.CENTER_CROP
            r3.setScaleType(r0)
            android.widget.ImageView r3 = r2.r
            r0 = 127(0x7f, float:1.78E-43)
            r3.setImageAlpha(r0)
            android.widget.ImageView r3 = r2.r
            r0 = 1
            r3.setClickable(r0)
            android.widget.ImageView r3 = r2.r
            com.sigmob.sdk.nativead.u$3 r0 = new com.sigmob.sdk.nativead.u$3
            r0.<init>(r2)
            r3.setOnClickListener(r0)
            r3 = 1101004800(0x41a00000, float:20.0)
            android.content.Context r0 = r2.b
            int r3 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r3, r0)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r0.<init>(r3, r3)
            r1 = 10
            r0.addRule(r1)
            r1 = 9
            r0.addRule(r1)
            int r3 = r3 / 2
            r1 = 0
            r0.setMargins(r3, r3, r1, r1)
            android.widget.RelativeLayout r3 = r2.j
            if (r3 == 0) goto L59
            android.widget.ImageView r1 = r2.r
            r3.addView(r1, r0)
        L59:
            return
    }

    public static void a(com.sigmob.sdk.nativead.i r1) {
            boolean r0 = r1 instanceof com.sigmob.sdk.nativead.n
            if (r0 == 0) goto L8
            com.sigmob.sdk.nativead.n r1 = (com.sigmob.sdk.nativead.n) r1
            com.sigmob.sdk.nativead.u.g = r1
        L8:
            return
    }

    static void a(com.sigmob.sdk.nativead.u r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    static boolean a(com.sigmob.sdk.nativead.u r0, boolean r1) {
            r0.t = r1
            return r1
    }

    static android.widget.FrameLayout b(com.sigmob.sdk.nativead.u r0) {
            android.widget.FrameLayout r0 = r0.k
            return r0
    }

    static void b(com.sigmob.sdk.nativead.u r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    static com.sigmob.sdk.nativead.z c(com.sigmob.sdk.nativead.u r0) {
            com.sigmob.sdk.nativead.z r0 = r0.i
            return r0
    }

    static void c(com.sigmob.sdk.nativead.u r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    static com.sigmob.sdk.nativead.z d(com.sigmob.sdk.nativead.u r0) {
            com.sigmob.sdk.nativead.z r0 = r0.h
            return r0
    }

    static android.widget.RelativeLayout e(com.sigmob.sdk.nativead.u r0) {
            android.widget.RelativeLayout r0 = r0.j
            return r0
    }

    static com.sigmob.sdk.base.common.j f(com.sigmob.sdk.nativead.u r0) {
            com.sigmob.sdk.base.common.j r0 = r0.h()
            return r0
    }

    static com.sigmob.sdk.base.views.q g(com.sigmob.sdk.nativead.u r0) {
            com.sigmob.sdk.base.views.q r0 = r0.s
            return r0
    }

    static android.app.Activity h(com.sigmob.sdk.nativead.u r0) {
            android.app.Activity r0 = r0.k()
            return r0
    }

    static com.sigmob.sdk.base.models.BaseAdUnit i(com.sigmob.sdk.nativead.u r0) {
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r0.l
            return r0
    }

    static com.sigmob.sdk.nativead.b j(com.sigmob.sdk.nativead.u r0) {
            com.sigmob.sdk.nativead.b r0 = r0.m
            return r0
    }

    static boolean k(com.sigmob.sdk.nativead.u r0) {
            boolean r0 = r0.t
            return r0
    }

    static com.sigmob.sdk.base.common.j l(com.sigmob.sdk.nativead.u r0) {
            com.sigmob.sdk.base.common.j r0 = r0.h()
            return r0
    }

    static com.sigmob.sdk.mraid.d m(com.sigmob.sdk.nativead.u r0) {
            com.sigmob.sdk.mraid.d r0 = r0.n
            return r0
    }

    static com.sigmob.sdk.nativead.n m() {
            com.sigmob.sdk.nativead.n r0 = com.sigmob.sdk.nativead.u.g
            return r0
    }

    private int n() {
            r6 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r1 = r0.heightPixels
            int r2 = r0.widthPixels
            int r1 = java.lang.Math.max(r1, r2)
            int r1 = r1 / 2
            int r2 = r0.widthPixels
            int r0 = r0.heightPixels
            int r0 = java.lang.Math.min(r2, r0)
            double r2 = (double) r0
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r6.l
            double r4 = r0.getAdPercent()
            double r2 = r2 / r4
            int r0 = (int) r2
            int r0 = java.lang.Math.min(r0, r1)
            return r0
    }

    static void n(com.sigmob.sdk.nativead.u r0) {
            r0.o()
            return
    }

    private void o() {
            r2 = this;
            android.widget.ImageView r0 = r2.r
            if (r0 == 0) goto L8
            r1 = 4
            r0.setVisibility(r1)
        L8:
            return
    }

    static void o(com.sigmob.sdk.nativead.u r0) {
            r0.p()
            return
    }

    static com.sigmob.sdk.base.common.j p(com.sigmob.sdk.nativead.u r0) {
            com.sigmob.sdk.base.common.j r0 = r0.h()
            return r0
    }

    private void p() {
            r2 = this;
            android.widget.ImageView r0 = r2.r
            if (r0 != 0) goto Lb
            android.app.Activity r0 = r2.k()
            r2.a(r0)
        Lb:
            android.widget.ImageView r0 = r2.r
            r1 = 0
            r0.setVisibility(r1)
            return
    }

    private void q() {
            r7 = this;
            r0 = 1
            r7.u = r0
            com.sigmob.sdk.nativead.n r0 = com.sigmob.sdk.nativead.u.g
            if (r0 == 0) goto L2c
            com.sigmob.sdk.nativead.aa r0 = new com.sigmob.sdk.nativead.aa
            android.widget.FrameLayout r2 = r7.k
            com.sigmob.sdk.nativead.z r3 = r7.i
            com.sigmob.sdk.nativead.z r4 = r7.h
            r5 = 300(0x12c, double:1.48E-321)
            r1 = r0
            r1.<init>(r2, r3, r4, r5)
            r0.a()
            android.widget.RelativeLayout r0 = r7.j
            r1 = 8
            r0.setVisibility(r1)
            android.widget.FrameLayout r0 = r7.k
            com.sigmob.sdk.nativead.u$8 r1 = new com.sigmob.sdk.nativead.u$8
            r1.<init>(r7)
            r2 = 300(0x12c, double:1.48E-321)
            r0.postDelayed(r1, r2)
            goto L33
        L2c:
            com.sigmob.sdk.base.common.j r0 = r7.h()
            r0.a()
        L33:
            return
    }

    public com.sigmob.sdk.base.common.ab a() {
            r2 = this;
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r2.l
            com.sigmob.sdk.base.common.ab r0 = r0.getSessionManager()
            if (r0 != 0) goto L12
            com.sigmob.sdk.nativead.e r0 = new com.sigmob.sdk.nativead.e
            r0.<init>()
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r2.l
            r0.a(r1)
        L12:
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

    @Override
    public void b() {
            r5 = this;
            android.view.ViewGroup r0 = r5.j()
            r0.removeAllViews()
            com.sigmob.sdk.base.common.j r0 = r5.h()
            android.view.ViewGroup r1 = r5.j()
            r0.onSetContentView(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r5.l
            com.sigmob.sdk.base.models.ClickCommon r0 = r0.getClickCommon()
            java.lang.String r1 = "template"
            r0.click_scene = r1
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            android.app.Activity r1 = r5.k()
            r0.<init>(r1)
            r5.j = r0
            r1 = -1
            r0.setBackgroundColor(r1)
            android.view.View r0 = r5.l()
            r5.o = r0
            com.sigmob.sdk.mraid.d r0 = r5.n
            if (r0 == 0) goto L3c
            android.app.Activity r2 = r5.k()
            r0.a(r2)
        L3c:
            android.widget.RelativeLayout r0 = r5.j
            android.view.View r2 = r5.o
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            r3.<init>(r1, r1)
            r0.addView(r2, r3)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r0.<init>(r1, r1)
            com.sigmob.sdk.nativead.n r2 = com.sigmob.sdk.nativead.u.g
            if (r2 == 0) goto L61
            com.sigmob.windad.natives.WindNativeAdData r2 = r2.getNativeAdUnit()
            r5.p = r2
            if (r2 == 0) goto L61
            int r2 = r5.n()
            r3 = 0
            r0.setMargins(r3, r2, r3, r3)
        L61:
            android.view.ViewGroup r2 = r5.j()
            android.widget.RelativeLayout r3 = r5.j
            r2.addView(r3, r0)
            com.sigmob.sdk.nativead.n r0 = com.sigmob.sdk.nativead.u.g
            if (r0 == 0) goto Lac
            android.widget.FrameLayout r0 = new android.widget.FrameLayout
            android.app.Activity r2 = r5.k()
            r0.<init>(r2)
            r5.k = r0
            com.sigmob.sdk.nativead.n r0 = com.sigmob.sdk.nativead.u.g
            com.sigmob.sdk.nativead.u$1 r2 = new com.sigmob.sdk.nativead.u$1
            r2.<init>(r5)
            r0.setBackClickListener(r2)
            android.view.ViewGroup r0 = r5.j()
            android.widget.FrameLayout r2 = r5.k
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            int r4 = r5.n()
            r3.<init>(r1, r4)
            r0.addView(r2, r3)
            com.sigmob.sdk.nativead.n r0 = com.sigmob.sdk.nativead.u.g
            com.sigmob.sdk.nativead.p r0 = r0.getSigVideoAdController()
            r0.c()
            android.widget.FrameLayout r0 = r5.k
            android.view.ViewTreeObserver r0 = r0.getViewTreeObserver()
            com.sigmob.sdk.nativead.u$2 r1 = new com.sigmob.sdk.nativead.u$2
            r1.<init>(r5)
            r0.addOnPreDrawListener(r1)
        Lac:
            r0 = 100
            java.lang.String r1 = "com.sigmob.action.native.temple.show"
            r5.a(r1, r0)
            return
    }

    @Override
    public void c() {
            r2 = this;
            com.sigmob.sdk.nativead.n r0 = com.sigmob.sdk.nativead.u.g
            if (r0 == 0) goto L11
            boolean r1 = r2.u
            if (r1 != 0) goto L11
            com.sigmob.sdk.nativead.p r0 = r0.getSigVideoAdController()
            if (r0 == 0) goto L11
            r0.a()
        L11:
            return
    }

    @Override
    public void d() {
            r1 = this;
            com.sigmob.sdk.nativead.n r0 = com.sigmob.sdk.nativead.u.g
            if (r0 == 0) goto Ld
            com.sigmob.sdk.nativead.p r0 = r0.getSigVideoAdController()
            if (r0 == 0) goto Ld
            r0.c()
        Ld:
            com.sigmob.sdk.mraid.d r0 = r1.n
            if (r0 == 0) goto L14
            r0.c()
        L14:
            return
    }

    @Override
    public void e() {
            r2 = this;
            com.sigmob.sdk.nativead.APKStatusBroadcastReceiver r0 = r2.q
            r1 = 0
            if (r0 == 0) goto La
            r0.b(r0)
            r2.q = r1
        La:
            com.sigmob.sdk.mraid.d r0 = r2.n
            if (r0 == 0) goto L13
            r0.l()
            r2.n = r1
        L13:
            com.sigmob.sdk.nativead.n r0 = com.sigmob.sdk.nativead.u.g
            if (r0 == 0) goto L1c
            r0.setBackClickListener(r1)
            com.sigmob.sdk.nativead.u.g = r1
        L1c:
            java.lang.String r0 = "com.sigmob.action.native.temple.dismiss"
            r2.a(r0)
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
            r2 = this;
            com.sigmob.sdk.nativead.n r0 = com.sigmob.sdk.nativead.u.g
            r1 = 0
            if (r0 == 0) goto Lc
            boolean r0 = r0.b()
            if (r0 == 0) goto Lc
            return r1
        Lc:
            r2.q()
            return r1
    }

    public android.view.View l() {
            r4 = this;
            com.sigmob.sdk.mraid.d r0 = r4.n
            if (r0 != 0) goto L11
            com.sigmob.sdk.mraid.d r0 = new com.sigmob.sdk.mraid.d
            android.content.Context r1 = r4.b
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r4.l
            com.sigmob.sdk.base.models.PlacementType r3 = com.sigmob.sdk.base.models.PlacementType.INTERSTITIAL
            r0.<init>(r1, r2, r3)
            r4.n = r0
        L11:
            com.sigmob.sdk.mraid.d r0 = r4.n
            com.sigmob.sdk.nativead.u$4 r1 = new com.sigmob.sdk.nativead.u$4
            r1.<init>(r4)
            r0.a(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r4.l
            java.lang.String r0 = r0.getHtmlUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L38
            com.sigmob.sdk.mraid.d r0 = r4.n
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r4.l
            java.lang.String r1 = r1.getHtmlUrl()
            com.sigmob.sdk.nativead.u$5 r2 = new com.sigmob.sdk.nativead.u$5
            r2.<init>(r4)
            r0.b(r1, r2)
            goto L54
        L38:
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r4.l
            java.lang.String r0 = r0.getHtmlData()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L54
            com.sigmob.sdk.mraid.d r0 = r4.n
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r4.l
            java.lang.String r1 = r1.getHtmlData()
            com.sigmob.sdk.nativead.u$6 r2 = new com.sigmob.sdk.nativead.u$6
            r2.<init>(r4)
            r0.a(r1, r2)
        L54:
            com.sigmob.sdk.mraid.d r0 = r4.n
            com.sigmob.sdk.nativead.u$7 r1 = new com.sigmob.sdk.nativead.u$7
            r1.<init>(r4)
            r0.a(r1)
            com.sigmob.sdk.mraid.d r0 = r4.n
            android.widget.FrameLayout r0 = r0.p()
            return r0
    }
}
