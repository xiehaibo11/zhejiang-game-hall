package com.bumptech.glide.load.resource.bitmap;

public class CenterCrop extends com.bumptech.glide.load.resource.bitmap.BitmapTransformation {
    public CenterCrop(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public CenterCrop(com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = "CenterCrop.com.bumptech.glide.load.resource.bitmap"
            return r0
    }

    @Override
    protected android.graphics.Bitmap transform(com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2, android.graphics.Bitmap r3, int r4, int r5) {
            r1 = this;
            android.graphics.Bitmap$Config r0 = r3.getConfig()
            if (r0 == 0) goto Lb
            android.graphics.Bitmap$Config r0 = r3.getConfig()
            goto Ld
        Lb:
            android.graphics.Bitmap$Config r0 = android.graphics.Bitmap.Config.ARGB_8888
        Ld:
            android.graphics.Bitmap r0 = r2.get(r4, r5, r0)
            android.graphics.Bitmap r3 = com.bumptech.glide.load.resource.bitmap.TransformationUtils.centerCrop(r0, r3, r4, r5)
            if (r0 == 0) goto L22
            if (r0 == r3) goto L22
            boolean r2 = r2.put(r0)
            if (r2 != 0) goto L22
            r0.recycle()
        L22:
            return r3
    }
}
