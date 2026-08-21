package com.tkay.banner.api;

public interface TYBannerListener {
    void onBannerAutoRefreshFail(com.tkay.core.api.AdError r1);

    void onBannerAutoRefreshed(com.tkay.core.api.TYAdInfo r1);

    void onBannerClicked(com.tkay.core.api.TYAdInfo r1);

    void onBannerClose(com.tkay.core.api.TYAdInfo r1);

    void onBannerFailed(com.tkay.core.api.AdError r1);

    void onBannerLoaded();

    void onBannerShow(com.tkay.core.api.TYAdInfo r1);
}
