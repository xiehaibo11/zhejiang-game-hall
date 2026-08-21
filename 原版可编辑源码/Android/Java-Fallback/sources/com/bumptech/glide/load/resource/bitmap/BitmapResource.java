package com.bumptech.glide.load.resource.bitmap;

public class BitmapResource implements com.bumptech.glide.load.engine.Resource<android.graphics.Bitmap> {
    private final android.graphics.Bitmap bitmap;
    private final com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool bitmapPool;

    public BitmapResource(android.graphics.Bitmap r1, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto L14
            if (r2 == 0) goto Lc
            r0.bitmap = r1
            r0.bitmapPool = r2
            return
        Lc:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "BitmapPool must not be null"
            r1.<init>(r2)
            throw r1
        L14:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "Bitmap must not be null"
            r1.<init>(r2)
            throw r1
    }

    public static com.bumptech.glide.load.resource.bitmap.BitmapResource obtain(android.graphics.Bitmap r1, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.bumptech.glide.load.resource.bitmap.BitmapResource r0 = new com.bumptech.glide.load.resource.bitmap.BitmapResource
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public android.graphics.Bitmap get() {
            r1 = this;
            android.graphics.Bitmap r0 = r1.bitmap
            return r0
    }

    @Override
    public android.graphics.Bitmap get() {
            r1 = this;
            android.graphics.Bitmap r0 = r1.get()
            return r0
    }

    @Override
    public int getSize() {
            r1 = this;
            android.graphics.Bitmap r0 = r1.bitmap
            int r0 = com.bumptech.glide.util.Util.getBitmapByteSize(r0)
            return r0
    }

    @Override
    public void recycle() {
            r2 = this;
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r0 = r2.bitmapPool
            android.graphics.Bitmap r1 = r2.bitmap
            boolean r0 = r0.put(r1)
            if (r0 != 0) goto Lf
            android.graphics.Bitmap r0 = r2.bitmap
            r0.recycle()
        Lf:
            return
    }
}
