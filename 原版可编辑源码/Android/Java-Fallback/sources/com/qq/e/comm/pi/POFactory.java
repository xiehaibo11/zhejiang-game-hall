package com.qq.e.comm.pi;

public interface POFactory extends com.qq.e.comm.pi.InnerPOFactory {
    @Override
    com.qq.e.comm.pi.SVSD getAPKDownloadServiceDelegate(android.app.Service r1);

    @Override
    com.qq.e.comm.pi.ACTD getActivityDelegate(java.lang.String r1, android.app.Activity r2);

    @Override
    java.lang.String getBuyerId(java.util.Map<java.lang.String, java.lang.Object> r1);

    @Override
    com.qq.e.comm.pi.DFA getGDTApkDelegate(com.qq.e.ads.dfa.IGDTApkListener r1);

    @Override
    com.qq.e.comm.pi.HADI getHybridAD(com.qq.e.ads.hybrid.HybridADSetting r1, com.qq.e.ads.hybrid.HybridADListener r2);

    @Override
    com.qq.e.comm.pi.NUADI getNativeAdManagerDelegate(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, com.qq.e.comm.adevent.ADListener r5);

    @Override
    com.qq.e.comm.pi.NEADI getNativeExpressADDelegate(android.content.Context r1, com.qq.e.ads.nativ.ADSize r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, com.qq.e.comm.adevent.ADListener r6);

    @Override
    com.qq.e.comm.pi.NSPVI getNativeSplashAdView(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4);

    @Override
    com.qq.e.comm.pi.RVADI getRewardVideoADDelegate(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, com.qq.e.comm.adevent.ADListener r5);

    @Override
    java.lang.String getSDKInfo(java.lang.String r1);

    @Override
    com.qq.e.comm.pi.UBVI getUnifiedBannerViewDelegate(com.qq.e.ads.banner2.UnifiedBannerView r1, android.app.Activity r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, com.qq.e.comm.adevent.ADListener r6);

    @Override
    com.qq.e.comm.pi.UIADI getUnifiedInterstitialADDelegate(android.app.Activity r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, com.qq.e.comm.adevent.ADListener r5);

    @Override
    int showOpenOrInstallAppDialog(com.qq.e.ads.dfa.GDTAppDialogClickListener r1);
}
