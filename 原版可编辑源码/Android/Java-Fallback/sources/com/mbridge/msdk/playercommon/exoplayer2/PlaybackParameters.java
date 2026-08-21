package com.mbridge.msdk.playercommon.exoplayer2;

public final class PlaybackParameters {
    public static final com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters DEFAULT = null;
    public final float pitch;
    private final int scaledUsPerMs;
    public final boolean skipSilence;
    public final float speed;

    static {
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = new com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters
            r1 = 1065353216(0x3f800000, float:1.0)
            r0.<init>(r1)
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters.DEFAULT = r0
            return
    }

    public PlaybackParameters(float r3) {
            r2 = this;
            r0 = 1065353216(0x3f800000, float:1.0)
            r1 = 0
            r2.<init>(r3, r0, r1)
            return
    }

    public PlaybackParameters(float r2, float r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public PlaybackParameters(float r5, float r6, boolean r7) {
            r4 = this;
            r4.<init>()
            r0 = 0
            int r1 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            r2 = 1
            r3 = 0
            if (r1 <= 0) goto Lc
            r1 = r2
            goto Ld
        Lc:
            r1 = r3
        Ld:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r1)
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 <= 0) goto L15
            goto L16
        L15:
            r2 = r3
        L16:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r2)
            r4.speed = r5
            r4.pitch = r6
            r4.skipSilence = r7
            r6 = 1148846080(0x447a0000, float:1000.0)
            float r5 = r5 * r6
            int r5 = java.lang.Math.round(r5)
            r4.scaledUsPerMs = r5
            return
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L2d
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L2d
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r5 = (com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters) r5
            float r2 = r4.speed
            float r3 = r5.speed
            int r2 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r2 != 0) goto L2b
            float r2 = r4.pitch
            float r3 = r5.pitch
            int r2 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r2 != 0) goto L2b
            boolean r2 = r4.skipSilence
            boolean r5 = r5.skipSilence
            if (r2 != r5) goto L2b
            goto L2c
        L2b:
            r0 = r1
        L2c:
            return r0
        L2d:
            return r1
    }

    public final long getMediaTimeUsForPlayoutTimeMs(long r3) {
            r2 = this;
            int r0 = r2.scaledUsPerMs
            long r0 = (long) r0
            long r3 = r3 * r0
            return r3
    }

    public final int hashCode() {
            r2 = this;
            float r0 = r2.speed
            int r0 = java.lang.Float.floatToRawIntBits(r0)
            r1 = 527(0x20f, float:7.38E-43)
            int r1 = r1 + r0
            int r1 = r1 * 31
            float r0 = r2.pitch
            int r0 = java.lang.Float.floatToRawIntBits(r0)
            int r1 = r1 + r0
            int r1 = r1 * 31
            boolean r0 = r2.skipSilence
            int r1 = r1 + r0
            return r1
    }
}
