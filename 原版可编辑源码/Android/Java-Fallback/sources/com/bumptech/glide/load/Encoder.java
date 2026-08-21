package com.bumptech.glide.load;

public interface Encoder<T> {
    boolean encode(T r1, java.io.OutputStream r2);

    java.lang.String getId();
}
