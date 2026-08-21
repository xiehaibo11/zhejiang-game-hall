package com.bumptech.glide;

public class GlideBuilder {
    private com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool bitmapPool;
    private final android.content.Context context;
    private com.bumptech.glide.load.DecodeFormat decodeFormat;
    private com.bumptech.glide.load.engine.cache.DiskCache.Factory diskCacheFactory;
    private java.util.concurrent.ExecutorService diskCacheService;
    private com.bumptech.glide.load.engine.Engine engine;
    private com.bumptech.glide.load.engine.cache.MemoryCache memoryCache;
    private java.util.concurrent.ExecutorService sourceService;


    public GlideBuilder(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = r1.getApplicationContext()
            r0.context = r1
            return
    }

    com.bumptech.glide.Glide createGlide() {
            r7 = this;
            java.util.concurrent.ExecutorService r0 = r7.sourceService
            r1 = 1
            if (r0 != 0) goto L18
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()
            int r0 = r0.availableProcessors()
            int r0 = java.lang.Math.max(r1, r0)
            com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor r2 = new com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor
            r2.<init>(r0)
            r7.sourceService = r2
        L18:
            java.util.concurrent.ExecutorService r0 = r7.diskCacheService
            if (r0 != 0) goto L23
            com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor r0 = new com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor
            r0.<init>(r1)
            r7.diskCacheService = r0
        L23:
            com.bumptech.glide.load.engine.cache.MemorySizeCalculator r0 = new com.bumptech.glide.load.engine.cache.MemorySizeCalculator
            android.content.Context r1 = r7.context
            r0.<init>(r1)
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r1 = r7.bitmapPool
            if (r1 != 0) goto L47
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 11
            if (r1 < r2) goto L40
            int r1 = r0.getBitmapPoolSize()
            com.bumptech.glide.load.engine.bitmap_recycle.LruBitmapPool r2 = new com.bumptech.glide.load.engine.bitmap_recycle.LruBitmapPool
            r2.<init>(r1)
            r7.bitmapPool = r2
            goto L47
        L40:
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPoolAdapter r1 = new com.bumptech.glide.load.engine.bitmap_recycle.BitmapPoolAdapter
            r1.<init>()
            r7.bitmapPool = r1
        L47:
            com.bumptech.glide.load.engine.cache.MemoryCache r1 = r7.memoryCache
            if (r1 != 0) goto L56
            com.bumptech.glide.load.engine.cache.LruResourceCache r1 = new com.bumptech.glide.load.engine.cache.LruResourceCache
            int r0 = r0.getMemoryCacheSize()
            r1.<init>(r0)
            r7.memoryCache = r1
        L56:
            com.bumptech.glide.load.engine.cache.DiskCache$Factory r0 = r7.diskCacheFactory
            if (r0 != 0) goto L63
            com.bumptech.glide.load.engine.cache.InternalCacheDiskCacheFactory r0 = new com.bumptech.glide.load.engine.cache.InternalCacheDiskCacheFactory
            android.content.Context r1 = r7.context
            r0.<init>(r1)
            r7.diskCacheFactory = r0
        L63:
            com.bumptech.glide.load.engine.Engine r0 = r7.engine
            if (r0 != 0) goto L76
            com.bumptech.glide.load.engine.Engine r0 = new com.bumptech.glide.load.engine.Engine
            com.bumptech.glide.load.engine.cache.MemoryCache r1 = r7.memoryCache
            com.bumptech.glide.load.engine.cache.DiskCache$Factory r2 = r7.diskCacheFactory
            java.util.concurrent.ExecutorService r3 = r7.diskCacheService
            java.util.concurrent.ExecutorService r4 = r7.sourceService
            r0.<init>(r1, r2, r3, r4)
            r7.engine = r0
        L76:
            com.bumptech.glide.load.DecodeFormat r0 = r7.decodeFormat
            if (r0 != 0) goto L7e
            com.bumptech.glide.load.DecodeFormat r0 = com.bumptech.glide.load.DecodeFormat.DEFAULT
            r7.decodeFormat = r0
        L7e:
            com.bumptech.glide.Glide r0 = new com.bumptech.glide.Glide
            com.bumptech.glide.load.engine.Engine r2 = r7.engine
            com.bumptech.glide.load.engine.cache.MemoryCache r3 = r7.memoryCache
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r4 = r7.bitmapPool
            android.content.Context r5 = r7.context
            com.bumptech.glide.load.DecodeFormat r6 = r7.decodeFormat
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6)
            return r0
    }

    public com.bumptech.glide.GlideBuilder setBitmapPool(com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r1) {
            r0 = this;
            r0.bitmapPool = r1
            return r0
    }

    public com.bumptech.glide.GlideBuilder setDecodeFormat(com.bumptech.glide.load.DecodeFormat r1) {
            r0 = this;
            r0.decodeFormat = r1
            return r0
    }

    public com.bumptech.glide.GlideBuilder setDiskCache(com.bumptech.glide.load.engine.cache.DiskCache.Factory r1) {
            r0 = this;
            r0.diskCacheFactory = r1
            return r0
    }

    @java.lang.Deprecated
    public com.bumptech.glide.GlideBuilder setDiskCache(com.bumptech.glide.load.engine.cache.DiskCache r2) {
            r1 = this;
            com.bumptech.glide.GlideBuilder$1 r0 = new com.bumptech.glide.GlideBuilder$1
            r0.<init>(r1, r2)
            com.bumptech.glide.GlideBuilder r2 = r1.setDiskCache(r0)
            return r2
    }

    public com.bumptech.glide.GlideBuilder setDiskCacheService(java.util.concurrent.ExecutorService r1) {
            r0 = this;
            r0.diskCacheService = r1
            return r0
    }

    com.bumptech.glide.GlideBuilder setEngine(com.bumptech.glide.load.engine.Engine r1) {
            r0 = this;
            r0.engine = r1
            return r0
    }

    public com.bumptech.glide.GlideBuilder setMemoryCache(com.bumptech.glide.load.engine.cache.MemoryCache r1) {
            r0 = this;
            r0.memoryCache = r1
            return r0
    }

    public com.bumptech.glide.GlideBuilder setResizeService(java.util.concurrent.ExecutorService r1) {
            r0 = this;
            r0.sourceService = r1
            return r0
    }
}
