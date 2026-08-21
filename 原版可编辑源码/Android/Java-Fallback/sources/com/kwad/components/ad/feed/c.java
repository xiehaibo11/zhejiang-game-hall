package com.kwad.components.ad.feed;

public final class c extends com.kwad.sdk.api.core.AbstractKsFeedAd implements com.kwad.components.core.internal.api.a {
    private com.kwad.sdk.core.h.b bJ;
    private com.kwad.components.core.internal.api.c bP;
    private com.kwad.sdk.api.KsFeedAd.AdInteractionListener dG;
    private com.kwad.components.core.widget.b dH;
    private boolean dI;
    private final com.kwad.sdk.api.KsAdVideoPlayConfig dJ;
    private final com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private final com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;




    public interface a {
        void c(int r1, java.lang.String r2);
    }

    public c(com.kwad.sdk.core.response.model.AdTemplate r2, boolean r3) {
            r1 = this;
            r1.<init>()
            com.kwad.components.core.internal.api.c r0 = new com.kwad.components.core.internal.api.c
            r0.<init>()
            r1.bP = r0
            com.kwad.components.ad.feed.c$1 r0 = new com.kwad.components.ad.feed.c$1
            r0.<init>(r1)
            r1.bJ = r0
            r1.mAdTemplate = r2
            r0 = 1
            r2.mInitVoiceStatus = r0
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            r1.mAdInfo = r2
            r1.dI = r3
            com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl r2 = new com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl
            r2.<init>()
            r1.dJ = r2
            com.kwad.components.ad.h.b r2 = com.kwad.components.ad.h.b.fa()
            r2.a(r1)
            return
    }

    private com.kwad.components.core.widget.b<?> E(android.content.Context r3) {
            r2 = this;
            boolean r0 = r2.dI
            if (r0 == 0) goto L2c
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.b.bw(r0)
            if (r0 == 0) goto L2c
            android.content.Context r3 = com.kwad.sdk.m.l.wrapContextIfNeed(r3)     // Catch: java.lang.Throwable -> L26
            com.kwad.components.ad.feed.b.m r0 = new com.kwad.components.ad.feed.b.m     // Catch: java.lang.Throwable -> L26
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L26
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate     // Catch: java.lang.Throwable -> L26
            com.kwad.sdk.internal.api.SceneImpl r1 = r1.mAdScene     // Catch: java.lang.Throwable -> L26
            int r1 = r1.getWidth()     // Catch: java.lang.Throwable -> L26
            r0.setWidth(r1)     // Catch: java.lang.Throwable -> L26
            com.kwad.sdk.api.KsAdVideoPlayConfig r1 = r2.dJ     // Catch: java.lang.Throwable -> L26
            r0.setVideoPlayConfig(r1)     // Catch: java.lang.Throwable -> L26
            goto L3e
        L26:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            r0 = 0
            goto L3e
        L2c:
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            int r0 = com.kwad.sdk.core.response.b.a.aW(r0)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            int r1 = r1.type
            com.kwad.components.model.FeedType r1 = com.kwad.components.model.FeedType.fromInt(r1)
            com.kwad.components.core.widget.b r0 = com.kwad.components.ad.feed.b.a(r3, r1, r0)
        L3e:
            if (r0 == 0) goto L4e
            r1 = 1098907648(0x41800000, float:16.0)
            int r3 = com.kwad.sdk.d.a.a.a(r3, r1)
            r0.setMargin(r3)
            com.kwad.sdk.core.h.b r3 = r2.bJ
            r0.setPageExitListener(r3)
        L4e:
            return r0
    }

    static com.kwad.components.core.internal.api.c a(com.kwad.components.ad.feed.c r0) {
            com.kwad.components.core.internal.api.c r0 = r0.bP
            return r0
    }

    static void a(com.kwad.components.ad.feed.c r0, com.kwad.components.core.widget.b r1, boolean r2) {
            r2 = 0
            r0.a(r1, r2)
            return
    }

    private void a(com.kwad.components.core.widget.b r2, boolean r3) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            com.kwad.components.ad.feed.c$3 r0 = new com.kwad.components.ad.feed.c$3
            r0.<init>(r1, r3, r2)
            r2.setInnerAdInteractionListener(r0)
            return
    }

    private void aQ() {
            r4 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            if (r0 == 0) goto L1d
            com.kwad.sdk.core.diskcache.b.a r0 = com.kwad.sdk.core.diskcache.b.a.Au()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "feed_ad_cache_"
            r1.<init>(r2)
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.mAdTemplate
            long r2 = r2.posId
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.remove(r1)
        L1d:
            return
    }

    static com.kwad.components.core.widget.b b(com.kwad.components.ad.feed.c r0) {
            com.kwad.components.core.widget.b r0 = r0.dH
            return r0
    }

    static com.kwad.sdk.api.KsFeedAd.AdInteractionListener c(com.kwad.components.ad.feed.c r0) {
            com.kwad.sdk.api.KsFeedAd$AdInteractionListener r0 = r0.dG
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate d(com.kwad.components.ad.feed.c r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    private boolean isVideoSoundEnable() {
            r2 = this;
            com.kwad.sdk.api.KsAdVideoPlayConfig r0 = r2.dJ
            boolean r1 = r0 instanceof com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl
            if (r1 == 0) goto L13
            com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl r0 = (com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl) r0
            int r1 = r0.getVideoSoundValue()
            if (r1 == 0) goto L13
            boolean r0 = r0.isVideoSoundEnable()
            return r0
        L13:
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.bH(r0)
            return r0
    }

    public final void a(com.kwad.components.ad.feed.c.a r7) {
            r6 = this;
            java.lang.String r0 = "feed_preload_view"
            java.lang.String r1 = "show"
            java.lang.String r2 = "feed"
            com.kwad.sdk.i.a.e(r2, r1, r0)
            android.content.Context r3 = com.kwad.sdk.service.ServiceProvider.getContext()
            com.kwad.components.core.widget.b r3 = r6.E(r3)
            r6.dH = r3
            r4 = 1
            if (r3 == 0) goto L41
            boolean r5 = r3 instanceof com.kwad.components.ad.feed.b.m
            if (r5 == 0) goto L2a
            com.kwad.components.ad.feed.b.m r3 = (com.kwad.components.ad.feed.b.m) r3
            com.kwad.components.ad.feed.c$2 r4 = new com.kwad.components.ad.feed.c$2
            r4.<init>(r6, r7)
            r3.setPreloadListener(r4)
            com.kwad.sdk.core.response.model.AdTemplate r7 = r6.mAdTemplate
            r3.b(r7)
            goto L46
        L2a:
            com.kwad.sdk.core.response.model.AdTemplate r5 = r6.mAdTemplate
            r3.b(r5)
            com.kwad.components.core.widget.b r3 = r6.dH
            boolean r5 = r3 instanceof com.kwad.components.ad.feed.b.c
            if (r5 == 0) goto L3c
            com.kwad.components.ad.feed.b.c r3 = (com.kwad.components.ad.feed.b.c) r3
            com.kwad.sdk.api.KsAdVideoPlayConfig r5 = r6.dJ
            r3.a(r5)
        L3c:
            com.kwad.components.core.widget.b r3 = r6.dH
            r6.a(r3, r4)
        L41:
            java.lang.String r3 = ""
            r7.c(r4, r3)
        L46:
            com.kwad.sdk.i.a.f(r2, r1, r0)
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
    public final android.view.View getFeedView2(android.content.Context r7) {
            r6 = this;
            java.lang.String r0 = "show"
            java.lang.String r1 = "feed"
            r2 = 0
            if (r7 == 0) goto L94
            com.kwad.sdk.KsAdSDKImpl r3 = com.kwad.sdk.KsAdSDKImpl.get()
            boolean r3 = r3.hasInitFinish()
            if (r3 != 0) goto L13
            goto L94
        L13:
            android.content.Context r7 = com.kwad.sdk.m.l.wrapContextIfNeed(r7)     // Catch: java.lang.Throwable -> L84
            com.kwad.sdk.i.a.ah(r1, r0)     // Catch: java.lang.Throwable -> L84
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r3 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT     // Catch: java.lang.Throwable -> L84
            com.kwai.adclient.kscommerciallogger.model.BusinessType r4 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_FEED     // Catch: java.lang.Throwable -> L84
            java.lang.String r5 = "callShow"
            com.kwad.sdk.core.report.KSLoggerReporter$b r3 = r3.buildMethodCheck(r4, r5)     // Catch: java.lang.Throwable -> L84
            r3.report()     // Catch: java.lang.Throwable -> L84
            com.kwad.components.core.widget.b r3 = r6.dH     // Catch: java.lang.Throwable -> L84
            if (r3 == 0) goto L48
            com.kwad.components.core.widget.b r7 = r6.dH     // Catch: java.lang.Throwable -> L84
            android.view.ViewParent r7 = r7.getParent()     // Catch: java.lang.Throwable -> L84
            boolean r7 = r7 instanceof android.view.ViewGroup     // Catch: java.lang.Throwable -> L84
            if (r7 == 0) goto L42
            com.kwad.components.core.widget.b r7 = r6.dH     // Catch: java.lang.Throwable -> L84
            android.view.ViewParent r7 = r7.getParent()     // Catch: java.lang.Throwable -> L84
            android.view.ViewGroup r7 = (android.view.ViewGroup) r7     // Catch: java.lang.Throwable -> L84
            com.kwad.components.core.widget.b r3 = r6.dH     // Catch: java.lang.Throwable -> L84
            r7.removeView(r3)     // Catch: java.lang.Throwable -> L84
        L42:
            com.kwad.sdk.i.a.ai(r1, r0)     // Catch: java.lang.Throwable -> L84
            com.kwad.components.core.widget.b r7 = r6.dH     // Catch: java.lang.Throwable -> L84
            return r7
        L48:
            r6.aQ()     // Catch: java.lang.Throwable -> L84
            com.kwad.components.core.widget.b r7 = r6.E(r7)     // Catch: java.lang.Throwable -> L84
            r6.dH = r7     // Catch: java.lang.Throwable -> L84
            if (r7 != 0) goto L57
            com.kwad.sdk.i.a.ai(r1, r0)     // Catch: java.lang.Throwable -> L84
            return r2
        L57:
            com.kwad.sdk.core.response.model.AdTemplate r3 = r6.mAdTemplate     // Catch: java.lang.Throwable -> L84
            r7.b(r3)     // Catch: java.lang.Throwable -> L84
            com.kwad.components.core.widget.b r7 = r6.dH     // Catch: java.lang.Throwable -> L84
            boolean r7 = r7 instanceof com.kwad.components.ad.feed.b.c     // Catch: java.lang.Throwable -> L84
            if (r7 == 0) goto L6b
            com.kwad.components.core.widget.b r7 = r6.dH     // Catch: java.lang.Throwable -> L84
            com.kwad.components.ad.feed.b.c r7 = (com.kwad.components.ad.feed.b.c) r7     // Catch: java.lang.Throwable -> L84
            com.kwad.sdk.api.KsAdVideoPlayConfig r3 = r6.dJ     // Catch: java.lang.Throwable -> L84
            r7.a(r3)     // Catch: java.lang.Throwable -> L84
        L6b:
            com.kwad.components.core.widget.b r7 = r6.dH     // Catch: java.lang.Throwable -> L84
            boolean r7 = r7 instanceof com.kwad.components.ad.feed.b.m     // Catch: java.lang.Throwable -> L84
            if (r7 == 0) goto L78
            com.kwad.components.core.widget.b r7 = r6.dH     // Catch: java.lang.Throwable -> L84
            r3 = 0
            r6.a(r7, r3)     // Catch: java.lang.Throwable -> L84
            goto L7e
        L78:
            com.kwad.components.core.widget.b r7 = r6.dH     // Catch: java.lang.Throwable -> L84
            r3 = 1
            r6.a(r7, r3)     // Catch: java.lang.Throwable -> L84
        L7e:
            com.kwad.sdk.i.a.ai(r1, r0)     // Catch: java.lang.Throwable -> L84
            com.kwad.components.core.widget.b r7 = r6.dH     // Catch: java.lang.Throwable -> L84
            return r7
        L84:
            r7 = move-exception
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            boolean r0 = r0.getIsExternal()
            if (r0 == 0) goto L93
            com.kwad.components.core.d.a.b(r7)
            return r2
        L93:
            throw r7
        L94:
            return r2
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
    public final void reportAdExposureFailed(int r2, com.kwad.sdk.api.model.AdExposureFailedReason r3) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.report.a.a(r0, r2, r3)
            return
    }

    @Override
    public final void setAdInteractionListener(com.kwad.sdk.api.KsFeedAd.AdInteractionListener r1) {
            r0 = this;
            r0.dG = r1
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
    public final void setVideoPlayConfig(com.kwad.sdk.api.KsAdVideoPlayConfig r3) {
            r2 = this;
            boolean r0 = r3 instanceof com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl
            if (r0 == 0) goto L57
            com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl r3 = (com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl) r3
            int r0 = r3.getVideoSoundValue()
            if (r0 == 0) goto L15
            com.kwad.sdk.api.KsAdVideoPlayConfig r0 = r2.dJ
            boolean r1 = r3.isVideoSoundEnable()
            r0.setVideoSoundEnable(r1)
        L15:
            int r0 = r3.getVideoAutoPlayType()
            if (r0 == 0) goto L24
            com.kwad.sdk.api.KsAdVideoPlayConfig r0 = r2.dJ
            int r1 = r3.getVideoAutoPlayType()
            r0.setVideoAutoPlayType(r1)
        L24:
            int r0 = r3.getDataFlowAutoStartValue()
            if (r0 == 0) goto L34
            com.kwad.sdk.api.KsAdVideoPlayConfig r0 = r2.dJ
            boolean r3 = r3.isDataFlowAutoStart()
            r0.setDataFlowAutoStart(r3)
            goto L3d
        L34:
            com.kwad.sdk.api.KsAdVideoPlayConfig r3 = r2.dJ
            boolean r0 = com.kwad.sdk.core.config.d.zA()
            r3.setDataFlowAutoStart(r0)
        L3d:
            com.kwad.components.core.widget.b r3 = r2.dH
            boolean r0 = r3 instanceof com.kwad.components.ad.feed.b.m
            if (r0 == 0) goto L4a
            com.kwad.components.ad.feed.b.m r3 = (com.kwad.components.ad.feed.b.m) r3
            com.kwad.sdk.api.KsAdVideoPlayConfig r0 = r2.dJ
            r3.setVideoPlayConfig(r0)
        L4a:
            com.kwad.components.core.widget.b r3 = r2.dH
            boolean r0 = r3 instanceof com.kwad.components.ad.feed.b.c
            if (r0 == 0) goto L57
            com.kwad.components.ad.feed.b.c r3 = (com.kwad.components.ad.feed.b.c) r3
            com.kwad.sdk.api.KsAdVideoPlayConfig r0 = r2.dJ
            r3.setVideoPlayConfig(r0)
        L57:
            boolean r3 = r2.isVideoSoundEnable()
            if (r3 == 0) goto L63
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            r0 = 2
        L60:
            r3.mInitVoiceStatus = r0
            return
        L63:
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            r0 = 1
            goto L60
    }

    @Override
    public final void setVideoSoundEnable(boolean r2) {
            r1 = this;
            com.kwad.sdk.api.KsAdVideoPlayConfig r0 = r1.dJ
            r0.setVideoSoundEnable(r2)
            com.kwad.sdk.api.KsAdVideoPlayConfig r2 = r1.dJ
            boolean r2 = r2.isVideoSoundEnable()
            if (r2 == 0) goto L13
            com.kwad.sdk.core.response.model.AdTemplate r2 = r1.mAdTemplate
            r0 = 2
        L10:
            r2.mInitVoiceStatus = r0
            return
        L13:
            com.kwad.sdk.core.response.model.AdTemplate r2 = r1.mAdTemplate
            r0 = 1
            goto L10
    }
}
