package com.bumptech.glide.provider;

public interface DataLoadProvider<T, Z> {
    com.bumptech.glide.load.ResourceDecoder<java.io.File, Z> getCacheDecoder();

    com.bumptech.glide.load.ResourceEncoder<Z> getEncoder();

    com.bumptech.glide.load.ResourceDecoder<T, Z> getSourceDecoder();

    com.bumptech.glide.load.Encoder<T> getSourceEncoder();
}
