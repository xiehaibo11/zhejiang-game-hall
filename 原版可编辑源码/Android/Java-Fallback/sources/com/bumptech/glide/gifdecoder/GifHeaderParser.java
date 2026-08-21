package com.bumptech.glide.gifdecoder;

public class GifHeaderParser {
    static final int DEFAULT_FRAME_DELAY = 10;
    private static final int MAX_BLOCK_SIZE = 256;
    static final int MIN_FRAME_DELAY = 3;
    public static final java.lang.String TAG = "GifHeaderParser";
    private final byte[] block;
    private int blockSize;
    private com.bumptech.glide.gifdecoder.GifHeader header;
    private java.nio.ByteBuffer rawData;

    public GifHeaderParser() {
            r1 = this;
            r1.<init>()
            r0 = 256(0x100, float:3.59E-43)
            byte[] r0 = new byte[r0]
            r1.block = r0
            r0 = 0
            r1.blockSize = r0
            return
    }

    private boolean err() {
            r1 = this;
            com.bumptech.glide.gifdecoder.GifHeader r0 = r1.header
            int r0 = r0.status
            if (r0 == 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    private int read() {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.rawData     // Catch: java.lang.Exception -> L9
            byte r0 = r0.get()     // Catch: java.lang.Exception -> L9
            r0 = r0 & 255(0xff, float:3.57E-43)
            goto Lf
        L9:
            com.bumptech.glide.gifdecoder.GifHeader r0 = r2.header
            r1 = 1
            r0.status = r1
            r0 = 0
        Lf:
            return r0
    }

    private void readBitmap() {
            r8 = this;
            com.bumptech.glide.gifdecoder.GifHeader r0 = r8.header
            com.bumptech.glide.gifdecoder.GifFrame r0 = r0.currentFrame
            int r1 = r8.readShort()
            r0.ix = r1
            com.bumptech.glide.gifdecoder.GifHeader r0 = r8.header
            com.bumptech.glide.gifdecoder.GifFrame r0 = r0.currentFrame
            int r1 = r8.readShort()
            r0.iy = r1
            com.bumptech.glide.gifdecoder.GifHeader r0 = r8.header
            com.bumptech.glide.gifdecoder.GifFrame r0 = r0.currentFrame
            int r1 = r8.readShort()
            r0.iw = r1
            com.bumptech.glide.gifdecoder.GifHeader r0 = r8.header
            com.bumptech.glide.gifdecoder.GifFrame r0 = r0.currentFrame
            int r1 = r8.readShort()
            r0.ih = r1
            int r0 = r8.read()
            r1 = r0 & 128(0x80, float:1.8E-43)
            r2 = 0
            r3 = 1
            if (r1 == 0) goto L34
            r1 = 1
            goto L35
        L34:
            r1 = 0
        L35:
            r4 = 4611686018427387904(0x4000000000000000, double:2.0)
            r6 = r0 & 7
            int r6 = r6 + r3
            double r6 = (double) r6
            double r4 = java.lang.Math.pow(r4, r6)
            int r4 = (int) r4
            com.bumptech.glide.gifdecoder.GifHeader r5 = r8.header
            com.bumptech.glide.gifdecoder.GifFrame r5 = r5.currentFrame
            r0 = r0 & 64
            if (r0 == 0) goto L49
            r2 = 1
        L49:
            r5.interlace = r2
            if (r1 == 0) goto L58
            com.bumptech.glide.gifdecoder.GifHeader r0 = r8.header
            com.bumptech.glide.gifdecoder.GifFrame r0 = r0.currentFrame
            int[] r1 = r8.readColorTable(r4)
            r0.lct = r1
            goto L5f
        L58:
            com.bumptech.glide.gifdecoder.GifHeader r0 = r8.header
            com.bumptech.glide.gifdecoder.GifFrame r0 = r0.currentFrame
            r1 = 0
            r0.lct = r1
        L5f:
            com.bumptech.glide.gifdecoder.GifHeader r0 = r8.header
            com.bumptech.glide.gifdecoder.GifFrame r0 = r0.currentFrame
            java.nio.ByteBuffer r1 = r8.rawData
            int r1 = r1.position()
            r0.bufferFrameStart = r1
            r8.skipImageData()
            boolean r0 = r8.err()
            if (r0 == 0) goto L75
            return
        L75:
            com.bumptech.glide.gifdecoder.GifHeader r0 = r8.header
            int r1 = r0.frameCount
            int r1 = r1 + r3
            r0.frameCount = r1
            com.bumptech.glide.gifdecoder.GifHeader r0 = r8.header
            java.util.List<com.bumptech.glide.gifdecoder.GifFrame> r0 = r0.frames
            com.bumptech.glide.gifdecoder.GifHeader r1 = r8.header
            com.bumptech.glide.gifdecoder.GifFrame r1 = r1.currentFrame
            r0.add(r1)
            return
    }

    private int readBlock() {
            r6 = this;
            int r0 = r6.read()
            r6.blockSize = r0
            r1 = 0
            if (r0 <= 0) goto L4f
            r0 = 0
        La:
            int r2 = r6.blockSize     // Catch: java.lang.Exception -> L1a
            if (r1 >= r2) goto L4f
            int r0 = r6.blockSize     // Catch: java.lang.Exception -> L1a
            int r0 = r0 - r1
            java.nio.ByteBuffer r2 = r6.rawData     // Catch: java.lang.Exception -> L1a
            byte[] r3 = r6.block     // Catch: java.lang.Exception -> L1a
            r2.get(r3, r1, r0)     // Catch: java.lang.Exception -> L1a
            int r1 = r1 + r0
            goto La
        L1a:
            r2 = move-exception
            r3 = 3
            java.lang.String r4 = "GifHeaderParser"
            boolean r3 = android.util.Log.isLoggable(r4, r3)
            if (r3 == 0) goto L4a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "Error Reading Block n: "
            r3.append(r5)
            r3.append(r1)
            java.lang.String r5 = " count: "
            r3.append(r5)
            r3.append(r0)
            java.lang.String r0 = " blockSize: "
            r3.append(r0)
            int r0 = r6.blockSize
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            android.util.Log.d(r4, r0, r2)
        L4a:
            com.bumptech.glide.gifdecoder.GifHeader r0 = r6.header
            r2 = 1
            r0.status = r2
        L4f:
            return r1
    }

    private int[] readColorTable(int r10) {
            r9 = this;
            int r0 = r10 * 3
            byte[] r0 = new byte[r0]
            r1 = 0
            java.nio.ByteBuffer r2 = r9.rawData     // Catch: java.nio.BufferUnderflowException -> L34
            r2.get(r0)     // Catch: java.nio.BufferUnderflowException -> L34
            r2 = 256(0x100, float:3.59E-43)
            int[] r1 = new int[r2]     // Catch: java.nio.BufferUnderflowException -> L34
            r2 = 0
            r3 = 0
        L10:
            if (r2 >= r10) goto L48
            int r4 = r3 + 1
            r3 = r0[r3]     // Catch: java.nio.BufferUnderflowException -> L34
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r5 = r4 + 1
            r4 = r0[r4]     // Catch: java.nio.BufferUnderflowException -> L34
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r6 = r5 + 1
            r5 = r0[r5]     // Catch: java.nio.BufferUnderflowException -> L34
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r7 = r2 + 1
            r8 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            int r3 = r3 << 16
            r3 = r3 | r8
            int r4 = r4 << 8
            r3 = r3 | r4
            r3 = r3 | r5
            r1[r2] = r3     // Catch: java.nio.BufferUnderflowException -> L34
            r3 = r6
            r2 = r7
            goto L10
        L34:
            r10 = move-exception
            java.lang.String r0 = "GifHeaderParser"
            r2 = 3
            boolean r2 = android.util.Log.isLoggable(r0, r2)
            if (r2 == 0) goto L43
            java.lang.String r2 = "Format Error Reading Color Table"
            android.util.Log.d(r0, r2, r10)
        L43:
            com.bumptech.glide.gifdecoder.GifHeader r10 = r9.header
            r0 = 1
            r10.status = r0
        L48:
            return r1
    }

    private void readContents() {
            r5 = this;
            r0 = 0
            r1 = 0
        L2:
            if (r1 != 0) goto L93
            boolean r2 = r5.err()
            if (r2 != 0) goto L93
            int r2 = r5.read()
            r3 = 33
            r4 = 1
            if (r2 == r3) goto L35
            r3 = 44
            if (r2 == r3) goto L22
            r3 = 59
            if (r2 == r3) goto L20
            com.bumptech.glide.gifdecoder.GifHeader r2 = r5.header
            r2.status = r4
            goto L2
        L20:
            r1 = 1
            goto L2
        L22:
            com.bumptech.glide.gifdecoder.GifHeader r2 = r5.header
            com.bumptech.glide.gifdecoder.GifFrame r2 = r2.currentFrame
            if (r2 != 0) goto L31
            com.bumptech.glide.gifdecoder.GifHeader r2 = r5.header
            com.bumptech.glide.gifdecoder.GifFrame r3 = new com.bumptech.glide.gifdecoder.GifFrame
            r3.<init>()
            r2.currentFrame = r3
        L31:
            r5.readBitmap()
            goto L2
        L35:
            int r2 = r5.read()
            if (r2 == r4) goto L8e
            r3 = 249(0xf9, float:3.49E-43)
            if (r2 == r3) goto L80
            r3 = 254(0xfe, float:3.56E-43)
            if (r2 == r3) goto L7c
            r3 = 255(0xff, float:3.57E-43)
            if (r2 == r3) goto L4b
            r5.skip()
            goto L2
        L4b:
            r5.readBlock()
            java.lang.String r2 = ""
            r3 = 0
        L51:
            r4 = 11
            if (r3 >= r4) goto L6c
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r2)
            byte[] r2 = r5.block
            r2 = r2[r3]
            char r2 = (char) r2
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            int r3 = r3 + 1
            goto L51
        L6c:
            java.lang.String r3 = "NETSCAPE2.0"
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L78
            r5.readNetscapeExt()
            goto L2
        L78:
            r5.skip()
            goto L2
        L7c:
            r5.skip()
            goto L2
        L80:
            com.bumptech.glide.gifdecoder.GifHeader r2 = r5.header
            com.bumptech.glide.gifdecoder.GifFrame r3 = new com.bumptech.glide.gifdecoder.GifFrame
            r3.<init>()
            r2.currentFrame = r3
            r5.readGraphicControlExt()
            goto L2
        L8e:
            r5.skip()
            goto L2
        L93:
            return
    }

    private void readGraphicControlExt() {
            r3 = this;
            r3.read()
            int r0 = r3.read()
            com.bumptech.glide.gifdecoder.GifHeader r1 = r3.header
            com.bumptech.glide.gifdecoder.GifFrame r1 = r1.currentFrame
            r2 = r0 & 28
            int r2 = r2 >> 2
            r1.dispose = r2
            com.bumptech.glide.gifdecoder.GifHeader r1 = r3.header
            com.bumptech.glide.gifdecoder.GifFrame r1 = r1.currentFrame
            int r1 = r1.dispose
            r2 = 1
            if (r1 != 0) goto L20
            com.bumptech.glide.gifdecoder.GifHeader r1 = r3.header
            com.bumptech.glide.gifdecoder.GifFrame r1 = r1.currentFrame
            r1.dispose = r2
        L20:
            com.bumptech.glide.gifdecoder.GifHeader r1 = r3.header
            com.bumptech.glide.gifdecoder.GifFrame r1 = r1.currentFrame
            r0 = r0 & r2
            if (r0 == 0) goto L28
            goto L29
        L28:
            r2 = 0
        L29:
            r1.transparency = r2
            int r0 = r3.readShort()
            r1 = 3
            r2 = 10
            if (r0 >= r1) goto L36
            r0 = 10
        L36:
            com.bumptech.glide.gifdecoder.GifHeader r1 = r3.header
            com.bumptech.glide.gifdecoder.GifFrame r1 = r1.currentFrame
            int r0 = r0 * 10
            r1.delay = r0
            com.bumptech.glide.gifdecoder.GifHeader r0 = r3.header
            com.bumptech.glide.gifdecoder.GifFrame r0 = r0.currentFrame
            int r1 = r3.read()
            r0.transIndex = r1
            r3.read()
            return
    }

    private void readHeader() {
            r3 = this;
            java.lang.String r0 = ""
            r1 = 0
        L3:
            r2 = 6
            if (r1 >= r2) goto L1d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            int r0 = r3.read()
            char r0 = (char) r0
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            int r1 = r1 + 1
            goto L3
        L1d:
            java.lang.String r1 = "GIF"
            boolean r0 = r0.startsWith(r1)
            if (r0 != 0) goto L2b
            com.bumptech.glide.gifdecoder.GifHeader r0 = r3.header
            r1 = 1
            r0.status = r1
            return
        L2b:
            r3.readLSD()
            com.bumptech.glide.gifdecoder.GifHeader r0 = r3.header
            boolean r0 = r0.gctFlag
            if (r0 == 0) goto L50
            boolean r0 = r3.err()
            if (r0 != 0) goto L50
            com.bumptech.glide.gifdecoder.GifHeader r0 = r3.header
            int r1 = r0.gctSize
            int[] r1 = r3.readColorTable(r1)
            r0.gct = r1
            com.bumptech.glide.gifdecoder.GifHeader r0 = r3.header
            int[] r1 = r0.gct
            com.bumptech.glide.gifdecoder.GifHeader r2 = r3.header
            int r2 = r2.bgIndex
            r1 = r1[r2]
            r0.bgColor = r1
        L50:
            return
    }

    private void readLSD() {
            r3 = this;
            com.bumptech.glide.gifdecoder.GifHeader r0 = r3.header
            int r1 = r3.readShort()
            r0.width = r1
            com.bumptech.glide.gifdecoder.GifHeader r0 = r3.header
            int r1 = r3.readShort()
            r0.height = r1
            int r0 = r3.read()
            com.bumptech.glide.gifdecoder.GifHeader r1 = r3.header
            r2 = r0 & 128(0x80, float:1.8E-43)
            if (r2 == 0) goto L1c
            r2 = 1
            goto L1d
        L1c:
            r2 = 0
        L1d:
            r1.gctFlag = r2
            com.bumptech.glide.gifdecoder.GifHeader r1 = r3.header
            r2 = 2
            r0 = r0 & 7
            int r0 = r2 << r0
            r1.gctSize = r0
            com.bumptech.glide.gifdecoder.GifHeader r0 = r3.header
            int r1 = r3.read()
            r0.bgIndex = r1
            com.bumptech.glide.gifdecoder.GifHeader r0 = r3.header
            int r1 = r3.read()
            r0.pixelAspect = r1
            return
    }

    private void readNetscapeExt() {
            r3 = this;
        L0:
            r3.readBlock()
            byte[] r0 = r3.block
            r1 = 0
            r1 = r0[r1]
            r2 = 1
            if (r1 != r2) goto L1b
            r1 = r0[r2]
            r1 = r1 & 255(0xff, float:3.57E-43)
            r2 = 2
            r0 = r0[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            com.bumptech.glide.gifdecoder.GifHeader r2 = r3.header
            int r0 = r0 << 8
            r0 = r0 | r1
            r2.loopCount = r0
        L1b:
            int r0 = r3.blockSize
            if (r0 <= 0) goto L25
            boolean r0 = r3.err()
            if (r0 == 0) goto L0
        L25:
            return
    }

    private int readShort() {
            r1 = this;
            java.nio.ByteBuffer r0 = r1.rawData
            short r0 = r0.getShort()
            return r0
    }

    private void reset() {
            r2 = this;
            r0 = 0
            r2.rawData = r0
            byte[] r0 = r2.block
            r1 = 0
            java.util.Arrays.fill(r0, r1)
            com.bumptech.glide.gifdecoder.GifHeader r0 = new com.bumptech.glide.gifdecoder.GifHeader
            r0.<init>()
            r2.header = r0
            r2.blockSize = r1
            return
    }

    private void skip() {
            r3 = this;
        L0:
            int r0 = r3.read()
            java.nio.ByteBuffer r1 = r3.rawData
            int r2 = r1.position()
            int r2 = r2 + r0
            r1.position(r2)
            if (r0 > 0) goto L0
            return
    }

    private void skipImageData() {
            r0 = this;
            r0.read()
            r0.skip()
            return
    }

    public void clear() {
            r1 = this;
            r0 = 0
            r1.rawData = r0
            r1.header = r0
            return
    }

    public com.bumptech.glide.gifdecoder.GifHeader parseHeader() {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.rawData
            if (r0 == 0) goto L27
            boolean r0 = r2.err()
            if (r0 == 0) goto Ld
            com.bumptech.glide.gifdecoder.GifHeader r0 = r2.header
            return r0
        Ld:
            r2.readHeader()
            boolean r0 = r2.err()
            if (r0 != 0) goto L24
            r2.readContents()
            com.bumptech.glide.gifdecoder.GifHeader r0 = r2.header
            int r0 = r0.frameCount
            if (r0 >= 0) goto L24
            com.bumptech.glide.gifdecoder.GifHeader r0 = r2.header
            r1 = 1
            r0.status = r1
        L24:
            com.bumptech.glide.gifdecoder.GifHeader r0 = r2.header
            return r0
        L27:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "You must call setData() before parseHeader()"
            r0.<init>(r1)
            throw r0
    }

    public com.bumptech.glide.gifdecoder.GifHeaderParser setData(byte[] r2) {
            r1 = this;
            r1.reset()
            if (r2 == 0) goto L16
            java.nio.ByteBuffer r2 = java.nio.ByteBuffer.wrap(r2)
            r1.rawData = r2
            r2.rewind()
            java.nio.ByteBuffer r2 = r1.rawData
            java.nio.ByteOrder r0 = java.nio.ByteOrder.LITTLE_ENDIAN
            r2.order(r0)
            goto L1e
        L16:
            r2 = 0
            r1.rawData = r2
            com.bumptech.glide.gifdecoder.GifHeader r2 = r1.header
            r0 = 2
            r2.status = r0
        L1e:
            return r1
    }
}
