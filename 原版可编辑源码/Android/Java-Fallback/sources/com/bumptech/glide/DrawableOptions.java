package com.bumptech.glide;

interface DrawableOptions {
    com.bumptech.glide.GenericRequestBuilder<?, ?, ?, ?> crossFade();

    com.bumptech.glide.GenericRequestBuilder<?, ?, ?, ?> crossFade(int r1);

    com.bumptech.glide.GenericRequestBuilder<?, ?, ?, ?> crossFade(int r1, int r2);

    @java.lang.Deprecated
    com.bumptech.glide.GenericRequestBuilder<?, ?, ?, ?> crossFade(android.view.animation.Animation r1, int r2);
}
