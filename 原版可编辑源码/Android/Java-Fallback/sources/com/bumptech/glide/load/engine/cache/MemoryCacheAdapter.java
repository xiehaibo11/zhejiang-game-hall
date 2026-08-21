package com.bumptech.glide.load.engine.cache;

public class MemoryCacheAdapter implements com.bumptech.glide.load.engine.cache.MemoryCache {
    private com.bumptech.glide.load.engine.cache.MemoryCache.ResourceRemovedListener listener;

    public MemoryCacheAdapter() {
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
    public int getCurrentSize() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public int getMaxSize() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public com.bumptech.glide.load.engine.Resource<?> put(com.bumptech.glide.load.Key r1, com.bumptech.glide.load.engine.Resource<?> r2) {
            r0 = this;
            com.bumptech.glide.load.engine.cache.MemoryCache$ResourceRemovedListener r1 = r0.listener
            r1.onResourceRemoved(r2)
            r1 = 0
            return r1
    }

    @Override
    public com.bumptech.glide.load.engine.Resource<?> remove(com.bumptech.glide.load.Key r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void setResourceRemovedListener(com.bumptech.glide.load.engine.cache.MemoryCache.ResourceRemovedListener r1) {
            r0 = this;
            r0.listener = r1
            return
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
