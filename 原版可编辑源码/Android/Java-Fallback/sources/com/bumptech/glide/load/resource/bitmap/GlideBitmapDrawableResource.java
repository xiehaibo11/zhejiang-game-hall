package com.bumptech.glide.load.resource.bitmap;

public class GlideBitmapDrawableResource extends com.bumptech.glide.load.resource.drawable.DrawableResource<com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable> {
    private final com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool bitmapPool;

    public GlideBitmapDrawableResource(com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable r1, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2) {
            r0 = this;
            r0.<init>(r1)
            r0.bitmapPool = r2
            return
    }

    @Override
    public int getSize() {
            r1 = this;
            T extends android.graphics.drawable.Drawable r0 = r1.drawable
            com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable r0 = (com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable) r0
            android.graphics.Bitmap r0 = r0.getBitmap()
            int r0 = com.bumptech.glide.util.Util.getBitmapByteSize(r0)
            return r0
    }

    @Override
    public void recycle() {
            r2 = this;
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r0 = r2.bitmapPool
            T extends android.graphics.drawable.Drawable r1 = r2.drawable
            com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable r1 = (com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable) r1
            android.graphics.Bitmap r1 = r1.getBitmap()
            r0.put(r1)
            return
    }
}
