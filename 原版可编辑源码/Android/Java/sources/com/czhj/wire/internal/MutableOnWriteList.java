package com.czhj.wire.internal;

import java.io.ObjectStreamException;
import java.io.Serializable;
import java.util.AbstractList;
import java.util.ArrayList;
import java.util.List;
import java.util.RandomAccess;

final class MutableOnWriteList<T> extends AbstractList<T> implements Serializable, RandomAccess {
    List<T> a;
    private final List<T> b;

    MutableOnWriteList(List<T> list) {
        this.b = list;
        this.a = list;
    }

    private Object writeReplace() throws ObjectStreamException {
        return new ArrayList(this.a);
    }

    @Override
    public void add(int i, T t) {
        if (this.a == this.b) {
            this.a = new ArrayList(this.b);
        }
        this.a.add(i, t);
    }

    @Override
    public T get(int i) {
        return this.a.get(i);
    }

    @Override
    public T remove(int i) {
        if (this.a == this.b) {
            this.a = new ArrayList(this.b);
        }
        return this.a.remove(i);
    }

    @Override
    public T set(int i, T t) {
        if (this.a == this.b) {
            this.a = new ArrayList(this.b);
        }
        return this.a.set(i, t);
    }

    @Override
    public int size() {
        return this.a.size();
    }
}
