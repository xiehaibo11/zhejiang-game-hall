package com.bumptech.glide.load.model;

public interface ModelLoaderFactory<T, Y> {
    com.bumptech.glide.load.model.ModelLoader<T, Y> build(android.content.Context r1, com.bumptech.glide.load.model.GenericLoaderFactory r2);

    void teardown();
}
