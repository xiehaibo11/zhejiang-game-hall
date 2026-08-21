package com.mbridge.msdk.playercommon.exoplayer2.upstream.cache;

import com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink;

public final class CacheDataSinkFactory implements DataSink.Factory {
    private final int bufferSize;
    private final Cache cache;
    private final long maxCacheFileSize;

    public CacheDataSinkFactory(Cache cache, long j) {
        this(cache, j, 20480);
    }

    public CacheDataSinkFactory(Cache cache, long j, int i) {
        this.cache = cache;
        this.maxCacheFileSize = j;
        this.bufferSize = i;
    }

    @Override
    public final DataSink createDataSink() {
        return new CacheDataSink(this.cache, this.maxCacheFileSize, this.bufferSize);
    }
}
