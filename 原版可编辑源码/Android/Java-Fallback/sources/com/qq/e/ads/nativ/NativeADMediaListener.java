package com.qq.e.ads.nativ;

public interface NativeADMediaListener {
    void onVideoClicked();

    void onVideoCompleted();

    void onVideoError(com.qq.e.comm.util.AdError r1);

    void onVideoInit();

    void onVideoLoaded(int r1);

    void onVideoLoading();

    void onVideoPause();

    void onVideoReady();

    void onVideoResume();

    void onVideoStart();

    void onVideoStop();
}
