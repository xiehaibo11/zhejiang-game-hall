package com.bumptech.glide.gifdecoder;

public class GifDecoder {
    private static final android.graphics.Bitmap.Config BITMAP_CONFIG = null;
    private static final int DISPOSAL_BACKGROUND = 2;
    private static final int DISPOSAL_NONE = 1;
    private static final int DISPOSAL_PREVIOUS = 3;
    private static final int DISPOSAL_UNSPECIFIED = 0;
    private static final int INITIAL_FRAME_POINTER = -1;
    private static final int MAX_STACK_SIZE = 4096;
    private static final int NULL_CODE = -1;
    public static final int STATUS_FORMAT_ERROR = 1;
    public static final int STATUS_OK = 0;
    public static final int STATUS_OPEN_ERROR = 2;
    public static final int STATUS_PARTIAL_DECODE = 3;
    private static final java.lang.String TAG = null;
    private int[] act;
    private com.bumptech.glide.gifdecoder.GifDecoder.BitmapProvider bitmapProvider;
    private final byte[] block;
    private byte[] data;
    private int framePointer;
    private com.bumptech.glide.gifdecoder.GifHeader header;
    private byte[] mainPixels;
    private int[] mainScratch;
    private com.bumptech.glide.gifdecoder.GifHeaderParser parser;
    private byte[] pixelStack;
    private short[] prefix;
    private android.graphics.Bitmap previousImage;
    private java.nio.ByteBuffer rawData;
    private boolean savePrevious;
    private int status;
    private byte[] suffix;

    public interface BitmapProvider {
        android.graphics.Bitmap obtain(int r1, int r2, android.graphics.Bitmap.Config r3);

        void release(android.graphics.Bitmap r1);
    }

    static {
            java.lang.Class<com.bumptech.glide.gifdecoder.GifDecoder> r0 = com.bumptech.glide.gifdecoder.GifDecoder.class
            java.lang.String r0 = r0.getSimpleName()
            com.bumptech.glide.gifdecoder.GifDecoder.TAG = r0
            android.graphics.Bitmap$Config r0 = android.graphics.Bitmap.Config.ARGB_8888
            com.bumptech.glide.gifdecoder.GifDecoder.BITMAP_CONFIG = r0
            return
    }

    public GifDecoder(com.bumptech.glide.gifdecoder.GifDecoder.BitmapProvider r2) {
            r1 = this;
            r1.<init>()
            r0 = 256(0x100, float:3.59E-43)
            byte[] r0 = new byte[r0]
            r1.block = r0
            r1.bitmapProvider = r2
            com.bumptech.glide.gifdecoder.GifHeader r2 = new com.bumptech.glide.gifdecoder.GifHeader
            r2.<init>()
            r1.header = r2
            return
    }

    private void decodeBitmapData(com.bumptech.glide.gifdecoder.GifFrame r27) {
            r26 = this;
            r0 = r26
            r1 = r27
            if (r1 == 0) goto Ld
            java.nio.ByteBuffer r2 = r0.rawData
            int r3 = r1.bufferFrameStart
            r2.position(r3)
        Ld:
            if (r1 != 0) goto L1a
            com.bumptech.glide.gifdecoder.GifHeader r1 = r0.header
            int r1 = r1.width
            com.bumptech.glide.gifdecoder.GifHeader r2 = r0.header
            int r2 = r2.height
            int r1 = r1 * r2
            goto L20
        L1a:
            int r2 = r1.iw
            int r1 = r1.ih
            int r1 = r1 * r2
        L20:
            byte[] r2 = r0.mainPixels
            if (r2 == 0) goto L27
            int r2 = r2.length
            if (r2 >= r1) goto L2b
        L27:
            byte[] r2 = new byte[r1]
            r0.mainPixels = r2
        L2b:
            short[] r2 = r0.prefix
            r3 = 4096(0x1000, float:5.74E-42)
            if (r2 != 0) goto L35
            short[] r2 = new short[r3]
            r0.prefix = r2
        L35:
            byte[] r2 = r0.suffix
            if (r2 != 0) goto L3d
            byte[] r2 = new byte[r3]
            r0.suffix = r2
        L3d:
            byte[] r2 = r0.pixelStack
            if (r2 != 0) goto L47
            r2 = 4097(0x1001, float:5.741E-42)
            byte[] r2 = new byte[r2]
            r0.pixelStack = r2
        L47:
            int r2 = r26.read()
            r4 = 1
            int r5 = r4 << r2
            int r6 = r5 + 1
            int r7 = r5 + 2
            int r2 = r2 + r4
            int r8 = r4 << r2
            int r8 = r8 - r4
            r9 = 0
            r10 = 0
        L58:
            if (r10 >= r5) goto L66
            short[] r11 = r0.prefix
            r11[r10] = r9
            byte[] r11 = r0.suffix
            byte r12 = (byte) r10
            r11[r10] = r12
            int r10 = r10 + 1
            goto L58
        L66:
            r10 = -1
            r19 = r2
            r17 = r7
            r18 = r8
            r11 = 0
            r12 = 0
            r13 = 0
            r14 = 0
            r15 = 0
            r16 = 0
            r20 = -1
            r21 = 0
            r22 = 0
        L7a:
            if (r11 >= r1) goto L16c
            r9 = 3
            if (r12 != 0) goto L8a
            int r12 = r26.readBlock()
            if (r12 > 0) goto L89
            r0.status = r9
            goto L16c
        L89:
            r13 = 0
        L8a:
            byte[] r3 = r0.block
            r3 = r3[r13]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << r14
            int r15 = r15 + r3
            int r14 = r14 + 8
            int r13 = r13 + r4
            int r12 = r12 + r10
            r3 = r17
            r4 = r19
            r10 = r20
            r23 = r21
        L9e:
            if (r14 < r4) goto L157
            r9 = r15 & r18
            int r15 = r15 >> r4
            int r14 = r14 - r4
            if (r9 != r5) goto Lad
            r4 = r2
            r3 = r7
            r18 = r8
            r9 = 3
            r10 = -1
            goto L9e
        Lad:
            if (r9 <= r3) goto Lb5
            r21 = r2
            r2 = 3
            r0.status = r2
            goto Lba
        Lb5:
            r21 = r2
            r2 = 3
            if (r9 != r6) goto Lc6
        Lba:
            r17 = r3
            r19 = r4
            r20 = r10
            r2 = r21
            r21 = r23
            goto L165
        Lc6:
            r2 = -1
            if (r10 != r2) goto Ldc
            byte[] r10 = r0.pixelStack
            int r19 = r22 + 1
            byte[] r2 = r0.suffix
            r2 = r2[r9]
            r10[r22] = r2
            r10 = r9
            r23 = r10
            r22 = r19
            r2 = r21
            r9 = 3
            goto L9e
        Ldc:
            if (r9 < r3) goto Led
            byte[] r2 = r0.pixelStack
            int r19 = r22 + 1
            r24 = r6
            r6 = r23
            byte r6 = (byte) r6
            r2[r22] = r6
            r2 = r10
            r22 = r19
            goto Lf0
        Led:
            r24 = r6
            r2 = r9
        Lf0:
            if (r2 < r5) goto L107
            byte[] r6 = r0.pixelStack
            int r19 = r22 + 1
            r23 = r5
            byte[] r5 = r0.suffix
            r5 = r5[r2]
            r6[r22] = r5
            short[] r5 = r0.prefix
            short r2 = r5[r2]
            r22 = r19
            r5 = r23
            goto Lf0
        L107:
            r23 = r5
            byte[] r5 = r0.suffix
            r2 = r5[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            byte[] r6 = r0.pixelStack
            int r19 = r22 + 1
            r25 = r7
            byte r7 = (byte) r2
            r6[r22] = r7
            r6 = 4096(0x1000, float:5.74E-42)
            if (r3 >= r6) goto L132
            short[] r6 = r0.prefix
            short r10 = (short) r10
            r6[r3] = r10
            r5[r3] = r7
            int r3 = r3 + 1
            r5 = r3 & r18
            if (r5 != 0) goto L132
            r5 = 4096(0x1000, float:5.74E-42)
            if (r3 >= r5) goto L134
            int r4 = r4 + 1
            int r18 = r18 + r3
            goto L134
        L132:
            r5 = 4096(0x1000, float:5.74E-42)
        L134:
            r22 = r19
        L136:
            if (r22 <= 0) goto L149
            int r22 = r22 + (-1)
            byte[] r6 = r0.mainPixels
            int r7 = r16 + 1
            byte[] r10 = r0.pixelStack
            r10 = r10[r22]
            r6[r16] = r10
            int r11 = r11 + 1
            r16 = r7
            goto L136
        L149:
            r10 = r9
            r5 = r23
            r6 = r24
            r7 = r25
            r9 = 3
            r23 = r2
            r2 = r21
            goto L9e
        L157:
            r24 = r6
            r6 = r23
            r17 = r3
            r19 = r4
            r21 = r6
            r20 = r10
            r6 = r24
        L165:
            r3 = 4096(0x1000, float:5.74E-42)
            r4 = 1
            r9 = 0
            r10 = -1
            goto L7a
        L16c:
            r2 = r16
        L16e:
            if (r2 >= r1) goto L178
            byte[] r3 = r0.mainPixels
            r4 = 0
            r3[r2] = r4
            int r2 = r2 + 1
            goto L16e
        L178:
            return
    }

    private com.bumptech.glide.gifdecoder.GifHeaderParser getHeaderParser() {
            r1 = this;
            com.bumptech.glide.gifdecoder.GifHeaderParser r0 = r1.parser
            if (r0 != 0) goto Lb
            com.bumptech.glide.gifdecoder.GifHeaderParser r0 = new com.bumptech.glide.gifdecoder.GifHeaderParser
            r0.<init>()
            r1.parser = r0
        Lb:
            com.bumptech.glide.gifdecoder.GifHeaderParser r0 = r1.parser
            return r0
    }

    private android.graphics.Bitmap getNextBitmap() {
            r4 = this;
            com.bumptech.glide.gifdecoder.GifDecoder$BitmapProvider r0 = r4.bitmapProvider
            com.bumptech.glide.gifdecoder.GifHeader r1 = r4.header
            int r1 = r1.width
            com.bumptech.glide.gifdecoder.GifHeader r2 = r4.header
            int r2 = r2.height
            android.graphics.Bitmap$Config r3 = com.bumptech.glide.gifdecoder.GifDecoder.BITMAP_CONFIG
            android.graphics.Bitmap r0 = r0.obtain(r1, r2, r3)
            if (r0 != 0) goto L20
            com.bumptech.glide.gifdecoder.GifHeader r0 = r4.header
            int r0 = r0.width
            com.bumptech.glide.gifdecoder.GifHeader r1 = r4.header
            int r1 = r1.height
            android.graphics.Bitmap$Config r2 = com.bumptech.glide.gifdecoder.GifDecoder.BITMAP_CONFIG
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r0, r1, r2)
        L20:
            setAlpha(r0)
            return r0
    }

    private int read() {
            r1 = this;
            java.nio.ByteBuffer r0 = r1.rawData     // Catch: java.lang.Exception -> L9
            byte r0 = r0.get()     // Catch: java.lang.Exception -> L9
            r0 = r0 & 255(0xff, float:3.57E-43)
            goto Ld
        L9:
            r0 = 1
            r1.status = r0
            r0 = 0
        Ld:
            return r0
    }

    private int readBlock() {
            r5 = this;
            int r0 = r5.read()
            r1 = 0
            if (r0 <= 0) goto L1f
        L7:
            if (r1 >= r0) goto L1f
            int r2 = r0 - r1
            java.nio.ByteBuffer r3 = r5.rawData     // Catch: java.lang.Exception -> L14
            byte[] r4 = r5.block     // Catch: java.lang.Exception -> L14
            r3.get(r4, r1, r2)     // Catch: java.lang.Exception -> L14
            int r1 = r1 + r2
            goto L7
        L14:
            r0 = move-exception
            java.lang.String r2 = com.bumptech.glide.gifdecoder.GifDecoder.TAG
            java.lang.String r3 = "Error Reading Block"
            android.util.Log.w(r2, r3, r0)
            r0 = 1
            r5.status = r0
        L1f:
            return r1
    }

    private static void setAlpha(android.graphics.Bitmap r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 12
            if (r0 < r1) goto La
            r0 = 1
            r2.setHasAlpha(r0)
        La:
            return
    }

    private android.graphics.Bitmap setPixels(com.bumptech.glide.gifdecoder.GifFrame r18, com.bumptech.glide.gifdecoder.GifFrame r19) {
            r17 = this;
            r0 = r17
            r1 = r18
            r2 = r19
            com.bumptech.glide.gifdecoder.GifHeader r3 = r0.header
            int r3 = r3.width
            com.bumptech.glide.gifdecoder.GifHeader r4 = r0.header
            int r12 = r4.height
            int[] r13 = r0.mainScratch
            r14 = 3
            r15 = 0
            r11 = 2
            if (r2 == 0) goto L3f
            int r4 = r2.dispose
            if (r4 <= 0) goto L3f
            int r4 = r2.dispose
            if (r4 != r11) goto L2b
            boolean r2 = r1.transparency
            if (r2 != 0) goto L26
            com.bumptech.glide.gifdecoder.GifHeader r2 = r0.header
            int r2 = r2.bgColor
            goto L27
        L26:
            r2 = 0
        L27:
            java.util.Arrays.fill(r13, r2)
            goto L3f
        L2b:
            int r2 = r2.dispose
            if (r2 != r14) goto L3f
            android.graphics.Bitmap r4 = r0.previousImage
            if (r4 == 0) goto L3f
            r6 = 0
            r8 = 0
            r9 = 0
            r5 = r13
            r7 = r3
            r10 = r3
            r2 = 2
            r11 = r12
            r4.getPixels(r5, r6, r7, r8, r9, r10, r11)
            goto L40
        L3f:
            r2 = 2
        L40:
            r17.decodeBitmapData(r18)
            r4 = 8
            r11 = 1
            r5 = 0
            r6 = 1
        L48:
            int r7 = r1.ih
            if (r15 >= r7) goto Laa
            boolean r7 = r1.interlace
            if (r7 == 0) goto L68
            int r7 = r1.ih
            r8 = 4
            if (r5 < r7) goto L65
            int r6 = r6 + 1
            if (r6 == r2) goto L64
            if (r6 == r14) goto L61
            if (r6 == r8) goto L5e
            goto L65
        L5e:
            r4 = 2
            r5 = 1
            goto L65
        L61:
            r4 = 4
            r5 = 2
            goto L65
        L64:
            r5 = 4
        L65:
            int r7 = r5 + r4
            goto L6a
        L68:
            r7 = r5
            r5 = r15
        L6a:
            int r8 = r1.iy
            int r5 = r5 + r8
            com.bumptech.glide.gifdecoder.GifHeader r8 = r0.header
            int r8 = r8.height
            if (r5 >= r8) goto La6
            com.bumptech.glide.gifdecoder.GifHeader r8 = r0.header
            int r8 = r8.width
            int r5 = r5 * r8
            int r8 = r1.ix
            int r8 = r8 + r5
            int r9 = r1.iw
            int r9 = r9 + r8
            com.bumptech.glide.gifdecoder.GifHeader r10 = r0.header
            int r10 = r10.width
            int r10 = r10 + r5
            if (r10 >= r9) goto L8b
            com.bumptech.glide.gifdecoder.GifHeader r9 = r0.header
            int r9 = r9.width
            int r9 = r9 + r5
        L8b:
            int r5 = r1.iw
            int r5 = r5 * r15
        L8f:
            if (r8 >= r9) goto La6
            byte[] r10 = r0.mainPixels
            int r16 = r5 + 1
            r5 = r10[r5]
            r5 = r5 & 255(0xff, float:3.57E-43)
            int[] r10 = r0.act
            r5 = r10[r5]
            if (r5 == 0) goto La1
            r13[r8] = r5
        La1:
            int r8 = r8 + 1
            r5 = r16
            goto L8f
        La6:
            int r15 = r15 + 1
            r5 = r7
            goto L48
        Laa:
            boolean r2 = r0.savePrevious
            if (r2 == 0) goto Lcc
            int r2 = r1.dispose
            if (r2 == 0) goto Lb6
            int r1 = r1.dispose
            if (r1 != r11) goto Lcc
        Lb6:
            android.graphics.Bitmap r1 = r0.previousImage
            if (r1 != 0) goto Lc0
            android.graphics.Bitmap r1 = r17.getNextBitmap()
            r0.previousImage = r1
        Lc0:
            android.graphics.Bitmap r4 = r0.previousImage
            r6 = 0
            r8 = 0
            r9 = 0
            r5 = r13
            r7 = r3
            r10 = r3
            r11 = r12
            r4.setPixels(r5, r6, r7, r8, r9, r10, r11)
        Lcc:
            android.graphics.Bitmap r1 = r17.getNextBitmap()
            r6 = 0
            r8 = 0
            r9 = 0
            r4 = r1
            r5 = r13
            r7 = r3
            r10 = r3
            r11 = r12
            r4.setPixels(r5, r6, r7, r8, r9, r10, r11)
            return r1
    }

    public void advance() {
            r2 = this;
            int r0 = r2.framePointer
            int r0 = r0 + 1
            com.bumptech.glide.gifdecoder.GifHeader r1 = r2.header
            int r1 = r1.frameCount
            int r0 = r0 % r1
            r2.framePointer = r0
            return
    }

    public void clear() {
            r3 = this;
            r0 = 0
            r3.header = r0
            r3.data = r0
            r3.mainPixels = r0
            r3.mainScratch = r0
            android.graphics.Bitmap r1 = r3.previousImage
            if (r1 == 0) goto L12
            com.bumptech.glide.gifdecoder.GifDecoder$BitmapProvider r2 = r3.bitmapProvider
            r2.release(r1)
        L12:
            r3.previousImage = r0
            r3.rawData = r0
            return
    }

    public int getCurrentFrameIndex() {
            r1 = this;
            int r0 = r1.framePointer
            return r0
    }

    public byte[] getData() {
            r1 = this;
            byte[] r0 = r1.data
            return r0
    }

    public int getDelay(int r2) {
            r1 = this;
            if (r2 < 0) goto L15
            com.bumptech.glide.gifdecoder.GifHeader r0 = r1.header
            int r0 = r0.frameCount
            if (r2 >= r0) goto L15
            com.bumptech.glide.gifdecoder.GifHeader r0 = r1.header
            java.util.List<com.bumptech.glide.gifdecoder.GifFrame> r0 = r0.frames
            java.lang.Object r2 = r0.get(r2)
            com.bumptech.glide.gifdecoder.GifFrame r2 = (com.bumptech.glide.gifdecoder.GifFrame) r2
            int r2 = r2.delay
            goto L16
        L15:
            r2 = -1
        L16:
            return r2
    }

    public int getFrameCount() {
            r1 = this;
            com.bumptech.glide.gifdecoder.GifHeader r0 = r1.header
            int r0 = r0.frameCount
            return r0
    }

    public int getHeight() {
            r1 = this;
            com.bumptech.glide.gifdecoder.GifHeader r0 = r1.header
            int r0 = r0.height
            return r0
    }

    public int getLoopCount() {
            r1 = this;
            com.bumptech.glide.gifdecoder.GifHeader r0 = r1.header
            int r0 = r0.loopCount
            return r0
    }

    public int getNextDelay() {
            r1 = this;
            com.bumptech.glide.gifdecoder.GifHeader r0 = r1.header
            int r0 = r0.frameCount
            if (r0 <= 0) goto L10
            int r0 = r1.framePointer
            if (r0 >= 0) goto Lb
            goto L10
        Lb:
            int r0 = r1.getDelay(r0)
            return r0
        L10:
            r0 = -1
            return r0
    }

    public synchronized android.graphics.Bitmap getNextFrame() {
            r9 = this;
            monitor-enter(r9)
            com.bumptech.glide.gifdecoder.GifHeader r0 = r9.header     // Catch: java.lang.Throwable -> Ldc
            int r0 = r0.frameCount     // Catch: java.lang.Throwable -> Ldc
            r1 = 3
            r2 = 1
            if (r0 <= 0) goto Ld
            int r0 = r9.framePointer     // Catch: java.lang.Throwable -> Ldc
            if (r0 >= 0) goto L3b
        Ld:
            java.lang.String r0 = com.bumptech.glide.gifdecoder.GifDecoder.TAG     // Catch: java.lang.Throwable -> Ldc
            boolean r0 = android.util.Log.isLoggable(r0, r1)     // Catch: java.lang.Throwable -> Ldc
            if (r0 == 0) goto L39
            java.lang.String r0 = com.bumptech.glide.gifdecoder.GifDecoder.TAG     // Catch: java.lang.Throwable -> Ldc
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ldc
            r3.<init>()     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r4 = "unable to decode frame, frameCount="
            r3.append(r4)     // Catch: java.lang.Throwable -> Ldc
            com.bumptech.glide.gifdecoder.GifHeader r4 = r9.header     // Catch: java.lang.Throwable -> Ldc
            int r4 = r4.frameCount     // Catch: java.lang.Throwable -> Ldc
            r3.append(r4)     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r4 = " framePointer="
            r3.append(r4)     // Catch: java.lang.Throwable -> Ldc
            int r4 = r9.framePointer     // Catch: java.lang.Throwable -> Ldc
            r3.append(r4)     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> Ldc
            android.util.Log.d(r0, r3)     // Catch: java.lang.Throwable -> Ldc
        L39:
            r9.status = r2     // Catch: java.lang.Throwable -> Ldc
        L3b:
            int r0 = r9.status     // Catch: java.lang.Throwable -> Ldc
            r3 = 0
            if (r0 == r2) goto Lba
            int r0 = r9.status     // Catch: java.lang.Throwable -> Ldc
            r4 = 2
            if (r0 != r4) goto L47
            goto Lba
        L47:
            r0 = 0
            r9.status = r0     // Catch: java.lang.Throwable -> Ldc
            com.bumptech.glide.gifdecoder.GifHeader r4 = r9.header     // Catch: java.lang.Throwable -> Ldc
            java.util.List<com.bumptech.glide.gifdecoder.GifFrame> r4 = r4.frames     // Catch: java.lang.Throwable -> Ldc
            int r5 = r9.framePointer     // Catch: java.lang.Throwable -> Ldc
            java.lang.Object r4 = r4.get(r5)     // Catch: java.lang.Throwable -> Ldc
            com.bumptech.glide.gifdecoder.GifFrame r4 = (com.bumptech.glide.gifdecoder.GifFrame) r4     // Catch: java.lang.Throwable -> Ldc
            int r5 = r9.framePointer     // Catch: java.lang.Throwable -> Ldc
            int r5 = r5 - r2
            if (r5 < 0) goto L66
            com.bumptech.glide.gifdecoder.GifHeader r6 = r9.header     // Catch: java.lang.Throwable -> Ldc
            java.util.List<com.bumptech.glide.gifdecoder.GifFrame> r6 = r6.frames     // Catch: java.lang.Throwable -> Ldc
            java.lang.Object r5 = r6.get(r5)     // Catch: java.lang.Throwable -> Ldc
            com.bumptech.glide.gifdecoder.GifFrame r5 = (com.bumptech.glide.gifdecoder.GifFrame) r5     // Catch: java.lang.Throwable -> Ldc
            goto L67
        L66:
            r5 = r3
        L67:
            int[] r6 = r4.lct     // Catch: java.lang.Throwable -> Ldc
            if (r6 != 0) goto L72
            com.bumptech.glide.gifdecoder.GifHeader r6 = r9.header     // Catch: java.lang.Throwable -> Ldc
            int[] r6 = r6.gct     // Catch: java.lang.Throwable -> Ldc
            r9.act = r6     // Catch: java.lang.Throwable -> Ldc
            goto L82
        L72:
            int[] r6 = r4.lct     // Catch: java.lang.Throwable -> Ldc
            r9.act = r6     // Catch: java.lang.Throwable -> Ldc
            com.bumptech.glide.gifdecoder.GifHeader r6 = r9.header     // Catch: java.lang.Throwable -> Ldc
            int r6 = r6.bgIndex     // Catch: java.lang.Throwable -> Ldc
            int r7 = r4.transIndex     // Catch: java.lang.Throwable -> Ldc
            if (r6 != r7) goto L82
            com.bumptech.glide.gifdecoder.GifHeader r6 = r9.header     // Catch: java.lang.Throwable -> Ldc
            r6.bgColor = r0     // Catch: java.lang.Throwable -> Ldc
        L82:
            boolean r6 = r4.transparency     // Catch: java.lang.Throwable -> Ldc
            if (r6 == 0) goto L93
            int[] r6 = r9.act     // Catch: java.lang.Throwable -> Ldc
            int r7 = r4.transIndex     // Catch: java.lang.Throwable -> Ldc
            r6 = r6[r7]     // Catch: java.lang.Throwable -> Ldc
            int[] r7 = r9.act     // Catch: java.lang.Throwable -> Ldc
            int r8 = r4.transIndex     // Catch: java.lang.Throwable -> Ldc
            r7[r8] = r0     // Catch: java.lang.Throwable -> Ldc
            r0 = r6
        L93:
            int[] r6 = r9.act     // Catch: java.lang.Throwable -> Ldc
            if (r6 != 0) goto Laa
            java.lang.String r0 = com.bumptech.glide.gifdecoder.GifDecoder.TAG     // Catch: java.lang.Throwable -> Ldc
            boolean r0 = android.util.Log.isLoggable(r0, r1)     // Catch: java.lang.Throwable -> Ldc
            if (r0 == 0) goto La6
            java.lang.String r0 = com.bumptech.glide.gifdecoder.GifDecoder.TAG     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r1 = "No Valid Color Table"
            android.util.Log.d(r0, r1)     // Catch: java.lang.Throwable -> Ldc
        La6:
            r9.status = r2     // Catch: java.lang.Throwable -> Ldc
            monitor-exit(r9)
            return r3
        Laa:
            android.graphics.Bitmap r1 = r9.setPixels(r4, r5)     // Catch: java.lang.Throwable -> Ldc
            boolean r2 = r4.transparency     // Catch: java.lang.Throwable -> Ldc
            if (r2 == 0) goto Lb8
            int[] r2 = r9.act     // Catch: java.lang.Throwable -> Ldc
            int r3 = r4.transIndex     // Catch: java.lang.Throwable -> Ldc
            r2[r3] = r0     // Catch: java.lang.Throwable -> Ldc
        Lb8:
            monitor-exit(r9)
            return r1
        Lba:
            java.lang.String r0 = com.bumptech.glide.gifdecoder.GifDecoder.TAG     // Catch: java.lang.Throwable -> Ldc
            boolean r0 = android.util.Log.isLoggable(r0, r1)     // Catch: java.lang.Throwable -> Ldc
            if (r0 == 0) goto Lda
            java.lang.String r0 = com.bumptech.glide.gifdecoder.GifDecoder.TAG     // Catch: java.lang.Throwable -> Ldc
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ldc
            r1.<init>()     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r2 = "Unable to decode frame, status="
            r1.append(r2)     // Catch: java.lang.Throwable -> Ldc
            int r2 = r9.status     // Catch: java.lang.Throwable -> Ldc
            r1.append(r2)     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Ldc
            android.util.Log.d(r0, r1)     // Catch: java.lang.Throwable -> Ldc
        Lda:
            monitor-exit(r9)
            return r3
        Ldc:
            r0 = move-exception
            monitor-exit(r9)
            throw r0
    }

    public int getStatus() {
            r1 = this;
            int r0 = r1.status
            return r0
    }

    public int getWidth() {
            r1 = this;
            com.bumptech.glide.gifdecoder.GifHeader r0 = r1.header
            int r0 = r0.width
            return r0
    }

    public int read(java.io.InputStream r6, int r7) {
            r5 = this;
            if (r6 == 0) goto L32
            r0 = 16384(0x4000, float:2.2959E-41)
            if (r7 <= 0) goto L9
            int r7 = r7 + 4096
            goto Lb
        L9:
            r7 = 16384(0x4000, float:2.2959E-41)
        Lb:
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream     // Catch: java.io.IOException -> L29
            r1.<init>(r7)     // Catch: java.io.IOException -> L29
            byte[] r7 = new byte[r0]     // Catch: java.io.IOException -> L29
        L12:
            r2 = 0
            int r3 = r6.read(r7, r2, r0)     // Catch: java.io.IOException -> L29
            r4 = -1
            if (r3 == r4) goto L1e
            r1.write(r7, r2, r3)     // Catch: java.io.IOException -> L29
            goto L12
        L1e:
            r1.flush()     // Catch: java.io.IOException -> L29
            byte[] r7 = r1.toByteArray()     // Catch: java.io.IOException -> L29
            r5.read(r7)     // Catch: java.io.IOException -> L29
            goto L35
        L29:
            r7 = move-exception
            java.lang.String r0 = com.bumptech.glide.gifdecoder.GifDecoder.TAG
            java.lang.String r1 = "Error reading data from stream"
            android.util.Log.w(r0, r1, r7)
            goto L35
        L32:
            r7 = 2
            r5.status = r7
        L35:
            if (r6 == 0) goto L43
            r6.close()     // Catch: java.io.IOException -> L3b
            goto L43
        L3b:
            r6 = move-exception
            java.lang.String r7 = com.bumptech.glide.gifdecoder.GifDecoder.TAG
            java.lang.String r0 = "Error closing stream"
            android.util.Log.w(r7, r0, r6)
        L43:
            int r6 = r5.status
            return r6
    }

    public int read(byte[] r3) {
            r2 = this;
            r2.data = r3
            com.bumptech.glide.gifdecoder.GifHeaderParser r0 = r2.getHeaderParser()
            com.bumptech.glide.gifdecoder.GifHeaderParser r0 = r0.setData(r3)
            com.bumptech.glide.gifdecoder.GifHeader r0 = r0.parseHeader()
            r2.header = r0
            if (r3 == 0) goto L5d
            java.nio.ByteBuffer r3 = java.nio.ByteBuffer.wrap(r3)
            r2.rawData = r3
            r3.rewind()
            java.nio.ByteBuffer r3 = r2.rawData
            java.nio.ByteOrder r0 = java.nio.ByteOrder.LITTLE_ENDIAN
            r3.order(r0)
            com.bumptech.glide.gifdecoder.GifHeader r3 = r2.header
            int r3 = r3.width
            com.bumptech.glide.gifdecoder.GifHeader r0 = r2.header
            int r0 = r0.height
            int r3 = r3 * r0
            byte[] r3 = new byte[r3]
            r2.mainPixels = r3
            com.bumptech.glide.gifdecoder.GifHeader r3 = r2.header
            int r3 = r3.width
            com.bumptech.glide.gifdecoder.GifHeader r0 = r2.header
            int r0 = r0.height
            int r3 = r3 * r0
            int[] r3 = new int[r3]
            r2.mainScratch = r3
            r3 = 0
            r2.savePrevious = r3
            com.bumptech.glide.gifdecoder.GifHeader r3 = r2.header
            java.util.List<com.bumptech.glide.gifdecoder.GifFrame> r3 = r3.frames
            java.util.Iterator r3 = r3.iterator()
        L49:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L5d
            java.lang.Object r0 = r3.next()
            com.bumptech.glide.gifdecoder.GifFrame r0 = (com.bumptech.glide.gifdecoder.GifFrame) r0
            int r0 = r0.dispose
            r1 = 3
            if (r0 != r1) goto L49
            r3 = 1
            r2.savePrevious = r3
        L5d:
            int r3 = r2.status
            return r3
    }

    public void resetFrameIndex() {
            r1 = this;
            r0 = -1
            r1.framePointer = r0
            return
    }

    public void setData(com.bumptech.glide.gifdecoder.GifHeader r3, byte[] r4) {
            r2 = this;
            r2.header = r3
            r2.data = r4
            r0 = 0
            r2.status = r0
            r1 = -1
            r2.framePointer = r1
            java.nio.ByteBuffer r4 = java.nio.ByteBuffer.wrap(r4)
            r2.rawData = r4
            r4.rewind()
            java.nio.ByteBuffer r4 = r2.rawData
            java.nio.ByteOrder r1 = java.nio.ByteOrder.LITTLE_ENDIAN
            r4.order(r1)
            r2.savePrevious = r0
            java.util.List<com.bumptech.glide.gifdecoder.GifFrame> r4 = r3.frames
            java.util.Iterator r4 = r4.iterator()
        L22:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L36
            java.lang.Object r0 = r4.next()
            com.bumptech.glide.gifdecoder.GifFrame r0 = (com.bumptech.glide.gifdecoder.GifFrame) r0
            int r0 = r0.dispose
            r1 = 3
            if (r0 != r1) goto L22
            r4 = 1
            r2.savePrevious = r4
        L36:
            int r4 = r3.width
            int r0 = r3.height
            int r4 = r4 * r0
            byte[] r4 = new byte[r4]
            r2.mainPixels = r4
            int r4 = r3.width
            int r3 = r3.height
            int r4 = r4 * r3
            int[] r3 = new int[r4]
            r2.mainScratch = r3
            return
    }
}
