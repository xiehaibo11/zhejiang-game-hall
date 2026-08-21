package com.kwad.components.ad.interstitial;

public final class b implements com.kwad.components.core.internal.api.a, com.kwad.sdk.api.KsInterstitialAd {
    private com.kwad.components.core.internal.api.c bP;
    private com.kwad.sdk.api.KsScene hq;
    private com.kwad.components.ad.interstitial.c hr;
    private com.kwad.components.ad.interstitial.d hs;
    private final com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;


    public b(com.kwad.sdk.api.KsScene r2, com.kwad.sdk.core.response.model.AdTemplate r3) {
            r1 = this;
            r1.<init>()
            com.kwad.components.core.internal.api.c r0 = new com.kwad.components.core.internal.api.c
            r0.<init>()
            r1.bP = r0
            r1.hq = r2
            r1.mAdTemplate = r3
            com.kwad.components.ad.h.b r2 = com.kwad.components.ad.h.b.fa()
            r2.a(r1)
            return
    }

    static com.kwad.components.core.internal.api.c a(com.kwad.components.ad.interstitial.b r0) {
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
            r0 = 1
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
    public final int getECPM() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            int r0 = com.kwad.sdk.core.response.b.a.aJ(r0)
            return r0
    }

    @Override
    public final int getInteractionType() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            int r0 = com.kwad.sdk.core.response.b.a.aI(r0)
            return r0
    }

    @Override
    public final int getMaterialType() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            int r0 = com.kwad.sdk.core.response.b.a.aW(r0)
            return r0
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.Object> getMediaExtraInfo() {
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
    public final boolean isVideo() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.a.aU(r0)
            return r0
    }

    @Override
    public final void reportAdExposureFailed(int r2, com.kwad.sdk.api.model.AdExposureFailedReason r3) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.report.a.a(r0, r2, r3)
            return
    }

    @Override
    public final void setAdInteractionListener(com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener r2) {
            r1 = this;
            com.kwad.components.ad.interstitial.c r0 = r1.hr
            if (r0 != 0) goto Lb
            com.kwad.components.ad.interstitial.b$1 r0 = new com.kwad.components.ad.interstitial.b$1
            r0.<init>(r1)
            r1.hr = r0
        Lb:
            com.kwad.components.ad.interstitial.c r0 = r1.hr
            r0.a(r2)
            com.kwad.components.ad.interstitial.d r2 = r1.hs
            if (r2 == 0) goto L19
            com.kwad.components.ad.interstitial.c r0 = r1.hr
            r2.setAdInteractionListener(r0)
        L19:
            return
    }

    @Override
    public final void setBidEcpm(int r5) {
            r4 = this;
            long r0 = (long) r5
            r2 = -1
            r4.setBidEcpm(r0, r2)
            return
    }

    @Override
    public final void setBidEcpm(long r1, long r3) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdTemplate r3 = r0.mAdTemplate
            r3.mBidEcpm = r1
            com.kwad.sdk.core.response.model.AdTemplate r3 = r0.mAdTemplate
            com.kwad.sdk.core.report.a.i(r3, r1)
            return
    }

    @Override
    public final void showInterstitialAd(android.app.Activity r4, com.kwad.sdk.api.KsVideoPlayConfig r5) {
            r3 = this;
            java.lang.String r0 = "StayAdHelper"
            if (r4 == 0) goto L7b
            boolean r1 = r4.isFinishing()
            if (r1 == 0) goto Lb
            goto L7b
        Lb:
            com.kwad.sdk.KsAdSDKImpl r1 = com.kwad.sdk.KsAdSDKImpl.get()
            boolean r1 = r1.hasInitFinish()
            if (r1 != 0) goto L1a
            java.lang.String r1 = "showInterstitialAd please init sdk first"
            com.kwad.sdk.core.e.c.e(r0, r1)
        L1a:
            if (r5 != 0) goto L25
            com.kwad.sdk.api.KsVideoPlayConfig$Builder r5 = new com.kwad.sdk.api.KsVideoPlayConfig$Builder
            r5.<init>()
            com.kwad.sdk.api.KsVideoPlayConfig r5 = r5.build()
        L25:
            java.lang.String r0 = "interstitial"
            java.lang.String r1 = "show"
            com.kwad.sdk.i.a.ah(r0, r1)
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r0 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_INTERSTITIAL
            java.lang.String r2 = "callShow"
            com.kwad.sdk.core.report.KSLoggerReporter$b r0 = r0.buildMethodCheck(r1, r2)
            r0.report()
            com.kwad.components.ad.interstitial.monitor.b.cL()
            com.kwad.sdk.api.KsScene r0 = r3.hq
            long r0 = r0.getPosId()
            com.kwad.components.ad.interstitial.monitor.b.h(r0)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            long r1 = android.os.SystemClock.elapsedRealtime()
            r0.adShowStartTimeStamp = r1
            boolean r0 = r5.isVideoSoundEnable()
            r1 = 1
            if (r0 == 0) goto L5a
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            r2 = 2
            r0.mInitVoiceStatus = r2
            goto L5e
        L5a:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            r0.mInitVoiceStatus = r1
        L5e:
            com.kwad.sdk.a.a.c r0 = com.kwad.sdk.a.a.c.yb()
            r0.bc(r1)
            com.kwad.components.ad.interstitial.d r0 = r3.hs
            if (r0 != 0) goto L7a
            com.kwad.components.ad.interstitial.d r0 = new com.kwad.components.ad.interstitial.d
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.components.ad.interstitial.c r2 = r3.hr
            r0.<init>(r4, r1, r5, r2)
            r3.hs = r0
            r0.show()
            com.kwad.components.ad.interstitial.b.b.J(r4)
        L7a:
            return
        L7b:
            java.lang.String r4 = "showInterstitialAd activity must not be null"
            com.kwad.sdk.core.e.c.e(r0, r4)
            return
    }
}
