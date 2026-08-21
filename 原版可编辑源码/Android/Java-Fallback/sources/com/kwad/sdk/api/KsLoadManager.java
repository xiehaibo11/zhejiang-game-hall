package com.kwad.sdk.api;

@com.kwad.sdk.api.core.KsAdSdkApi
public interface KsLoadManager {

    @com.kwad.sdk.api.core.KsAdSdkApi
    public interface DrawAdListener {
        @com.kwad.sdk.api.core.KsAdSdkApi
        void onDrawAdLoad(java.util.List<com.kwad.sdk.api.KsDrawAd> r1);

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onError(int r1, java.lang.String r2);
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public interface FeedAdListener {
        @com.kwad.sdk.api.core.KsAdSdkApi
        void onError(int r1, java.lang.String r2);

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onFeedAdLoad(java.util.List<com.kwad.sdk.api.KsFeedAd> r1);
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public interface FullScreenVideoAdListener {
        @com.kwad.sdk.api.core.KsAdSdkApi
        void onError(int r1, java.lang.String r2);

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onFullScreenVideoAdLoad(java.util.List<com.kwad.sdk.api.KsFullScreenVideoAd> r1);

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onFullScreenVideoResult(java.util.List<com.kwad.sdk.api.KsFullScreenVideoAd> r1);
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public interface InterstitialAdListener {
        @com.kwad.sdk.api.core.KsAdSdkApi
        void onError(int r1, java.lang.String r2);

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onInterstitialAdLoad(java.util.List<com.kwad.sdk.api.KsInterstitialAd> r1);

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onRequestResult(int r1);
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public interface NativeAdListener {
        @com.kwad.sdk.api.core.KsAdSdkApi
        void onError(int r1, java.lang.String r2);

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onNativeAdLoad(java.util.List<com.kwad.sdk.api.KsNativeAd> r1);
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public interface RewardVideoAdListener {
        @com.kwad.sdk.api.core.KsAdSdkApi
        void onError(int r1, java.lang.String r2);

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onRewardVideoAdLoad(java.util.List<com.kwad.sdk.api.KsRewardVideoAd> r1);

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onRewardVideoResult(java.util.List<com.kwad.sdk.api.KsRewardVideoAd> r1);
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public interface SplashScreenAdListener {
        @com.kwad.sdk.api.core.KsAdSdkApi
        void onError(int r1, java.lang.String r2);

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onRequestResult(int r1);

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onSplashScreenAdLoad(com.kwad.sdk.api.KsSplashScreenAd r1);
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getBidRequestToken(com.kwad.sdk.api.KsScene r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getBidRequestTokenV2(com.kwad.sdk.api.KsScene r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void loadConfigFeedAd(com.kwad.sdk.api.KsScene r1, com.kwad.sdk.api.KsLoadManager.FeedAdListener r2);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void loadDrawAd(com.kwad.sdk.api.KsScene r1, com.kwad.sdk.api.KsLoadManager.DrawAdListener r2);

    @com.kwad.sdk.api.core.KsAdSdkApi
    @java.lang.Deprecated
    void loadFeedAd(com.kwad.sdk.api.KsScene r1, com.kwad.sdk.api.KsLoadManager.FeedAdListener r2);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void loadFullScreenVideoAd(com.kwad.sdk.api.KsScene r1, com.kwad.sdk.api.KsLoadManager.FullScreenVideoAdListener r2);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void loadInterstitialAd(com.kwad.sdk.api.KsScene r1, com.kwad.sdk.api.KsLoadManager.InterstitialAdListener r2);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void loadNativeAd(com.kwad.sdk.api.KsScene r1, com.kwad.sdk.api.KsLoadManager.NativeAdListener r2);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void loadNativeAd(java.lang.String r1, com.kwad.sdk.api.KsLoadManager.NativeAdListener r2);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void loadRewardVideoAd(com.kwad.sdk.api.KsScene r1, com.kwad.sdk.api.KsLoadManager.RewardVideoAdListener r2);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void loadSplashScreenAd(com.kwad.sdk.api.KsScene r1, com.kwad.sdk.api.KsLoadManager.SplashScreenAdListener r2);

    boolean showInstallDialog(android.app.Activity r1, com.kwad.sdk.api.KsExitInstallListener r2);
}
