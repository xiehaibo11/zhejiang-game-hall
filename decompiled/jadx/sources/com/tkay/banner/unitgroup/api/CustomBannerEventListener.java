package com.tkay.banner.unitgroup.api;

import android.content.Context;
import com.tkay.core.api.TYNetworkConfirmInfo;

/* JADX INFO: loaded from: classes3.dex */
public interface CustomBannerEventListener {
    void onBannerAdClicked();

    void onBannerAdClose();

    void onBannerAdShow();

    void onDeeplinkCallback(boolean z);

    void onDownloadConfirm(Context context, TYNetworkConfirmInfo tYNetworkConfirmInfo);
}
