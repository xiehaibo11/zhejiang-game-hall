package com.bumptech.glide.load;

public interface ResourceDecoder<T, Z> {
    com.bumptech.glide.load.engine.Resource<Z> decode(T r1, int r2, int r3) throws java.io.IOException;

    java.lang.String getId();
}
