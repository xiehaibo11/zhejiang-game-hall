package com.kwad.sdk.api;

@com.kwad.sdk.api.core.KsAdSdkApi
public interface KsFeedAd extends com.kwad.sdk.api.BaseKSAd {

    @com.kwad.sdk.api.core.KsAdSdkApi
    public interface AdInteractionListener {
        @com.kwad.sdk.api.core.KsAdSdkApi
        void onAdClicked();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onAdShow();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onDislikeClicked();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onDownloadTipsDialogDismiss();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onDownloadTipsDialogShow();
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getECPM();

    @com.kwad.sdk.api.core.KsAdSdkApi
    android.view.View getFeedView(android.content.Context r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getInteractionType();

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getMaterialType();

    @com.kwad.sdk.api.core.KsAdSdkApi
    void reportAdExposureFailed(int r1, com.kwad.sdk.api.model.AdExposureFailedReason r2);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setAdInteractionListener(com.kwad.sdk.api.KsFeedAd.AdInteractionListener r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    @java.lang.Deprecated
    void setBidEcpm(int r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setBidEcpm(long r1, long r3);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setVideoPlayConfig(com.kwad.sdk.api.KsAdVideoPlayConfig r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setVideoSoundEnable(boolean r1);
}
