package com.tkay.nativead.api;

import com.tkay.core.api.TYAdInfo;

/* JADX INFO: loaded from: classes3.dex */
public interface TYNativeEventListener {
    void onAdClicked(TYNativeAdView tYNativeAdView, TYAdInfo tYAdInfo);

    void onAdImpressed(TYNativeAdView tYNativeAdView, TYAdInfo tYAdInfo);

    void onAdVideoEnd(TYNativeAdView tYNativeAdView);

    void onAdVideoProgress(TYNativeAdView tYNativeAdView, int i);

    void onAdVideoStart(TYNativeAdView tYNativeAdView);
}
