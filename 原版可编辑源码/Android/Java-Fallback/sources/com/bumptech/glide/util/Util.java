package com.bumptech.glide.util;

public final class Util {
    private static final char[] HEX_CHAR_ARRAY = null;
    private static final char[] SHA_1_CHARS = null;
    private static final char[] SHA_256_CHARS = null;

    static class 1 {
        static final int[] $SwitchMap$android$graphics$Bitmap$Config = null;

        static {
                android.graphics.Bitmap$Config[] r0 = android.graphics.Bitmap.Config.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.bumptech.glide.util.Util.1.$SwitchMap$android$graphics$Bitmap$Config = r0
                android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.ALPHA_8     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.bumptech.glide.util.Util.1.$SwitchMap$android$graphics$Bitmap$Config     // Catch: java.lang.NoSuchFieldError -> L1d
                android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.RGB_565     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.bumptech.glide.util.Util.1.$SwitchMap$android$graphics$Bitmap$Config     // Catch: java.lang.NoSuchFieldError -> L28
                android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.ARGB_4444     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.bumptech.glide.util.Util.1.$SwitchMap$android$graphics$Bitmap$Config     // Catch: java.lang.NoSuchFieldError -> L33
                android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.ARGB_8888     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                return
        }
    }

    static {
            java.lang.String r0 = "0123456789abcdef"
            char[] r0 = r0.toCharArray()
            com.bumptech.glide.util.Util.HEX_CHAR_ARRAY = r0
            r0 = 64
            char[] r0 = new char[r0]
            com.bumptech.glide.util.Util.SHA_256_CHARS = r0
            r0 = 40
            char[] r0 = new char[r0]
            com.bumptech.glide.util.Util.SHA_1_CHARS = r0
            return
    }

    private Util() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void assertBackgroundThread() {
            boolean r0 = isOnBackgroundThread()
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "YOu must call this method on a background thread"
            r0.<init>(r1)
            throw r0
    }

    public static void assertMainThread() {
            boolean r0 = isOnMainThread()
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "You must call this method on the main thread"
            r0.<init>(r1)
            throw r0
    }

    private static java.lang.String bytesToHex(byte[] r5, char[] r6) {
            r0 = 0
        L1:
            int r1 = r5.length
            if (r0 >= r1) goto L1d
            r1 = r5[r0]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r2 = r0 * 2
            char[] r3 = com.bumptech.glide.util.Util.HEX_CHAR_ARRAY
            int r4 = r1 >>> 4
            char r4 = r3[r4]
            r6[r2] = r4
            int r2 = r2 + 1
            r1 = r1 & 15
            char r1 = r3[r1]
            r6[r2] = r1
            int r0 = r0 + 1
            goto L1
        L1d:
            java.lang.String r5 = new java.lang.String
            r5.<init>(r6)
            return r5
    }

    public static <T> java.util.Queue<T> createQueue(int r1) {
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>(r1)
            return r0
    }

    public static int getBitmapByteSize(int r0, int r1, android.graphics.Bitmap.Config r2) {
            int r0 = r0 * r1
            int r1 = getBytesPerPixel(r2)
            int r0 = r0 * r1
            return r0
    }

    public static int getBitmapByteSize(android.graphics.Bitmap r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            int r2 = r2.getAllocationByteCount()     // Catch: java.lang.NullPointerException -> Lb
            return r2
        Lb:
            int r0 = r2.getHeight()
            int r2 = r2.getRowBytes()
            int r0 = r0 * r2
            return r0
    }

    private static int getBytesPerPixel(android.graphics.Bitmap.Config r2) {
            if (r2 != 0) goto L4
            android.graphics.Bitmap$Config r2 = android.graphics.Bitmap.Config.ARGB_8888
        L4:
            int[] r0 = com.bumptech.glide.util.Util.1.$SwitchMap$android$graphics$Bitmap$Config
            int r2 = r2.ordinal()
            r2 = r0[r2]
            r0 = 2
            r1 = 1
            if (r2 == r1) goto L17
            if (r2 == r0) goto L18
            r1 = 3
            if (r2 == r1) goto L18
            r0 = 4
            goto L18
        L17:
            r0 = 1
        L18:
            return r0
    }

    @java.lang.Deprecated
    public static int getSize(android.graphics.Bitmap r0) {
            int r0 = getBitmapByteSize(r0)
            return r0
    }

    public static <T> java.util.List<T> getSnapshot(java.util.Collection<T> r2) {
            java.util.ArrayList r0 = new java.util.ArrayList
            int r1 = r2.size()
            r0.<init>(r1)
            java.util.Iterator r2 = r2.iterator()
        Ld:
            boolean r1 = r2.hasNext()
            if (r1 == 0) goto L1b
            java.lang.Object r1 = r2.next()
            r0.add(r1)
            goto Ld
        L1b:
            return r0
    }

    public static boolean isOnBackgroundThread() {
            boolean r0 = isOnMainThread()
            r0 = r0 ^ 1
            return r0
    }

    public static boolean isOnMainThread() {
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 != r1) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    private static boolean isValidDimension(int r1) {
            if (r1 > 0) goto L9
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r1 != r0) goto L7
            goto L9
        L7:
            r1 = 0
            goto La
        L9:
            r1 = 1
        La:
            return r1
    }

    public static boolean isValidDimensions(int r0, int r1) {
            boolean r0 = isValidDimension(r0)
            if (r0 == 0) goto Le
            boolean r0 = isValidDimension(r1)
            if (r0 == 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    public static java.lang.String sha1BytesToHex(byte[] r2) {
            char[] r0 = com.bumptech.glide.util.Util.SHA_1_CHARS
            monitor-enter(r0)
            char[] r1 = com.bumptech.glide.util.Util.SHA_1_CHARS     // Catch: java.lang.Throwable -> Lb
            java.lang.String r2 = bytesToHex(r2, r1)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            return r2
        Lb:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            throw r2
    }

    public static java.lang.String sha256BytesToHex(byte[] r2) {
            char[] r0 = com.bumptech.glide.util.Util.SHA_256_CHARS
            monitor-enter(r0)
            char[] r1 = com.bumptech.glide.util.Util.SHA_256_CHARS     // Catch: java.lang.Throwable -> Lb
            java.lang.String r2 = bytesToHex(r2, r1)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            return r2
        Lb:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            throw r2
    }
}
