package com.tkay.banner.api;

import android.content.Context;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYNetworkConfirmInfo;

/* JADX INFO: loaded from: classes3.dex */
public interface TYBannerExListener extends TYBannerListener {
    void onDeeplinkCallback(boolean z, TYAdInfo tYAdInfo, boolean z2);

    void onDownloadConfirm(Context context, TYAdInfo tYAdInfo, TYNetworkConfirmInfo tYNetworkConfirmInfo);
}
