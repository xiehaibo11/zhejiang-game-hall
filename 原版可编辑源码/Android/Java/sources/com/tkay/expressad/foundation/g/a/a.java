package com.tkay.expressad.foundation.g.a;

import java.lang.ref.Reference;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;

public abstract class a<K, V> implements e<K, V> {
    protected static final String a = "cache";
    private final Map<K, Reference<V>> b = Collections.synchronizedMap(new HashMap());

    protected abstract Reference<V> c(V v);

    @Override
    public final V b(K k) {
        Reference<V> reference = this.b.get(k);
        if (reference != null) {
            return reference.get();
        }
        return null;
    }

    @Override
    public boolean a(K k, V v) {
        this.b.put(k, c(v));
        return true;
    }

    @Override
    public void a(K k) {
        this.b.remove(k);
    }

    @Override
    public final Collection<K> a() {
        HashSet hashSet;
        synchronized (this.b) {
            hashSet = new HashSet(this.b.keySet());
        }
        return hashSet;
    }

    @Override
    public void b() {
        this.b.clear();
    }
}
