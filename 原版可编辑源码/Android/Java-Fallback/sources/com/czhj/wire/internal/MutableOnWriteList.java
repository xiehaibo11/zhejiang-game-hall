package com.czhj.wire.internal;

final class MutableOnWriteList<T> extends java.util.AbstractList<T> implements java.io.Serializable, java.util.RandomAccess {
    java.util.List<T> a;
    private final java.util.List<T> b;

    MutableOnWriteList(java.util.List<T> r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.a = r1
            return
    }

    private java.lang.Object writeReplace() throws java.io.ObjectStreamException {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List<T> r1 = r2.a
            r0.<init>(r1)
            return r0
    }

    @Override
    public void add(int r3, T r4) {
            r2 = this;
            java.util.List<T> r0 = r2.a
            java.util.List<T> r1 = r2.b
            if (r0 != r1) goto Lf
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List<T> r1 = r2.b
            r0.<init>(r1)
            r2.a = r0
        Lf:
            java.util.List<T> r0 = r2.a
            r0.add(r3, r4)
            return
    }

    @Override
    public T get(int r2) {
            r1 = this;
            java.util.List<T> r0 = r1.a
            java.lang.Object r2 = r0.get(r2)
            return r2
    }

    @Override
    public T remove(int r3) {
            r2 = this;
            java.util.List<T> r0 = r2.a
            java.util.List<T> r1 = r2.b
            if (r0 != r1) goto Lf
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List<T> r1 = r2.b
            r0.<init>(r1)
            r2.a = r0
        Lf:
            java.util.List<T> r0 = r2.a
            java.lang.Object r3 = r0.remove(r3)
            return r3
    }

    @Override
    public T set(int r3, T r4) {
            r2 = this;
            java.util.List<T> r0 = r2.a
            java.util.List<T> r1 = r2.b
            if (r0 != r1) goto Lf
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List<T> r1 = r2.b
            r0.<init>(r1)
            r2.a = r0
        Lf:
            java.util.List<T> r0 = r2.a
            java.lang.Object r3 = r0.set(r3, r4)
            return r3
    }

    @Override
    public int size() {
            r1 = this;
            java.util.List<T> r0 = r1.a
            int r0 = r0.size()
            return r0
    }
}
