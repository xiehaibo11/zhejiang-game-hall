package com.tkay.banner.a;

import android.content.Context;
import com.tkay.banner.unitgroup.api.CustomBannerAdapter;
import com.tkay.core.api.TYNetworkConfirmInfo;

/* JADX INFO: loaded from: classes3.dex */
public interface e {
    void onBannerClicked(CustomBannerAdapter customBannerAdapter);

    void onBannerClose(CustomBannerAdapter customBannerAdapter);

    void onBannerShow(CustomBannerAdapter customBannerAdapter, boolean z);

    void onDeeplinkCallback(CustomBannerAdapter customBannerAdapter, boolean z);

    void onDownloadConfirm(Context context, CustomBannerAdapter customBannerAdapter, TYNetworkConfirmInfo tYNetworkConfirmInfo);
}
