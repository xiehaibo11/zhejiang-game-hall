package com.bumptech.glide.load.resource.bitmap;

public class FileDescriptorBitmapDecoder implements com.bumptech.glide.load.ResourceDecoder<android.os.ParcelFileDescriptor, android.graphics.Bitmap> {
    private final com.bumptech.glide.load.resource.bitmap.VideoBitmapDecoder bitmapDecoder;
    private final com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool bitmapPool;
    private com.bumptech.glide.load.DecodeFormat decodeFormat;

    public FileDescriptorBitmapDecoder(android.content.Context r2) {
            r1 = this;
            com.bumptech.glide.Glide r2 = com.bumptech.glide.Glide.get(r2)
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2 = r2.getBitmapPool()
            com.bumptech.glide.load.DecodeFormat r0 = com.bumptech.glide.load.DecodeFormat.DEFAULT
            r1.<init>(r2, r0)
            return
    }

    public FileDescriptorBitmapDecoder(android.content.Context r1, com.bumptech.glide.load.DecodeFormat r2) {
            r0 = this;
            com.bumptech.glide.Glide r1 = com.bumptech.glide.Glide.get(r1)
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r1 = r1.getBitmapPool()
            r0.<init>(r1, r2)
            return
    }

    public FileDescriptorBitmapDecoder(com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2, com.bumptech.glide.load.DecodeFormat r3) {
            r1 = this;
            com.bumptech.glide.load.resource.bitmap.VideoBitmapDecoder r0 = new com.bumptech.glide.load.resource.bitmap.VideoBitmapDecoder
            r0.<init>()
            r1.<init>(r0, r2, r3)
            return
    }

    public FileDescriptorBitmapDecoder(com.bumptech.glide.load.resource.bitmap.VideoBitmapDecoder r1, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2, com.bumptech.glide.load.DecodeFormat r3) {
            r0 = this;
            r0.<init>()
            r0.bitmapDecoder = r1
            r0.bitmapPool = r2
            r0.decodeFormat = r3
            return
    }

    public com.bumptech.glide.load.engine.Resource<android.graphics.Bitmap> decode(android.os.ParcelFileDescriptor r7, int r8, int r9) throws java.io.IOException {
            r6 = this;
            com.bumptech.glide.load.resource.bitmap.VideoBitmapDecoder r0 = r6.bitmapDecoder
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
    public com.bumptech.glide.load.engine.Resource<android.graphics.Bitmap> decode(android.os.ParcelFileDescriptor r1, int r2, int r3) throws java.io.IOException {
            r0 = this;
            android.os.ParcelFileDescriptor r1 = (android.os.ParcelFileDescriptor) r1
            com.bumptech.glide.load.engine.Resource r1 = r0.decode(r1, r2, r3)
            return r1
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = "FileDescriptorBitmapDecoder.com.bumptech.glide.load.data.bitmap"
            return r0
    }
}
