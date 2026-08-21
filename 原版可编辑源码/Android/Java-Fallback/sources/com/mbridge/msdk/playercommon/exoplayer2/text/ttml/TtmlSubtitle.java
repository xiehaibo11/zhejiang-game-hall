package com.mbridge.msdk.playercommon.exoplayer2.text.ttml;

final class TtmlSubtitle implements com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle {
    private final long[] eventTimesUs;
    private final java.util.Map<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle> globalStyles;
    private final java.util.Map<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlRegion> regionMap;
    private final com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode root;

    public TtmlSubtitle(com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode r1, java.util.Map<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle> r2, java.util.Map<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlRegion> r3) {
            r0 = this;
            r0.<init>()
            r0.root = r1
            r0.regionMap = r3
            if (r2 == 0) goto Le
            java.util.Map r2 = java.util.Collections.unmodifiableMap(r2)
            goto L12
        Le:
            java.util.Map r2 = java.util.Collections.emptyMap()
        L12:
            r0.globalStyles = r2
            long[] r1 = r1.getEventTimesUs()
            r0.eventTimesUs = r1
            return
    }

    @Override
    public final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> getCues(long r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode r0 = r3.root
            java.util.Map<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle> r1 = r3.globalStyles
            java.util.Map<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlRegion> r2 = r3.regionMap
            java.util.List r4 = r0.getCues(r4, r1, r2)
            return r4
    }

    @Override
    public final long getEventTime(int r4) {
            r3 = this;
            long[] r0 = r3.eventTimesUs
            r1 = r0[r4]
            return r1
    }

    @Override
    public final int getEventTimeCount() {
            r1 = this;
            long[] r0 = r1.eventTimesUs
            int r0 = r0.length
            return r0
    }

    final java.util.Map<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle> getGlobalStyles() {
            r1 = this;
            java.util.Map<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle> r0 = r1.globalStyles
            return r0
    }

    @Override
    public final int getNextEventTimeIndex(long r3) {
            r2 = this;
            long[] r0 = r2.eventTimesUs
            r1 = 0
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.binarySearchCeil(r0, r3, r1, r1)
            long[] r4 = r2.eventTimesUs
            int r4 = r4.length
            if (r3 >= r4) goto Ld
            goto Le
        Ld:
            r3 = -1
        Le:
            return r3
    }

    final com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode getRoot() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode r0 = r1.root
            return r0
    }
}
