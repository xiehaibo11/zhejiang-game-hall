package com.kwad.components.offline.api.core.api;

public interface OfflineOnAudioConflictListener {
    void onAudioBeOccupied();

    void onAudioBeReleased();
}
