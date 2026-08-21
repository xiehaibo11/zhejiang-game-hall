package com.bumptech.glide.load.engine.cache;

public class LruResourceCache extends com.bumptech.glide.util.LruCache<com.bumptech.glide.load.Key, com.bumptech.glide.load.engine.Resource<?>> implements com.bumptech.glide.load.engine.cache.MemoryCache {
    private com.bumptech.glide.load.engine.cache.MemoryCache.ResourceRemovedListener listener;

    public LruResourceCache(int r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    protected int getSize(com.bumptech.glide.load.engine.Resource<?> r1) {
            r0 = this;
            int r1 = r1.getSize()
            return r1
    }

    @Override
    protected int getSize(com.bumptech.glide.load.engine.Resource<?> r1) {
            r0 = this;
            com.bumptech.glide.load.engine.Resource r1 = (com.bumptech.glide.load.engine.Resource) r1
            int r1 = r0.getSize(r1)
            return r1
    }

    protected void onItemEvicted(com.bumptech.glide.load.Key r1, com.bumptech.glide.load.engine.Resource<?> r2) {
            r0 = this;
            com.bumptech.glide.load.engine.cache.MemoryCache$ResourceRemovedListener r1 = r0.listener
            if (r1 == 0) goto L7
            r1.onResourceRemoved(r2)
        L7:
            return
    }

    @Override
    protected void onItemEvicted(com.bumptech.glide.load.Key r1, com.bumptech.glide.load.engine.Resource<?> r2) {
            r0 = this;
            com.bumptech.glide.load.Key r1 = (com.bumptech.glide.load.Key) r1
            com.bumptech.glide.load.engine.Resource r2 = (com.bumptech.glide.load.engine.Resource) r2
            r0.onItemEvicted(r1, r2)
            return
    }

    @Override
    public com.bumptech.glide.load.engine.Resource put(com.bumptech.glide.load.Key r1, com.bumptech.glide.load.engine.Resource r2) {
            r0 = this;
            java.lang.Object r1 = super.put(r1, r2)
            com.bumptech.glide.load.engine.Resource r1 = (com.bumptech.glide.load.engine.Resource) r1
            return r1
    }

    @Override
    public com.bumptech.glide.load.engine.Resource remove(com.bumptech.glide.load.Key r1) {
            r0 = this;
            java.lang.Object r1 = super.remove(r1)
            com.bumptech.glide.load.engine.Resource r1 = (com.bumptech.glide.load.engine.Resource) r1
            return r1
    }

    @Override
    public void setResourceRemovedListener(com.bumptech.glide.load.engine.cache.MemoryCache.ResourceRemovedListener r1) {
            r0 = this;
            r0.listener = r1
            return
    }

    @Override
    public void trimMemory(int r2) {
            r1 = this;
            r0 = 60
            if (r2 < r0) goto L8
            r1.clearMemory()
            goto L15
        L8:
            r0 = 40
            if (r2 < r0) goto L15
            int r2 = r1.getCurrentSize()
            int r2 = r2 / 2
            r1.trimToSize(r2)
        L15:
            return
    }
}
