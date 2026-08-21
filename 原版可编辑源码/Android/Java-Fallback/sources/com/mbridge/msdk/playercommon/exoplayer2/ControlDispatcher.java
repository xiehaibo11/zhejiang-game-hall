package com.mbridge.msdk.playercommon.exoplayer2;

public interface ControlDispatcher {
    boolean dispatchSeekTo(com.mbridge.msdk.playercommon.exoplayer2.Player r1, int r2, long r3);

    boolean dispatchSetPlayWhenReady(com.mbridge.msdk.playercommon.exoplayer2.Player r1, boolean r2);

    boolean dispatchSetRepeatMode(com.mbridge.msdk.playercommon.exoplayer2.Player r1, int r2);

    boolean dispatchSetShuffleModeEnabled(com.mbridge.msdk.playercommon.exoplayer2.Player r1, boolean r2);

    boolean dispatchStop(com.mbridge.msdk.playercommon.exoplayer2.Player r1, boolean r2);
}
