package com.kwad.sdk.core.imageloader.cache.memory;

import com.kwad.sdk.core.imageloader.core.decode.DecodedResult;
import java.lang.ref.Reference;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;

public abstract class BaseMemoryCache implements MemoryCache {
    private final Map<String, Reference<DecodedResult>> softMap = Collections.synchronizedMap(new HashMap());

    @Override
    public void clear() {
        this.softMap.clear();
    }

    protected abstract Reference<DecodedResult> createReference(DecodedResult decodedResult);

    @Override
    public DecodedResult get(String str) {
        Reference<DecodedResult> reference = this.softMap.get(str);
        if (reference != null) {
            return reference.get();
        }
        return null;
    }

    @Override
    public Collection<String> keys() {
        HashSet hashSet;
        synchronized (this.softMap) {
            hashSet = new HashSet(this.softMap.keySet());
        }
        return hashSet;
    }

    @Override
    public boolean put(String str, DecodedResult decodedResult) {
        this.softMap.put(str, createReference(decodedResult));
        return true;
    }

    @Override
    public DecodedResult remove(String str) {
        Reference<DecodedResult> referenceRemove = this.softMap.remove(str);
        if (referenceRemove == null) {
            return null;
        }
        return referenceRemove.get();
    }
}
