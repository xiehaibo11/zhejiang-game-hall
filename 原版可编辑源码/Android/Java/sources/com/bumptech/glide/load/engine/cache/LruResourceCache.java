package com.bumptech.glide.load.engine.cache;

import com.bumptech.glide.load.Key;
import com.bumptech.glide.load.engine.Resource;
import com.bumptech.glide.load.engine.cache.MemoryCache;
import com.bumptech.glide.util.LruCache;

public class LruResourceCache extends LruCache<Key, Resource<?>> implements MemoryCache {
    private MemoryCache.ResourceRemovedListener listener;

    @Override
    public Resource put(Key key, Resource resource) {
        return (Resource) super.put(key, resource);
    }

    @Override
    public Resource remove(Key key) {
        return (Resource) super.remove(key);
    }

    public LruResourceCache(int i) {
        super(i);
    }

    @Override
    public void setResourceRemovedListener(MemoryCache.ResourceRemovedListener resourceRemovedListener) {
        this.listener = resourceRemovedListener;
    }

    @Override
    protected void onItemEvicted(Key key, Resource<?> resource) {
        MemoryCache.ResourceRemovedListener resourceRemovedListener = this.listener;
        if (resourceRemovedListener != null) {
            resourceRemovedListener.onResourceRemoved(resource);
        }
    }

    @Override
    protected int getSize(Resource<?> resource) {
        return resource.getSize();
    }

    @Override
    public void trimMemory(int i) {
        if (i >= 60) {
            clearMemory();
        } else if (i >= 40) {
            trimToSize(getCurrentSize() / 2);
        }
    }
}
