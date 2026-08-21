package com.bumptech.glide.load.resource.gif;

public class GifDrawableResource extends com.bumptech.glide.load.resource.drawable.DrawableResource<com.bumptech.glide.load.resource.gif.GifDrawable> {
    public GifDrawableResource(com.bumptech.glide.load.resource.gif.GifDrawable r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public int getSize() {
            r2 = this;
            T extends android.graphics.drawable.Drawable r0 = r2.drawable
            com.bumptech.glide.load.resource.gif.GifDrawable r0 = (com.bumptech.glide.load.resource.gif.GifDrawable) r0
            byte[] r0 = r0.getData()
            int r0 = r0.length
            T extends android.graphics.drawable.Drawable r1 = r2.drawable
            com.bumptech.glide.load.resource.gif.GifDrawable r1 = (com.bumptech.glide.load.resource.gif.GifDrawable) r1
            android.graphics.Bitmap r1 = r1.getFirstFrame()
            int r1 = com.bumptech.glide.util.Util.getBitmapByteSize(r1)
            int r0 = r0 + r1
            return r0
    }

    @Override
    public void recycle() {
            r1 = this;
            T extends android.graphics.drawable.Drawable r0 = r1.drawable
            com.bumptech.glide.load.resource.gif.GifDrawable r0 = (com.bumptech.glide.load.resource.gif.GifDrawable) r0
            r0.stop()
            T extends android.graphics.drawable.Drawable r0 = r1.drawable
            com.bumptech.glide.load.resource.gif.GifDrawable r0 = (com.bumptech.glide.load.resource.gif.GifDrawable) r0
            r0.recycle()
            return
    }
}
