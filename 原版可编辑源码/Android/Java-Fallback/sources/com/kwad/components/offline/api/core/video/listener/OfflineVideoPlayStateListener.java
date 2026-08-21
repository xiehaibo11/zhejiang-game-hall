package com.kwad.components.offline.api.core.video.listener;

public interface OfflineVideoPlayStateListener extends com.kwad.components.offline.api.core.video.listener.OfflineMediaPlayStateListener {
    void onVideoPlayBufferingPaused();

    void onVideoPlayBufferingPlaying();
}
