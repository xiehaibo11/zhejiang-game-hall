package com.bumptech.glide.load.resource.gifbitmap;

public class ImageVideoGifDrawableLoadProvider implements com.bumptech.glide.provider.DataLoadProvider<com.bumptech.glide.load.model.ImageVideoWrapper, com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> {
    private final com.bumptech.glide.load.ResourceDecoder<java.io.File, com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> cacheDecoder;
    private final com.bumptech.glide.load.ResourceEncoder<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> encoder;
    private final com.bumptech.glide.load.ResourceDecoder<com.bumptech.glide.load.model.ImageVideoWrapper, com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> sourceDecoder;
    private final com.bumptech.glide.load.Encoder<com.bumptech.glide.load.model.ImageVideoWrapper> sourceEncoder;

    public ImageVideoGifDrawableLoadProvider(com.bumptech.glide.provider.DataLoadProvider<com.bumptech.glide.load.model.ImageVideoWrapper, android.graphics.Bitmap> r4, com.bumptech.glide.provider.DataLoadProvider<java.io.InputStream, com.bumptech.glide.load.resource.gif.GifDrawable> r5, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r6) {
            r3 = this;
            r3.<init>()
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResourceDecoder r0 = new com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResourceDecoder
            com.bumptech.glide.load.ResourceDecoder r1 = r4.getSourceDecoder()
            com.bumptech.glide.load.ResourceDecoder r2 = r5.getSourceDecoder()
            r0.<init>(r1, r2, r6)
            com.bumptech.glide.load.resource.file.FileToStreamDecoder r6 = new com.bumptech.glide.load.resource.file.FileToStreamDecoder
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperStreamResourceDecoder r1 = new com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperStreamResourceDecoder
            r1.<init>(r0)
            r6.<init>(r1)
            r3.cacheDecoder = r6
            r3.sourceDecoder = r0
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResourceEncoder r6 = new com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperResourceEncoder
            com.bumptech.glide.load.ResourceEncoder r0 = r4.getEncoder()
            com.bumptech.glide.load.ResourceEncoder r5 = r5.getEncoder()
            r6.<init>(r0, r5)
            r3.encoder = r6
            com.bumptech.glide.load.Encoder r4 = r4.getSourceEncoder()
            r3.sourceEncoder = r4
            return
    }

    @Override
    public com.bumptech.glide.load.ResourceDecoder<java.io.File, com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> getCacheDecoder() {
            r1 = this;
            com.bumptech.glide.load.ResourceDecoder<java.io.File, com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> r0 = r1.cacheDecoder
            return r0
    }

    @Override
    public com.bumptech.glide.load.ResourceEncoder<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> getEncoder() {
            r1 = this;
            com.bumptech.glide.load.ResourceEncoder<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> r0 = r1.encoder
            return r0
    }

    @Override
    public com.bumptech.glide.load.ResourceDecoder<com.bumptech.glide.load.model.ImageVideoWrapper, com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> getSourceDecoder() {
            r1 = this;
            com.bumptech.glide.load.ResourceDecoder<com.bumptech.glide.load.model.ImageVideoWrapper, com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> r0 = r1.sourceDecoder
            return r0
    }

    @Override
    public com.bumptech.glide.load.Encoder<com.bumptech.glide.load.model.ImageVideoWrapper> getSourceEncoder() {
            r1 = this;
            com.bumptech.glide.load.Encoder<com.bumptech.glide.load.model.ImageVideoWrapper> r0 = r1.sourceEncoder
            return r0
    }
}
