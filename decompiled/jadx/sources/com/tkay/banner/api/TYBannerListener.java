package com.tkay.banner.api;

import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdInfo;

/* JADX INFO: loaded from: classes3.dex */
public interface TYBannerListener {
    void onBannerAutoRefreshFail(AdError adError);

    void onBannerAutoRefreshed(TYAdInfo tYAdInfo);

    void onBannerClicked(TYAdInfo tYAdInfo);

    void onBannerClose(TYAdInfo tYAdInfo);

    void onBannerFailed(AdError adError);

    void onBannerLoaded();

    void onBannerShow(TYAdInfo tYAdInfo);
}
