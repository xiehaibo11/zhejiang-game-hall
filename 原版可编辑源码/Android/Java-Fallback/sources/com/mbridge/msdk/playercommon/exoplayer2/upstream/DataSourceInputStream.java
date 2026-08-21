package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class DataSourceInputStream extends java.io.InputStream {
    private boolean closed;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource dataSource;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec dataSpec;
    private boolean opened;
    private final byte[] singleByteArray;
    private long totalBytesRead;

    public DataSourceInputStream(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.opened = r0
            r1.closed = r0
            r1.dataSource = r2
            r1.dataSpec = r3
            r2 = 1
            byte[] r2 = new byte[r2]
            r1.singleByteArray = r2
            return
    }

    private void checkOpened() throws java.io.IOException {
            r2 = this;
            boolean r0 = r2.opened
            if (r0 != 0) goto Le
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r2.dataSource
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r1 = r2.dataSpec
            r0.open(r1)
            r0 = 1
            r2.opened = r0
        Le:
            return
    }

    public final long bytesRead() {
            r2 = this;
            long r0 = r2.totalBytesRead
            return r0
    }

    @Override
    public final void close() throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Lc
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r1.dataSource
            r0.close()
            r0 = 1
            r1.closed = r0
        Lc:
            return
    }

    public final void open() throws java.io.IOException {
            r0 = this;
            r0.checkOpened()
            return
    }

    @Override
    public final int read() throws java.io.IOException {
            r2 = this;
            byte[] r0 = r2.singleByteArray
            int r0 = r2.read(r0)
            r1 = -1
            if (r0 != r1) goto La
            goto L11
        La:
            byte[] r0 = r2.singleByteArray
            r1 = 0
            r0 = r0[r1]
            r1 = r0 & 255(0xff, float:3.57E-43)
        L11:
            return r1
    }

    @Override
    public final int read(byte[] r3) throws java.io.IOException {
            r2 = this;
            int r0 = r3.length
            r1 = 0
            int r3 = r2.read(r3, r1, r0)
            return r3
    }

    @Override
    public final int read(byte[] r3, int r4, int r5) throws java.io.IOException {
            r2 = this;
            boolean r0 = r2.closed
            r0 = r0 ^ 1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            r2.checkOpened()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r2.dataSource
            int r3 = r0.read(r3, r4, r5)
            r4 = -1
            if (r3 != r4) goto L14
            return r4
        L14:
            long r4 = r2.totalBytesRead
            long r0 = (long) r3
            long r4 = r4 + r0
            r2.totalBytesRead = r4
            return r3
    }
}
