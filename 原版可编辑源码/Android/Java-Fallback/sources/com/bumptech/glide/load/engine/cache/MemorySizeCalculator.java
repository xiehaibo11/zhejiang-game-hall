package com.bumptech.glide.load.engine.cache;

public class MemorySizeCalculator {
    static final int BITMAP_POOL_TARGET_SCREENS = 4;
    static final int BYTES_PER_ARGB_8888_PIXEL = 4;
    static final float LOW_MEMORY_MAX_SIZE_MULTIPLIER = 0.33f;
    static final float MAX_SIZE_MULTIPLIER = 0.4f;
    static final int MEMORY_CACHE_TARGET_SCREENS = 2;
    private static final java.lang.String TAG = "MemorySizeCalculator";
    private final int bitmapPoolSize;
    private final android.content.Context context;
    private final int memoryCacheSize;

    private static class DisplayMetricsScreenDimensions implements com.bumptech.glide.load.engine.cache.MemorySizeCalculator.ScreenDimensions {
        private final android.util.DisplayMetrics displayMetrics;

        public DisplayMetricsScreenDimensions(android.util.DisplayMetrics r1) {
                r0 = this;
                r0.<init>()
                r0.displayMetrics = r1
                return
        }

        @Override
        public int getHeightPixels() {
                r1 = this;
                android.util.DisplayMetrics r0 = r1.displayMetrics
                int r0 = r0.heightPixels
                return r0
        }

        @Override
        public int getWidthPixels() {
                r1 = this;
                android.util.DisplayMetrics r0 = r1.displayMetrics
                int r0 = r0.widthPixels
                return r0
        }
    }

    interface ScreenDimensions {
        int getHeightPixels();

        int getWidthPixels();
    }

    public MemorySizeCalculator(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = "activity"
            java.lang.Object r0 = r4.getSystemService(r0)
            android.app.ActivityManager r0 = (android.app.ActivityManager) r0
            com.bumptech.glide.load.engine.cache.MemorySizeCalculator$DisplayMetricsScreenDimensions r1 = new com.bumptech.glide.load.engine.cache.MemorySizeCalculator$DisplayMetricsScreenDimensions
            android.content.res.Resources r2 = r4.getResources()
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()
            r1.<init>(r2)
            r3.<init>(r4, r0, r1)
            return
    }

    MemorySizeCalculator(android.content.Context r4, android.app.ActivityManager r5, com.bumptech.glide.load.engine.cache.MemorySizeCalculator.ScreenDimensions r6) {
            r3 = this;
            r3.<init>()
            r3.context = r4
            int r4 = getMaxSize(r5)
            int r0 = r6.getWidthPixels()
            int r6 = r6.getHeightPixels()
            int r0 = r0 * r6
            int r0 = r0 * 4
            int r6 = r0 * 4
            int r0 = r0 * 2
            int r1 = r0 + r6
            if (r1 > r4) goto L22
            r3.memoryCacheSize = r0
            r3.bitmapPoolSize = r6
            goto L32
        L22:
            float r6 = (float) r4
            r0 = 1086324736(0x40c00000, float:6.0)
            float r6 = r6 / r0
            int r6 = java.lang.Math.round(r6)
            int r0 = r6 * 2
            r3.memoryCacheSize = r0
            int r6 = r6 * 4
            r3.bitmapPoolSize = r6
        L32:
            r6 = 3
            java.lang.String r0 = "MemorySizeCalculator"
            boolean r6 = android.util.Log.isLoggable(r0, r6)
            if (r6 == 0) goto L94
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r2 = "Calculated memory cache size: "
            r6.append(r2)
            int r2 = r3.memoryCacheSize
            java.lang.String r2 = r3.toMb(r2)
            r6.append(r2)
            java.lang.String r2 = " pool size: "
            r6.append(r2)
            int r2 = r3.bitmapPoolSize
            java.lang.String r2 = r3.toMb(r2)
            r6.append(r2)
            java.lang.String r2 = " memory class limited? "
            r6.append(r2)
            if (r1 <= r4) goto L65
            r1 = 1
            goto L66
        L65:
            r1 = 0
        L66:
            r6.append(r1)
            java.lang.String r1 = " max size: "
            r6.append(r1)
            java.lang.String r4 = r3.toMb(r4)
            r6.append(r4)
            java.lang.String r4 = " memoryClass: "
            r6.append(r4)
            int r4 = r5.getMemoryClass()
            r6.append(r4)
            java.lang.String r4 = " isLowMemoryDevice: "
            r6.append(r4)
            boolean r4 = isLowMemoryDevice(r5)
            r6.append(r4)
            java.lang.String r4 = r6.toString()
            android.util.Log.d(r0, r4)
        L94:
            return
    }

    private static int getMaxSize(android.app.ActivityManager r1) {
            int r0 = r1.getMemoryClass()
            int r0 = r0 * 1024
            int r0 = r0 * 1024
            boolean r1 = isLowMemoryDevice(r1)
            float r0 = (float) r0
            if (r1 == 0) goto L13
            r1 = 1051260355(0x3ea8f5c3, float:0.33)
            goto L16
        L13:
            r1 = 1053609165(0x3ecccccd, float:0.4)
        L16:
            float r0 = r0 * r1
            int r1 = java.lang.Math.round(r0)
            return r1
    }

    private static boolean isLowMemoryDevice(android.app.ActivityManager r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            boolean r2 = r2.isLowRamDevice()
            return r2
        Lb:
            int r2 = android.os.Build.VERSION.SDK_INT
            r0 = 11
            if (r2 >= r0) goto L13
            r2 = 1
            goto L14
        L13:
            r2 = 0
        L14:
            return r2
    }

    private java.lang.String toMb(int r4) {
            r3 = this;
            android.content.Context r0 = r3.context
            long r1 = (long) r4
            java.lang.String r4 = android.text.format.Formatter.formatFileSize(r0, r1)
            return r4
    }

    public int getBitmapPoolSize() {
            r1 = this;
            int r0 = r1.bitmapPoolSize
            return r0
    }

    public int getMemoryCacheSize() {
            r1 = this;
            int r0 = r1.memoryCacheSize
            return r0
    }
}
