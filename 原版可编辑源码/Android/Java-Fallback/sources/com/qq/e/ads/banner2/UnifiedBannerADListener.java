package com.qq.e.ads.banner2;

public interface UnifiedBannerADListener {
    void onADClicked();

    void onADClosed();

    void onADExposure();

    void onADLeftApplication();

    void onADReceive();

    void onNoAD(com.qq.e.comm.util.AdError r1);
}
