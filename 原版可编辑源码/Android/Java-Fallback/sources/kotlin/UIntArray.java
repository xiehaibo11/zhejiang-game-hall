package kotlin;

@kotlin.Metadata(d1 = {"\u0000F\n\u0002\u0018\u0002\n\u0002\u0010\u001e\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u0015\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0002\b\t\n\u0002\u0010\u0000\n\u0002\b\f\n\u0002\u0010(\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0010\u000e\n\u0002\b\u0004\b\u0087@\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001:\u00012B\u0014\b\u0016\u0012\u0006\u0010\u0003\u001a\u00020\u0004ø\u0001\u0000¢\u0006\u0004\b\u0005\u0010\u0006B\u0014\b\u0001\u0012\u0006\u0010\u0007\u001a\u00020\bø\u0001\u0000¢\u0006\u0004\b\u0005\u0010\tJ\u001b\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u0002H\u0096\u0002ø\u0001\u0000¢\u0006\u0004\b\u0011\u0010\u0012J \u0010\u0013\u001a\u00020\u000f2\f\u0010\u0014\u001a\b\u0012\u0004\u0012\u00020\u00020\u0001H\u0016ø\u0001\u0000¢\u0006\u0004\b\u0015\u0010\u0016J\u001a\u0010\u0017\u001a\u00020\u000f2\b\u0010\u0018\u001a\u0004\u0018\u00010\u0019HÖ\u0003¢\u0006\u0004\b\u001a\u0010\u001bJ\u001e\u0010\u001c\u001a\u00020\u00022\u0006\u0010\u001d\u001a\u00020\u0004H\u0086\u0002ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b\u001e\u0010\u001fJ\u0010\u0010 \u001a\u00020\u0004HÖ\u0001¢\u0006\u0004\b!\u0010\u000bJ\u000f\u0010\"\u001a\u00020\u000fH\u0016¢\u0006\u0004\b#\u0010$J\u0019\u0010%\u001a\b\u0012\u0004\u0012\u00020\u00020&H\u0096\u0002ø\u0001\u0000¢\u0006\u0004\b'\u0010(J#\u0010)\u001a\u00020*2\u0006\u0010\u001d\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\u0002H\u0086\u0002ø\u0001\u0000¢\u0006\u0004\b,\u0010-J\u0010\u0010.\u001a\u00020/HÖ\u0001¢\u0006\u0004\b0\u00101R\u0014\u0010\u0003\u001a\u00020\u00048VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\n\u0010\u000bR\u0016\u0010\u0007\u001a\u00020\b8\u0000X\u0081\u0004¢\u0006\b\n\u0000\u0012\u0004\b\f\u0010\r\u0088\u0001\u0007\u0092\u0001\u00020\bø\u0001\u0000\u0082\u0002\b\n\u0002\b\u0019\n\u0002\b!¨\u00063"}, d2 = {"Lkotlin/UIntArray;", "", "Lkotlin/UInt;", "size", "", "constructor-impl", "(I)[I", "storage", "", "([I)[I", "getSize-impl", "([I)I", "getStorage$annotations", "()V", "contains", "", "element", "contains-WZ4Q5Ns", "([II)Z", "containsAll", "elements", "containsAll-impl", "([ILjava/util/Collection;)Z", "equals", "other", "", "equals-impl", "([ILjava/lang/Object;)Z", "get", "index", "get-pVg5ArA", "([II)I", "hashCode", "hashCode-impl", "isEmpty", "isEmpty-impl", "([I)Z", "iterator", "", "iterator-impl", "([I)Ljava/util/Iterator;", "set", "", "value", "set-VXSXFK8", "([III)V", "toString", "", "toString-impl", "([I)Ljava/lang/String;", "Iterator", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
@kotlin.jvm.JvmInline
public final class UIntArray implements java.util.Collection<kotlin.UInt>, kotlin.jvm.internal.markers.KMappedMarker {
    private final int[] storage;

    @kotlin.Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0015\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0002\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\t\u0010\u0007\u001a\u00020\bH\u0096\u0002J\u0015\u0010\t\u001a\u00020\nH\u0016ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b\u000b\u0010\fR\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u000e¢\u0006\u0002\n\u0000\u0082\u0002\b\n\u0002\b\u0019\n\u0002\b!¨\u0006\r"}, d2 = {"Lkotlin/UIntArray$Iterator;", "Lkotlin/collections/UIntIterator;", "array", "", "([I)V", "index", "", "hasNext", "", "nextUInt", "Lkotlin/UInt;", "nextUInt-pVg5ArA", "()I", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
    private static final class Iterator extends kotlin.collections.UIntIterator {
        private final int[] array;
        private int index;

        public Iterator(int[] r2) {
                r1 = this;
                java.lang.String r0 = "array"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.<init>()
                r1.array = r2
                return
        }

        @Override
        public boolean hasNext() {
                r2 = this;
                int r0 = r2.index
                int[] r1 = r2.array
                int r1 = r1.length
                if (r0 >= r1) goto L9
                r0 = 1
                goto La
            L9:
                r0 = 0
            La:
                return r0
        }

        @Override
        public int nextUInt-pVg5ArA() {
                r3 = this;
                int r0 = r3.index
                int[] r1 = r3.array
                int r2 = r1.length
                if (r0 >= r2) goto L12
                int r2 = r0 + 1
                r3.index = r2
                r0 = r1[r0]
                int r0 = kotlin.UInt.constructor-impl(r0)
                return r0
            L12:
                java.util.NoSuchElementException r0 = new java.util.NoSuchElementException
                int r1 = r3.index
                java.lang.String r1 = java.lang.String.valueOf(r1)
                r0.<init>(r1)
                throw r0
        }
    }

    private UIntArray(int[] r1) {
            r0 = this;
            r0.<init>()
            r0.storage = r1
            return
    }

    public static final kotlin.UIntArray box-impl(int[] r1) {
            kotlin.UIntArray r0 = new kotlin.UIntArray
            r0.<init>(r1)
            return r0
    }

    public static int[] constructor-impl(int r0) {
            int[] r0 = new int[r0]
            int[] r0 = constructor-impl(r0)
            return r0
    }

    public static int[] constructor-impl(int[] r1) {
            java.lang.String r0 = "storage"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            return r1
    }

    public static boolean contains-WZ4Q5Ns(int[] r0, int r1) {
            boolean r0 = kotlin.collections.ArraysKt.contains(r0, r1)
            return r0
    }

    public static boolean containsAll-impl(int[] r4, java.util.Collection<kotlin.UInt> r5) {
            java.lang.String r0 = "elements"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.lang.Iterable r5 = (java.lang.Iterable) r5
            r0 = r5
            java.util.Collection r0 = (java.util.Collection) r0
            boolean r0 = r0.isEmpty()
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L14
        L12:
            r1 = r2
            goto L37
        L14:
            java.util.Iterator r5 = r5.iterator()
        L18:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L12
            java.lang.Object r0 = r5.next()
            boolean r3 = r0 instanceof kotlin.UInt
            if (r3 == 0) goto L34
            kotlin.UInt r0 = (kotlin.UInt) r0
            int r0 = r0.unbox-impl()
            boolean r0 = kotlin.collections.ArraysKt.contains(r4, r0)
            if (r0 == 0) goto L34
            r0 = r2
            goto L35
        L34:
            r0 = r1
        L35:
            if (r0 != 0) goto L18
        L37:
            return r1
    }

    public static boolean equals-impl(int[] r2, java.lang.Object r3) {
            boolean r0 = r3 instanceof kotlin.UIntArray
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            kotlin.UIntArray r3 = (kotlin.UIntArray) r3
            int[] r3 = r3.unbox-impl()
            boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r2, r3)
            if (r2 != 0) goto L13
            return r1
        L13:
            r2 = 1
            return r2
    }

    public static final boolean equals-impl0(int[] r0, int[] r1) {
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            return r0
    }

    public static final int get-pVg5ArA(int[] r0, int r1) {
            r0 = r0[r1]
            int r0 = kotlin.UInt.constructor-impl(r0)
            return r0
    }

    public static int getSize-impl(int[] r0) {
            int r0 = r0.length
            return r0
    }

    public static void getStorage$annotations() {
            return
    }

    public static int hashCode-impl(int[] r0) {
            int r0 = java.util.Arrays.hashCode(r0)
            return r0
    }

    public static boolean isEmpty-impl(int[] r0) {
            int r0 = r0.length
            if (r0 != 0) goto L5
            r0 = 1
            goto L6
        L5:
            r0 = 0
        L6:
            return r0
    }

    public static java.util.Iterator<kotlin.UInt> iterator-impl(int[] r1) {
            kotlin.UIntArray$Iterator r0 = new kotlin.UIntArray$Iterator
            r0.<init>(r1)
            java.util.Iterator r0 = (java.util.Iterator) r0
            return r0
    }

    public static final void set-VXSXFK8(int[] r0, int r1, int r2) {
            r0[r1] = r2
            return
    }

    public static java.lang.String toString-impl(int[] r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "UIntArray(storage="
            r0.append(r1)
            java.lang.String r2 = java.util.Arrays.toString(r2)
            r0.append(r2)
            r2 = 41
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    @Override
    public boolean add(kotlin.UInt r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Operation is not supported for read-only collection"
            r2.<init>(r0)
            throw r2
    }

    public boolean add-WZ4Q5Ns(int r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Operation is not supported for read-only collection"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public boolean addAll(java.util.Collection<? extends kotlin.UInt> r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Operation is not supported for read-only collection"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void clear() {
            r2 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "Operation is not supported for read-only collection"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public final boolean contains(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof kotlin.UInt
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            kotlin.UInt r2 = (kotlin.UInt) r2
            int r2 = r2.unbox-impl()
            boolean r2 = r1.contains-WZ4Q5Ns(r2)
            return r2
    }

    public boolean contains-WZ4Q5Ns(int r2) {
            r1 = this;
            int[] r0 = r1.storage
            boolean r2 = contains-WZ4Q5Ns(r0, r2)
            return r2
    }

    @Override
    public boolean containsAll(java.util.Collection<? extends java.lang.Object> r2) {
            r1 = this;
            java.lang.String r0 = "elements"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            int[] r0 = r1.storage
            boolean r2 = containsAll-impl(r0, r2)
            return r2
    }

    @Override
    public boolean equals(java.lang.Object r2) {
            r1 = this;
            int[] r0 = r1.storage
            boolean r2 = equals-impl(r0, r2)
            return r2
    }

    public int getSize() {
            r1 = this;
            int[] r0 = r1.storage
            int r0 = getSize-impl(r0)
            return r0
    }

    @Override
    public int hashCode() {
            r1 = this;
            int[] r0 = r1.storage
            int r0 = hashCode-impl(r0)
            return r0
    }

    @Override
    public boolean isEmpty() {
            r1 = this;
            int[] r0 = r1.storage
            boolean r0 = isEmpty-impl(r0)
            return r0
    }

    @Override
    public java.util.Iterator<kotlin.UInt> iterator() {
            r1 = this;
            int[] r0 = r1.storage
            java.util.Iterator r0 = iterator-impl(r0)
            return r0
    }

    @Override
    public boolean remove(java.lang.Object r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Operation is not supported for read-only collection"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public boolean removeAll(java.util.Collection<? extends java.lang.Object> r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Operation is not supported for read-only collection"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public boolean retainAll(java.util.Collection<? extends java.lang.Object> r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Operation is not supported for read-only collection"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public int size() {
            r1 = this;
            int r0 = r1.getSize()
            return r0
    }

    @Override
    public java.lang.Object[] toArray() {
            r1 = this;
            r0 = r1
            java.util.Collection r0 = (java.util.Collection) r0
            java.lang.Object[] r0 = kotlin.jvm.internal.CollectionToArray.toArray(r0)
            return r0
    }

    @Override
    public <T> T[] toArray(T[] r2) {
            r1 = this;
            java.lang.String r0 = "array"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = r1
            java.util.Collection r0 = (java.util.Collection) r0
            java.lang.Object[] r2 = kotlin.jvm.internal.CollectionToArray.toArray(r0, r2)
            return r2
    }

    public java.lang.String toString() {
            r1 = this;
            int[] r0 = r1.storage
            java.lang.String r0 = toString-impl(r0)
            return r0
    }

    public final int[] unbox-impl() {
            r1 = this;
            int[] r0 = r1.storage
            return r0
    }
}
