package com.tkay.interstitial.api;

import android.content.Context;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYNetworkConfirmInfo;

/* JADX INFO: loaded from: classes3.dex */
public abstract class TYInterstitialAutoEventListener {
    public void onDeeplinkCallback(TYAdInfo tYAdInfo, boolean z) {
    }

    public void onDownloadConfirm(Context context, TYAdInfo tYAdInfo, TYNetworkConfirmInfo tYNetworkConfirmInfo) {
    }

    public abstract void onInterstitialAdClicked(TYAdInfo tYAdInfo);

    public abstract void onInterstitialAdClose(TYAdInfo tYAdInfo);

    public abstract void onInterstitialAdShow(TYAdInfo tYAdInfo);

    public abstract void onInterstitialAdVideoEnd(TYAdInfo tYAdInfo);

    public abstract void onInterstitialAdVideoError(AdError adError);

    public abstract void onInterstitialAdVideoStart(TYAdInfo tYAdInfo);
}
