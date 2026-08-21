package com.tkay.splashad.api;

public interface TYSplashExListener extends com.tkay.splashad.api.TYSplashAdListener {
    void onDeeplinkCallback(com.tkay.core.api.TYAdInfo r1, boolean r2);

    void onDownloadConfirm(android.content.Context r1, com.tkay.core.api.TYAdInfo r2, com.tkay.core.api.TYNetworkConfirmInfo r3);
}
