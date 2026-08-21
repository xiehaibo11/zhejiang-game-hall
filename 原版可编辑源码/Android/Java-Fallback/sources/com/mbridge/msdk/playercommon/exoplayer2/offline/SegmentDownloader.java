package com.mbridge.msdk.playercommon.exoplayer2.offline;

import com.mbridge.msdk.playercommon.exoplayer2.offline.FilterableManifest;

public abstract class SegmentDownloader<M extends com.mbridge.msdk.playercommon.exoplayer2.offline.FilterableManifest<M, K>, K> implements com.mbridge.msdk.playercommon.exoplayer2.offline.Downloader {
    private static final int BUFFER_SIZE_BYTES = 131072;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache cache;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource dataSource;
    private volatile long downloadedBytes;
    private volatile int downloadedSegments;
    private final java.util.concurrent.atomic.AtomicBoolean isCanceled;
    private final android.net.Uri manifestUri;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource offlineDataSource;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager priorityTaskManager;
    private final java.util.ArrayList<K> streamKeys;
    private volatile int totalSegments;

    protected static class Segment implements java.lang.Comparable<com.mbridge.msdk.playercommon.exoplayer2.offline.SegmentDownloader.Segment> {
        public final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec dataSpec;
        public final long startTimeUs;

        public Segment(long r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r3) {
                r0 = this;
                r0.<init>()
                r0.startTimeUs = r1
                r0.dataSpec = r3
                return
        }

        public int compareTo(com.mbridge.msdk.playercommon.exoplayer2.offline.SegmentDownloader.Segment r5) {
                r4 = this;
                long r0 = r4.startTimeUs
                long r2 = r5.startTimeUs
                long r0 = r0 - r2
                r2 = 0
                int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r5 != 0) goto Ld
                r5 = 0
                goto L12
            Ld:
                if (r5 >= 0) goto L11
                r5 = -1
                goto L12
            L11:
                r5 = 1
            L12:
                return r5
        }

        @Override
        public int compareTo(com.mbridge.msdk.playercommon.exoplayer2.offline.SegmentDownloader.Segment r1) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.offline.SegmentDownloader$Segment r1 = (com.mbridge.msdk.playercommon.exoplayer2.offline.SegmentDownloader.Segment) r1
                int r1 = r0.compareTo(r1)
                return r1
        }
    }

    public SegmentDownloader(android.net.Uri r1, java.util.List<K> r2, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloaderConstructorHelper r3) {
            r0 = this;
            r0.<init>()
            r0.manifestUri = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>(r2)
            r0.streamKeys = r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r1 = r3.getCache()
            r0.cache = r1
            r1 = 0
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource r1 = r3.buildCacheDataSource(r1)
            r0.dataSource = r1
            r1 = 1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource r1 = r3.buildCacheDataSource(r1)
            r0.offlineDataSource = r1
            com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r1 = r3.getPriorityTaskManager()
            r0.priorityTaskManager = r1
            r1 = -1
            r0.totalSegments = r1
            java.util.concurrent.atomic.AtomicBoolean r1 = new java.util.concurrent.atomic.AtomicBoolean
            r1.<init>()
            r0.isCanceled = r1
            return
    }

    private java.util.List<com.mbridge.msdk.playercommon.exoplayer2.offline.SegmentDownloader.Segment> initDownload() throws java.io.IOException, java.lang.InterruptedException {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource r0 = r7.dataSource
            android.net.Uri r1 = r7.manifestUri
            com.mbridge.msdk.playercommon.exoplayer2.offline.FilterableManifest r0 = r7.getManifest(r0, r1)
            java.util.ArrayList<K> r1 = r7.streamKeys
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L18
            java.util.ArrayList<K> r1 = r7.streamKeys
            java.lang.Object r0 = r0.copy(r1)
            com.mbridge.msdk.playercommon.exoplayer2.offline.FilterableManifest r0 = (com.mbridge.msdk.playercommon.exoplayer2.offline.FilterableManifest) r0
        L18:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource r1 = r7.dataSource
            r2 = 0
            java.util.List r0 = r7.getSegments(r1, r0, r2)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil$CachingCounters r1 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil$CachingCounters
            r1.<init>()
            int r3 = r0.size()
            r7.totalSegments = r3
            r7.downloadedSegments = r2
            r2 = 0
            r7.downloadedBytes = r2
            int r2 = r0.size()
            int r2 = r2 + (-1)
        L36:
            if (r2 < 0) goto L60
            java.lang.Object r3 = r0.get(r2)
            com.mbridge.msdk.playercommon.exoplayer2.offline.SegmentDownloader$Segment r3 = (com.mbridge.msdk.playercommon.exoplayer2.offline.SegmentDownloader.Segment) r3
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r3 = r3.dataSpec
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r4 = r7.cache
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil.getCached(r3, r4, r1)
            long r3 = r7.downloadedBytes
            long r5 = r1.alreadyCachedBytes
            long r3 = r3 + r5
            r7.downloadedBytes = r3
            long r3 = r1.alreadyCachedBytes
            long r5 = r1.contentLength
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 != 0) goto L5d
            int r3 = r7.downloadedSegments
            int r3 = r3 + 1
            r7.downloadedSegments = r3
            r0.remove(r2)
        L5d:
            int r2 = r2 + (-1)
            goto L36
        L60:
            return r0
    }

    private void removeUri(android.net.Uri r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r0 = r1.cache
            java.lang.String r2 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil.generateKey(r2)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil.remove(r0, r2)
            return
    }

    @Override
    public void cancel() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.isCanceled
            r1 = 1
            r0.set(r1)
            return
    }

    @Override
    public final void download() throws java.io.IOException, java.lang.InterruptedException {
            r14 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r0 = r14.priorityTaskManager
            r1 = -1000(0xfffffffffffffc18, float:NaN)
            r0.add(r1)
            java.util.List r0 = r14.initDownload()     // Catch: java.lang.Throwable -> L56
            java.util.Collections.sort(r0)     // Catch: java.lang.Throwable -> L56
            r2 = 131072(0x20000, float:1.83671E-40)
            byte[] r2 = new byte[r2]     // Catch: java.lang.Throwable -> L56
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil$CachingCounters r12 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil$CachingCounters     // Catch: java.lang.Throwable -> L56
            r12.<init>()     // Catch: java.lang.Throwable -> L56
            r3 = 0
            r13 = r3
        L19:
            int r3 = r0.size()     // Catch: java.lang.Throwable -> L56
            if (r13 >= r3) goto L50
            java.lang.Object r3 = r0.get(r13)     // Catch: java.lang.Throwable -> L47
            com.mbridge.msdk.playercommon.exoplayer2.offline.SegmentDownloader$Segment r3 = (com.mbridge.msdk.playercommon.exoplayer2.offline.SegmentDownloader.Segment) r3     // Catch: java.lang.Throwable -> L47
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r3 = r3.dataSpec     // Catch: java.lang.Throwable -> L47
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r4 = r14.cache     // Catch: java.lang.Throwable -> L47
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource r5 = r14.dataSource     // Catch: java.lang.Throwable -> L47
            com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r7 = r14.priorityTaskManager     // Catch: java.lang.Throwable -> L47
            r8 = -1000(0xfffffffffffffc18, float:NaN)
            java.util.concurrent.atomic.AtomicBoolean r10 = r14.isCanceled     // Catch: java.lang.Throwable -> L47
            r11 = 1
            r6 = r2
            r9 = r12
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil.cache(r3, r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L47
            int r3 = r14.downloadedSegments     // Catch: java.lang.Throwable -> L47
            int r3 = r3 + 1
            r14.downloadedSegments = r3     // Catch: java.lang.Throwable -> L47
            long r3 = r14.downloadedBytes     // Catch: java.lang.Throwable -> L56
            long r5 = r12.newlyCachedBytes     // Catch: java.lang.Throwable -> L56
            long r3 = r3 + r5
            r14.downloadedBytes = r3     // Catch: java.lang.Throwable -> L56
            int r13 = r13 + 1
            goto L19
        L47:
            r0 = move-exception
            long r2 = r14.downloadedBytes     // Catch: java.lang.Throwable -> L56
            long r4 = r12.newlyCachedBytes     // Catch: java.lang.Throwable -> L56
            long r2 = r2 + r4
            r14.downloadedBytes = r2     // Catch: java.lang.Throwable -> L56
            throw r0     // Catch: java.lang.Throwable -> L56
        L50:
            com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r0 = r14.priorityTaskManager
            r0.remove(r1)
            return
        L56:
            r0 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.util.PriorityTaskManager r2 = r14.priorityTaskManager
            r2.remove(r1)
            throw r0
    }

    @Override
    public final float getDownloadPercentage() {
            r3 = this;
            int r0 = r3.totalSegments
            int r1 = r3.downloadedSegments
            r2 = -1
            if (r0 == r2) goto L15
            if (r1 != r2) goto La
            goto L15
        La:
            r2 = 1120403456(0x42c80000, float:100.0)
            if (r0 != 0) goto Lf
            goto L14
        Lf:
            float r1 = (float) r1
            float r1 = r1 * r2
            float r0 = (float) r0
            float r2 = r1 / r0
        L14:
            return r2
        L15:
            r0 = -1082130432(0xffffffffbf800000, float:-1.0)
            return r0
    }

    @Override
    public final long getDownloadedBytes() {
            r2 = this;
            long r0 = r2.downloadedBytes
            return r0
    }

    protected abstract M getManifest(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1, android.net.Uri r2) throws java.io.IOException;

    protected abstract java.util.List<com.mbridge.msdk.playercommon.exoplayer2.offline.SegmentDownloader.Segment> getSegments(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1, M r2, boolean r3) throws java.lang.InterruptedException, java.io.IOException;

    @Override
    public final void remove() throws java.lang.InterruptedException {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource r0 = r3.offlineDataSource     // Catch: java.lang.Throwable -> L26 java.io.IOException -> L2d
            android.net.Uri r1 = r3.manifestUri     // Catch: java.lang.Throwable -> L26 java.io.IOException -> L2d
            com.mbridge.msdk.playercommon.exoplayer2.offline.FilterableManifest r0 = r3.getManifest(r0, r1)     // Catch: java.lang.Throwable -> L26 java.io.IOException -> L2d
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource r1 = r3.offlineDataSource     // Catch: java.lang.Throwable -> L26 java.io.IOException -> L2d
            r2 = 1
            java.util.List r0 = r3.getSegments(r1, r0, r2)     // Catch: java.lang.Throwable -> L26 java.io.IOException -> L2d
            r1 = 0
        L10:
            int r2 = r0.size()     // Catch: java.lang.Throwable -> L26 java.io.IOException -> L2d
            if (r1 >= r2) goto L2d
            java.lang.Object r2 = r0.get(r1)     // Catch: java.lang.Throwable -> L26 java.io.IOException -> L2d
            com.mbridge.msdk.playercommon.exoplayer2.offline.SegmentDownloader$Segment r2 = (com.mbridge.msdk.playercommon.exoplayer2.offline.SegmentDownloader.Segment) r2     // Catch: java.lang.Throwable -> L26 java.io.IOException -> L2d
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r2 = r2.dataSpec     // Catch: java.lang.Throwable -> L26 java.io.IOException -> L2d
            android.net.Uri r2 = r2.uri     // Catch: java.lang.Throwable -> L26 java.io.IOException -> L2d
            r3.removeUri(r2)     // Catch: java.lang.Throwable -> L26 java.io.IOException -> L2d
            int r1 = r1 + 1
            goto L10
        L26:
            r0 = move-exception
            android.net.Uri r1 = r3.manifestUri
            r3.removeUri(r1)
            throw r0
        L2d:
            android.net.Uri r0 = r3.manifestUri
            r3.removeUri(r0)
            return
    }
}
