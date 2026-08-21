package com.bumptech.glide.request;

public interface FutureTarget<R> extends java.util.concurrent.Future<R>, com.bumptech.glide.request.target.Target<R> {
    void clear();
}
