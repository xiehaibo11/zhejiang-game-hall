package com.tkay.nativead.api;

public interface TYNativeEventListener {
    void onAdClicked(com.tkay.nativead.api.TYNativeAdView r1, com.tkay.core.api.TYAdInfo r2);

    void onAdImpressed(com.tkay.nativead.api.TYNativeAdView r1, com.tkay.core.api.TYAdInfo r2);

    void onAdVideoEnd(com.tkay.nativead.api.TYNativeAdView r1);

    void onAdVideoProgress(com.tkay.nativead.api.TYNativeAdView r1, int r2);

    void onAdVideoStart(com.tkay.nativead.api.TYNativeAdView r1);
}
