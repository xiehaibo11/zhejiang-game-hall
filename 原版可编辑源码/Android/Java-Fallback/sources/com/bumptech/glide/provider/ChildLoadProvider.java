package com.bumptech.glide.provider;

public class ChildLoadProvider<A, T, Z, R> implements com.bumptech.glide.provider.LoadProvider<A, T, Z, R>, java.lang.Cloneable {
    private com.bumptech.glide.load.ResourceDecoder<java.io.File, Z> cacheDecoder;
    private com.bumptech.glide.load.ResourceEncoder<Z> encoder;
    private final com.bumptech.glide.provider.LoadProvider<A, T, Z, R> parent;
    private com.bumptech.glide.load.ResourceDecoder<T, Z> sourceDecoder;
    private com.bumptech.glide.load.Encoder<T> sourceEncoder;
    private com.bumptech.glide.load.resource.transcode.ResourceTranscoder<Z, R> transcoder;

    public ChildLoadProvider(com.bumptech.glide.provider.LoadProvider<A, T, Z, R> r1) {
            r0 = this;
            r0.<init>()
            r0.parent = r1
            return
    }

    public com.bumptech.glide.provider.ChildLoadProvider<A, T, Z, R> clone() {
            r2 = this;
            java.lang.Object r0 = super.clone()     // Catch: java.lang.CloneNotSupportedException -> L7
            com.bumptech.glide.provider.ChildLoadProvider r0 = (com.bumptech.glide.provider.ChildLoadProvider) r0     // Catch: java.lang.CloneNotSupportedException -> L7
            return r0
        L7:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            r1.<init>(r0)
            throw r1
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            com.bumptech.glide.provider.ChildLoadProvider r0 = r1.clone()
            return r0
    }

    @Override
    public com.bumptech.glide.load.ResourceDecoder<java.io.File, Z> getCacheDecoder() {
            r1 = this;
            com.bumptech.glide.load.ResourceDecoder<java.io.File, Z> r0 = r1.cacheDecoder
            if (r0 == 0) goto L5
            return r0
        L5:
            com.bumptech.glide.provider.LoadProvider<A, T, Z, R> r0 = r1.parent
            com.bumptech.glide.load.ResourceDecoder r0 = r0.getCacheDecoder()
            return r0
    }

    @Override
    public com.bumptech.glide.load.ResourceEncoder<Z> getEncoder() {
            r1 = this;
            com.bumptech.glide.load.ResourceEncoder<Z> r0 = r1.encoder
            if (r0 == 0) goto L5
            return r0
        L5:
            com.bumptech.glide.provider.LoadProvider<A, T, Z, R> r0 = r1.parent
            com.bumptech.glide.load.ResourceEncoder r0 = r0.getEncoder()
            return r0
    }

    @Override
    public com.bumptech.glide.load.model.ModelLoader<A, T> getModelLoader() {
            r1 = this;
            com.bumptech.glide.provider.LoadProvider<A, T, Z, R> r0 = r1.parent
            com.bumptech.glide.load.model.ModelLoader r0 = r0.getModelLoader()
            return r0
    }

    @Override
    public com.bumptech.glide.load.ResourceDecoder<T, Z> getSourceDecoder() {
            r1 = this;
            com.bumptech.glide.load.ResourceDecoder<T, Z> r0 = r1.sourceDecoder
            if (r0 == 0) goto L5
            return r0
        L5:
            com.bumptech.glide.provider.LoadProvider<A, T, Z, R> r0 = r1.parent
            com.bumptech.glide.load.ResourceDecoder r0 = r0.getSourceDecoder()
            return r0
    }

    @Override
    public com.bumptech.glide.load.Encoder<T> getSourceEncoder() {
            r1 = this;
            com.bumptech.glide.load.Encoder<T> r0 = r1.sourceEncoder
            if (r0 == 0) goto L5
            return r0
        L5:
            com.bumptech.glide.provider.LoadProvider<A, T, Z, R> r0 = r1.parent
            com.bumptech.glide.load.Encoder r0 = r0.getSourceEncoder()
            return r0
    }

    @Override
    public com.bumptech.glide.load.resource.transcode.ResourceTranscoder<Z, R> getTranscoder() {
            r1 = this;
            com.bumptech.glide.load.resource.transcode.ResourceTranscoder<Z, R> r0 = r1.transcoder
            if (r0 == 0) goto L5
            return r0
        L5:
            com.bumptech.glide.provider.LoadProvider<A, T, Z, R> r0 = r1.parent
            com.bumptech.glide.load.resource.transcode.ResourceTranscoder r0 = r0.getTranscoder()
            return r0
    }

    public void setCacheDecoder(com.bumptech.glide.load.ResourceDecoder<java.io.File, Z> r1) {
            r0 = this;
            r0.cacheDecoder = r1
            return
    }

    public void setEncoder(com.bumptech.glide.load.ResourceEncoder<Z> r1) {
            r0 = this;
            r0.encoder = r1
            return
    }

    public void setSourceDecoder(com.bumptech.glide.load.ResourceDecoder<T, Z> r1) {
            r0 = this;
            r0.sourceDecoder = r1
            return
    }

    public void setSourceEncoder(com.bumptech.glide.load.Encoder<T> r1) {
            r0 = this;
            r0.sourceEncoder = r1
            return
    }

    public void setTranscoder(com.bumptech.glide.load.resource.transcode.ResourceTranscoder<Z, R> r1) {
            r0 = this;
            r0.transcoder = r1
            return
    }
}
