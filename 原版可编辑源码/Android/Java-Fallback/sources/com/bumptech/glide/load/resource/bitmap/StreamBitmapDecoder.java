package com.bumptech.glide.load.resource.bitmap;

public class StreamBitmapDecoder implements com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, android.graphics.Bitmap> {
    private static final java.lang.String ID = "StreamBitmapDecoder.com.bumptech.glide.load.resource.bitmap";
    private com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool bitmapPool;
    private com.bumptech.glide.load.DecodeFormat decodeFormat;
    private final com.bumptech.glide.load.resource.bitmap.Downsampler downsampler;
    private java.lang.String id;

    public StreamBitmapDecoder(android.content.Context r1) {
            r0 = this;
            com.bumptech.glide.Glide r1 = com.bumptech.glide.Glide.get(r1)
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r1 = r1.getBitmapPool()
            r0.<init>(r1)
            return
    }

    public StreamBitmapDecoder(android.content.Context r1, com.bumptech.glide.load.DecodeFormat r2) {
            r0 = this;
            com.bumptech.glide.Glide r1 = com.bumptech.glide.Glide.get(r1)
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r1 = r1.getBitmapPool()
            r0.<init>(r1, r2)
            return
    }

    public StreamBitmapDecoder(com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2) {
            r1 = this;
            com.bumptech.glide.load.DecodeFormat r0 = com.bumptech.glide.load.DecodeFormat.DEFAULT
            r1.<init>(r2, r0)
            return
    }

    public StreamBitmapDecoder(com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2, com.bumptech.glide.load.DecodeFormat r3) {
            r1 = this;
            com.bumptech.glide.load.resource.bitmap.Downsampler r0 = com.bumptech.glide.load.resource.bitmap.Downsampler.AT_LEAST
            r1.<init>(r0, r2, r3)
            return
    }

    public StreamBitmapDecoder(com.bumptech.glide.load.resource.bitmap.Downsampler r1, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2, com.bumptech.glide.load.DecodeFormat r3) {
            r0 = this;
            r0.<init>()
            r0.downsampler = r1
            r0.bitmapPool = r2
            r0.decodeFormat = r3
            return
    }

    public com.bumptech.glide.load.engine.Resource<android.graphics.Bitmap> decode(java.io.InputStream r7, int r8, int r9) {
            r6 = this;
            com.bumptech.glide.load.resource.bitmap.Downsampler r0 = r6.downsampler
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2 = r6.bitmapPool
            com.bumptech.glide.load.DecodeFormat r5 = r6.decodeFormat
            r1 = r7
            r3 = r8
            r4 = r9
            android.graphics.Bitmap r7 = r0.decode(r1, r2, r3, r4, r5)
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r8 = r6.bitmapPool
            com.bumptech.glide.load.resource.bitmap.BitmapResource r7 = com.bumptech.glide.load.resource.bitmap.BitmapResource.obtain(r7, r8)
            return r7
    }

    @Override
    public com.bumptech.glide.load.engine.Resource<android.graphics.Bitmap> decode(java.io.InputStream r1, int r2, int r3) throws java.io.IOException {
            r0 = this;
            java.io.InputStream r1 = (java.io.InputStream) r1
            com.bumptech.glide.load.engine.Resource r1 = r0.decode(r1, r2, r3)
            return r1
    }

    @Override
    public java.lang.String getId() {
            r2 = this;
            java.lang.String r0 = r2.id
            if (r0 != 0) goto L26
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "StreamBitmapDecoder.com.bumptech.glide.load.resource.bitmap"
            r0.append(r1)
            com.bumptech.glide.load.resource.bitmap.Downsampler r1 = r2.downsampler
            java.lang.String r1 = r1.getId()
            r0.append(r1)
            com.bumptech.glide.load.DecodeFormat r1 = r2.decodeFormat
            java.lang.String r1 = r1.name()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r2.id = r0
        L26:
            java.lang.String r0 = r2.id
            return r0
    }
}
