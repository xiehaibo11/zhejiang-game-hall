package com.bumptech.glide.load.engine.cache;

public class DiskLruCacheWrapper implements com.bumptech.glide.load.engine.cache.DiskCache {
    private static final int APP_VERSION = 1;
    private static final java.lang.String TAG = "DiskLruCacheWrapper";
    private static final int VALUE_COUNT = 1;
    private static com.bumptech.glide.load.engine.cache.DiskLruCacheWrapper wrapper;
    private final java.io.File directory;
    private com.bumptech.glide.disklrucache.DiskLruCache diskLruCache;
    private final int maxSize;
    private final com.bumptech.glide.load.engine.cache.SafeKeyGenerator safeKeyGenerator;
    private final com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker writeLocker;

    static {
            return
    }

    protected DiskLruCacheWrapper(java.io.File r2, int r3) {
            r1 = this;
            r1.<init>()
            com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker r0 = new com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker
            r0.<init>()
            r1.writeLocker = r0
            r1.directory = r2
            r1.maxSize = r3
            com.bumptech.glide.load.engine.cache.SafeKeyGenerator r2 = new com.bumptech.glide.load.engine.cache.SafeKeyGenerator
            r2.<init>()
            r1.safeKeyGenerator = r2
            return
    }

    public static synchronized com.bumptech.glide.load.engine.cache.DiskCache get(java.io.File r2, int r3) {
            java.lang.Class<com.bumptech.glide.load.engine.cache.DiskLruCacheWrapper> r0 = com.bumptech.glide.load.engine.cache.DiskLruCacheWrapper.class
            monitor-enter(r0)
            com.bumptech.glide.load.engine.cache.DiskLruCacheWrapper r1 = com.bumptech.glide.load.engine.cache.DiskLruCacheWrapper.wrapper     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.bumptech.glide.load.engine.cache.DiskLruCacheWrapper r1 = new com.bumptech.glide.load.engine.cache.DiskLruCacheWrapper     // Catch: java.lang.Throwable -> L12
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L12
            com.bumptech.glide.load.engine.cache.DiskLruCacheWrapper.wrapper = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.bumptech.glide.load.engine.cache.DiskLruCacheWrapper r2 = com.bumptech.glide.load.engine.cache.DiskLruCacheWrapper.wrapper     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r2
        L12:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    private synchronized com.bumptech.glide.disklrucache.DiskLruCache getDiskCache() throws java.io.IOException {
            r4 = this;
            monitor-enter(r4)
            com.bumptech.glide.disklrucache.DiskLruCache r0 = r4.diskLruCache     // Catch: java.lang.Throwable -> L15
            if (r0 != 0) goto L11
            java.io.File r0 = r4.directory     // Catch: java.lang.Throwable -> L15
            int r1 = r4.maxSize     // Catch: java.lang.Throwable -> L15
            long r1 = (long) r1     // Catch: java.lang.Throwable -> L15
            r3 = 1
            com.bumptech.glide.disklrucache.DiskLruCache r0 = com.bumptech.glide.disklrucache.DiskLruCache.open(r0, r3, r3, r1)     // Catch: java.lang.Throwable -> L15
            r4.diskLruCache = r0     // Catch: java.lang.Throwable -> L15
        L11:
            com.bumptech.glide.disklrucache.DiskLruCache r0 = r4.diskLruCache     // Catch: java.lang.Throwable -> L15
            monitor-exit(r4)
            return r0
        L15:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    private synchronized void resetDiskCache() {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            r1.diskLruCache = r0     // Catch: java.lang.Throwable -> L6
            monitor-exit(r1)
            return
        L6:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public synchronized void clear() {
            r3 = this;
            monitor-enter(r3)
            com.bumptech.glide.disklrucache.DiskLruCache r0 = r3.getDiskCache()     // Catch: java.lang.Throwable -> Lc java.io.IOException -> Le
            r0.delete()     // Catch: java.lang.Throwable -> Lc java.io.IOException -> Le
            r3.resetDiskCache()     // Catch: java.lang.Throwable -> Lc java.io.IOException -> Le
            goto L1f
        Lc:
            r0 = move-exception
            goto L21
        Le:
            r0 = move-exception
            java.lang.String r1 = "DiskLruCacheWrapper"
            r2 = 5
            boolean r1 = android.util.Log.isLoggable(r1, r2)     // Catch: java.lang.Throwable -> Lc
            if (r1 == 0) goto L1f
            java.lang.String r1 = "DiskLruCacheWrapper"
            java.lang.String r2 = "Unable to clear disk cache"
            android.util.Log.w(r1, r2, r0)     // Catch: java.lang.Throwable -> Lc
        L1f:
            monitor-exit(r3)
            return
        L21:
            monitor-exit(r3)
            throw r0
    }

    @Override
    public void delete(com.bumptech.glide.load.Key r3) {
            r2 = this;
            com.bumptech.glide.load.engine.cache.SafeKeyGenerator r0 = r2.safeKeyGenerator
            java.lang.String r3 = r0.getSafeKey(r3)
            com.bumptech.glide.disklrucache.DiskLruCache r0 = r2.getDiskCache()     // Catch: java.io.IOException -> Le
            r0.remove(r3)     // Catch: java.io.IOException -> Le
            goto L1d
        Le:
            r3 = move-exception
            r0 = 5
            java.lang.String r1 = "DiskLruCacheWrapper"
            boolean r0 = android.util.Log.isLoggable(r1, r0)
            if (r0 == 0) goto L1d
            java.lang.String r0 = "Unable to delete from disk cache"
            android.util.Log.w(r1, r0, r3)
        L1d:
            return
    }

    @Override
    public java.io.File get(com.bumptech.glide.load.Key r4) {
            r3 = this;
            com.bumptech.glide.load.engine.cache.SafeKeyGenerator r0 = r3.safeKeyGenerator
            java.lang.String r4 = r0.getSafeKey(r4)
            r0 = 0
            com.bumptech.glide.disklrucache.DiskLruCache r1 = r3.getDiskCache()     // Catch: java.io.IOException -> L18
            com.bumptech.glide.disklrucache.DiskLruCache$Value r4 = r1.get(r4)     // Catch: java.io.IOException -> L18
            if (r4 == 0) goto L27
            r1 = 0
            java.io.File r4 = r4.getFile(r1)     // Catch: java.io.IOException -> L18
            r0 = r4
            goto L27
        L18:
            r4 = move-exception
            r1 = 5
            java.lang.String r2 = "DiskLruCacheWrapper"
            boolean r1 = android.util.Log.isLoggable(r2, r1)
            if (r1 == 0) goto L27
            java.lang.String r1 = "Unable to get from disk cache"
            android.util.Log.w(r2, r1, r4)
        L27:
            return r0
    }

    @Override
    public void put(com.bumptech.glide.load.Key r4, com.bumptech.glide.load.engine.cache.DiskCache.Writer r5) {
            r3 = this;
            java.lang.String r0 = "DiskLruCacheWrapper"
            com.bumptech.glide.load.engine.cache.SafeKeyGenerator r1 = r3.safeKeyGenerator
            java.lang.String r1 = r1.getSafeKey(r4)
            com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker r2 = r3.writeLocker
            r2.acquire(r4)
            com.bumptech.glide.disklrucache.DiskLruCache r2 = r3.getDiskCache()     // Catch: java.lang.Throwable -> L34 java.io.IOException -> L36
            com.bumptech.glide.disklrucache.DiskLruCache$Editor r1 = r2.edit(r1)     // Catch: java.lang.Throwable -> L34 java.io.IOException -> L36
            if (r1 == 0) goto L2e
            r2 = 0
            java.io.File r2 = r1.getFile(r2)     // Catch: java.lang.Throwable -> L29
            boolean r5 = r5.write(r2)     // Catch: java.lang.Throwable -> L29
            if (r5 == 0) goto L25
            r1.commit()     // Catch: java.lang.Throwable -> L29
        L25:
            r1.abortUnlessCommitted()     // Catch: java.lang.Throwable -> L34 java.io.IOException -> L36
            goto L2e
        L29:
            r5 = move-exception
            r1.abortUnlessCommitted()     // Catch: java.lang.Throwable -> L34 java.io.IOException -> L36
            throw r5     // Catch: java.lang.Throwable -> L34 java.io.IOException -> L36
        L2e:
            com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker r5 = r3.writeLocker
            r5.release(r4)
            goto L44
        L34:
            r5 = move-exception
            goto L45
        L36:
            r5 = move-exception
            r1 = 5
            boolean r1 = android.util.Log.isLoggable(r0, r1)     // Catch: java.lang.Throwable -> L34
            if (r1 == 0) goto L2e
            java.lang.String r1 = "Unable to put to disk cache"
            android.util.Log.w(r0, r1, r5)     // Catch: java.lang.Throwable -> L34
            goto L2e
        L44:
            return
        L45:
            com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker r0 = r3.writeLocker
            r0.release(r4)
            goto L4c
        L4b:
            throw r5
        L4c:
            goto L4b
    }
}
