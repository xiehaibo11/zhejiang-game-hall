package com.bumptech.glide.load.resource.bitmap;

public class FitCenter extends com.bumptech.glide.load.resource.bitmap.BitmapTransformation {
    public FitCenter(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public FitCenter(com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = "FitCenter.com.bumptech.glide.load.resource.bitmap"
            return r0
    }

    @Override
    protected android.graphics.Bitmap transform(com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r1, android.graphics.Bitmap r2, int r3, int r4) {
            r0 = this;
            android.graphics.Bitmap r1 = com.bumptech.glide.load.resource.bitmap.TransformationUtils.fitCenter(r2, r1, r3, r4)
            return r1
    }
}
