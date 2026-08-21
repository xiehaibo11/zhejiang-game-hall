package com.bumptech.glide.load.resource.gifbitmap;

public class GifBitmapWrapperResource implements com.bumptech.glide.load.engine.Resource<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> {
    private final com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper data;

    public GifBitmapWrapperResource(com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper r2) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L8
            r1.data = r2
            return
        L8:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "Data must not be null"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper get() {
            r1 = this;
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper r0 = r1.data
            return r0
    }

    @Override
    public com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper get() {
            r1 = this;
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper r0 = r1.get()
            return r0
    }

    @Override
    public int getSize() {
            r1 = this;
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper r0 = r1.data
            int r0 = r0.getSize()
            return r0
    }

    @Override
    public void recycle() {
            r1 = this;
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper r0 = r1.data
            com.bumptech.glide.load.engine.Resource r0 = r0.getBitmapResource()
            if (r0 == 0) goto Lb
            r0.recycle()
        Lb:
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper r0 = r1.data
            com.bumptech.glide.load.engine.Resource r0 = r0.getGifResource()
            if (r0 == 0) goto L16
            r0.recycle()
        L16:
            return
    }
}
