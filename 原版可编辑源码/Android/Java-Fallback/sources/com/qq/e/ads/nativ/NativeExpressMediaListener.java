package com.qq.e.ads.nativ;

public interface NativeExpressMediaListener {
    void onVideoCached(com.qq.e.ads.nativ.NativeExpressADView r1);

    void onVideoComplete(com.qq.e.ads.nativ.NativeExpressADView r1);

    void onVideoError(com.qq.e.ads.nativ.NativeExpressADView r1, com.qq.e.comm.util.AdError r2);

    void onVideoInit(com.qq.e.ads.nativ.NativeExpressADView r1);

    void onVideoLoading(com.qq.e.ads.nativ.NativeExpressADView r1);

    void onVideoPageClose(com.qq.e.ads.nativ.NativeExpressADView r1);

    void onVideoPageOpen(com.qq.e.ads.nativ.NativeExpressADView r1);

    void onVideoPause(com.qq.e.ads.nativ.NativeExpressADView r1);

    void onVideoReady(com.qq.e.ads.nativ.NativeExpressADView r1, long r2);

    void onVideoStart(com.qq.e.ads.nativ.NativeExpressADView r1);
}
