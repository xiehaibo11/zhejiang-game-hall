package com.kwad.sdk.api;

@com.kwad.sdk.api.core.KsAdSdkApi
public interface KsDrawAd extends com.kwad.sdk.api.BaseKSAd {

    @com.kwad.sdk.api.core.KsAdSdkApi
    public interface AdInteractionListener {
        @com.kwad.sdk.api.core.KsAdSdkApi
        void onAdClicked();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onAdShow();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onVideoPlayEnd();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onVideoPlayError();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onVideoPlayPause();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onVideoPlayResume();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onVideoPlayStart();
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    android.view.View getDrawView(android.content.Context r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getECPM();

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getInteractionType();

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getMaterialType();

    @com.kwad.sdk.api.core.KsAdSdkApi
    void reportAdExposureFailed(int r1, com.kwad.sdk.api.model.AdExposureFailedReason r2);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setAdInteractionListener(com.kwad.sdk.api.KsDrawAd.AdInteractionListener r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    @java.lang.Deprecated
    void setBidEcpm(int r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setBidEcpm(long r1, long r3);
}
