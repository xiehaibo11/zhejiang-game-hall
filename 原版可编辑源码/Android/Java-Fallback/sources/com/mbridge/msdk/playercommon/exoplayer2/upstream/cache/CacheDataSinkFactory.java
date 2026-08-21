package com.mbridge.msdk.playercommon.exoplayer2.upstream.cache;

public final class CacheDataSinkFactory implements com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink.Factory {
    private final int bufferSize;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache cache;
    private final long maxCacheFileSize;

    public CacheDataSinkFactory(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r2, long r3) {
            r1 = this;
            r0 = 20480(0x5000, float:2.8699E-41)
            r1.<init>(r2, r3, r0)
            return
    }

    public CacheDataSinkFactory(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r1, long r2, int r4) {
            r0 = this;
            r0.<init>()
            r0.cache = r1
            r0.maxCacheFileSize = r2
            r0.bufferSize = r4
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink createDataSink() {
            r5 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSink r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSink
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r1 = r5.cache
            long r2 = r5.maxCacheFileSize
            int r4 = r5.bufferSize
            r0.<init>(r1, r2, r4)
            return r0
    }
}
