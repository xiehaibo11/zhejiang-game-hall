package com.qq.e.ads.interstitial2;

public interface UnifiedInterstitialADListener {
    void onADClicked();

    void onADClosed();

    void onADExposure();

    void onADLeftApplication();

    void onADOpened();

    void onADReceive();

    void onNoAD(com.qq.e.comm.util.AdError r1);

    void onRenderFail();

    void onRenderSuccess();

    void onVideoCached();
}
