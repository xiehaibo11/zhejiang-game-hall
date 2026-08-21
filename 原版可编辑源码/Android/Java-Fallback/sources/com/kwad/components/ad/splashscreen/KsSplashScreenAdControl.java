package com.kwad.components.ad.splashscreen;

public class KsSplashScreenAdControl extends com.kwad.sdk.api.core.AbstrackKsSplashScreenAd implements com.kwad.components.core.internal.api.a {
    private com.kwad.components.core.response.model.AdResultData BO;
    private com.kwad.sdk.api.KsScene BP;
    private com.kwad.sdk.core.h.b bJ;
    private com.kwad.components.core.internal.api.c bP;
    private final com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;


    public KsSplashScreenAdControl(com.kwad.sdk.api.KsScene r2, com.kwad.components.core.response.model.AdResultData r3) {
            r1 = this;
            r1.<init>()
            com.kwad.components.core.internal.api.c r0 = new com.kwad.components.core.internal.api.c
            r0.<init>()
            r1.bP = r0
            com.kwad.components.ad.splashscreen.KsSplashScreenAdControl$1 r0 = new com.kwad.components.ad.splashscreen.KsSplashScreenAdControl$1
            r0.<init>(r1)
            r1.bJ = r0
            r1.BO = r3
            r1.BP = r2
            java.util.List r2 = r3.getAdTemplateList()
            r3 = 0
            java.lang.Object r2 = r2.get(r3)
            com.kwad.sdk.core.response.model.AdTemplate r2 = (com.kwad.sdk.core.response.model.AdTemplate) r2
            r1.mAdTemplate = r2
            com.kwad.components.ad.h.b r2 = com.kwad.components.ad.h.b.fa()
            r2.a(r1)
            return
    }

    static com.kwad.components.core.internal.api.c a(com.kwad.components.ad.splashscreen.KsSplashScreenAdControl r0) {
            com.kwad.components.core.internal.api.c r0 = r0.bP
            return r0
    }

    @Override
    public final void a(com.kwad.components.core.internal.api.b r2) {
            r1 = this;
            com.kwad.components.core.internal.api.c r0 = r1.bP
            r0.a(r2)
            return
    }

    @Override
    public final boolean ae() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final void b(com.kwad.components.core.internal.api.b r2) {
            r1 = this;
            com.kwad.components.core.internal.api.c r0 = r1.bP
            r0.b(r2)
            return
    }

    @Override
    public final com.kwad.sdk.core.response.model.AdTemplate getAdTemplate() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            return r0
    }

    @Override
    public int getECPM() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            int r0 = com.kwad.sdk.core.response.b.a.aJ(r0)
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    protected com.kwad.sdk.api.core.fragment.KsFragment getFragment2(com.kwad.sdk.api.KsSplashScreenAd.SplashScreenAdInteractionListener r4) {
            r3 = this;
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r0 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_SPLASH
            java.lang.String r2 = "callShow"
            com.kwad.sdk.core.report.KSLoggerReporter$b r0 = r0.buildMethodCheck(r1, r2)
            r0.report()
            java.lang.Class<com.kwad.components.ad.splashscreen.a.a> r0 = com.kwad.components.ad.splashscreen.a.a.class
            com.kwad.sdk.components.a r0 = com.kwad.sdk.components.c.f(r0)
            com.kwad.components.ad.splashscreen.a.a r0 = (com.kwad.components.ad.splashscreen.a.a) r0
            if (r0 == 0) goto L20
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.sdk.core.h.b r2 = r3.bJ
            com.kwad.sdk.api.core.fragment.KsFragment r4 = r0.a(r1, r2, r4)
            goto L21
        L20:
            r4 = 0
        L21:
            return r4
    }

    @Override
    public int getInteractionType() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            int r0 = com.kwad.sdk.core.response.b.a.aI(r0)
            return r0
    }

    @Override
    public int getMaterialType() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            int r0 = com.kwad.sdk.core.response.b.a.aW(r0)
            return r0
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.Object> getMediaExtraInfo() {
            r3 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            boolean r1 = com.kwad.sdk.core.config.d.zt()
            if (r1 == 0) goto L18
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            long r1 = r1.llsid
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "llsid"
            r0.put(r2, r1)
        L18:
            return r0
    }

    @Override
    public android.view.View getView2(android.content.Context r4, com.kwad.sdk.api.KsSplashScreenAd.SplashScreenAdInteractionListener r5) {
            r3 = this;
            if (r4 == 0) goto L24
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            boolean r0 = r0.hasInitFinish()
            if (r0 != 0) goto Ld
            goto L24
        Ld:
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r0 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_SPLASH
            java.lang.String r2 = "callShow"
            com.kwad.sdk.core.report.KSLoggerReporter$b r0 = r0.buildMethodCheck(r1, r2)
            r0.report()
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            r1 = 1
            com.kwad.sdk.core.h.b r2 = r3.bJ
            com.kwad.components.ad.splashscreen.c r4 = com.kwad.components.ad.splashscreen.c.a(r4, r0, r1, r2, r5)
            return r4
        L24:
            r4 = 0
            return r4
    }

    @Override
    public boolean isAdEnable() {
            r2 = this;
            com.kwad.components.ad.splashscreen.SplashPreloadManager r0 = com.kwad.components.ad.splashscreen.SplashPreloadManager.kB()
            com.kwad.components.core.response.model.AdResultData r1 = r2.BO
            boolean r0 = r0.c(r1)
            if (r0 != 0) goto L1a
            com.kwad.components.ad.splashscreen.SplashPreloadManager.kB()
            com.kwad.components.core.response.model.AdResultData r0 = r2.BO
            boolean r0 = com.kwad.components.ad.splashscreen.SplashPreloadManager.d(r0)
            if (r0 == 0) goto L18
            goto L1a
        L18:
            r0 = 0
            return r0
        L1a:
            r0 = 1
            return r0
    }

    @Override
    public boolean isVideo() {
            r2 = this;
            com.kwad.components.core.response.model.AdResultData r0 = r2.BO
            java.util.List r0 = r0.getAdTemplateList()
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.kwad.sdk.core.response.model.AdTemplate r0 = (com.kwad.sdk.core.response.model.AdTemplate) r0
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.a.aU(r0)
            return r0
    }

    @Override
    public void reportAdExposureFailed(int r2, com.kwad.sdk.api.model.AdExposureFailedReason r3) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.report.a.a(r0, r2, r3)
            return
    }

    @Override
    public void setBidEcpm(int r5) {
            r4 = this;
            long r0 = (long) r5
            r2 = -1
            r4.setBidEcpm(r0, r2)
            return
    }

    @Override
    public void setBidEcpm(long r2, long r4) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            r0.mBidEcpm = r2
            com.kwad.sdk.core.response.model.AdTemplate r2 = r1.mAdTemplate
            com.kwad.sdk.core.report.a.i(r2, r4)
            return
    }

    public boolean showSplashMiniWindowIfNeeded(android.content.Context r1, com.kwad.sdk.api.KsSplashScreenAd.SplashScreenAdInteractionListener r2, android.graphics.Rect r3) {
            r0 = this;
            r1 = 0
            return r1
    }
}
