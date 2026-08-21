package com.bumptech.glide.load.resource;

import com.bumptech.glide.load.ResourceDecoder;
import com.bumptech.glide.load.engine.Resource;

public class NullDecoder<T, Z> implements ResourceDecoder<T, Z> {
    private static final NullDecoder<?, ?> NULL_DECODER = new NullDecoder<>();

    @Override
    public Resource<Z> decode(T t, int i, int i2) {
        return null;
    }

    @Override
    public String getId() {
        return "";
    }

    public static <T, Z> NullDecoder<T, Z> get() {
        return (NullDecoder<T, Z>) NULL_DECODER;
    }
}
