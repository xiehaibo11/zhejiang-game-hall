package com.qq.e.ads.splash;

public interface SplashADListener {
    void onADClicked();

    void onADDismissed();

    void onADExposure();

    void onADLoaded(long r1);

    void onADPresent();

    void onADTick(long r1);

    void onNoAD(com.qq.e.comm.util.AdError r1);
}
