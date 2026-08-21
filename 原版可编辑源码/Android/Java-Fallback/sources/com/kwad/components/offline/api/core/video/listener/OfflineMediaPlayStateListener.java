package com.kwad.components.offline.api.core.video.listener;

public interface OfflineMediaPlayStateListener {
    void onMediaPlayCompleted();

    void onMediaPlayError(int r1, int r2);

    void onMediaPlayPaused();

    void onMediaPlayProgress(long r1, long r3);

    void onMediaPlayStart();

    void onMediaPlaying();

    void onMediaPrepared();

    void onMediaPreparing();
}
