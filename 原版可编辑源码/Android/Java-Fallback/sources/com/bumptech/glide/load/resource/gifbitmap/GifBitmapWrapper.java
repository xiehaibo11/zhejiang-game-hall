package com.bumptech.glide.load.resource.gifbitmap;

public class GifBitmapWrapper {
    private final com.bumptech.glide.load.engine.Resource<android.graphics.Bitmap> bitmapResource;
    private final com.bumptech.glide.load.engine.Resource<com.bumptech.glide.load.resource.gif.GifDrawable> gifResource;

    public GifBitmapWrapper(com.bumptech.glide.load.engine.Resource<android.graphics.Bitmap> r1, com.bumptech.glide.load.engine.Resource<com.bumptech.glide.load.resource.gif.GifDrawable> r2) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto L10
            if (r2 != 0) goto L8
            goto L10
        L8:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "Can only contain either a bitmap resource or a gif resource, not both"
            r1.<init>(r2)
            throw r1
        L10:
            if (r1 != 0) goto L1d
            if (r2 == 0) goto L15
            goto L1d
        L15:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "Must contain either a bitmap resource or a gif resource"
            r1.<init>(r2)
            throw r1
        L1d:
            r0.bitmapResource = r1
            r0.gifResource = r2
            return
    }

    public com.bumptech.glide.load.engine.Resource<android.graphics.Bitmap> getBitmapResource() {
            r1 = this;
            com.bumptech.glide.load.engine.Resource<android.graphics.Bitmap> r0 = r1.bitmapResource
            return r0
    }

    public com.bumptech.glide.load.engine.Resource<com.bumptech.glide.load.resource.gif.GifDrawable> getGifResource() {
            r1 = this;
            com.bumptech.glide.load.engine.Resource<com.bumptech.glide.load.resource.gif.GifDrawable> r0 = r1.gifResource
            return r0
    }

    public int getSize() {
            r1 = this;
            com.bumptech.glide.load.engine.Resource<android.graphics.Bitmap> r0 = r1.bitmapResource
            if (r0 == 0) goto L9
            int r0 = r0.getSize()
            return r0
        L9:
            com.bumptech.glide.load.engine.Resource<com.bumptech.glide.load.resource.gif.GifDrawable> r0 = r1.gifResource
            int r0 = r0.getSize()
            return r0
    }
}
