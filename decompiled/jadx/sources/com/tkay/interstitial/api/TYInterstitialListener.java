package com.tkay.interstitial.api;

import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdInfo;

/* JADX INFO: loaded from: classes3.dex */
public interface TYInterstitialListener {
    void onInterstitialAdClicked(TYAdInfo tYAdInfo);

    void onInterstitialAdClose(TYAdInfo tYAdInfo);

    void onInterstitialAdLoadFail(AdError adError);

    void onInterstitialAdLoaded();

    void onInterstitialAdShow(TYAdInfo tYAdInfo);

    void onInterstitialAdVideoEnd(TYAdInfo tYAdInfo);

    void onInterstitialAdVideoError(AdError adError);

    void onInterstitialAdVideoStart(TYAdInfo tYAdInfo);
}
