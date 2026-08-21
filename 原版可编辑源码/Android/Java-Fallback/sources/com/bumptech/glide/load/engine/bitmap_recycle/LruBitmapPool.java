package com.bumptech.glide.load.engine.bitmap_recycle;

public class LruBitmapPool implements com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool {
    private static final android.graphics.Bitmap.Config DEFAULT_CONFIG = null;
    private static final java.lang.String TAG = "LruBitmapPool";
    private final java.util.Set<android.graphics.Bitmap.Config> allowedConfigs;
    private int currentSize;
    private int evictions;
    private int hits;
    private final int initialMaxSize;
    private int maxSize;
    private int misses;
    private int puts;
    private final com.bumptech.glide.load.engine.bitmap_recycle.LruPoolStrategy strategy;
    private final com.bumptech.glide.load.engine.bitmap_recycle.LruBitmapPool.BitmapTracker tracker;

    static class 1 {
    }

    private interface BitmapTracker {
        void add(android.graphics.Bitmap r1);

        void remove(android.graphics.Bitmap r1);
    }

    private static class NullBitmapTracker implements com.bumptech.glide.load.engine.bitmap_recycle.LruBitmapPool.BitmapTracker {
        private NullBitmapTracker() {
                r0 = this;
                r0.<init>()
                return
        }

        NullBitmapTracker(com.bumptech.glide.load.engine.bitmap_recycle.LruBitmapPool.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void add(android.graphics.Bitmap r1) {
                r0 = this;
                return
        }

        @Override
        public void remove(android.graphics.Bitmap r1) {
                r0 = this;
                return
        }
    }

    private static class ThrowingBitmapTracker implements com.bumptech.glide.load.engine.bitmap_recycle.LruBitmapPool.BitmapTracker {
        private final java.util.Set<android.graphics.Bitmap> bitmaps;

        private ThrowingBitmapTracker() {
                r1 = this;
                r1.<init>()
                java.util.HashSet r0 = new java.util.HashSet
                r0.<init>()
                java.util.Set r0 = java.util.Collections.synchronizedSet(r0)
                r1.bitmaps = r0
                return
        }

        @Override
        public void add(android.graphics.Bitmap r4) {
                r3 = this;
                java.util.Set<android.graphics.Bitmap> r0 = r3.bitmaps
                boolean r0 = r0.contains(r4)
                if (r0 != 0) goto Le
                java.util.Set<android.graphics.Bitmap> r0 = r3.bitmaps
                r0.add(r4)
                return
            Le:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Can't add already added bitmap: "
                r1.append(r2)
                r1.append(r4)
                java.lang.String r2 = " ["
                r1.append(r2)
                int r2 = r4.getWidth()
                r1.append(r2)
                java.lang.String r2 = "x"
                r1.append(r2)
                int r4 = r4.getHeight()
                r1.append(r4)
                java.lang.String r4 = "]"
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                r0.<init>(r4)
                throw r0
        }

        @Override
        public void remove(android.graphics.Bitmap r2) {
                r1 = this;
                java.util.Set<android.graphics.Bitmap> r0 = r1.bitmaps
                boolean r0 = r0.contains(r2)
                if (r0 == 0) goto Le
                java.util.Set<android.graphics.Bitmap> r0 = r1.bitmaps
                r0.remove(r2)
                return
            Le:
                java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
                java.lang.String r0 = "Cannot remove bitmap not in tracker"
                r2.<init>(r0)
                throw r2
        }
    }

    static {
            android.graphics.Bitmap$Config r0 = android.graphics.Bitmap.Config.ARGB_8888
            com.bumptech.glide.load.engine.bitmap_recycle.LruBitmapPool.DEFAULT_CONFIG = r0
            return
    }

    public LruBitmapPool(int r3) {
            r2 = this;
            com.bumptech.glide.load.engine.bitmap_recycle.LruPoolStrategy r0 = getDefaultStrategy()
            java.util.Set r1 = getDefaultAllowedConfigs()
            r2.<init>(r3, r0, r1)
            return
    }

    LruBitmapPool(int r1, com.bumptech.glide.load.engine.bitmap_recycle.LruPoolStrategy r2, java.util.Set<android.graphics.Bitmap.Config> r3) {
            r0 = this;
            r0.<init>()
            r0.initialMaxSize = r1
            r0.maxSize = r1
            r0.strategy = r2
            r0.allowedConfigs = r3
            com.bumptech.glide.load.engine.bitmap_recycle.LruBitmapPool$NullBitmapTracker r1 = new com.bumptech.glide.load.engine.bitmap_recycle.LruBitmapPool$NullBitmapTracker
            r2 = 0
            r1.<init>(r2)
            r0.tracker = r1
            return
    }

    public LruBitmapPool(int r2, java.util.Set<android.graphics.Bitmap.Config> r3) {
            r1 = this;
            com.bumptech.glide.load.engine.bitmap_recycle.LruPoolStrategy r0 = getDefaultStrategy()
            r1.<init>(r2, r0, r3)
            return
    }

    private void dump() {
            r2 = this;
            java.lang.String r0 = "LruBitmapPool"
            r1 = 2
            boolean r0 = android.util.Log.isLoggable(r0, r1)
            if (r0 == 0) goto Lc
            r2.dumpUnchecked()
        Lc:
            return
    }

    private void dumpUnchecked() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Hits="
            r0.append(r1)
            int r1 = r2.hits
            r0.append(r1)
            java.lang.String r1 = ", misses="
            r0.append(r1)
            int r1 = r2.misses
            r0.append(r1)
            java.lang.String r1 = ", puts="
            r0.append(r1)
            int r1 = r2.puts
            r0.append(r1)
            java.lang.String r1 = ", evictions="
            r0.append(r1)
            int r1 = r2.evictions
            r0.append(r1)
            java.lang.String r1 = ", currentSize="
            r0.append(r1)
            int r1 = r2.currentSize
            r0.append(r1)
            java.lang.String r1 = ", maxSize="
            r0.append(r1)
            int r1 = r2.maxSize
            r0.append(r1)
            java.lang.String r1 = "\nStrategy="
            r0.append(r1)
            com.bumptech.glide.load.engine.bitmap_recycle.LruPoolStrategy r1 = r2.strategy
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "LruBitmapPool"
            android.util.Log.v(r1, r0)
            return
    }

    private void evict() {
            r1 = this;
            int r0 = r1.maxSize
            r1.trimToSize(r0)
            return
    }

    private static java.util.Set<android.graphics.Bitmap.Config> getDefaultAllowedConfigs() {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            android.graphics.Bitmap$Config[] r1 = android.graphics.Bitmap.Config.values()
            java.util.List r1 = java.util.Arrays.asList(r1)
            r0.addAll(r1)
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 19
            if (r1 < r2) goto L1a
            r1 = 0
            r0.add(r1)
        L1a:
            java.util.Set r0 = java.util.Collections.unmodifiableSet(r0)
            return r0
    }

    private static com.bumptech.glide.load.engine.bitmap_recycle.LruPoolStrategy getDefaultStrategy() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lc
            com.bumptech.glide.load.engine.bitmap_recycle.SizeConfigStrategy r0 = new com.bumptech.glide.load.engine.bitmap_recycle.SizeConfigStrategy
            r0.<init>()
            goto L11
        Lc:
            com.bumptech.glide.load.engine.bitmap_recycle.AttributeStrategy r0 = new com.bumptech.glide.load.engine.bitmap_recycle.AttributeStrategy
            r0.<init>()
        L11:
            return r0
    }

    private synchronized void trimToSize(int r5) {
            r4 = this;
            monitor-enter(r4)
        L1:
            int r0 = r4.currentSize     // Catch: java.lang.Throwable -> L69
            if (r0 <= r5) goto L67
            com.bumptech.glide.load.engine.bitmap_recycle.LruPoolStrategy r0 = r4.strategy     // Catch: java.lang.Throwable -> L69
            android.graphics.Bitmap r0 = r0.removeLast()     // Catch: java.lang.Throwable -> L69
            if (r0 != 0) goto L25
            java.lang.String r5 = "LruBitmapPool"
            r0 = 5
            boolean r5 = android.util.Log.isLoggable(r5, r0)     // Catch: java.lang.Throwable -> L69
            if (r5 == 0) goto L20
            java.lang.String r5 = "LruBitmapPool"
            java.lang.String r0 = "Size mismatch, resetting"
            android.util.Log.w(r5, r0)     // Catch: java.lang.Throwable -> L69
            r4.dumpUnchecked()     // Catch: java.lang.Throwable -> L69
        L20:
            r5 = 0
            r4.currentSize = r5     // Catch: java.lang.Throwable -> L69
            monitor-exit(r4)
            return
        L25:
            com.bumptech.glide.load.engine.bitmap_recycle.LruBitmapPool$BitmapTracker r1 = r4.tracker     // Catch: java.lang.Throwable -> L69
            r1.remove(r0)     // Catch: java.lang.Throwable -> L69
            int r1 = r4.currentSize     // Catch: java.lang.Throwable -> L69
            com.bumptech.glide.load.engine.bitmap_recycle.LruPoolStrategy r2 = r4.strategy     // Catch: java.lang.Throwable -> L69
            int r2 = r2.getSize(r0)     // Catch: java.lang.Throwable -> L69
            int r1 = r1 - r2
            r4.currentSize = r1     // Catch: java.lang.Throwable -> L69
            r0.recycle()     // Catch: java.lang.Throwable -> L69
            int r1 = r4.evictions     // Catch: java.lang.Throwable -> L69
            int r1 = r1 + 1
            r4.evictions = r1     // Catch: java.lang.Throwable -> L69
            java.lang.String r1 = "LruBitmapPool"
            r2 = 3
            boolean r1 = android.util.Log.isLoggable(r1, r2)     // Catch: java.lang.Throwable -> L69
            if (r1 == 0) goto L63
            java.lang.String r1 = "LruBitmapPool"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L69
            r2.<init>()     // Catch: java.lang.Throwable -> L69
            java.lang.String r3 = "Evicting bitmap="
            r2.append(r3)     // Catch: java.lang.Throwable -> L69
            com.bumptech.glide.load.engine.bitmap_recycle.LruPoolStrategy r3 = r4.strategy     // Catch: java.lang.Throwable -> L69
            java.lang.String r0 = r3.logBitmap(r0)     // Catch: java.lang.Throwable -> L69
            r2.append(r0)     // Catch: java.lang.Throwable -> L69
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L69
            android.util.Log.d(r1, r0)     // Catch: java.lang.Throwable -> L69
        L63:
            r4.dump()     // Catch: java.lang.Throwable -> L69
            goto L1
        L67:
            monitor-exit(r4)
            return
        L69:
            r5 = move-exception
            monitor-exit(r4)
            goto L6d
        L6c:
            throw r5
        L6d:
            goto L6c
    }

    @Override
    public void clearMemory() {
            r2 = this;
            java.lang.String r0 = "LruBitmapPool"
            r1 = 3
            boolean r1 = android.util.Log.isLoggable(r0, r1)
            if (r1 == 0) goto Le
            java.lang.String r1 = "clearMemory"
            android.util.Log.d(r0, r1)
        Le:
            r0 = 0
            r2.trimToSize(r0)
            return
    }

    @Override
    public synchronized android.graphics.Bitmap get(int r1, int r2, android.graphics.Bitmap.Config r3) {
            r0 = this;
            monitor-enter(r0)
            android.graphics.Bitmap r1 = r0.getDirty(r1, r2, r3)     // Catch: java.lang.Throwable -> Ld
            if (r1 == 0) goto Lb
            r2 = 0
            r1.eraseColor(r2)     // Catch: java.lang.Throwable -> Ld
        Lb:
            monitor-exit(r0)
            return r1
        Ld:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public synchronized android.graphics.Bitmap getDirty(int r6, int r7, android.graphics.Bitmap.Config r8) {
            r5 = this;
            monitor-enter(r5)
            com.bumptech.glide.load.engine.bitmap_recycle.LruPoolStrategy r0 = r5.strategy     // Catch: java.lang.Throwable -> L83
            if (r8 == 0) goto L7
            r1 = r8
            goto L9
        L7:
            android.graphics.Bitmap$Config r1 = com.bumptech.glide.load.engine.bitmap_recycle.LruBitmapPool.DEFAULT_CONFIG     // Catch: java.lang.Throwable -> L83
        L9:
            android.graphics.Bitmap r0 = r0.get(r6, r7, r1)     // Catch: java.lang.Throwable -> L83
            r1 = 1
            if (r0 != 0) goto L3b
            java.lang.String r2 = "LruBitmapPool"
            r3 = 3
            boolean r2 = android.util.Log.isLoggable(r2, r3)     // Catch: java.lang.Throwable -> L83
            if (r2 == 0) goto L35
            java.lang.String r2 = "LruBitmapPool"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L83
            r3.<init>()     // Catch: java.lang.Throwable -> L83
            java.lang.String r4 = "Missing bitmap="
            r3.append(r4)     // Catch: java.lang.Throwable -> L83
            com.bumptech.glide.load.engine.bitmap_recycle.LruPoolStrategy r4 = r5.strategy     // Catch: java.lang.Throwable -> L83
            java.lang.String r4 = r4.logBitmap(r6, r7, r8)     // Catch: java.lang.Throwable -> L83
            r3.append(r4)     // Catch: java.lang.Throwable -> L83
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L83
            android.util.Log.d(r2, r3)     // Catch: java.lang.Throwable -> L83
        L35:
            int r2 = r5.misses     // Catch: java.lang.Throwable -> L83
            int r2 = r2 + r1
            r5.misses = r2     // Catch: java.lang.Throwable -> L83
            goto L59
        L3b:
            int r2 = r5.hits     // Catch: java.lang.Throwable -> L83
            int r2 = r2 + r1
            r5.hits = r2     // Catch: java.lang.Throwable -> L83
            int r2 = r5.currentSize     // Catch: java.lang.Throwable -> L83
            com.bumptech.glide.load.engine.bitmap_recycle.LruPoolStrategy r3 = r5.strategy     // Catch: java.lang.Throwable -> L83
            int r3 = r3.getSize(r0)     // Catch: java.lang.Throwable -> L83
            int r2 = r2 - r3
            r5.currentSize = r2     // Catch: java.lang.Throwable -> L83
            com.bumptech.glide.load.engine.bitmap_recycle.LruBitmapPool$BitmapTracker r2 = r5.tracker     // Catch: java.lang.Throwable -> L83
            r2.remove(r0)     // Catch: java.lang.Throwable -> L83
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L83
            r3 = 12
            if (r2 < r3) goto L59
            r0.setHasAlpha(r1)     // Catch: java.lang.Throwable -> L83
        L59:
            java.lang.String r1 = "LruBitmapPool"
            r2 = 2
            boolean r1 = android.util.Log.isLoggable(r1, r2)     // Catch: java.lang.Throwable -> L83
            if (r1 == 0) goto L7e
            java.lang.String r1 = "LruBitmapPool"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L83
            r2.<init>()     // Catch: java.lang.Throwable -> L83
            java.lang.String r3 = "Get bitmap="
            r2.append(r3)     // Catch: java.lang.Throwable -> L83
            com.bumptech.glide.load.engine.bitmap_recycle.LruPoolStrategy r3 = r5.strategy     // Catch: java.lang.Throwable -> L83
            java.lang.String r6 = r3.logBitmap(r6, r7, r8)     // Catch: java.lang.Throwable -> L83
            r2.append(r6)     // Catch: java.lang.Throwable -> L83
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> L83
            android.util.Log.v(r1, r6)     // Catch: java.lang.Throwable -> L83
        L7e:
            r5.dump()     // Catch: java.lang.Throwable -> L83
            monitor-exit(r5)
            return r0
        L83:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    @Override
    public int getMaxSize() {
            r1 = this;
            int r0 = r1.maxSize
            return r0
    }

    @Override
    public synchronized boolean put(android.graphics.Bitmap r5) {
            r4 = this;
            monitor-enter(r4)
            if (r5 == 0) goto Laf
            boolean r0 = r5.isMutable()     // Catch: java.lang.Throwable -> Lad
            r1 = 2
            if (r0 == 0) goto L68
            com.bumptech.glide.load.engine.bitmap_recycle.LruPoolStrategy r0 = r4.strategy     // Catch: java.lang.Throwable -> Lad
            int r0 = r0.getSize(r5)     // Catch: java.lang.Throwable -> Lad
            int r2 = r4.maxSize     // Catch: java.lang.Throwable -> Lad
            if (r0 > r2) goto L68
            java.util.Set<android.graphics.Bitmap$Config> r0 = r4.allowedConfigs     // Catch: java.lang.Throwable -> Lad
            android.graphics.Bitmap$Config r2 = r5.getConfig()     // Catch: java.lang.Throwable -> Lad
            boolean r0 = r0.contains(r2)     // Catch: java.lang.Throwable -> Lad
            if (r0 != 0) goto L21
            goto L68
        L21:
            com.bumptech.glide.load.engine.bitmap_recycle.LruPoolStrategy r0 = r4.strategy     // Catch: java.lang.Throwable -> Lad
            int r0 = r0.getSize(r5)     // Catch: java.lang.Throwable -> Lad
            com.bumptech.glide.load.engine.bitmap_recycle.LruPoolStrategy r2 = r4.strategy     // Catch: java.lang.Throwable -> Lad
            r2.put(r5)     // Catch: java.lang.Throwable -> Lad
            com.bumptech.glide.load.engine.bitmap_recycle.LruBitmapPool$BitmapTracker r2 = r4.tracker     // Catch: java.lang.Throwable -> Lad
            r2.add(r5)     // Catch: java.lang.Throwable -> Lad
            int r2 = r4.puts     // Catch: java.lang.Throwable -> Lad
            r3 = 1
            int r2 = r2 + r3
            r4.puts = r2     // Catch: java.lang.Throwable -> Lad
            int r2 = r4.currentSize     // Catch: java.lang.Throwable -> Lad
            int r2 = r2 + r0
            r4.currentSize = r2     // Catch: java.lang.Throwable -> Lad
            java.lang.String r0 = "LruBitmapPool"
            boolean r0 = android.util.Log.isLoggable(r0, r1)     // Catch: java.lang.Throwable -> Lad
            if (r0 == 0) goto L60
            java.lang.String r0 = "LruBitmapPool"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lad
            r1.<init>()     // Catch: java.lang.Throwable -> Lad
            java.lang.String r2 = "Put bitmap in pool="
            r1.append(r2)     // Catch: java.lang.Throwable -> Lad
            com.bumptech.glide.load.engine.bitmap_recycle.LruPoolStrategy r2 = r4.strategy     // Catch: java.lang.Throwable -> Lad
            java.lang.String r5 = r2.logBitmap(r5)     // Catch: java.lang.Throwable -> Lad
            r1.append(r5)     // Catch: java.lang.Throwable -> Lad
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> Lad
            android.util.Log.v(r0, r5)     // Catch: java.lang.Throwable -> Lad
        L60:
            r4.dump()     // Catch: java.lang.Throwable -> Lad
            r4.evict()     // Catch: java.lang.Throwable -> Lad
            monitor-exit(r4)
            return r3
        L68:
            java.lang.String r0 = "LruBitmapPool"
            boolean r0 = android.util.Log.isLoggable(r0, r1)     // Catch: java.lang.Throwable -> Lad
            if (r0 == 0) goto Laa
            java.lang.String r0 = "LruBitmapPool"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lad
            r1.<init>()     // Catch: java.lang.Throwable -> Lad
            java.lang.String r2 = "Reject bitmap from pool, bitmap: "
            r1.append(r2)     // Catch: java.lang.Throwable -> Lad
            com.bumptech.glide.load.engine.bitmap_recycle.LruPoolStrategy r2 = r4.strategy     // Catch: java.lang.Throwable -> Lad
            java.lang.String r2 = r2.logBitmap(r5)     // Catch: java.lang.Throwable -> Lad
            r1.append(r2)     // Catch: java.lang.Throwable -> Lad
            java.lang.String r2 = ", is mutable: "
            r1.append(r2)     // Catch: java.lang.Throwable -> Lad
            boolean r2 = r5.isMutable()     // Catch: java.lang.Throwable -> Lad
            r1.append(r2)     // Catch: java.lang.Throwable -> Lad
            java.lang.String r2 = ", is allowed config: "
            r1.append(r2)     // Catch: java.lang.Throwable -> Lad
            java.util.Set<android.graphics.Bitmap$Config> r2 = r4.allowedConfigs     // Catch: java.lang.Throwable -> Lad
            android.graphics.Bitmap$Config r5 = r5.getConfig()     // Catch: java.lang.Throwable -> Lad
            boolean r5 = r2.contains(r5)     // Catch: java.lang.Throwable -> Lad
            r1.append(r5)     // Catch: java.lang.Throwable -> Lad
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> Lad
            android.util.Log.v(r0, r5)     // Catch: java.lang.Throwable -> Lad
        Laa:
            r5 = 0
            monitor-exit(r4)
            return r5
        Lad:
            r5 = move-exception
            goto Lb7
        Laf:
            java.lang.NullPointerException r5 = new java.lang.NullPointerException     // Catch: java.lang.Throwable -> Lad
            java.lang.String r0 = "Bitmap must not be null"
            r5.<init>(r0)     // Catch: java.lang.Throwable -> Lad
            throw r5     // Catch: java.lang.Throwable -> Lad
        Lb7:
            monitor-exit(r4)
            throw r5
    }

    @Override
    public synchronized void setSizeMultiplier(float r2) {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.initialMaxSize     // Catch: java.lang.Throwable -> L11
            float r0 = (float) r0     // Catch: java.lang.Throwable -> L11
            float r0 = r0 * r2
            int r2 = java.lang.Math.round(r0)     // Catch: java.lang.Throwable -> L11
            r1.maxSize = r2     // Catch: java.lang.Throwable -> L11
            r1.evict()     // Catch: java.lang.Throwable -> L11
            monitor-exit(r1)
            return
        L11:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public void trimMemory(int r4) {
            r3 = this;
            java.lang.String r0 = "LruBitmapPool"
            r1 = 3
            boolean r1 = android.util.Log.isLoggable(r0, r1)
            if (r1 == 0) goto L1d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "trimMemory, level="
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            android.util.Log.d(r0, r1)
        L1d:
            r0 = 60
            if (r4 < r0) goto L25
            r3.clearMemory()
            goto L30
        L25:
            r0 = 40
            if (r4 < r0) goto L30
            int r4 = r3.maxSize
            int r4 = r4 / 2
            r3.trimToSize(r4)
        L30:
            return
    }
}
