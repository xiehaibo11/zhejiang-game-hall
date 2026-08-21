package com.bumptech.glide.request;

public interface RequestListener<T, R> {
    boolean onException(java.lang.Exception r1, T r2, com.bumptech.glide.request.target.Target<R> r3, boolean r4);

    boolean onResourceReady(R r1, T r2, com.bumptech.glide.request.target.Target<R> r3, boolean r4, boolean r5);
}
