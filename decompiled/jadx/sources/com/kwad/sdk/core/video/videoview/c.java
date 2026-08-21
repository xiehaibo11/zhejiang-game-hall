package com.kwad.sdk.core.video.videoview;

/* JADX INFO: loaded from: classes2.dex */
public interface c {
    boolean Dw();

    int getBufferPercentage();

    long getCurrentPosition();

    long getDuration();

    boolean isIdle();

    boolean isPaused();

    void pause();

    void release();

    void restart();

    void setKsPlayLogParam(com.kwad.sdk.contentalliance.a.a.a aVar);

    void start();
}
