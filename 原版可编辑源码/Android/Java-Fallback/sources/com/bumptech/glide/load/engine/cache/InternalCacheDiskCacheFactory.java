package com.bumptech.glide.load.engine.cache;

public final class InternalCacheDiskCacheFactory extends com.bumptech.glide.load.engine.cache.DiskLruCacheFactory {


    public InternalCacheDiskCacheFactory(android.content.Context r3) {
            r2 = this;
            java.lang.String r0 = "image_manager_disk_cache"
            r1 = 262144000(0xfa00000, float:1.5777218E-29)
            r2.<init>(r3, r0, r1)
            return
    }

    public InternalCacheDiskCacheFactory(android.content.Context r2, int r3) {
            r1 = this;
            java.lang.String r0 = "image_manager_disk_cache"
            r1.<init>(r2, r0, r3)
            return
    }

    public InternalCacheDiskCacheFactory(android.content.Context r2, java.lang.String r3, int r4) {
            r1 = this;
            com.bumptech.glide.load.engine.cache.InternalCacheDiskCacheFactory$1 r0 = new com.bumptech.glide.load.engine.cache.InternalCacheDiskCacheFactory$1
            r0.<init>(r2, r3)
            r1.<init>(r0, r4)
            return
    }
}
