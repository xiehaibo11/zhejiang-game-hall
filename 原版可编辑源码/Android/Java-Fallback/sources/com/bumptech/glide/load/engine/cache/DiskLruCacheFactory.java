package com.bumptech.glide.load.engine.cache;

public class DiskLruCacheFactory implements com.bumptech.glide.load.engine.cache.DiskCache.Factory {
    private final com.bumptech.glide.load.engine.cache.DiskLruCacheFactory.CacheDirectoryGetter cacheDirectoryGetter;
    private final int diskCacheSize;



    public interface CacheDirectoryGetter {
        java.io.File getCacheDirectory();
    }

    public DiskLruCacheFactory(com.bumptech.glide.load.engine.cache.DiskLruCacheFactory.CacheDirectoryGetter r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.diskCacheSize = r2
            r0.cacheDirectoryGetter = r1
            return
    }

    public DiskLruCacheFactory(java.lang.String r2, int r3) {
            r1 = this;
            com.bumptech.glide.load.engine.cache.DiskLruCacheFactory$1 r0 = new com.bumptech.glide.load.engine.cache.DiskLruCacheFactory$1
            r0.<init>(r2)
            r1.<init>(r0, r3)
            return
    }

    public DiskLruCacheFactory(java.lang.String r2, java.lang.String r3, int r4) {
            r1 = this;
            com.bumptech.glide.load.engine.cache.DiskLruCacheFactory$2 r0 = new com.bumptech.glide.load.engine.cache.DiskLruCacheFactory$2
            r0.<init>(r2, r3)
            r1.<init>(r0, r4)
            return
    }

    @Override
    public com.bumptech.glide.load.engine.cache.DiskCache build() {
            r3 = this;
            com.bumptech.glide.load.engine.cache.DiskLruCacheFactory$CacheDirectoryGetter r0 = r3.cacheDirectoryGetter
            java.io.File r0 = r0.getCacheDirectory()
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            boolean r2 = r0.mkdirs()
            if (r2 != 0) goto L1d
            boolean r2 = r0.exists()
            if (r2 == 0) goto L1c
            boolean r2 = r0.isDirectory()
            if (r2 != 0) goto L1d
        L1c:
            return r1
        L1d:
            int r1 = r3.diskCacheSize
            com.bumptech.glide.load.engine.cache.DiskCache r0 = com.bumptech.glide.load.engine.cache.DiskLruCacheWrapper.get(r0, r1)
            return r0
    }
}
