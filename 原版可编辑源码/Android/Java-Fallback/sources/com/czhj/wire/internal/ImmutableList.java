package com.czhj.wire.internal;

final class ImmutableList<T> extends java.util.AbstractList<T> implements java.io.Serializable, java.util.RandomAccess {
    private final java.util.ArrayList<T> a;

    ImmutableList(java.util.List<T> r2) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>(r2)
            r1.a = r0
            return
    }

    private java.lang.Object writeReplace() throws java.io.ObjectStreamException {
            r1 = this;
            java.util.ArrayList<T> r0 = r1.a
            java.util.List r0 = java.util.Collections.unmodifiableList(r0)
            return r0
    }

    @Override
    public T get(int r2) {
            r1 = this;
            java.util.ArrayList<T> r0 = r1.a
            java.lang.Object r2 = r0.get(r2)
            return r2
    }

    @Override
    public int size() {
            r1 = this;
            java.util.ArrayList<T> r0 = r1.a
            int r0 = r0.size()
            return r0
    }

    @Override
    public java.lang.Object[] toArray() {
            r1 = this;
            java.util.ArrayList<T> r0 = r1.a
            java.lang.Object[] r0 = r0.toArray()
            return r0
    }
}
