package com.tkay.interstitial.unitgroup.api;

public interface CustomInterstitialEventListener {
    void onDeeplinkCallback(boolean r1);

    void onDownloadConfirm(android.content.Context r1, com.tkay.core.api.TYNetworkConfirmInfo r2);

    void onInterstitialAdClicked();

    void onInterstitialAdClose();

    void onInterstitialAdShow();

    void onInterstitialAdVideoEnd();

    void onInterstitialAdVideoError(java.lang.String r1, java.lang.String r2);

    void onInterstitialAdVideoStart();
}
