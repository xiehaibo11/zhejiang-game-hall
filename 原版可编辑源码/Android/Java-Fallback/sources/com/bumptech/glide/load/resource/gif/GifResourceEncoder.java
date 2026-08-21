package com.bumptech.glide.load.resource.gif;

public class GifResourceEncoder implements com.bumptech.glide.load.ResourceEncoder<com.bumptech.glide.load.resource.gif.GifDrawable> {
    private static final com.bumptech.glide.load.resource.gif.GifResourceEncoder.Factory FACTORY = null;
    private static final java.lang.String TAG = "GifEncoder";
    private final com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool bitmapPool;
    private final com.bumptech.glide.load.resource.gif.GifResourceEncoder.Factory factory;
    private final com.bumptech.glide.gifdecoder.GifDecoder.BitmapProvider provider;

    static class Factory {
        Factory() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.bumptech.glide.gifdecoder.GifDecoder buildDecoder(com.bumptech.glide.gifdecoder.GifDecoder.BitmapProvider r2) {
                r1 = this;
                com.bumptech.glide.gifdecoder.GifDecoder r0 = new com.bumptech.glide.gifdecoder.GifDecoder
                r0.<init>(r2)
                return r0
        }

        public com.bumptech.glide.gifencoder.AnimatedGifEncoder buildEncoder() {
                r1 = this;
                com.bumptech.glide.gifencoder.AnimatedGifEncoder r0 = new com.bumptech.glide.gifencoder.AnimatedGifEncoder
                r0.<init>()
                return r0
        }

        public com.bumptech.glide.load.engine.Resource<android.graphics.Bitmap> buildFrameResource(android.graphics.Bitmap r2, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r3) {
                r1 = this;
                com.bumptech.glide.load.resource.bitmap.BitmapResource r0 = new com.bumptech.glide.load.resource.bitmap.BitmapResource
                r0.<init>(r2, r3)
                return r0
        }

        public com.bumptech.glide.gifdecoder.GifHeaderParser buildParser() {
                r1 = this;
                com.bumptech.glide.gifdecoder.GifHeaderParser r0 = new com.bumptech.glide.gifdecoder.GifHeaderParser
                r0.<init>()
                return r0
        }
    }

    static {
            com.bumptech.glide.load.resource.gif.GifResourceEncoder$Factory r0 = new com.bumptech.glide.load.resource.gif.GifResourceEncoder$Factory
            r0.<init>()
            com.bumptech.glide.load.resource.gif.GifResourceEncoder.FACTORY = r0
            return
    }

    public GifResourceEncoder(com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2) {
            r1 = this;
            com.bumptech.glide.load.resource.gif.GifResourceEncoder$Factory r0 = com.bumptech.glide.load.resource.gif.GifResourceEncoder.FACTORY
            r1.<init>(r2, r0)
            return
    }

    GifResourceEncoder(com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2, com.bumptech.glide.load.resource.gif.GifResourceEncoder.Factory r3) {
            r1 = this;
            r1.<init>()
            r1.bitmapPool = r2
            com.bumptech.glide.load.resource.gif.GifBitmapProvider r0 = new com.bumptech.glide.load.resource.gif.GifBitmapProvider
            r0.<init>(r2)
            r1.provider = r0
            r1.factory = r3
            return
    }

    private com.bumptech.glide.gifdecoder.GifDecoder decodeHeaders(byte[] r4) {
            r3 = this;
            com.bumptech.glide.load.resource.gif.GifResourceEncoder$Factory r0 = r3.factory
            com.bumptech.glide.gifdecoder.GifHeaderParser r0 = r0.buildParser()
            r0.setData(r4)
            com.bumptech.glide.gifdecoder.GifHeader r0 = r0.parseHeader()
            com.bumptech.glide.load.resource.gif.GifResourceEncoder$Factory r1 = r3.factory
            com.bumptech.glide.gifdecoder.GifDecoder$BitmapProvider r2 = r3.provider
            com.bumptech.glide.gifdecoder.GifDecoder r1 = r1.buildDecoder(r2)
            r1.setData(r0, r4)
            r1.advance()
            return r1
    }

    private com.bumptech.glide.load.engine.Resource<android.graphics.Bitmap> getTransformedFrame(android.graphics.Bitmap r3, com.bumptech.glide.load.Transformation<android.graphics.Bitmap> r4, com.bumptech.glide.load.resource.gif.GifDrawable r5) {
            r2 = this;
            com.bumptech.glide.load.resource.gif.GifResourceEncoder$Factory r0 = r2.factory
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r1 = r2.bitmapPool
            com.bumptech.glide.load.engine.Resource r3 = r0.buildFrameResource(r3, r1)
            int r0 = r5.getIntrinsicWidth()
            int r5 = r5.getIntrinsicHeight()
            com.bumptech.glide.load.engine.Resource r4 = r4.transform(r3, r0, r5)
            boolean r5 = r3.equals(r4)
            if (r5 != 0) goto L1d
            r3.recycle()
        L1d:
            return r4
    }

    private boolean writeDataDirect(byte[] r2, java.io.OutputStream r3) {
            r1 = this;
            r3.write(r2)     // Catch: java.io.IOException -> L5
            r2 = 1
            goto L15
        L5:
            r2 = move-exception
            r3 = 3
            java.lang.String r0 = "GifEncoder"
            boolean r3 = android.util.Log.isLoggable(r0, r3)
            if (r3 == 0) goto L14
            java.lang.String r3 = "Failed to write data to output stream in GifResourceEncoder"
            android.util.Log.d(r0, r3, r2)
        L14:
            r2 = 0
        L15:
            return r2
    }

    public boolean encode(com.bumptech.glide.load.engine.Resource<com.bumptech.glide.load.resource.gif.GifDrawable> r9, java.io.OutputStream r10) {
            r8 = this;
            long r0 = com.bumptech.glide.util.LogTime.getLogTime()
            java.lang.Object r9 = r9.get()
            com.bumptech.glide.load.resource.gif.GifDrawable r9 = (com.bumptech.glide.load.resource.gif.GifDrawable) r9
            com.bumptech.glide.load.Transformation r2 = r9.getFrameTransformation()
            boolean r3 = r2 instanceof com.bumptech.glide.load.resource.UnitTransformation
            if (r3 == 0) goto L1b
            byte[] r9 = r9.getData()
            boolean r9 = r8.writeDataDirect(r9, r10)
            return r9
        L1b:
            byte[] r3 = r9.getData()
            com.bumptech.glide.gifdecoder.GifDecoder r3 = r8.decodeHeaders(r3)
            com.bumptech.glide.load.resource.gif.GifResourceEncoder$Factory r4 = r8.factory
            com.bumptech.glide.gifencoder.AnimatedGifEncoder r4 = r4.buildEncoder()
            boolean r10 = r4.start(r10)
            r5 = 0
            if (r10 != 0) goto L31
            return r5
        L31:
            r10 = 0
        L32:
            int r6 = r3.getFrameCount()
            if (r10 >= r6) goto L69
            android.graphics.Bitmap r6 = r3.getNextFrame()
            com.bumptech.glide.load.engine.Resource r6 = r8.getTransformedFrame(r6, r2, r9)
            java.lang.Object r7 = r6.get()     // Catch: java.lang.Throwable -> L64
            android.graphics.Bitmap r7 = (android.graphics.Bitmap) r7     // Catch: java.lang.Throwable -> L64
            boolean r7 = r4.addFrame(r7)     // Catch: java.lang.Throwable -> L64
            if (r7 != 0) goto L50
            r6.recycle()
            return r5
        L50:
            int r7 = r3.getCurrentFrameIndex()     // Catch: java.lang.Throwable -> L64
            int r7 = r3.getDelay(r7)     // Catch: java.lang.Throwable -> L64
            r4.setDelay(r7)     // Catch: java.lang.Throwable -> L64
            r3.advance()     // Catch: java.lang.Throwable -> L64
            r6.recycle()
            int r10 = r10 + 1
            goto L32
        L64:
            r9 = move-exception
            r6.recycle()
            throw r9
        L69:
            boolean r10 = r4.finish()
            r2 = 2
            java.lang.String r4 = "GifEncoder"
            boolean r2 = android.util.Log.isLoggable(r4, r2)
            if (r2 == 0) goto Lac
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r5 = "Encoded gif with "
            r2.append(r5)
            int r3 = r3.getFrameCount()
            r2.append(r3)
            java.lang.String r3 = " frames and "
            r2.append(r3)
            byte[] r9 = r9.getData()
            int r9 = r9.length
            r2.append(r9)
            java.lang.String r9 = " bytes in "
            r2.append(r9)
            double r0 = com.bumptech.glide.util.LogTime.getElapsedMillis(r0)
            r2.append(r0)
            java.lang.String r9 = " ms"
            r2.append(r9)
            java.lang.String r9 = r2.toString()
            android.util.Log.v(r4, r9)
        Lac:
            return r10
    }

    @Override
    public boolean encode(java.lang.Object r1, java.io.OutputStream r2) {
            r0 = this;
            com.bumptech.glide.load.engine.Resource r1 = (com.bumptech.glide.load.engine.Resource) r1
            boolean r1 = r0.encode(r1, r2)
            return r1
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }
}
