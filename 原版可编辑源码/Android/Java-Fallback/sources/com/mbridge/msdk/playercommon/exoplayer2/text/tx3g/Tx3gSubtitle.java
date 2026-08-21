package com.mbridge.msdk.playercommon.exoplayer2.text.tx3g;

final class Tx3gSubtitle implements com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle {
    public static final com.mbridge.msdk.playercommon.exoplayer2.text.tx3g.Tx3gSubtitle EMPTY = null;
    private final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> cues;

    static {
            com.mbridge.msdk.playercommon.exoplayer2.text.tx3g.Tx3gSubtitle r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.tx3g.Tx3gSubtitle
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.text.tx3g.Tx3gSubtitle.EMPTY = r0
            return
    }

    private Tx3gSubtitle() {
            r1 = this;
            r1.<init>()
            java.util.List r0 = java.util.Collections.emptyList()
            r1.cues = r0
            return
    }

    public Tx3gSubtitle(com.mbridge.msdk.playercommon.exoplayer2.text.Cue r1) {
            r0 = this;
            r0.<init>()
            java.util.List r1 = java.util.Collections.singletonList(r1)
            r0.cues = r1
            return
    }

    @Override
    public final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> getCues(long r3) {
            r2 = this;
            r0 = 0
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 < 0) goto L9
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> r3 = r2.cues
            goto Ld
        L9:
            java.util.List r3 = java.util.Collections.emptyList()
        Ld:
            return r3
    }

    @Override
    public final long getEventTime(int r3) {
            r2 = this;
            if (r3 != 0) goto L4
            r3 = 1
            goto L5
        L4:
            r3 = 0
        L5:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r3)
            r0 = 0
            return r0
    }

    @Override
    public final int getEventTimeCount() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final int getNextEventTimeIndex(long r3) {
            r2 = this;
            r0 = 0
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 >= 0) goto L8
            r3 = 0
            goto L9
        L8:
            r3 = -1
        L9:
            return r3
    }
}
