package com.kwad.sdk.core.imageloader.cache.memory.impl;

import com.kwad.sdk.core.imageloader.cache.memory.MemoryCache;
import com.kwad.sdk.core.imageloader.core.decode.DecodedResult;
import com.kwad.sdk.utils.ao;
import java.util.Collection;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.Map;

public class LruMemoryCache implements MemoryCache {
    private final LinkedHashMap<String, DecodedResult> map;
    private final int maxSize;
    private int size;

    public LruMemoryCache(int i) {
        if (i <= 0) {
            throw new IllegalArgumentException("maxSize <= 0");
        }
        this.maxSize = i;
        this.map = new LinkedHashMap<>(0, 0.75f, true);
    }

    private int sizeOf(String str, DecodedResult decodedResult) {
        return decodedResult.getByteSize();
    }

    /* JADX WARN: Code restructure failed: missing block: B:22:0x004f, code lost:
    
        return;
     */
    /* JADX WARN: Code restructure failed: missing block: B:24:0x006e, code lost:
    
        throw new java.lang.IllegalStateException(getClass().getName() + ".sizeOf() is reporting inconsistent results!");
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void trimToSize(int i) {
        while (true) {
            synchronized (this) {
                if (this.size >= 0 && (!this.map.isEmpty() || this.size == 0)) {
                    if (this.size <= i || this.map.isEmpty()) {
                        break;
                    }
                    Map.Entry<String, DecodedResult> next = this.map.entrySet().iterator().next();
                    if (next == null) {
                        return;
                    }
                    String key = next.getKey();
                    DecodedResult value = next.getValue();
                    this.map.remove(key);
                    this.size -= sizeOf(key, value);
                } else {
                    break;
                }
            }
        }
    }

    @Override
    public void clear() {
        trimToSize(-1);
    }

    @Override
    public final DecodedResult get(String str) {
        DecodedResult decodedResult;
        ao.au(str, "key");
        synchronized (this) {
            decodedResult = this.map.get(str);
        }
        return decodedResult;
    }

    @Override
    public Collection<String> keys() {
        HashSet hashSet;
        synchronized (this) {
            hashSet = new HashSet(this.map.keySet());
        }
        return hashSet;
    }

    @Override
    public final boolean put(String str, DecodedResult decodedResult) {
        ao.au(str, "key");
        ao.h(decodedResult, "value");
        synchronized (this) {
            this.size += sizeOf(str, decodedResult);
            DecodedResult decodedResultPut = this.map.put(str, decodedResult);
            if (decodedResultPut != null) {
                this.size -= sizeOf(str, decodedResultPut);
            }
        }
        trimToSize(this.maxSize);
        return true;
    }

    @Override
    public final DecodedResult remove(String str) {
        DecodedResult decodedResultRemove;
        ao.au(str, "key");
        synchronized (this) {
            decodedResultRemove = this.map.remove(str);
            if (decodedResultRemove != null) {
                this.size -= sizeOf(str, decodedResultRemove);
            }
        }
        return decodedResultRemove;
    }

    public final synchronized String toString() {
        return String.format("LruCache[maxSize=%d]", Integer.valueOf(this.maxSize));
    }
}
