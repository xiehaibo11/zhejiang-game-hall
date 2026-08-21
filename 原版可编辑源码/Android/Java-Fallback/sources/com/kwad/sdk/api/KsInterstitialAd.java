package com.kwad.sdk.api;

@com.kwad.sdk.api.core.KsAdSdkApi
public interface KsInterstitialAd extends com.kwad.sdk.api.BaseKSAd {

    @com.kwad.sdk.api.core.KsAdSdkApi
    public interface AdInteractionListener {
        @com.kwad.sdk.api.core.KsAdSdkApi
        void onAdClicked();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onAdClosed();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onAdShow();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onPageDismiss();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onSkippedAd();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onVideoPlayEnd();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onVideoPlayError(int r1, int r2);

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onVideoPlayStart();
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getECPM();

    int getInteractionType();

    int getMaterialType();

    @com.kwad.sdk.api.core.KsAdSdkApi
    @java.lang.Deprecated
    boolean isVideo();

    @com.kwad.sdk.api.core.KsAdSdkApi
    void reportAdExposureFailed(int r1, com.kwad.sdk.api.model.AdExposureFailedReason r2);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setAdInteractionListener(com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    @java.lang.Deprecated
    void setBidEcpm(int r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setBidEcpm(long r1, long r3);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void showInterstitialAd(android.app.Activity r1, com.kwad.sdk.api.KsVideoPlayConfig r2);
}
