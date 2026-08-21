package com.bumptech.glide.load.resource.gifbitmap;

public class GifBitmapWrapperTransformation implements com.bumptech.glide.load.Transformation<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> {
    private final com.bumptech.glide.load.Transformation<android.graphics.Bitmap> bitmapTransformation;
    private final com.bumptech.glide.load.Transformation<com.bumptech.glide.load.resource.gif.GifDrawable> gifDataTransformation;

    GifBitmapWrapperTransformation(com.bumptech.glide.load.Transformation<android.graphics.Bitmap> r1, com.bumptech.glide.load.Transformation<com.bumptech.glide.load.resource.gif.GifDrawable> r2) {
            r0 = this;
            r0.<init>()
            r0.bitmapTransformation = r1
            r0.gifDataTransformation = r2
            return
    }

    public GifBitmapWrapperTransformation(com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2, com.bumptech.glide.load.Transformation<android.graphics.Bitmap> r3) {
            r1 = this;
            com.bumptech.glide.load.resource.gif.GifDrawableTransformation r0 = new com.bumptech.glide.load.resource.gif.GifDrawableTransformation
            r0.<init>(r3, r2)
            r1.<init>(r3, r0)
            return
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            com.bumptech.glide.load.Transformation<android.graphics.Bitmap> r0 = r1.bitmapTransformation
            java.lang.String r0 = r0.getId()
            return r0
    }

    @Override
    public com.bumptech.glide.load.engine.Resource<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> transform(com.bumptech.glide.load.engine.Resource<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> r4, int r5, int r6) {
            r3 = this;
            java.lang.Object r0 = r4.get()
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper r0 = (com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper) r0
            com.bumptech.glide.load.engine.Resource r0 = r0.getBitmapResource()
            java.lang.Object r1 = r4.get()
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper r1 = (com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper) r1
            com.bumptech.glide.load.engine.Resource r1 = r1.getGifResource()
            if (r0 == 0) goto L39
            com.bumptech.glide.load.Transformation<android.graphics.Bitmap> r2 = r3.bitmapTransformation
            if (r2 == 0) goto L39
            com.bumptech.glide.load.engine.Resource r5 = r2.transform(r0, r5, r6)
            boolean r6 = r0.equals(r5)
            if (r6 != 0) goto L5d
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper r6 = new com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper
            java.lang.Object r4 = r4.get()
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper r4 = (com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper) r4
            com.bumptech.glide.load.engine.Resource r4 = r4.getGifResource()
            r6.<init>(r5, r4)
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResource r4 = new com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResource
            r4.<init>(r6)
            return r4
        L39:
            if (r1 == 0) goto L5d
            com.bumptech.glide.load.Transformation<com.bumptech.glide.load.resource.gif.GifDrawable> r0 = r3.gifDataTransformation
            if (r0 == 0) goto L5d
            com.bumptech.glide.load.engine.Resource r5 = r0.transform(r1, r5, r6)
            boolean r6 = r1.equals(r5)
            if (r6 != 0) goto L5d
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper r6 = new com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper
            java.lang.Object r4 = r4.get()
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper r4 = (com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper) r4
            com.bumptech.glide.load.engine.Resource r4 = r4.getBitmapResource()
            r6.<init>(r4, r5)
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResource r4 = new com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResource
            r4.<init>(r6)
        L5d:
            return r4
    }
}
