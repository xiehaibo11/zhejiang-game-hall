package com.bumptech.glide.load.resource.bitmap;

public class ImageVideoDataLoadProvider implements com.bumptech.glide.provider.DataLoadProvider<com.bumptech.glide.load.model.ImageVideoWrapper, android.graphics.Bitmap> {
    private final com.bumptech.glide.load.ResourceDecoder<java.io.File, android.graphics.Bitmap> cacheDecoder;
    private final com.bumptech.glide.load.ResourceEncoder<android.graphics.Bitmap> encoder;
    private final com.bumptech.glide.load.resource.bitmap.ImageVideoBitmapDecoder sourceDecoder;
    private final com.bumptech.glide.load.model.ImageVideoWrapperEncoder sourceEncoder;

    public ImageVideoDataLoadProvider(com.bumptech.glide.provider.DataLoadProvider<java.io.InputStream, android.graphics.Bitmap> r4, com.bumptech.glide.provider.DataLoadProvider<android.os.ParcelFileDescriptor, android.graphics.Bitmap> r5) {
            r3 = this;
            r3.<init>()
            com.bumptech.glide.load.ResourceEncoder r0 = r4.getEncoder()
            r3.encoder = r0
            com.bumptech.glide.load.model.ImageVideoWrapperEncoder r0 = new com.bumptech.glide.load.model.ImageVideoWrapperEncoder
            com.bumptech.glide.load.Encoder r1 = r4.getSourceEncoder()
            com.bumptech.glide.load.Encoder r2 = r5.getSourceEncoder()
            r0.<init>(r1, r2)
            r3.sourceEncoder = r0
            com.bumptech.glide.load.ResourceDecoder r0 = r4.getCacheDecoder()
            r3.cacheDecoder = r0
            com.bumptech.glide.load.resource.bitmap.ImageVideoBitmapDecoder r0 = new com.bumptech.glide.load.resource.bitmap.ImageVideoBitmapDecoder
            com.bumptech.glide.load.ResourceDecoder r4 = r4.getSourceDecoder()
            com.bumptech.glide.load.ResourceDecoder r5 = r5.getSourceDecoder()
            r0.<init>(r4, r5)
            r3.sourceDecoder = r0
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
            com.bumptech.glide.load.ResourceEncoder<android.graphics.Bitmap> r0 = r1.encoder
            return r0
    }

    @Override
    public com.bumptech.glide.load.ResourceDecoder<com.bumptech.glide.load.model.ImageVideoWrapper, android.graphics.Bitmap> getSourceDecoder() {
            r1 = this;
            com.bumptech.glide.load.resource.bitmap.ImageVideoBitmapDecoder r0 = r1.sourceDecoder
            return r0
    }

    @Override
    public com.bumptech.glide.load.Encoder<com.bumptech.glide.load.model.ImageVideoWrapper> getSourceEncoder() {
            r1 = this;
            com.bumptech.glide.load.model.ImageVideoWrapperEncoder r0 = r1.sourceEncoder
            return r0
    }
}
