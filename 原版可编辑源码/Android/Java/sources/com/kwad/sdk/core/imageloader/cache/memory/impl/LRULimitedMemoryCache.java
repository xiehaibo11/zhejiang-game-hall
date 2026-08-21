package com.kwad.sdk.core.imageloader.cache.memory.impl;

import com.kwad.sdk.core.imageloader.cache.memory.LimitedMemoryCache;
import com.kwad.sdk.core.imageloader.core.decode.DecodedResult;
import java.lang.ref.Reference;
import java.lang.ref.WeakReference;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;

public class LRULimitedMemoryCache extends LimitedMemoryCache {
    private static final int INITIAL_CAPACITY = 10;
    private static final float LOAD_FACTOR = 1.1f;
    private final Map<String, DecodedResult> lruCache;

    public LRULimitedMemoryCache(int i) {
        super(i);
        this.lruCache = Collections.synchronizedMap(new LinkedHashMap(10, LOAD_FACTOR, true));
    }

    @Override
    public void clear() {
        this.lruCache.clear();
        super.clear();
    }

    @Override
    public Reference<DecodedResult> createReference(DecodedResult decodedResult) {
        return new WeakReference(decodedResult);
    }

    @Override
    public DecodedResult get(String str) {
        this.lruCache.get(str);
        return super.get(str);
    }

    @Override
    public int getSize(DecodedResult decodedResult) {
        return decodedResult.getByteSize();
    }

    @Override
    public boolean put(String str, DecodedResult decodedResult) {
        if (!super.put(str, decodedResult)) {
            return false;
        }
        this.lruCache.put(str, decodedResult);
        return true;
    }

    @Override
    public DecodedResult remove(String str) {
        this.lruCache.remove(str);
        return super.remove(str);
    }

    @Override
    public DecodedResult removeNext() {
        DecodedResult value;
        synchronized (this.lruCache) {
            Iterator<Map.Entry<String, DecodedResult>> it = this.lruCache.entrySet().iterator();
            if (it.hasNext()) {
                value = it.next().getValue();
                it.remove();
            } else {
                value = null;
            }
        }
        return value;
    }
}
