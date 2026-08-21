package com.qq.e.comm.pi;

interface InnerPOFactory {
    com.qq.e.comm.pi.SVSD getAPKDownloadServiceDelegate(android.app.Service r1);

    com.qq.e.comm.pi.ACTD getActivityDelegate(java.lang.String r1, android.app.Activity r2);

    java.lang.String getBuyerId();

    java.lang.String getBuyerId(java.util.Map<java.lang.String, java.lang.Object> r1);

    com.qq.e.comm.pi.DFA getGDTApkDelegate(com.qq.e.ads.dfa.IGDTApkListener r1);

    com.qq.e.comm.pi.HADI getHybridAD(com.qq.e.ads.hybrid.HybridADSetting r1, com.qq.e.ads.hybrid.HybridADListener r2);

    com.qq.e.comm.pi.NUADI getNativeAdManagerDelegate(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, com.qq.e.comm.adevent.ADListener r5);

    com.qq.e.comm.pi.NEADI getNativeExpressADDelegate(android.content.Context r1, com.qq.e.ads.nativ.ADSize r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, com.qq.e.comm.adevent.ADListener r6);

    com.qq.e.comm.pi.NSPVI getNativeSplashAdView(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4);

    com.qq.e.comm.pi.RVADI getRewardVideoADDelegate(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, com.qq.e.comm.adevent.ADListener r5);

    java.lang.String getSDKInfo(java.lang.String r1);

    com.qq.e.comm.pi.UBVI getUnifiedBannerViewDelegate(com.qq.e.ads.banner2.UnifiedBannerView r1, android.app.Activity r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, com.qq.e.comm.adevent.ADListener r6);

    com.qq.e.comm.pi.UIADI getUnifiedInterstitialADDelegate(android.app.Activity r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, com.qq.e.comm.adevent.ADListener r5);

    int showOpenOrInstallAppDialog(com.qq.e.ads.dfa.GDTAppDialogClickListener r1);
}
