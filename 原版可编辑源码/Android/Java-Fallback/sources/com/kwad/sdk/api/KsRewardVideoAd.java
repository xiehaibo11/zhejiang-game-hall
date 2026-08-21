package com.kwad.sdk.api;

@com.kwad.sdk.api.core.KsAdSdkApi
public interface KsRewardVideoAd extends com.kwad.sdk.api.BaseKSAd {

    @com.kwad.sdk.api.core.KsAdSdkApi
    public interface RewardAdInteractionListener {
        @com.kwad.sdk.api.core.KsAdSdkApi
        void onAdClicked();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onExtraRewardVerify(int r1);

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onPageDismiss();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onRewardStepVerify(int r1, int r2);

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onRewardVerify();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onVideoPlayEnd();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onVideoPlayError(int r1, int r2);

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onVideoPlayStart();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onVideoSkipToEnd(long r1);
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getECPM();

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getInteractionType();

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getMaterialType();

    @com.kwad.sdk.api.core.KsAdSdkApi
    boolean isAdEnable();

    @com.kwad.sdk.api.core.KsAdSdkApi
    void reportAdExposureFailed(int r1, com.kwad.sdk.api.model.AdExposureFailedReason r2);

    @com.kwad.sdk.api.core.KsAdSdkApi
    @java.lang.Deprecated
    void setBidEcpm(int r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setBidEcpm(long r1, long r3);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setInnerAdInteractionListener(com.kwad.sdk.api.KsInnerAd.KsInnerAdInteractionListener r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setRewardAdInteractionListener(com.kwad.sdk.api.KsRewardVideoAd.RewardAdInteractionListener r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    @java.lang.Deprecated
    void setRewardPlayAgainInteractionListener(com.kwad.sdk.api.KsRewardVideoAd.RewardAdInteractionListener r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void showRewardVideoAd(android.app.Activity r1, com.kwad.sdk.api.KsVideoPlayConfig r2);
}
