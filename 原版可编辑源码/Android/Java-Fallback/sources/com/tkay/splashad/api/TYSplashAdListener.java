package com.tkay.splashad.api;

public interface TYSplashAdListener {
    void onAdClick(com.tkay.core.api.TYAdInfo r1);

    void onAdDismiss(com.tkay.core.api.TYAdInfo r1, com.tkay.splashad.api.TYSplashAdExtraInfo r2);

    void onAdLoadTimeout();

    void onAdLoaded(boolean r1);

    void onAdShow(com.tkay.core.api.TYAdInfo r1);

    void onNoAdError(com.tkay.core.api.AdError r1);
}
