package android.arch.core.internal;

import android.support.annotation.NonNull;
import android.support.annotation.RestrictTo;
import java.util.Iterator;
import java.util.Map;
import java.util.WeakHashMap;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class SafeIterableMap<K, V> implements Iterable<Map.Entry<K, V>> {
    private Entry<K, V> mEnd;
    private WeakHashMap<SupportRemove<K, V>, Boolean> mIterators;
    private int mSize;
    private Entry<K, V> mStart;

    static class 1 {
    }

    static class AscendingIterator<K, V> extends ListIterator<K, V> {
        AscendingIterator(Entry<K, V> r1, Entry<K, V> r2) {
            super(r1, r2);
        }

        @Override
        Entry<K, V> forward(Entry<K, V> r1) {
            return r1.mNext;
        }

        @Override
        Entry<K, V> backward(Entry<K, V> r1) {
            return r1.mPrevious;
        }
    }

    private static class DescendingIterator<K, V> extends ListIterator<K, V> {
        DescendingIterator(Entry<K, V> r1, Entry<K, V> r2) {
            super(r1, r2);
        }

        @Override
        Entry<K, V> forward(Entry<K, V> r1) {
            return r1.mPrevious;
        }

        @Override
        Entry<K, V> backward(Entry<K, V> r1) {
            return r1.mNext;
        }
    }

    static class Entry<K, V> implements Map.Entry<K, V> {

        @NonNull
        final K mKey;
        Entry<K, V> mNext;
        Entry<K, V> mPrevious;

        @NonNull
        final V mValue;

        Entry(@NonNull K r1, @NonNull V r2) {
            this.mKey = r1;
            this.mValue = r2;
        }

        @Override
        @NonNull
        public K getKey() {
            return this.mKey;
        }

        @Override
        @NonNull
        public V getValue() {
            return this.mValue;
        }

        @Override
        public V setValue(V r2) {
            throw new UnsupportedOperationException("An entry modification is not supported");
        }

        public String toString() {
            return this.mKey + "=" + this.mValue;
        }

        @Override
        public boolean equals(Object r5) {
            if (r5 != this) goto L6;
            return true;
        L6:
            if ((r5 instanceof Entry) == true) goto L8;
            return false;
        L8:
            Entry r52 = (Entry) r5;
            if (this.mKey.equals(r52.mKey) == true) goto L11;
        L13:
            return false;
        L11:
            if (this.mValue.equals(r52.mValue) == false) goto L13;
            return true;
        }
    }

    private class IteratorWithAdditions implements Iterator<Map.Entry<K, V>>, SupportRemove<K, V> {
        private boolean mBeforeStart;
        private Entry<K, V> mCurrent;
        final SafeIterableMap this$0;

        private IteratorWithAdditions(SafeIterableMap r1) {
            this.this$0 = r1;
            this.mBeforeStart = true;
        }

        IteratorWithAdditions(SafeIterableMap r1, 1 r2) {
            this(r1);
        }

        @Override
        public Object next() {
            return next();
        }

        @Override
        public void supportRemove(@NonNull Entry<K, V> r2) {
            Entry<K, V> r0 = this.mCurrent;
            if (r2 != r0) goto L10;
            this.mCurrent = r0.mPrevious;
            if (this.mCurrent != null) goto L7;
            boolean r22 = true;
        L8:
            this.mBeforeStart = r22;
            return;
        L7:
            r22 = false;
            goto L8
        }

        @Override
        public boolean hasNext() {
            if (this.mBeforeStart == true) goto L5;
            Entry<K, V> r0 = this.mCurrent;
            if (r0 != null) goto L12;
        L14:
            return false;
        L12:
            if (r0.mNext == null) goto L14;
            return true;
        L5:
            if (SafeIterableMap.access$100(this.this$0) != null) goto L16;
            return false;
        L16:
            return true;
        }

        @Override
        public Map.Entry<K, V> next() {
            if (this.mBeforeStart == false) goto L5;
            this.mBeforeStart = false;
            this.mCurrent = SafeIterableMap.access$100(this.this$0);
        L11:
            return this.mCurrent;
        L5:
            Entry<K, V> r0 = this.mCurrent;
            if (r0 == null) goto L8;
            Entry<K, V> r02 = r0.mNext;
        L9:
            this.mCurrent = r02;
            goto L11
        L8:
            r02 = null;
            goto L9
        }
    }

    private static abstract class ListIterator<K, V> implements Iterator<Map.Entry<K, V>>, SupportRemove<K, V> {
        Entry<K, V> mExpectedEnd;
        Entry<K, V> mNext;

        abstract Entry<K, V> backward(Entry<K, V> r1);

        abstract Entry<K, V> forward(Entry<K, V> r1);

        @Override
        public Object next() {
            return next();
        }

        ListIterator(Entry<K, V> r1, Entry<K, V> r2) {
            this.mExpectedEnd = r2;
            this.mNext = r1;
        }

        @Override
        public boolean hasNext() {
            if (this.mNext == null) goto L5;
            return true;
        L5:
            return false;
        }

        @Override
        public void supportRemove(@NonNull Entry<K, V> r2) {
            if (this.mExpectedEnd == r2) goto L5;
        L7:
            Entry<K, V> r0 = this.mExpectedEnd;
            if (r0 != r2) goto L11;
            this.mExpectedEnd = backward(r0);
        L11:
            if (this.mNext != r2) goto L14;
            this.mNext = nextNode();
            return;
        L14:
            return;
        L5:
            if (r2 != this.mNext) goto L7;
            this.mNext = null;
            this.mExpectedEnd = null;
            goto L7
        }

        private Entry<K, V> nextNode() {
            Entry<K, V> r0 = this.mNext;
            Entry<K, V> r1 = this.mExpectedEnd;
            if (r0 == r1) goto L8;
            if (r1 != null) goto L7;
            return null;
        L7:
            return forward(r0);
        L8:
            return null;
        }

        @Override
        public Map.Entry<K, V> next() {
            Entry<K, V> r0 = this.mNext;
            this.mNext = nextNode();
            return r0;
        }
    }

    interface SupportRemove<K, V> {
        void supportRemove(@NonNull Entry<K, V> r1);
    }

    public SafeIterableMap() {
        this.mIterators = new WeakHashMap();
        this.mSize = 0;
    }

    static Entry access$100(SafeIterableMap r0) {
        return r0.mStart;
    }

    protected Entry<K, V> get(K r3) {
        Entry<K, V> r0 = this.mStart;
    L3:
        if (r0 == null) goto L8;
        if (r0.mKey.equals(r3) == true) goto L8;
        r0 = r0.mNext;
    L8:
        return r0;
    }

    public V putIfAbsent(@NonNull K r2, @NonNull V r3) {
        Entry<K, V> r0 = get(r2);
        if (r0 != null) goto L5;
        put(r2, r3);
        return null;
    L5:
        return r0.mValue;
    }

    protected Entry<K, V> put(@NonNull K r2, @NonNull V r3) {
        Entry<K, V> r0 = new Entry(r2, r3);
        this.mSize++;
        Entry<K, V> r22 = this.mEnd;
        if (r22 != null) goto L6;
        this.mStart = r0;
        this.mEnd = this.mStart;
        return r0;
    L6:
        r22.mNext = r0;
        r0.mPrevious = r22;
        this.mEnd = r0;
        return r0;
    }

    public V remove(@NonNull K r4) {
        Entry<K, V> r42 = get(r4);
        if (r42 != null) goto L5;
        return null;
    L5:
        this.mSize--;
        if (this.mIterators.isEmpty() == true) goto L12;
        Iterator<SupportRemove<K, V>> r1 = this.mIterators.keySet().iterator();
    L9:
        if (r1.hasNext() == false) goto L12;
        r1.next().supportRemove(r42);
    L12:
        if (r42.mPrevious == null) goto L14;
        r42.mPrevious.mNext = r42.mNext;
    L16:
        if (r42.mNext == null) goto L18;
        r42.mNext.mPrevious = r42.mPrevious;
    L19:
        r42.mNext = null;
        r42.mPrevious = null;
        return r42.mValue;
    L18:
        this.mEnd = r42.mPrevious;
        goto L19
    L14:
        this.mStart = r42.mNext;
        goto L16
    }

    public int size() {
        return this.mSize;
    }

    @Override
    @NonNull
    public Iterator<Map.Entry<K, V>> iterator() {
        AscendingIterator r0 = new AscendingIterator(this.mStart, this.mEnd);
        this.mIterators.put(r0, false);
        return r0;
    }

    public Iterator<Map.Entry<K, V>> descendingIterator() {
        DescendingIterator r0 = new DescendingIterator(this.mEnd, this.mStart);
        this.mIterators.put(r0, false);
        return r0;
    }

    public SafeIterableMap<K, V>.IteratorWithAdditions iteratorWithAdditions() {
        SafeIterableMap<K, V>.IteratorWithAdditions r0 = new IteratorWithAdditions(this, null);
        this.mIterators.put(r0, false);
        return r0;
    }

    public Map.Entry<K, V> eldest() {
        return this.mStart;
    }

    public Map.Entry<K, V> newest() {
        return this.mEnd;
    }

    public boolean equals(Object r6) {
        if (r6 != this) goto L6;
        return true;
    L6:
        if ((r6 instanceof SafeIterableMap) == true) goto L8;
        return false;
    L8:
        SafeIterableMap r62 = (SafeIterableMap) r6;
        if (size() == r62.size()) goto L11;
        return false;
    L11:
        Iterator<Map.Entry<K, V>> r1 = iterator();
        Iterator<Map.Entry<K, V>> r63 = r62.iterator();
    L13:
        if (r1.hasNext() == false) goto L24;
        if (r63.hasNext() == false) goto L24;
        Map.Entry<K, V> r3 = r1.next();
        Map.Entry<K, V> r4 = r63.next();
        if (r3 != null) goto L19;
        if (r4 == null) goto L19;
    L22:
        return false;
    L19:
        if (r3 == null) goto L13;
        if (r3.equals(r4) == true) goto L13;
    L24:
        if (r1.hasNext() == false) goto L26;
    L28:
        return false;
    L26:
        if (r63.hasNext() == true) goto L28;
        return true;
    }

    public String toString() {
        StringBuilder r0 = new StringBuilder();
        r0.append("[");
        Iterator<Map.Entry<K, V>> r1 = iterator();
    L4:
        if (r1.hasNext() == false) goto L8;
        r0.append(r1.next().toString());
        if (r1.hasNext() == false) goto L4;
        r0.append(", ");
        goto L4
    L8:
        r0.append("]");
        return r0.toString();
    }
}
