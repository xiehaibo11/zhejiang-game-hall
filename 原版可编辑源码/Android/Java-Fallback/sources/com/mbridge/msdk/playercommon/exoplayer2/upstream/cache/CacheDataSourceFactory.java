package com.mbridge.msdk.playercommon.exoplayer2.upstream.cache;

public final class CacheDataSourceFactory implements com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory {
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache cache;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory cacheReadDataSourceFactory;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink.Factory cacheWriteDataSinkFactory;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource.EventListener eventListener;
    private final int flags;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory upstreamFactory;

    public CacheDataSourceFactory(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public CacheDataSourceFactory(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r7, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r8, int r9) {
            r6 = this;
            r4 = 2097152(0x200000, double:1.036131E-317)
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r0.<init>(r1, r2, r3, r4)
            return
    }

    public CacheDataSourceFactory(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r8, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r9, int r10, long r11) {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSourceFactory r3 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSourceFactory
            r3.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSinkFactory r4 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSinkFactory
            r4.<init>(r8, r11)
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r5 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public CacheDataSourceFactory(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r3, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink.Factory r4, int r5, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource.EventListener r6) {
            r0 = this;
            r0.<init>()
            r0.cache = r1
            r0.upstreamFactory = r2
            r0.cacheReadDataSourceFactory = r3
            r0.cacheWriteDataSinkFactory = r4
            r0.flags = r5
            r0.eventListener = r6
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource createDataSource() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource r0 = r1.createDataSource()
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource createDataSource() {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource r7 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r1 = r8.cache
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource$Factory r0 = r8.upstreamFactory
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r2 = r0.createDataSource()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource$Factory r0 = r8.cacheReadDataSourceFactory
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r3 = r0.createDataSource()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink$Factory r0 = r8.cacheWriteDataSinkFactory
            if (r0 == 0) goto L19
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink r0 = r0.createDataSink()
            goto L1a
        L19:
            r0 = 0
        L1a:
            r4 = r0
            int r5 = r8.flags
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource$EventListener r6 = r8.eventListener
            r0 = r7
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return r7
    }
}
