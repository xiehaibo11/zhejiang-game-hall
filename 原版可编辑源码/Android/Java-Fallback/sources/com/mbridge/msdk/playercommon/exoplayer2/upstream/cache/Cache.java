package com.mbridge.msdk.playercommon.exoplayer2.upstream.cache;

public interface Cache {

    public static class CacheException extends java.io.IOException {
        public CacheException(java.lang.String r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public CacheException(java.lang.Throwable r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public interface Listener {
        void onSpanAdded(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r2);

        void onSpanRemoved(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r2);

        void onSpanTouched(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r3);
    }

    java.util.NavigableSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan> addListener(java.lang.String r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.Listener r2);

    void applyContentMetadataMutations(java.lang.String r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations r2) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException;

    void commitFile(java.io.File r1) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException;

    long getCacheSpace();

    long getCachedLength(java.lang.String r1, long r2, long r4);

    java.util.NavigableSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan> getCachedSpans(java.lang.String r1);

    long getContentLength(java.lang.String r1);

    com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadata getContentMetadata(java.lang.String r1);

    java.util.Set<java.lang.String> getKeys();

    boolean isCached(java.lang.String r1, long r2, long r4);

    void release() throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException;

    void releaseHoleSpan(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r1);

    void removeListener(java.lang.String r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.Listener r2);

    void removeSpan(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r1) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException;

    void setContentLength(java.lang.String r1, long r2) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException;

    java.io.File startFile(java.lang.String r1, long r2, long r4) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException;

    com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan startReadWrite(java.lang.String r1, long r2) throws java.lang.InterruptedException, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException;

    com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan startReadWriteNonBlocking(java.lang.String r1, long r2) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException;
}
