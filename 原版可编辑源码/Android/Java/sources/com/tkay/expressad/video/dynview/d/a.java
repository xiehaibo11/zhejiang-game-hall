package com.tkay.expressad.video.dynview.d;

import java.lang.ref.ReferenceQueue;
import java.lang.ref.SoftReference;
import java.util.HashMap;

public final class a<K, V> extends HashMap<K, V> {
    private ReferenceQueue<V> a = new ReferenceQueue<>();
    private HashMap<K, a<K, V>.a<K, V>> b = new HashMap<>();

    @Override
    public final V get(Object obj) {
        a();
        a<K, V>.a<K, V> aVar = this.b.get(obj);
        if (aVar == null) {
            return null;
        }
        return aVar.get();
    }

    @Override
    public final V put(K k, V v) {
        a();
        a<K, V>.a<K, V> aVarPut = this.b.put(k, new a<>(k, v, this.a));
        if (aVarPut == null) {
            return null;
        }
        return aVarPut.get();
    }

    @Override
    public final boolean containsKey(Object obj) {
        a();
        return this.b.containsKey(obj);
    }

    @Override
    public final V remove(Object obj) {
        a();
        a<K, V>.a<K, V> aVarRemove = this.b.remove(obj);
        if (aVarRemove == null) {
            return null;
        }
        return aVarRemove.get();
    }

    @Override
    public final int size() {
        a();
        return this.b.size();
    }

    private void a() {
        while (true) {
            a aVar = (a) this.a.poll();
            if (aVar == null) {
                return;
            } else {
                this.b.remove(aVar.a);
            }
        }
    }

    private class a<K, V> extends SoftReference<V> {
        K a;

        public a(K k, V v, ReferenceQueue referenceQueue) {
            super(v, referenceQueue);
            this.a = k;
        }
    }
}
