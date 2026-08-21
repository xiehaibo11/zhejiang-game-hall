package com.qq.e.comm.pi;

public interface NEADVI extends com.qq.e.comm.pi.LADI {
    void destroy();

    void preloadVideo();

    void render();

    void reportAdNegative();

    void setAdListener(com.qq.e.comm.adevent.ADListener r1);

    void setAdSize(com.qq.e.ads.nativ.ADSize r1);
}
