package com.tkay.interstitial.api;

public interface TYInterstitialExListener extends com.tkay.interstitial.api.TYInterstitialListener {
    void onDeeplinkCallback(com.tkay.core.api.TYAdInfo r1, boolean r2);

    void onDownloadConfirm(android.content.Context r1, com.tkay.core.api.TYAdInfo r2, com.tkay.core.api.TYNetworkConfirmInfo r3);
}
