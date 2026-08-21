package com.google.gson.internal;

import java.io.IOException;
import java.io.InvalidObjectException;
import java.io.ObjectInputStream;
import java.io.ObjectStreamException;
import java.io.Serializable;
import java.util.AbstractMap;
import java.util.AbstractSet;
import java.util.Comparator;
import java.util.ConcurrentModificationException;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.NoSuchElementException;
import java.util.Objects;
import java.util.Set;

public final class LinkedTreeMap<K, V> extends AbstractMap<K, V> implements Serializable {
    static final boolean $assertionsDisabled = false;
    private static final Comparator<Comparable> NATURAL_ORDER = null;
    private final boolean allowNullValues;
    private final Comparator<? super K> comparator;
    private LinkedTreeMap<K, V>.EntrySet entrySet;
    final Node<K, V> header;
    private LinkedTreeMap<K, V>.KeySet keySet;
    int modCount;
    Node<K, V> root;
    int size;

    class EntrySet extends AbstractSet<Map.Entry<K, V>> {
        final LinkedTreeMap this$0;

        EntrySet(LinkedTreeMap r1) {
            this.this$0 = r1;
        }

        @Override
        public int size() {
            return this.this$0.size;
        }

        @Override
        public Iterator<Map.Entry<K, V>> iterator() {
            return new 1(this);
        }

        @Override
        public boolean contains(Object r2) {
            if ((r2 instanceof Map.Entry) == true) goto L5;
        L7:
            return false;
        L5:
            if (this.this$0.findByEntry((Map.Entry) r2) == null) goto L7;
            return true;
        }

        @Override
        public boolean remove(Object r3) {
            if ((r3 instanceof Map.Entry) == true) goto L5;
            return false;
        L5:
            Node<K, V> r32 = this.this$0.findByEntry((Map.Entry) r3);
            if (r32 != null) goto L8;
            return false;
        L8:
            this.this$0.removeInternal(r32, true);
            return true;
        }

        @Override
        public void clear() {
            this.this$0.clear();
        }
    }

    final class KeySet extends AbstractSet<K> {
        final LinkedTreeMap this$0;

        KeySet(LinkedTreeMap r1) {
            this.this$0 = r1;
        }

        @Override
        public int size() {
            return this.this$0.size;
        }

        @Override
        public Iterator<K> iterator() {
            return new 1(this);
        }

        @Override
        public boolean contains(Object r2) {
            return this.this$0.containsKey(r2);
        }

        @Override
        public boolean remove(Object r2) {
            if (this.this$0.removeInternalByKey(r2) == null) goto L5;
            return true;
        L5:
            return false;
        }

        @Override
        public void clear() {
            this.this$0.clear();
        }
    }

    private abstract class LinkedTreeMapIterator<T> implements Iterator<T> {
        int expectedModCount;
        Node<K, V> lastReturned;
        Node<K, V> next;
        final LinkedTreeMap this$0;

        LinkedTreeMapIterator(LinkedTreeMap r1) {
            this.this$0 = r1;
            this.next = this.this$0.header.next;
            this.lastReturned = null;
            this.expectedModCount = this.this$0.modCount;
        }

        @Override
        public final boolean hasNext() {
            if (this.next == this.this$0.header) goto L5;
            return true;
        L5:
            return false;
        }

        final Node<K, V> nextNode() {
            Node<K, V> r0 = this.next;
            if (r0 == this.this$0.header) goto L11;
            if (this.this$0.modCount != this.expectedModCount) goto L9;
            this.next = r0.next;
            this.lastReturned = r0;
            return r0;
        L9:
            throw new ConcurrentModificationException();
        L11:
            throw new NoSuchElementException();
        }

        @Override
        public final void remove() {
            Node<K, V> r0 = this.lastReturned;
            if (r0 == null) goto L7;
            this.this$0.removeInternal(r0, true);
            this.lastReturned = null;
            this.expectedModCount = this.this$0.modCount;
            return;
        L7:
            throw new IllegalStateException();
        }
    }

    static final class Node<K, V> implements Map.Entry<K, V> {
        final boolean allowNullValue;
        int height;
        final K key;
        Node<K, V> left;
        Node<K, V> next;
        Node<K, V> parent;
        Node<K, V> prev;
        Node<K, V> right;
        V value;

        Node(boolean r2) {
            this.key = null;
            this.allowNullValue = r2;
            this.prev = this;
            this.next = this;
        }

        Node(boolean r1, Node<K, V> r2, K r3, Node<K, V> r4, Node<K, V> r5) {
            this.parent = r2;
            this.key = r3;
            this.allowNullValue = r1;
            this.height = 1;
            this.next = r4;
            this.prev = r5;
            r5.next = this;
            r4.prev = this;
        }

        @Override
        public K getKey() {
            return this.key;
        }

        @Override
        public V getValue() {
            return this.value;
        }

        @Override
        public V setValue(V r2) {
            if (r2 == null) goto L4;
        L8:
            V r0 = this.value;
            this.value = r2;
            return r0;
        L4:
            if (this.allowNullValue == true) goto L8;
            throw new NullPointerException("value == null");
        }

        @Override
        public boolean equals(Object r4) {
            if ((r4 instanceof Map.Entry) == false) goto L20;
            Map.Entry r42 = (Map.Entry) r4;
            K r0 = this.key;
            if (r0 != null) goto L10;
            if (r42.getKey() != null) goto L21;
        L11:
            V r02 = this.value;
            if (r02 != null) goto L17;
            if (r42.getValue() != null) goto L23;
        L18:
            return true;
        L23:
            return false;
        L17:
            if (r02.equals(r42.getValue()) == true) goto L18;
            return false;
        L21:
            return false;
        L10:
            if (r0.equals(r42.getKey()) == true) goto L11;
            return false;
        L20:
            return false;
        }

        @Override
        public int hashCode() {
            K r0 = this.key;
            int r1 = 0;
            if (r0 != null) goto L5;
            int r02 = 0;
        L6:
            V r2 = this.value;
            if (r2 == null) goto L11;
            r1 = r2.hashCode();
        L11:
            return r02 ^ r1;
        L5:
            r02 = r0.hashCode();
            goto L6
        }

        public String toString() {
            return this.key + "=" + this.value;
        }

        public Node<K, V> first() {
            Node<K, V> r0 = this.left;
            Node<K, V> r1 = this;
        L3:
            if (r0 == null) goto L5;
            r1 = r0;
            r0 = r0.left;
            goto L3
        L5:
            return r1;
        }

        public Node<K, V> last() {
            Node<K, V> r0 = this.right;
            Node<K, V> r1 = this;
        L3:
            if (r0 == null) goto L5;
            r1 = r0;
            r0 = r0.right;
            goto L3
        L5:
            return r1;
        }
    }

    static {
        NATURAL_ORDER = new 1();
    }

    public LinkedTreeMap() {
        this(NATURAL_ORDER, true);
    }

    public LinkedTreeMap(boolean r2) {
        this(NATURAL_ORDER, r2);
    }

    public LinkedTreeMap(Comparator<? super K> r2, boolean r3) {
        this.size = 0;
        this.modCount = 0;
        if (r2 != null) goto L6;
        r2 = NATURAL_ORDER;
    L6:
        this.comparator = r2;
        this.allowNullValues = r3;
        this.header = new Node(r3);
    }

    @Override
    public int size() {
        return this.size;
    }

    @Override
    public V get(Object r1) {
        Node<K, V> r12 = findByObject(r1);
        if (r12 != null) goto L7;
        return null;
    L7:
        return r12.value;
    }

    @Override
    public boolean containsKey(Object r1) {
        if (findByObject(r1) == null) goto L5;
        return true;
    L5:
        return false;
    }

    @Override
    public V put(K r2, V r3) {
        if (r2 == null) goto L12;
        if (r3 == null) goto L5;
    L9:
        Node<K, V> r22 = find(r2, true);
        V r0 = r22.value;
        r22.value = r3;
        return r0;
    L5:
        if (this.allowNullValues == true) goto L9;
        throw new NullPointerException("value == null");
    L12:
        throw new NullPointerException("key == null");
    }

    @Override
    public void clear() {
        this.root = null;
        this.size = 0;
        this.modCount++;
        Node<K, V> r0 = this.header;
        r0.prev = r0;
        r0.next = r0;
    }

    @Override
    public V remove(Object r1) {
        Node<K, V> r12 = removeInternalByKey(r1);
        if (r12 != null) goto L7;
        return null;
    L7:
        return r12.value;
    }

    Node<K, V> find(K r12, boolean r13) {
        Comparator<? super K> r0 = this.comparator;
        Node<K, V> r1 = this.root;
        if (r1 != null) goto L5;
        int r4 = 0;
    L20:
        if (r13 == true) goto L22;
        return null;
    L22:
        Node<K, V> r9 = this.header;
        if (r1 == null) goto L25;
        Node<K, V> r02 = new Node(this.allowNullValues, r1, r12, r9, r9.prev);
        if (r4 >= 0) goto L35;
        r1.left = r02;
    L36:
        rebalance(r1, true);
    L37:
        this.size++;
        this.modCount++;
        return r02;
    L35:
        r1.right = r02;
        goto L36
    L25:
        if (r0 == NATURAL_ORDER) goto L27;
    L31:
        r02 = new Node(this.allowNullValues, r1, r12, r9, r9.prev);
        this.root = r02;
        goto L37
    L27:
        if ((r12 instanceof Comparable) == true) goto L31;
        throw new ClassCastException(r12.getClass().getName() + " is not Comparable");
    L5:
        if (r0 != NATURAL_ORDER) goto L7;
        Comparable r3 = (Comparable) r12;
    L8:
        if (r3 == null) goto L10;
        r4 = r3.compareTo(r1.key);
    L11:
        if (r4 == 0) goto L12;
        if (r4 >= 0) goto L15;
        Node<K, V> r5 = r1.left;
    L16:
        if (r5 == null) goto L20;
        r1 = r5;
        goto L8
    L15:
        r5 = r1.right;
        goto L16
    L12:
        return r1;
    L10:
        r4 = r0.compare(r12, r1.key);
        goto L11
    L7:
        r3 = null;
        goto L8
    }

    /* JADX WARN: Multi-variable type inference failed */
    Node<K, V> findByObject(Object r3) {
        if (r3 != 0) goto L8;
        return null;
    L8:
        return find(r3, false);
    L11:
        return null;
    }

    Node<K, V> findByEntry(Map.Entry<?, ?> r3) {
        Node<K, V> r0 = findByObject(r3.getKey());
        if (r0 != null) goto L5;
    L7:
        boolean r32 = false;
    L8:
        if (r32 == true) goto L12;
        return null;
    L12:
        return r0;
    L5:
        if (equal(r0.value, r3.getValue()) == false) goto L7;
        r32 = true;
        goto L8
    }

    private boolean equal(Object r1, Object r2) {
        return Objects.equals(r1, r2);
    }

    void removeInternal(Node<K, V> r6, boolean r7) {
        if (r7 == false) goto L4;
        r6.prev.next = r6.next;
        r6.next.prev = r6.prev;
    L4:
        Node<K, V> r72 = r6.left;
        Node<K, V> r0 = r6.right;
        Node<K, V> r1 = r6.parent;
        int r2 = 0;
        if (r72 == null) goto L20;
        if (r0 == null) goto L20;
        if (r72.height <= r0.height) goto L10;
        Node<K, V> r73 = r72.last();
    L11:
        removeInternal(r73, false);
        Node<K, V> r02 = r6.left;
        if (r02 == null) goto L14;
        int r12 = r02.height;
        r73.left = r02;
        r02.parent = r73;
        r6.left = null;
    L15:
        Node<K, V> r03 = r6.right;
        if (r03 == null) goto L18;
        r2 = r03.height;
        r73.right = r03;
        r03.parent = r73;
        r6.right = null;
    L18:
        r73.height = Math.max(r12, r2) + 1;
        replaceInParent(r6, r73);
        return;
    L14:
        r12 = 0;
        goto L15
    L10:
        r73 = r0.first();
    L20:
        if (r72 == null) goto L22;
        replaceInParent(r6, r72);
        r6.left = null;
    L25:
        rebalance(r1, false);
        this.size--;
        this.modCount++;
        return;
    L22:
        if (r0 == null) goto L24;
        replaceInParent(r6, r0);
        r6.right = null;
        goto L25
    L24:
        replaceInParent(r6, null);
        goto L25
    }

    Node<K, V> removeInternalByKey(Object r2) {
        Node<K, V> r22 = findByObject(r2);
        if (r22 == null) goto L5;
        removeInternal(r22, true);
    L5:
        return r22;
    }

    private void replaceInParent(Node<K, V> r3, Node<K, V> r4) {
        Node<K, V> r0 = r3.parent;
        r3.parent = null;
        if (r4 == null) goto L5;
        r4.parent = r0;
    L5:
        if (r0 != null) goto L7;
        this.root = r4;
        return;
    L7:
        if (r0.left != r3) goto L9;
        r0.left = r4;
        return;
    L9:
        r0.right = r4;
    }

    private void rebalance(Node<K, V> r8, boolean r9) {
    L2:
        if (r8 == null) goto L52;
        Node<K, V> r0 = r8.left;
        Node<K, V> r1 = r8.right;
        int r2 = 0;
        if (r0 == null) goto L6;
        int r3 = r0.height;
    L7:
        if (r1 == null) goto L9;
        int r4 = r1.height;
    L10:
        int r5 = r3 - r4;
        if (r5 != (-2)) goto L28;
        Node<K, V> r02 = r1.left;
        Node<K, V> r32 = r1.right;
        if (r32 == null) goto L15;
        int r33 = r32.height;
    L16:
        if (r02 == null) goto L18;
        r2 = r02.height;
    L18:
        int r22 = r2 - r33;
        if (r22 == (-1)) goto L24;
        if (r22 != 0) goto L23;
        if (r9 == false) goto L24;
    L23:
        rotateRight(r1);
        rotateLeft(r8);
    L25:
        if (r9 == false) goto L51;
        return;
    L51:
        r8 = r8.parent;
    L24:
        rotateLeft(r8);
        goto L25
    L15:
        r33 = 0;
        goto L16
    L28:
        if (r5 != 2) goto L44;
        Node<K, V> r12 = r0.left;
        Node<K, V> r34 = r0.right;
        if (r34 == null) goto L32;
        int r35 = r34.height;
    L33:
        if (r12 == null) goto L35;
        r2 = r12.height;
    L35:
        int r23 = r2 - r35;
        if (r23 == 1) goto L41;
        if (r23 != 0) goto L40;
        if (r9 == false) goto L41;
    L40:
        rotateLeft(r0);
        rotateRight(r8);
    L42:
        if (r9 == false) goto L51;
        return;
    L41:
        rotateRight(r8);
        goto L42
    L32:
        r35 = 0;
        goto L33
    L44:
        if (r5 != 0) goto L48;
        r8.height = r3 + 1;
        if (r9 == false) goto L51;
        return;
    L48:
        r8.height = Math.max(r3, r4) + 1;
        if (r9 == true) goto L51;
        return;
    L9:
        r4 = 0;
        goto L10
    L6:
        r3 = 0;
        goto L7
    }

    private void rotateLeft(Node<K, V> r6) {
        Node<K, V> r0 = r6.left;
        Node<K, V> r1 = r6.right;
        Node<K, V> r2 = r1.left;
        Node<K, V> r3 = r1.right;
        r6.right = r2;
        if (r2 == null) goto L5;
        r2.parent = r6;
    L5:
        replaceInParent(r6, r1);
        r1.left = r6;
        r6.parent = r1;
        int r4 = 0;
        if (r0 == null) goto L8;
        int r02 = r0.height;
    L9:
        if (r2 == null) goto L11;
        int r22 = r2.height;
    L12:
        r6.height = Math.max(r02, r22) + 1;
        int r62 = r6.height;
        if (r3 == null) goto L15;
        r4 = r3.height;
    L15:
        r1.height = Math.max(r62, r4) + 1;
        return;
    L11:
        r22 = 0;
        goto L12
    L8:
        r02 = 0;
        goto L9
    }

    private void rotateRight(Node<K, V> r6) {
        Node<K, V> r0 = r6.left;
        Node<K, V> r1 = r6.right;
        Node<K, V> r2 = r0.left;
        Node<K, V> r3 = r0.right;
        r6.left = r3;
        if (r3 == null) goto L5;
        r3.parent = r6;
    L5:
        replaceInParent(r6, r0);
        r0.right = r6;
        r6.parent = r0;
        int r4 = 0;
        if (r1 == null) goto L8;
        int r12 = r1.height;
    L9:
        if (r3 == null) goto L11;
        int r32 = r3.height;
    L12:
        r6.height = Math.max(r12, r32) + 1;
        int r62 = r6.height;
        if (r2 == null) goto L15;
        r4 = r2.height;
    L15:
        r0.height = Math.max(r62, r4) + 1;
        return;
    L11:
        r32 = 0;
        goto L12
    L8:
        r12 = 0;
        goto L9
    }

    @Override
    public Set<Map.Entry<K, V>> entrySet() {
        LinkedTreeMap<K, V>.EntrySet r0 = this.entrySet;
        if (r0 != null) goto L7;
        LinkedTreeMap<K, V>.EntrySet r02 = new EntrySet(this);
        this.entrySet = r02;
        return r02;
    L7:
        return r0;
    }

    @Override
    public Set<K> keySet() {
        LinkedTreeMap<K, V>.KeySet r0 = this.keySet;
        if (r0 != null) goto L7;
        LinkedTreeMap<K, V>.KeySet r02 = new KeySet(this);
        this.keySet = r02;
        return r02;
    L7:
        return r0;
    }

    private Object writeReplace() throws ObjectStreamException {
        return new LinkedHashMap(this);
    }

    private void readObject(ObjectInputStream r2) throws IOException {
        throw new InvalidObjectException("Deserialization is unsupported");
    }
}
