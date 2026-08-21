package com.bumptech.glide.load.resource.gif;

public class GifDrawableLoadProvider implements com.bumptech.glide.provider.DataLoadProvider<java.io.InputStream, com.bumptech.glide.load.resource.gif.GifDrawable> {
    private final com.bumptech.glide.load.resource.file.FileToStreamDecoder<com.bumptech.glide.load.resource.gif.GifDrawable> cacheDecoder;
    private final com.bumptech.glide.load.resource.gif.GifResourceDecoder decoder;
    private final com.bumptech.glide.load.resource.gif.GifResourceEncoder encoder;
    private final com.bumptech.glide.load.model.StreamEncoder sourceEncoder;

    public GifDrawableLoadProvider(android.content.Context r2, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r3) {
            r1 = this;
            r1.<init>()
            com.bumptech.glide.load.resource.gif.GifResourceDecoder r0 = new com.bumptech.glide.load.resource.gif.GifResourceDecoder
            r0.<init>(r2, r3)
            r1.decoder = r0
            com.bumptech.glide.load.resource.file.FileToStreamDecoder r2 = new com.bumptech.glide.load.resource.file.FileToStreamDecoder
            com.bumptech.glide.load.resource.gif.GifResourceDecoder r0 = r1.decoder
            r2.<init>(r0)
            r1.cacheDecoder = r2
            com.bumptech.glide.load.resource.gif.GifResourceEncoder r2 = new com.bumptech.glide.load.resource.gif.GifResourceEncoder
            r2.<init>(r3)
            r1.encoder = r2
            com.bumptech.glide.load.model.StreamEncoder r2 = new com.bumptech.glide.load.model.StreamEncoder
            r2.<init>()
            r1.sourceEncoder = r2
            return
    }

    @Override
    public com.bumptech.glide.load.ResourceDecoder<java.io.File, com.bumptech.glide.load.resource.gif.GifDrawable> getCacheDecoder() {
            r1 = this;
            com.bumptech.glide.load.resource.file.FileToStreamDecoder<com.bumptech.glide.load.resource.gif.GifDrawable> r0 = r1.cacheDecoder
            return r0
    }

    @Override
    public com.bumptech.glide.load.ResourceEncoder<com.bumptech.glide.load.resource.gif.GifDrawable> getEncoder() {
            r1 = this;
            com.bumptech.glide.load.resource.gif.GifResourceEncoder r0 = r1.encoder
            return r0
    }

    @Override
    public com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, com.bumptech.glide.load.resource.gif.GifDrawable> getSourceDecoder() {
            r1 = this;
            com.bumptech.glide.load.resource.gif.GifResourceDecoder r0 = r1.decoder
            return r0
    }

    @Override
    public com.bumptech.glide.load.Encoder<java.io.InputStream> getSourceEncoder() {
            r1 = this;
            com.bumptech.glide.load.model.StreamEncoder r0 = r1.sourceEncoder
            return r0
    }
}
