package com.bykv.vk.openvk;

public interface CSJSplashAd extends com.bykv.vk.openvk.TTClientBidding {

    public interface SplashAdListener {
        void onSplashAdClick(com.bykv.vk.openvk.CSJSplashAd r1);

        void onSplashAdClose(com.bykv.vk.openvk.CSJSplashAd r1, int r2);

        void onSplashAdShow(com.bykv.vk.openvk.CSJSplashAd r1);
    }

    public interface SplashCardListener {
        void onSplashCardClick();

        void onSplashCardClose();

        void onSplashCardReadyToShow(com.bykv.vk.openvk.CSJSplashAd r1);
    }

    public interface SplashClickEyeListener {
        void onSplashClickEyeClick();

        void onSplashClickEyeClose();

        void onSplashClickEyeReadyToShow(com.bykv.vk.openvk.CSJSplashAd r1);
    }

    int getInteractionType();

    java.util.Map<java.lang.String, java.lang.Object> getMediaExtraInfo();

    android.view.View getSplashCardView();

    int[] getSplashClickEyeSizeToDp();

    android.view.View getSplashClickEyeView();

    android.view.View getSplashView();

    void hideSkipButton();

    void setDownloadListener(com.bykv.vk.openvk.TTAppDownloadListener r1);

    void setSplashAdListener(com.bykv.vk.openvk.CSJSplashAd.SplashAdListener r1);

    void setSplashCardListener(com.bykv.vk.openvk.CSJSplashAd.SplashCardListener r1);

    void setSplashClickEyeListener(com.bykv.vk.openvk.CSJSplashAd.SplashClickEyeListener r1);

    void showSplashCardView(android.view.ViewGroup r1, android.app.Activity r2);

    void showSplashClickEyeView(android.view.ViewGroup r1);

    void showSplashView(android.view.ViewGroup r1);

    void startClickEye();
}
