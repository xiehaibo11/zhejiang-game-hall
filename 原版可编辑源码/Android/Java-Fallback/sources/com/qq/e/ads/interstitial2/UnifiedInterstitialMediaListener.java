package com.qq.e.ads.interstitial2;

public interface UnifiedInterstitialMediaListener {
    void onVideoComplete();

    void onVideoError(com.qq.e.comm.util.AdError r1);

    void onVideoInit();

    void onVideoLoading();

    void onVideoPageClose();

    void onVideoPageOpen();

    void onVideoPause();

    void onVideoReady(long r1);

    void onVideoStart();
}
