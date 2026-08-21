package com.bumptech.glide.load.resource.transcode;

public class GlideBitmapDrawableTranscoder implements com.bumptech.glide.load.resource.transcode.ResourceTranscoder<android.graphics.Bitmap, com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable> {
    private final com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool bitmapPool;
    private final android.content.res.Resources resources;

    public GlideBitmapDrawableTranscoder(android.content.Context r2) {
            r1 = this;
            android.content.res.Resources r0 = r2.getResources()
            com.bumptech.glide.Glide r2 = com.bumptech.glide.Glide.get(r2)
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2 = r2.getBitmapPool()
            r1.<init>(r0, r2)
            return
    }

    public GlideBitmapDrawableTranscoder(android.content.res.Resources r1, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2) {
            r0 = this;
            r0.<init>()
            r0.resources = r1
            r0.bitmapPool = r2
            return
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = "GlideBitmapDrawableTranscoder.com.bumptech.glide.load.resource.transcode"
            return r0
    }

    @Override
    public com.bumptech.glide.load.engine.Resource<com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable> transcode(com.bumptech.glide.load.engine.Resource<android.graphics.Bitmap> r3) {
            r2 = this;
            com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable r0 = new com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable
            android.content.res.Resources r1 = r2.resources
            java.lang.Object r3 = r3.get()
            android.graphics.Bitmap r3 = (android.graphics.Bitmap) r3
            r0.<init>(r1, r3)
            com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawableResource r3 = new com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawableResource
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r1 = r2.bitmapPool
            r3.<init>(r0, r1)
            return r3
    }
}
