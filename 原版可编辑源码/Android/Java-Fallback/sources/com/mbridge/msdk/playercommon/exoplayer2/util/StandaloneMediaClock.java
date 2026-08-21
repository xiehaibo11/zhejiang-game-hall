package com.mbridge.msdk.playercommon.exoplayer2.util;

public final class StandaloneMediaClock implements com.mbridge.msdk.playercommon.exoplayer2.util.MediaClock {
    private long baseElapsedMs;
    private long baseUs;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.Clock clock;
    private com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters playbackParameters;
    private boolean started;

    public StandaloneMediaClock(com.mbridge.msdk.playercommon.exoplayer2.util.Clock r1) {
            r0 = this;
            r0.<init>()
            r0.clock = r1
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r1 = com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters.DEFAULT
            r0.playbackParameters = r1
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters getPlaybackParameters() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = r1.playbackParameters
            return r0
    }

    @Override
    public final long getPositionUs() {
            r6 = this;
            long r0 = r6.baseUs
            boolean r2 = r6.started
            if (r2 == 0) goto L25
            com.mbridge.msdk.playercommon.exoplayer2.util.Clock r2 = r6.clock
            long r2 = r2.elapsedRealtime()
            long r4 = r6.baseElapsedMs
            long r2 = r2 - r4
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r4 = r6.playbackParameters
            float r4 = r4.speed
            r5 = 1065353216(0x3f800000, float:1.0)
            int r4 = (r4 > r5 ? 1 : (r4 == r5 ? 0 : -1))
            if (r4 != 0) goto L1e
            long r2 = com.mbridge.msdk.playercommon.exoplayer2.C.msToUs(r2)
            goto L24
        L1e:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r4 = r6.playbackParameters
            long r2 = r4.getMediaTimeUsForPlayoutTimeMs(r2)
        L24:
            long r0 = r0 + r2
        L25:
            return r0
    }

    public final void resetPosition(long r1) {
            r0 = this;
            r0.baseUs = r1
            boolean r1 = r0.started
            if (r1 == 0) goto Le
            com.mbridge.msdk.playercommon.exoplayer2.util.Clock r1 = r0.clock
            long r1 = r1.elapsedRealtime()
            r0.baseElapsedMs = r1
        Le:
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters setPlaybackParameters(com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r3) {
            r2 = this;
            boolean r0 = r2.started
            if (r0 == 0) goto Lb
            long r0 = r2.getPositionUs()
            r2.resetPosition(r0)
        Lb:
            r2.playbackParameters = r3
            return r3
    }

    public final void start() {
            r2 = this;
            boolean r0 = r2.started
            if (r0 != 0) goto Lf
            com.mbridge.msdk.playercommon.exoplayer2.util.Clock r0 = r2.clock
            long r0 = r0.elapsedRealtime()
            r2.baseElapsedMs = r0
            r0 = 1
            r2.started = r0
        Lf:
            return
    }

    public final void stop() {
            r2 = this;
            boolean r0 = r2.started
            if (r0 == 0) goto Le
            long r0 = r2.getPositionUs()
            r2.resetPosition(r0)
            r0 = 0
            r2.started = r0
        Le:
            return
    }
}
