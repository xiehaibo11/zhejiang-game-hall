package com.bumptech.glide;

public class GifTypeRequest<ModelType> extends com.bumptech.glide.GifRequestBuilder<ModelType> {
    private final com.bumptech.glide.RequestManager.OptionsApplier optionsApplier;
    private final com.bumptech.glide.load.model.ModelLoader<ModelType, java.io.InputStream> streamModelLoader;

    GifTypeRequest(com.bumptech.glide.GenericRequestBuilder<ModelType, ?, ?, ?> r4, com.bumptech.glide.load.model.ModelLoader<ModelType, java.io.InputStream> r5, com.bumptech.glide.RequestManager.OptionsApplier r6) {
            r3 = this;
            com.bumptech.glide.Glide r0 = r4.glide
            java.lang.Class<com.bumptech.glide.load.resource.gif.GifDrawable> r1 = com.bumptech.glide.load.resource.gif.GifDrawable.class
            r2 = 0
            com.bumptech.glide.provider.FixedLoadProvider r0 = buildProvider(r0, r5, r1, r2)
            java.lang.Class<com.bumptech.glide.load.resource.gif.GifDrawable> r1 = com.bumptech.glide.load.resource.gif.GifDrawable.class
            r3.<init>(r0, r1, r4)
            r3.streamModelLoader = r5
            r3.optionsApplier = r6
            r3.crossFade()
            return
    }

    private static <A, R> com.bumptech.glide.provider.FixedLoadProvider<A, java.io.InputStream, com.bumptech.glide.load.resource.gif.GifDrawable, R> buildProvider(com.bumptech.glide.Glide r1, com.bumptech.glide.load.model.ModelLoader<A, java.io.InputStream> r2, java.lang.Class<R> r3, com.bumptech.glide.load.resource.transcode.ResourceTranscoder<com.bumptech.glide.load.resource.gif.GifDrawable, R> r4) {
            if (r2 != 0) goto L4
            r1 = 0
            return r1
        L4:
            if (r4 != 0) goto Lc
            java.lang.Class<com.bumptech.glide.load.resource.gif.GifDrawable> r4 = com.bumptech.glide.load.resource.gif.GifDrawable.class
            com.bumptech.glide.load.resource.transcode.ResourceTranscoder r4 = r1.buildTranscoder(r4, r3)
        Lc:
            java.lang.Class<java.io.InputStream> r3 = java.io.InputStream.class
            java.lang.Class<com.bumptech.glide.load.resource.gif.GifDrawable> r0 = com.bumptech.glide.load.resource.gif.GifDrawable.class
            com.bumptech.glide.provider.DataLoadProvider r1 = r1.buildDataProvider(r3, r0)
            com.bumptech.glide.provider.FixedLoadProvider r3 = new com.bumptech.glide.provider.FixedLoadProvider
            r3.<init>(r2, r4, r1)
            return r3
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, java.io.InputStream, com.bumptech.glide.load.resource.gif.GifDrawable, byte[]> toBytes() {
            r2 = this;
            com.bumptech.glide.load.resource.transcode.GifDrawableBytesTranscoder r0 = new com.bumptech.glide.load.resource.transcode.GifDrawableBytesTranscoder
            r0.<init>()
            java.lang.Class<byte[]> r1 = byte[].class
            com.bumptech.glide.GenericRequestBuilder r0 = r2.transcode(r0, r1)
            return r0
    }

    public <R> com.bumptech.glide.GenericRequestBuilder<ModelType, java.io.InputStream, com.bumptech.glide.load.resource.gif.GifDrawable, R> transcode(com.bumptech.glide.load.resource.transcode.ResourceTranscoder<com.bumptech.glide.load.resource.gif.GifDrawable, R> r3, java.lang.Class<R> r4) {
            r2 = this;
            com.bumptech.glide.Glide r0 = r2.glide
            com.bumptech.glide.load.model.ModelLoader<ModelType, java.io.InputStream> r1 = r2.streamModelLoader
            com.bumptech.glide.provider.FixedLoadProvider r3 = buildProvider(r0, r1, r4, r3)
            com.bumptech.glide.RequestManager$OptionsApplier r0 = r2.optionsApplier
            com.bumptech.glide.GenericRequestBuilder r1 = new com.bumptech.glide.GenericRequestBuilder
            r1.<init>(r3, r4, r2)
            com.bumptech.glide.GenericRequestBuilder r3 = r0.apply(r1)
            return r3
    }
}
