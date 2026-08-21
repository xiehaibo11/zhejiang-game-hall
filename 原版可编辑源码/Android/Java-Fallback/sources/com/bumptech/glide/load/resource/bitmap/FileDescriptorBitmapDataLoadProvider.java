package com.bumptech.glide.load.resource.bitmap;

public class FileDescriptorBitmapDataLoadProvider implements com.bumptech.glide.provider.DataLoadProvider<android.os.ParcelFileDescriptor, android.graphics.Bitmap> {
    private final com.bumptech.glide.load.ResourceDecoder<java.io.File, android.graphics.Bitmap> cacheDecoder;
    private final com.bumptech.glide.load.resource.bitmap.BitmapEncoder encoder;
    private final com.bumptech.glide.load.resource.bitmap.FileDescriptorBitmapDecoder sourceDecoder;
    private final com.bumptech.glide.load.Encoder<android.os.ParcelFileDescriptor> sourceEncoder;

    public FileDescriptorBitmapDataLoadProvider(com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r3, com.bumptech.glide.load.DecodeFormat r4) {
            r2 = this;
            r2.<init>()
            com.bumptech.glide.load.resource.file.FileToStreamDecoder r0 = new com.bumptech.glide.load.resource.file.FileToStreamDecoder
            com.bumptech.glide.load.resource.bitmap.StreamBitmapDecoder r1 = new com.bumptech.glide.load.resource.bitmap.StreamBitmapDecoder
            r1.<init>(r3, r4)
            r0.<init>(r1)
            r2.cacheDecoder = r0
            com.bumptech.glide.load.resource.bitmap.FileDescriptorBitmapDecoder r0 = new com.bumptech.glide.load.resource.bitmap.FileDescriptorBitmapDecoder
            r0.<init>(r3, r4)
            r2.sourceDecoder = r0
            com.bumptech.glide.load.resource.bitmap.BitmapEncoder r3 = new com.bumptech.glide.load.resource.bitmap.BitmapEncoder
            r3.<init>()
            r2.encoder = r3
            com.bumptech.glide.load.Encoder r3 = com.bumptech.glide.load.resource.NullEncoder.get()
            r2.sourceEncoder = r3
            return
    }

    @Override
    public com.bumptech.glide.load.ResourceDecoder<java.io.File, android.graphics.Bitmap> getCacheDecoder() {
            r1 = this;
            com.bumptech.glide.load.ResourceDecoder<java.io.File, android.graphics.Bitmap> r0 = r1.cacheDecoder
            return r0
    }

    @Override
    public com.bumptech.glide.load.ResourceEncoder<android.graphics.Bitmap> getEncoder() {
            r1 = this;
            com.bumptech.glide.load.resource.bitmap.BitmapEncoder r0 = r1.encoder
            return r0
    }

    @Override
    public com.bumptech.glide.load.ResourceDecoder<android.os.ParcelFileDescriptor, android.graphics.Bitmap> getSourceDecoder() {
            r1 = this;
            com.bumptech.glide.load.resource.bitmap.FileDescriptorBitmapDecoder r0 = r1.sourceDecoder
            return r0
    }

    @Override
    public com.bumptech.glide.load.Encoder<android.os.ParcelFileDescriptor> getSourceEncoder() {
            r1 = this;
            com.bumptech.glide.load.Encoder<android.os.ParcelFileDescriptor> r0 = r1.sourceEncoder
            return r0
    }
}
