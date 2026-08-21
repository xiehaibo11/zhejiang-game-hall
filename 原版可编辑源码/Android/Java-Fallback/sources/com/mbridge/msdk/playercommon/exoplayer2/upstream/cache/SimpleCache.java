package com.mbridge.msdk.playercommon.exoplayer2.upstream.cache;

public final class SimpleCache implements com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache {
    private static final java.lang.String TAG = "SimpleCache";
    private static boolean cacheFolderLockingDisabled;
    private static final java.util.HashSet<java.io.File> lockedCacheDirs = null;
    private final java.io.File cacheDir;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheEvictor evictor;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex index;
    private final java.util.HashMap<java.lang.String, java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.Listener>> listeners;
    private boolean released;
    private long totalSpace;


    static {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCache.lockedCacheDirs = r0
            return
    }

    public SimpleCache(java.io.File r3, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheEvictor r4) {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r3, r4, r0, r1)
            return
    }

    SimpleCache(java.io.File r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheEvictor r3, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r4) {
            r1 = this;
            r1.<init>()
            boolean r0 = lockFolder(r2)
            if (r0 == 0) goto L29
            r1.cacheDir = r2
            r1.evictor = r3
            r1.index = r4
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            r1.listeners = r2
            android.os.ConditionVariable r2 = new android.os.ConditionVariable
            r2.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCache$1 r3 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCache$1
            java.lang.String r4 = "SimpleCache.initialize()"
            r3.<init>(r1, r4, r2)
            r3.start()
            r2.block()
            return
        L29:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "Another SimpleCache instance uses the folder: "
            r4.append(r0)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r3.<init>(r2)
            throw r3
    }

    public SimpleCache(java.io.File r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheEvictor r3, byte[] r4) {
            r1 = this;
            if (r4 == 0) goto L4
            r0 = 1
            goto L5
        L4:
            r0 = 0
        L5:
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public SimpleCache(java.io.File r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheEvictor r3, byte[] r4, boolean r5) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex
            r0.<init>(r2, r4, r5)
            r1.<init>(r2, r3, r0)
            return
    }

    static void access$000(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCache r0) {
            r0.initialize()
            return
    }

    static com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheEvictor access$100(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCache r0) {
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheEvictor r0 = r0.evictor
            return r0
    }

    private void addSpan(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r5) {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r0 = r4.index
            java.lang.String r1 = r5.key
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r0 = r0.getOrAdd(r1)
            r0.addSpan(r5)
            long r0 = r4.totalSpace
            long r2 = r5.length
            long r0 = r0 + r2
            r4.totalSpace = r0
            r4.notifySpanAdded(r5)
            return
    }

    public static synchronized void disableCacheFolderLocking() {
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCache> r0 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCache.class
            monitor-enter(r0)
            r1 = 1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCache.cacheFolderLockingDisabled = r1     // Catch: java.lang.Throwable -> Ld
            java.util.HashSet<java.io.File> r1 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCache.lockedCacheDirs     // Catch: java.lang.Throwable -> Ld
            r1.clear()     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r0)
            return
        Ld:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan getSpan(java.lang.String r3, long r4) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r0 = r2.index
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r0 = r0.get(r3)
            if (r0 != 0) goto Ld
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r3 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan.createOpenHole(r3, r4)
            return r3
        Ld:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r3 = r0.getSpan(r4)
            boolean r1 = r3.isCached
            if (r1 == 0) goto L21
            java.io.File r1 = r3.file
            boolean r1 = r1.exists()
            if (r1 != 0) goto L21
            r2.removeStaleSpansAndCachedContents()
            goto Ld
        L21:
            return r3
    }

    private void initialize() {
            r8 = this;
            java.io.File r0 = r8.cacheDir
            boolean r0 = r0.exists()
            if (r0 != 0) goto Le
            java.io.File r0 = r8.cacheDir
            r0.mkdirs()
            return
        Le:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r0 = r8.index
            r0.load()
            java.io.File r0 = r8.cacheDir
            java.io.File[] r0 = r0.listFiles()
            if (r0 != 0) goto L1c
            return
        L1c:
            int r1 = r0.length
            r2 = 0
        L1e:
            if (r2 >= r1) goto L4d
            r3 = r0[r2]
            java.lang.String r4 = r3.getName()
            java.lang.String r5 = "cached_content_index.exi"
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L2f
            goto L4a
        L2f:
            long r4 = r3.length()
            r6 = 0
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 <= 0) goto L40
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r4 = r8.index
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r4 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan.createCacheEntry(r3, r4)
            goto L41
        L40:
            r4 = 0
        L41:
            if (r4 == 0) goto L47
            r8.addSpan(r4)
            goto L4a
        L47:
            r3.delete()
        L4a:
            int r2 = r2 + 1
            goto L1e
        L4d:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r0 = r8.index
            r0.removeEmpty()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r0 = r8.index     // Catch: com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException -> L58
            r0.store()     // Catch: com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException -> L58
            goto L60
        L58:
            r0 = move-exception
            java.lang.String r1 = "SimpleCache"
            java.lang.String r2 = "Storing index file failed"
            android.util.Log.e(r1, r2, r0)
        L60:
            return
    }

    public static synchronized boolean isCacheFolderLocked(java.io.File r2) {
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCache> r0 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCache.class
            monitor-enter(r0)
            java.util.HashSet<java.io.File> r1 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCache.lockedCacheDirs     // Catch: java.lang.Throwable -> Lf
            java.io.File r2 = r2.getAbsoluteFile()     // Catch: java.lang.Throwable -> Lf
            boolean r2 = r1.contains(r2)     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r0)
            return r2
        Lf:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    private static synchronized boolean lockFolder(java.io.File r2) {
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCache> r0 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCache.class
            monitor-enter(r0)
            boolean r1 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCache.cacheFolderLockingDisabled     // Catch: java.lang.Throwable -> L16
            if (r1 == 0) goto La
            r2 = 1
            monitor-exit(r0)
            return r2
        La:
            java.util.HashSet<java.io.File> r1 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCache.lockedCacheDirs     // Catch: java.lang.Throwable -> L16
            java.io.File r2 = r2.getAbsoluteFile()     // Catch: java.lang.Throwable -> L16
            boolean r2 = r1.add(r2)     // Catch: java.lang.Throwable -> L16
            monitor-exit(r0)
            return r2
        L16:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    private void notifySpanAdded(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r4) {
            r3 = this;
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache$Listener>> r0 = r3.listeners
            java.lang.String r1 = r4.key
            java.lang.Object r0 = r0.get(r1)
            java.util.ArrayList r0 = (java.util.ArrayList) r0
            if (r0 == 0) goto L20
            int r1 = r0.size()
            int r1 = r1 + (-1)
        L12:
            if (r1 < 0) goto L20
            java.lang.Object r2 = r0.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache$Listener r2 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.Listener) r2
            r2.onSpanAdded(r3, r4)
            int r1 = r1 + (-1)
            goto L12
        L20:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheEvictor r0 = r3.evictor
            r0.onSpanAdded(r3, r4)
            return
    }

    private void notifySpanRemoved(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r4) {
            r3 = this;
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache$Listener>> r0 = r3.listeners
            java.lang.String r1 = r4.key
            java.lang.Object r0 = r0.get(r1)
            java.util.ArrayList r0 = (java.util.ArrayList) r0
            if (r0 == 0) goto L20
            int r1 = r0.size()
            int r1 = r1 + (-1)
        L12:
            if (r1 < 0) goto L20
            java.lang.Object r2 = r0.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache$Listener r2 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.Listener) r2
            r2.onSpanRemoved(r3, r4)
            int r1 = r1 + (-1)
            goto L12
        L20:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheEvictor r0 = r3.evictor
            r0.onSpanRemoved(r3, r4)
            return
    }

    private void notifySpanTouched(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r4, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r5) {
            r3 = this;
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache$Listener>> r0 = r3.listeners
            java.lang.String r1 = r4.key
            java.lang.Object r0 = r0.get(r1)
            java.util.ArrayList r0 = (java.util.ArrayList) r0
            if (r0 == 0) goto L20
            int r1 = r0.size()
            int r1 = r1 + (-1)
        L12:
            if (r1 < 0) goto L20
            java.lang.Object r2 = r0.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache$Listener r2 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.Listener) r2
            r2.onSpanTouched(r3, r4, r5)
            int r1 = r1 + (-1)
            goto L12
        L20:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheEvictor r0 = r3.evictor
            r0.onSpanTouched(r3, r4, r5)
            return
    }

    private void removeSpan(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r6, boolean r7) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException {
            r5 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r0 = r5.index
            java.lang.String r1 = r6.key
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r0 = r0.get(r1)
            if (r0 == 0) goto L2f
            boolean r1 = r0.removeSpan(r6)
            if (r1 != 0) goto L11
            goto L2f
        L11:
            long r1 = r5.totalSpace
            long r3 = r6.length
            long r1 = r1 - r3
            r5.totalSpace = r1
            if (r7 == 0) goto L2c
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r7 = r5.index     // Catch: java.lang.Throwable -> L27
            java.lang.String r0 = r0.key     // Catch: java.lang.Throwable -> L27
            r7.maybeRemove(r0)     // Catch: java.lang.Throwable -> L27
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r7 = r5.index     // Catch: java.lang.Throwable -> L27
            r7.store()     // Catch: java.lang.Throwable -> L27
            goto L2c
        L27:
            r7 = move-exception
            r5.notifySpanRemoved(r6)
            throw r7
        L2c:
            r5.notifySpanRemoved(r6)
        L2f:
            return
    }

    private void removeStaleSpansAndCachedContents() throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException {
            r5 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r1 = r5.index
            java.util.Collection r1 = r1.getAll()
            java.util.Iterator r1 = r1.iterator()
        Lf:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L3b
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r2 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent) r2
            java.util.TreeSet r2 = r2.getSpans()
            java.util.Iterator r2 = r2.iterator()
        L23:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto Lf
            java.lang.Object r3 = r2.next()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r3 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan) r3
            java.io.File r4 = r3.file
            boolean r4 = r4.exists()
            if (r4 != 0) goto L23
            r0.add(r3)
            goto L23
        L3b:
            r1 = 0
            r2 = r1
        L3d:
            int r3 = r0.size()
            if (r2 >= r3) goto L4f
            java.lang.Object r3 = r0.get(r2)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r3 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan) r3
            r5.removeSpan(r3, r1)
            int r2 = r2 + 1
            goto L3d
        L4f:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r0 = r5.index
            r0.removeEmpty()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r0 = r5.index
            r0.store()
            return
    }

    private static synchronized void unlockFolder(java.io.File r2) {
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCache> r0 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCache.class
            monitor-enter(r0)
            boolean r1 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCache.cacheFolderLockingDisabled     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto L10
            java.util.HashSet<java.io.File> r1 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCache.lockedCacheDirs     // Catch: java.lang.Throwable -> L12
            java.io.File r2 = r2.getAbsoluteFile()     // Catch: java.lang.Throwable -> L12
            r1.remove(r2)     // Catch: java.lang.Throwable -> L12
        L10:
            monitor-exit(r0)
            return
        L12:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    @Override
    public final synchronized java.util.NavigableSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan> addListener(java.lang.String r3, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.Listener r4) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.released     // Catch: java.lang.Throwable -> L28
            if (r0 != 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)     // Catch: java.lang.Throwable -> L28
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache$Listener>> r0 = r2.listeners     // Catch: java.lang.Throwable -> L28
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> L28
            java.util.ArrayList r0 = (java.util.ArrayList) r0     // Catch: java.lang.Throwable -> L28
            if (r0 != 0) goto L1f
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L28
            r0.<init>()     // Catch: java.lang.Throwable -> L28
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache$Listener>> r1 = r2.listeners     // Catch: java.lang.Throwable -> L28
            r1.put(r3, r0)     // Catch: java.lang.Throwable -> L28
        L1f:
            r0.add(r4)     // Catch: java.lang.Throwable -> L28
            java.util.NavigableSet r3 = r2.getCachedSpans(r3)     // Catch: java.lang.Throwable -> L28
            monitor-exit(r2)
            return r3
        L28:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    @Override
    public final synchronized void applyContentMetadataMutations(java.lang.String r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations r3) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.released     // Catch: java.lang.Throwable -> L17
            if (r0 != 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)     // Catch: java.lang.Throwable -> L17
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r0 = r1.index     // Catch: java.lang.Throwable -> L17
            r0.applyContentMetadataMutations(r2, r3)     // Catch: java.lang.Throwable -> L17
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r2 = r1.index     // Catch: java.lang.Throwable -> L17
            r2.store()     // Catch: java.lang.Throwable -> L17
            monitor-exit(r1)
            return
        L17:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public final synchronized void commitFile(java.io.File r10) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException {
            r9 = this;
            monitor-enter(r9)
            boolean r0 = r9.released     // Catch: java.lang.Throwable -> L6d
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L9
            r0 = r1
            goto La
        L9:
            r0 = r2
        La:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)     // Catch: java.lang.Throwable -> L6d
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r0 = r9.index     // Catch: java.lang.Throwable -> L6d
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r0 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan.createCacheEntry(r10, r0)     // Catch: java.lang.Throwable -> L6d
            if (r0 == 0) goto L17
            r3 = r1
            goto L18
        L17:
            r3 = r2
        L18:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r3)     // Catch: java.lang.Throwable -> L6d
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r3 = r9.index     // Catch: java.lang.Throwable -> L6d
            java.lang.String r4 = r0.key     // Catch: java.lang.Throwable -> L6d
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r3 = r3.get(r4)     // Catch: java.lang.Throwable -> L6d
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r3)     // Catch: java.lang.Throwable -> L6d
            boolean r4 = r3.isLocked()     // Catch: java.lang.Throwable -> L6d
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r4)     // Catch: java.lang.Throwable -> L6d
            boolean r4 = r10.exists()     // Catch: java.lang.Throwable -> L6d
            if (r4 != 0) goto L35
            monitor-exit(r9)
            return
        L35:
            long r4 = r10.length()     // Catch: java.lang.Throwable -> L6d
            r6 = 0
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 != 0) goto L44
            r10.delete()     // Catch: java.lang.Throwable -> L6d
            monitor-exit(r9)
            return
        L44:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadata r10 = r3.getMetadata()     // Catch: java.lang.Throwable -> L6d
            long r3 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataInternal.getContentLength(r10)     // Catch: java.lang.Throwable -> L6d
            r5 = -1
            int r10 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r10 == 0) goto L60
            long r5 = r0.position     // Catch: java.lang.Throwable -> L6d
            long r7 = r0.length     // Catch: java.lang.Throwable -> L6d
            long r5 = r5 + r7
            int r10 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r10 > 0) goto L5c
            goto L5d
        L5c:
            r1 = r2
        L5d:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r1)     // Catch: java.lang.Throwable -> L6d
        L60:
            r9.addSpan(r0)     // Catch: java.lang.Throwable -> L6d
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r10 = r9.index     // Catch: java.lang.Throwable -> L6d
            r10.store()     // Catch: java.lang.Throwable -> L6d
            r9.notifyAll()     // Catch: java.lang.Throwable -> L6d
            monitor-exit(r9)
            return
        L6d:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    @Override
    public final synchronized long getCacheSpace() {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.released     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)     // Catch: java.lang.Throwable -> Lf
            long r0 = r2.totalSpace     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r2)
            return r0
        Lf:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    @Override
    public final synchronized long getCachedLength(java.lang.String r2, long r3, long r5) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.released     // Catch: java.lang.Throwable -> L1b
            if (r0 != 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)     // Catch: java.lang.Throwable -> L1b
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r0 = r1.index     // Catch: java.lang.Throwable -> L1b
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L1b
            if (r2 == 0) goto L18
            long r2 = r2.getCachedBytesLength(r3, r5)     // Catch: java.lang.Throwable -> L1b
            goto L19
        L18:
            long r2 = -r5
        L19:
            monitor-exit(r1)
            return r2
        L1b:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public final synchronized java.util.NavigableSet<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan> getCachedSpans(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.released     // Catch: java.lang.Throwable -> L2b
            if (r0 != 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)     // Catch: java.lang.Throwable -> L2b
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r0 = r1.index     // Catch: java.lang.Throwable -> L2b
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L2b
            if (r2 == 0) goto L24
            boolean r0 = r2.isEmpty()     // Catch: java.lang.Throwable -> L2b
            if (r0 == 0) goto L1a
            goto L24
        L1a:
            java.util.TreeSet r0 = new java.util.TreeSet     // Catch: java.lang.Throwable -> L2b
            java.util.TreeSet r2 = r2.getSpans()     // Catch: java.lang.Throwable -> L2b
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L2b
            goto L29
        L24:
            java.util.TreeSet r0 = new java.util.TreeSet     // Catch: java.lang.Throwable -> L2b
            r0.<init>()     // Catch: java.lang.Throwable -> L2b
        L29:
            monitor-exit(r1)
            return r0
        L2b:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public final synchronized long getContentLength(java.lang.String r3) {
            r2 = this;
            monitor-enter(r2)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadata r3 = r2.getContentMetadata(r3)     // Catch: java.lang.Throwable -> Lb
            long r0 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataInternal.getContentLength(r3)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r2)
            return r0
        Lb:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    @Override
    public final synchronized com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadata getContentMetadata(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.released     // Catch: java.lang.Throwable -> L13
            if (r0 != 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)     // Catch: java.lang.Throwable -> L13
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r0 = r1.index     // Catch: java.lang.Throwable -> L13
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadata r2 = r0.getContentMetadata(r2)     // Catch: java.lang.Throwable -> L13
            monitor-exit(r1)
            return r2
        L13:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public final synchronized java.util.Set<java.lang.String> getKeys() {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.released     // Catch: java.lang.Throwable -> L18
            if (r0 != 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)     // Catch: java.lang.Throwable -> L18
            java.util.HashSet r0 = new java.util.HashSet     // Catch: java.lang.Throwable -> L18
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r1 = r2.index     // Catch: java.lang.Throwable -> L18
            java.util.Set r1 = r1.getKeys()     // Catch: java.lang.Throwable -> L18
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L18
            monitor-exit(r2)
            return r0
        L18:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    @Override
    public final synchronized boolean isCached(java.lang.String r4, long r5, long r7) {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = r3.released     // Catch: java.lang.Throwable -> L21
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L9
            r0 = r1
            goto La
        L9:
            r0 = r2
        La:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)     // Catch: java.lang.Throwable -> L21
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r0 = r3.index     // Catch: java.lang.Throwable -> L21
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r4 = r0.get(r4)     // Catch: java.lang.Throwable -> L21
            if (r4 == 0) goto L1e
            long r4 = r4.getCachedBytesLength(r5, r7)     // Catch: java.lang.Throwable -> L21
            int r4 = (r4 > r7 ? 1 : (r4 == r7 ? 0 : -1))
            if (r4 < 0) goto L1e
            goto L1f
        L1e:
            r1 = r2
        L1f:
            monitor-exit(r3)
            return r1
        L21:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    @Override
    public final synchronized void release() throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = r3.released     // Catch: java.lang.Throwable -> L22
            if (r0 == 0) goto L7
            monitor-exit(r3)
            return
        L7:
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache$Listener>> r0 = r3.listeners     // Catch: java.lang.Throwable -> L22
            r0.clear()     // Catch: java.lang.Throwable -> L22
            r0 = 1
            r3.removeStaleSpansAndCachedContents()     // Catch: java.lang.Throwable -> L19
            java.io.File r1 = r3.cacheDir     // Catch: java.lang.Throwable -> L22
            unlockFolder(r1)     // Catch: java.lang.Throwable -> L22
            r3.released = r0     // Catch: java.lang.Throwable -> L22
            monitor-exit(r3)
            return
        L19:
            r1 = move-exception
            java.io.File r2 = r3.cacheDir     // Catch: java.lang.Throwable -> L22
            unlockFolder(r2)     // Catch: java.lang.Throwable -> L22
            r3.released = r0     // Catch: java.lang.Throwable -> L22
            throw r1     // Catch: java.lang.Throwable -> L22
        L22:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    @Override
    public final synchronized void releaseHoleSpan(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r3) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.released     // Catch: java.lang.Throwable -> L2d
            r1 = 0
            if (r0 != 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = r1
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)     // Catch: java.lang.Throwable -> L2d
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r0 = r2.index     // Catch: java.lang.Throwable -> L2d
            java.lang.String r3 = r3.key     // Catch: java.lang.Throwable -> L2d
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r3 = r0.get(r3)     // Catch: java.lang.Throwable -> L2d
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r3)     // Catch: java.lang.Throwable -> L2d
            boolean r0 = r3.isLocked()     // Catch: java.lang.Throwable -> L2d
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)     // Catch: java.lang.Throwable -> L2d
            r3.setLocked(r1)     // Catch: java.lang.Throwable -> L2d
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r0 = r2.index     // Catch: java.lang.Throwable -> L2d
            java.lang.String r3 = r3.key     // Catch: java.lang.Throwable -> L2d
            r0.maybeRemove(r3)     // Catch: java.lang.Throwable -> L2d
            r2.notifyAll()     // Catch: java.lang.Throwable -> L2d
            monitor-exit(r2)
            return
        L2d:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    @Override
    public final synchronized void removeListener(java.lang.String r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.Listener r3) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.released     // Catch: java.lang.Throwable -> L21
            if (r0 == 0) goto L7
            monitor-exit(r1)
            return
        L7:
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache$Listener>> r0 = r1.listeners     // Catch: java.lang.Throwable -> L21
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L21
            java.util.ArrayList r0 = (java.util.ArrayList) r0     // Catch: java.lang.Throwable -> L21
            if (r0 == 0) goto L1f
            r0.remove(r3)     // Catch: java.lang.Throwable -> L21
            boolean r3 = r0.isEmpty()     // Catch: java.lang.Throwable -> L21
            if (r3 == 0) goto L1f
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache$Listener>> r3 = r1.listeners     // Catch: java.lang.Throwable -> L21
            r3.remove(r2)     // Catch: java.lang.Throwable -> L21
        L1f:
            monitor-exit(r1)
            return
        L21:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public final synchronized void removeSpan(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan r3) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.released     // Catch: java.lang.Throwable -> L11
            r1 = 1
            if (r0 != 0) goto L8
            r0 = r1
            goto L9
        L8:
            r0 = 0
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)     // Catch: java.lang.Throwable -> L11
            r2.removeSpan(r3, r1)     // Catch: java.lang.Throwable -> L11
            monitor-exit(r2)
            return
        L11:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    @Override
    public final synchronized void setContentLength(java.lang.String r2, long r3) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException {
            r1 = this;
            monitor-enter(r1)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations     // Catch: java.lang.Throwable -> Le
            r0.<init>()     // Catch: java.lang.Throwable -> Le
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataInternal.setContentLength(r0, r3)     // Catch: java.lang.Throwable -> Le
            r1.applyContentMetadataMutations(r2, r0)     // Catch: java.lang.Throwable -> Le
            monitor-exit(r1)
            return
        Le:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public final synchronized java.io.File startFile(java.lang.String r9, long r10, long r12) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException {
            r8 = this;
            monitor-enter(r8)
            boolean r0 = r8.released     // Catch: java.lang.Throwable -> L43
            if (r0 != 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)     // Catch: java.lang.Throwable -> L43
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r0 = r8.index     // Catch: java.lang.Throwable -> L43
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r0 = r0.get(r9)     // Catch: java.lang.Throwable -> L43
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r0)     // Catch: java.lang.Throwable -> L43
            boolean r1 = r0.isLocked()     // Catch: java.lang.Throwable -> L43
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r1)     // Catch: java.lang.Throwable -> L43
            java.io.File r1 = r8.cacheDir     // Catch: java.lang.Throwable -> L43
            boolean r1 = r1.exists()     // Catch: java.lang.Throwable -> L43
            if (r1 != 0) goto L2b
            java.io.File r1 = r8.cacheDir     // Catch: java.lang.Throwable -> L43
            r1.mkdirs()     // Catch: java.lang.Throwable -> L43
            r8.removeStaleSpansAndCachedContents()     // Catch: java.lang.Throwable -> L43
        L2b:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheEvictor r1 = r8.evictor     // Catch: java.lang.Throwable -> L43
            r2 = r8
            r3 = r9
            r4 = r10
            r6 = r12
            r1.onStartFile(r2, r3, r4, r6)     // Catch: java.lang.Throwable -> L43
            java.io.File r2 = r8.cacheDir     // Catch: java.lang.Throwable -> L43
            int r3 = r0.id     // Catch: java.lang.Throwable -> L43
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L43
            r4 = r10
            java.io.File r9 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan.getCacheFile(r2, r3, r4, r6)     // Catch: java.lang.Throwable -> L43
            monitor-exit(r8)
            return r9
        L43:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan startReadWrite(java.lang.String r1, long r2) throws java.lang.InterruptedException, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r1 = r0.startReadWrite(r1, r2)
            return r1
    }

    @Override
    public final synchronized com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan startReadWrite(java.lang.String r2, long r3) throws java.lang.InterruptedException, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException {
            r1 = this;
            monitor-enter(r1)
        L1:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r0 = r1.startReadWriteNonBlocking(r2, r3)     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto L9
            monitor-exit(r1)
            return r0
        L9:
            r1.wait()     // Catch: java.lang.Throwable -> Ld
            goto L1
        Ld:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheSpan startReadWriteNonBlocking(java.lang.String r1, long r2) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r1 = r0.startReadWriteNonBlocking(r1, r2)
            return r1
    }

    @Override
    public final synchronized com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan startReadWriteNonBlocking(java.lang.String r3, long r4) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.released     // Catch: java.lang.Throwable -> L37
            r1 = 1
            if (r0 != 0) goto L8
            r0 = r1
            goto L9
        L8:
            r0 = 0
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)     // Catch: java.lang.Throwable -> L37
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r4 = r2.getSpan(r3, r4)     // Catch: java.lang.Throwable -> L37
            boolean r5 = r4.isCached     // Catch: java.lang.Throwable -> L37
            if (r5 == 0) goto L23
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r5 = r2.index     // Catch: java.lang.Throwable -> L37
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r3 = r5.get(r3)     // Catch: java.lang.Throwable -> L37
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.SimpleCacheSpan r3 = r3.touch(r4)     // Catch: java.lang.Throwable -> L37
            r2.notifySpanTouched(r4, r3)     // Catch: java.lang.Throwable -> L37
            monitor-exit(r2)
            return r3
        L23:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContentIndex r5 = r2.index     // Catch: java.lang.Throwable -> L37
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r3 = r5.getOrAdd(r3)     // Catch: java.lang.Throwable -> L37
            boolean r5 = r3.isLocked()     // Catch: java.lang.Throwable -> L37
            if (r5 != 0) goto L34
            r3.setLocked(r1)     // Catch: java.lang.Throwable -> L37
            monitor-exit(r2)
            return r4
        L34:
            r3 = 0
            monitor-exit(r2)
            return r3
        L37:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }
}
