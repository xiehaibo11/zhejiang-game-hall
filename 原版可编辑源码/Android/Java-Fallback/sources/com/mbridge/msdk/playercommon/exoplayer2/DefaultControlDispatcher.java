package com.mbridge.msdk.playercommon.exoplayer2;

public class DefaultControlDispatcher implements com.mbridge.msdk.playercommon.exoplayer2.ControlDispatcher {
    public DefaultControlDispatcher() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean dispatchSeekTo(com.mbridge.msdk.playercommon.exoplayer2.Player r1, int r2, long r3) {
            r0 = this;
            r1.seekTo(r2, r3)
            r1 = 1
            return r1
    }

    @Override
    public boolean dispatchSetPlayWhenReady(com.mbridge.msdk.playercommon.exoplayer2.Player r1, boolean r2) {
            r0 = this;
            r1.setPlayWhenReady(r2)
            r1 = 1
            return r1
    }

    @Override
    public boolean dispatchSetRepeatMode(com.mbridge.msdk.playercommon.exoplayer2.Player r1, int r2) {
            r0 = this;
            r1.setRepeatMode(r2)
            r1 = 1
            return r1
    }

    @Override
    public boolean dispatchSetShuffleModeEnabled(com.mbridge.msdk.playercommon.exoplayer2.Player r1, boolean r2) {
            r0 = this;
            r1.setShuffleModeEnabled(r2)
            r1 = 1
            return r1
    }

    @Override
    public boolean dispatchStop(com.mbridge.msdk.playercommon.exoplayer2.Player r1, boolean r2) {
            r0 = this;
            r1.stop(r2)
            r1 = 1
            return r1
    }
}
