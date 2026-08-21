package com.tkay.interstitial.api;

public abstract class TYInterstitialAutoEventListener {
    public TYInterstitialAutoEventListener() {
            r0 = this;
            r0.<init>()
            return
    }

    public void onDeeplinkCallback(com.tkay.core.api.TYAdInfo r1, boolean r2) {
            r0 = this;
            return
    }

    public void onDownloadConfirm(android.content.Context r1, com.tkay.core.api.TYAdInfo r2, com.tkay.core.api.TYNetworkConfirmInfo r3) {
            r0 = this;
            return
    }

    public abstract void onInterstitialAdClicked(com.tkay.core.api.TYAdInfo r1);

    public abstract void onInterstitialAdClose(com.tkay.core.api.TYAdInfo r1);

    public abstract void onInterstitialAdShow(com.tkay.core.api.TYAdInfo r1);

    public abstract void onInterstitialAdVideoEnd(com.tkay.core.api.TYAdInfo r1);

    public abstract void onInterstitialAdVideoError(com.tkay.core.api.AdError r1);

    public abstract void onInterstitialAdVideoStart(com.tkay.core.api.TYAdInfo r1);
}
