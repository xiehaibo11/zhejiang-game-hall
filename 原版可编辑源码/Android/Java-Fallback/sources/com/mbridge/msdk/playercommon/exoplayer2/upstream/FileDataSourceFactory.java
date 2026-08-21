package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class FileDataSourceFactory implements com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory {
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource> listener;

    public FileDataSourceFactory() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public FileDataSourceFactory(com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource> r1) {
            r0 = this;
            r0.<init>()
            r0.listener = r1
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource createDataSource() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource> r1 = r2.listener
            r0.<init>(r1)
            return r0
    }
}
