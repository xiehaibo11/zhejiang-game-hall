package com.qq.e.ads.nativ;

public interface NativeUnifiedADData extends com.qq.e.comm.pi.LADI, com.qq.e.comm.pi.NFBI {
    void bindAdToCustomVideo(android.view.ViewGroup r1, android.content.Context r2, java.util.List<android.view.View> r3, java.util.List<android.view.View> r4);

    void bindAdToView(android.content.Context r1, com.qq.e.ads.nativ.widget.NativeAdContainer r2, android.widget.FrameLayout.LayoutParams r3, java.util.List<android.view.View> r4);

    void bindAdToView(android.content.Context r1, com.qq.e.ads.nativ.widget.NativeAdContainer r2, android.widget.FrameLayout.LayoutParams r3, java.util.List<android.view.View> r4, java.util.List<android.view.View> r5);

    void bindCTAViews(java.util.List<android.view.View> r1);

    void bindImageViews(java.util.List<android.widget.ImageView> r1, int r2);

    void bindImageViews(java.util.List<android.widget.ImageView> r1, byte[] r2);

    void bindMediaView(com.qq.e.ads.nativ.MediaView r1, com.qq.e.ads.cfg.VideoOption r2, com.qq.e.ads.nativ.NativeADMediaListener r3);

    void destroy();

    boolean equalsAdData(com.qq.e.ads.nativ.NativeUnifiedADData r1);

    int getAdPatternType();

    com.qq.e.ads.nativ.NativeUnifiedADAppMiitInfo getAppMiitInfo();

    double getAppPrice();

    int getAppScore();

    int getAppStatus();

    java.lang.String getButtonText();

    java.lang.String getCTAText();

    com.qq.e.ads.nativ.CustomizeVideo getCustomizeVideo();

    java.lang.String getDesc();

    long getDownloadCount();

    java.lang.String getIconUrl();

    java.util.List<java.lang.String> getImgList();

    java.lang.String getImgUrl();

    int getPictureHeight();

    int getPictureWidth();

    int getProgress();

    java.lang.String getTitle();

    int getVideoCurrentPosition();

    int getVideoDuration();

    boolean isAppAd();

    boolean isWeChatCanvasAd();

    void negativeFeedback();

    void pauseAppDownload();

    void pauseVideo();

    @java.lang.Deprecated
    void resume();

    void resumeAppDownload();

    void resumeVideo();

    void setNativeAdEventListener(com.qq.e.ads.nativ.NativeADEventListener r1);

    void setVideoMute(boolean r1);

    void startVideo();

    void stopVideo();
}
