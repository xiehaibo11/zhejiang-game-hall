package com.tkay.interstitial.api;

import android.content.Context;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYNetworkConfirmInfo;

public interface TYInterstitialExListener extends TYInterstitialListener {
    void onDeeplinkCallback(TYAdInfo tYAdInfo, boolean z);

    void onDownloadConfirm(Context context, TYAdInfo tYAdInfo, TYNetworkConfirmInfo tYNetworkConfirmInfo);
}
