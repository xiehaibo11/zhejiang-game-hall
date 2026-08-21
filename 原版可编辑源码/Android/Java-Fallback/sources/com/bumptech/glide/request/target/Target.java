package com.bumptech.glide.request.target;

public interface Target<R> extends com.bumptech.glide.manager.LifecycleListener {
    public static final int SIZE_ORIGINAL = Integer.MIN_VALUE;

    com.bumptech.glide.request.Request getRequest();

    void getSize(com.bumptech.glide.request.target.SizeReadyCallback r1);

    void onLoadCleared(android.graphics.drawable.Drawable r1);

    void onLoadFailed(java.lang.Exception r1, android.graphics.drawable.Drawable r2);

    void onLoadStarted(android.graphics.drawable.Drawable r1);

    void onResourceReady(R r1, com.bumptech.glide.request.animation.GlideAnimation<? super R> r2);

    void setRequest(com.bumptech.glide.request.Request r1);
}
