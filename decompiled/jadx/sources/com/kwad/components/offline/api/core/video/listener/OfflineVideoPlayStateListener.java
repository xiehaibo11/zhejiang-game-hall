package com.kwad.components.offline.api.core.video.listener;

/* JADX INFO: loaded from: classes2.dex */
public interface OfflineVideoPlayStateListener extends OfflineMediaPlayStateListener {
    void onVideoPlayBufferingPaused();

    void onVideoPlayBufferingPlaying();
}
