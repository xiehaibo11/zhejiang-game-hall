package com.tkay.expressad.video.dynview.d;

public final class a<K, V> extends java.util.HashMap<K, V> {
    private java.lang.ref.ReferenceQueue<V> a;
    private java.util.HashMap<K, com.tkay.expressad.video.dynview.d.a<K, V>.a<K, V>> b;

    private class a<K, V> extends java.lang.ref.SoftReference<V> {
        K a;
        final com.tkay.expressad.video.dynview.d.a b;

        public a(com.tkay.expressad.video.dynview.d.a r1, K r2, V r3, java.lang.ref.ReferenceQueue r4) {
                r0 = this;
                r0.b = r1
                r0.<init>(r3, r4)
                r0.a = r2
                return
        }
    }

    public a() {
            r1 = this;
            r1.<init>()
            java.lang.ref.ReferenceQueue r0 = new java.lang.ref.ReferenceQueue
            r0.<init>()
            r1.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.b = r0
            return
    }

    private void a() {
            r2 = this;
        L0:
            java.lang.ref.ReferenceQueue<V> r0 = r2.a
            java.lang.ref.Reference r0 = r0.poll()
            com.tkay.expressad.video.dynview.d.a$a r0 = (com.tkay.expressad.video.dynview.d.a.a) r0
            if (r0 == 0) goto L12
            java.util.HashMap<K, com.tkay.expressad.video.dynview.d.a<K, V>$a<K, V>> r1 = r2.b
            K r0 = r0.a
            r1.remove(r0)
            goto L0
        L12:
            return
    }

    @Override
    public final boolean containsKey(java.lang.Object r2) {
            r1 = this;
            r1.a()
            java.util.HashMap<K, com.tkay.expressad.video.dynview.d.a<K, V>$a<K, V>> r0 = r1.b
            boolean r2 = r0.containsKey(r2)
            return r2
    }

    @Override
    public final V get(java.lang.Object r2) {
            r1 = this;
            r1.a()
            java.util.HashMap<K, com.tkay.expressad.video.dynview.d.a<K, V>$a<K, V>> r0 = r1.b
            java.lang.Object r2 = r0.get(r2)
            com.tkay.expressad.video.dynview.d.a$a r2 = (com.tkay.expressad.video.dynview.d.a.a) r2
            if (r2 != 0) goto Lf
            r2 = 0
            return r2
        Lf:
            java.lang.Object r2 = r2.get()
            return r2
    }

    @Override
    public final V put(K r3, V r4) {
            r2 = this;
            r2.a()
            com.tkay.expressad.video.dynview.d.a$a r0 = new com.tkay.expressad.video.dynview.d.a$a
            java.lang.ref.ReferenceQueue<V> r1 = r2.a
            r0.<init>(r2, r3, r4, r1)
            java.util.HashMap<K, com.tkay.expressad.video.dynview.d.a<K, V>$a<K, V>> r4 = r2.b
            java.lang.Object r3 = r4.put(r3, r0)
            com.tkay.expressad.video.dynview.d.a$a r3 = (com.tkay.expressad.video.dynview.d.a.a) r3
            if (r3 != 0) goto L16
            r3 = 0
            return r3
        L16:
            java.lang.Object r3 = r3.get()
            return r3
    }

    @Override
    public final V remove(java.lang.Object r2) {
            r1 = this;
            r1.a()
            java.util.HashMap<K, com.tkay.expressad.video.dynview.d.a<K, V>$a<K, V>> r0 = r1.b
            java.lang.Object r2 = r0.remove(r2)
            com.tkay.expressad.video.dynview.d.a$a r2 = (com.tkay.expressad.video.dynview.d.a.a) r2
            if (r2 != 0) goto Lf
            r2 = 0
            return r2
        Lf:
            java.lang.Object r2 = r2.get()
            return r2
    }

    @Override
    public final int size() {
            r1 = this;
            r1.a()
            java.util.HashMap<K, com.tkay.expressad.video.dynview.d.a<K, V>$a<K, V>> r0 = r1.b
            int r0 = r0.size()
            return r0
    }
}
