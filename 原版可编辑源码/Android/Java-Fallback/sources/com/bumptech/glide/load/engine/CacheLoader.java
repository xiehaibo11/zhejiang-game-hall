package com.bumptech.glide.load.engine;

class CacheLoader {
    private static final java.lang.String TAG = "CacheLoader";
    private final com.bumptech.glide.load.engine.cache.DiskCache diskCache;

    public CacheLoader(com.bumptech.glide.load.engine.cache.DiskCache r1) {
            r0 = this;
            r0.<init>()
            r0.diskCache = r1
            return
    }

    public <Z> com.bumptech.glide.load.engine.Resource<Z> load(com.bumptech.glide.load.Key r5, com.bumptech.glide.load.ResourceDecoder<java.io.File, Z> r6, int r7, int r8) {
            r4 = this;
            java.lang.String r0 = "CacheLoader"
            com.bumptech.glide.load.engine.cache.DiskCache r1 = r4.diskCache
            java.io.File r1 = r1.get(r5)
            r2 = 0
            if (r1 != 0) goto Lc
            return r2
        Lc:
            r3 = 3
            com.bumptech.glide.load.engine.Resource r2 = r6.decode(r1, r7, r8)     // Catch: java.io.IOException -> L12
            goto L1e
        L12:
            r6 = move-exception
            boolean r7 = android.util.Log.isLoggable(r0, r3)
            if (r7 == 0) goto L1e
            java.lang.String r7 = "Exception decoding image from cache"
            android.util.Log.d(r0, r7, r6)
        L1e:
            if (r2 != 0) goto L30
            boolean r6 = android.util.Log.isLoggable(r0, r3)
            if (r6 == 0) goto L2b
            java.lang.String r6 = "Failed to decode image from cache or not present in cache"
            android.util.Log.d(r0, r6)
        L2b:
            com.bumptech.glide.load.engine.cache.DiskCache r6 = r4.diskCache
            r6.delete(r5)
        L30:
            return r2
    }
}
