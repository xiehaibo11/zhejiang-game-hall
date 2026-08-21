package com.bumptech.glide.load.resource.bitmap;

public class BitmapEncoder implements com.bumptech.glide.load.ResourceEncoder<android.graphics.Bitmap> {
    private static final int DEFAULT_COMPRESSION_QUALITY = 90;
    private static final java.lang.String TAG = "BitmapEncoder";
    private android.graphics.Bitmap.CompressFormat compressFormat;
    private int quality;

    public BitmapEncoder() {
            r2 = this;
            r0 = 0
            r1 = 90
            r2.<init>(r0, r1)
            return
    }

    public BitmapEncoder(android.graphics.Bitmap.CompressFormat r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.compressFormat = r1
            r0.quality = r2
            return
    }

    private android.graphics.Bitmap.CompressFormat getFormat(android.graphics.Bitmap r2) {
            r1 = this;
            android.graphics.Bitmap$CompressFormat r0 = r1.compressFormat
            if (r0 == 0) goto L5
            return r0
        L5:
            boolean r2 = r2.hasAlpha()
            if (r2 == 0) goto Le
            android.graphics.Bitmap$CompressFormat r2 = android.graphics.Bitmap.CompressFormat.PNG
            return r2
        Le:
            android.graphics.Bitmap$CompressFormat r2 = android.graphics.Bitmap.CompressFormat.JPEG
            return r2
    }

    public boolean encode(com.bumptech.glide.load.engine.Resource<android.graphics.Bitmap> r6, java.io.OutputStream r7) {
            r5 = this;
            java.lang.Object r6 = r6.get()
            android.graphics.Bitmap r6 = (android.graphics.Bitmap) r6
            long r0 = com.bumptech.glide.util.LogTime.getLogTime()
            android.graphics.Bitmap$CompressFormat r2 = r5.getFormat(r6)
            int r3 = r5.quality
            r6.compress(r2, r3, r7)
            java.lang.String r7 = "BitmapEncoder"
            r3 = 2
            boolean r3 = android.util.Log.isLoggable(r7, r3)
            if (r3 == 0) goto L48
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Compressed with type: "
            r3.append(r4)
            r3.append(r2)
            java.lang.String r2 = " of size "
            r3.append(r2)
            int r6 = com.bumptech.glide.util.Util.getBitmapByteSize(r6)
            r3.append(r6)
            java.lang.String r6 = " in "
            r3.append(r6)
            double r0 = com.bumptech.glide.util.LogTime.getElapsedMillis(r0)
            r3.append(r0)
            java.lang.String r6 = r3.toString()
            android.util.Log.v(r7, r6)
        L48:
            r6 = 1
            return r6
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
            r1 = this;
            java.lang.String r0 = "BitmapEncoder.com.bumptech.glide.load.resource.bitmap"
            return r0
    }
}
