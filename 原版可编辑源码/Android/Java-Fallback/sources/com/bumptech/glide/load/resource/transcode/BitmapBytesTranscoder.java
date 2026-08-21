package com.bumptech.glide.load.resource.transcode;

public class BitmapBytesTranscoder implements com.bumptech.glide.load.resource.transcode.ResourceTranscoder<android.graphics.Bitmap, byte[]> {
    private final android.graphics.Bitmap.CompressFormat compressFormat;
    private final int quality;

    public BitmapBytesTranscoder() {
            r2 = this;
            android.graphics.Bitmap$CompressFormat r0 = android.graphics.Bitmap.CompressFormat.JPEG
            r1 = 100
            r2.<init>(r0, r1)
            return
    }

    public BitmapBytesTranscoder(android.graphics.Bitmap.CompressFormat r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.compressFormat = r1
            r0.quality = r2
            return
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = "BitmapBytesTranscoder.com.bumptech.glide.load.resource.transcode"
            return r0
    }

    @Override
    public com.bumptech.glide.load.engine.Resource<byte[]> transcode(com.bumptech.glide.load.engine.Resource<android.graphics.Bitmap> r5) {
            r4 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            java.lang.Object r1 = r5.get()
            android.graphics.Bitmap r1 = (android.graphics.Bitmap) r1
            android.graphics.Bitmap$CompressFormat r2 = r4.compressFormat
            int r3 = r4.quality
            r1.compress(r2, r3, r0)
            r5.recycle()
            com.bumptech.glide.load.resource.bytes.BytesResource r5 = new com.bumptech.glide.load.resource.bytes.BytesResource
            byte[] r0 = r0.toByteArray()
            r5.<init>(r0)
            return r5
    }
}
