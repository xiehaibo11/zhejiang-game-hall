package com.bumptech.glide.load.resource.bitmap;

public class StreamBitmapDataLoadProvider implements com.bumptech.glide.provider.DataLoadProvider<java.io.InputStream, android.graphics.Bitmap> {
    private final com.bumptech.glide.load.resource.file.FileToStreamDecoder<android.graphics.Bitmap> cacheDecoder;
    private final com.bumptech.glide.load.resource.bitmap.StreamBitmapDecoder decoder;
    private final com.bumptech.glide.load.resource.bitmap.BitmapEncoder encoder;
    private final com.bumptech.glide.load.model.StreamEncoder sourceEncoder;

    public StreamBitmapDataLoadProvider(com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2, com.bumptech.glide.load.DecodeFormat r3) {
            r1 = this;
            r1.<init>()
            com.bumptech.glide.load.model.StreamEncoder r0 = new com.bumptech.glide.load.model.StreamEncoder
            r0.<init>()
            r1.sourceEncoder = r0
            com.bumptech.glide.load.resource.bitmap.StreamBitmapDecoder r0 = new com.bumptech.glide.load.resource.bitmap.StreamBitmapDecoder
            r0.<init>(r2, r3)
            r1.decoder = r0
            com.bumptech.glide.load.resource.bitmap.BitmapEncoder r2 = new com.bumptech.glide.load.resource.bitmap.BitmapEncoder
            r2.<init>()
            r1.encoder = r2
            com.bumptech.glide.load.resource.file.FileToStreamDecoder r2 = new com.bumptech.glide.load.resource.file.FileToStreamDecoder
            com.bumptech.glide.load.resource.bitmap.StreamBitmapDecoder r3 = r1.decoder
            r2.<init>(r3)
            r1.cacheDecoder = r2
            return
    }

    @Override
    public com.bumptech.glide.load.ResourceDecoder<java.io.File, android.graphics.Bitmap> getCacheDecoder() {
            r1 = this;
            com.bumptech.glide.load.resource.file.FileToStreamDecoder<android.graphics.Bitmap> r0 = r1.cacheDecoder
            return r0
    }

    @Override
    public com.bumptech.glide.load.ResourceEncoder<android.graphics.Bitmap> getEncoder() {
            r1 = this;
            com.bumptech.glide.load.resource.bitmap.BitmapEncoder r0 = r1.encoder
            return r0
    }

    @Override
    public com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, android.graphics.Bitmap> getSourceDecoder() {
            r1 = this;
            com.bumptech.glide.load.resource.bitmap.StreamBitmapDecoder r0 = r1.decoder
            return r0
    }

    @Override
    public com.bumptech.glide.load.Encoder<java.io.InputStream> getSourceEncoder() {
            r1 = this;
            com.bumptech.glide.load.model.StreamEncoder r0 = r1.sourceEncoder
            return r0
    }
}
