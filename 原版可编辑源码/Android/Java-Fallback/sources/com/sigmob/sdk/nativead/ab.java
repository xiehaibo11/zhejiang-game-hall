package com.sigmob.sdk.nativead;

public class ab implements com.sigmob.windad.natives.WindNativeAdData {
    private final java.lang.String a;
    private final java.lang.String b;
    private final java.lang.String c;
    private final java.util.List<com.sigmob.sdk.base.models.SigImage> d;
    private final int e;
    private final com.sigmob.sdk.nativead.w f;
    private java.util.List<android.widget.ImageView> g;
    private int h;

    public ab(com.sigmob.sdk.base.models.BaseAdUnit r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = r2.getTitle()
            r1.a = r0
            java.lang.String r0 = r2.getDesc()
            r1.b = r0
            java.lang.String r0 = r2.getIconUrl()
            r1.c = r0
            java.util.List r0 = r2.getImageUrlList()
            r1.d = r0
            com.sigmob.sdk.base.models.rtb.ResponseNativeAd r0 = r2.getNativeAd()
            java.lang.Integer r0 = r0.type
            int r0 = r0.intValue()
            r1.e = r0
            com.sigmob.sdk.nativead.w r0 = new com.sigmob.sdk.nativead.w
            r0.<init>()
            r1.f = r0
            r0.a(r2, r1)
            return
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "sigmob"
            return r0
    }

    public java.util.List<com.sigmob.sdk.base.models.SigImage> b() {
            r1 = this;
            java.util.List<com.sigmob.sdk.base.models.SigImage> r0 = r1.d
            return r0
    }

    @Override
    public void bindImageViews(java.util.List<android.widget.ImageView> r2, int r3) {
            r1 = this;
            com.sigmob.sdk.nativead.w r0 = r1.f
            if (r0 == 0) goto L7
            r0.a(r2, r3)
        L7:
            return
    }

    @Override
    public void bindMediaView(android.view.ViewGroup r2, com.sigmob.windad.natives.WindNativeAdData.NativeADMediaListener r3) {
            r1 = this;
            com.sigmob.sdk.nativead.w r0 = r1.f
            if (r0 == 0) goto L7
            r0.a(r2, r3)
        L7:
            return
    }

    @Override
    public void bindViewForInteraction(android.view.View r7, java.util.List<android.view.View> r8, java.util.List<android.view.View> r9, android.view.View r10, com.sigmob.windad.natives.NativeADEventListener r11) {
            r6 = this;
            com.sigmob.sdk.nativead.w r0 = r6.f
            if (r0 == 0) goto Lc
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.a(r1, r2, r3, r4, r5)
        Lc:
            return
    }

    public android.view.View c() {
            r1 = this;
            com.sigmob.sdk.nativead.w r0 = r1.f
            if (r0 == 0) goto L9
            android.view.View r0 = r0.q()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public double d() {
            r2 = this;
            com.sigmob.sdk.nativead.w r0 = r2.f
            if (r0 == 0) goto L9
            double r0 = r0.s()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public void destroy() {
            r1 = this;
            com.sigmob.sdk.nativead.w r0 = r1.f
            if (r0 == 0) goto L7
            r0.w()
        L7:
            return
    }

    public double e() {
            r2 = this;
            com.sigmob.sdk.nativead.w r0 = r2.f
            if (r0 == 0) goto L9
            double r0 = r0.t()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public int f() {
            r1 = this;
            com.sigmob.sdk.nativead.w r0 = r1.f
            if (r0 == 0) goto L9
            int r0 = r0.p()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public int g() {
            r1 = this;
            com.sigmob.sdk.nativead.w r0 = r1.f
            if (r0 == 0) goto L9
            int r0 = r0.u()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public android.graphics.Bitmap getAdLogo() {
            r1 = this;
            com.sigmob.sdk.nativead.w r0 = r1.f
            android.graphics.Bitmap r0 = r0.A()
            return r0
    }

    @Override
    public int getAdPatternType() {
            r1 = this;
            int r0 = r1.e
            return r0
    }

    @Override
    public java.lang.String getCTAText() {
            r1 = this;
            com.sigmob.sdk.nativead.w r0 = r1.f
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.z()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public java.lang.String getDesc() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    @Override
    public java.lang.String getIconUrl() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    @Override
    public java.lang.String getTitle() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public int h() {
            r1 = this;
            int r0 = r1.e
            return r0
    }

    public void i() {
            r1 = this;
            com.sigmob.sdk.nativead.w r0 = r1.f
            if (r0 == 0) goto L7
            r0.v()
        L7:
            return
    }

    @Override
    public void pauseVideo() {
            r1 = this;
            com.sigmob.sdk.nativead.w r0 = r1.f
            if (r0 == 0) goto L7
            r0.C()
        L7:
            return
    }

    @Override
    public void resumeVideo() {
            r1 = this;
            com.sigmob.sdk.nativead.w r0 = r1.f
            if (r0 == 0) goto L7
            r0.E()
        L7:
            return
    }

    @Override
    public void setDislikeInteractionCallback(android.app.Activity r1, com.sigmob.windad.natives.WindNativeAdData.DislikeInteractionCallback r2) {
            r0 = this;
            com.sigmob.sdk.nativead.w r1 = r0.f
            if (r1 == 0) goto L7
            r1.a(r2)
        L7:
            return
    }

    @Override
    public void startVideo() {
            r1 = this;
            com.sigmob.sdk.nativead.w r0 = r1.f
            if (r0 == 0) goto L7
            r0.B()
        L7:
            return
    }

    @Override
    public void stopVideo() {
            r1 = this;
            com.sigmob.sdk.nativead.w r0 = r1.f
            if (r0 == 0) goto L7
            r0.F()
        L7:
            return
    }
}
