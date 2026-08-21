package android.support.v4.util;

import android.support.annotation.Nullable;
import java.lang.reflect.Array;
import java.util.Collection;
import java.util.Iterator;
import java.util.Map;
import java.util.NoSuchElementException;
import java.util.Set;

abstract class MapCollections<K, V> {

    @Nullable
    MapCollections<K, V>.EntrySet mEntrySet;

    @Nullable
    MapCollections<K, V>.KeySet mKeySet;

    @Nullable
    MapCollections<K, V>.ValuesCollection mValues;

    final class ArrayIterator<T> implements Iterator<T> {
        boolean mCanRemove;
        int mIndex;
        final int mOffset;
        int mSize;
        final MapCollections this$0;

        ArrayIterator(MapCollections r2, int r3) {
            this.this$0 = r2;
            this.mCanRemove = false;
            this.mOffset = r3;
            this.mSize = r2.colGetSize();
        }

        @Override
        public boolean hasNext() {
            if (this.mIndex >= this.mSize) goto L5;
            return true;
        L5:
            return false;
        }

        @Override
        public T next() {
            if (hasNext() == false) goto L7;
            T r0 = (T) this.this$0.colGetEntry(this.mIndex, this.mOffset);
            this.mIndex++;
            this.mCanRemove = true;
            return r0;
        L7:
            throw new NoSuchElementException();
        }

        @Override
        public void remove() {
            if (this.mCanRemove == false) goto L7;
            this.mIndex--;
            this.mSize--;
            this.mCanRemove = false;
            this.this$0.colRemoveAt(this.mIndex);
            return;
        L7:
            throw new IllegalStateException();
        }
    }

    final class EntrySet implements Set<Map.Entry<K, V>> {
        final MapCollections this$0;

        EntrySet(MapCollections r1) {
            this.this$0 = r1;
        }

        @Override
        public boolean add(Object r1) {
            return add((Map.Entry) r1);
        }

        public boolean add(Map.Entry<K, V> r1) {
            throw new UnsupportedOperationException();
        }

        @Override
        public boolean addAll(Collection<? extends Map.Entry<K, V>> r5) {
            int r0 = this.this$0.colGetSize();
            Iterator<? extends Map.Entry<K, V>> r52 = r5.iterator();
        L4:
            if (r52.hasNext() == false) goto L7;
            Map.Entry<K, V> r1 = r52.next();
            this.this$0.colPut(r1.getKey(), r1.getValue());
            goto L4
        L7:
            if (r0 == this.this$0.colGetSize()) goto L9;
            return true;
        L9:
            return false;
        }

        @Override
        public void clear() {
            this.this$0.colClear();
        }

        @Override
        public boolean contains(Object r4) {
            if ((r4 instanceof Map.Entry) == true) goto L5;
            return false;
        L5:
            Map.Entry r42 = (Map.Entry) r4;
            int r0 = this.this$0.colIndexOfKey(r42.getKey());
            if (r0 >= 0) goto L9;
            return false;
        L9:
            return ContainerHelpers.equal(this.this$0.colGetEntry(r0, 1), r42.getValue());
        }

        @Override
        public boolean containsAll(Collection<?> r2) {
            Iterator<?> r22 = r2.iterator();
        L4:
            if (r22.hasNext() == false) goto L9;
            if (contains(r22.next()) == true) goto L4;
            return false;
        L9:
            return true;
        }

        @Override
        public boolean isEmpty() {
            if (this.this$0.colGetSize() != 0) goto L5;
            return true;
        L5:
            return false;
        }

        @Override
        public Iterator<Map.Entry<K, V>> iterator() {
            return new MapIterator(this.this$0);
        }

        @Override
        public boolean remove(Object r1) {
            throw new UnsupportedOperationException();
        }

        @Override
        public boolean removeAll(Collection<?> r1) {
            throw new UnsupportedOperationException();
        }

        @Override
        public boolean retainAll(Collection<?> r1) {
            throw new UnsupportedOperationException();
        }

        @Override
        public int size() {
            return this.this$0.colGetSize();
        }

        @Override
        public Object[] toArray() {
            throw new UnsupportedOperationException();
        }

        @Override
        public <T> T[] toArray(T[] r1) {
            throw new UnsupportedOperationException();
        }

        @Override
        public boolean equals(Object r1) {
            return MapCollections.equalsSetHelper(this, r1);
        }

        @Override
        public int hashCode() {
            int r0 = this.this$0.colGetSize() - 1;
            int r3 = 0;
        L3:
            if (r0 < 0) goto L12;
            Object r4 = this.this$0.colGetEntry(r0, 0);
            Object r5 = this.this$0.colGetEntry(r0, 1);
            if (r4 != null) goto L7;
            int r42 = 0;
        L8:
            if (r5 != null) goto L10;
            int r52 = 0;
        L11:
            r3 = r3 + (r42 ^ r52);
            r0 = r0 - 1;
            goto L3
        L10:
            r52 = r5.hashCode();
            goto L11
        L7:
            r42 = r4.hashCode();
            goto L8
        L12:
            return r3;
        }
    }

    final class KeySet implements Set<K> {
        final MapCollections this$0;

        KeySet(MapCollections r1) {
            this.this$0 = r1;
        }

        @Override
        public boolean add(K r1) {
            throw new UnsupportedOperationException();
        }

        @Override
        public boolean addAll(Collection<? extends K> r1) {
            throw new UnsupportedOperationException();
        }

        @Override
        public void clear() {
            this.this$0.colClear();
        }

        @Override
        public boolean contains(Object r2) {
            if (this.this$0.colIndexOfKey(r2) < 0) goto L5;
            return true;
        L5:
            return false;
        }

        @Override
        public boolean containsAll(Collection<?> r2) {
            return MapCollections.containsAllHelper(this.this$0.colGetMap(), r2);
        }

        @Override
        public boolean isEmpty() {
            if (this.this$0.colGetSize() != 0) goto L5;
            return true;
        L5:
            return false;
        }

        @Override
        public Iterator<K> iterator() {
            return new ArrayIterator(this.this$0, 0);
        }

        @Override
        public boolean remove(Object r2) {
            int r22 = this.this$0.colIndexOfKey(r2);
            if (r22 < 0) goto L6;
            this.this$0.colRemoveAt(r22);
            return true;
        L6:
            return false;
        }

        @Override
        public boolean removeAll(Collection<?> r2) {
            return MapCollections.removeAllHelper(this.this$0.colGetMap(), r2);
        }

        @Override
        public boolean retainAll(Collection<?> r2) {
            return MapCollections.retainAllHelper(this.this$0.colGetMap(), r2);
        }

        @Override
        public int size() {
            return this.this$0.colGetSize();
        }

        @Override
        public Object[] toArray() {
            return this.this$0.toArrayHelper(0);
        }

        @Override
        public <T> T[] toArray(T[] r3) {
            return (T[]) this.this$0.toArrayHelper(r3, 0);
        }

        @Override
        public boolean equals(Object r1) {
            return MapCollections.equalsSetHelper(this, r1);
        }

        @Override
        public int hashCode() {
            int r0 = this.this$0.colGetSize() - 1;
            int r2 = 0;
        L3:
            if (r0 < 0) goto L9;
            Object r3 = this.this$0.colGetEntry(r0, 0);
            if (r3 != null) goto L7;
            int r32 = 0;
        L8:
            r2 = r2 + r32;
            r0 = r0 - 1;
            goto L3
        L7:
            r32 = r3.hashCode();
            goto L8
        L9:
            return r2;
        }
    }

    final class MapIterator implements Iterator<Map.Entry<K, V>>, Map.Entry<K, V> {
        int mEnd;
        boolean mEntryValid;
        int mIndex;
        final MapCollections this$0;

        @Override
        public Object next() {
            return next();
        }

        MapIterator(MapCollections r2) {
            this.this$0 = r2;
            this.mEntryValid = false;
            this.mEnd = r2.colGetSize() - 1;
            this.mIndex = -1;
        }

        @Override
        public boolean hasNext() {
            if (this.mIndex >= this.mEnd) goto L5;
            return true;
        L5:
            return false;
        }

        @Override
        public Map.Entry<K, V> next() {
            if (hasNext() == false) goto L7;
            this.mIndex++;
            this.mEntryValid = true;
            return this;
        L7:
            throw new NoSuchElementException();
        }

        @Override
        public void remove() {
            if (this.mEntryValid == false) goto L7;
            this.this$0.colRemoveAt(this.mIndex);
            this.mIndex--;
            this.mEnd--;
            this.mEntryValid = false;
            return;
        L7:
            throw new IllegalStateException();
        }

        @Override
        public K getKey() {
            if (this.mEntryValid == false) goto L7;
            return (K) this.this$0.colGetEntry(this.mIndex, 0);
        L7:
            throw new IllegalStateException("This container does not support retaining Map.Entry objects");
        }

        @Override
        public V getValue() {
            if (this.mEntryValid == false) goto L7;
            return (V) this.this$0.colGetEntry(this.mIndex, 1);
        L7:
            throw new IllegalStateException("This container does not support retaining Map.Entry objects");
        }

        @Override
        public V setValue(V r3) {
            if (this.mEntryValid == false) goto L7;
            return (V) this.this$0.colSetValue(this.mIndex, r3);
        L7:
            throw new IllegalStateException("This container does not support retaining Map.Entry objects");
        }

        @Override
        public boolean equals(Object r5) {
            if (this.mEntryValid == false) goto L14;
            if ((r5 instanceof Map.Entry) == true) goto L7;
            return false;
        L7:
            Map.Entry r52 = (Map.Entry) r5;
            if (ContainerHelpers.equal(r52.getKey(), this.this$0.colGetEntry(this.mIndex, 0)) == true) goto L10;
            return false;
        L10:
            if (ContainerHelpers.equal(r52.getValue(), this.this$0.colGetEntry(this.mIndex, 1)) == false) goto L16;
            return true;
        L16:
            return false;
        L14:
            throw new IllegalStateException("This container does not support retaining Map.Entry objects");
        }

        @Override
        public int hashCode() {
            if (this.mEntryValid == false) goto L14;
            int r2 = 0;
            Object r0 = this.this$0.colGetEntry(this.mIndex, 0);
            Object r1 = this.this$0.colGetEntry(this.mIndex, 1);
            if (r0 != null) goto L7;
            int r02 = 0;
        L8:
            if (r1 == null) goto L12;
            r2 = r1.hashCode();
        L12:
            return r02 ^ r2;
        L7:
            r02 = r0.hashCode();
            goto L8
        L14:
            throw new IllegalStateException("This container does not support retaining Map.Entry objects");
        }

        public String toString() {
            return getKey() + "=" + getValue();
        }
    }

    final class ValuesCollection implements Collection<V> {
        final MapCollections this$0;

        ValuesCollection(MapCollections r1) {
            this.this$0 = r1;
        }

        @Override
        public boolean add(V r1) {
            throw new UnsupportedOperationException();
        }

        @Override
        public boolean addAll(Collection<? extends V> r1) {
            throw new UnsupportedOperationException();
        }

        @Override
        public void clear() {
            this.this$0.colClear();
        }

        @Override
        public boolean contains(Object r2) {
            if (this.this$0.colIndexOfValue(r2) < 0) goto L5;
            return true;
        L5:
            return false;
        }

        @Override
        public boolean containsAll(Collection<?> r2) {
            Iterator<?> r22 = r2.iterator();
        L4:
            if (r22.hasNext() == false) goto L9;
            if (contains(r22.next()) == true) goto L4;
            return false;
        L9:
            return true;
        }

        @Override
        public boolean isEmpty() {
            if (this.this$0.colGetSize() != 0) goto L5;
            return true;
        L5:
            return false;
        }

        @Override
        public Iterator<V> iterator() {
            return new ArrayIterator(this.this$0, 1);
        }

        @Override
        public boolean remove(Object r2) {
            int r22 = this.this$0.colIndexOfValue(r2);
            if (r22 < 0) goto L6;
            this.this$0.colRemoveAt(r22);
            return true;
        L6:
            return false;
        }

        @Override
        public boolean removeAll(Collection<?> r6) {
            int r0 = this.this$0.colGetSize();
            int r1 = 0;
            boolean r2 = false;
        L3:
            if (r1 >= r0) goto L8;
            if (r6.contains(this.this$0.colGetEntry(r1, 1)) == false) goto L7;
            this.this$0.colRemoveAt(r1);
            r1 = r1 - 1;
            r0 = r0 - 1;
            r2 = true;
        L7:
            r1 = r1 + 1;
            goto L3
        L8:
            return r2;
        }

        @Override
        public boolean retainAll(Collection<?> r6) {
            int r0 = this.this$0.colGetSize();
            int r1 = 0;
            boolean r2 = false;
        L3:
            if (r1 >= r0) goto L8;
            if (r6.contains(this.this$0.colGetEntry(r1, 1)) == true) goto L7;
            this.this$0.colRemoveAt(r1);
            r1 = r1 - 1;
            r0 = r0 - 1;
            r2 = true;
        L7:
            r1 = r1 + 1;
            goto L3
        L8:
            return r2;
        }

        @Override
        public int size() {
            return this.this$0.colGetSize();
        }

        @Override
        public Object[] toArray() {
            return this.this$0.toArrayHelper(1);
        }

        @Override
        public <T> T[] toArray(T[] r3) {
            return (T[]) this.this$0.toArrayHelper(r3, 1);
        }
    }

    protected abstract void colClear();

    protected abstract Object colGetEntry(int r1, int r2);

    protected abstract Map<K, V> colGetMap();

    protected abstract int colGetSize();

    protected abstract int colIndexOfKey(Object r1);

    protected abstract int colIndexOfValue(Object r1);

    protected abstract void colPut(K r1, V r2);

    protected abstract void colRemoveAt(int r1);

    protected abstract V colSetValue(int r1, V r2);

    MapCollections() {
    }

    public static <K, V> boolean containsAllHelper(Map<K, V> r1, Collection<?> r2) {
        Iterator<?> r22 = r2.iterator();
    L4:
        if (r22.hasNext() == false) goto L9;
        if (r1.containsKey(r22.next()) == true) goto L4;
        return false;
    L9:
        return true;
    }

    public static <K, V> boolean removeAllHelper(Map<K, V> r2, Collection<?> r3) {
        int r0 = r2.size();
        Iterator<?> r32 = r3.iterator();
    L4:
        if (r32.hasNext() == false) goto L7;
        r2.remove(r32.next());
        goto L4
    L7:
        if (r0 == r2.size()) goto L9;
        return true;
    L9:
        return false;
    }

    public static <K, V> boolean retainAllHelper(Map<K, V> r3, Collection<?> r4) {
        int r0 = r3.size();
        Iterator<K> r1 = r3.keySet().iterator();
    L4:
        if (r1.hasNext() == false) goto L9;
        if (r4.contains(r1.next()) == true) goto L4;
        r1.remove();
        goto L4
    L9:
        if (r0 == r3.size()) goto L11;
        return true;
    L11:
        return false;
    }

    public Object[] toArrayHelper(int r5) {
        int r0 = colGetSize();
        Object[] r1 = new Object[r0];
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L5;
        r1[r2] = colGetEntry(r2, r5);
        r2 = r2 + 1;
        goto L3
    L5:
        return r1;
    }

    public <T> T[] toArrayHelper(T[] r4, int r5) {
        int r0 = colGetSize();
        if (r4.length >= r0) goto L5;
        r4 = (T[]) ((Object[]) Array.newInstance(r4.getClass().getComponentType(), r0));
    L5:
        int r1 = 0;
    L6:
        if (r1 >= r0) goto L9;
        T[] r42 = r4;
        r42[r1] = colGetEntry(r1, r5);
        r1 = r1 + 1;
        goto L6
    L9:
        if (r4.length <= r0) goto L11;
        r4[r0] = null;
    L11:
        return r4;
    }

    public static <T> boolean equalsSetHelper(Set<T> r4, Object r5) {
        if (r4 != r5) goto L6;
        return true;
    L6:
        if ((r5 instanceof Set) == false) goto L15;
        Set r52 = (Set) r5;
        if (r4.size() != r52.size()) goto L13;
        if (r4.containsAll(r52) == false) goto L13;
        return true;
    L13:
        return false;
    L15:
        return false;
    }

    public Set<Map.Entry<K, V>> getEntrySet() {
        if (this.mEntrySet != null) goto L6;
        this.mEntrySet = new EntrySet(this);
    L6:
        return this.mEntrySet;
    }

    public Set<K> getKeySet() {
        if (this.mKeySet != null) goto L6;
        this.mKeySet = new KeySet(this);
    L6:
        return this.mKeySet;
    }

    public Collection<V> getValues() {
        if (this.mValues != null) goto L6;
        this.mValues = new ValuesCollection(this);
    L6:
        return this.mValues;
    }
}
