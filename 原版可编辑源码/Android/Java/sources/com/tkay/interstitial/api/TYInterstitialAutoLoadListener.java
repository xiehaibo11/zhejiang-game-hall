package com.tkay.interstitial.api;

import com.tkay.core.api.AdError;

public interface TYInterstitialAutoLoadListener {
    void onInterstitialAutoLoadFail(String str, AdError adError);

    void onInterstitialAutoLoaded(String str);
}
