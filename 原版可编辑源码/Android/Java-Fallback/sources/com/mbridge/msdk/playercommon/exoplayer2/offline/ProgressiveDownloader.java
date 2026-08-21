package com.mbridge.msdk.playercommon.exoplayer2.offline;

public final class ProgressiveDownloader implements com.mbridge.msdk.playercommon.exoplayer2.offline.Downloader {
    private static final int BUFFER_SIZE_BYTES = 131072;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache cache;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil.CachingCounters cachingCounters;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource dataSource;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec dataSpec;
    private final java.util.concurrent.atomic.AtomicBoolean isCanceled;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager priorityTaskManager;

    public ProgressiveDownloader(android.net.Uri r10, java.lang.String r11, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloaderConstructorHelper r12) {
            r9 = this;
            r9.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r8 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec
            r2 = 0
            r4 = -1
            r7 = 0
            r0 = r8
            r1 = r10
            r6 = r11
            r0.<init>(r1, r2, r4, r6, r7)
            r9.dataSpec = r8
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r10 = r12.getCache()
            r9.cache = r10
            r10 = 0
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource r10 = r12.buildCacheDataSource(r10)
            r9.dataSource = r10
            com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r10 = r12.getPriorityTaskManager()
            r9.priorityTaskManager = r10
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil$CachingCounters r10 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil$CachingCounters
            r10.<init>()
            r9.cachingCounters = r10
            java.util.concurrent.atomic.AtomicBoolean r10 = new java.util.concurrent.atomic.AtomicBoolean
            r10.<init>()
            r9.isCanceled = r10
            return
    }

    @Override
    public final void cancel() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.isCanceled
            r1 = 1
            r0.set(r1)
            return
    }

    @Override
    public final void download() throws java.lang.InterruptedException, java.io.IOException {
            r11 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r0 = r11.priorityTaskManager
            r1 = -1000(0xfffffffffffffc18, float:NaN)
            r0.add(r1)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r2 = r11.dataSpec     // Catch: java.lang.Throwable -> L23
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r3 = r11.cache     // Catch: java.lang.Throwable -> L23
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource r4 = r11.dataSource     // Catch: java.lang.Throwable -> L23
            r0 = 131072(0x20000, float:1.83671E-40)
            byte[] r5 = new byte[r0]     // Catch: java.lang.Throwable -> L23
            com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r6 = r11.priorityTaskManager     // Catch: java.lang.Throwable -> L23
            r7 = -1000(0xfffffffffffffc18, float:NaN)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil$CachingCounters r8 = r11.cachingCounters     // Catch: java.lang.Throwable -> L23
            java.util.concurrent.atomic.AtomicBoolean r9 = r11.isCanceled     // Catch: java.lang.Throwable -> L23
            r10 = 1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil.cache(r2, r3, r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L23
            com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r0 = r11.priorityTaskManager
            r0.remove(r1)
            return
        L23:
            r0 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r2 = r11.priorityTaskManager
            r2.remove(r1)
            throw r0
    }

    @Override
    public final float getDownloadPercentage() {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil$CachingCounters r0 = r4.cachingCounters
            long r0 = r0.contentLength
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto Ld
            r0 = -1082130432(0xffffffffbf800000, float:-1.0)
            goto L1a
        Ld:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil$CachingCounters r2 = r4.cachingCounters
            long r2 = r2.totalCachedBytes()
            float r2 = (float) r2
            r3 = 1120403456(0x42c80000, float:100.0)
            float r2 = r2 * r3
            float r0 = (float) r0
            float r0 = r2 / r0
        L1a:
            return r0
    }

    @Override
    public final long getDownloadedBytes() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil$CachingCounters r0 = r2.cachingCounters
            long r0 = r0.totalCachedBytes()
            return r0
    }

    @Override
    public final void remove() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r0 = r2.cache
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r1 = r2.dataSpec
            java.lang.String r1 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil.getKey(r1)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil.remove(r0, r1)
            return
    }
}
