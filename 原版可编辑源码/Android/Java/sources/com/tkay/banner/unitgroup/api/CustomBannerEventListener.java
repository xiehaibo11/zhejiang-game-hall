package com.tkay.banner.unitgroup.api;

import android.content.Context;
import com.tkay.core.api.TYNetworkConfirmInfo;

public interface CustomBannerEventListener {
    void onBannerAdClicked();

    void onBannerAdClose();

    void onBannerAdShow();

    void onDeeplinkCallback(boolean z);

    void onDownloadConfirm(Context context, TYNetworkConfirmInfo tYNetworkConfirmInfo);
}
