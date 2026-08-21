package com.kwad.components.offline.api.core.video.listener;

public interface OfflineVideoPlayStateListener extends OfflineMediaPlayStateListener {
    void onVideoPlayBufferingPaused();

    void onVideoPlayBufferingPlaying();
}
