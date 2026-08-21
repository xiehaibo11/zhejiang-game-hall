package com.tkay.banner.api;

public interface TYBannerExListener extends com.tkay.banner.api.TYBannerListener {
    void onDeeplinkCallback(boolean r1, com.tkay.core.api.TYAdInfo r2, boolean r3);

    void onDownloadConfirm(android.content.Context r1, com.tkay.core.api.TYAdInfo r2, com.tkay.core.api.TYNetworkConfirmInfo r3);
}
