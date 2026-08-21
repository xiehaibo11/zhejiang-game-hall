package com.tkay.core.api;

public interface TYCustomLoadListener {
    void onAdCacheLoaded(com.tkay.core.api.BaseAd... r1);

    void onAdDataLoaded();

    void onAdLoadError(java.lang.String r1, java.lang.String r2);
}
