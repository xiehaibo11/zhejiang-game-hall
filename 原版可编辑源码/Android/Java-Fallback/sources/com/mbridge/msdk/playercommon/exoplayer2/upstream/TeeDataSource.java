package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class TeeDataSource implements com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource {
    private long bytesRemaining;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink dataSink;
    private boolean dataSinkNeedsClosing;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource upstream;

    public TeeDataSource(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink r2) {
            r0 = this;
            r0.<init>()
            java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r1)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource) r1
            r0.upstream = r1
            java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r2)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink r1 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink) r1
            r0.dataSink = r1
            return
    }

    @Override
    public final void close() throws java.io.IOException {
            r3 = this;
            r0 = 0
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = r3.upstream     // Catch: java.lang.Throwable -> L12
            r1.close()     // Catch: java.lang.Throwable -> L12
            boolean r1 = r3.dataSinkNeedsClosing
            if (r1 == 0) goto L11
            r3.dataSinkNeedsClosing = r0
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink r0 = r3.dataSink
            r0.close()
        L11:
            return
        L12:
            r1 = move-exception
            boolean r2 = r3.dataSinkNeedsClosing
            if (r2 == 0) goto L1e
            r3.dataSinkNeedsClosing = r0
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink r0 = r3.dataSink
            r0.close()
        L1e:
            throw r1
    }

    @Override
    public final android.net.Uri getUri() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r1.upstream
            android.net.Uri r0 = r0.getUri()
            return r0
    }

    @Override
    public final long open(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r12) throws java.io.IOException {
            r11 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r11.upstream
            long r0 = r0.open(r12)
            r11.bytesRemaining = r0
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto Lf
            return r2
        Lf:
            long r0 = r12.length
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L30
            long r0 = r11.bytesRemaining
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L30
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec
            android.net.Uri r2 = r12.uri
            long r3 = r12.absoluteStreamPosition
            long r5 = r12.position
            long r7 = r11.bytesRemaining
            java.lang.String r9 = r12.key
            int r10 = r12.flags
            r1 = r0
            r1.<init>(r2, r3, r5, r7, r9, r10)
            r12 = r0
        L30:
            r0 = 1
            r11.dataSinkNeedsClosing = r0
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink r0 = r11.dataSink
            r0.open(r12)
            long r0 = r11.bytesRemaining
            return r0
    }

    @Override
    public final int read(byte[] r5, int r6, int r7) throws java.io.IOException {
            r4 = this;
            long r0 = r4.bytesRemaining
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto La
            r5 = -1
            return r5
        La:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r4.upstream
            int r7 = r0.read(r5, r6, r7)
            if (r7 <= 0) goto L23
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink r0 = r4.dataSink
            r0.write(r5, r6, r7)
            long r5 = r4.bytesRemaining
            r0 = -1
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 == 0) goto L23
            long r0 = (long) r7
            long r5 = r5 - r0
            r4.bytesRemaining = r5
        L23:
            return r7
    }
}
