package com.bumptech.glide.load.resource.gifbitmap;

public class GifBitmapWrapperStreamResourceDecoder implements com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> {
    private final com.bumptech.glide.load.ResourceDecoder<com.bumptech.glide.load.model.ImageVideoWrapper, com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> gifBitmapDecoder;

    public GifBitmapWrapperStreamResourceDecoder(com.bumptech.glide.load.ResourceDecoder<com.bumptech.glide.load.model.ImageVideoWrapper, com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> r1) {
            r0 = this;
            r0.<init>()
            r0.gifBitmapDecoder = r1
            return
    }

    public com.bumptech.glide.load.engine.Resource<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> decode(java.io.InputStream r4, int r5, int r6) throws java.io.IOException {
            r3 = this;
            com.bumptech.glide.load.ResourceDecoder<com.bumptech.glide.load.model.ImageVideoWrapper, com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> r0 = r3.gifBitmapDecoder
            com.bumptech.glide.load.model.ImageVideoWrapper r1 = new com.bumptech.glide.load.model.ImageVideoWrapper
            r2 = 0
            r1.<init>(r4, r2)
            com.bumptech.glide.load.engine.Resource r4 = r0.decode(r1, r5, r6)
            return r4
    }

    @Override
    public com.bumptech.glide.load.engine.Resource<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> decode(java.io.InputStream r1, int r2, int r3) throws java.io.IOException {
            r0 = this;
            java.io.InputStream r1 = (java.io.InputStream) r1
            com.bumptech.glide.load.engine.Resource r1 = r0.decode(r1, r2, r3)
            return r1
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            com.bumptech.glide.load.ResourceDecoder<com.bumptech.glide.load.model.ImageVideoWrapper, com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> r0 = r1.gifBitmapDecoder
            java.lang.String r0 = r0.getId()
            return r0
    }
}
