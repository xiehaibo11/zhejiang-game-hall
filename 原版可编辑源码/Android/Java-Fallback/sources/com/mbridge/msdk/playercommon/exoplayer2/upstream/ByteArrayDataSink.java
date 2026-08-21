package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class ByteArrayDataSink implements com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink {
    private java.io.ByteArrayOutputStream stream;

    public ByteArrayDataSink() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void close() throws java.io.IOException {
            r1 = this;
            java.io.ByteArrayOutputStream r0 = r1.stream
            r0.close()
            return
    }

    public final byte[] getData() {
            r1 = this;
            java.io.ByteArrayOutputStream r0 = r1.stream
            if (r0 != 0) goto L6
            r0 = 0
            goto La
        L6:
            byte[] r0 = r0.toByteArray()
        La:
            return r0
    }

    @Override
    public final void open(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r5) throws java.io.IOException {
            r4 = this;
            long r0 = r5.length
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L10
            java.io.ByteArrayOutputStream r5 = new java.io.ByteArrayOutputStream
            r5.<init>()
            r4.stream = r5
            goto L29
        L10:
            long r0 = r5.length
            r2 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto L1b
            r0 = 1
            goto L1c
        L1b:
            r0 = 0
        L1c:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            long r1 = r5.length
            int r5 = (int) r1
            r0.<init>(r5)
            r4.stream = r0
        L29:
            return
    }

    @Override
    public final void write(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            java.io.ByteArrayOutputStream r0 = r1.stream
            r0.write(r2, r3, r4)
            return
    }
}
