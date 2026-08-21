package com.bumptech.glide.load.engine.bitmap_recycle;

public class BitmapPoolAdapter implements com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool {
    public BitmapPoolAdapter() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void clearMemory() {
            r0 = this;
            return
    }

    @Override
    public android.graphics.Bitmap get(int r1, int r2, android.graphics.Bitmap.Config r3) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public android.graphics.Bitmap getDirty(int r1, int r2, android.graphics.Bitmap.Config r3) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public int getMaxSize() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public boolean put(android.graphics.Bitmap r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void setSizeMultiplier(float r1) {
            r0 = this;
            return
    }

    @Override
    public void trimMemory(int r1) {
            r0 = this;
            return
    }
}
