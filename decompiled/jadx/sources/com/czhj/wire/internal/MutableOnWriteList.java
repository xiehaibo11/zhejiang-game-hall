package com.czhj.wire.internal;

import java.io.ObjectStreamException;
import java.io.Serializable;
import java.util.AbstractList;
import java.util.ArrayList;
import java.util.List;
import java.util.RandomAccess;

/* JADX INFO: loaded from: classes.dex */
final class MutableOnWriteList<T> extends AbstractList<T> implements Serializable, RandomAccess {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    List<T> f1876a;
    private final List<T> b;

    MutableOnWriteList(List<T> list) {
        this.b = list;
        this.f1876a = list;
    }

    private Object writeReplace() throws ObjectStreamException {
        return new ArrayList(this.f1876a);
    }

    @Override // java.util.AbstractList, java.util.List
    public void add(int i, T t) {
        if (this.f1876a == this.b) {
            this.f1876a = new ArrayList(this.b);
        }
        this.f1876a.add(i, t);
    }

    @Override // java.util.AbstractList, java.util.List
    public T get(int i) {
        return this.f1876a.get(i);
    }

    @Override // java.util.AbstractList, java.util.List
    public T remove(int i) {
        if (this.f1876a == this.b) {
            this.f1876a = new ArrayList(this.b);
        }
        return this.f1876a.remove(i);
    }

    @Override // java.util.AbstractList, java.util.List
    public T set(int i, T t) {
        if (this.f1876a == this.b) {
            this.f1876a = new ArrayList(this.b);
        }
        return this.f1876a.set(i, t);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public int size() {
        return this.f1876a.size();
    }
}
