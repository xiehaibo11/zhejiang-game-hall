package com.bumptech.glide.load.resource.gif;

public class GifResourceDecoder implements com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, com.bumptech.glide.load.resource.gif.GifDrawable> {
    private static final com.bumptech.glide.load.resource.gif.GifResourceDecoder.GifDecoderPool DECODER_POOL = null;
    private static final com.bumptech.glide.load.resource.gif.GifResourceDecoder.GifHeaderParserPool PARSER_POOL = null;
    private static final java.lang.String TAG = "GifResourceDecoder";
    private final com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool bitmapPool;
    private final android.content.Context context;
    private final com.bumptech.glide.load.resource.gif.GifResourceDecoder.GifDecoderPool decoderPool;
    private final com.bumptech.glide.load.resource.gif.GifResourceDecoder.GifHeaderParserPool parserPool;
    private final com.bumptech.glide.load.resource.gif.GifBitmapProvider provider;

    static class GifDecoderPool {
        private final java.util.Queue<com.bumptech.glide.gifdecoder.GifDecoder> pool;

        GifDecoderPool() {
                r1 = this;
                r1.<init>()
                r0 = 0
                java.util.Queue r0 = com.bumptech.glide.util.Util.createQueue(r0)
                r1.pool = r0
                return
        }

        public synchronized com.bumptech.glide.gifdecoder.GifDecoder obtain(com.bumptech.glide.gifdecoder.GifDecoder.BitmapProvider r2) {
                r1 = this;
                monitor-enter(r1)
                java.util.Queue<com.bumptech.glide.gifdecoder.GifDecoder> r0 = r1.pool     // Catch: java.lang.Throwable -> L12
                java.lang.Object r0 = r0.poll()     // Catch: java.lang.Throwable -> L12
                com.bumptech.glide.gifdecoder.GifDecoder r0 = (com.bumptech.glide.gifdecoder.GifDecoder) r0     // Catch: java.lang.Throwable -> L12
                if (r0 != 0) goto L10
                com.bumptech.glide.gifdecoder.GifDecoder r0 = new com.bumptech.glide.gifdecoder.GifDecoder     // Catch: java.lang.Throwable -> L12
                r0.<init>(r2)     // Catch: java.lang.Throwable -> L12
            L10:
                monitor-exit(r1)
                return r0
            L12:
                r2 = move-exception
                monitor-exit(r1)
                throw r2
        }

        public synchronized void release(com.bumptech.glide.gifdecoder.GifDecoder r2) {
                r1 = this;
                monitor-enter(r1)
                r2.clear()     // Catch: java.lang.Throwable -> Lb
                java.util.Queue<com.bumptech.glide.gifdecoder.GifDecoder> r0 = r1.pool     // Catch: java.lang.Throwable -> Lb
                r0.offer(r2)     // Catch: java.lang.Throwable -> Lb
                monitor-exit(r1)
                return
            Lb:
                r2 = move-exception
                monitor-exit(r1)
                throw r2
        }
    }

    static class GifHeaderParserPool {
        private final java.util.Queue<com.bumptech.glide.gifdecoder.GifHeaderParser> pool;

        GifHeaderParserPool() {
                r1 = this;
                r1.<init>()
                r0 = 0
                java.util.Queue r0 = com.bumptech.glide.util.Util.createQueue(r0)
                r1.pool = r0
                return
        }

        public synchronized com.bumptech.glide.gifdecoder.GifHeaderParser obtain(byte[] r2) {
                r1 = this;
                monitor-enter(r1)
                java.util.Queue<com.bumptech.glide.gifdecoder.GifHeaderParser> r0 = r1.pool     // Catch: java.lang.Throwable -> L16
                java.lang.Object r0 = r0.poll()     // Catch: java.lang.Throwable -> L16
                com.bumptech.glide.gifdecoder.GifHeaderParser r0 = (com.bumptech.glide.gifdecoder.GifHeaderParser) r0     // Catch: java.lang.Throwable -> L16
                if (r0 != 0) goto L10
                com.bumptech.glide.gifdecoder.GifHeaderParser r0 = new com.bumptech.glide.gifdecoder.GifHeaderParser     // Catch: java.lang.Throwable -> L16
                r0.<init>()     // Catch: java.lang.Throwable -> L16
            L10:
                com.bumptech.glide.gifdecoder.GifHeaderParser r2 = r0.setData(r2)     // Catch: java.lang.Throwable -> L16
                monitor-exit(r1)
                return r2
            L16:
                r2 = move-exception
                monitor-exit(r1)
                throw r2
        }

        public synchronized void release(com.bumptech.glide.gifdecoder.GifHeaderParser r2) {
                r1 = this;
                monitor-enter(r1)
                r2.clear()     // Catch: java.lang.Throwable -> Lb
                java.util.Queue<com.bumptech.glide.gifdecoder.GifHeaderParser> r0 = r1.pool     // Catch: java.lang.Throwable -> Lb
                r0.offer(r2)     // Catch: java.lang.Throwable -> Lb
                monitor-exit(r1)
                return
            Lb:
                r2 = move-exception
                monitor-exit(r1)
                throw r2
        }
    }

    static {
            com.bumptech.glide.load.resource.gif.GifResourceDecoder$GifHeaderParserPool r0 = new com.bumptech.glide.load.resource.gif.GifResourceDecoder$GifHeaderParserPool
            r0.<init>()
            com.bumptech.glide.load.resource.gif.GifResourceDecoder.PARSER_POOL = r0
            com.bumptech.glide.load.resource.gif.GifResourceDecoder$GifDecoderPool r0 = new com.bumptech.glide.load.resource.gif.GifResourceDecoder$GifDecoderPool
            r0.<init>()
            com.bumptech.glide.load.resource.gif.GifResourceDecoder.DECODER_POOL = r0
            return
    }

    public GifResourceDecoder(android.content.Context r2) {
            r1 = this;
            com.bumptech.glide.Glide r0 = com.bumptech.glide.Glide.get(r2)
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r0 = r0.getBitmapPool()
            r1.<init>(r2, r0)
            return
    }

    public GifResourceDecoder(android.content.Context r3, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r4) {
            r2 = this;
            com.bumptech.glide.load.resource.gif.GifResourceDecoder$GifHeaderParserPool r0 = com.bumptech.glide.load.resource.gif.GifResourceDecoder.PARSER_POOL
            com.bumptech.glide.load.resource.gif.GifResourceDecoder$GifDecoderPool r1 = com.bumptech.glide.load.resource.gif.GifResourceDecoder.DECODER_POOL
            r2.<init>(r3, r4, r0, r1)
            return
    }

    GifResourceDecoder(android.content.Context r1, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2, com.bumptech.glide.load.resource.gif.GifResourceDecoder.GifHeaderParserPool r3, com.bumptech.glide.load.resource.gif.GifResourceDecoder.GifDecoderPool r4) {
            r0 = this;
            r0.<init>()
            r0.context = r1
            r0.bitmapPool = r2
            r0.decoderPool = r4
            com.bumptech.glide.load.resource.gif.GifBitmapProvider r1 = new com.bumptech.glide.load.resource.gif.GifBitmapProvider
            r1.<init>(r2)
            r0.provider = r1
            r0.parserPool = r3
            return
    }

    private com.bumptech.glide.load.resource.gif.GifDrawableResource decode(byte[] r11, int r12, int r13, com.bumptech.glide.gifdecoder.GifHeaderParser r14, com.bumptech.glide.gifdecoder.GifDecoder r15) {
            r10 = this;
            com.bumptech.glide.gifdecoder.GifHeader r7 = r14.parseHeader()
            int r14 = r7.getNumFrames()
            r0 = 0
            if (r14 <= 0) goto L32
            int r14 = r7.getStatus()
            if (r14 == 0) goto L12
            goto L32
        L12:
            android.graphics.Bitmap r9 = r10.decodeFirstFrame(r15, r7, r11)
            if (r9 != 0) goto L19
            return r0
        L19:
            com.bumptech.glide.load.resource.UnitTransformation r4 = com.bumptech.glide.load.resource.UnitTransformation.get()
            com.bumptech.glide.load.resource.gif.GifDrawable r14 = new com.bumptech.glide.load.resource.gif.GifDrawable
            android.content.Context r1 = r10.context
            com.bumptech.glide.load.resource.gif.GifBitmapProvider r2 = r10.provider
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r3 = r10.bitmapPool
            r0 = r14
            r5 = r12
            r6 = r13
            r8 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            com.bumptech.glide.load.resource.gif.GifDrawableResource r11 = new com.bumptech.glide.load.resource.gif.GifDrawableResource
            r11.<init>(r14)
            return r11
        L32:
            return r0
    }

    private android.graphics.Bitmap decodeFirstFrame(com.bumptech.glide.gifdecoder.GifDecoder r1, com.bumptech.glide.gifdecoder.GifHeader r2, byte[] r3) {
            r0 = this;
            r1.setData(r2, r3)
            r1.advance()
            android.graphics.Bitmap r1 = r1.getNextFrame()
            return r1
    }

    private static byte[] inputStreamToBytes(java.io.InputStream r4) {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r1 = 16384(0x4000, float:2.2959E-41)
            r0.<init>(r1)
            byte[] r1 = new byte[r1]     // Catch: java.io.IOException -> L19
        L9:
            int r2 = r4.read(r1)     // Catch: java.io.IOException -> L19
            r3 = -1
            if (r2 == r3) goto L15
            r3 = 0
            r0.write(r1, r3, r2)     // Catch: java.io.IOException -> L19
            goto L9
        L15:
            r0.flush()     // Catch: java.io.IOException -> L19
            goto L21
        L19:
            r4 = move-exception
            java.lang.String r1 = "GifResourceDecoder"
            java.lang.String r2 = "Error reading data from stream"
            android.util.Log.w(r1, r2, r4)
        L21:
            byte[] r4 = r0.toByteArray()
            return r4
    }

    @Override
    public com.bumptech.glide.load.engine.Resource<com.bumptech.glide.load.resource.gif.GifDrawable> decode(java.io.InputStream r1, int r2, int r3) throws java.io.IOException {
            r0 = this;
            java.io.InputStream r1 = (java.io.InputStream) r1
            com.bumptech.glide.load.resource.gif.GifDrawableResource r1 = r0.decode(r1, r2, r3)
            return r1
    }

    public com.bumptech.glide.load.resource.gif.GifDrawableResource decode(java.io.InputStream r8, int r9, int r10) {
            r7 = this;
            byte[] r1 = inputStreamToBytes(r8)
            com.bumptech.glide.load.resource.gif.GifResourceDecoder$GifHeaderParserPool r8 = r7.parserPool
            com.bumptech.glide.gifdecoder.GifHeaderParser r8 = r8.obtain(r1)
            com.bumptech.glide.load.resource.gif.GifResourceDecoder$GifDecoderPool r0 = r7.decoderPool
            com.bumptech.glide.load.resource.gif.GifBitmapProvider r2 = r7.provider
            com.bumptech.glide.gifdecoder.GifDecoder r6 = r0.obtain(r2)
            r0 = r7
            r2 = r9
            r3 = r10
            r4 = r8
            r5 = r6
            com.bumptech.glide.load.resource.gif.GifDrawableResource r9 = r0.decode(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L26
            com.bumptech.glide.load.resource.gif.GifResourceDecoder$GifHeaderParserPool r10 = r7.parserPool
            r10.release(r8)
            com.bumptech.glide.load.resource.gif.GifResourceDecoder$GifDecoderPool r8 = r7.decoderPool
            r8.release(r6)
            return r9
        L26:
            r9 = move-exception
            com.bumptech.glide.load.resource.gif.GifResourceDecoder$GifHeaderParserPool r10 = r7.parserPool
            r10.release(r8)
            com.bumptech.glide.load.resource.gif.GifResourceDecoder$GifDecoderPool r8 = r7.decoderPool
            r8.release(r6)
            throw r9
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }
}
