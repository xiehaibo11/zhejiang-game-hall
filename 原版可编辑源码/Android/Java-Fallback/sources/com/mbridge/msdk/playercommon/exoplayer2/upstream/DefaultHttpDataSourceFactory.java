package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class DefaultHttpDataSourceFactory extends com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.BaseFactory {
    private final boolean allowCrossProtocolRedirects;
    private final int connectTimeoutMillis;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource> listener;
    private final int readTimeoutMillis;
    private final java.lang.String userAgent;

    public DefaultHttpDataSourceFactory(java.lang.String r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public DefaultHttpDataSourceFactory(java.lang.String r7, com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource> r8) {
            r6 = this;
            r3 = 8000(0x1f40, float:1.121E-41)
            r4 = 8000(0x1f40, float:1.121E-41)
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public DefaultHttpDataSourceFactory(java.lang.String r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource> r2, int r3, int r4, boolean r5) {
            r0 = this;
            r0.<init>()
            r0.userAgent = r1
            r0.listener = r2
            r0.connectTimeoutMillis = r3
            r0.readTimeoutMillis = r4
            r0.allowCrossProtocolRedirects = r5
            return
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSource createDataSourceInternal(com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.RequestProperties r10) {
            r9 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSource r8 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSource
            java.lang.String r1 = r9.userAgent
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource> r3 = r9.listener
            int r4 = r9.connectTimeoutMillis
            int r5 = r9.readTimeoutMillis
            boolean r6 = r9.allowCrossProtocolRedirects
            r2 = 0
            r0 = r8
            r7 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return r8
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource createDataSourceInternal(com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.RequestProperties r1) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSource r1 = r0.createDataSourceInternal(r1)
            return r1
    }
}
