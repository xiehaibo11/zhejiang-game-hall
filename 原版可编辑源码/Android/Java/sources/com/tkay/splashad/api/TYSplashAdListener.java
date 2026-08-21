package com.tkay.splashad.api;

import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdInfo;

public interface TYSplashAdListener {
    void onAdClick(TYAdInfo tYAdInfo);

    void onAdDismiss(TYAdInfo tYAdInfo, TYSplashAdExtraInfo tYSplashAdExtraInfo);

    void onAdLoadTimeout();

    void onAdLoaded(boolean z);

    void onAdShow(TYAdInfo tYAdInfo);

    void onNoAdError(AdError adError);
}
