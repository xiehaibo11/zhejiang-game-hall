package com.tkay.interstitial.api;

public interface TYInterstitialListener {
    void onInterstitialAdClicked(com.tkay.core.api.TYAdInfo r1);

    void onInterstitialAdClose(com.tkay.core.api.TYAdInfo r1);

    void onInterstitialAdLoadFail(com.tkay.core.api.AdError r1);

    void onInterstitialAdLoaded();

    void onInterstitialAdShow(com.tkay.core.api.TYAdInfo r1);

    void onInterstitialAdVideoEnd(com.tkay.core.api.TYAdInfo r1);

    void onInterstitialAdVideoError(com.tkay.core.api.AdError r1);

    void onInterstitialAdVideoStart(com.tkay.core.api.TYAdInfo r1);
}
