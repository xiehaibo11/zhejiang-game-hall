package com.mbridge.msdk.playercommon.exoplayer2.offline;

public final class DownloaderConstructorHelper {
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache cache;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory cacheReadDataSourceFactory;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink.Factory cacheWriteDataSinkFactory;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager priorityTaskManager;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory upstreamDataSourceFactory;

    public DownloaderConstructorHelper(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r7, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r8) {
            r6 = this;
            r3 = 0
            r4 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public DownloaderConstructorHelper(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r3, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink.Factory r4, com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r5) {
            r0 = this;
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r2)
            r0.cache = r1
            r0.upstreamDataSourceFactory = r2
            r0.cacheReadDataSourceFactory = r3
            r0.cacheWriteDataSinkFactory = r4
            r0.priorityTaskManager = r5
            return
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource buildCacheDataSource(boolean r9) {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource$Factory r0 = r8.cacheReadDataSourceFactory
            if (r0 == 0) goto L9
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r0.createDataSource()
            goto Le
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource
            r0.<init>()
        Le:
            r4 = r0
            if (r9 == 0) goto L1f
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource r9 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r2 = r8.cache
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DummyDataSource r3 = com.mbridge.msdk.playercommon.exoplayer2.upstream.DummyDataSource.INSTANCE
            r5 = 0
            r6 = 1
            r7 = 0
            r1 = r9
            r1.<init>(r2, r3, r4, r5, r6, r7)
            return r9
        L1f:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink$Factory r9 = r8.cacheWriteDataSinkFactory
            if (r9 == 0) goto L28
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink r9 = r9.createDataSink()
            goto L32
        L28:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSink r9 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSink
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r0 = r8.cache
            r1 = 2097152(0x200000, double:1.036131E-317)
            r9.<init>(r0, r1)
        L32:
            r5 = r9
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource$Factory r9 = r8.upstreamDataSourceFactory
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r9 = r9.createDataSource()
            com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r0 = r8.priorityTaskManager
            if (r0 != 0) goto L3f
            r3 = r9
            goto L47
        L3f:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.PriorityDataSource r1 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.PriorityDataSource
            r2 = -1000(0xfffffffffffffc18, float:NaN)
            r1.<init>(r9, r0, r2)
            r3 = r1
        L47:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource r9 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r2 = r8.cache
            r6 = 1
            r7 = 0
            r1 = r9
            r1.<init>(r2, r3, r4, r5, r6, r7)
            return r9
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache getCache() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r0 = r1.cache
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager getPriorityTaskManager() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r0 = r1.priorityTaskManager
            if (r0 == 0) goto L5
            goto La
        L5:
            com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager
            r0.<init>()
        La:
            return r0
    }
}
