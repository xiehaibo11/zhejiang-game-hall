package com.bumptech.glide.provider;

public class EmptyDataLoadProvider<T, Z> implements com.bumptech.glide.provider.DataLoadProvider<T, Z> {
    private static final com.bumptech.glide.provider.DataLoadProvider<?, ?> EMPTY_DATA_LOAD_PROVIDER = null;

    static {
            com.bumptech.glide.provider.EmptyDataLoadProvider r0 = new com.bumptech.glide.provider.EmptyDataLoadProvider
            r0.<init>()
            com.bumptech.glide.provider.EmptyDataLoadProvider.EMPTY_DATA_LOAD_PROVIDER = r0
            return
    }

    public EmptyDataLoadProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <T, Z> com.bumptech.glide.provider.DataLoadProvider<T, Z> get() {
            com.bumptech.glide.provider.DataLoadProvider<?, ?> r0 = com.bumptech.glide.provider.EmptyDataLoadProvider.EMPTY_DATA_LOAD_PROVIDER
            return r0
    }

    @Override
    public com.bumptech.glide.load.ResourceDecoder<java.io.File, Z> getCacheDecoder() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public com.bumptech.glide.load.ResourceEncoder<Z> getEncoder() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public com.bumptech.glide.load.ResourceDecoder<T, Z> getSourceDecoder() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public com.bumptech.glide.load.Encoder<T> getSourceEncoder() {
            r1 = this;
            r0 = 0
            return r0
    }
}
