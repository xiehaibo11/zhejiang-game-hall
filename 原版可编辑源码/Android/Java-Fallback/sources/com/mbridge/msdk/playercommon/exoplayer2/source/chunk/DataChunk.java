package com.mbridge.msdk.playercommon.exoplayer2.source.chunk;

public abstract class DataChunk extends com.mbridge.msdk.playercommon.exoplayer2.source.chunk.Chunk {
    private static final int READ_GRANULARITY = 16384;
    private byte[] data;
    private int limit;
    private volatile boolean loadCanceled;

    public DataChunk(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r12, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r13, int r14, com.mbridge.msdk.playercommon.exoplayer2.Format r15, int r16, java.lang.Object r17, byte[] r18) {
            r11 = this;
            r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r9 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0 = r11
            r1 = r12
            r2 = r13
            r3 = r14
            r4 = r15
            r5 = r16
            r6 = r17
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r9)
            r1 = r18
            r0.data = r1
            return
    }

    private void maybeExpandData() {
            r4 = this;
            byte[] r0 = r4.data
            r1 = 16384(0x4000, float:2.2959E-41)
            if (r0 != 0) goto Lb
            byte[] r0 = new byte[r1]
            r4.data = r0
            goto L19
        Lb:
            int r2 = r0.length
            int r3 = r4.limit
            int r3 = r3 + r1
            if (r2 >= r3) goto L19
            int r2 = r0.length
            int r2 = r2 + r1
            byte[] r0 = java.util.Arrays.copyOf(r0, r2)
            r4.data = r0
        L19:
            return
    }

    @Override
    public long bytesLoaded() {
            r2 = this;
            int r0 = r2.limit
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

    protected abstract void consume(byte[] r1, int r2) throws java.io.IOException;

    public byte[] getDataHolder() {
            r1 = this;
            byte[] r0 = r1.data
            return r0
    }

    @Override
    public final void load() throws java.io.IOException, java.lang.InterruptedException {
            r5 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r5.dataSource     // Catch: java.lang.Throwable -> L39
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r1 = r5.dataSpec     // Catch: java.lang.Throwable -> L39
            r0.open(r1)     // Catch: java.lang.Throwable -> L39
            r0 = 0
            r5.limit = r0     // Catch: java.lang.Throwable -> L39
        La:
            r1 = -1
            if (r0 == r1) goto L28
            boolean r0 = r5.loadCanceled     // Catch: java.lang.Throwable -> L39
            if (r0 != 0) goto L28
            r5.maybeExpandData()     // Catch: java.lang.Throwable -> L39
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r5.dataSource     // Catch: java.lang.Throwable -> L39
            byte[] r2 = r5.data     // Catch: java.lang.Throwable -> L39
            int r3 = r5.limit     // Catch: java.lang.Throwable -> L39
            r4 = 16384(0x4000, float:2.2959E-41)
            int r0 = r0.read(r2, r3, r4)     // Catch: java.lang.Throwable -> L39
            if (r0 == r1) goto La
            int r1 = r5.limit     // Catch: java.lang.Throwable -> L39
            int r1 = r1 + r0
            r5.limit = r1     // Catch: java.lang.Throwable -> L39
            goto La
        L28:
            boolean r0 = r5.loadCanceled     // Catch: java.lang.Throwable -> L39
            if (r0 != 0) goto L33
            byte[] r0 = r5.data     // Catch: java.lang.Throwable -> L39
            int r1 = r5.limit     // Catch: java.lang.Throwable -> L39
            r5.consume(r0, r1)     // Catch: java.lang.Throwable -> L39
        L33:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r5.dataSource
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r0)
            return
        L39:
            r0 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = r5.dataSource
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r1)
            throw r0
    }
}
