package com.bumptech.glide.load.resource.transcode;

public class GifBitmapWrapperDrawableTranscoder implements com.bumptech.glide.load.resource.transcode.ResourceTranscoder<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper, com.bumptech.glide.load.resource.drawable.GlideDrawable> {
    private final com.bumptech.glide.load.resource.transcode.ResourceTranscoder<android.graphics.Bitmap, com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable> bitmapDrawableResourceTranscoder;

    public GifBitmapWrapperDrawableTranscoder(com.bumptech.glide.load.resource.transcode.ResourceTranscoder<android.graphics.Bitmap, com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable> r1) {
            r0 = this;
            r0.<init>()
            r0.bitmapDrawableResourceTranscoder = r1
            return
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = "GifBitmapWrapperDrawableTranscoder.com.bumptech.glide.load.resource.transcode"
            return r0
    }

    @Override
    public com.bumptech.glide.load.engine.Resource<com.bumptech.glide.load.resource.drawable.GlideDrawable> transcode(com.bumptech.glide.load.engine.Resource<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> r2) {
            r1 = this;
            java.lang.Object r2 = r2.get()
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper r2 = (com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper) r2
            com.bumptech.glide.load.engine.Resource r0 = r2.getBitmapResource()
            if (r0 == 0) goto L13
            com.bumptech.glide.load.resource.transcode.ResourceTranscoder<android.graphics.Bitmap, com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable> r2 = r1.bitmapDrawableResourceTranscoder
            com.bumptech.glide.load.engine.Resource r2 = r2.transcode(r0)
            goto L17
        L13:
            com.bumptech.glide.load.engine.Resource r2 = r2.getGifResource()
        L17:
            return r2
    }
}
