package com.qq.e.ads.splash;

public interface SplashADZoomOutListener extends com.qq.e.ads.splash.SplashADListener {
    boolean isSupportZoomOut();

    void onZoomOut();

    void onZoomOutPlayFinish();
}
