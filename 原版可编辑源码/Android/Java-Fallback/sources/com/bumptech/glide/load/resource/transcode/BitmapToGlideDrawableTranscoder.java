package com.bumptech.glide.load.resource.transcode;

public class BitmapToGlideDrawableTranscoder implements com.bumptech.glide.load.resource.transcode.ResourceTranscoder<android.graphics.Bitmap, com.bumptech.glide.load.resource.drawable.GlideDrawable> {
    private final com.bumptech.glide.load.resource.transcode.GlideBitmapDrawableTranscoder glideBitmapDrawableTranscoder;

    public BitmapToGlideDrawableTranscoder(android.content.Context r2) {
            r1 = this;
            com.bumptech.glide.load.resource.transcode.GlideBitmapDrawableTranscoder r0 = new com.bumptech.glide.load.resource.transcode.GlideBitmapDrawableTranscoder
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    public BitmapToGlideDrawableTranscoder(com.bumptech.glide.load.resource.transcode.GlideBitmapDrawableTranscoder r1) {
            r0 = this;
            r0.<init>()
            r0.glideBitmapDrawableTranscoder = r1
            return
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            com.bumptech.glide.load.resource.transcode.GlideBitmapDrawableTranscoder r0 = r1.glideBitmapDrawableTranscoder
            java.lang.String r0 = r0.getId()
            return r0
    }

    @Override
    public com.bumptech.glide.load.engine.Resource<com.bumptech.glide.load.resource.drawable.GlideDrawable> transcode(com.bumptech.glide.load.engine.Resource<android.graphics.Bitmap> r2) {
            r1 = this;
            com.bumptech.glide.load.resource.transcode.GlideBitmapDrawableTranscoder r0 = r1.glideBitmapDrawableTranscoder
            com.bumptech.glide.load.engine.Resource r2 = r0.transcode(r2)
            return r2
    }
}
