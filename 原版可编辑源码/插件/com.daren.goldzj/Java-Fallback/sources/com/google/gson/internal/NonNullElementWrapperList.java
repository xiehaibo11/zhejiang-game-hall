package com.google.gson.internal;

import java.util.AbstractList;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Objects;
import java.util.RandomAccess;

public class NonNullElementWrapperList<E> extends AbstractList<E> implements RandomAccess {
    private final ArrayList<E> delegate;

    public NonNullElementWrapperList(ArrayList<E> r1) {
        this.delegate = (ArrayList) Objects.requireNonNull(r1);
    }

    @Override
    public E get(int r2) {
        return this.delegate.get(r2);
    }

    @Override
    public int size() {
        return this.delegate.size();
    }

    private E nonNull(E r2) {
        if (r2 == null) goto L5;
        return r2;
    L5:
        throw new NullPointerException("Element must be non-null");
    }

    @Override
    public E set(int r2, E r3) {
        return this.delegate.set(r2, nonNull(r3));
    }

    @Override
    public void add(int r2, E r3) {
        this.delegate.add(r2, nonNull(r3));
    }

    @Override
    public E remove(int r2) {
        return this.delegate.remove(r2);
    }

    @Override
    public void clear() {
        this.delegate.clear();
    }

    @Override
    public boolean remove(Object r2) {
        return this.delegate.remove(r2);
    }

    @Override
    public boolean removeAll(Collection<?> r2) {
        return this.delegate.removeAll(r2);
    }

    @Override
    public boolean retainAll(Collection<?> r2) {
        return this.delegate.retainAll(r2);
    }

    @Override
    public boolean contains(Object r2) {
        return this.delegate.contains(r2);
    }

    @Override
    public int indexOf(Object r2) {
        return this.delegate.indexOf(r2);
    }

    @Override
    public int lastIndexOf(Object r2) {
        return this.delegate.lastIndexOf(r2);
    }

    @Override
    public Object[] toArray() {
        return this.delegate.toArray();
    }

    @Override
    public <T> T[] toArray(T[] r2) {
        return (T[]) this.delegate.toArray(r2);
    }

    @Override
    public boolean equals(Object r2) {
        return this.delegate.equals(r2);
    }

    @Override
    public int hashCode() {
        return this.delegate.hashCode();
    }
}
