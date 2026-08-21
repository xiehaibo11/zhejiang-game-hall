package com.tkay.splashad.a;

import android.content.Context;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYNetworkConfirmInfo;
import com.tkay.splashad.api.TYSplashAdExtraInfo;

/* JADX INFO: loaded from: classes4.dex */
public abstract class a {
    boolean mHasDismiss;

    public abstract void onAdClick(TYAdInfo tYAdInfo);

    public abstract void onAdDismiss(TYAdInfo tYAdInfo, TYSplashAdExtraInfo tYSplashAdExtraInfo);

    public abstract void onAdShow(TYAdInfo tYAdInfo);

    public abstract void onDeeplinkCallback(TYAdInfo tYAdInfo, boolean z);

    public abstract void onDownloadConfirm(Context context, TYAdInfo tYAdInfo, TYNetworkConfirmInfo tYNetworkConfirmInfo);

    public void onCallbackAdDismiss(TYAdInfo tYAdInfo, TYSplashAdExtraInfo tYSplashAdExtraInfo) {
        if (this.mHasDismiss) {
            return;
        }
        this.mHasDismiss = true;
        onAdDismiss(tYAdInfo, tYSplashAdExtraInfo);
    }
}
