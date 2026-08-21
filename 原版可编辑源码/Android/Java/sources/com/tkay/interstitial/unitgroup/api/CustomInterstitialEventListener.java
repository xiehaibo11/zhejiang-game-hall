package com.tkay.interstitial.unitgroup.api;

import android.content.Context;
import com.tkay.core.api.TYNetworkConfirmInfo;

public interface CustomInterstitialEventListener {
    void onDeeplinkCallback(boolean z);

    void onDownloadConfirm(Context context, TYNetworkConfirmInfo tYNetworkConfirmInfo);

    void onInterstitialAdClicked();

    void onInterstitialAdClose();

    void onInterstitialAdShow();

    void onInterstitialAdVideoEnd();

    void onInterstitialAdVideoError(String str, String str2);

    void onInterstitialAdVideoStart();
}
