package com.bumptech.glide.load.resource.gif;

class GifBitmapProvider implements com.bumptech.glide.gifdecoder.GifDecoder.BitmapProvider {
    private final com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool bitmapPool;

    public GifBitmapProvider(com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r1) {
            r0 = this;
            r0.<init>()
            r0.bitmapPool = r1
            return
    }

    @Override
    public android.graphics.Bitmap obtain(int r2, int r3, android.graphics.Bitmap.Config r4) {
            r1 = this;
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r0 = r1.bitmapPool
            android.graphics.Bitmap r2 = r0.getDirty(r2, r3, r4)
            return r2
    }

    @Override
    public void release(android.graphics.Bitmap r2) {
            r1 = this;
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r0 = r1.bitmapPool
            boolean r0 = r0.put(r2)
            if (r0 != 0) goto Lb
            r2.recycle()
        Lb:
            return
    }
}
