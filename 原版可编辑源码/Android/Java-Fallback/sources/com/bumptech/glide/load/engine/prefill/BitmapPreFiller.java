package com.bumptech.glide.load.engine.prefill;

public final class BitmapPreFiller {
    private final com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool bitmapPool;
    private com.bumptech.glide.load.engine.prefill.BitmapPreFillRunner current;
    private final com.bumptech.glide.load.DecodeFormat defaultFormat;
    private final android.os.Handler handler;
    private final com.bumptech.glide.load.engine.cache.MemoryCache memoryCache;

    public BitmapPreFiller(com.bumptech.glide.load.engine.cache.MemoryCache r3, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r4, com.bumptech.glide.load.DecodeFormat r5) {
            r2 = this;
            r2.<init>()
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.handler = r0
            r2.memoryCache = r3
            r2.bitmapPool = r4
            r2.defaultFormat = r5
            return
    }

    private static int getSizeInBytes(com.bumptech.glide.load.engine.prefill.PreFillType r2) {
            int r0 = r2.getWidth()
            int r1 = r2.getHeight()
            android.graphics.Bitmap$Config r2 = r2.getConfig()
            int r2 = com.bumptech.glide.util.Util.getBitmapByteSize(r0, r1, r2)
            return r2
    }

    com.bumptech.glide.load.engine.prefill.PreFillQueue generateAllocationOrder(com.bumptech.glide.load.engine.prefill.PreFillType[] r8) {
            r7 = this;
            com.bumptech.glide.load.engine.cache.MemoryCache r0 = r7.memoryCache
            int r0 = r0.getMaxSize()
            com.bumptech.glide.load.engine.cache.MemoryCache r1 = r7.memoryCache
            int r1 = r1.getCurrentSize()
            int r0 = r0 - r1
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r1 = r7.bitmapPool
            int r1 = r1.getMaxSize()
            int r0 = r0 + r1
            int r1 = r8.length
            r2 = 0
            r3 = 0
            r4 = 0
        L18:
            if (r3 >= r1) goto L24
            r5 = r8[r3]
            int r5 = r5.getWeight()
            int r4 = r4 + r5
            int r3 = r3 + 1
            goto L18
        L24:
            float r0 = (float) r0
            float r1 = (float) r4
            float r0 = r0 / r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            int r3 = r8.length
        L2d:
            if (r2 >= r3) goto L4b
            r4 = r8[r2]
            int r5 = r4.getWeight()
            float r5 = (float) r5
            float r5 = r5 * r0
            int r5 = java.lang.Math.round(r5)
            int r6 = getSizeInBytes(r4)
            int r5 = r5 / r6
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r1.put(r4, r5)
            int r2 = r2 + 1
            goto L2d
        L4b:
            com.bumptech.glide.load.engine.prefill.PreFillQueue r8 = new com.bumptech.glide.load.engine.prefill.PreFillQueue
            r8.<init>(r1)
            return r8
    }

    public void preFill(com.bumptech.glide.load.engine.prefill.PreFillType.Builder... r6) {
            r5 = this;
            com.bumptech.glide.load.engine.prefill.BitmapPreFillRunner r0 = r5.current
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            int r0 = r6.length
            com.bumptech.glide.load.engine.prefill.PreFillType[] r0 = new com.bumptech.glide.load.engine.prefill.PreFillType[r0]
            r1 = 0
        Lb:
            int r2 = r6.length
            if (r1 >= r2) goto L34
            r2 = r6[r1]
            android.graphics.Bitmap$Config r3 = r2.getConfig()
            if (r3 != 0) goto L2b
            com.bumptech.glide.load.DecodeFormat r3 = r5.defaultFormat
            com.bumptech.glide.load.DecodeFormat r4 = com.bumptech.glide.load.DecodeFormat.ALWAYS_ARGB_8888
            if (r3 == r4) goto L26
            com.bumptech.glide.load.DecodeFormat r3 = r5.defaultFormat
            com.bumptech.glide.load.DecodeFormat r4 = com.bumptech.glide.load.DecodeFormat.PREFER_ARGB_8888
            if (r3 != r4) goto L23
            goto L26
        L23:
            android.graphics.Bitmap$Config r3 = android.graphics.Bitmap.Config.RGB_565
            goto L28
        L26:
            android.graphics.Bitmap$Config r3 = android.graphics.Bitmap.Config.ARGB_8888
        L28:
            r2.setConfig(r3)
        L2b:
            com.bumptech.glide.load.engine.prefill.PreFillType r2 = r2.build()
            r0[r1] = r2
            int r1 = r1 + 1
            goto Lb
        L34:
            com.bumptech.glide.load.engine.prefill.PreFillQueue r6 = r5.generateAllocationOrder(r0)
            com.bumptech.glide.load.engine.prefill.BitmapPreFillRunner r0 = new com.bumptech.glide.load.engine.prefill.BitmapPreFillRunner
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r1 = r5.bitmapPool
            com.bumptech.glide.load.engine.cache.MemoryCache r2 = r5.memoryCache
            r0.<init>(r1, r2, r6)
            r5.current = r0
            android.os.Handler r6 = r5.handler
            r6.post(r0)
            return
    }
}
