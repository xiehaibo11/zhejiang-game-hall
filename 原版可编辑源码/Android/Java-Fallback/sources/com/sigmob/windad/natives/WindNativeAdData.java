package com.sigmob.windad.natives;

public interface WindNativeAdData {

    public interface DislikeInteractionCallback {
        void onCancel();

        void onSelected(int r1, java.lang.String r2, boolean r3);

        void onShow();
    }

    public interface NativeADMediaListener {
        void onVideoCompleted();

        void onVideoError(com.sigmob.windad.WindAdError r1);

        void onVideoLoad();

        void onVideoPause();

        void onVideoResume();

        void onVideoStart();
    }

    void bindImageViews(java.util.List<android.widget.ImageView> r1, int r2);

    void bindMediaView(android.view.ViewGroup r1, com.sigmob.windad.natives.WindNativeAdData.NativeADMediaListener r2);

    void bindViewForInteraction(android.view.View r1, java.util.List<android.view.View> r2, java.util.List<android.view.View> r3, android.view.View r4, com.sigmob.windad.natives.NativeADEventListener r5);

    void destroy();

    android.graphics.Bitmap getAdLogo();

    int getAdPatternType();

    java.lang.String getCTAText();

    java.lang.String getDesc();

    java.lang.String getIconUrl();

    java.lang.String getTitle();

    void pauseVideo();

    void resumeVideo();

    void setDislikeInteractionCallback(android.app.Activity r1, com.sigmob.windad.natives.WindNativeAdData.DislikeInteractionCallback r2);

    void startVideo();

    void stopVideo();
}
