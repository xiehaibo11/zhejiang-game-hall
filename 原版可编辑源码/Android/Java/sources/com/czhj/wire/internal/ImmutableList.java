package com.czhj.wire.internal;

import java.io.ObjectStreamException;
import java.io.Serializable;
import java.util.AbstractList;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.RandomAccess;

final class ImmutableList<T> extends AbstractList<T> implements Serializable, RandomAccess {
    private final ArrayList<T> a;

    ImmutableList(List<T> list) {
        this.a = new ArrayList<>(list);
    }

    private Object writeReplace() throws ObjectStreamException {
        return Collections.unmodifiableList(this.a);
    }

    @Override
    public T get(int i) {
        return this.a.get(i);
    }

    @Override
    public int size() {
        return this.a.size();
    }

    @Override
    public Object[] toArray() {
        return this.a.toArray();
    }
}
