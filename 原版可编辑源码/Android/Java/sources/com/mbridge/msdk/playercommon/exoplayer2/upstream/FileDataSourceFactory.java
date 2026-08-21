package com.mbridge.msdk.playercommon.exoplayer2.upstream;

import com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource;

public final class FileDataSourceFactory implements DataSource.Factory {
    private final TransferListener<? super FileDataSource> listener;

    public FileDataSourceFactory() {
        this(null);
    }

    public FileDataSourceFactory(TransferListener<? super FileDataSource> transferListener) {
        this.listener = transferListener;
    }

    @Override
    public final DataSource createDataSource() {
        return new FileDataSource(this.listener);
    }
}
