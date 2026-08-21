package com.bumptech.glide.load.data;

public interface DataFetcher<T> {
    void cancel();

    void cleanup();

    java.lang.String getId();

    T loadData(com.bumptech.glide.Priority r1) throws java.lang.Exception;
}
