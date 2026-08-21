package com.tkay.expressad.foundation.g.a;

import java.lang.ref.Reference;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public abstract class a<K, V> implements e<K, V> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected static final String f6868a = "cache";
    private final Map<K, Reference<V>> b = Collections.synchronizedMap(new HashMap());

    protected abstract Reference<V> c(V v);

    @Override // com.tkay.expressad.foundation.g.a.e
    public final V b(K k) {
        Reference<V> reference = this.b.get(k);
        if (reference != null) {
            return reference.get();
        }
        return null;
    }

    @Override // com.tkay.expressad.foundation.g.a.e
    public boolean a(K k, V v) {
        this.b.put(k, c(v));
        return true;
    }

    @Override // com.tkay.expressad.foundation.g.a.e
    public void a(K k) {
        this.b.remove(k);
    }

    @Override // com.tkay.expressad.foundation.g.a.e
    public final Collection<K> a() {
        HashSet hashSet;
        synchronized (this.b) {
            hashSet = new HashSet(this.b.keySet());
        }
        return hashSet;
    }

    @Override // com.tkay.expressad.foundation.g.a.e
    public void b() {
        this.b.clear();
    }
}
