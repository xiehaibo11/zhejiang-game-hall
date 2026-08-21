package com.bumptech.glide.load.resource.gifbitmap;

public class GifBitmapWrapperResourceEncoder implements com.bumptech.glide.load.ResourceEncoder<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> {
    private final com.bumptech.glide.load.ResourceEncoder<android.graphics.Bitmap> bitmapEncoder;
    private final com.bumptech.glide.load.ResourceEncoder<com.bumptech.glide.load.resource.gif.GifDrawable> gifEncoder;
    private java.lang.String id;

    public GifBitmapWrapperResourceEncoder(com.bumptech.glide.load.ResourceEncoder<android.graphics.Bitmap> r1, com.bumptech.glide.load.ResourceEncoder<com.bumptech.glide.load.resource.gif.GifDrawable> r2) {
            r0 = this;
            r0.<init>()
            r0.bitmapEncoder = r1
            r0.gifEncoder = r2
            return
    }

    public boolean encode(com.bumptech.glide.load.engine.Resource<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> r2, java.io.OutputStream r3) {
            r1 = this;
            java.lang.Object r2 = r2.get()
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper r2 = (com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper) r2
            com.bumptech.glide.load.engine.Resource r0 = r2.getBitmapResource()
            if (r0 == 0) goto L13
            com.bumptech.glide.load.ResourceEncoder<android.graphics.Bitmap> r2 = r1.bitmapEncoder
            boolean r2 = r2.encode(r0, r3)
            return r2
        L13:
            com.bumptech.glide.load.ResourceEncoder<com.bumptech.glide.load.resource.gif.GifDrawable> r0 = r1.gifEncoder
            com.bumptech.glide.load.engine.Resource r2 = r2.getGifResource()
            boolean r2 = r0.encode(r2, r3)
            return r2
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
            r2 = this;
            java.lang.String r0 = r2.id
            if (r0 != 0) goto L21
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.bumptech.glide.load.ResourceEncoder<android.graphics.Bitmap> r1 = r2.bitmapEncoder
            java.lang.String r1 = r1.getId()
            r0.append(r1)
            com.bumptech.glide.load.ResourceEncoder<com.bumptech.glide.load.resource.gif.GifDrawable> r1 = r2.gifEncoder
            java.lang.String r1 = r1.getId()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r2.id = r0
        L21:
            java.lang.String r0 = r2.id
            return r0
    }
}
