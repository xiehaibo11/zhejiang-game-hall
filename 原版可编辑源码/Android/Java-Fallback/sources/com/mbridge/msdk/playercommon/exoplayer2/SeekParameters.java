package com.mbridge.msdk.playercommon.exoplayer2;

public final class SeekParameters {
    public static final com.mbridge.msdk.playercommon.exoplayer2.SeekParameters CLOSEST_SYNC = null;
    public static final com.mbridge.msdk.playercommon.exoplayer2.SeekParameters DEFAULT = null;
    public static final com.mbridge.msdk.playercommon.exoplayer2.SeekParameters EXACT = null;
    public static final com.mbridge.msdk.playercommon.exoplayer2.SeekParameters NEXT_SYNC = null;
    public static final com.mbridge.msdk.playercommon.exoplayer2.SeekParameters PREVIOUS_SYNC = null;
    public final long toleranceAfterUs;
    public final long toleranceBeforeUs;

    static {
            com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r0 = new com.mbridge.msdk.playercommon.exoplayer2.SeekParameters
            r1 = 0
            r0.<init>(r1, r1)
            com.mbridge.msdk.playercommon.exoplayer2.SeekParameters.EXACT = r0
            com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r0 = new com.mbridge.msdk.playercommon.exoplayer2.SeekParameters
            r3 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r0.<init>(r3, r3)
            com.mbridge.msdk.playercommon.exoplayer2.SeekParameters.CLOSEST_SYNC = r0
            com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r0 = new com.mbridge.msdk.playercommon.exoplayer2.SeekParameters
            r0.<init>(r3, r1)
            com.mbridge.msdk.playercommon.exoplayer2.SeekParameters.PREVIOUS_SYNC = r0
            com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r0 = new com.mbridge.msdk.playercommon.exoplayer2.SeekParameters
            r0.<init>(r1, r3)
            com.mbridge.msdk.playercommon.exoplayer2.SeekParameters.NEXT_SYNC = r0
            com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r0 = com.mbridge.msdk.playercommon.exoplayer2.SeekParameters.EXACT
            com.mbridge.msdk.playercommon.exoplayer2.SeekParameters.DEFAULT = r0
            return
    }

    public SeekParameters(long r6, long r8) {
            r5 = this;
            r5.<init>()
            r0 = 0
            int r2 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            r3 = 1
            r4 = 0
            if (r2 < 0) goto Ld
            r2 = r3
            goto Le
        Ld:
            r2 = r4
        Le:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r2)
            int r0 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r0 < 0) goto L16
            goto L17
        L16:
            r3 = r4
        L17:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r3)
            r5.toleranceBeforeUs = r6
            r5.toleranceAfterUs = r8
            return
    }

    public final boolean equals(java.lang.Object r7) {
            r6 = this;
            r0 = 1
            if (r6 != r7) goto L4
            return r0
        L4:
            r1 = 0
            if (r7 == 0) goto L27
            java.lang.Class r2 = r6.getClass()
            java.lang.Class r3 = r7.getClass()
            if (r2 == r3) goto L12
            goto L27
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r7 = (com.mbridge.msdk.playercommon.exoplayer2.SeekParameters) r7
            long r2 = r6.toleranceBeforeUs
            long r4 = r7.toleranceBeforeUs
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L25
            long r2 = r6.toleranceAfterUs
            long r4 = r7.toleranceAfterUs
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 != 0) goto L25
            goto L26
        L25:
            r0 = r1
        L26:
            return r0
        L27:
            return r1
    }

    public final int hashCode() {
            r3 = this;
            long r0 = r3.toleranceBeforeUs
            int r0 = (int) r0
            int r0 = r0 * 31
            long r1 = r3.toleranceAfterUs
            int r1 = (int) r1
            int r0 = r0 + r1
            return r0
    }
}
