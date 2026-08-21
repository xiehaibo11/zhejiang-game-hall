package com.tkay.expressad.foundation.g.a;

public abstract class a<K, V> implements com.tkay.expressad.foundation.g.a.e<K, V> {
    protected static final java.lang.String a = "cache";
    private final java.util.Map<K, java.lang.ref.Reference<V>> b;

    public a() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map r0 = java.util.Collections.synchronizedMap(r0)
            r1.b = r0
            return
    }

    @Override
    public final java.util.Collection<K> a() {
            r3 = this;
            java.util.Map<K, java.lang.ref.Reference<V>> r0 = r3.b
            monitor-enter(r0)
            java.util.HashSet r1 = new java.util.HashSet     // Catch: java.lang.Throwable -> L10
            java.util.Map<K, java.lang.ref.Reference<V>> r2 = r3.b     // Catch: java.lang.Throwable -> L10
            java.util.Set r2 = r2.keySet()     // Catch: java.lang.Throwable -> L10
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            return r1
        L10:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public void a(K r2) {
            r1 = this;
            java.util.Map<K, java.lang.ref.Reference<V>> r0 = r1.b
            r0.remove(r2)
            return
    }

    @Override
    public boolean a(K r2, V r3) {
            r1 = this;
            java.util.Map<K, java.lang.ref.Reference<V>> r0 = r1.b
            java.lang.ref.Reference r3 = r1.c(r3)
            r0.put(r2, r3)
            r2 = 1
            return r2
    }

    @Override
    public final V b(K r2) {
            r1 = this;
            java.util.Map<K, java.lang.ref.Reference<V>> r0 = r1.b
            java.lang.Object r2 = r0.get(r2)
            java.lang.ref.Reference r2 = (java.lang.ref.Reference) r2
            if (r2 == 0) goto Lf
            java.lang.Object r2 = r2.get()
            goto L10
        Lf:
            r2 = 0
        L10:
            return r2
    }

    @Override
    public void b() {
            r1 = this;
            java.util.Map<K, java.lang.ref.Reference<V>> r0 = r1.b
            r0.clear()
            return
    }

    protected abstract java.lang.ref.Reference<V> c(V r1);
}
