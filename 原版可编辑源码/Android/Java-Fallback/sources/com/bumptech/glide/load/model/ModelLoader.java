package com.bumptech.glide.load.model;

public interface ModelLoader<T, Y> {
    com.bumptech.glide.load.data.DataFetcher<Y> getResourceFetcher(T r1, int r2, int r3);
}
