package com.mbridge.msdk.playercommon.exoplayer2.source.chunk;

public final class InitializationChunk extends com.mbridge.msdk.playercommon.exoplayer2.source.chunk.Chunk {
    private volatile int bytesLoaded;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper extractorWrapper;
    private volatile boolean loadCanceled;

    public InitializationChunk(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r12, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r13, com.mbridge.msdk.playercommon.exoplayer2.Format r14, int r15, java.lang.Object r16, com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper r17) {
            r11 = this;
            r3 = 2
            r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r9 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0 = r11
            r1 = r12
            r2 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r9)
            r1 = r17
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
    public final void load() throws java.io.IOException, java.lang.InterruptedException {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r0 = r8.dataSpec
            int r1 = r8.bytesLoaded
            long r1 = (long) r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r0 = r0.subrange(r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.DefaultExtractorInput r7 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.DefaultExtractorInput     // Catch: java.lang.Throwable -> L60
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r2 = r8.dataSource     // Catch: java.lang.Throwable -> L60
            long r3 = r0.absoluteStreamPosition     // Catch: java.lang.Throwable -> L60
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = r8.dataSource     // Catch: java.lang.Throwable -> L60
            long r5 = r1.open(r0)     // Catch: java.lang.Throwable -> L60
            r1 = r7
            r1.<init>(r2, r3, r5)     // Catch: java.lang.Throwable -> L60
            int r0 = r8.bytesLoaded     // Catch: java.lang.Throwable -> L60
            r1 = 0
            if (r0 != 0) goto L28
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper r0 = r8.extractorWrapper     // Catch: java.lang.Throwable -> L60
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0.init(r1, r2)     // Catch: java.lang.Throwable -> L60
        L28:
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper r0 = r8.extractorWrapper     // Catch: java.lang.Throwable -> L52
            com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor r0 = r0.extractor     // Catch: java.lang.Throwable -> L52
            r2 = 0
            r3 = r2
        L2e:
            if (r3 != 0) goto L39
            boolean r4 = r8.loadCanceled     // Catch: java.lang.Throwable -> L52
            if (r4 != 0) goto L39
            int r3 = r0.read(r7, r1)     // Catch: java.lang.Throwable -> L52
            goto L2e
        L39:
            r0 = 1
            if (r3 == r0) goto L3d
            r2 = r0
        L3d:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r2)     // Catch: java.lang.Throwable -> L52
            long r0 = r7.getPosition()     // Catch: java.lang.Throwable -> L60
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r2 = r8.dataSpec     // Catch: java.lang.Throwable -> L60
            long r2 = r2.absoluteStreamPosition     // Catch: java.lang.Throwable -> L60
            long r0 = r0 - r2
            int r0 = (int) r0     // Catch: java.lang.Throwable -> L60
            r8.bytesLoaded = r0     // Catch: java.lang.Throwable -> L60
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r8.dataSource
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r0)
            return
        L52:
            r0 = move-exception
            long r1 = r7.getPosition()     // Catch: java.lang.Throwable -> L60
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r3 = r8.dataSpec     // Catch: java.lang.Throwable -> L60
            long r3 = r3.absoluteStreamPosition     // Catch: java.lang.Throwable -> L60
            long r1 = r1 - r3
            int r1 = (int) r1     // Catch: java.lang.Throwable -> L60
            r8.bytesLoaded = r1     // Catch: java.lang.Throwable -> L60
            throw r0     // Catch: java.lang.Throwable -> L60
        L60:
            r0 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = r8.dataSource
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r1)
            throw r0
    }
}
