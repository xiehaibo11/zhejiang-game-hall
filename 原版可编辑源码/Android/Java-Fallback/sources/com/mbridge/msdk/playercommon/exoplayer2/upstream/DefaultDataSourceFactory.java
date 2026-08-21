package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class DefaultDataSourceFactory implements com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory {
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory baseDataSourceFactory;
    private final android.content.Context context;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource> listener;

    public DefaultDataSourceFactory(android.content.Context r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource> r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r3) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = r1.getApplicationContext()
            r0.context = r1
            r0.listener = r2
            r0.baseDataSourceFactory = r3
            return
    }

    public DefaultDataSourceFactory(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public DefaultDataSourceFactory(android.content.Context r2, java.lang.String r3, com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource> r4) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSourceFactory r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSourceFactory
            r0.<init>(r3, r4)
            r1.<init>(r2, r4, r0)
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource createDataSource() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultDataSource r0 = r1.createDataSource()
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultDataSource createDataSource() {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultDataSource r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultDataSource
            android.content.Context r1 = r4.context
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource> r2 = r4.listener
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource$Factory r3 = r4.baseDataSourceFactory
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r3 = r3.createDataSource()
            r0.<init>(r1, r2, r3)
            return r0
    }
}
