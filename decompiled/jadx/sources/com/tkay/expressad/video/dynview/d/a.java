package com.tkay.expressad.video.dynview.d;

import java.lang.ref.ReferenceQueue;
import java.lang.ref.SoftReference;
import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
public final class a<K, V> extends HashMap<K, V> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ReferenceQueue<V> f7222a = new ReferenceQueue<>();
    private HashMap<K, a<K, V>.C0478a<K, V>> b = new HashMap<>();

    @Override // java.util.HashMap, java.util.AbstractMap, java.util.Map
    public final V get(Object obj) {
        a();
        a<K, V>.C0478a<K, V> c0478a = this.b.get(obj);
        if (c0478a == null) {
            return null;
        }
        return c0478a.get();
    }

    @Override // java.util.HashMap, java.util.AbstractMap, java.util.Map
    public final V put(K k, V v) {
        a();
        a<K, V>.C0478a<K, V> c0478aPut = this.b.put(k, new C0478a<>(k, v, this.f7222a));
        if (c0478aPut == null) {
            return null;
        }
        return c0478aPut.get();
    }

    @Override // java.util.HashMap, java.util.AbstractMap, java.util.Map
    public final boolean containsKey(Object obj) {
        a();
        return this.b.containsKey(obj);
    }

    @Override // java.util.HashMap, java.util.AbstractMap, java.util.Map
    public final V remove(Object obj) {
        a();
        a<K, V>.C0478a<K, V> c0478aRemove = this.b.remove(obj);
        if (c0478aRemove == null) {
            return null;
        }
        return c0478aRemove.get();
    }

    @Override // java.util.HashMap, java.util.AbstractMap, java.util.Map
    public final int size() {
        a();
        return this.b.size();
    }

    private void a() {
        while (true) {
            C0478a c0478a = (C0478a) this.f7222a.poll();
            if (c0478a == null) {
                return;
            } else {
                this.b.remove(c0478a.f7223a);
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.dynview.d.a$a, reason: collision with other inner class name */
    private class C0478a<K, V> extends SoftReference<V> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        K f7223a;

        public C0478a(K k, V v, ReferenceQueue referenceQueue) {
            super(v, referenceQueue);
            this.f7223a = k;
        }
    }
}
