package com.mbridge.msdk.playercommon.exoplayer2.util;

public interface MediaClock {
    com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters getPlaybackParameters();

    long getPositionUs();

    com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters setPlaybackParameters(com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r1);
}
