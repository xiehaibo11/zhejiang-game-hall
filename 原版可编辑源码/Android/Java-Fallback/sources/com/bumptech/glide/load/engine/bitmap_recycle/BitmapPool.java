package com.bumptech.glide.load.engine.bitmap_recycle;

public interface BitmapPool {
    void clearMemory();

    android.graphics.Bitmap get(int r1, int r2, android.graphics.Bitmap.Config r3);

    android.graphics.Bitmap getDirty(int r1, int r2, android.graphics.Bitmap.Config r3);

    int getMaxSize();

    boolean put(android.graphics.Bitmap r1);

    void setSizeMultiplier(float r1);

    void trimMemory(int r1);
}
