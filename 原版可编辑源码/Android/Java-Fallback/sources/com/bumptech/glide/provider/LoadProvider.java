package com.bumptech.glide.provider;

public interface LoadProvider<A, T, Z, R> extends com.bumptech.glide.provider.DataLoadProvider<T, Z> {
    com.bumptech.glide.load.model.ModelLoader<A, T> getModelLoader();

    com.bumptech.glide.load.resource.transcode.ResourceTranscoder<Z, R> getTranscoder();
}
