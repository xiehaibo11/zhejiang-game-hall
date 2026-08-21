package com.mbridge.msdk.playercommon.exoplayer2.upstream.cache;

public final class CacheDataSource implements com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource {
    public static final int CACHE_IGNORED_REASON_ERROR = 0;
    public static final int CACHE_IGNORED_REASON_UNSET_LENGTH = 1;
    private static final int CACHE_NOT_IGNORED = -1;
    public static final long DEFAULT_MAX_CACHE_FILE_SIZE = 2097152;
    public static final int FLAG_BLOCK_ON_CACHE = 1;
    public static final int FLAG_IGNORE_CACHE_FOR_UNSET_LENGTH_REQUESTS = 4;
    public static final int FLAG_IGNORE_CACHE_ON_ERROR = 2;
    private static final long MIN_READ_BEFORE_CHECKING_CACHE = 102400;
    private android.net.Uri actualUri;
    private final boolean blockOnCache;
    private long bytesRemaining;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache cache;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource cacheReadDataSource;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource cacheWriteDataSource;
    private long checkCachePosition;
    private com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource currentDataSource;
    private boolean currentDataSpecLengthUnset;
    private com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan currentHoleSpan;
    private boolean currentRequestIgnoresCache;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource.EventListener eventListener;
    private int flags;
    private final boolean ignoreCacheForUnsetLengthRequests;
    private final boolean ignoreCacheOnError;
    private java.lang.String key;
    private long readPosition;
    private boolean seenCacheError;
    private long totalCachedBytesRead;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource upstreamDataSource;
    private android.net.Uri uri;

    public @interface CacheIgnoredReason {
    }

    public interface EventListener {
        void onCacheIgnored(int r1);

        void onCachedBytesRead(long r1, long r3);
    }

    public @interface Flags {
    }

    public CacheDataSource(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r7, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r8) {
            r6 = this;
            r3 = 0
            r4 = 2097152(0x200000, double:1.036131E-317)
            r0 = r6
            r1 = r7
            r2 = r8
            r0.<init>(r1, r2, r3, r4)
            return
    }

    public CacheDataSource(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r7, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r8, int r9) {
            r6 = this;
            r4 = 2097152(0x200000, double:1.036131E-317)
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r0.<init>(r1, r2, r3, r4)
            return
    }

    public CacheDataSource(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r8, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r9, int r10, long r11) {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource r3 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource
            r3.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSink r4 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSink
            r4.<init>(r8, r11)
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r5 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public CacheDataSource(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r3, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r4, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink r5, int r6, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource.EventListener r7) {
            r1 = this;
            r1.<init>()
            r1.cache = r2
            r1.cacheReadDataSource = r4
            r2 = r6 & 1
            r4 = 0
            r0 = 1
            if (r2 == 0) goto Lf
            r2 = r0
            goto L10
        Lf:
            r2 = r4
        L10:
            r1.blockOnCache = r2
            r2 = r6 & 2
            if (r2 == 0) goto L18
            r2 = r0
            goto L19
        L18:
            r2 = r4
        L19:
            r1.ignoreCacheOnError = r2
            r2 = r6 & 4
            if (r2 == 0) goto L20
            r4 = r0
        L20:
            r1.ignoreCacheForUnsetLengthRequests = r4
            r1.upstreamDataSource = r3
            if (r5 == 0) goto L2e
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TeeDataSource r2 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.TeeDataSource
            r2.<init>(r3, r5)
            r1.cacheWriteDataSource = r2
            goto L31
        L2e:
            r2 = 0
            r1.cacheWriteDataSource = r2
        L31:
            r1.eventListener = r7
            return
    }

    private void closeCurrentSource() throws java.io.IOException {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r4.currentDataSource
            if (r0 != 0) goto L5
            return
        L5:
            r1 = 0
            r2 = 0
            r0.close()     // Catch: java.lang.Throwable -> L1a
            r4.currentDataSource = r2
            r4.currentDataSpecLengthUnset = r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r0 = r4.currentHoleSpan
            if (r0 == 0) goto L19
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r1 = r4.cache
            r1.releaseHoleSpan(r0)
            r4.currentHoleSpan = r2
        L19:
            return
        L1a:
            r0 = move-exception
            r4.currentDataSource = r2
            r4.currentDataSpecLengthUnset = r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r1 = r4.currentHoleSpan
            if (r1 == 0) goto L2a
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r3 = r4.cache
            r3.releaseHoleSpan(r1)
            r4.currentHoleSpan = r2
        L2a:
            throw r0
    }

    private static android.net.Uri getRedirectedUriOrDefault(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r0, java.lang.String r1, android.net.Uri r2) {
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadata r0 = r0.getContentMetadata(r1)
            android.net.Uri r0 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataInternal.getRedirectedUri(r0)
            if (r0 != 0) goto Lb
            goto Lc
        Lb:
            r2 = r0
        Lc:
            return r2
    }

    private void handleBeforeThrow(java.io.IOException r2) {
            r1 = this;
            boolean r0 = r1.isReadingFromCache()
            if (r0 != 0) goto La
            boolean r2 = r2 instanceof com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException
            if (r2 == 0) goto Ld
        La:
            r2 = 1
            r1.seenCacheError = r2
        Ld:
            return
    }

    private boolean isBypassingCache() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r2.currentDataSource
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = r2.upstreamDataSource
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    private static boolean isCausedByPositionOutOfRange(java.io.IOException r1) {
        L0:
            if (r1 == 0) goto L14
            boolean r0 = r1 instanceof com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSourceException
            if (r0 == 0) goto Lf
            r0 = r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSourceException r0 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSourceException) r0
            int r0 = r0.reason
            if (r0 != 0) goto Lf
            r1 = 1
            return r1
        Lf:
            java.lang.Throwable r1 = r1.getCause()
            goto L0
        L14:
            r1 = 0
            return r1
    }

    private boolean isReadingFromCache() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r2.currentDataSource
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = r2.cacheReadDataSource
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    private boolean isReadingFromUpstream() {
            r1 = this;
            boolean r0 = r1.isReadingFromCache()
            r0 = r0 ^ 1
            return r0
    }

    private boolean isWritingToCache() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r2.currentDataSource
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = r2.cacheWriteDataSource
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    private void notifyBytesRead() {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource$EventListener r0 = r7.eventListener
            if (r0 == 0) goto L19
            long r1 = r7.totalCachedBytesRead
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L19
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r1 = r7.cache
            long r1 = r1.getCacheSpace()
            long r5 = r7.totalCachedBytesRead
            r0.onCachedBytesRead(r1, r5)
            r7.totalCachedBytesRead = r3
        L19:
            return
    }

    private void notifyCacheIgnored(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSource$EventListener r0 = r1.eventListener
            if (r0 == 0) goto L7
            r0.onCacheIgnored(r2)
        L7:
            return
    }

    private void openNextSource(boolean r15) throws java.io.IOException {
            r14 = this;
            boolean r0 = r14.currentRequestIgnoresCache
            r1 = 0
            if (r0 == 0) goto L7
            r0 = r1
            goto L2d
        L7:
            boolean r0 = r14.blockOnCache
            if (r0 == 0) goto L23
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r0 = r14.cache     // Catch: java.lang.InterruptedException -> L16
            java.lang.String r2 = r14.key     // Catch: java.lang.InterruptedException -> L16
            long r3 = r14.readPosition     // Catch: java.lang.InterruptedException -> L16
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r0 = r0.startReadWrite(r2, r3)     // Catch: java.lang.InterruptedException -> L16
            goto L2d
        L16:
            java.lang.Thread r15 = java.lang.Thread.currentThread()
            r15.interrupt()
            java.io.InterruptedIOException r15 = new java.io.InterruptedIOException
            r15.<init>()
            throw r15
        L23:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r0 = r14.cache
            java.lang.String r2 = r14.key
            long r3 = r14.readPosition
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r0 = r0.startReadWriteNonBlocking(r2, r3)
        L2d:
            r2 = -1
            if (r0 != 0) goto L45
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = r14.upstreamDataSource
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r12 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec
            android.net.Uri r5 = r14.uri
            long r6 = r14.readPosition
            long r8 = r14.bytesRemaining
            java.lang.String r10 = r14.key
            int r11 = r14.flags
            r4 = r12
            r4.<init>(r5, r6, r8, r10, r11)
            goto La7
        L45:
            boolean r4 = r0.isCached
            if (r4 == 0) goto L74
            java.io.File r1 = r0.file
            android.net.Uri r5 = android.net.Uri.fromFile(r1)
            long r6 = r14.readPosition
            long r8 = r0.position
            long r8 = r6 - r8
            long r6 = r0.length
            long r6 = r6 - r8
            long r10 = r14.bytesRemaining
            int r1 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r1 == 0) goto L62
            long r6 = java.lang.Math.min(r6, r10)
        L62:
            r10 = r6
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r1 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec
            long r6 = r14.readPosition
            java.lang.String r12 = r14.key
            int r13 = r14.flags
            r4 = r1
            r4.<init>(r5, r6, r8, r10, r12, r13)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r4 = r14.cacheReadDataSource
            r12 = r1
            r1 = r4
            goto La7
        L74:
            boolean r4 = r0.isOpenEnded()
            if (r4 == 0) goto L7d
            long r4 = r14.bytesRemaining
            goto L89
        L7d:
            long r4 = r0.length
            long r6 = r14.bytesRemaining
            int r8 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r8 == 0) goto L89
            long r4 = java.lang.Math.min(r4, r6)
        L89:
            r10 = r4
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r4 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec
            android.net.Uri r7 = r14.uri
            long r8 = r14.readPosition
            java.lang.String r12 = r14.key
            int r13 = r14.flags
            r6 = r4
            r6.<init>(r7, r8, r10, r12, r13)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r5 = r14.cacheWriteDataSource
            if (r5 == 0) goto L9d
            goto La5
        L9d:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r5 = r14.upstreamDataSource
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r6 = r14.cache
            r6.releaseHoleSpan(r0)
            r0 = r1
        La5:
            r12 = r4
            r1 = r5
        La7:
            boolean r4 = r14.currentRequestIgnoresCache
            if (r4 != 0) goto Lb6
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r4 = r14.upstreamDataSource
            if (r1 != r4) goto Lb6
            long r4 = r14.readPosition
            r6 = 102400(0x19000, double:5.05923E-319)
            long r4 = r4 + r6
            goto Lbb
        Lb6:
            r4 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
        Lbb:
            r14.checkCachePosition = r4
            if (r15 == 0) goto Ldc
            boolean r15 = r14.isBypassingCache()
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r15)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r15 = r14.upstreamDataSource
            if (r1 != r15) goto Lcb
            return
        Lcb:
            r14.closeCurrentSource()     // Catch: java.lang.Throwable -> Lcf
            goto Ldc
        Lcf:
            r15 = move-exception
            boolean r1 = r0.isHoleSpan()
            if (r1 == 0) goto Ldb
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r1 = r14.cache
            r1.releaseHoleSpan(r0)
        Ldb:
            throw r15
        Ldc:
            if (r0 == 0) goto Le6
            boolean r15 = r0.isHoleSpan()
            if (r15 == 0) goto Le6
            r14.currentHoleSpan = r0
        Le6:
            r14.currentDataSource = r1
            long r4 = r12.length
            int r15 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            r0 = 1
            if (r15 != 0) goto Lf1
            r15 = r0
            goto Lf2
        Lf1:
            r15 = 0
        Lf2:
            r14.currentDataSpecLengthUnset = r15
            long r4 = r1.open(r12)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations r15 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations
            r15.<init>()
            boolean r1 = r14.currentDataSpecLengthUnset
            if (r1 == 0) goto L10d
            int r1 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r1 == 0) goto L10d
            r14.bytesRemaining = r4
            long r1 = r14.readPosition
            long r1 = r1 + r4
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataInternal.setContentLength(r15, r1)
        L10d:
            boolean r1 = r14.isReadingFromUpstream()
            if (r1 == 0) goto L12d
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = r14.currentDataSource
            android.net.Uri r1 = r1.getUri()
            r14.actualUri = r1
            android.net.Uri r2 = r14.uri
            boolean r1 = r2.equals(r1)
            r0 = r0 ^ r1
            if (r0 == 0) goto L12a
            android.net.Uri r0 = r14.actualUri
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataInternal.setRedirectedUri(r15, r0)
            goto L12d
        L12a:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataInternal.removeRedirectedUri(r15)
        L12d:
            boolean r0 = r14.isWritingToCache()
            if (r0 == 0) goto L13a
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r0 = r14.cache
            java.lang.String r1 = r14.key
            r0.applyContentMetadataMutations(r1, r15)
        L13a:
            return
    }

    private void setNoBytesRemainingAndMaybeStoreLength() throws java.io.IOException {
            r4 = this;
            r0 = 0
            r4.bytesRemaining = r0
            boolean r0 = r4.isWritingToCache()
            if (r0 == 0) goto L13
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r0 = r4.cache
            java.lang.String r1 = r4.key
            long r2 = r4.readPosition
            r0.setContentLength(r1, r2)
        L13:
            return
    }

    private int shouldIgnoreCacheForRequest(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r5) {
            r4 = this;
            boolean r0 = r4.ignoreCacheOnError
            if (r0 == 0) goto La
            boolean r0 = r4.seenCacheError
            if (r0 == 0) goto La
            r5 = 0
            return r5
        La:
            boolean r0 = r4.ignoreCacheForUnsetLengthRequests
            if (r0 == 0) goto L18
            long r0 = r5.length
            r2 = -1
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 != 0) goto L18
            r5 = 1
            return r5
        L18:
            r5 = -1
            return r5
    }

    @Override
    public final void close() throws java.io.IOException {
            r1 = this;
            r0 = 0
            r1.uri = r0
            r1.actualUri = r0
            r1.notifyBytesRead()
            r1.closeCurrentSource()     // Catch: java.io.IOException -> Lc
            return
        Lc:
            r0 = move-exception
            r1.handleBeforeThrow(r0)
            throw r0
    }

    @Override
    public final android.net.Uri getUri() {
            r1 = this;
            android.net.Uri r0 = r1.actualUri
            return r0
    }

    @Override
    public final long open(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r6) throws java.io.IOException {
            r5 = this;
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil.getKey(r6)     // Catch: java.io.IOException -> L65
            r5.key = r0     // Catch: java.io.IOException -> L65
            android.net.Uri r0 = r6.uri     // Catch: java.io.IOException -> L65
            r5.uri = r0     // Catch: java.io.IOException -> L65
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r1 = r5.cache     // Catch: java.io.IOException -> L65
            java.lang.String r2 = r5.key     // Catch: java.io.IOException -> L65
            android.net.Uri r0 = getRedirectedUriOrDefault(r1, r2, r0)     // Catch: java.io.IOException -> L65
            r5.actualUri = r0     // Catch: java.io.IOException -> L65
            int r0 = r6.flags     // Catch: java.io.IOException -> L65
            r5.flags = r0     // Catch: java.io.IOException -> L65
            long r0 = r6.position     // Catch: java.io.IOException -> L65
            r5.readPosition = r0     // Catch: java.io.IOException -> L65
            int r0 = r5.shouldIgnoreCacheForRequest(r6)     // Catch: java.io.IOException -> L65
            r1 = -1
            r2 = 0
            if (r0 == r1) goto L26
            r1 = 1
            goto L27
        L26:
            r1 = r2
        L27:
            r5.currentRequestIgnoresCache = r1     // Catch: java.io.IOException -> L65
            if (r1 == 0) goto L2e
            r5.notifyCacheIgnored(r0)     // Catch: java.io.IOException -> L65
        L2e:
            long r0 = r6.length     // Catch: java.io.IOException -> L65
            r3 = -1
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 != 0) goto L5b
            boolean r0 = r5.currentRequestIgnoresCache     // Catch: java.io.IOException -> L65
            if (r0 == 0) goto L3b
            goto L5b
        L3b:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r0 = r5.cache     // Catch: java.io.IOException -> L65
            java.lang.String r1 = r5.key     // Catch: java.io.IOException -> L65
            long r0 = r0.getContentLength(r1)     // Catch: java.io.IOException -> L65
            r5.bytesRemaining = r0     // Catch: java.io.IOException -> L65
            int r3 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r3 == 0) goto L5f
            long r3 = r6.position     // Catch: java.io.IOException -> L65
            long r0 = r0 - r3
            r5.bytesRemaining = r0     // Catch: java.io.IOException -> L65
            r3 = 0
            int r6 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r6 <= 0) goto L55
            goto L5f
        L55:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSourceException r6 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSourceException     // Catch: java.io.IOException -> L65
            r6.<init>(r2)     // Catch: java.io.IOException -> L65
            throw r6     // Catch: java.io.IOException -> L65
        L5b:
            long r0 = r6.length     // Catch: java.io.IOException -> L65
            r5.bytesRemaining = r0     // Catch: java.io.IOException -> L65
        L5f:
            r5.openNextSource(r2)     // Catch: java.io.IOException -> L65
            long r0 = r5.bytesRemaining     // Catch: java.io.IOException -> L65
            return r0
        L65:
            r6 = move-exception
            r5.handleBeforeThrow(r6)
            throw r6
    }

    @Override
    public final int read(byte[] r10, int r11, int r12) throws java.io.IOException {
            r9 = this;
            r0 = 0
            if (r12 != 0) goto L4
            return r0
        L4:
            long r1 = r9.bytesRemaining
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            r2 = -1
            if (r1 != 0) goto Le
            return r2
        Le:
            long r5 = r9.readPosition     // Catch: java.io.IOException -> L63
            long r7 = r9.checkCachePosition     // Catch: java.io.IOException -> L63
            int r1 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r1 < 0) goto L1a
            r1 = 1
            r9.openNextSource(r1)     // Catch: java.io.IOException -> L63
        L1a:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = r9.currentDataSource     // Catch: java.io.IOException -> L63
            int r1 = r1.read(r10, r11, r12)     // Catch: java.io.IOException -> L63
            r5 = -1
            if (r1 == r2) goto L42
            boolean r10 = r9.isReadingFromCache()     // Catch: java.io.IOException -> L63
            if (r10 == 0) goto L30
            long r10 = r9.totalCachedBytesRead     // Catch: java.io.IOException -> L63
            long r3 = (long) r1     // Catch: java.io.IOException -> L63
            long r10 = r10 + r3
            r9.totalCachedBytesRead = r10     // Catch: java.io.IOException -> L63
        L30:
            long r10 = r9.readPosition     // Catch: java.io.IOException -> L63
            long r3 = (long) r1     // Catch: java.io.IOException -> L63
            long r10 = r10 + r3
            r9.readPosition = r10     // Catch: java.io.IOException -> L63
            long r10 = r9.bytesRemaining     // Catch: java.io.IOException -> L63
            int r10 = (r10 > r5 ? 1 : (r10 == r5 ? 0 : -1))
            if (r10 == 0) goto L57
            long r10 = r9.bytesRemaining     // Catch: java.io.IOException -> L63
            long r10 = r10 - r3
            r9.bytesRemaining = r10     // Catch: java.io.IOException -> L63
            goto L57
        L42:
            boolean r7 = r9.currentDataSpecLengthUnset     // Catch: java.io.IOException -> L63
            if (r7 == 0) goto L4a
            r9.setNoBytesRemainingAndMaybeStoreLength()     // Catch: java.io.IOException -> L63
            goto L57
        L4a:
            long r7 = r9.bytesRemaining     // Catch: java.io.IOException -> L63
            int r3 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
            if (r3 > 0) goto L58
            long r3 = r9.bytesRemaining     // Catch: java.io.IOException -> L63
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 != 0) goto L57
            goto L58
        L57:
            return r1
        L58:
            r9.closeCurrentSource()     // Catch: java.io.IOException -> L63
            r9.openNextSource(r0)     // Catch: java.io.IOException -> L63
            int r10 = r9.read(r10, r11, r12)     // Catch: java.io.IOException -> L63
            return r10
        L63:
            r10 = move-exception
            boolean r11 = r9.currentDataSpecLengthUnset
            if (r11 == 0) goto L72
            boolean r11 = isCausedByPositionOutOfRange(r10)
            if (r11 == 0) goto L72
            r9.setNoBytesRemainingAndMaybeStoreLength()
            return r2
        L72:
            r9.handleBeforeThrow(r10)
            throw r10
    }
}
