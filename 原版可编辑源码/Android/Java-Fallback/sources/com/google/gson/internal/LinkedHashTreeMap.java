package com.google.gson.internal;

public final class LinkedHashTreeMap<K, V> extends java.util.AbstractMap<K, V> implements java.io.Serializable {
    static final boolean $assertionsDisabled = false;
    private static final java.util.Comparator<java.lang.Comparable> NATURAL_ORDER = null;
    java.util.Comparator<? super K> comparator;
    private com.google.gson.internal.LinkedHashTreeMap<K, V>.EntrySet entrySet;
    final com.google.gson.internal.LinkedHashTreeMap.Node<K, V> header;
    private com.google.gson.internal.LinkedHashTreeMap<K, V>.KeySet keySet;
    int modCount;
    int size;
    com.google.gson.internal.LinkedHashTreeMap.Node<K, V>[] table;
    int threshold;


    static final class AvlBuilder<K, V> {
        private int leavesSkipped;
        private int leavesToSkip;
        private int size;
        private com.google.gson.internal.LinkedHashTreeMap.Node<K, V> stack;

        AvlBuilder() {
                r0 = this;
                r0.<init>()
                return
        }

        void add(com.google.gson.internal.LinkedHashTreeMap.Node<K, V> r7) {
                r6 = this;
                r0 = 0
                r7.right = r0
                r7.parent = r0
                r7.left = r0
                r0 = 1
                r7.height = r0
                int r1 = r6.leavesToSkip
                if (r1 <= 0) goto L1f
                int r2 = r6.size
                r3 = r2 & 1
                if (r3 != 0) goto L1f
                int r2 = r2 + r0
                r6.size = r2
                int r1 = r1 - r0
                r6.leavesToSkip = r1
                int r1 = r6.leavesSkipped
                int r1 = r1 + r0
                r6.leavesSkipped = r1
            L1f:
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r1 = r6.stack
                r7.parent = r1
                r6.stack = r7
                int r1 = r6.size
                int r1 = r1 + r0
                r6.size = r1
                int r1 = r6.leavesToSkip
                if (r1 <= 0) goto L3f
                int r2 = r6.size
                r3 = r2 & 1
                if (r3 != 0) goto L3f
                int r2 = r2 + r0
                r6.size = r2
                int r1 = r1 - r0
                r6.leavesToSkip = r1
                int r1 = r6.leavesSkipped
                int r1 = r1 + r0
                r6.leavesSkipped = r1
            L3f:
                r1 = 4
            L40:
                int r2 = r6.size
                int r3 = r1 + (-1)
                r2 = r2 & r3
                int r3 = r1 + (-1)
                if (r2 != r3) goto L86
                int r2 = r6.leavesSkipped
                if (r2 != 0) goto L67
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r2 = r6.stack
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r3 = r2.parent
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r4 = r3.parent
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r5 = r4.parent
                r3.parent = r5
                r6.stack = r3
                r3.left = r4
                r3.right = r2
                int r5 = r2.height
                int r5 = r5 + r0
                r3.height = r5
                r4.parent = r3
                r2.parent = r3
                goto L83
            L67:
                r3 = 0
                if (r2 != r0) goto L7c
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r2 = r6.stack
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r4 = r2.parent
                r6.stack = r4
                r4.right = r2
                int r5 = r2.height
                int r5 = r5 + r0
                r4.height = r5
                r2.parent = r4
                r6.leavesSkipped = r3
                goto L82
            L7c:
                r4 = 2
                if (r2 != r4) goto L82
                r6.leavesSkipped = r3
                goto L83
            L82:
            L83:
                int r1 = r1 * 2
                goto L40
            L86:
                return
        }

        void reset(int r3) {
                r2 = this;
                int r0 = java.lang.Integer.highestOneBit(r3)
                int r0 = r0 * 2
                int r0 = r0 + (-1)
                int r1 = r0 - r3
                r2.leavesToSkip = r1
                r1 = 0
                r2.size = r1
                r2.leavesSkipped = r1
                r1 = 0
                r2.stack = r1
                return
        }

        com.google.gson.internal.LinkedHashTreeMap.Node<K, V> root() {
                r2 = this;
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r0 = r2.stack
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r1 = r0.parent
                if (r1 != 0) goto L7
                return r0
            L7:
                java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
                r1.<init>()
                throw r1
        }
    }

    static class AvlIterator<K, V> {
        private com.google.gson.internal.LinkedHashTreeMap.Node<K, V> stackTop;

        AvlIterator() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.google.gson.internal.LinkedHashTreeMap.Node<K, V> next() {
                r3 = this;
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r0 = r3.stackTop
                r1 = 0
                if (r0 != 0) goto L6
                return r1
            L6:
                r2 = r0
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r0 = r2.parent
                r2.parent = r1
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r1 = r2.right
            Ld:
                if (r1 == 0) goto L15
                r1.parent = r0
                r0 = r1
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r1 = r1.left
                goto Ld
            L15:
                r3.stackTop = r0
                return r2
        }

        void reset(com.google.gson.internal.LinkedHashTreeMap.Node<K, V> r3) {
                r2 = this;
                r0 = 0
                r1 = r3
            L2:
                if (r1 == 0) goto La
                r1.parent = r0
                r0 = r1
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r1 = r1.left
                goto L2
            La:
                r2.stackTop = r0
                return
        }
    }

    final class EntrySet extends java.util.AbstractSet<java.util.Map.Entry<K, V>> {
        final com.google.gson.internal.LinkedHashTreeMap this$0;


        EntrySet(com.google.gson.internal.LinkedHashTreeMap r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void clear() {
                r1 = this;
                com.google.gson.internal.LinkedHashTreeMap r0 = r1.this$0
                r0.clear()
                return
        }

        @Override
        public boolean contains(java.lang.Object r3) {
                r2 = this;
                boolean r0 = r3 instanceof java.util.Map.Entry
                if (r0 == 0) goto L11
                com.google.gson.internal.LinkedHashTreeMap r0 = r2.this$0
                r1 = r3
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1
                com.google.gson.internal.LinkedHashTreeMap$Node r0 = r0.findByEntry(r1)
                if (r0 == 0) goto L11
                r0 = 1
                goto L12
            L11:
                r0 = 0
            L12:
                return r0
        }

        @Override
        public java.util.Iterator<java.util.Map.Entry<K, V>> iterator() {
                r1 = this;
                com.google.gson.internal.LinkedHashTreeMap$EntrySet$1 r0 = new com.google.gson.internal.LinkedHashTreeMap$EntrySet$1
                r0.<init>(r1)
                return r0
        }

        @Override
        public boolean remove(java.lang.Object r4) {
                r3 = this;
                boolean r0 = r4 instanceof java.util.Map.Entry
                r1 = 0
                if (r0 != 0) goto L6
                return r1
            L6:
                com.google.gson.internal.LinkedHashTreeMap r0 = r3.this$0
                r2 = r4
                java.util.Map$Entry r2 = (java.util.Map.Entry) r2
                com.google.gson.internal.LinkedHashTreeMap$Node r0 = r0.findByEntry(r2)
                if (r0 != 0) goto L12
                return r1
            L12:
                com.google.gson.internal.LinkedHashTreeMap r1 = r3.this$0
                r2 = 1
                r1.removeInternal(r0, r2)
                return r2
        }

        @Override
        public int size() {
                r1 = this;
                com.google.gson.internal.LinkedHashTreeMap r0 = r1.this$0
                int r0 = r0.size
                return r0
        }
    }

    final class KeySet extends java.util.AbstractSet<K> {
        final com.google.gson.internal.LinkedHashTreeMap this$0;


        KeySet(com.google.gson.internal.LinkedHashTreeMap r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void clear() {
                r1 = this;
                com.google.gson.internal.LinkedHashTreeMap r0 = r1.this$0
                r0.clear()
                return
        }

        @Override
        public boolean contains(java.lang.Object r2) {
                r1 = this;
                com.google.gson.internal.LinkedHashTreeMap r0 = r1.this$0
                boolean r0 = r0.containsKey(r2)
                return r0
        }

        @Override
        public java.util.Iterator<K> iterator() {
                r1 = this;
                com.google.gson.internal.LinkedHashTreeMap$KeySet$1 r0 = new com.google.gson.internal.LinkedHashTreeMap$KeySet$1
                r0.<init>(r1)
                return r0
        }

        @Override
        public boolean remove(java.lang.Object r2) {
                r1 = this;
                com.google.gson.internal.LinkedHashTreeMap r0 = r1.this$0
                com.google.gson.internal.LinkedHashTreeMap$Node r0 = r0.removeInternalByKey(r2)
                if (r0 == 0) goto La
                r0 = 1
                goto Lb
            La:
                r0 = 0
            Lb:
                return r0
        }

        @Override
        public int size() {
                r1 = this;
                com.google.gson.internal.LinkedHashTreeMap r0 = r1.this$0
                int r0 = r0.size
                return r0
        }
    }

    private abstract class LinkedTreeMapIterator<T> implements java.util.Iterator<T> {
        int expectedModCount;
        com.google.gson.internal.LinkedHashTreeMap.Node<K, V> lastReturned;
        com.google.gson.internal.LinkedHashTreeMap.Node<K, V> next;
        final com.google.gson.internal.LinkedHashTreeMap this$0;

        LinkedTreeMapIterator(com.google.gson.internal.LinkedHashTreeMap r2) {
                r1 = this;
                r1.this$0 = r2
                r1.<init>()
                com.google.gson.internal.LinkedHashTreeMap r2 = r1.this$0
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r0 = r2.header
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r0 = r0.next
                r1.next = r0
                r0 = 0
                r1.lastReturned = r0
                int r2 = r2.modCount
                r1.expectedModCount = r2
                return
        }

        @Override
        public final boolean hasNext() {
                r2 = this;
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r0 = r2.next
                com.google.gson.internal.LinkedHashTreeMap r1 = r2.this$0
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r1 = r1.header
                if (r0 == r1) goto La
                r0 = 1
                goto Lb
            La:
                r0 = 0
            Lb:
                return r0
        }

        final com.google.gson.internal.LinkedHashTreeMap.Node<K, V> nextNode() {
                r3 = this;
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r0 = r3.next
                com.google.gson.internal.LinkedHashTreeMap r1 = r3.this$0
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r2 = r1.header
                if (r0 == r2) goto L1b
                int r1 = r1.modCount
                int r2 = r3.expectedModCount
                if (r1 != r2) goto L15
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r1 = r0.next
                r3.next = r1
                r3.lastReturned = r0
                return r0
            L15:
                java.util.ConcurrentModificationException r1 = new java.util.ConcurrentModificationException
                r1.<init>()
                throw r1
            L1b:
                java.util.NoSuchElementException r1 = new java.util.NoSuchElementException
                r1.<init>()
                throw r1
        }

        @Override
        public final void remove() {
                r3 = this;
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r0 = r3.lastReturned
                if (r0 == 0) goto L14
                com.google.gson.internal.LinkedHashTreeMap r1 = r3.this$0
                r2 = 1
                r1.removeInternal(r0, r2)
                r0 = 0
                r3.lastReturned = r0
                com.google.gson.internal.LinkedHashTreeMap r0 = r3.this$0
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
        final int hash;
        int height;
        final K key;
        com.google.gson.internal.LinkedHashTreeMap.Node<K, V> left;
        com.google.gson.internal.LinkedHashTreeMap.Node<K, V> next;
        com.google.gson.internal.LinkedHashTreeMap.Node<K, V> parent;
        com.google.gson.internal.LinkedHashTreeMap.Node<K, V> prev;
        com.google.gson.internal.LinkedHashTreeMap.Node<K, V> right;
        V value;

        Node() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.key = r0
                r0 = -1
                r1.hash = r0
                r1.prev = r1
                r1.next = r1
                return
        }

        Node(com.google.gson.internal.LinkedHashTreeMap.Node<K, V> r2, K r3, int r4, com.google.gson.internal.LinkedHashTreeMap.Node<K, V> r5, com.google.gson.internal.LinkedHashTreeMap.Node<K, V> r6) {
                r1 = this;
                r1.<init>()
                r1.parent = r2
                r1.key = r3
                r1.hash = r4
                r0 = 1
                r1.height = r0
                r1.next = r5
                r1.prev = r6
                r6.next = r1
                r5.prev = r1
                return
        }

        @Override
        public boolean equals(java.lang.Object r5) {
                r4 = this;
                boolean r0 = r5 instanceof java.util.Map.Entry
                r1 = 0
                if (r0 == 0) goto L36
                r0 = r5
                java.util.Map$Entry r0 = (java.util.Map.Entry) r0
                K r2 = r4.key
                if (r2 != 0) goto L13
                java.lang.Object r2 = r0.getKey()
                if (r2 != 0) goto L34
                goto L1d
            L13:
                java.lang.Object r3 = r0.getKey()
                boolean r2 = r2.equals(r3)
                if (r2 == 0) goto L34
            L1d:
                V r2 = r4.value
                if (r2 != 0) goto L28
                java.lang.Object r2 = r0.getValue()
                if (r2 != 0) goto L34
                goto L32
            L28:
                java.lang.Object r3 = r0.getValue()
                boolean r2 = r2.equals(r3)
                if (r2 == 0) goto L34
            L32:
                r1 = 1
                goto L35
            L34:
            L35:
                return r1
            L36:
                return r1
        }

        public com.google.gson.internal.LinkedHashTreeMap.Node<K, V> first() {
                r2 = this;
                r0 = r2
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r1 = r0.left
            L3:
                if (r1 == 0) goto L9
                r0 = r1
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r1 = r0.left
                goto L3
            L9:
                return r0
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

        public com.google.gson.internal.LinkedHashTreeMap.Node<K, V> last() {
                r2 = this;
                r0 = r2
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r1 = r0.right
            L3:
                if (r1 == 0) goto L9
                r0 = r1
                com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r1 = r0.right
                goto L3
            L9:
                return r0
        }

        @Override
        public V setValue(V r2) {
                r1 = this;
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
            java.lang.Class<com.google.gson.internal.LinkedHashTreeMap> r0 = com.google.gson.internal.LinkedHashTreeMap.class
            com.google.gson.internal.LinkedHashTreeMap$1 r0 = new com.google.gson.internal.LinkedHashTreeMap$1
            r0.<init>()
            com.google.gson.internal.LinkedHashTreeMap.NATURAL_ORDER = r0
            return
    }

    public LinkedHashTreeMap() {
            r1 = this;
            java.util.Comparator<java.lang.Comparable> r0 = com.google.gson.internal.LinkedHashTreeMap.NATURAL_ORDER
            r1.<init>(r0)
            return
    }

    public LinkedHashTreeMap(java.util.Comparator<? super K> r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.size = r0
            r2.modCount = r0
            if (r3 == 0) goto Lc
            r0 = r3
            goto Le
        Lc:
            java.util.Comparator<java.lang.Comparable> r0 = com.google.gson.internal.LinkedHashTreeMap.NATURAL_ORDER
        Le:
            r2.comparator = r0
            com.google.gson.internal.LinkedHashTreeMap$Node r0 = new com.google.gson.internal.LinkedHashTreeMap$Node
            r0.<init>()
            r2.header = r0
            r0 = 16
            com.google.gson.internal.LinkedHashTreeMap$Node[] r0 = new com.google.gson.internal.LinkedHashTreeMap.Node[r0]
            r2.table = r0
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V>[] r0 = r2.table
            int r1 = r0.length
            int r1 = r1 / 2
            int r0 = r0.length
            int r0 = r0 / 4
            int r1 = r1 + r0
            r2.threshold = r1
            return
    }

    private void doubleCapacity() {
            r2 = this;
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V>[] r0 = r2.table
            com.google.gson.internal.LinkedHashTreeMap$Node[] r0 = doubleCapacity(r0)
            r2.table = r0
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V>[] r0 = r2.table
            int r1 = r0.length
            int r1 = r1 / 2
            int r0 = r0.length
            int r0 = r0 / 4
            int r1 = r1 + r0
            r2.threshold = r1
            return
    }

    static <K, V> com.google.gson.internal.LinkedHashTreeMap.Node<K, V>[] doubleCapacity(com.google.gson.internal.LinkedHashTreeMap.Node<K, V>[] r11) {
            int r0 = r11.length
            int r1 = r0 * 2
            com.google.gson.internal.LinkedHashTreeMap$Node[] r1 = new com.google.gson.internal.LinkedHashTreeMap.Node[r1]
            com.google.gson.internal.LinkedHashTreeMap$AvlIterator r2 = new com.google.gson.internal.LinkedHashTreeMap$AvlIterator
            r2.<init>()
            com.google.gson.internal.LinkedHashTreeMap$AvlBuilder r3 = new com.google.gson.internal.LinkedHashTreeMap$AvlBuilder
            r3.<init>()
            com.google.gson.internal.LinkedHashTreeMap$AvlBuilder r4 = new com.google.gson.internal.LinkedHashTreeMap$AvlBuilder
            r4.<init>()
            r5 = 0
        L15:
            if (r5 >= r0) goto L68
            r6 = r11[r5]
            if (r6 != 0) goto L1c
            goto L65
        L1c:
            r2.reset(r6)
            r7 = 0
            r8 = 0
        L21:
            com.google.gson.internal.LinkedHashTreeMap$Node r9 = r2.next()
            r10 = r9
            if (r9 == 0) goto L33
            int r9 = r10.hash
            r9 = r9 & r0
            if (r9 != 0) goto L30
            int r7 = r7 + 1
            goto L21
        L30:
            int r8 = r8 + 1
            goto L21
        L33:
            r3.reset(r7)
            r4.reset(r8)
            r2.reset(r6)
        L3c:
            com.google.gson.internal.LinkedHashTreeMap$Node r9 = r2.next()
            r10 = r9
            if (r9 == 0) goto L50
            int r9 = r10.hash
            r9 = r9 & r0
            if (r9 != 0) goto L4c
            r3.add(r10)
            goto L3c
        L4c:
            r4.add(r10)
            goto L3c
        L50:
            r9 = 0
            if (r7 <= 0) goto L58
            com.google.gson.internal.LinkedHashTreeMap$Node r10 = r3.root()
            goto L59
        L58:
            r10 = r9
        L59:
            r1[r5] = r10
            int r10 = r5 + r0
            if (r8 <= 0) goto L63
            com.google.gson.internal.LinkedHashTreeMap$Node r9 = r4.root()
        L63:
            r1[r10] = r9
        L65:
            int r5 = r5 + 1
            goto L15
        L68:
            return r1
    }

    private boolean equal(java.lang.Object r2, java.lang.Object r3) {
            r1 = this;
            if (r2 == r3) goto Ld
            if (r2 == 0) goto Lb
            boolean r0 = r2.equals(r3)
            if (r0 == 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            goto Le
        Ld:
            r0 = 1
        Le:
            return r0
    }

    private void rebalance(com.google.gson.internal.LinkedHashTreeMap.Node<K, V> r13, boolean r14) {
            r12 = this;
            r0 = r13
        L1:
            if (r0 == 0) goto L81
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r1 = r0.left
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r2 = r0.right
            r3 = 0
            if (r1 == 0) goto Ld
            int r4 = r1.height
            goto Le
        Ld:
            r4 = 0
        Le:
            if (r2 == 0) goto L13
            int r5 = r2.height
            goto L14
        L13:
            r5 = 0
        L14:
            int r6 = r4 - r5
            r7 = -2
            if (r6 != r7) goto L40
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r7 = r2.left
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r8 = r2.right
            if (r8 == 0) goto L22
            int r9 = r8.height
            goto L23
        L22:
            r9 = 0
        L23:
            if (r7 == 0) goto L27
            int r3 = r7.height
        L27:
            int r10 = r3 - r9
            r11 = -1
            if (r10 == r11) goto L39
            if (r10 != 0) goto L31
            if (r14 != 0) goto L31
            goto L39
        L31:
            r12.rotateRight(r2)
            r12.rotateLeft(r0)
            goto L3c
        L39:
            r12.rotateLeft(r0)
        L3c:
            if (r14 == 0) goto L3f
            goto L81
        L3f:
            goto L7e
        L40:
            r7 = 2
            r8 = 1
            if (r6 != r7) goto L6a
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r7 = r1.left
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r9 = r1.right
            if (r9 == 0) goto L4d
            int r10 = r9.height
            goto L4e
        L4d:
            r10 = 0
        L4e:
            if (r7 == 0) goto L52
            int r3 = r7.height
        L52:
            int r11 = r3 - r10
            if (r11 == r8) goto L63
            if (r11 != 0) goto L5b
            if (r14 != 0) goto L5b
            goto L63
        L5b:
            r12.rotateLeft(r1)
            r12.rotateRight(r0)
            goto L66
        L63:
            r12.rotateRight(r0)
        L66:
            if (r14 == 0) goto L69
            goto L81
        L69:
            goto L7e
        L6a:
            if (r6 != 0) goto L73
            int r3 = r4 + 1
            r0.height = r3
            if (r14 == 0) goto L7e
            goto L81
        L73:
            int r3 = java.lang.Math.max(r4, r5)
            int r3 = r3 + r8
            r0.height = r3
            if (r14 != 0) goto L7e
            goto L81
        L7e:
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r0 = r0.parent
            goto L1
        L81:
            return
    }

    private void replaceInParent(com.google.gson.internal.LinkedHashTreeMap.Node<K, V> r5, com.google.gson.internal.LinkedHashTreeMap.Node<K, V> r6) {
            r4 = this;
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r0 = r5.parent
            r1 = 0
            r5.parent = r1
            if (r6 == 0) goto L9
            r6.parent = r0
        L9:
            if (r0 == 0) goto L16
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r1 = r0.left
            if (r1 != r5) goto L12
            r0.left = r6
            goto L20
        L12:
            r0.right = r6
            goto L20
        L16:
            int r1 = r5.hash
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V>[] r2 = r4.table
            int r3 = r2.length
            int r3 = r3 + (-1)
            r1 = r1 & r3
            r2[r1] = r6
        L20:
            return
    }

    private void rotateLeft(com.google.gson.internal.LinkedHashTreeMap.Node<K, V> r8) {
            r7 = this;
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r0 = r8.left
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r1 = r8.right
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r2 = r1.left
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r3 = r1.right
            r8.right = r2
            if (r2 == 0) goto Le
            r2.parent = r8
        Le:
            r7.replaceInParent(r8, r1)
            r1.left = r8
            r8.parent = r1
            r4 = 0
            if (r0 == 0) goto L1b
            int r5 = r0.height
            goto L1c
        L1b:
            r5 = 0
        L1c:
            if (r2 == 0) goto L21
            int r6 = r2.height
            goto L22
        L21:
            r6 = 0
        L22:
            int r5 = java.lang.Math.max(r5, r6)
            int r5 = r5 + 1
            r8.height = r5
            int r5 = r8.height
            if (r3 == 0) goto L30
            int r4 = r3.height
        L30:
            int r4 = java.lang.Math.max(r5, r4)
            int r4 = r4 + 1
            r1.height = r4
            return
    }

    private void rotateRight(com.google.gson.internal.LinkedHashTreeMap.Node<K, V> r8) {
            r7 = this;
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r0 = r8.left
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r1 = r8.right
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r2 = r0.left
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r3 = r0.right
            r8.left = r3
            if (r3 == 0) goto Le
            r3.parent = r8
        Le:
            r7.replaceInParent(r8, r0)
            r0.right = r8
            r8.parent = r0
            r4 = 0
            if (r1 == 0) goto L1b
            int r5 = r1.height
            goto L1c
        L1b:
            r5 = 0
        L1c:
            if (r3 == 0) goto L21
            int r6 = r3.height
            goto L22
        L21:
            r6 = 0
        L22:
            int r5 = java.lang.Math.max(r5, r6)
            int r5 = r5 + 1
            r8.height = r5
            int r5 = r8.height
            if (r2 == 0) goto L30
            int r4 = r2.height
        L30:
            int r4 = java.lang.Math.max(r5, r4)
            int r4 = r4 + 1
            r0.height = r4
            return
    }

    private static int secondaryHash(int r2) {
            int r0 = r2 >>> 20
            int r1 = r2 >>> 12
            r0 = r0 ^ r1
            r2 = r2 ^ r0
            int r0 = r2 >>> 7
            r0 = r0 ^ r2
            int r1 = r2 >>> 4
            r0 = r0 ^ r1
            return r0
    }

    private java.lang.Object writeReplace() throws java.io.ObjectStreamException {
            r1 = this;
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>(r1)
            return r0
    }

    @Override
    public void clear() {
            r4 = this;
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V>[] r0 = r4.table
            r1 = 0
            java.util.Arrays.fill(r0, r1)
            r0 = 0
            r4.size = r0
            int r0 = r4.modCount
            int r0 = r0 + 1
            r4.modCount = r0
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r0 = r4.header
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r2 = r0.next
        L13:
            if (r2 == r0) goto L1d
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r3 = r2.next
            r2.prev = r1
            r2.next = r1
            r2 = r3
            goto L13
        L1d:
            r0.prev = r0
            r0.next = r0
            return
    }

    @Override
    public boolean containsKey(java.lang.Object r2) {
            r1 = this;
            com.google.gson.internal.LinkedHashTreeMap$Node r0 = r1.findByObject(r2)
            if (r0 == 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    @Override
    public java.util.Set<java.util.Map.Entry<K, V>> entrySet() {
            r2 = this;
            com.google.gson.internal.LinkedHashTreeMap<K, V>$EntrySet r0 = r2.entrySet
            if (r0 == 0) goto L6
            r1 = r0
            goto Ld
        L6:
            com.google.gson.internal.LinkedHashTreeMap$EntrySet r1 = new com.google.gson.internal.LinkedHashTreeMap$EntrySet
            r1.<init>(r2)
            r2.entrySet = r1
        Ld:
            return r1
    }

    com.google.gson.internal.LinkedHashTreeMap.Node<K, V> find(K r18, boolean r19) {
            r17 = this;
            r0 = r17
            r7 = r18
            java.util.Comparator<? super K> r8 = r0.comparator
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V>[] r9 = r0.table
            int r1 = r18.hashCode()
            int r10 = secondaryHash(r1)
            int r1 = r9.length
            r11 = 1
            int r1 = r1 - r11
            r12 = r10 & r1
            r1 = r9[r12]
            r2 = 0
            r3 = 0
            if (r1 == 0) goto L45
            java.util.Comparator<java.lang.Comparable> r4 = com.google.gson.internal.LinkedHashTreeMap.NATURAL_ORDER
            if (r8 != r4) goto L23
            r4 = r7
            java.lang.Comparable r4 = (java.lang.Comparable) r4
            goto L24
        L23:
            r4 = r3
        L24:
            if (r4 == 0) goto L2d
            K r5 = r1.key
            int r5 = r4.compareTo(r5)
            goto L33
        L2d:
            K r5 = r1.key
            int r5 = r8.compare(r7, r5)
        L33:
            r2 = r5
            if (r2 != 0) goto L37
            return r1
        L37:
            if (r2 >= 0) goto L3c
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r5 = r1.left
            goto L3e
        L3c:
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r5 = r1.right
        L3e:
            if (r5 != 0) goto L43
            r13 = r1
            r14 = r2
            goto L47
        L43:
            r1 = r5
            goto L24
        L45:
            r13 = r1
            r14 = r2
        L47:
            if (r19 != 0) goto L4a
            return r3
        L4a:
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r15 = r0.header
            if (r13 != 0) goto L87
            java.util.Comparator<java.lang.Comparable> r1 = com.google.gson.internal.LinkedHashTreeMap.NATURAL_ORDER
            if (r8 != r1) goto L76
            boolean r1 = r7 instanceof java.lang.Comparable
            if (r1 == 0) goto L57
            goto L76
        L57:
            java.lang.ClassCastException r1 = new java.lang.ClassCastException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.Class r3 = r18.getClass()
            java.lang.String r3 = r3.getName()
            r2.append(r3)
            java.lang.String r3 = " is not Comparable"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        L76:
            com.google.gson.internal.LinkedHashTreeMap$Node r16 = new com.google.gson.internal.LinkedHashTreeMap$Node
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r6 = r15.prev
            r1 = r16
            r2 = r13
            r3 = r18
            r4 = r10
            r5 = r15
            r1.<init>(r2, r3, r4, r5, r6)
            r9[r12] = r1
            goto L9f
        L87:
            com.google.gson.internal.LinkedHashTreeMap$Node r16 = new com.google.gson.internal.LinkedHashTreeMap$Node
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r6 = r15.prev
            r1 = r16
            r2 = r13
            r3 = r18
            r4 = r10
            r5 = r15
            r1.<init>(r2, r3, r4, r5, r6)
            if (r14 >= 0) goto L9a
            r13.left = r1
            goto L9c
        L9a:
            r13.right = r1
        L9c:
            r0.rebalance(r13, r11)
        L9f:
            int r2 = r0.size
            int r3 = r2 + 1
            r0.size = r3
            int r3 = r0.threshold
            if (r2 <= r3) goto Lac
            r17.doubleCapacity()
        Lac:
            int r2 = r0.modCount
            int r2 = r2 + r11
            r0.modCount = r2
            return r1
    }

    com.google.gson.internal.LinkedHashTreeMap.Node<K, V> findByEntry(java.util.Map.Entry<?, ?> r4) {
            r3 = this;
            java.lang.Object r0 = r4.getKey()
            com.google.gson.internal.LinkedHashTreeMap$Node r0 = r3.findByObject(r0)
            if (r0 == 0) goto L18
            V r1 = r0.value
            java.lang.Object r2 = r4.getValue()
            boolean r1 = r3.equal(r1, r2)
            if (r1 == 0) goto L18
            r1 = 1
            goto L19
        L18:
            r1 = 0
        L19:
            if (r1 == 0) goto L1d
            r2 = r0
            goto L1e
        L1d:
            r2 = 0
        L1e:
            return r2
    }

    com.google.gson.internal.LinkedHashTreeMap.Node<K, V> findByObject(java.lang.Object r3) {
            r2 = this;
            r0 = 0
            if (r3 == 0) goto Lb
            r1 = 0
            com.google.gson.internal.LinkedHashTreeMap$Node r0 = r2.find(r3, r1)     // Catch: java.lang.ClassCastException -> L9
            goto Lb
        L9:
            r1 = move-exception
            return r0
        Lb:
            return r0
    }

    @Override
    public V get(java.lang.Object r3) {
            r2 = this;
            com.google.gson.internal.LinkedHashTreeMap$Node r0 = r2.findByObject(r3)
            if (r0 == 0) goto L9
            V r1 = r0.value
            goto La
        L9:
            r1 = 0
        La:
            return r1
    }

    @Override
    public java.util.Set<K> keySet() {
            r2 = this;
            com.google.gson.internal.LinkedHashTreeMap<K, V>$KeySet r0 = r2.keySet
            if (r0 == 0) goto L6
            r1 = r0
            goto Ld
        L6:
            com.google.gson.internal.LinkedHashTreeMap$KeySet r1 = new com.google.gson.internal.LinkedHashTreeMap$KeySet
            r1.<init>(r2)
            r2.keySet = r1
        Ld:
            return r1
    }

    @Override
    public V put(K r3, V r4) {
            r2 = this;
            if (r3 == 0) goto Lc
            r0 = 1
            com.google.gson.internal.LinkedHashTreeMap$Node r0 = r2.find(r3, r0)
            V r1 = r0.value
            r0.value = r4
            return r1
        Lc:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            java.lang.String r1 = "key == null"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public V remove(java.lang.Object r3) {
            r2 = this;
            com.google.gson.internal.LinkedHashTreeMap$Node r0 = r2.removeInternalByKey(r3)
            if (r0 == 0) goto L9
            V r1 = r0.value
            goto La
        L9:
            r1 = 0
        La:
            return r1
    }

    void removeInternal(com.google.gson.internal.LinkedHashTreeMap.Node<K, V> r8, boolean r9) {
            r7 = this;
            r0 = 0
            if (r9 == 0) goto L11
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r1 = r8.prev
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r2 = r8.next
            r1.next = r2
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r2 = r8.next
            r2.prev = r1
            r8.prev = r0
            r8.next = r0
        L11:
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r1 = r8.left
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r2 = r8.right
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r3 = r8.parent
            r4 = 0
            if (r1 == 0) goto L54
            if (r2 == 0) goto L54
            int r5 = r1.height
            int r6 = r2.height
            if (r5 <= r6) goto L27
            com.google.gson.internal.LinkedHashTreeMap$Node r5 = r1.last()
            goto L2b
        L27:
            com.google.gson.internal.LinkedHashTreeMap$Node r5 = r2.first()
        L2b:
            r7.removeInternal(r5, r4)
            r4 = 0
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r1 = r8.left
            if (r1 == 0) goto L3b
            int r4 = r1.height
            r5.left = r1
            r1.parent = r5
            r8.left = r0
        L3b:
            r6 = 0
            com.google.gson.internal.LinkedHashTreeMap$Node<K, V> r2 = r8.right
            if (r2 == 0) goto L48
            int r6 = r2.height
            r5.right = r2
            r2.parent = r5
            r8.right = r0
        L48:
            int r0 = java.lang.Math.max(r4, r6)
            int r0 = r0 + 1
            r5.height = r0
            r7.replaceInParent(r8, r5)
            return
        L54:
            if (r1 == 0) goto L5c
            r7.replaceInParent(r8, r1)
            r8.left = r0
            goto L67
        L5c:
            if (r2 == 0) goto L64
            r7.replaceInParent(r8, r2)
            r8.right = r0
            goto L67
        L64:
            r7.replaceInParent(r8, r0)
        L67:
            r7.rebalance(r3, r4)
            int r0 = r7.size
            int r0 = r0 + (-1)
            r7.size = r0
            int r0 = r7.modCount
            int r0 = r0 + 1
            r7.modCount = r0
            return
    }

    com.google.gson.internal.LinkedHashTreeMap.Node<K, V> removeInternalByKey(java.lang.Object r3) {
            r2 = this;
            com.google.gson.internal.LinkedHashTreeMap$Node r0 = r2.findByObject(r3)
            if (r0 == 0) goto La
            r1 = 1
            r2.removeInternal(r0, r1)
        La:
            return r0
    }

    @Override
    public int size() {
            r1 = this;
            int r0 = r1.size
            return r0
    }
}
