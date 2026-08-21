package com.bumptech.glide.load.resource.bitmap;

public interface BitmapDecoder<T> {
    android.graphics.Bitmap decode(T r1, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2, int r3, int r4, com.bumptech.glide.load.DecodeFormat r5) throws java.lang.Exception;

    java.lang.String getId();
}
