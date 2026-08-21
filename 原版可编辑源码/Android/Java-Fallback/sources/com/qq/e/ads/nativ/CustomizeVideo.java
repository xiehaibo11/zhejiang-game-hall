package com.qq.e.ads.nativ;

public interface CustomizeVideo {
    java.lang.String getVideoUrl();

    void reportVideoCompleted();

    void reportVideoError(long r1, int r3, int r4);

    void reportVideoPause(long r1);

    void reportVideoPreload();

    void reportVideoResume(long r1);

    void reportVideoStart();
}
