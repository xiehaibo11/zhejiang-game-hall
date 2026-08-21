package com.kwad.components.core.video;

public interface h {
    void onMediaPlayCompleted();

    void onMediaPlayError(int r1, int r2);

    void onMediaPlayPaused();

    void onMediaPlayProgress(long r1, long r3);

    void onMediaPlayStart();

    void onMediaPlaying();

    void onMediaPrepared();

    void onMediaPreparing();
}
