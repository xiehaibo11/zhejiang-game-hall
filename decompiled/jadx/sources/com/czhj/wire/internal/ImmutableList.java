package com.czhj.wire.internal;

import java.io.ObjectStreamException;
import java.io.Serializable;
import java.util.AbstractList;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.RandomAccess;

/* JADX INFO: loaded from: classes.dex */
final class ImmutableList<T> extends AbstractList<T> implements Serializable, RandomAccess {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final ArrayList<T> f1875a;

    ImmutableList(List<T> list) {
        this.f1875a = new ArrayList<>(list);
    }

    private Object writeReplace() throws ObjectStreamException {
        return Collections.unmodifiableList(this.f1875a);
    }

    @Override // java.util.AbstractList, java.util.List
    public T get(int i) {
        return this.f1875a.get(i);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public int size() {
        return this.f1875a.size();
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public Object[] toArray() {
        return this.f1875a.toArray();
    }
}
