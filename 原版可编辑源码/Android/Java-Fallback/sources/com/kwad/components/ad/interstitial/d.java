package com.kwad.components.ad.interstitial;

public final class d extends com.kwad.components.core.n.d {
    private final com.kwad.components.core.widget.g hA;
    private com.kwad.components.ad.interstitial.f.a hv;
    private boolean hw;
    private com.kwad.components.ad.interstitial.e.b hx;
    private final com.kwad.sdk.api.KsAdVideoPlayConfig hy;
    private com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener hz;
    private final com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.sdk.utils.bi mTimerHelper;



    public d(android.app.Activity r1, com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.sdk.api.KsVideoPlayConfig r3, com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener r4) {
            r0 = this;
            r0.<init>(r1)
            com.kwad.components.ad.interstitial.d$1 r1 = new com.kwad.components.ad.interstitial.d$1
            r1.<init>(r0)
            r0.hA = r1
            r0.hz = r4
            com.kwad.sdk.api.KsAdVideoPlayConfig$Builder r1 = new com.kwad.sdk.api.KsAdVideoPlayConfig$Builder
            r1.<init>()
            if (r3 == 0) goto L1b
            boolean r3 = r3.isVideoSoundEnable()
            if (r3 == 0) goto L1b
            r3 = 1
            goto L1c
        L1b:
            r3 = 0
        L1c:
            com.kwad.sdk.api.KsAdVideoPlayConfig$Builder r1 = r1.videoSoundEnable(r3)
            boolean r3 = com.kwad.components.ad.interstitial.a.b.cA()
            com.kwad.sdk.api.KsAdVideoPlayConfig$Builder r1 = r1.dataFlowAutoStart(r3)
            com.kwad.sdk.api.KsAdVideoPlayConfig r1 = r1.build()
            r0.hy = r1
            r0.mAdTemplate = r2
            return
    }

    static boolean a(com.kwad.components.ad.interstitial.d r0) {
            boolean r0 = r0.hw
            return r0
    }

    static android.app.Activity b(com.kwad.components.ad.interstitial.d r0) {
            android.app.Activity r0 = r0.mActivity
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate c(com.kwad.components.ad.interstitial.d r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    private boolean cg() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r1 = com.kwad.sdk.core.response.b.a.cc(r0)
            if (r1 == 0) goto L1e
            boolean r1 = r2.ch()
            if (r1 != 0) goto L1e
            int r1 = com.kwad.components.ad.interstitial.b.a.cI()
            int r0 = com.kwad.sdk.core.response.b.a.cf(r0)
            if (r1 >= r0) goto L1e
            r0 = 1
            return r0
        L1e:
            r0 = 0
            return r0
    }

    private boolean ch() {
            r3 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.b.aR(r0)
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            int r0 = com.kwad.components.ad.interstitial.c.a.cK()
            com.kwad.sdk.core.config.item.k r2 = com.kwad.sdk.core.config.c.ali
            int r2 = com.kwad.sdk.core.config.d.a(r2)
            if (r0 >= r2) goto L18
            r0 = 1
            return r0
        L18:
            return r1
    }

    private void ci() {
            r4 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            int r0 = com.kwad.sdk.core.response.b.a.bZ(r0)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            java.lang.String r1 = com.kwad.sdk.core.response.b.b.bm(r1)
            boolean r2 = r4.cg()
            if (r2 == 0) goto L20
            com.kwad.components.ad.interstitial.aggregate.b r0 = new com.kwad.components.ad.interstitial.aggregate.b
            android.content.Context r1 = r4.mContext
            r0.<init>(r1)
        L1d:
            r4.hv = r0
            goto L53
        L20:
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L4b
            boolean r1 = com.kwad.sdk.utils.ai.IN()
            if (r1 != 0) goto L2d
            goto L4b
        L2d:
            r1 = 2
            if (r0 != r1) goto L38
            com.kwad.components.ad.interstitial.f.e r0 = new com.kwad.components.ad.interstitial.f.e
            android.content.Context r1 = r4.mContext
            r0.<init>(r1)
            goto L1d
        L38:
            r1 = 1
            if (r0 != r1) goto L43
            com.kwad.components.ad.interstitial.f.d r0 = new com.kwad.components.ad.interstitial.f.d
            android.content.Context r1 = r4.mContext
            r0.<init>(r1)
            goto L1d
        L43:
            com.kwad.components.ad.interstitial.f.c r0 = new com.kwad.components.ad.interstitial.f.c
            android.content.Context r1 = r4.mContext
            r0.<init>(r1)
            goto L1d
        L4b:
            com.kwad.components.ad.interstitial.f.c r0 = new com.kwad.components.ad.interstitial.f.c
            android.content.Context r1 = r4.mContext
            r0.<init>(r1)
            goto L1d
        L53:
            com.kwad.components.ad.interstitial.f.a r0 = r4.hv
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            com.kwad.sdk.api.KsAdVideoPlayConfig r2 = r4.hy
            com.kwad.sdk.api.KsInterstitialAd$AdInteractionListener r3 = r4.hz
            r0.a(r1, r4, r2, r3)
            android.view.ViewGroup r0 = r4.zv
            r0.removeAllViews()
            android.view.ViewGroup r0 = r4.zv
            com.kwad.components.ad.interstitial.f.a r1 = r4.hv
            r0.addView(r1)
            r4.cj()
            return
    }

    private void cj() {
            r3 = this;
            com.kwad.components.ad.interstitial.e.b r0 = new com.kwad.components.ad.interstitial.e.b
            com.kwad.components.ad.interstitial.f.a r1 = r3.hv
            r2 = 100
            r0.<init>(r1, r2)
            r3.hx = r0
            com.kwad.components.ad.interstitial.d$2 r1 = new com.kwad.components.ad.interstitial.d$2
            r1.<init>(r3)
            r0.a(r1)
            com.kwad.components.ad.interstitial.e.b r0 = r3.hx
            r0.sy()
            return
    }

    static void d(com.kwad.components.ad.interstitial.d r0) {
            r0.ci()
            return
    }

    @Override
    public final android.view.ViewGroup cf() {
            r2 = this;
            com.kwad.components.core.widget.f r0 = new com.kwad.components.core.widget.f
            android.content.Context r1 = r2.mContext
            r0.<init>(r1)
            com.kwad.components.core.widget.g r1 = r2.hA
            r0.setOrientationChangeListener(r1)
            return r0
    }

    @Override
    public final void dismiss() {
            r1 = this;
            super.dismiss()
            com.kwad.sdk.a.a.c r0 = com.kwad.sdk.a.a.c.yb()
            r0.ye()
            com.kwad.sdk.api.KsInterstitialAd$AdInteractionListener r0 = r1.hz
            if (r0 == 0) goto L11
            r0.onPageDismiss()
        L11:
            com.kwad.components.core.e.a.h.mU()
            return
    }

    @Override
    public final void g(android.view.View r3) {
            r2 = this;
            android.view.Window r3 = r2.getWindow()
            com.kwad.components.core.e.a.h.a(r3)
            r2.ci()
            java.lang.String r3 = "interstitial"
            java.lang.String r0 = "show"
            com.kwad.sdk.i.a.ai(r3, r0)
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r3 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT
            com.kwai.adclient.kscommerciallogger.model.BusinessType r0 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_INTERSTITIAL
            java.lang.String r1 = "adShowSuccess"
            com.kwad.sdk.core.report.KSLoggerReporter$b r3 = r3.buildMethodCheck(r0, r1)
            r3.report()
            return
    }

    @Override
    public final int getLayoutId() {
            r1 = this;
            r0 = 0
            return r0
    }

    public final com.kwad.sdk.utils.bi getTimerHelper() {
            r1 = this;
            com.kwad.sdk.utils.bi r0 = r1.mTimerHelper
            if (r0 != 0) goto Lb
            com.kwad.sdk.utils.bi r0 = new com.kwad.sdk.utils.bi
            r0.<init>()
            r1.mTimerHelper = r0
        Lb:
            com.kwad.sdk.utils.bi r0 = r1.mTimerHelper
            return r0
    }

    @Override
    public final void onBackPressed() {
            r1 = this;
            boolean r0 = com.kwad.components.ad.interstitial.a.b.cE()
            if (r0 == 0) goto L9
            super.onBackPressed()
        L9:
            return
    }

    @Override
    public final void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            com.kwad.components.ad.interstitial.e.b r0 = r1.hx
            if (r0 == 0) goto La
            r0.release()
        La:
            return
    }

    @Override
    public final void onWindowFocusChanged(boolean r2) {
            r1 = this;
            super.onWindowFocusChanged(r2)
            r1.hw = r2
            com.kwad.components.ad.interstitial.f.a r0 = r1.hv
            if (r0 == 0) goto L12
            if (r2 == 0) goto Lf
            r0.cn()
            return
        Lf:
            r0.co()
        L12:
            return
    }

    public final void setAdInteractionListener(com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener r2) {
            r1 = this;
            r1.hz = r2
            com.kwad.components.ad.interstitial.f.a r0 = r1.hv
            if (r0 == 0) goto L9
            r0.setAdInteractionListener(r2)
        L9:
            return
    }
}
