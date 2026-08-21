package com.bykv.vk.openvk;

public interface TTSphObject extends com.bykv.vk.openvk.TTClientBidding {

    public interface VfInteractionListener {
        void onClicked(android.view.View r1, int r2);

        void onShow(android.view.View r1, int r2);

        void onSkip();

        void onTimeOver();
    }

    int getInteractionType();

    java.util.Map<java.lang.String, java.lang.Object> getMediaExtraInfo();

    int[] getSplashClickEyeSizeToDp();

    android.view.View getSplashView();

    void renderExpressAd(com.bykv.vk.openvk.TTNtExpressObject.ExpressNtInteractionListener r1);

    void setDownloadListener(com.bykv.vk.openvk.TTAppDownloadListener r1);

    void setNotAllowSdkCountdown();

    void setSplashCardListener(com.bykv.vk.openvk.ISplashCardListener r1);

    void setSplashClickEyeListener(com.bykv.vk.openvk.ISplashClickEyeListener r1);

    void setSplashInteractionListener(com.bykv.vk.openvk.TTSphObject.VfInteractionListener r1);

    void splashClickEyeAnimationFinish();

    void startClickEye();

    void startClickEye(boolean r1);
}
