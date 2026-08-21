package com.tkay.core.api;

/* JADX INFO: loaded from: classes3.dex */
public interface TYCustomLoadListener {
    void onAdCacheLoaded(BaseAd... baseAdArr);

    void onAdDataLoaded();

    void onAdLoadError(String str, String str2);
}
