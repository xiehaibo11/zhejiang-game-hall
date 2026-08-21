package com.bumptech.glide.load.resource.bitmap;

public abstract class Downsampler implements com.bumptech.glide.load.resource.bitmap.BitmapDecoder<java.io.InputStream> {
    public static final com.bumptech.glide.load.resource.bitmap.Downsampler AT_LEAST = null;
    public static final com.bumptech.glide.load.resource.bitmap.Downsampler AT_MOST = null;
    private static final int MARK_POSITION = 5242880;
    public static final com.bumptech.glide.load.resource.bitmap.Downsampler NONE = null;
    private static final java.util.Queue<android.graphics.BitmapFactory.Options> OPTIONS_QUEUE = null;
    private static final java.lang.String TAG = "Downsampler";
    private static final java.util.Set<com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType> TYPES_THAT_USE_POOL = null;




    static {
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r0 = com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType.JPEG
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r1 = com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType.PNG_A
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r2 = com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType.PNG
            java.util.EnumSet r0 = java.util.EnumSet.of(r0, r1, r2)
            com.bumptech.glide.load.resource.bitmap.Downsampler.TYPES_THAT_USE_POOL = r0
            r0 = 0
            java.util.Queue r0 = com.bumptech.glide.util.Util.createQueue(r0)
            com.bumptech.glide.load.resource.bitmap.Downsampler.OPTIONS_QUEUE = r0
            com.bumptech.glide.load.resource.bitmap.Downsampler$1 r0 = new com.bumptech.glide.load.resource.bitmap.Downsampler$1
            r0.<init>()
            com.bumptech.glide.load.resource.bitmap.Downsampler.AT_LEAST = r0
            com.bumptech.glide.load.resource.bitmap.Downsampler$2 r0 = new com.bumptech.glide.load.resource.bitmap.Downsampler$2
            r0.<init>()
            com.bumptech.glide.load.resource.bitmap.Downsampler.AT_MOST = r0
            com.bumptech.glide.load.resource.bitmap.Downsampler$3 r0 = new com.bumptech.glide.load.resource.bitmap.Downsampler$3
            r0.<init>()
            com.bumptech.glide.load.resource.bitmap.Downsampler.NONE = r0
            return
    }

    public Downsampler() {
            r0 = this;
            r0.<init>()
            return
    }

    private static android.graphics.Bitmap decodeStream(com.bumptech.glide.util.MarkEnforcingInputStream r3, com.bumptech.glide.load.resource.bitmap.RecyclableBufferedInputStream r4, android.graphics.BitmapFactory.Options r5) {
            boolean r0 = r5.inJustDecodeBounds
            if (r0 == 0) goto La
            r4 = 5242880(0x500000, float:7.34684E-39)
            r3.mark(r4)
            goto Ld
        La:
            r4.fixMarkLimit()
        Ld:
            r4 = 0
            android.graphics.Bitmap r4 = android.graphics.BitmapFactory.decodeStream(r3, r4, r5)
            boolean r0 = r5.inJustDecodeBounds     // Catch: java.io.IOException -> L1a
            if (r0 == 0) goto L44
            r3.reset()     // Catch: java.io.IOException -> L1a
            goto L44
        L1a:
            r3 = move-exception
            r0 = 6
            java.lang.String r1 = "Downsampler"
            boolean r0 = android.util.Log.isLoggable(r1, r0)
            if (r0 == 0) goto L44
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Exception loading inDecodeBounds="
            r0.append(r2)
            boolean r2 = r5.inJustDecodeBounds
            r0.append(r2)
            java.lang.String r2 = " sample="
            r0.append(r2)
            int r5 = r5.inSampleSize
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            android.util.Log.e(r1, r5, r3)
        L44:
            return r4
    }

    private android.graphics.Bitmap downsampleWithSize(com.bumptech.glide.util.MarkEnforcingInputStream r5, com.bumptech.glide.load.resource.bitmap.RecyclableBufferedInputStream r6, android.graphics.BitmapFactory.Options r7, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r8, int r9, int r10, int r11, com.bumptech.glide.load.DecodeFormat r12) {
            r4 = this;
            android.graphics.Bitmap$Config r12 = getConfig(r5, r12)
            r7.inSampleSize = r11
            r7.inPreferredConfig = r12
            int r0 = r7.inSampleSize
            r1 = 1
            if (r0 == r1) goto L13
            r0 = 19
            int r1 = android.os.Build.VERSION.SDK_INT
            if (r0 > r1) goto L3b
        L13:
            boolean r0 = shouldUsePool(r5)
            if (r0 == 0) goto L3b
            double r0 = (double) r9
            double r2 = (double) r11
            java.lang.Double.isNaN(r0)
            java.lang.Double.isNaN(r2)
            double r0 = r0 / r2
            double r0 = java.lang.Math.ceil(r0)
            int r9 = (int) r0
            double r10 = (double) r10
            java.lang.Double.isNaN(r10)
            java.lang.Double.isNaN(r2)
            double r10 = r10 / r2
            double r10 = java.lang.Math.ceil(r10)
            int r10 = (int) r10
            android.graphics.Bitmap r8 = r8.getDirty(r9, r10, r12)
            setInBitmap(r7, r8)
        L3b:
            android.graphics.Bitmap r5 = decodeStream(r5, r6, r7)
            return r5
    }

    private static android.graphics.Bitmap.Config getConfig(java.io.InputStream r7, com.bumptech.glide.load.DecodeFormat r8) {
            java.lang.String r0 = "Cannot reset the input stream"
            java.lang.String r1 = "Downsampler"
            com.bumptech.glide.load.DecodeFormat r2 = com.bumptech.glide.load.DecodeFormat.ALWAYS_ARGB_8888
            if (r8 == r2) goto L72
            com.bumptech.glide.load.DecodeFormat r2 = com.bumptech.glide.load.DecodeFormat.PREFER_ARGB_8888
            if (r8 == r2) goto L72
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 16
            if (r2 != r3) goto L13
            goto L72
        L13:
            r2 = 0
            r3 = 1024(0x400, float:1.435E-42)
            r7.mark(r3)
            r3 = 5
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser r4 = new com.bumptech.glide.load.resource.bitmap.ImageHeaderParser     // Catch: java.lang.Throwable -> L32 java.io.IOException -> L34
            r4.<init>(r7)     // Catch: java.lang.Throwable -> L32 java.io.IOException -> L34
            boolean r2 = r4.hasAlpha()     // Catch: java.lang.Throwable -> L32 java.io.IOException -> L34
            r7.reset()     // Catch: java.io.IOException -> L27
            goto L5b
        L27:
            r7 = move-exception
            boolean r8 = android.util.Log.isLoggable(r1, r3)
            if (r8 == 0) goto L5b
        L2e:
            android.util.Log.w(r1, r0, r7)
            goto L5b
        L32:
            r8 = move-exception
            goto L63
        L34:
            r4 = move-exception
            boolean r5 = android.util.Log.isLoggable(r1, r3)     // Catch: java.lang.Throwable -> L32
            if (r5 == 0) goto L4f
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L32
            r5.<init>()     // Catch: java.lang.Throwable -> L32
            java.lang.String r6 = "Cannot determine whether the image has alpha or not from header for format "
            r5.append(r6)     // Catch: java.lang.Throwable -> L32
            r5.append(r8)     // Catch: java.lang.Throwable -> L32
            java.lang.String r8 = r5.toString()     // Catch: java.lang.Throwable -> L32
            android.util.Log.w(r1, r8, r4)     // Catch: java.lang.Throwable -> L32
        L4f:
            r7.reset()     // Catch: java.io.IOException -> L53
            goto L5b
        L53:
            r7 = move-exception
            boolean r8 = android.util.Log.isLoggable(r1, r3)
            if (r8 == 0) goto L5b
            goto L2e
        L5b:
            if (r2 == 0) goto L60
            android.graphics.Bitmap$Config r7 = android.graphics.Bitmap.Config.ARGB_8888
            goto L62
        L60:
            android.graphics.Bitmap$Config r7 = android.graphics.Bitmap.Config.RGB_565
        L62:
            return r7
        L63:
            r7.reset()     // Catch: java.io.IOException -> L67
            goto L71
        L67:
            r7 = move-exception
            boolean r2 = android.util.Log.isLoggable(r1, r3)
            if (r2 == 0) goto L71
            android.util.Log.w(r1, r0, r7)
        L71:
            throw r8
        L72:
            android.graphics.Bitmap$Config r7 = android.graphics.Bitmap.Config.ARGB_8888
            return r7
    }

    private static synchronized android.graphics.BitmapFactory.Options getDefaultOptions() {
            java.lang.Class<com.bumptech.glide.load.resource.bitmap.Downsampler> r0 = com.bumptech.glide.load.resource.bitmap.Downsampler.class
            monitor-enter(r0)
            java.util.Queue<android.graphics.BitmapFactory$Options> r1 = com.bumptech.glide.load.resource.bitmap.Downsampler.OPTIONS_QUEUE     // Catch: java.lang.Throwable -> L1e
            monitor-enter(r1)     // Catch: java.lang.Throwable -> L1e
            java.util.Queue<android.graphics.BitmapFactory$Options> r2 = com.bumptech.glide.load.resource.bitmap.Downsampler.OPTIONS_QUEUE     // Catch: java.lang.Throwable -> L1b
            java.lang.Object r2 = r2.poll()     // Catch: java.lang.Throwable -> L1b
            android.graphics.BitmapFactory$Options r2 = (android.graphics.BitmapFactory.Options) r2     // Catch: java.lang.Throwable -> L1b
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L1b
            if (r2 != 0) goto L19
            android.graphics.BitmapFactory$Options r2 = new android.graphics.BitmapFactory$Options     // Catch: java.lang.Throwable -> L1e
            r2.<init>()     // Catch: java.lang.Throwable -> L1e
            resetOptions(r2)     // Catch: java.lang.Throwable -> L1e
        L19:
            monitor-exit(r0)
            return r2
        L1b:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L1b
            throw r2     // Catch: java.lang.Throwable -> L1e
        L1e:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private int getRoundedSampleSize(int r2, int r3, int r4, int r5, int r6) {
            r1 = this;
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r6 != r0) goto L5
            r6 = r4
        L5:
            if (r5 != r0) goto L8
            r5 = r3
        L8:
            r0 = 90
            if (r2 == r0) goto L16
            r0 = 270(0x10e, float:3.78E-43)
            if (r2 != r0) goto L11
            goto L16
        L11:
            int r2 = r1.getSampleSize(r3, r4, r5, r6)
            goto L1a
        L16:
            int r2 = r1.getSampleSize(r4, r3, r5, r6)
        L1a:
            if (r2 != 0) goto L1e
            r2 = 0
            goto L22
        L1e:
            int r2 = java.lang.Integer.highestOneBit(r2)
        L22:
            r3 = 1
            int r2 = java.lang.Math.max(r3, r2)
            return r2
    }

    private static void releaseOptions(android.graphics.BitmapFactory.Options r2) {
            resetOptions(r2)
            java.util.Queue<android.graphics.BitmapFactory$Options> r0 = com.bumptech.glide.load.resource.bitmap.Downsampler.OPTIONS_QUEUE
            monitor-enter(r0)
            java.util.Queue<android.graphics.BitmapFactory$Options> r1 = com.bumptech.glide.load.resource.bitmap.Downsampler.OPTIONS_QUEUE     // Catch: java.lang.Throwable -> Ld
            r1.offer(r2)     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            return
        Ld:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            throw r2
    }

    private static void resetOptions(android.graphics.BitmapFactory.Options r4) {
            r0 = 0
            r4.inTempStorage = r0
            r1 = 0
            r4.inDither = r1
            r4.inScaled = r1
            r2 = 1
            r4.inSampleSize = r2
            r4.inPreferredConfig = r0
            r4.inJustDecodeBounds = r1
            r4.outWidth = r1
            r4.outHeight = r1
            r4.outMimeType = r0
            int r1 = android.os.Build.VERSION.SDK_INT
            r3 = 11
            if (r3 > r1) goto L1f
            r4.inBitmap = r0
            r4.inMutable = r2
        L1f:
            return
    }

    private static void setInBitmap(android.graphics.BitmapFactory.Options r2, android.graphics.Bitmap r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 11
            if (r1 > r0) goto L8
            r2.inBitmap = r3
        L8:
            return
    }

    private static boolean shouldUsePool(java.io.InputStream r5) {
            java.lang.String r0 = "Cannot reset the input stream"
            java.lang.String r1 = "Downsampler"
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 19
            if (r3 > r2) goto Lc
            r5 = 1
            return r5
        Lc:
            r2 = 1024(0x400, float:1.435E-42)
            r5.mark(r2)
            r2 = 5
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser r3 = new com.bumptech.glide.load.resource.bitmap.ImageHeaderParser     // Catch: java.lang.Throwable -> L30 java.io.IOException -> L32
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L30 java.io.IOException -> L32
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r3 = r3.getType()     // Catch: java.lang.Throwable -> L30 java.io.IOException -> L32
            java.util.Set<com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType> r4 = com.bumptech.glide.load.resource.bitmap.Downsampler.TYPES_THAT_USE_POOL     // Catch: java.lang.Throwable -> L30 java.io.IOException -> L32
            boolean r3 = r4.contains(r3)     // Catch: java.lang.Throwable -> L30 java.io.IOException -> L32
            r5.reset()     // Catch: java.io.IOException -> L25
            goto L2f
        L25:
            r5 = move-exception
            boolean r2 = android.util.Log.isLoggable(r1, r2)
            if (r2 == 0) goto L2f
            android.util.Log.w(r1, r0, r5)
        L2f:
            return r3
        L30:
            r3 = move-exception
            goto L4e
        L32:
            r3 = move-exception
            boolean r4 = android.util.Log.isLoggable(r1, r2)     // Catch: java.lang.Throwable -> L30
            if (r4 == 0) goto L3e
            java.lang.String r4 = "Cannot determine the image type from header"
            android.util.Log.w(r1, r4, r3)     // Catch: java.lang.Throwable -> L30
        L3e:
            r5.reset()     // Catch: java.io.IOException -> L42
            goto L4c
        L42:
            r5 = move-exception
            boolean r2 = android.util.Log.isLoggable(r1, r2)
            if (r2 == 0) goto L4c
            android.util.Log.w(r1, r0, r5)
        L4c:
            r5 = 0
            return r5
        L4e:
            r5.reset()     // Catch: java.io.IOException -> L52
            goto L5c
        L52:
            r5 = move-exception
            boolean r2 = android.util.Log.isLoggable(r1, r2)
            if (r2 == 0) goto L5c
            android.util.Log.w(r1, r0, r5)
        L5c:
            throw r3
    }

    public android.graphics.Bitmap decode(java.io.InputStream r23, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r24, int r25, int r26, com.bumptech.glide.load.DecodeFormat r27) {
            r22 = this;
            r10 = r24
            java.lang.String r1 = "Cannot reset the input stream"
            java.lang.String r2 = "Downsampler"
            com.bumptech.glide.util.ByteArrayPool r11 = com.bumptech.glide.util.ByteArrayPool.get()
            byte[] r12 = r11.getBytes()
            byte[] r13 = r11.getBytes()
            android.graphics.BitmapFactory$Options r14 = getDefaultOptions()
            com.bumptech.glide.load.resource.bitmap.RecyclableBufferedInputStream r3 = new com.bumptech.glide.load.resource.bitmap.RecyclableBufferedInputStream
            r0 = r23
            r3.<init>(r0, r13)
            com.bumptech.glide.util.ExceptionCatchingInputStream r15 = com.bumptech.glide.util.ExceptionCatchingInputStream.obtain(r3)
            com.bumptech.glide.util.MarkEnforcingInputStream r4 = new com.bumptech.glide.util.MarkEnforcingInputStream
            r4.<init>(r15)
            r0 = 5242880(0x500000, float:7.34684E-39)
            r15.mark(r0)     // Catch: java.lang.Throwable -> Ld1
            r5 = 0
            r6 = 5
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser r0 = new com.bumptech.glide.load.resource.bitmap.ImageHeaderParser     // Catch: java.lang.Throwable -> L47 java.io.IOException -> L4b
            r0.<init>(r15)     // Catch: java.lang.Throwable -> L47 java.io.IOException -> L4b
            int r7 = r0.getOrientation()     // Catch: java.lang.Throwable -> L47 java.io.IOException -> L4b
            r15.reset()     // Catch: java.io.IOException -> L3a java.lang.Throwable -> Ld1
            goto L45
        L3a:
            r0 = move-exception
            r8 = r0
            boolean r0 = android.util.Log.isLoggable(r2, r6)     // Catch: java.lang.Throwable -> Ld1
            if (r0 == 0) goto L45
            android.util.Log.w(r2, r1, r8)     // Catch: java.lang.Throwable -> Ld1
        L45:
            r0 = r7
            goto L67
        L47:
            r0 = move-exception
            r3 = r0
            goto Lc1
        L4b:
            r0 = move-exception
            boolean r7 = android.util.Log.isLoggable(r2, r6)     // Catch: java.lang.Throwable -> L47
            if (r7 == 0) goto L57
            java.lang.String r7 = "Cannot determine the image orientation from header"
            android.util.Log.w(r2, r7, r0)     // Catch: java.lang.Throwable -> L47
        L57:
            r15.reset()     // Catch: java.io.IOException -> L5b java.lang.Throwable -> Ld1
            goto L66
        L5b:
            r0 = move-exception
            r7 = r0
            boolean r0 = android.util.Log.isLoggable(r2, r6)     // Catch: java.lang.Throwable -> Ld1
            if (r0 == 0) goto L66
            android.util.Log.w(r2, r1, r7)     // Catch: java.lang.Throwable -> Ld1
        L66:
            r0 = 0
        L67:
            r14.inTempStorage = r12     // Catch: java.lang.Throwable -> Ld1
            r9 = r22
            int[] r1 = r9.getDimensions(r4, r3, r14)     // Catch: java.lang.Throwable -> Ld1
            r6 = r1[r5]     // Catch: java.lang.Throwable -> Ld1
            r2 = 1
            r7 = r1[r2]     // Catch: java.lang.Throwable -> Ld1
            int r17 = com.bumptech.glide.load.resource.bitmap.TransformationUtils.getExifOrientationDegrees(r0)     // Catch: java.lang.Throwable -> Ld1
            r16 = r22
            r18 = r6
            r19 = r7
            r20 = r25
            r21 = r26
            int r8 = r16.getRoundedSampleSize(r17, r18, r19, r20, r21)     // Catch: java.lang.Throwable -> Ld1
            r1 = r22
            r2 = r4
            r4 = r14
            r5 = r24
            r9 = r27
            android.graphics.Bitmap r1 = r1.downsampleWithSize(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> Ld1
            java.io.IOException r2 = r15.getException()     // Catch: java.lang.Throwable -> Ld1
            if (r2 != 0) goto Lbb
            r2 = 0
            if (r1 == 0) goto Lae
            android.graphics.Bitmap r2 = com.bumptech.glide.load.resource.bitmap.TransformationUtils.rotateImageExif(r1, r10, r0)     // Catch: java.lang.Throwable -> Ld1
            boolean r0 = r1.equals(r2)     // Catch: java.lang.Throwable -> Ld1
            if (r0 != 0) goto Lae
            boolean r0 = r10.put(r1)     // Catch: java.lang.Throwable -> Ld1
            if (r0 != 0) goto Lae
            r1.recycle()     // Catch: java.lang.Throwable -> Ld1
        Lae:
            r11.releaseBytes(r12)
            r11.releaseBytes(r13)
            r15.release()
            releaseOptions(r14)
            return r2
        Lbb:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> Ld1
            r0.<init>(r2)     // Catch: java.lang.Throwable -> Ld1
            throw r0     // Catch: java.lang.Throwable -> Ld1
        Lc1:
            r15.reset()     // Catch: java.io.IOException -> Lc5 java.lang.Throwable -> Ld1
            goto Ld0
        Lc5:
            r0 = move-exception
            r4 = r0
            boolean r0 = android.util.Log.isLoggable(r2, r6)     // Catch: java.lang.Throwable -> Ld1
            if (r0 == 0) goto Ld0
            android.util.Log.w(r2, r1, r4)     // Catch: java.lang.Throwable -> Ld1
        Ld0:
            throw r3     // Catch: java.lang.Throwable -> Ld1
        Ld1:
            r0 = move-exception
            r11.releaseBytes(r12)
            r11.releaseBytes(r13)
            r15.release()
            releaseOptions(r14)
            throw r0
    }

    @Override
    public android.graphics.Bitmap decode(java.io.InputStream r1, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2, int r3, int r4, com.bumptech.glide.load.DecodeFormat r5) throws java.lang.Exception {
            r0 = this;
            java.io.InputStream r1 = (java.io.InputStream) r1
            android.graphics.Bitmap r1 = r0.decode(r1, r2, r3, r4, r5)
            return r1
    }

    public int[] getDimensions(com.bumptech.glide.util.MarkEnforcingInputStream r3, com.bumptech.glide.load.resource.bitmap.RecyclableBufferedInputStream r4, android.graphics.BitmapFactory.Options r5) {
            r2 = this;
            r0 = 1
            r5.inJustDecodeBounds = r0
            decodeStream(r3, r4, r5)
            r3 = 0
            r5.inJustDecodeBounds = r3
            r4 = 2
            int[] r4 = new int[r4]
            int r1 = r5.outWidth
            r4[r3] = r1
            int r3 = r5.outHeight
            r4[r0] = r3
            return r4
    }

    protected abstract int getSampleSize(int r1, int r2, int r3, int r4);
}
