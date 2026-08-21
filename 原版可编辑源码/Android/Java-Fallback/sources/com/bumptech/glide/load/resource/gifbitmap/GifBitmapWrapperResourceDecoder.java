package com.bumptech.glide.load.resource.gifbitmap;

public class GifBitmapWrapperResourceDecoder implements com.bumptech.glide.load.ResourceDecoder<com.bumptech.glide.load.model.ImageVideoWrapper, com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> {
    private static final com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResourceDecoder.ImageTypeParser DEFAULT_PARSER = null;
    private static final com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResourceDecoder.BufferedStreamFactory DEFAULT_STREAM_FACTORY = null;
    static final int MARK_LIMIT_BYTES = 2048;
    private final com.bumptech.glide.load.ResourceDecoder<com.bumptech.glide.load.model.ImageVideoWrapper, android.graphics.Bitmap> bitmapDecoder;
    private final com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool bitmapPool;
    private final com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, com.bumptech.glide.load.resource.gif.GifDrawable> gifDecoder;
    private java.lang.String id;
    private final com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResourceDecoder.ImageTypeParser parser;
    private final com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResourceDecoder.BufferedStreamFactory streamFactory;

    static class BufferedStreamFactory {
        BufferedStreamFactory() {
                r0 = this;
                r0.<init>()
                return
        }

        public java.io.InputStream build(java.io.InputStream r2, byte[] r3) {
                r1 = this;
                com.bumptech.glide.load.resource.bitmap.RecyclableBufferedInputStream r0 = new com.bumptech.glide.load.resource.bitmap.RecyclableBufferedInputStream
                r0.<init>(r2, r3)
                return r0
        }
    }

    static class ImageTypeParser {
        ImageTypeParser() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType parse(java.io.InputStream r2) throws java.io.IOException {
                r1 = this;
                com.bumptech.glide.load.resource.bitmap.ImageHeaderParser r0 = new com.bumptech.glide.load.resource.bitmap.ImageHeaderParser
                r0.<init>(r2)
                com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r2 = r0.getType()
                return r2
        }
    }

    static {
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResourceDecoder$ImageTypeParser r0 = new com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResourceDecoder$ImageTypeParser
            r0.<init>()
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResourceDecoder.DEFAULT_PARSER = r0
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResourceDecoder$BufferedStreamFactory r0 = new com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResourceDecoder$BufferedStreamFactory
            r0.<init>()
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResourceDecoder.DEFAULT_STREAM_FACTORY = r0
            return
    }

    public GifBitmapWrapperResourceDecoder(com.bumptech.glide.load.ResourceDecoder<com.bumptech.glide.load.model.ImageVideoWrapper, android.graphics.Bitmap> r7, com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, com.bumptech.glide.load.resource.gif.GifDrawable> r8, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r9) {
            r6 = this;
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResourceDecoder$ImageTypeParser r4 = com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResourceDecoder.DEFAULT_PARSER
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResourceDecoder$BufferedStreamFactory r5 = com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResourceDecoder.DEFAULT_STREAM_FACTORY
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    GifBitmapWrapperResourceDecoder(com.bumptech.glide.load.ResourceDecoder<com.bumptech.glide.load.model.ImageVideoWrapper, android.graphics.Bitmap> r1, com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, com.bumptech.glide.load.resource.gif.GifDrawable> r2, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r3, com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResourceDecoder.ImageTypeParser r4, com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResourceDecoder.BufferedStreamFactory r5) {
            r0 = this;
            r0.<init>()
            r0.bitmapDecoder = r1
            r0.gifDecoder = r2
            r0.bitmapPool = r3
            r0.parser = r4
            r0.streamFactory = r5
            return
    }

    private com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper decode(com.bumptech.glide.load.model.ImageVideoWrapper r2, int r3, int r4, byte[] r5) throws java.io.IOException {
            r1 = this;
            java.io.InputStream r0 = r2.getStream()
            if (r0 == 0) goto Lb
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper r2 = r1.decodeStream(r2, r3, r4, r5)
            goto Lf
        Lb:
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper r2 = r1.decodeBitmapWrapper(r2, r3, r4)
        Lf:
            return r2
    }

    private com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper decodeBitmapWrapper(com.bumptech.glide.load.model.ImageVideoWrapper r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            com.bumptech.glide.load.ResourceDecoder<com.bumptech.glide.load.model.ImageVideoWrapper, android.graphics.Bitmap> r0 = r1.bitmapDecoder
            com.bumptech.glide.load.engine.Resource r2 = r0.decode(r2, r3, r4)
            r3 = 0
            if (r2 == 0) goto Lf
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper r4 = new com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper
            r4.<init>(r2, r3)
            r3 = r4
        Lf:
            return r3
    }

    private com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper decodeGifWrapper(java.io.InputStream r3, int r4, int r5) throws java.io.IOException {
            r2 = this;
            com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, com.bumptech.glide.load.resource.gif.GifDrawable> r0 = r2.gifDecoder
            com.bumptech.glide.load.engine.Resource r3 = r0.decode(r3, r4, r5)
            r4 = 0
            if (r3 == 0) goto L2d
            java.lang.Object r5 = r3.get()
            com.bumptech.glide.load.resource.gif.GifDrawable r5 = (com.bumptech.glide.load.resource.gif.GifDrawable) r5
            int r0 = r5.getFrameCount()
            r1 = 1
            if (r0 <= r1) goto L1c
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper r5 = new com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper
            r5.<init>(r4, r3)
            goto L2c
        L1c:
            com.bumptech.glide.load.resource.bitmap.BitmapResource r3 = new com.bumptech.glide.load.resource.bitmap.BitmapResource
            android.graphics.Bitmap r5 = r5.getFirstFrame()
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r0 = r2.bitmapPool
            r3.<init>(r5, r0)
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper r5 = new com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper
            r5.<init>(r3, r4)
        L2c:
            r4 = r5
        L2d:
            return r4
    }

    private com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper decodeStream(com.bumptech.glide.load.model.ImageVideoWrapper r3, int r4, int r5, byte[] r6) throws java.io.IOException {
            r2 = this;
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResourceDecoder$BufferedStreamFactory r0 = r2.streamFactory
            java.io.InputStream r1 = r3.getStream()
            java.io.InputStream r6 = r0.build(r1, r6)
            r0 = 2048(0x800, float:2.87E-42)
            r6.mark(r0)
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResourceDecoder$ImageTypeParser r0 = r2.parser
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r0 = r0.parse(r6)
            r6.reset()
            com.bumptech.glide.load.resource.bitmap.ImageHeaderParser$ImageType r1 = com.bumptech.glide.load.resource.bitmap.ImageHeaderParser.ImageType.GIF
            if (r0 != r1) goto L21
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper r0 = r2.decodeGifWrapper(r6, r4, r5)
            goto L22
        L21:
            r0 = 0
        L22:
            if (r0 != 0) goto L31
            com.bumptech.glide.load.model.ImageVideoWrapper r0 = new com.bumptech.glide.load.model.ImageVideoWrapper
            android.os.ParcelFileDescriptor r3 = r3.getFileDescriptor()
            r0.<init>(r6, r3)
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper r0 = r2.decodeBitmapWrapper(r0, r4, r5)
        L31:
            return r0
    }

    public com.bumptech.glide.load.engine.Resource<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> decode(com.bumptech.glide.load.model.ImageVideoWrapper r3, int r4, int r5) throws java.io.IOException {
            r2 = this;
            com.bumptech.glide.util.ByteArrayPool r0 = com.bumptech.glide.util.ByteArrayPool.get()
            byte[] r1 = r0.getBytes()
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper r3 = r2.decode(r3, r4, r5, r1)     // Catch: java.lang.Throwable -> L19
            r0.releaseBytes(r1)
            if (r3 == 0) goto L17
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResource r4 = new com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResource
            r4.<init>(r3)
            goto L18
        L17:
            r4 = 0
        L18:
            return r4
        L19:
            r3 = move-exception
            r0.releaseBytes(r1)
            throw r3
    }

    @Override
    public com.bumptech.glide.load.engine.Resource<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> decode(com.bumptech.glide.load.model.ImageVideoWrapper r1, int r2, int r3) throws java.io.IOException {
            r0 = this;
            com.bumptech.glide.load.model.ImageVideoWrapper r1 = (com.bumptech.glide.load.model.ImageVideoWrapper) r1
            com.bumptech.glide.load.engine.Resource r1 = r0.decode(r1, r2, r3)
            return r1
    }

    @Override
    public java.lang.String getId() {
            r2 = this;
            java.lang.String r0 = r2.id
            if (r0 != 0) goto L21
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, com.bumptech.glide.load.resource.gif.GifDrawable> r1 = r2.gifDecoder
            java.lang.String r1 = r1.getId()
            r0.append(r1)
            com.bumptech.glide.load.ResourceDecoder<com.bumptech.glide.load.model.ImageVideoWrapper, android.graphics.Bitmap> r1 = r2.bitmapDecoder
            java.lang.String r1 = r1.getId()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r2.id = r0
        L21:
            java.lang.String r0 = r2.id
            return r0
    }
}
