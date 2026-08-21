package com.bumptech.glide.load.resource.gif;

public class GifDrawableTransformation implements com.bumptech.glide.load.Transformation<com.bumptech.glide.load.resource.gif.GifDrawable> {
    private final com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool bitmapPool;
    private final com.bumptech.glide.load.Transformation<android.graphics.Bitmap> wrapped;

    public GifDrawableTransformation(com.bumptech.glide.load.Transformation<android.graphics.Bitmap> r1, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2) {
            r0 = this;
            r0.<init>()
            r0.wrapped = r1
            r0.bitmapPool = r2
            return
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            com.bumptech.glide.load.Transformation<android.graphics.Bitmap> r0 = r1.wrapped
            java.lang.String r0 = r0.getId()
            return r0
    }

    @Override
    public com.bumptech.glide.load.engine.Resource<com.bumptech.glide.load.resource.gif.GifDrawable> transform(com.bumptech.glide.load.engine.Resource<com.bumptech.glide.load.resource.gif.GifDrawable> r5, int r6, int r7) {
            r4 = this;
            java.lang.Object r0 = r5.get()
            com.bumptech.glide.load.resource.gif.GifDrawable r0 = (com.bumptech.glide.load.resource.gif.GifDrawable) r0
            java.lang.Object r1 = r5.get()
            com.bumptech.glide.load.resource.gif.GifDrawable r1 = (com.bumptech.glide.load.resource.gif.GifDrawable) r1
            android.graphics.Bitmap r1 = r1.getFirstFrame()
            com.bumptech.glide.load.resource.bitmap.BitmapResource r2 = new com.bumptech.glide.load.resource.bitmap.BitmapResource
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r3 = r4.bitmapPool
            r2.<init>(r1, r3)
            com.bumptech.glide.load.Transformation<android.graphics.Bitmap> r3 = r4.wrapped
            com.bumptech.glide.load.engine.Resource r6 = r3.transform(r2, r6, r7)
            java.lang.Object r6 = r6.get()
            android.graphics.Bitmap r6 = (android.graphics.Bitmap) r6
            boolean r7 = r6.equals(r1)
            if (r7 != 0) goto L35
            com.bumptech.glide.load.resource.gif.GifDrawableResource r5 = new com.bumptech.glide.load.resource.gif.GifDrawableResource
            com.bumptech.glide.load.resource.gif.GifDrawable r7 = new com.bumptech.glide.load.resource.gif.GifDrawable
            com.bumptech.glide.load.Transformation<android.graphics.Bitmap> r1 = r4.wrapped
            r7.<init>(r0, r6, r1)
            r5.<init>(r7)
        L35:
            return r5
    }
}
