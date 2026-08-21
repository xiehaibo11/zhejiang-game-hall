package com.tkay.splashad.unitgroup.api;

import android.content.Context;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYNetworkConfirmInfo;

/* JADX INFO: loaded from: classes4.dex */
public interface CustomSplashEventListener {
    void onDeeplinkCallback(boolean z);

    void onDownloadConfirm(Context context, TYNetworkConfirmInfo tYNetworkConfirmInfo);

    void onSplashAdClicked();

    void onSplashAdDismiss();

    void onSplashAdShow();

    void onSplashAdShowFail(AdError adError);
}
