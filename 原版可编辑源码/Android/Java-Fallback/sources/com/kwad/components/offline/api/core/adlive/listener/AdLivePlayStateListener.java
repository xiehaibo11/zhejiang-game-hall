package com.kwad.components.offline.api.core.adlive.listener;

public interface AdLivePlayStateListener {
    void onLiveAudioEnableChange(boolean r1);

    void onLivePlayCompleted();

    void onLivePlayEnd();

    void onLivePlayPause();

    void onLivePlayProgress(long r1);

    void onLivePlayResume();

    void onLivePlayStart();

    void onLivePrepared();
}
