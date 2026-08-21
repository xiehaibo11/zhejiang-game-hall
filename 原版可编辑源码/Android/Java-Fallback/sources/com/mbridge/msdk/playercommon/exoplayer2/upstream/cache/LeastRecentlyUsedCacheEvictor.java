package com.mbridge.msdk.playercommon.exoplayer2.upstream.cache;

public final class LeastRecentlyUsedCacheEvictor implements com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheEvictor, java.util.Comparator<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan> {
    private long currentSize;
    private final java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan> leastRecentlyUsed;
    private final long maxBytes;

    public LeastRecentlyUsedCacheEvictor(long r1) {
            r0 = this;
            r0.<init>()
            r0.maxBytes = r1
            java.util.TreeSet r1 = new java.util.TreeSet
            r1.<init>(r0)
            r0.leastRecentlyUsed = r1
            return
    }

    private void evictCache(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r5, long r6) {
            r4 = this;
        L0:
            long r0 = r4.currentSize
            long r0 = r0 + r6
            long r2 = r4.maxBytes
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L1d
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan> r0 = r4.leastRecentlyUsed
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L1d
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan> r0 = r4.leastRecentlyUsed     // Catch: com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException -> L0
            java.lang.Object r0 = r0.first()     // Catch: com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException -> L0
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r0 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan) r0     // Catch: com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException -> L0
            r5.removeSpan(r0)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException -> L0
            goto L0
        L1d:
            return
    }

    public final int compare(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r5, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r6) {
            r4 = this;
            long r0 = r5.lastAccessTimestamp
            long r2 = r6.lastAccessTimestamp
            long r0 = r0 - r2
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L10
            int r5 = r5.compareTo(r6)
            return r5
        L10:
            long r0 = r5.lastAccessTimestamp
            long r5 = r6.lastAccessTimestamp
            int r5 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r5 >= 0) goto L1a
            r5 = -1
            goto L1b
        L1a:
            r5 = 1
        L1b:
            return r5
    }

    @Override
    public final int compare(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r2) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r1 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan) r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r2 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan) r2
            int r1 = r0.compare(r1, r2)
            return r1
    }

    @Override
    public final void onCacheInitialized() {
            r0 = this;
            return
    }

    @Override
    public final void onSpanAdded(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r5, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r6) {
            r4 = this;
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan> r0 = r4.leastRecentlyUsed
            r0.add(r6)
            long r0 = r4.currentSize
            long r2 = r6.length
            long r0 = r0 + r2
            r4.currentSize = r0
            r0 = 0
            r4.evictCache(r5, r0)
            return
    }

    @Override
    public final void onSpanRemoved(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r3, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r4) {
            r2 = this;
            java.util.TreeSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan> r3 = r2.leastRecentlyUsed
            r3.remove(r4)
            long r0 = r2.currentSize
            long r3 = r4.length
            long r0 = r0 - r3
            r2.currentSize = r0
            return
    }

    @Override
    public final void onSpanTouched(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r3) {
            r0 = this;
            r0.onSpanRemoved(r1, r2)
            r0.onSpanAdded(r1, r3)
            return
    }

    @Override
    public final void onStartFile(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r1, java.lang.String r2, long r3, long r5) {
            r0 = this;
            r0.evictCache(r1, r5)
            return
    }
}
