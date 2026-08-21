package com.bumptech.glide.load.resource.gif;

class GifFrameResourceDecoder implements com.bumptech.glide.load.ResourceDecoder<com.bumptech.glide.gifdecoder.GifDecoder, android.graphics.Bitmap> {
    private final com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool bitmapPool;

    public GifFrameResourceDecoder(com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r1) {
            r0 = this;
            r0.<init>()
            r0.bitmapPool = r1
            return
    }

    public com.bumptech.glide.load.engine.Resource<android.graphics.Bitmap> decode(com.bumptech.glide.gifdecoder.GifDecoder r1, int r2, int r3) {
            r0 = this;
            android.graphics.Bitmap r1 = r1.getNextFrame()
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2 = r0.bitmapPool
            com.bumptech.glide.load.resource.bitmap.BitmapResource r1 = com.bumptech.glide.load.resource.bitmap.BitmapResource.obtain(r1, r2)
            return r1
    }

    @Override
    public com.bumptech.glide.load.engine.Resource<android.graphics.Bitmap> decode(com.bumptech.glide.gifdecoder.GifDecoder r1, int r2, int r3) throws java.io.IOException {
            r0 = this;
            com.bumptech.glide.gifdecoder.GifDecoder r1 = (com.bumptech.glide.gifdecoder.GifDecoder) r1
            com.bumptech.glide.load.engine.Resource r1 = r0.decode(r1, r2, r3)
            return r1
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = "GifFrameResourceDecoder.com.bumptech.glide.load.resource.gif"
            return r0
    }
}
