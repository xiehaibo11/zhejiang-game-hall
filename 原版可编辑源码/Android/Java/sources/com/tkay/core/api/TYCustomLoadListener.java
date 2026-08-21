package com.tkay.core.api;

public interface TYCustomLoadListener {
    void onAdCacheLoaded(BaseAd... baseAdArr);

    void onAdDataLoaded();

    void onAdLoadError(String str, String str2);
}
