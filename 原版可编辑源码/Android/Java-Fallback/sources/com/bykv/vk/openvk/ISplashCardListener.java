package com.bykv.vk.openvk;

public interface ISplashCardListener {
    android.app.Activity getActivity();

    void onSplashClickEyeClose();

    void onSplashEyeReady();

    void setSupportSplashClickEye(boolean r1);
}
