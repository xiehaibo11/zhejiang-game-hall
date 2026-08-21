package com.tkay.splashad.api;

import android.content.Context;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYNetworkConfirmInfo;

public interface TYSplashExListener extends TYSplashAdListener {
    void onDeeplinkCallback(TYAdInfo tYAdInfo, boolean z);

    void onDownloadConfirm(Context context, TYAdInfo tYAdInfo, TYNetworkConfirmInfo tYNetworkConfirmInfo);
}
