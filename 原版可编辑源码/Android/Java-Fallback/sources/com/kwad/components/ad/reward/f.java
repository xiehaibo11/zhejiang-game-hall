package com.kwad.components.ad.reward;

public final class f implements com.kwad.components.core.internal.api.a, com.kwad.sdk.api.KsRewardVideoAd {
    private com.kwad.components.core.internal.api.c bP;
    private final com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private final com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.i.d oH;
    private com.kwad.components.ad.reward.e.g oL;
    public int rewardType;


    public f(com.kwad.sdk.core.response.model.AdTemplate r2) {
            r1 = this;
            r1.<init>()
            com.kwad.components.core.internal.api.c r0 = new com.kwad.components.core.internal.api.c
            r0.<init>()
            r1.bP = r0
            r0 = 1
            r1.rewardType = r0
            r1.mAdTemplate = r2
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            r1.mAdInfo = r2
            com.kwad.components.ad.h.b r2 = com.kwad.components.ad.h.b.fa()
            r2.a(r1)
            return
    }

    static com.kwad.components.core.internal.api.c a(com.kwad.components.ad.reward.f r0) {
            com.kwad.components.core.internal.api.c r0 = r0.bP
            return r0
    }

    private void a(android.app.Activity r9, com.kwad.sdk.api.KsVideoPlayConfig r10) {
            r8 = this;
            r8.fz()
            com.kwad.sdk.core.response.model.AdInfo r0 = r8.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.bK(r0)
            if (r0 == 0) goto L19
            com.kwad.sdk.core.response.model.AdTemplate r10 = r8.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = r8.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.aK(r0)
            com.kwad.components.ad.reward.e.g r1 = r8.oL
            com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy.launch(r9, r10, r0, r1)
            return
        L19:
            com.kwad.sdk.core.response.model.AdTemplate r3 = r8.mAdTemplate
            com.kwad.components.ad.reward.e.g r5 = r8.oL
            com.kwad.components.core.i.d r6 = r8.oH
            int r7 = r8.rewardType
            r2 = r9
            r4 = r10
            com.kwad.components.ad.reward.KSRewardVideoActivityProxy.launch(r2, r3, r4, r5, r6, r7)
            return
    }

    private void fz() {
            r2 = this;
            com.kwad.components.ad.reward.e.g r0 = r2.oL
            boolean r0 = com.kwad.components.ad.reward.c.c.a(r0)
            if (r0 != 0) goto L11
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            if (r0 == 0) goto L11
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r0.adBaseInfo
            r1 = 0
            r0.extraClickReward = r1
        L11:
            return
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
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            int r0 = com.kwad.sdk.core.response.b.a.aJ(r0)
            return r0
    }

    @Override
    public final int getInteractionType() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            int r0 = com.kwad.sdk.core.response.b.a.aI(r0)
            return r0
    }

    @Override
    public final int getMaterialType() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
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
    public final boolean isAdEnable() {
            r1 = this;
            int r0 = com.kwad.sdk.core.config.d.zz()
            if (r0 < 0) goto L8
            r0 = 1
            return r0
        L8:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            boolean r0 = com.kwad.components.core.video.j.k(r0)
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
    public final void setBidEcpm(int r5) {
            r4 = this;
            long r0 = (long) r5
            r2 = -1
            r4.setBidEcpm(r0, r2)
            return
    }

    @Override
    public final void setBidEcpm(long r2, long r4) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            r0.mBidEcpm = r2
            com.kwad.sdk.core.response.model.AdTemplate r2 = r1.mAdTemplate
            com.kwad.sdk.core.report.a.i(r2, r4)
            return
    }

    @Override
    public final void setInnerAdInteractionListener(com.kwad.sdk.api.KsInnerAd.KsInnerAdInteractionListener r2) {
            r1 = this;
            com.kwad.components.core.i.d r0 = new com.kwad.components.core.i.d
            r0.<init>(r2)
            r1.oH = r0
            return
    }

    @Override
    public final void setRewardAdInteractionListener(com.kwad.sdk.api.KsRewardVideoAd.RewardAdInteractionListener r2) {
            r1 = this;
            com.kwad.components.ad.reward.e.g r0 = r1.oL
            if (r0 != 0) goto Lb
            com.kwad.components.ad.reward.f$1 r0 = new com.kwad.components.ad.reward.f$1
            r0.<init>(r1)
            r1.oL = r0
        Lb:
            com.kwad.components.ad.reward.e.g r0 = r1.oL
            r0.b(r2)
            return
    }

    @Override
    public final void setRewardPlayAgainInteractionListener(com.kwad.sdk.api.KsRewardVideoAd.RewardAdInteractionListener r1) {
            r0 = this;
            return
    }

    @Override
    public final void showRewardVideoAd(android.app.Activity r7, com.kwad.sdk.api.KsVideoPlayConfig r8) {
            r6 = this;
            java.lang.String r0 = "KsRewardVideoAdControl"
            if (r7 == 0) goto L43
            boolean r1 = r7.isFinishing()
            if (r1 == 0) goto Lb
            goto L43
        Lb:
            java.lang.String r1 = "show"
            java.lang.String r2 = "reward"
            com.kwad.sdk.i.a.ah(r2, r1)
            r3 = 1
            com.kwad.sdk.core.response.model.AdTemplate r4 = r6.mAdTemplate
            com.kwad.components.ad.reward.monitor.a.a(r3, r4)
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r3 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT
            com.kwai.adclient.kscommerciallogger.model.BusinessType r4 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_REWARD
            java.lang.String r5 = "callShow"
            com.kwad.sdk.core.report.KSLoggerReporter$b r3 = r3.buildMethodCheck(r4, r5)
            r3.report()
            boolean r3 = r6.isAdEnable()
            if (r3 != 0) goto L34
            java.lang.String r7 = "isAdEnable is false"
            com.kwad.sdk.core.e.c.i(r0, r7)
            com.kwad.sdk.i.a.ai(r2, r1)
            return
        L34:
            if (r8 != 0) goto L3f
            com.kwad.sdk.api.KsVideoPlayConfig$Builder r8 = new com.kwad.sdk.api.KsVideoPlayConfig$Builder
            r8.<init>()
            com.kwad.sdk.api.KsVideoPlayConfig r8 = r8.build()
        L3f:
            r6.a(r7, r8)
            return
        L43:
            java.lang.String r7 = "showRewardVideoAd error, activity is null or finished"
            com.kwad.sdk.core.e.c.e(r0, r7)
            return
    }
}
