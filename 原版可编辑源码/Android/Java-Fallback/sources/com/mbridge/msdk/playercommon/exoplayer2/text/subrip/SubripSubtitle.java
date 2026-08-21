package com.mbridge.msdk.playercommon.exoplayer2.text.subrip;

final class SubripSubtitle implements com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle {
    private final long[] cueTimesUs;
    private final com.mbridge.msdk.playercommon.exoplayer2.text.Cue[] cues;

    public SubripSubtitle(com.mbridge.msdk.playercommon.exoplayer2.text.Cue[] r1, long[] r2) {
            r0 = this;
            r0.<init>()
            r0.cues = r1
            r0.cueTimesUs = r2
            return
    }

    @Override
    public final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> getCues(long r4) {
            r3 = this;
            long[] r0 = r3.cueTimesUs
            r1 = 1
            r2 = 0
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.binarySearchFloor(r0, r4, r1, r2)
            r5 = -1
            if (r4 == r5) goto L19
            com.mbridge.msdk.playercommon.exoplayer2.text.Cue[] r5 = r3.cues
            r0 = r5[r4]
            if (r0 != 0) goto L12
            goto L19
        L12:
            r4 = r5[r4]
            java.util.List r4 = java.util.Collections.singletonList(r4)
            return r4
        L19:
            java.util.List r4 = java.util.Collections.emptyList()
            return r4
    }

    @Override
    public final long getEventTime(int r4) {
            r3 = this;
            r0 = 1
            r1 = 0
            if (r4 < 0) goto L6
            r2 = r0
            goto L7
        L6:
            r2 = r1
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r2)
            long[] r2 = r3.cueTimesUs
            int r2 = r2.length
            if (r4 >= r2) goto L10
            goto L11
        L10:
            r0 = r1
        L11:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
            long[] r0 = r3.cueTimesUs
            r1 = r0[r4]
            return r1
    }

    @Override
    public final int getEventTimeCount() {
            r1 = this;
            long[] r0 = r1.cueTimesUs
            int r0 = r0.length
            return r0
    }

    @Override
    public final int getNextEventTimeIndex(long r3) {
            r2 = this;
            long[] r0 = r2.cueTimesUs
            r1 = 0
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.binarySearchCeil(r0, r3, r1, r1)
            long[] r4 = r2.cueTimesUs
            int r4 = r4.length
            if (r3 >= r4) goto Ld
            goto Le
        Ld:
            r3 = -1
        Le:
            return r3
    }
}
