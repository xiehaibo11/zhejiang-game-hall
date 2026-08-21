package com.kwad.components.core;

public final class b implements com.kwad.sdk.api.KsLoadManager {









    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final java.lang.String getBidRequestToken(com.kwad.sdk.api.KsScene r2) {
            r1 = this;
            java.lang.Class<com.kwad.components.ad.b.a> r0 = com.kwad.components.ad.b.a.class
            com.kwad.sdk.components.a r0 = com.kwad.sdk.components.c.f(r0)
            com.kwad.components.ad.b.a r0 = (com.kwad.components.ad.b.a) r0
            if (r0 == 0) goto Lf
            java.lang.String r2 = r0.getBidRequestToken(r2)
            return r2
        Lf:
            java.lang.String r2 = ""
            return r2
    }

    @Override
    public final java.lang.String getBidRequestTokenV2(com.kwad.sdk.api.KsScene r2) {
            r1 = this;
            java.lang.Class<com.kwad.components.ad.b.a> r0 = com.kwad.components.ad.b.a.class
            com.kwad.sdk.components.a r0 = com.kwad.sdk.components.c.f(r0)
            com.kwad.components.ad.b.a r0 = (com.kwad.components.ad.b.a) r0
            if (r0 == 0) goto Lf
            java.lang.String r2 = r0.getBidRequestTokenV2(r2)
            return r2
        Lf:
            java.lang.String r2 = ""
            return r2
    }

    @Override
    public final void loadConfigFeedAd(com.kwad.sdk.api.KsScene r6, com.kwad.sdk.api.KsLoadManager.FeedAdListener r7) {
            r5 = this;
            java.lang.String r0 = "request"
            java.lang.String r1 = "feed"
            com.kwad.sdk.i.a.ah(r1, r0)
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r2 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT
            com.kwai.adclient.kscommerciallogger.model.BusinessType r3 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_FEED
            java.lang.String r4 = "loadRequest"
            com.kwad.sdk.core.report.KSLoggerReporter$b r2 = r2.buildMethodCheck(r3, r4)
            int r3 = r6.getAdNum()
            com.kwad.sdk.core.report.KSLoggerReporter$b r2 = r2.ct(r3)
            r2.report()
            java.lang.Class<com.kwad.components.ad.b.c> r2 = com.kwad.components.ad.b.c.class
            com.kwad.sdk.components.a r2 = com.kwad.sdk.components.c.f(r2)
            com.kwad.components.ad.b.c r2 = (com.kwad.components.ad.b.c) r2
            if (r2 == 0) goto L32
            com.kwad.components.core.b$4 r3 = new com.kwad.components.core.b$4
            r3.<init>(r5, r7)
            r2.loadConfigFeedAd(r6, r3)
            com.kwad.sdk.i.a.ai(r1, r0)
            return
        L32:
            java.lang.Boolean r6 = com.kwad.components.ad.e.a.ml
            boolean r6 = r6.booleanValue()
            if (r6 == 0) goto L43
            com.kwad.sdk.core.network.f r6 = com.kwad.sdk.core.network.f.aoR
            int r0 = r6.errorCode
            java.lang.String r6 = r6.msg
            r7.onError(r0, r6)
        L43:
            return
    }

    @Override
    public final void loadDrawAd(com.kwad.sdk.api.KsScene r5, com.kwad.sdk.api.KsLoadManager.DrawAdListener r6) {
            r4 = this;
            java.lang.String r0 = "request"
            java.lang.String r1 = "draw"
            com.kwad.sdk.i.a.ah(r1, r0)
            java.lang.Class<com.kwad.components.ad.b.b> r2 = com.kwad.components.ad.b.b.class
            com.kwad.sdk.components.a r2 = com.kwad.sdk.components.c.f(r2)
            com.kwad.components.ad.b.b r2 = (com.kwad.components.ad.b.b) r2
            if (r2 == 0) goto L1d
            com.kwad.components.core.b$5 r3 = new com.kwad.components.core.b$5
            r3.<init>(r4, r6)
            r2.loadDrawAd(r5, r3)
            com.kwad.sdk.i.a.ai(r1, r0)
            return
        L1d:
            java.lang.Boolean r5 = com.kwad.components.ad.e.a.ml
            boolean r5 = r5.booleanValue()
            if (r5 == 0) goto L2e
            com.kwad.sdk.core.network.f r5 = com.kwad.sdk.core.network.f.aoR
            int r0 = r5.errorCode
            java.lang.String r5 = r5.msg
            r6.onError(r0, r5)
        L2e:
            return
    }

    @Override
    public final void loadFeedAd(com.kwad.sdk.api.KsScene r6, com.kwad.sdk.api.KsLoadManager.FeedAdListener r7) {
            r5 = this;
            java.lang.String r0 = "request"
            java.lang.String r1 = "feed"
            com.kwad.sdk.i.a.ah(r1, r0)
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r2 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT
            com.kwai.adclient.kscommerciallogger.model.BusinessType r3 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_FEED
            java.lang.String r4 = "loadRequest"
            com.kwad.sdk.core.report.KSLoggerReporter$b r2 = r2.buildMethodCheck(r3, r4)
            int r3 = r6.getAdNum()
            com.kwad.sdk.core.report.KSLoggerReporter$b r2 = r2.ct(r3)
            r2.report()
            java.lang.Class<com.kwad.components.ad.b.c> r2 = com.kwad.components.ad.b.c.class
            com.kwad.sdk.components.a r2 = com.kwad.sdk.components.c.f(r2)
            com.kwad.components.ad.b.c r2 = (com.kwad.components.ad.b.c) r2
            if (r2 == 0) goto L32
            com.kwad.components.core.b$3 r3 = new com.kwad.components.core.b$3
            r3.<init>(r5, r7)
            r2.loadFeedAd(r6, r3)
            com.kwad.sdk.i.a.ai(r1, r0)
            return
        L32:
            java.lang.Boolean r6 = com.kwad.components.ad.e.a.ml
            boolean r6 = r6.booleanValue()
            if (r6 == 0) goto L43
            com.kwad.sdk.core.network.f r6 = com.kwad.sdk.core.network.f.aoR
            int r0 = r6.errorCode
            java.lang.String r6 = r6.msg
            r7.onError(r0, r6)
        L43:
            return
    }

    @Override
    public final void loadFullScreenVideoAd(com.kwad.sdk.api.KsScene r6, com.kwad.sdk.api.KsLoadManager.FullScreenVideoAdListener r7) {
            r5 = this;
            java.lang.String r0 = "request"
            java.lang.String r1 = "fullscreen"
            com.kwad.sdk.i.a.ah(r1, r0)
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r2 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT
            com.kwai.adclient.kscommerciallogger.model.BusinessType r3 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_FULLSCREEN
            java.lang.String r4 = "loadRequest"
            com.kwad.sdk.core.report.KSLoggerReporter$b r2 = r2.buildMethodCheck(r3, r4)
            r2.report()
            java.lang.Class<com.kwad.components.ad.b.d> r2 = com.kwad.components.ad.b.d.class
            com.kwad.sdk.components.a r2 = com.kwad.sdk.components.c.f(r2)
            com.kwad.components.ad.b.d r2 = (com.kwad.components.ad.b.d) r2
            if (r2 == 0) goto L2a
            com.kwad.components.core.b$1 r3 = new com.kwad.components.core.b$1
            r3.<init>(r5, r7)
            r2.loadFullScreenVideoAd(r6, r3)
            com.kwad.sdk.i.a.ai(r1, r0)
            return
        L2a:
            java.lang.Boolean r6 = com.kwad.components.ad.e.a.ml
            boolean r6 = r6.booleanValue()
            if (r6 == 0) goto L3b
            com.kwad.sdk.core.network.f r6 = com.kwad.sdk.core.network.f.aoR
            int r0 = r6.errorCode
            java.lang.String r6 = r6.msg
            r7.onError(r0, r6)
        L3b:
            return
    }

    @Override
    public final void loadInterstitialAd(com.kwad.sdk.api.KsScene r6, com.kwad.sdk.api.KsLoadManager.InterstitialAdListener r7) {
            r5 = this;
            java.lang.String r0 = "request"
            java.lang.String r1 = "interstitial"
            com.kwad.sdk.i.a.ah(r1, r0)
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r2 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT
            com.kwai.adclient.kscommerciallogger.model.BusinessType r3 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_INTERSTITIAL
            java.lang.String r4 = "loadRequest"
            com.kwad.sdk.core.report.KSLoggerReporter$b r2 = r2.buildMethodCheck(r3, r4)
            r2.report()
            java.lang.Class<com.kwad.components.ad.b.e> r2 = com.kwad.components.ad.b.e.class
            com.kwad.sdk.components.a r2 = com.kwad.sdk.components.c.f(r2)
            com.kwad.components.ad.b.e r2 = (com.kwad.components.ad.b.e) r2
            if (r2 == 0) goto L2a
            com.kwad.components.core.b$8 r3 = new com.kwad.components.core.b$8
            r3.<init>(r5, r7)
            r2.loadInterstitialAd(r6, r3)
            com.kwad.sdk.i.a.ai(r1, r0)
            return
        L2a:
            java.lang.Boolean r6 = com.kwad.components.ad.e.a.ml
            boolean r6 = r6.booleanValue()
            if (r6 == 0) goto L3b
            com.kwad.sdk.core.network.f r6 = com.kwad.sdk.core.network.f.aoR
            int r0 = r6.errorCode
            java.lang.String r6 = r6.msg
            r7.onError(r0, r6)
        L3b:
            return
    }

    @Override
    public final void loadNativeAd(com.kwad.sdk.api.KsScene r6, com.kwad.sdk.api.KsLoadManager.NativeAdListener r7) {
            r5 = this;
            java.lang.String r0 = "request"
            java.lang.String r1 = "native"
            com.kwad.sdk.i.a.ah(r1, r0)
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r2 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT
            com.kwai.adclient.kscommerciallogger.model.BusinessType r3 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_NATIVE
            java.lang.String r4 = "loadRequest"
            com.kwad.sdk.core.report.KSLoggerReporter$b r2 = r2.buildMethodCheck(r3, r4)
            int r3 = r6.getAdNum()
            com.kwad.sdk.core.report.KSLoggerReporter$b r2 = r2.ct(r3)
            r2.report()
            java.lang.Class<com.kwad.components.ad.b.f> r2 = com.kwad.components.ad.b.f.class
            com.kwad.sdk.components.a r2 = com.kwad.sdk.components.c.f(r2)
            com.kwad.components.ad.b.f r2 = (com.kwad.components.ad.b.f) r2
            if (r2 == 0) goto L32
            com.kwad.components.core.b$6 r3 = new com.kwad.components.core.b$6
            r3.<init>(r5, r7)
            r2.loadNativeAd(r6, r3)
            com.kwad.sdk.i.a.ai(r1, r0)
            return
        L32:
            java.lang.Boolean r6 = com.kwad.components.ad.e.a.ml
            boolean r6 = r6.booleanValue()
            if (r6 == 0) goto L43
            com.kwad.sdk.core.network.f r6 = com.kwad.sdk.core.network.f.aoR
            int r0 = r6.errorCode
            java.lang.String r6 = r6.msg
            r7.onError(r0, r6)
        L43:
            return
    }

    @Override
    public final void loadNativeAd(java.lang.String r4, com.kwad.sdk.api.KsLoadManager.NativeAdListener r5) {
            r3 = this;
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r0 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT
            com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_NATIVE
            java.lang.String r2 = "loadRequest"
            com.kwad.sdk.core.report.KSLoggerReporter$b r0 = r0.buildMethodCheck(r1, r2)
            r1 = 1
            com.kwad.sdk.core.report.KSLoggerReporter$b r0 = r0.be(r1)
            r0.report()
            java.lang.Class<com.kwad.components.ad.b.f> r0 = com.kwad.components.ad.b.f.class
            com.kwad.sdk.components.a r0 = com.kwad.sdk.components.c.f(r0)
            com.kwad.components.ad.b.f r0 = (com.kwad.components.ad.b.f) r0
            if (r0 == 0) goto L20
            r0.loadNativeAd(r4, r5)
            return
        L20:
            java.lang.Boolean r4 = com.kwad.components.ad.e.a.ml
            boolean r4 = r4.booleanValue()
            if (r4 == 0) goto L31
            com.kwad.sdk.core.network.f r4 = com.kwad.sdk.core.network.f.aoR
            int r0 = r4.errorCode
            java.lang.String r4 = r4.msg
            r5.onError(r0, r4)
        L31:
            return
    }

    @Override
    public final void loadRewardVideoAd(com.kwad.sdk.api.KsScene r6, com.kwad.sdk.api.KsLoadManager.RewardVideoAdListener r7) {
            r5 = this;
            java.lang.String r0 = "request"
            java.lang.String r1 = "reward"
            com.kwad.sdk.i.a.ah(r1, r0)
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r2 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT
            com.kwai.adclient.kscommerciallogger.model.BusinessType r3 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_REWARD
            java.lang.String r4 = "loadRequest"
            com.kwad.sdk.core.report.KSLoggerReporter$b r2 = r2.buildMethodCheck(r3, r4)
            r2.report()
            java.lang.Class<com.kwad.components.ad.b.g> r2 = com.kwad.components.ad.b.g.class
            com.kwad.sdk.components.a r2 = com.kwad.sdk.components.c.f(r2)
            com.kwad.components.ad.b.g r2 = (com.kwad.components.ad.b.g) r2
            if (r2 == 0) goto L27
            com.kwad.components.core.b$2 r3 = new com.kwad.components.core.b$2
            r3.<init>(r5, r7)
            r2.loadRewardVideoAd(r6, r3)
            goto L38
        L27:
            java.lang.Boolean r6 = com.kwad.components.ad.e.a.ml
            boolean r6 = r6.booleanValue()
            if (r6 == 0) goto L38
            com.kwad.sdk.core.network.f r6 = com.kwad.sdk.core.network.f.aoR
            int r2 = r6.errorCode
            java.lang.String r6 = r6.msg
            r7.onError(r2, r6)
        L38:
            com.kwad.sdk.i.a.ai(r1, r0)
            return
    }

    @Override
    public final void loadSplashScreenAd(com.kwad.sdk.api.KsScene r6, com.kwad.sdk.api.KsLoadManager.SplashScreenAdListener r7) {
            r5 = this;
            java.lang.String r0 = "request"
            java.lang.String r1 = "splash"
            com.kwad.sdk.i.a.ah(r1, r0)
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r2 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT
            com.kwai.adclient.kscommerciallogger.model.BusinessType r3 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_SPLASH
            java.lang.String r4 = "loadRequest"
            com.kwad.sdk.core.report.KSLoggerReporter$b r2 = r2.buildMethodCheck(r3, r4)
            r2.report()
            java.lang.Class<com.kwad.components.ad.b.h> r2 = com.kwad.components.ad.b.h.class
            com.kwad.sdk.components.a r2 = com.kwad.sdk.components.c.f(r2)
            com.kwad.components.ad.b.h r2 = (com.kwad.components.ad.b.h) r2
            if (r2 == 0) goto L2a
            com.kwad.components.core.b$7 r3 = new com.kwad.components.core.b$7
            r3.<init>(r5, r7)
            r2.loadSplashScreenAd(r6, r3)
            com.kwad.sdk.i.a.ai(r1, r0)
            return
        L2a:
            java.lang.Boolean r6 = com.kwad.components.ad.e.a.ml
            boolean r6 = r6.booleanValue()
            if (r6 == 0) goto L3b
            com.kwad.sdk.core.network.f r6 = com.kwad.sdk.core.network.f.aoR
            int r0 = r6.errorCode
            java.lang.String r6 = r6.msg
            r7.onError(r0, r6)
        L3b:
            return
    }

    @Override
    public final boolean showInstallDialog(android.app.Activity r2, com.kwad.sdk.api.KsExitInstallListener r3) {
            r1 = this;
            java.lang.Class<com.kwad.components.ad.b.a> r0 = com.kwad.components.ad.b.a.class
            com.kwad.sdk.components.a r0 = com.kwad.sdk.components.c.f(r0)
            com.kwad.components.ad.b.a r0 = (com.kwad.components.ad.b.a) r0
            if (r0 == 0) goto Lf
            boolean r2 = r0.showInstallDialog(r2, r3)
            return r2
        Lf:
            r2 = 0
            return r2
    }
}
