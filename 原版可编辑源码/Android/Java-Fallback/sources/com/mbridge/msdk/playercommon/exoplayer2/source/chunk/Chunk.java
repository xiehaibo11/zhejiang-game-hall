package com.mbridge.msdk.playercommon.exoplayer2.source.chunk;

public abstract class Chunk implements com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Loadable {
    protected final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource dataSource;
    public final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec dataSpec;
    public final long endTimeUs;
    public final long startTimeUs;
    public final com.mbridge.msdk.playercommon.exoplayer2.Format trackFormat;
    public final java.lang.Object trackSelectionData;
    public final int trackSelectionReason;
    public final int type;

    public Chunk(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r2, int r3, com.mbridge.msdk.playercommon.exoplayer2.Format r4, int r5, java.lang.Object r6, long r7, long r9) {
            r0 = this;
            r0.<init>()
            java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r1)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource) r1
            r0.dataSource = r1
            java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r2)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r1 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec) r1
            r0.dataSpec = r1
            r0.type = r3
            r0.trackFormat = r4
            r0.trackSelectionReason = r5
            r0.trackSelectionData = r6
            r0.startTimeUs = r7
            r0.endTimeUs = r9
            return
    }

    public abstract long bytesLoaded();

    public final long getDurationUs() {
            r4 = this;
            long r0 = r4.endTimeUs
            long r2 = r4.startTimeUs
            long r0 = r0 - r2
            return r0
    }
}
