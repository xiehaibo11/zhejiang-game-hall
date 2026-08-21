package com.bumptech.glide.load;

public interface Transformation<T> {
    java.lang.String getId();

    com.bumptech.glide.load.engine.Resource<T> transform(com.bumptech.glide.load.engine.Resource<T> r1, int r2, int r3);
}
