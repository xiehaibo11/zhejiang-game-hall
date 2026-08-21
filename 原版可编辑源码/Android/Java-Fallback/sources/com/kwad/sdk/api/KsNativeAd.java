package com.kwad.sdk.api;

@com.kwad.sdk.api.core.KsAdSdkApi
public interface KsNativeAd extends com.kwad.sdk.api.BaseKSAd {

    @com.kwad.sdk.api.core.KsAdSdkApi
    public interface AdInteractionListener {
        boolean handleDownloadDialog(android.content.DialogInterface.OnClickListener r1);

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onAdClicked(android.view.View r1, com.kwad.sdk.api.KsNativeAd r2);

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onAdShow(com.kwad.sdk.api.KsNativeAd r1);

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onDownloadTipsDialogDismiss();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onDownloadTipsDialogShow();
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public interface VideoPlayListener {
        @com.kwad.sdk.api.core.KsAdSdkApi
        void onVideoPlayComplete();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onVideoPlayError(int r1, int r2);

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onVideoPlayPause();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onVideoPlayReady();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onVideoPlayResume();

        @com.kwad.sdk.api.core.KsAdSdkApi
        void onVideoPlayStart();
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getActionDescription();

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getAdDescription();

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getAdSource();

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getAdSourceLogoUrl(int r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getAppDownloadCountDes();

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getAppIconUrl();

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getAppName();

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getAppPackageName();

    @com.kwad.sdk.api.core.KsAdSdkApi
    long getAppPackageSize();

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getAppPrivacyUrl();

    @com.kwad.sdk.api.core.KsAdSdkApi
    float getAppScore();

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getAppVersion();

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getCorporationName();

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getECPM();

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.util.List<com.kwad.sdk.api.KsImage> getImageList();

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getInteractionType();

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getMaterialType();

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getPermissionInfo();

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getPermissionInfoUrl();

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getProductName();

    @com.kwad.sdk.api.core.KsAdSdkApi
    com.kwad.sdk.api.KsImage getVideoCoverImage();

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getVideoDuration();

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getVideoHeight();

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getVideoUrl();

    @com.kwad.sdk.api.core.KsAdSdkApi
    android.view.View getVideoView(android.content.Context r1, com.kwad.sdk.api.KsAdVideoPlayConfig r2);

    @com.kwad.sdk.api.core.KsAdSdkApi
    @java.lang.Deprecated
    android.view.View getVideoView(android.content.Context r1, boolean r2);

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getVideoWidth();

    @com.kwad.sdk.api.core.KsAdSdkApi
    @java.lang.Deprecated
    void registerViewForInteraction(android.app.Activity r1, android.view.ViewGroup r2, java.util.List<android.view.View> r3, com.kwad.sdk.api.KsNativeAd.AdInteractionListener r4);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void registerViewForInteraction(android.app.Activity r1, android.view.ViewGroup r2, java.util.Map<android.view.View, java.lang.Integer> r3, com.kwad.sdk.api.KsNativeAd.AdInteractionListener r4);

    @com.kwad.sdk.api.core.KsAdSdkApi
    @java.lang.Deprecated
    void registerViewForInteraction(android.view.ViewGroup r1, java.util.List<android.view.View> r2, com.kwad.sdk.api.KsNativeAd.AdInteractionListener r3);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void reportAdExposureFailed(int r1, com.kwad.sdk.api.model.AdExposureFailedReason r2);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void reportAdVideoPlayEnd();

    @com.kwad.sdk.api.core.KsAdSdkApi
    void reportAdVideoPlayStart();

    @com.kwad.sdk.api.core.KsAdSdkApi
    @java.lang.Deprecated
    void setBidEcpm(int r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setBidEcpm(long r1, long r3);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setDownloadListener(com.kwad.sdk.api.KsAppDownloadListener r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setVideoPlayListener(com.kwad.sdk.api.KsNativeAd.VideoPlayListener r1);
}
