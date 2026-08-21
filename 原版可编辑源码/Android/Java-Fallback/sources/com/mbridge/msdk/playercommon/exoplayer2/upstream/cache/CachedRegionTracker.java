package com.mbridge.msdk.playercommon.exoplayer2.upstream.cache;

public final class CachedRegionTracker implements com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.Listener {
    public static final int CACHED_TO_END = -2;
    public static final int NOT_CACHED = -1;
    private static final java.lang.String TAG = "CachedRegionTracker";
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache cache;
    private final java.lang.String cacheKey;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ChunkIndex chunkIndex;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker.Region lookupRegion;
    private final java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker.Region> regions;

    private static class Region implements java.lang.Comparable<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker.Region> {
        public long endOffset;
        public int endOffsetIndex;
        public long startOffset;

        public Region(long r1, long r3) {
                r0 = this;
                r0.<init>()
                r0.startOffset = r1
                r0.endOffset = r3
                return
        }

        public int compareTo(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker.Region r5) {
                r4 = this;
                long r0 = r4.startOffset
                long r2 = r5.startOffset
                int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r5 >= 0) goto La
                r5 = -1
                goto L11
            La:
                int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r5 != 0) goto L10
                r5 = 0
                goto L11
            L10:
                r5 = 1
            L11:
                return r5
        }

        @Override
        public int compareTo(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker.Region r1) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region r1 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker.Region) r1
                int r1 = r0.compareTo(r1)
                return r1
        }
    }

    public CachedRegionTracker(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r3, java.lang.String r4, com.mbridge.msdk.playercommon.exoplayer2.extractor.ChunkIndex r5) {
            r2 = this;
            r2.<init>()
            r2.cache = r3
            r2.cacheKey = r4
            r2.chunkIndex = r5
            java.util.TreeSet r5 = new java.util.TreeSet
            r5.<init>()
            r2.regions = r5
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region r5 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region
            r0 = 0
            r5.<init>(r0, r0)
            r2.lookupRegion = r5
            monitor-enter(r2)
            java.util.NavigableSet r3 = r3.addListener(r4, r2)     // Catch: java.lang.Throwable -> L34
            java.util.Iterator r3 = r3.descendingIterator()     // Catch: java.lang.Throwable -> L34
        L22:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L34
            if (r4 == 0) goto L32
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L34
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r4 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan) r4     // Catch: java.lang.Throwable -> L34
            r2.mergeSpan(r4)     // Catch: java.lang.Throwable -> L34
            goto L22
        L32:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L34
            return
        L34:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L34
            throw r3
    }

    private void mergeSpan(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r8) {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region
            long r1 = r8.position
            long r3 = r8.position
            long r5 = r8.length
            long r3 = r3 + r5
            r0.<init>(r1, r3)
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region> r8 = r7.regions
            java.lang.Object r8 = r8.floor(r0)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region r8 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker.Region) r8
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region> r1 = r7.regions
            java.lang.Object r1 = r1.ceiling(r0)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region r1 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker.Region) r1
            boolean r2 = r7.regionsConnect(r8, r0)
            boolean r3 = r7.regionsConnect(r0, r1)
            if (r3 == 0) goto L44
            if (r2 == 0) goto L31
            long r2 = r1.endOffset
            r8.endOffset = r2
            int r0 = r1.endOffsetIndex
            r8.endOffsetIndex = r0
            goto L3e
        L31:
            long r2 = r1.endOffset
            r0.endOffset = r2
            int r8 = r1.endOffsetIndex
            r0.endOffsetIndex = r8
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region> r8 = r7.regions
            r8.add(r0)
        L3e:
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region> r8 = r7.regions
            r8.remove(r1)
            goto L7d
        L44:
            if (r2 == 0) goto L67
            long r0 = r0.endOffset
            r8.endOffset = r0
            int r0 = r8.endOffsetIndex
        L4c:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ChunkIndex r1 = r7.chunkIndex
            int r1 = r1.length
            int r1 = r1 + (-1)
            if (r0 >= r1) goto L64
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ChunkIndex r1 = r7.chunkIndex
            long[] r1 = r1.offsets
            int r2 = r0 + 1
            r3 = r1[r2]
            long r5 = r8.endOffset
            int r1 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r1 > 0) goto L64
            r0 = r2
            goto L4c
        L64:
            r8.endOffsetIndex = r0
            goto L7d
        L67:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ChunkIndex r8 = r7.chunkIndex
            long[] r8 = r8.offsets
            long r1 = r0.endOffset
            int r8 = java.util.Arrays.binarySearch(r8, r1)
            if (r8 >= 0) goto L76
            int r8 = -r8
            int r8 = r8 + (-2)
        L76:
            r0.endOffsetIndex = r8
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region> r8 = r7.regions
            r8.add(r0)
        L7d:
            return
    }

    private boolean regionsConnect(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker.Region r3, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker.Region r4) {
            r2 = this;
            if (r3 == 0) goto Le
            if (r4 == 0) goto Le
            long r0 = r3.endOffset
            long r3 = r4.startOffset
            int r3 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r3 != 0) goto Le
            r3 = 1
            goto Lf
        Le:
            r3 = 0
        Lf:
            return r3
    }

    public final synchronized int getRegionEndTimeMs(long r8) {
            r7 = this;
            monitor-enter(r7)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region r0 = r7.lookupRegion     // Catch: java.lang.Throwable -> L65
            r0.startOffset = r8     // Catch: java.lang.Throwable -> L65
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region> r0 = r7.regions     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region r1 = r7.lookupRegion     // Catch: java.lang.Throwable -> L65
            java.lang.Object r0 = r0.floor(r1)     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region r0 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker.Region) r0     // Catch: java.lang.Throwable -> L65
            r1 = -1
            if (r0 == 0) goto L63
            long r2 = r0.endOffset     // Catch: java.lang.Throwable -> L65
            int r8 = (r8 > r2 ? 1 : (r8 == r2 ? 0 : -1))
            if (r8 > 0) goto L63
            int r8 = r0.endOffsetIndex     // Catch: java.lang.Throwable -> L65
            if (r8 != r1) goto L1d
            goto L63
        L1d:
            int r8 = r0.endOffsetIndex     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ChunkIndex r9 = r7.chunkIndex     // Catch: java.lang.Throwable -> L65
            int r9 = r9.length     // Catch: java.lang.Throwable -> L65
            int r9 = r9 + (-1)
            if (r8 != r9) goto L3e
            long r1 = r0.endOffset     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ChunkIndex r9 = r7.chunkIndex     // Catch: java.lang.Throwable -> L65
            long[] r9 = r9.offsets     // Catch: java.lang.Throwable -> L65
            r3 = r9[r8]     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ChunkIndex r9 = r7.chunkIndex     // Catch: java.lang.Throwable -> L65
            int[] r9 = r9.sizes     // Catch: java.lang.Throwable -> L65
            r9 = r9[r8]     // Catch: java.lang.Throwable -> L65
            long r5 = (long) r9
            long r3 = r3 + r5
            int r9 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r9 != 0) goto L3e
            r8 = -2
            monitor-exit(r7)
            return r8
        L3e:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ChunkIndex r9 = r7.chunkIndex     // Catch: java.lang.Throwable -> L65
            long[] r9 = r9.durationsUs     // Catch: java.lang.Throwable -> L65
            r1 = r9[r8]     // Catch: java.lang.Throwable -> L65
            long r3 = r0.endOffset     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ChunkIndex r9 = r7.chunkIndex     // Catch: java.lang.Throwable -> L65
            long[] r9 = r9.offsets     // Catch: java.lang.Throwable -> L65
            r5 = r9[r8]     // Catch: java.lang.Throwable -> L65
            long r3 = r3 - r5
            long r1 = r1 * r3
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ChunkIndex r9 = r7.chunkIndex     // Catch: java.lang.Throwable -> L65
            int[] r9 = r9.sizes     // Catch: java.lang.Throwable -> L65
            r9 = r9[r8]     // Catch: java.lang.Throwable -> L65
            long r3 = (long) r9     // Catch: java.lang.Throwable -> L65
            long r1 = r1 / r3
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ChunkIndex r9 = r7.chunkIndex     // Catch: java.lang.Throwable -> L65
            long[] r9 = r9.timesUs     // Catch: java.lang.Throwable -> L65
            r8 = r9[r8]     // Catch: java.lang.Throwable -> L65
            long r8 = r8 + r1
            r0 = 1000(0x3e8, double:4.94E-321)
            long r8 = r8 / r0
            int r8 = (int) r8
            monitor-exit(r7)
            return r8
        L63:
            monitor-exit(r7)
            return r1
        L65:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    @Override
    public final synchronized void onSpanAdded(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r2) {
            r0 = this;
            monitor-enter(r0)
            r0.mergeSpan(r2)     // Catch: java.lang.Throwable -> L6
            monitor-exit(r0)
            return
        L6:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public final synchronized void onSpanRemoved(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r7, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r8) {
            r6 = this;
            monitor-enter(r6)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region r7 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region     // Catch: java.lang.Throwable -> L6b
            long r0 = r8.position     // Catch: java.lang.Throwable -> L6b
            long r2 = r8.position     // Catch: java.lang.Throwable -> L6b
            long r4 = r8.length     // Catch: java.lang.Throwable -> L6b
            long r2 = r2 + r4
            r7.<init>(r0, r2)     // Catch: java.lang.Throwable -> L6b
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region> r8 = r6.regions     // Catch: java.lang.Throwable -> L6b
            java.lang.Object r8 = r8.floor(r7)     // Catch: java.lang.Throwable -> L6b
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region r8 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker.Region) r8     // Catch: java.lang.Throwable -> L6b
            if (r8 != 0) goto L20
            java.lang.String r7 = "CachedRegionTracker"
            java.lang.String r8 = "Removed a span we were not aware of"
            android.util.Log.e(r7, r8)     // Catch: java.lang.Throwable -> L6b
            monitor-exit(r6)
            return
        L20:
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region> r0 = r6.regions     // Catch: java.lang.Throwable -> L6b
            r0.remove(r8)     // Catch: java.lang.Throwable -> L6b
            long r0 = r8.startOffset     // Catch: java.lang.Throwable -> L6b
            long r2 = r7.startOffset     // Catch: java.lang.Throwable -> L6b
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L4c
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region     // Catch: java.lang.Throwable -> L6b
            long r1 = r8.startOffset     // Catch: java.lang.Throwable -> L6b
            long r3 = r7.startOffset     // Catch: java.lang.Throwable -> L6b
            r0.<init>(r1, r3)     // Catch: java.lang.Throwable -> L6b
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ChunkIndex r1 = r6.chunkIndex     // Catch: java.lang.Throwable -> L6b
            long[] r1 = r1.offsets     // Catch: java.lang.Throwable -> L6b
            long r2 = r0.endOffset     // Catch: java.lang.Throwable -> L6b
            int r1 = java.util.Arrays.binarySearch(r1, r2)     // Catch: java.lang.Throwable -> L6b
            if (r1 >= 0) goto L45
            int r1 = -r1
            int r1 = r1 + (-2)
        L45:
            r0.endOffsetIndex = r1     // Catch: java.lang.Throwable -> L6b
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region> r1 = r6.regions     // Catch: java.lang.Throwable -> L6b
            r1.add(r0)     // Catch: java.lang.Throwable -> L6b
        L4c:
            long r0 = r8.endOffset     // Catch: java.lang.Throwable -> L6b
            long r2 = r7.endOffset     // Catch: java.lang.Throwable -> L6b
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L69
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region     // Catch: java.lang.Throwable -> L6b
            long r1 = r7.endOffset     // Catch: java.lang.Throwable -> L6b
            r3 = 1
            long r1 = r1 + r3
            long r3 = r8.endOffset     // Catch: java.lang.Throwable -> L6b
            r0.<init>(r1, r3)     // Catch: java.lang.Throwable -> L6b
            int r7 = r8.endOffsetIndex     // Catch: java.lang.Throwable -> L6b
            r0.endOffsetIndex = r7     // Catch: java.lang.Throwable -> L6b
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedRegionTracker$Region> r7 = r6.regions     // Catch: java.lang.Throwable -> L6b
            r7.add(r0)     // Catch: java.lang.Throwable -> L6b
        L69:
            monitor-exit(r6)
            return
        L6b:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    @Override
    public final void onSpanTouched(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r3) {
            r0 = this;
            return
    }

    public final void release() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r0 = r2.cache
            java.lang.String r1 = r2.cacheKey
            r0.removeListener(r1, r2)
            return
    }
}
