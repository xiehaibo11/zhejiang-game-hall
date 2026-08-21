package com.kwad.components.ad.interstitial.d;

public final class f extends com.kwad.components.ad.interstitial.d.b {
    private com.kwad.components.core.widget.a.b bG;
    private com.kwad.sdk.core.video.videoview.a ex;
    private com.kwad.components.core.widget.KsAutoCloseView jc;
    private com.kwad.components.ad.interstitial.d.c jf;
    private boolean kJ;
    private com.kwad.sdk.widget.KSFrameLayout kK;
    private com.kwad.sdk.core.h.d kL;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;







    public f() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.interstitial.d.f$4 r0 = new com.kwad.components.ad.interstitial.d.f$4
            r0.<init>(r1)
            r1.kL = r0
            return
    }

    static com.kwad.sdk.widget.KSFrameLayout a(com.kwad.components.ad.interstitial.d.f r0, com.kwad.sdk.widget.KSFrameLayout r1) {
            r0.kK = r1
            return r1
    }

    static void a(com.kwad.components.ad.interstitial.d.f r0) {
            r0.dG()
            return
    }

    static void a(com.kwad.components.ad.interstitial.d.f r0, int r1, int r2) {
            r0.e(r1, r2)
            return
    }

    static void a(com.kwad.components.ad.interstitial.d.f r0, boolean r1) {
            r0.n(r1)
            return
    }

    static com.kwad.components.ad.interstitial.d.c b(com.kwad.components.ad.interstitial.d.f r0) {
            com.kwad.components.ad.interstitial.d.c r0 = r0.jf
            return r0
    }

    static boolean b(com.kwad.components.ad.interstitial.d.f r0, boolean r1) {
            r0.kJ = r1
            return r1
    }

    static com.kwad.sdk.core.video.videoview.a c(com.kwad.components.ad.interstitial.d.f r0) {
            com.kwad.sdk.core.video.videoview.a r0 = r0.ex
            return r0
    }

    private static boolean c(com.kwad.sdk.core.response.model.AdInfo r2) {
            com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo r0 = r2.adInsertScreenInfo
            int r0 = r0.autoCloseTime
            r1 = 0
            if (r0 > 0) goto L8
            return r1
        L8:
            boolean r2 = com.kwad.sdk.core.response.b.a.bv(r2)
            if (r2 == 0) goto Lf
            return r1
        Lf:
            r2 = 1
            return r2
    }

    static com.kwad.sdk.core.response.model.AdTemplate d(com.kwad.components.ad.interstitial.d.f r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    private void dG() {
            r8 = this;
            com.kwad.components.ad.interstitial.d.c r0 = r8.jf
            com.kwad.components.ad.interstitial.f.f r0 = r0.jg
            com.kwad.sdk.core.response.model.AdTemplate r1 = r8.mAdTemplate
            r0.setAdTemplate(r1)
            com.kwad.sdk.core.response.model.AdInfo r1 = r8.mAdInfo
            boolean r1 = com.kwad.sdk.core.response.b.a.aV(r1)
            r2 = 0
            r3 = 1
            if (r1 == 0) goto L28
            com.kwad.sdk.core.response.model.AdInfo r1 = r8.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r1 = com.kwad.sdk.core.response.b.a.aM(r1)
            java.lang.String r1 = r1.materialUrl
            com.kwad.sdk.core.response.model.AdTemplate r4 = r8.mAdTemplate
            r0.a(r1, r4)
            r0.b(r3, r3)
            r0.t(r2)
            goto Lb3
        L28:
            r0.t(r3)
            com.kwad.sdk.core.response.model.AdInfo r1 = r8.mAdInfo
            com.kwad.sdk.core.response.model.b r1 = com.kwad.sdk.core.response.b.a.bi(r1)
            java.lang.String r1 = r1.getUrl()
            boolean r4 = android.text.TextUtils.isEmpty(r1)
            if (r4 != 0) goto L44
            com.kwad.sdk.core.response.model.AdTemplate r4 = r8.mAdTemplate
            r0.a(r1, r4)
            r0.b(r3, r2)
            goto L47
        L44:
            r0.b(r2, r2)
        L47:
            com.kwad.components.ad.interstitial.d.c r1 = r8.jf
            com.kwad.sdk.core.video.videoview.a r1 = r1.ex
            r8.ex = r1
            android.view.ViewParent r1 = r1.getParent()
            if (r1 == 0) goto L62
            com.kwad.sdk.core.video.videoview.a r1 = r8.ex
            android.view.ViewParent r1 = r1.getParent()
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            com.kwad.sdk.core.video.videoview.a r4 = r8.ex
            r1.removeView(r4)
        L62:
            com.kwad.sdk.core.response.model.AdInfo r1 = r8.mAdInfo
            boolean r1 = com.kwad.sdk.core.response.b.a.aU(r1)
            if (r1 == 0) goto L82
            com.kwad.sdk.core.response.model.AdInfo r1 = r8.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r1 = com.kwad.sdk.core.response.b.a.aN(r1)
            int r1 = r1.height
            float r1 = (float) r1
            com.kwad.sdk.core.response.model.AdInfo r4 = r8.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r4 = com.kwad.sdk.core.response.b.a.aN(r4)
            int r4 = r4.width
            float r4 = (float) r4
            float r1 = r1 / r4
            com.kwad.sdk.core.video.videoview.a r4 = r8.ex
            r0.a(r1, r4)
        L82:
            com.kwad.components.ad.interstitial.d.c r1 = r8.jf
            com.kwad.sdk.api.KsAdVideoPlayConfig r1 = r1.dJ
            boolean r1 = r1.isVideoSoundEnable()
            r0.u(r1)
            com.kwad.sdk.core.response.model.AdInfo r1 = r8.mAdInfo
            int r1 = com.kwad.sdk.core.response.b.a.G(r1)
            com.kwad.components.ad.interstitial.d.c r4 = r8.jf
            com.kwad.components.ad.interstitial.d.f$5 r5 = new com.kwad.components.ad.interstitial.d.f$5
            r5.<init>(r8, r1, r0)
            r4.a(r5)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r8.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r4 = r8.mAdInfo
            r0.a(r1, r4)
            r0.t(r3)
            com.kwad.components.ad.interstitial.d.c r1 = r8.jf
            java.util.List<com.kwad.components.ad.interstitial.d.c$c> r1 = r1.jq
            com.kwad.components.ad.interstitial.d.f$6 r4 = new com.kwad.components.ad.interstitial.d.f$6
            r4.<init>(r8, r0)
            r1.add(r4)
        Lb3:
            com.kwad.components.ad.interstitial.d.c r1 = r8.jf
            android.content.Context r4 = r8.getContext()
            com.kwad.sdk.core.response.model.AdInfo r5 = r8.mAdInfo
            com.kwad.sdk.core.response.model.AdTemplate r6 = r8.mAdTemplate
            android.view.View r7 = r0.getBlurBgView()
            r1.a(r4, r5, r6, r7)
            com.kwad.sdk.core.response.model.AdInfo r1 = r8.mAdInfo
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.I(r1)
            boolean r4 = android.text.TextUtils.isEmpty(r1)
            if (r4 == 0) goto Ld6
            com.kwad.sdk.core.response.model.AdInfo r1 = r8.mAdInfo
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.P(r1)
        Ld6:
            android.widget.ImageView r0 = r0.getTailFrameView()
            com.kwad.sdk.core.response.model.AdTemplate r4 = r8.mAdTemplate
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r0, r1, r4)
            com.kwad.sdk.core.response.model.AdInfo r0 = r8.mAdInfo
            boolean r0 = c(r0)
            if (r0 == 0) goto Lf0
            com.kwad.components.core.widget.KsAutoCloseView r0 = r8.jc
            r0.aR(r3)
            r8.dH()
            return
        Lf0:
            com.kwad.components.core.widget.KsAutoCloseView r0 = r8.jc
            r0.aR(r2)
            return
    }

    private void dH() {
            r3 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r3.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo r0 = r0.adInsertScreenInfo
            int r0 = r0.autoCloseTime
            com.kwad.sdk.core.response.model.AdInfo r1 = r3.mAdInfo
            boolean r1 = com.kwad.sdk.core.response.b.a.aU(r1)
            if (r1 == 0) goto L26
            com.kwad.sdk.core.response.model.AdInfo r1 = r3.mAdInfo
            int r1 = com.kwad.sdk.core.response.b.a.G(r1)
            int r0 = java.lang.Math.min(r0, r1)
            com.kwad.components.ad.interstitial.d.c r1 = r3.jf
            com.kwad.components.ad.interstitial.f.f r1 = r1.jg
            r1.ew()
            com.kwad.components.ad.interstitial.d.c r1 = r3.jf
            com.kwad.components.ad.interstitial.f.f r1 = r1.jg
            r1.ex()
        L26:
            com.kwad.components.core.widget.KsAutoCloseView r1 = r3.jc
            r1.V(r0)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            r1 = 165(0xa5, float:2.31E-43)
            r2 = 0
            com.kwad.sdk.core.report.a.b(r0, r1, r2)
            return
    }

    static com.kwad.components.core.widget.KsAutoCloseView e(com.kwad.components.ad.interstitial.d.f r0) {
            com.kwad.components.core.widget.KsAutoCloseView r0 = r0.jc
            return r0
    }

    private void e(int r3, int r4) {
            r2 = this;
            com.kwad.components.ad.interstitial.d.c$b r0 = new com.kwad.components.ad.interstitial.d.c$b
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1)
            boolean r1 = r2.kJ
            com.kwad.components.ad.interstitial.d.c$b r0 = r0.k(r1)
            com.kwad.sdk.widget.KSFrameLayout r1 = r2.kK
            com.kwad.sdk.utils.ac$a r1 = r1.getTouchCoords()
            com.kwad.components.ad.interstitial.d.c$b r0 = r0.a(r1)
            com.kwad.components.ad.interstitial.d.c$b r3 = r0.y(r3)
            com.kwad.components.ad.interstitial.d.c$b r3 = r3.z(r4)
            com.kwad.components.ad.interstitial.d.c r4 = r2.jf
            r4.a(r3)
            boolean r3 = com.kwad.components.ad.interstitial.a.b.cG()
            if (r3 == 0) goto L42
            com.kwad.components.ad.interstitial.d.c r3 = r2.jf
            com.kwad.components.ad.interstitial.d r3 = r3.hG
            if (r3 == 0) goto L42
            com.kwad.components.ad.interstitial.d.c r3 = r2.jf
            r4 = 0
            r0 = -1
            com.kwad.sdk.core.video.videoview.a r1 = r3.ex
            r3.a(r4, r0, r1)
            com.kwad.components.ad.interstitial.d.c r3 = r2.jf
            com.kwad.components.ad.interstitial.d r3 = r3.hG
            r3.dismiss()
        L42:
            return
    }

    static android.content.Context f(com.kwad.components.ad.interstitial.d.f r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    private void n(boolean r4) {
            r3 = this;
            com.kwad.components.ad.interstitial.d.c r0 = r3.jf
            boolean r0 = r0.jk
            if (r0 != 0) goto L29
            if (r4 != 0) goto L29
            com.kwad.components.ad.interstitial.d.c r0 = r3.jf
            boolean r0 = r0.ji
            if (r0 != 0) goto L29
            com.kwad.components.ad.interstitial.d.c r0 = r3.jf
            boolean r0 = r0.jj
            if (r0 != 0) goto L29
            com.kwad.components.ad.interstitial.d.c r0 = r3.jf
            boolean r0 = com.kwad.components.ad.interstitial.e.a.c(r0)
            if (r0 == 0) goto L29
            com.kwad.components.ad.interstitial.d.c r4 = r3.jf
            r0 = 1
            r4.jj = r0
            android.content.Context r4 = r3.getContext()
            com.kwad.components.ad.interstitial.b.b.K(r4)
            return
        L29:
            com.kwad.components.ad.interstitial.d.c r0 = r3.jf
            r1 = -1
            com.kwad.sdk.core.video.videoview.a r2 = r3.ex
            r0.a(r4, r1, r2)
            com.kwad.components.ad.interstitial.d.c r4 = r3.jf
            com.kwad.components.ad.interstitial.d r4 = r4.hG
            r4.dismiss()
            com.kwad.sdk.core.video.videoview.a r4 = r3.ex
            if (r4 == 0) goto L3f
            r4.release()
        L3f:
            com.kwad.components.ad.interstitial.d.c r4 = r3.jf
            boolean r4 = r4.jk
            if (r4 != 0) goto L52
            com.kwad.components.ad.interstitial.d.c r4 = r3.jf
            com.kwad.sdk.api.KsInterstitialAd$AdInteractionListener r4 = r4.hz
            if (r4 == 0) goto L52
            com.kwad.components.ad.interstitial.d.c r4 = r3.jf
            com.kwad.sdk.api.KsInterstitialAd$AdInteractionListener r4 = r4.hz
            r4.onAdClosed()
        L52:
            return
    }

    @Override
    public final void ah() {
            r3 = this;
            super.ah()
            java.lang.Object r0 = r3.Gk()
            com.kwad.components.ad.interstitial.d.c r0 = (com.kwad.components.ad.interstitial.d.c) r0
            r3.jf = r0
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r3.mAdTemplate = r0
            com.kwad.components.ad.interstitial.d.c r0 = r3.jf
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r3.mAdInfo = r0
            com.kwad.components.ad.interstitial.d.c r0 = r3.jf
            com.kwad.components.ad.interstitial.f.f r0 = r0.jg
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            r0.l(r1)
            com.kwad.components.ad.interstitial.d.c r0 = r3.jf
            com.kwad.components.ad.interstitial.d.f$2 r1 = new com.kwad.components.ad.interstitial.d.f$2
            r1.<init>(r3)
            r0.a(r1)
            com.kwad.components.ad.interstitial.d.c r0 = r3.jf
            com.kwad.components.ad.interstitial.f.f r0 = r0.jg
            com.kwad.components.ad.interstitial.d.f$3 r1 = new com.kwad.components.ad.interstitial.d.f$3
            r1.<init>(r3)
            r0.setViewListener(r1)
            com.kwad.components.core.widget.a.b r0 = new com.kwad.components.core.widget.a.b
            com.kwad.components.ad.interstitial.d.c r1 = r3.jf
            com.kwad.components.ad.interstitial.f.f r1 = r1.jg
            r2 = 100
            r0.<init>(r1, r2)
            r3.bG = r0
            com.kwad.sdk.core.h.d r1 = r3.kL
            r0.a(r1)
            com.kwad.components.core.widget.a.b r0 = r3.bG
            r0.sy()
            return
    }

    @Override
    public final void onCreate() {
            r2 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_auto_close
            android.view.View r0 = r2.findViewById(r0)
            com.kwad.components.core.widget.KsAutoCloseView r0 = (com.kwad.components.core.widget.KsAutoCloseView) r0
            r2.jc = r0
            com.kwad.components.ad.interstitial.d.f$1 r1 = new com.kwad.components.ad.interstitial.d.f$1
            r1.<init>(r2)
            r0.setViewListener(r1)
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.core.widget.a.b r0 = r2.bG
            com.kwad.sdk.core.h.d r1 = r2.kL
            r0.b(r1)
            com.kwad.components.core.widget.a.b r0 = r2.bG
            r0.sz()
            return
    }
}
