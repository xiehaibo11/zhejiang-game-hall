package com.mbridge.msdk.playercommon.exoplayer2.source.chunk;

public class ContainerMediaChunk extends com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk {
    private volatile int bytesLoaded;
    private final int chunkCount;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper extractorWrapper;
    private volatile boolean loadCanceled;
    private volatile boolean loadCompleted;
    private final long sampleOffsetUs;

    public ContainerMediaChunk(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r4, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r5, com.mbridge.msdk.playercommon.exoplayer2.Format r6, int r7, java.lang.Object r8, long r9, long r11, long r13, long r15, int r17, long r18, com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper r20) {
            r3 = this;
            r0 = r3
            r3.<init>(r4, r5, r6, r7, r8, r9, r11, r13, r15)
            r1 = r17
            r0.chunkCount = r1
            r1 = r18
            r0.sampleOffsetUs = r1
            r1 = r20
            r0.extractorWrapper = r1
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
            r1 = this;
            r0 = 1
            r1.loadCanceled = r0
            return
    }

    @Override
    public long getNextChunkIndex() {
            r4 = this;
            long r0 = r4.chunkIndex
            int r2 = r4.chunkCount
            long r2 = (long) r2
            long r0 = r0 + r2
            return r0
    }

    @Override
    public boolean isLoadCompleted() {
            r1 = this;
            boolean r0 = r1.loadCompleted
            return r0
    }

    @Override
    public final void load() throws java.io.IOException, java.lang.InterruptedException {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r0 = r8.dataSpec
            int r1 = r8.bytesLoaded
            long r1 = (long) r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r0 = r0.subrange(r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.DefaultExtractorInput r7 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.DefaultExtractorInput     // Catch: java.lang.Throwable -> L79
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r2 = r8.dataSource     // Catch: java.lang.Throwable -> L79
            long r3 = r0.absoluteStreamPosition     // Catch: java.lang.Throwable -> L79
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = r8.dataSource     // Catch: java.lang.Throwable -> L79
            long r5 = r1.open(r0)     // Catch: java.lang.Throwable -> L79
            r1 = r7
            r1.<init>(r2, r3, r5)     // Catch: java.lang.Throwable -> L79
            int r0 = r8.bytesLoaded     // Catch: java.lang.Throwable -> L79
            if (r0 != 0) goto L3e
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunkOutput r0 = r8.getOutput()     // Catch: java.lang.Throwable -> L79
            long r1 = r8.sampleOffsetUs     // Catch: java.lang.Throwable -> L79
            r0.setSampleOffsetUs(r1)     // Catch: java.lang.Throwable -> L79
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper r1 = r8.extractorWrapper     // Catch: java.lang.Throwable -> L79
            long r2 = r8.seekTimeUs     // Catch: java.lang.Throwable -> L79
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L36
            r2 = 0
            goto L3b
        L36:
            long r2 = r8.seekTimeUs     // Catch: java.lang.Throwable -> L79
            long r4 = r8.sampleOffsetUs     // Catch: java.lang.Throwable -> L79
            long r2 = r2 - r4
        L3b:
            r1.init(r0, r2)     // Catch: java.lang.Throwable -> L79
        L3e:
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper r0 = r8.extractorWrapper     // Catch: java.lang.Throwable -> L6b
            com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor r0 = r0.extractor     // Catch: java.lang.Throwable -> L6b
            r1 = 0
            r2 = r1
        L44:
            if (r2 != 0) goto L50
            boolean r3 = r8.loadCanceled     // Catch: java.lang.Throwable -> L6b
            if (r3 != 0) goto L50
            r2 = 0
            int r2 = r0.read(r7, r2)     // Catch: java.lang.Throwable -> L6b
            goto L44
        L50:
            r0 = 1
            if (r2 == r0) goto L54
            r1 = r0
        L54:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r1)     // Catch: java.lang.Throwable -> L6b
            long r1 = r7.getPosition()     // Catch: java.lang.Throwable -> L79
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r3 = r8.dataSpec     // Catch: java.lang.Throwable -> L79
            long r3 = r3.absoluteStreamPosition     // Catch: java.lang.Throwable -> L79
            long r1 = r1 - r3
            int r1 = (int) r1     // Catch: java.lang.Throwable -> L79
            r8.bytesLoaded = r1     // Catch: java.lang.Throwable -> L79
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = r8.dataSource
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r1)
            r8.loadCompleted = r0
            return
        L6b:
            r0 = move-exception
            long r1 = r7.getPosition()     // Catch: java.lang.Throwable -> L79
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r3 = r8.dataSpec     // Catch: java.lang.Throwable -> L79
            long r3 = r3.absoluteStreamPosition     // Catch: java.lang.Throwable -> L79
            long r1 = r1 - r3
            int r1 = (int) r1     // Catch: java.lang.Throwable -> L79
            r8.bytesLoaded = r1     // Catch: java.lang.Throwable -> L79
            throw r0     // Catch: java.lang.Throwable -> L79
        L79:
            r0 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = r8.dataSource
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r1)
            throw r0
    }
}
