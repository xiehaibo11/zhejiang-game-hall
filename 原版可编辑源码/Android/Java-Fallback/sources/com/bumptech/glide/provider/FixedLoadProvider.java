package com.bumptech.glide.provider;

public class FixedLoadProvider<A, T, Z, R> implements com.bumptech.glide.provider.LoadProvider<A, T, Z, R> {
    private final com.bumptech.glide.provider.DataLoadProvider<T, Z> dataLoadProvider;
    private final com.bumptech.glide.load.model.ModelLoader<A, T> modelLoader;
    private final com.bumptech.glide.load.resource.transcode.ResourceTranscoder<Z, R> transcoder;

    public FixedLoadProvider(com.bumptech.glide.load.model.ModelLoader<A, T> r1, com.bumptech.glide.load.resource.transcode.ResourceTranscoder<Z, R> r2, com.bumptech.glide.provider.DataLoadProvider<T, Z> r3) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto L20
            r0.modelLoader = r1
            if (r2 == 0) goto L18
            r0.transcoder = r2
            if (r3 == 0) goto L10
            r0.dataLoadProvider = r3
            return
        L10:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "DataLoadProvider must not be null"
            r1.<init>(r2)
            throw r1
        L18:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "Transcoder must not be null"
            r1.<init>(r2)
            throw r1
        L20:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "ModelLoader must not be null"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public com.bumptech.glide.load.ResourceDecoder<java.io.File, Z> getCacheDecoder() {
            r1 = this;
            com.bumptech.glide.provider.DataLoadProvider<T, Z> r0 = r1.dataLoadProvider
            com.bumptech.glide.load.ResourceDecoder r0 = r0.getCacheDecoder()
            return r0
    }

    @Override
    public com.bumptech.glide.load.ResourceEncoder<Z> getEncoder() {
            r1 = this;
            com.bumptech.glide.provider.DataLoadProvider<T, Z> r0 = r1.dataLoadProvider
            com.bumptech.glide.load.ResourceEncoder r0 = r0.getEncoder()
            return r0
    }

    @Override
    public com.bumptech.glide.load.model.ModelLoader<A, T> getModelLoader() {
            r1 = this;
            com.bumptech.glide.load.model.ModelLoader<A, T> r0 = r1.modelLoader
            return r0
    }

    @Override
    public com.bumptech.glide.load.ResourceDecoder<T, Z> getSourceDecoder() {
            r1 = this;
            com.bumptech.glide.provider.DataLoadProvider<T, Z> r0 = r1.dataLoadProvider
            com.bumptech.glide.load.ResourceDecoder r0 = r0.getSourceDecoder()
            return r0
    }

    @Override
    public com.bumptech.glide.load.Encoder<T> getSourceEncoder() {
            r1 = this;
            com.bumptech.glide.provider.DataLoadProvider<T, Z> r0 = r1.dataLoadProvider
            com.bumptech.glide.load.Encoder r0 = r0.getSourceEncoder()
            return r0
    }

    @Override
    public com.bumptech.glide.load.resource.transcode.ResourceTranscoder<Z, R> getTranscoder() {
            r1 = this;
            com.bumptech.glide.load.resource.transcode.ResourceTranscoder<Z, R> r0 = r1.transcoder
            return r0
    }
}
