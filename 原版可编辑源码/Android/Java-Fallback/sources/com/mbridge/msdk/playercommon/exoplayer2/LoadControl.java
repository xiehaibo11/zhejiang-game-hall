package com.mbridge.msdk.playercommon.exoplayer2;

public interface LoadControl {
    com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator getAllocator();

    long getBackBufferDurationUs();

    void onPrepared();

    void onReleased();

    void onStopped();

    void onTracksSelected(com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r1, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r2, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r3);

    boolean retainBackBufferFromKeyframe();

    boolean shouldContinueLoading(long r1, float r3);

    boolean shouldStartPlayback(long r1, float r3, boolean r4);
}
