package com.bumptech.glide.load.engine.prefill;

final class BitmapPreFillRunner implements java.lang.Runnable {
    static final int BACKOFF_RATIO = 4;
    private static final com.bumptech.glide.load.engine.prefill.BitmapPreFillRunner.Clock DEFAULT_CLOCK = null;
    static final long INITIAL_BACKOFF_MS = 40;
    static final long MAX_BACKOFF_MS = 0;
    static final long MAX_DURATION_MS = 32;
    private static final java.lang.String TAG = "PreFillRunner";
    private final com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool bitmapPool;
    private final com.bumptech.glide.load.engine.prefill.BitmapPreFillRunner.Clock clock;
    private long currentDelay;
    private final android.os.Handler handler;
    private boolean isCancelled;
    private final com.bumptech.glide.load.engine.cache.MemoryCache memoryCache;
    private final java.util.Set<com.bumptech.glide.load.engine.prefill.PreFillType> seenTypes;
    private final com.bumptech.glide.load.engine.prefill.PreFillQueue toPrefill;

    static class 1 {
    }

    static class Clock {
        Clock() {
                r0 = this;
                r0.<init>()
                return
        }

        public long now() {
                r2 = this;
                long r0 = android.os.SystemClock.currentThreadTimeMillis()
                return r0
        }
    }

    private static class UniqueKey implements com.bumptech.glide.load.Key {
        private UniqueKey() {
                r0 = this;
                r0.<init>()
                return
        }

        UniqueKey(com.bumptech.glide.load.engine.prefill.BitmapPreFillRunner.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void updateDiskCacheKey(java.security.MessageDigest r1) throws java.io.UnsupportedEncodingException {
                r0 = this;
                return
        }
    }

    static {
            com.bumptech.glide.load.engine.prefill.BitmapPreFillRunner$Clock r0 = new com.bumptech.glide.load.engine.prefill.BitmapPreFillRunner$Clock
            r0.<init>()
            com.bumptech.glide.load.engine.prefill.BitmapPreFillRunner.DEFAULT_CLOCK = r0
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.SECONDS
            r1 = 1
            long r0 = r0.toMillis(r1)
            com.bumptech.glide.load.engine.prefill.BitmapPreFillRunner.MAX_BACKOFF_MS = r0
            return
    }

    public BitmapPreFillRunner(com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r7, com.bumptech.glide.load.engine.cache.MemoryCache r8, com.bumptech.glide.load.engine.prefill.PreFillQueue r9) {
            r6 = this;
            com.bumptech.glide.load.engine.prefill.BitmapPreFillRunner$Clock r4 = com.bumptech.glide.load.engine.prefill.BitmapPreFillRunner.DEFAULT_CLOCK
            android.os.Handler r5 = new android.os.Handler
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r5.<init>(r0)
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    BitmapPreFillRunner(com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r3, com.bumptech.glide.load.engine.cache.MemoryCache r4, com.bumptech.glide.load.engine.prefill.PreFillQueue r5, com.bumptech.glide.load.engine.prefill.BitmapPreFillRunner.Clock r6, android.os.Handler r7) {
            r2 = this;
            r2.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r2.seenTypes = r0
            r0 = 40
            r2.currentDelay = r0
            r2.bitmapPool = r3
            r2.memoryCache = r4
            r2.toPrefill = r5
            r2.clock = r6
            r2.handler = r7
            return
    }

    private void addToBitmapPool(com.bumptech.glide.load.engine.prefill.PreFillType r4, android.graphics.Bitmap r5) {
            r3 = this;
            java.util.Set<com.bumptech.glide.load.engine.prefill.PreFillType> r0 = r3.seenTypes
            boolean r0 = r0.add(r4)
            if (r0 == 0) goto L21
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r0 = r3.bitmapPool
            int r1 = r4.getWidth()
            int r2 = r4.getHeight()
            android.graphics.Bitmap$Config r4 = r4.getConfig()
            android.graphics.Bitmap r4 = r0.get(r1, r2, r4)
            if (r4 == 0) goto L21
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r0 = r3.bitmapPool
            r0.put(r4)
        L21:
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r4 = r3.bitmapPool
            r4.put(r5)
            return
    }

    private boolean allocate() {
            r7 = this;
            com.bumptech.glide.load.engine.prefill.BitmapPreFillRunner$Clock r0 = r7.clock
            long r0 = r0.now()
        L6:
            com.bumptech.glide.load.engine.prefill.PreFillQueue r2 = r7.toPrefill
            boolean r2 = r2.isEmpty()
            if (r2 != 0) goto L90
            boolean r2 = r7.isGcDetected(r0)
            if (r2 != 0) goto L90
            com.bumptech.glide.load.engine.prefill.PreFillQueue r2 = r7.toPrefill
            com.bumptech.glide.load.engine.prefill.PreFillType r2 = r2.remove()
            int r3 = r2.getWidth()
            int r4 = r2.getHeight()
            android.graphics.Bitmap$Config r5 = r2.getConfig()
            android.graphics.Bitmap r3 = android.graphics.Bitmap.createBitmap(r3, r4, r5)
            int r4 = r7.getFreeMemoryCacheBytes()
            int r5 = com.bumptech.glide.util.Util.getBitmapByteSize(r3)
            if (r4 < r5) goto L46
            com.bumptech.glide.load.engine.cache.MemoryCache r4 = r7.memoryCache
            com.bumptech.glide.load.engine.prefill.BitmapPreFillRunner$UniqueKey r5 = new com.bumptech.glide.load.engine.prefill.BitmapPreFillRunner$UniqueKey
            r6 = 0
            r5.<init>(r6)
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r6 = r7.bitmapPool
            com.bumptech.glide.load.resource.bitmap.BitmapResource r6 = com.bumptech.glide.load.resource.bitmap.BitmapResource.obtain(r3, r6)
            r4.put(r5, r6)
            goto L49
        L46:
            r7.addToBitmapPool(r2, r3)
        L49:
            r4 = 3
            java.lang.String r5 = "PreFillRunner"
            boolean r4 = android.util.Log.isLoggable(r5, r4)
            if (r4 == 0) goto L6
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r6 = "allocated ["
            r4.append(r6)
            int r6 = r2.getWidth()
            r4.append(r6)
            java.lang.String r6 = "x"
            r4.append(r6)
            int r6 = r2.getHeight()
            r4.append(r6)
            java.lang.String r6 = "] "
            r4.append(r6)
            android.graphics.Bitmap$Config r2 = r2.getConfig()
            r4.append(r2)
            java.lang.String r2 = " size: "
            r4.append(r2)
            int r2 = com.bumptech.glide.util.Util.getBitmapByteSize(r3)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            android.util.Log.d(r5, r2)
            goto L6
        L90:
            boolean r0 = r7.isCancelled
            if (r0 != 0) goto L9e
            com.bumptech.glide.load.engine.prefill.PreFillQueue r0 = r7.toPrefill
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L9e
            r0 = 1
            goto L9f
        L9e:
            r0 = 0
        L9f:
            return r0
    }

    private int getFreeMemoryCacheBytes() {
            r2 = this;
            com.bumptech.glide.load.engine.cache.MemoryCache r0 = r2.memoryCache
            int r0 = r0.getMaxSize()
            com.bumptech.glide.load.engine.cache.MemoryCache r1 = r2.memoryCache
            int r1 = r1.getCurrentSize()
            int r0 = r0 - r1
            return r0
    }

    private long getNextDelay() {
            r6 = this;
            long r0 = r6.currentDelay
            r2 = 4
            long r2 = r2 * r0
            long r4 = com.bumptech.glide.load.engine.prefill.BitmapPreFillRunner.MAX_BACKOFF_MS
            long r2 = java.lang.Math.min(r2, r4)
            r6.currentDelay = r2
            return r0
    }

    private boolean isGcDetected(long r4) {
            r3 = this;
            com.bumptech.glide.load.engine.prefill.BitmapPreFillRunner$Clock r0 = r3.clock
            long r0 = r0.now()
            long r0 = r0 - r4
            r4 = 32
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r2 < 0) goto Lf
            r4 = 1
            goto L10
        Lf:
            r4 = 0
        L10:
            return r4
    }

    public void cancel() {
            r1 = this;
            r0 = 1
            r1.isCancelled = r0
            return
    }

    @Override
    public void run() {
            r3 = this;
            boolean r0 = r3.allocate()
            if (r0 == 0) goto Lf
            android.os.Handler r0 = r3.handler
            long r1 = r3.getNextDelay()
            r0.postDelayed(r3, r1)
        Lf:
            return
    }
}
