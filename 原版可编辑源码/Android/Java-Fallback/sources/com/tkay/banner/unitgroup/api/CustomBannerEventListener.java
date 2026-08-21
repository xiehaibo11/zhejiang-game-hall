package com.tkay.banner.unitgroup.api;

public interface CustomBannerEventListener {
    void onBannerAdClicked();

    void onBannerAdClose();

    void onBannerAdShow();

    void onDeeplinkCallback(boolean r1);

    void onDownloadConfirm(android.content.Context r1, com.tkay.core.api.TYNetworkConfirmInfo r2);
}
