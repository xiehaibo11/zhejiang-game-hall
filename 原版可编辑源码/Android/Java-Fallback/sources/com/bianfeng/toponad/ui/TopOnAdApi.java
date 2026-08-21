package com.bianfeng.toponad.ui;

public class TopOnAdApi {
    private static com.bianfeng.toponad.ui.TopOnBannerView bannerView;
    private static com.bianfeng.toponad.ui.TopOnAdInterstialnd interstialnd;
    private static com.bianfeng.toponad.ui.TopOnNativeAdView nativeAdView;
    private static com.bianfeng.toponad.ui.TopOnAdRewardVideoAdView rewardVideoAdView;
    private static com.bianfeng.toponad.ui.TopOnAdCallBack topOnAdCallBack;

    public TopOnAdApi() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void closeBanner() {
            com.bianfeng.toponad.ui.TopOnBannerView r0 = com.bianfeng.toponad.ui.TopOnAdApi.bannerView
            if (r0 == 0) goto La
            r0.closeAd()
            r0 = 0
            com.bianfeng.toponad.ui.TopOnAdApi.bannerView = r0
        La:
            return
    }

    public static void closeInterstial() {
            com.bianfeng.toponad.ui.TopOnAdInterstialnd r0 = com.bianfeng.toponad.ui.TopOnAdApi.interstialnd
            if (r0 == 0) goto La
            r0.closeAd()
            r0 = 0
            com.bianfeng.toponad.ui.TopOnAdApi.interstialnd = r0
        La:
            return
    }

    public static void closeNative() {
            com.bianfeng.toponad.ui.TopOnNativeAdView r0 = com.bianfeng.toponad.ui.TopOnAdApi.nativeAdView
            if (r0 == 0) goto La
            r0.closeAd()
            r0 = 0
            com.bianfeng.toponad.ui.TopOnAdApi.nativeAdView = r0
        La:
            return
    }

    public static void closeRewardVideoAd() {
            com.bianfeng.toponad.ui.TopOnAdRewardVideoAdView r0 = com.bianfeng.toponad.ui.TopOnAdApi.rewardVideoAdView
            if (r0 == 0) goto La
            r0.closeAd()
            r0 = 0
            com.bianfeng.toponad.ui.TopOnAdApi.rewardVideoAdView = r0
        La:
            return
    }

    public static com.bianfeng.toponad.ui.TopOnAdCallBack getYSDKAdCallBack() {
            com.bianfeng.toponad.ui.TopOnAdCallBack r0 = com.bianfeng.toponad.ui.TopOnAdApi.topOnAdCallBack
            return r0
    }

    public static void loadBanner(android.app.Activity r0, java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            com.bianfeng.toponad.ui.TopOnBannerView r0 = com.bianfeng.toponad.ui.TopOnBannerView.getInstance(r0, r1, r2, r3, r4, r5, r6)
            com.bianfeng.toponad.ui.TopOnAdApi.bannerView = r0
            return
    }

    public static void loadInterstial(android.app.Activity r0, java.lang.String r1) {
            com.bianfeng.toponad.ui.TopOnAdInterstialnd r0 = com.bianfeng.toponad.ui.TopOnAdInterstialnd.getInstance(r0, r1)
            com.bianfeng.toponad.ui.TopOnAdApi.interstialnd = r0
            return
    }

    public static void loadNative(android.app.Activity r0, java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            com.bianfeng.toponad.ui.TopOnNativeAdView r0 = com.bianfeng.toponad.ui.TopOnNativeAdView.getInstance(r0, r1, r2, r3, r4, r5, r6)
            com.bianfeng.toponad.ui.TopOnAdApi.nativeAdView = r0
            return
    }

    public static void loadRewardVideoAd(android.app.Activity r0, java.lang.String r1) {
            com.bianfeng.toponad.ui.TopOnAdRewardVideoAdView r0 = com.bianfeng.toponad.ui.TopOnAdRewardVideoAdView.getInstance(r0, r1)
            com.bianfeng.toponad.ui.TopOnAdApi.rewardVideoAdView = r0
            return
    }

    public static void setYSDKAdCallBack(com.bianfeng.toponad.ui.TopOnAdCallBack r0) {
            com.bianfeng.toponad.ui.TopOnAdApi.topOnAdCallBack = r0
            return
    }

    public static void showBanner() {
            com.bianfeng.toponad.ui.TopOnBannerView r0 = com.bianfeng.toponad.ui.TopOnAdApi.bannerView
            if (r0 == 0) goto L7
            r0.showAd()
        L7:
            return
    }

    public static void showInterstial() {
            com.bianfeng.toponad.ui.TopOnAdInterstialnd r0 = com.bianfeng.toponad.ui.TopOnAdApi.interstialnd
            if (r0 == 0) goto L7
            r0.showAd()
        L7:
            return
    }

    public static void showNative() {
            com.bianfeng.toponad.ui.TopOnNativeAdView r0 = com.bianfeng.toponad.ui.TopOnAdApi.nativeAdView
            if (r0 == 0) goto L7
            r0.showAd()
        L7:
            return
    }

    public static void showRewardVideoAd() {
            com.bianfeng.toponad.ui.TopOnAdRewardVideoAdView r0 = com.bianfeng.toponad.ui.TopOnAdApi.rewardVideoAdView
            if (r0 == 0) goto L7
            r0.showAd()
        L7:
            return
    }
}
