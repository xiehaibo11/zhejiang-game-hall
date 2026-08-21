package com.tkay.splashad.unitgroup.api;

public interface CustomSplashEventListener {
    void onDeeplinkCallback(boolean r1);

    void onDownloadConfirm(android.content.Context r1, com.tkay.core.api.TYNetworkConfirmInfo r2);

    void onSplashAdClicked();

    void onSplashAdDismiss();

    void onSplashAdShow();

    void onSplashAdShowFail(com.tkay.core.api.AdError r1);
}
