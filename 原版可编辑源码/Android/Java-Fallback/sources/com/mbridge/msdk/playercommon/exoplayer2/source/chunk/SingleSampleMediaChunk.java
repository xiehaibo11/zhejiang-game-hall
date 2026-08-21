package com.mbridge.msdk.playercommon.exoplayer2.source.chunk;

public final class SingleSampleMediaChunk extends com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk {
    private volatile int bytesLoaded;
    private volatile boolean loadCompleted;
    private final com.mbridge.msdk.playercommon.exoplayer2.Format sampleFormat;
    private final int trackType;

    public SingleSampleMediaChunk(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r16, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r17, com.mbridge.msdk.playercommon.exoplayer2.Format r18, int r19, java.lang.Object r20, long r21, long r23, long r25, int r27, com.mbridge.msdk.playercommon.exoplayer2.Format r28) {
            r15 = this;
            r14 = r15
            r10 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0 = r15
            r1 = r16
            r2 = r17
            r3 = r18
            r4 = r19
            r5 = r20
            r6 = r21
            r8 = r23
            r12 = r25
            r0.<init>(r1, r2, r3, r4, r5, r6, r8, r10, r12)
            r0 = r27
            r14.trackType = r0
            r0 = r28
            r14.sampleFormat = r0
            return
    }

    @Override
    public final long bytesLoaded() {
            r2 = this;
            int r0 = r2.bytesLoaded
            long r0 = (long) r0
            return r0
    }

    @Override
    public final void cancelLoad() {
            r0 = this;
            return
    }

    @Override
    public final boolean isLoadCompleted() {
            r1 = this;
            boolean r0 = r1.loadCompleted
            return r0
    }

    @Override
    public final void load() throws java.io.IOException, java.lang.InterruptedException {
            r11 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r0 = r11.dataSpec
            int r1 = r11.bytesLoaded
            long r1 = (long) r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r0 = r0.subrange(r1)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = r11.dataSource     // Catch: java.lang.Throwable -> L5d
            long r0 = r1.open(r0)     // Catch: java.lang.Throwable -> L5d
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L19
            int r2 = r11.bytesLoaded     // Catch: java.lang.Throwable -> L5d
            long r2 = (long) r2     // Catch: java.lang.Throwable -> L5d
            long r0 = r0 + r2
        L19:
            r5 = r0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.DefaultExtractorInput r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.DefaultExtractorInput     // Catch: java.lang.Throwable -> L5d
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r2 = r11.dataSource     // Catch: java.lang.Throwable -> L5d
            int r1 = r11.bytesLoaded     // Catch: java.lang.Throwable -> L5d
            long r3 = (long) r1     // Catch: java.lang.Throwable -> L5d
            r1 = r0
            r1.<init>(r2, r3, r5)     // Catch: java.lang.Throwable -> L5d
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunkOutput r1 = r11.getOutput()     // Catch: java.lang.Throwable -> L5d
            r2 = 0
            r1.setSampleOffsetUs(r2)     // Catch: java.lang.Throwable -> L5d
            int r2 = r11.trackType     // Catch: java.lang.Throwable -> L5d
            r3 = 0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r4 = r1.track(r3, r2)     // Catch: java.lang.Throwable -> L5d
            com.mbridge.msdk.playercommon.exoplayer2.Format r1 = r11.sampleFormat     // Catch: java.lang.Throwable -> L5d
            r4.format(r1)     // Catch: java.lang.Throwable -> L5d
        L3a:
            r1 = -1
            r2 = 1
            if (r3 == r1) goto L4b
            int r1 = r11.bytesLoaded     // Catch: java.lang.Throwable -> L5d
            int r1 = r1 + r3
            r11.bytesLoaded = r1     // Catch: java.lang.Throwable -> L5d
            r1 = 2147483647(0x7fffffff, float:NaN)
            int r3 = r4.sampleData(r0, r1, r2)     // Catch: java.lang.Throwable -> L5d
            goto L3a
        L4b:
            int r8 = r11.bytesLoaded     // Catch: java.lang.Throwable -> L5d
            long r5 = r11.startTimeUs     // Catch: java.lang.Throwable -> L5d
            r7 = 1
            r9 = 0
            r10 = 0
            r4.sampleMetadata(r5, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L5d
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r11.dataSource
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r0)
            r11.loadCompleted = r2
            return
        L5d:
            r0 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = r11.dataSource
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r1)
            throw r0
    }
}
