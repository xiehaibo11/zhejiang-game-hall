package com.google.gson.internal;

public final class LinkedTreeMap<K, V> extends java.util.AbstractMap<K, V> implements java.io.Serializable {
    static final boolean $assertionsDisabled = false;
    private static final java.util.Comparator<java.lang.Comparable> NATURAL_ORDER = null;
    private final boolean allowNullValues;
    private final java.util.Comparator<? super K> comparator;
    private com.google.gson.internal.LinkedTreeMap<K, V>.EntrySet entrySet;
    final com.google.gson.internal.LinkedTreeMap.Node<K, V> header;
    private com.google.gson.internal.LinkedTreeMap<K, V>.KeySet keySet;
    int modCount;
    com.google.gson.internal.LinkedTreeMap.Node<K, V> root;
    int size;


    class EntrySet extends java.util.AbstractSet<java.util.Map.Entry<K, V>> {
        final com.google.gson.internal.LinkedTreeMap this$0;


        EntrySet(com.google.gson.internal.LinkedTreeMap r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void clear() {
                r1 = this;
                com.google.gson.internal.LinkedTreeMap r0 = r1.this$0
                r0.clear()
                return
        }

        @Override
        public boolean contains(java.lang.Object r2) {
                r1 = this;
                boolean r0 = r2 instanceof java.util.Map.Entry
                if (r0 == 0) goto L10
                com.google.gson.internal.LinkedTreeMap r0 = r1.this$0
                java.util.Map$Entry r2 = (java.util.Map.Entry) r2
                com.google.gson.internal.LinkedTreeMap$Node r2 = r0.findByEntry(r2)
                if (r2 == 0) goto L10
                r2 = 1
                goto L11
            L10:
                r2 = 0
            L11:
                return r2
        }

        @Override
        public java.util.Iterator<java.util.Map.Entry<K, V>> iterator() {
                r1 = this;
                com.google.gson.internal.LinkedTreeMap$EntrySet$1 r0 = new com.google.gson.internal.LinkedTreeMap$EntrySet$1
                r0.<init>(r1)
                return r0
        }

        @Override
        public boolean remove(java.lang.Object r3) {
                r2 = this;
                boolean r0 = r3 instanceof java.util.Map.Entry
                r1 = 0
                if (r0 != 0) goto L6
                return r1
            L6:
                com.google.gson.internal.LinkedTreeMap r0 = r2.this$0
                java.util.Map$Entry r3 = (java.util.Map.Entry) r3
                com.google.gson.internal.LinkedTreeMap$Node r3 = r0.findByEntry(r3)
                if (r3 != 0) goto L11
                return r1
            L11:
                com.google.gson.internal.LinkedTreeMap r0 = r2.this$0
                r1 = 1
                r0.removeInternal(r3, r1)
                return r1
        }

        @Override
        public int size() {
                r1 = this;
                com.google.gson.internal.LinkedTreeMap r0 = r1.this$0
                int r0 = r0.size
                return r0
        }
    }

    final class KeySet extends java.util.AbstractSet<K> {
        final com.google.gson.internal.LinkedTreeMap this$0;


        KeySet(com.google.gson.internal.LinkedTreeMap r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void clear() {
                r1 = this;
                com.google.gson.internal.LinkedTreeMap r0 = r1.this$0
                r0.clear()
                return
        }

        @Override
        public boolean contains(java.lang.Object r2) {
                r1 = this;
                com.google.gson.internal.LinkedTreeMap r0 = r1.this$0
                boolean r2 = r0.containsKey(r2)
                return r2
        }

        @Override
        public java.util.Iterator<K> iterator() {
                r1 = this;
                com.google.gson.internal.LinkedTreeMap$KeySet$1 r0 = new com.google.gson.internal.LinkedTreeMap$KeySet$1
                r0.<init>(r1)
                return r0
        }

        @Override
        public boolean remove(java.lang.Object r2) {
                r1 = this;
                com.google.gson.internal.LinkedTreeMap r0 = r1.this$0
                com.google.gson.internal.LinkedTreeMap$Node r2 = r0.removeInternalByKey(r2)
                if (r2 == 0) goto La
                r2 = 1
                goto Lb
            La:
                r2 = 0
            Lb:
                return r2
        }

        @Override
        public int size() {
                r1 = this;
                com.google.gson.internal.LinkedTreeMap r0 = r1.this$0
                int r0 = r0.size
                return r0
        }
    }

    private abstract class LinkedTreeMapIterator<T> implements java.util.Iterator<T> {
        int expectedModCount;
        com.google.gson.internal.LinkedTreeMap.Node<K, V> lastReturned;
        com.google.gson.internal.LinkedTreeMap.Node<K, V> next;
        final com.google.gson.internal.LinkedTreeMap this$0;

        LinkedTreeMapIterator(com.google.gson.internal.LinkedTreeMap r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                com.google.gson.internal.LinkedTreeMap r1 = r0.this$0
                com.google.gson.internal.LinkedTreeMap$Node<K, V> r1 = r1.header
                com.google.gson.internal.LinkedTreeMap$Node<K, V> r1 = r1.next
                r0.next = r1
                r1 = 0
                r0.lastReturned = r1
                com.google.gson.internal.LinkedTreeMap r1 = r0.this$0
                int r1 = r1.modCount
                r0.expectedModCount = r1
                return
        }

        @Override
        public final boolean hasNext() {
                r2 = this;
                com.google.gson.internal.LinkedTreeMap$Node<K, V> r0 = r2.next
                com.google.gson.internal.LinkedTreeMap r1 = r2.this$0
                com.google.gson.internal.LinkedTreeMap$Node<K, V> r1 = r1.header
                if (r0 == r1) goto La
                r0 = 1
                goto Lb
            La:
                r0 = 0
            Lb:
                return r0
        }

        final com.google.gson.internal.LinkedTreeMap.Node<K, V> nextNode() {
                r3 = this;
                com.google.gson.internal.LinkedTreeMap$Node<K, V> r0 = r3.next
                com.google.gson.internal.LinkedTreeMap r1 = r3.this$0
                com.google.gson.internal.LinkedTreeMap$Node<K, V> r1 = r1.header
                if (r0 == r1) goto L1d
                com.google.gson.internal.LinkedTreeMap r1 = r3.this$0
                int r1 = r1.modCount
                int r2 = r3.expectedModCount
                if (r1 != r2) goto L17
                com.google.gson.internal.LinkedTreeMap$Node<K, V> r1 = r0.next
                r3.next = r1
                r3.lastReturned = r0
                return r0
            L17:
                java.util.ConcurrentModificationException r0 = new java.util.ConcurrentModificationException
                r0.<init>()
                throw r0
            L1d:
                java.util.NoSuchElementException r0 = new java.util.NoSuchElementException
                r0.<init>()
                throw r0
        }

        @Override
        public final void remove() {
                r3 = this;
                com.google.gson.internal.LinkedTreeMap$Node<K, V> r0 = r3.lastReturned
                if (r0 == 0) goto L14
                com.google.gson.internal.LinkedTreeMap r1 = r3.this$0
                r2 = 1
                r1.removeInternal(r0, r2)
                r0 = 0
                r3.lastReturned = r0
                com.google.gson.internal.LinkedTreeMap r0 = r3.this$0
                int r0 = r0.modCount
                r3.expectedModCount = r0
                return
            L14:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                r0.<init>()
                throw r0
        }
    }

    static final class Node<K, V> implements java.util.Map.Entry<K, V> {
        final boolean allowNullValue;
        int height;
        final K key;
        com.google.gson.internal.LinkedTreeMap.Node<K, V> left;
        com.google.gson.internal.LinkedTreeMap.Node<K, V> next;
        com.google.gson.internal.LinkedTreeMap.Node<K, V> parent;
        com.google.gson.internal.LinkedTreeMap.Node<K, V> prev;
        com.google.gson.internal.LinkedTreeMap.Node<K, V> right;
        V value;

        Node(boolean r2) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.key = r0
                r1.allowNullValue = r2
                r1.prev = r1
                r1.next = r1
                return
        }

        Node(boolean r1, com.google.gson.internal.LinkedTreeMap.Node<K, V> r2, K r3, com.google.gson.internal.LinkedTreeMap.Node<K, V> r4, com.google.gson.internal.LinkedTreeMap.Node<K, V> r5) {
                r0 = this;
                r0.<init>()
                r0.parent = r2
                r0.key = r3
                r0.allowNullValue = r1
                r1 = 1
                r0.height = r1
                r0.next = r4
                r0.prev = r5
                r5.next = r0
                r4.prev = r0
                return
        }

        @Override
        public boolean equals(java.lang.Object r4) {
                r3 = this;
                boolean r0 = r4 instanceof java.util.Map.Entry
                r1 = 0
                if (r0 == 0) goto L32
                java.util.Map$Entry r4 = (java.util.Map.Entry) r4
                K r0 = r3.key
                if (r0 != 0) goto L12
                java.lang.Object r0 = r4.getKey()
                if (r0 != 0) goto L32
                goto L1c
            L12:
                java.lang.Object r2 = r4.getKey()
                boolean r0 = r0.equals(r2)
                if (r0 == 0) goto L32
            L1c:
                V r0 = r3.value
                if (r0 != 0) goto L27
                java.lang.Object r4 = r4.getValue()
                if (r4 != 0) goto L32
                goto L31
            L27:
                java.lang.Object r4 = r4.getValue()
                boolean r4 = r0.equals(r4)
                if (r4 == 0) goto L32
            L31:
                r1 = 1
            L32:
                return r1
        }

        public com.google.gson.internal.LinkedTreeMap.Node<K, V> first() {
                r3 = this;
                com.google.gson.internal.LinkedTreeMap$Node<K, V> r0 = r3.left
                r1 = r3
            L3:
                if (r0 == 0) goto Lb
                com.google.gson.internal.LinkedTreeMap$Node<K, V> r1 = r0.left
                r2 = r1
                r1 = r0
                r0 = r2
                goto L3
            Lb:
                return r1
        }

        @Override
        public K getKey() {
                r1 = this;
                K r0 = r1.key
                return r0
        }

        @Override
        public V getValue() {
                r1 = this;
                V r0 = r1.value
                return r0
        }

        @Override
        public int hashCode() {
                r3 = this;
                K r0 = r3.key
                r1 = 0
                if (r0 != 0) goto L7
                r0 = 0
                goto Lb
            L7:
                int r0 = r0.hashCode()
            Lb:
                V r2 = r3.value
                if (r2 != 0) goto L10
                goto L14
            L10:
                int r1 = r2.hashCode()
            L14:
                r0 = r0 ^ r1
                return r0
        }

        public com.google.gson.internal.LinkedTreeMap.Node<K, V> last() {
                r3 = this;
                com.google.gson.internal.LinkedTreeMap$Node<K, V> r0 = r3.right
                r1 = r3
            L3:
                if (r0 == 0) goto Lb
                com.google.gson.internal.LinkedTreeMap$Node<K, V> r1 = r0.right
                r2 = r1
                r1 = r0
                r0 = r2
                goto L3
            Lb:
                return r1
        }

        @Override
        public V setValue(V r2) {
                r1 = this;
                if (r2 != 0) goto Lf
                boolean r0 = r1.allowNullValue
                if (r0 == 0) goto L7
                goto Lf
            L7:
                java.lang.NullPointerException r2 = new java.lang.NullPointerException
                java.lang.String r0 = "value == null"
                r2.<init>(r0)
                throw r2
            Lf:
                V r0 = r1.value
                r1.value = r2
                return r0
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                K r1 = r2.key
                r0.append(r1)
                java.lang.String r1 = "="
                r0.append(r1)
                V r1 = r2.value
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    static {
            com.google.gson.internal.LinkedTreeMap$1 r0 = new com.google.gson.internal.LinkedTreeMap$1
            r0.<init>()
            com.google.gson.internal.LinkedTreeMap.NATURAL_ORDER = r0
            return
    }

    public LinkedTreeMap() {
            r2 = this;
            java.util.Comparator<java.lang.Comparable> r0 = com.google.gson.internal.LinkedTreeMap.NATURAL_ORDER
            r1 = 1
            r2.<init>(r0, r1)
            return
    }

    public LinkedTreeMap(java.util.Comparator<? super K> r2, boolean r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.size = r0
            r1.modCount = r0
            if (r2 == 0) goto Lb
            goto Ld
        Lb:
            java.util.Comparator<java.lang.Comparable> r2 = com.google.gson.internal.LinkedTreeMap.NATURAL_ORDER
        Ld:
            r1.comparator = r2
            r1.allowNullValues = r3
            com.google.gson.internal.LinkedTreeMap$Node r2 = new com.google.gson.internal.LinkedTreeMap$Node
            r2.<init>(r3)
            r1.header = r2
            return
    }

    public LinkedTreeMap(boolean r2) {
            r1 = this;
            java.util.Comparator<java.lang.Comparable> r0 = com.google.gson.internal.LinkedTreeMap.NATURAL_ORDER
            r1.<init>(r0, r2)
            return
    }

    private boolean equal(java.lang.Object r1, java.lang.Object r2) {
            r0 = this;
            boolean r1 = java.util.Objects.equals(r1, r2)
            return r1
    }

    private void readObject(java.io.ObjectInputStream r2) throws java.io.IOException {
            r1 = this;
            java.io.InvalidObjectException r2 = new java.io.InvalidObjectException
            java.lang.String r0 = "Deserialization is unsupported"
            r2.<init>(r0)
            throw r2
    }

    private void rebalance(com.google.gson.internal.LinkedTreeMap.Node<K, V> r8, boolean r9) {
            r7 = this;
        L0:
            if (r8 == 0) goto L79
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r0 = r8.left
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r1 = r8.right
            r2 = 0
            if (r0 == 0) goto Lc
            int r3 = r0.height
            goto Ld
        Lc:
            r3 = 0
        Ld:
            if (r1 == 0) goto L12
            int r4 = r1.height
            goto L13
        L12:
            r4 = 0
        L13:
            int r5 = r3 - r4
            r6 = -2
            if (r5 != r6) goto L3c
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r0 = r1.left
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r3 = r1.right
            if (r3 == 0) goto L21
            int r3 = r3.height
            goto L22
        L21:
            r3 = 0
        L22:
            if (r0 == 0) goto L26
            int r2 = r0.height
        L26:
            int r2 = r2 - r3
            r0 = -1
            if (r2 == r0) goto L36
            if (r2 != 0) goto L2f
            if (r9 != 0) goto L2f
            goto L36
        L2f:
            r7.rotateRight(r1)
            r7.rotateLeft(r8)
            goto L39
        L36:
            r7.rotateLeft(r8)
        L39:
            if (r9 == 0) goto L76
            goto L79
        L3c:
            r1 = 2
            r6 = 1
            if (r5 != r1) goto L63
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r1 = r0.left
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r3 = r0.right
            if (r3 == 0) goto L49
            int r3 = r3.height
            goto L4a
        L49:
            r3 = 0
        L4a:
            if (r1 == 0) goto L4e
            int r2 = r1.height
        L4e:
            int r2 = r2 - r3
            if (r2 == r6) goto L5d
            if (r2 != 0) goto L56
            if (r9 != 0) goto L56
            goto L5d
        L56:
            r7.rotateLeft(r0)
            r7.rotateRight(r8)
            goto L60
        L5d:
            r7.rotateRight(r8)
        L60:
            if (r9 == 0) goto L76
            goto L79
        L63:
            if (r5 != 0) goto L6c
            int r3 = r3 + 1
            r8.height = r3
            if (r9 == 0) goto L76
            goto L79
        L6c:
            int r0 = java.lang.Math.max(r3, r4)
            int r0 = r0 + r6
            r8.height = r0
            if (r9 != 0) goto L76
            goto L79
        L76:
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r8 = r8.parent
            goto L0
        L79:
            return
    }

    private void replaceInParent(com.google.gson.internal.LinkedTreeMap.Node<K, V> r3, com.google.gson.internal.LinkedTreeMap.Node<K, V> r4) {
            r2 = this;
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r0 = r3.parent
            r1 = 0
            r3.parent = r1
            if (r4 == 0) goto L9
            r4.parent = r0
        L9:
            if (r0 == 0) goto L15
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r1 = r0.left
            if (r1 != r3) goto L12
            r0.left = r4
            goto L17
        L12:
            r0.right = r4
            goto L17
        L15:
            r2.root = r4
        L17:
            return
    }

    private void rotateLeft(com.google.gson.internal.LinkedTreeMap.Node<K, V> r6) {
            r5 = this;
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r0 = r6.left
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r1 = r6.right
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r2 = r1.left
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r3 = r1.right
            r6.right = r2
            if (r2 == 0) goto Le
            r2.parent = r6
        Le:
            r5.replaceInParent(r6, r1)
            r1.left = r6
            r6.parent = r1
            r4 = 0
            if (r0 == 0) goto L1b
            int r0 = r0.height
            goto L1c
        L1b:
            r0 = 0
        L1c:
            if (r2 == 0) goto L21
            int r2 = r2.height
            goto L22
        L21:
            r2 = 0
        L22:
            int r0 = java.lang.Math.max(r0, r2)
            int r0 = r0 + 1
            r6.height = r0
            int r6 = r6.height
            if (r3 == 0) goto L30
            int r4 = r3.height
        L30:
            int r6 = java.lang.Math.max(r6, r4)
            int r6 = r6 + 1
            r1.height = r6
            return
    }

    private void rotateRight(com.google.gson.internal.LinkedTreeMap.Node<K, V> r6) {
            r5 = this;
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r0 = r6.left
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r1 = r6.right
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r2 = r0.left
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r3 = r0.right
            r6.left = r3
            if (r3 == 0) goto Le
            r3.parent = r6
        Le:
            r5.replaceInParent(r6, r0)
            r0.right = r6
            r6.parent = r0
            r4 = 0
            if (r1 == 0) goto L1b
            int r1 = r1.height
            goto L1c
        L1b:
            r1 = 0
        L1c:
            if (r3 == 0) goto L21
            int r3 = r3.height
            goto L22
        L21:
            r3 = 0
        L22:
            int r1 = java.lang.Math.max(r1, r3)
            int r1 = r1 + 1
            r6.height = r1
            int r6 = r6.height
            if (r2 == 0) goto L30
            int r4 = r2.height
        L30:
            int r6 = java.lang.Math.max(r6, r4)
            int r6 = r6 + 1
            r0.height = r6
            return
    }

    private java.lang.Object writeReplace() throws java.io.ObjectStreamException {
            r1 = this;
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>(r1)
            return r0
    }

    @Override
    public void clear() {
            r1 = this;
            r0 = 0
            r1.root = r0
            r0 = 0
            r1.size = r0
            int r0 = r1.modCount
            int r0 = r0 + 1
            r1.modCount = r0
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r0 = r1.header
            r0.prev = r0
            r0.next = r0
            return
    }

    @Override
    public boolean containsKey(java.lang.Object r1) {
            r0 = this;
            com.google.gson.internal.LinkedTreeMap$Node r1 = r0.findByObject(r1)
            if (r1 == 0) goto L8
            r1 = 1
            goto L9
        L8:
            r1 = 0
        L9:
            return r1
    }

    @Override
    public java.util.Set<java.util.Map.Entry<K, V>> entrySet() {
            r1 = this;
            com.google.gson.internal.LinkedTreeMap<K, V>$EntrySet r0 = r1.entrySet
            if (r0 == 0) goto L5
            goto Lc
        L5:
            com.google.gson.internal.LinkedTreeMap$EntrySet r0 = new com.google.gson.internal.LinkedTreeMap$EntrySet
            r0.<init>(r1)
            r1.entrySet = r0
        Lc:
            return r0
    }

    com.google.gson.internal.LinkedTreeMap.Node<K, V> find(K r12, boolean r13) {
            r11 = this;
            java.util.Comparator<? super K> r0 = r11.comparator
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r1 = r11.root
            r2 = 0
            if (r1 == 0) goto L2e
            java.util.Comparator<java.lang.Comparable> r3 = com.google.gson.internal.LinkedTreeMap.NATURAL_ORDER
            if (r0 != r3) goto Lf
            r3 = r12
            java.lang.Comparable r3 = (java.lang.Comparable) r3
            goto L10
        Lf:
            r3 = r2
        L10:
            if (r3 == 0) goto L19
            K r4 = r1.key
            int r4 = r3.compareTo(r4)
            goto L1f
        L19:
            K r4 = r1.key
            int r4 = r0.compare(r12, r4)
        L1f:
            if (r4 != 0) goto L22
            return r1
        L22:
            if (r4 >= 0) goto L27
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r5 = r1.left
            goto L29
        L27:
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r5 = r1.right
        L29:
            if (r5 != 0) goto L2c
            goto L2f
        L2c:
            r1 = r5
            goto L10
        L2e:
            r4 = 0
        L2f:
            if (r13 != 0) goto L32
            return r2
        L32:
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r9 = r11.header
            r13 = 1
            if (r1 != 0) goto L6e
            java.util.Comparator<java.lang.Comparable> r2 = com.google.gson.internal.LinkedTreeMap.NATURAL_ORDER
            if (r0 != r2) goto L5f
            boolean r0 = r12 instanceof java.lang.Comparable
            if (r0 == 0) goto L40
            goto L5f
        L40:
            java.lang.ClassCastException r13 = new java.lang.ClassCastException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r12 = r12.getClass()
            java.lang.String r12 = r12.getName()
            r0.append(r12)
            java.lang.String r12 = " is not Comparable"
            r0.append(r12)
            java.lang.String r12 = r0.toString()
            r13.<init>(r12)
            throw r13
        L5f:
            com.google.gson.internal.LinkedTreeMap$Node r0 = new com.google.gson.internal.LinkedTreeMap$Node
            boolean r6 = r11.allowNullValues
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r10 = r9.prev
            r5 = r0
            r7 = r1
            r8 = r12
            r5.<init>(r6, r7, r8, r9, r10)
            r11.root = r0
            goto L84
        L6e:
            com.google.gson.internal.LinkedTreeMap$Node r0 = new com.google.gson.internal.LinkedTreeMap$Node
            boolean r6 = r11.allowNullValues
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r10 = r9.prev
            r5 = r0
            r7 = r1
            r8 = r12
            r5.<init>(r6, r7, r8, r9, r10)
            if (r4 >= 0) goto L7f
            r1.left = r0
            goto L81
        L7f:
            r1.right = r0
        L81:
            r11.rebalance(r1, r13)
        L84:
            int r12 = r11.size
            int r12 = r12 + r13
            r11.size = r12
            int r12 = r11.modCount
            int r12 = r12 + r13
            r11.modCount = r12
            return r0
    }

    com.google.gson.internal.LinkedTreeMap.Node<K, V> findByEntry(java.util.Map.Entry<?, ?> r3) {
            r2 = this;
            java.lang.Object r0 = r3.getKey()
            com.google.gson.internal.LinkedTreeMap$Node r0 = r2.findByObject(r0)
            if (r0 == 0) goto L18
            V r1 = r0.value
            java.lang.Object r3 = r3.getValue()
            boolean r3 = r2.equal(r1, r3)
            if (r3 == 0) goto L18
            r3 = 1
            goto L19
        L18:
            r3 = 0
        L19:
            if (r3 == 0) goto L1c
            goto L1d
        L1c:
            r0 = 0
        L1d:
            return r0
    }

    com.google.gson.internal.LinkedTreeMap.Node<K, V> findByObject(java.lang.Object r3) {
            r2 = this;
            r0 = 0
            if (r3 == 0) goto L9
            r1 = 0
            com.google.gson.internal.LinkedTreeMap$Node r0 = r2.find(r3, r1)     // Catch: java.lang.ClassCastException -> L9
        L9:
            return r0
    }

    @Override
    public V get(java.lang.Object r1) {
            r0 = this;
            com.google.gson.internal.LinkedTreeMap$Node r1 = r0.findByObject(r1)
            if (r1 == 0) goto L9
            V r1 = r1.value
            goto La
        L9:
            r1 = 0
        La:
            return r1
    }

    @Override
    public java.util.Set<K> keySet() {
            r1 = this;
            com.google.gson.internal.LinkedTreeMap<K, V>$KeySet r0 = r1.keySet
            if (r0 == 0) goto L5
            goto Lc
        L5:
            com.google.gson.internal.LinkedTreeMap$KeySet r0 = new com.google.gson.internal.LinkedTreeMap$KeySet
            r0.<init>(r1)
            r1.keySet = r0
        Lc:
            return r0
    }

    @Override
    public V put(K r2, V r3) {
            r1 = this;
            if (r2 == 0) goto L1b
            if (r3 != 0) goto L11
            boolean r0 = r1.allowNullValues
            if (r0 == 0) goto L9
            goto L11
        L9:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "value == null"
            r2.<init>(r3)
            throw r2
        L11:
            r0 = 1
            com.google.gson.internal.LinkedTreeMap$Node r2 = r1.find(r2, r0)
            V r0 = r2.value
            r2.value = r3
            return r0
        L1b:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "key == null"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public V remove(java.lang.Object r1) {
            r0 = this;
            com.google.gson.internal.LinkedTreeMap$Node r1 = r0.removeInternalByKey(r1)
            if (r1 == 0) goto L9
            V r1 = r1.value
            goto La
        L9:
            r1 = 0
        La:
            return r1
    }

    void removeInternal(com.google.gson.internal.LinkedTreeMap.Node<K, V> r6, boolean r7) {
            r5 = this;
            if (r7 == 0) goto Le
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r7 = r6.prev
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r0 = r6.next
            r7.next = r0
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r7 = r6.next
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r0 = r6.prev
            r7.prev = r0
        Le:
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r7 = r6.left
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r0 = r6.right
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r1 = r6.parent
            r2 = 0
            r3 = 0
            if (r7 == 0) goto L52
            if (r0 == 0) goto L52
            int r1 = r7.height
            int r4 = r0.height
            if (r1 <= r4) goto L25
            com.google.gson.internal.LinkedTreeMap$Node r7 = r7.last()
            goto L29
        L25:
            com.google.gson.internal.LinkedTreeMap$Node r7 = r0.first()
        L29:
            r5.removeInternal(r7, r2)
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r0 = r6.left
            if (r0 == 0) goto L39
            int r1 = r0.height
            r7.left = r0
            r0.parent = r7
            r6.left = r3
            goto L3a
        L39:
            r1 = 0
        L3a:
            com.google.gson.internal.LinkedTreeMap$Node<K, V> r0 = r6.right
            if (r0 == 0) goto L46
            int r2 = r0.height
            r7.right = r0
            r0.parent = r7
            r6.right = r3
        L46:
            int r0 = java.lang.Math.max(r1, r2)
            int r0 = r0 + 1
            r7.height = r0
            r5.replaceInParent(r6, r7)
            return
        L52:
            if (r7 == 0) goto L5a
            r5.replaceInParent(r6, r7)
            r6.left = r3
            goto L65
        L5a:
            if (r0 == 0) goto L62
            r5.replaceInParent(r6, r0)
            r6.right = r3
            goto L65
        L62:
            r5.replaceInParent(r6, r3)
        L65:
            r5.rebalance(r1, r2)
            int r6 = r5.size
            int r6 = r6 + (-1)
            r5.size = r6
            int r6 = r5.modCount
            int r6 = r6 + 1
            r5.modCount = r6
            return
    }

    com.google.gson.internal.LinkedTreeMap.Node<K, V> removeInternalByKey(java.lang.Object r2) {
            r1 = this;
            com.google.gson.internal.LinkedTreeMap$Node r2 = r1.findByObject(r2)
            if (r2 == 0) goto La
            r0 = 1
            r1.removeInternal(r2, r0)
        La:
            return r2
    }

    @Override
    public int size() {
            r1 = this;
            int r0 = r1.size
            return r0
    }
}
