package com.bumptech.glide.load.resource.bitmap;

public abstract class BitmapTransformation implements com.bumptech.glide.load.Transformation<android.graphics.Bitmap> {
    private com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool bitmapPool;

    public BitmapTransformation(android.content.Context r1) {
            r0 = this;
            com.bumptech.glide.Glide r1 = com.bumptech.glide.Glide.get(r1)
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r1 = r1.getBitmapPool()
            r0.<init>(r1)
            return
    }

    public BitmapTransformation(com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r1) {
            r0 = this;
            r0.<init>()
            r0.bitmapPool = r1
            return
    }

    protected abstract android.graphics.Bitmap transform(com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r1, android.graphics.Bitmap r2, int r3, int r4);

    @Override
    public final com.bumptech.glide.load.engine.Resource<android.graphics.Bitmap> transform(com.bumptech.glide.load.engine.Resource<android.graphics.Bitmap> r3, int r4, int r5) {
            r2 = this;
            boolean r0 = com.bumptech.glide.util.Util.isValidDimensions(r4, r5)
            if (r0 == 0) goto L2e
            java.lang.Object r0 = r3.get()
            android.graphics.Bitmap r0 = (android.graphics.Bitmap) r0
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r4 != r1) goto L14
            int r4 = r0.getWidth()
        L14:
            if (r5 != r1) goto L1a
            int r5 = r0.getHeight()
        L1a:
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r1 = r2.bitmapPool
            android.graphics.Bitmap r4 = r2.transform(r1, r0, r4, r5)
            boolean r5 = r0.equals(r4)
            if (r5 == 0) goto L27
            goto L2d
        L27:
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r3 = r2.bitmapPool
            com.bumptech.glide.load.resource.bitmap.BitmapResource r3 = com.bumptech.glide.load.resource.bitmap.BitmapResource.obtain(r4, r3)
        L2d:
            return r3
        L2e:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Cannot apply transformation on width: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = " or height: "
            r0.append(r4)
            r0.append(r5)
            java.lang.String r4 = " less than or equal to zero and not Target.SIZE_ORIGINAL"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
    }
}
