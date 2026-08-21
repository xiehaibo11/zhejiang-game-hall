package com.mbridge.msdk.playercommon.exoplayer2.video;

public interface VideoListener {
    void onRenderedFirstFrame();

    void onVideoSizeChanged(int r1, int r2, int r3, float r4);
}
