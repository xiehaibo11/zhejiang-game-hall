package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class DummyDataSource implements com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource {
    public static final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory FACTORY = null;
    public static final com.mbridge.msdk.playercommon.exoplayer2.upstream.DummyDataSource INSTANCE = null;


    static {
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DummyDataSource r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DummyDataSource
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DummyDataSource.INSTANCE = r0
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DummyDataSource$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DummyDataSource$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DummyDataSource.FACTORY = r0
            return
    }

    private DummyDataSource() {
            r0 = this;
            r0.<init>()
            return
    }

    DummyDataSource(com.mbridge.msdk.playercommon.exoplayer2.upstream.DummyDataSource.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void close() throws java.io.IOException {
            r0 = this;
            return
    }

    @Override
    public final android.net.Uri getUri() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final long open(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r2) throws java.io.IOException {
            r1 = this;
            java.io.IOException r2 = new java.io.IOException
            java.lang.String r0 = "Dummy source"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public final int read(byte[] r1, int r2, int r3) throws java.io.IOException {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            r1.<init>()
            throw r1
    }
}
