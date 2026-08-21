package com.bumptech.glide.load.engine.cache;

public interface MemoryCache {

    public interface ResourceRemovedListener {
        void onResourceRemoved(com.bumptech.glide.load.engine.Resource<?> r1);
    }

    void clearMemory();

    int getCurrentSize();

    int getMaxSize();

    com.bumptech.glide.load.engine.Resource<?> put(com.bumptech.glide.load.Key r1, com.bumptech.glide.load.engine.Resource<?> r2);

    com.bumptech.glide.load.engine.Resource<?> remove(com.bumptech.glide.load.Key r1);

    void setResourceRemovedListener(com.bumptech.glide.load.engine.cache.MemoryCache.ResourceRemovedListener r1);

    void setSizeMultiplier(float r1);

    void trimMemory(int r1);
}
