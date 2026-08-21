package com.kwad.sdk.api;

@com.kwad.sdk.api.core.KsAdSdkApi
public interface KsSplashScreenAd extends com.kwad.sdk.api.BaseKSAd {

    @com.kwad.sdk.api.core.KsAdSdkApi
    public interface SplashScreenAdInteractionListener {
        @com.kwad.sdk.api.core.KsAdSdkApi
        void onAdClicked();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onAdShowEnd();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onAdShowError(int r1, java.lang.String r2);

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onAdShowStart();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onDownloadTipsDialogCancel();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onDownloadTipsDialogDismiss();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onDownloadTipsDialogShow();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onSkippedAd();
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getECPM();

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getInteractionType();

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getMaterialType();

    @com.kwad.sdk.api.core.KsAdSdkApi
    android.view.View getView(android.content.Context r1, com.kwad.sdk.api.KsSplashScreenAd.SplashScreenAdInteractionListener r2);

    @com.kwad.sdk.api.core.KsAdSdkApi
    boolean isAdEnable();

    @com.kwad.sdk.api.core.KsAdSdkApi
    @java.lang.Deprecated
    boolean isVideo();

    @com.kwad.sdk.api.core.KsAdSdkApi
    void reportAdExposureFailed(int r1, com.kwad.sdk.api.model.AdExposureFailedReason r2);

    @com.kwad.sdk.api.core.KsAdSdkApi
    @java.lang.Deprecated
    void setBidEcpm(int r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setBidEcpm(long r1, long r3);
}
