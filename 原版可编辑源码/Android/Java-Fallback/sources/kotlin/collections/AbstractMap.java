package kotlin.collections;

@kotlin.Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010$\n\u0002\b\u0002\n\u0002\u0010\"\n\u0000\n\u0002\u0010\u001e\n\u0002\b\u0004\n\u0002\u0010\b\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010&\n\u0002\b\b\n\u0002\u0010\u0000\n\u0002\b\u0007\n\u0002\u0010\u000e\n\u0002\b\u0003\b'\u0018\u0000 )*\u0004\b\u0000\u0010\u0001*\u0006\b\u0001\u0010\u0002 \u00012\u000e\u0012\u0004\u0012\u0002H\u0001\u0012\u0004\u0012\u0002H\u00020\u0003:\u0001)B\u0007\b\u0004¢\u0006\u0002\u0010\u0004J\u001f\u0010\u0013\u001a\u00020\u00142\u0010\u0010\u0015\u001a\f\u0012\u0002\b\u0003\u0012\u0002\b\u0003\u0018\u00010\u0016H\u0000¢\u0006\u0002\b\u0017J\u0015\u0010\u0018\u001a\u00020\u00142\u0006\u0010\u0019\u001a\u00028\u0000H\u0016¢\u0006\u0002\u0010\u001aJ\u0015\u0010\u001b\u001a\u00020\u00142\u0006\u0010\u001c\u001a\u00028\u0001H\u0016¢\u0006\u0002\u0010\u001aJ\u0013\u0010\u001d\u001a\u00020\u00142\b\u0010\u001e\u001a\u0004\u0018\u00010\u001fH\u0096\u0002J\u0018\u0010 \u001a\u0004\u0018\u00018\u00012\u0006\u0010\u0019\u001a\u00028\u0000H\u0096\u0002¢\u0006\u0002\u0010!J\b\u0010\"\u001a\u00020\rH\u0016J#\u0010#\u001a\u0010\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u0001\u0018\u00010\u00162\u0006\u0010\u0019\u001a\u00028\u0000H\u0002¢\u0006\u0002\u0010$J\b\u0010%\u001a\u00020\u0014H\u0016J\b\u0010&\u001a\u00020'H\u0016J\u0012\u0010&\u001a\u00020'2\b\u0010(\u001a\u0004\u0018\u00010\u001fH\u0002J\u001c\u0010&\u001a\u00020'2\u0012\u0010\u0015\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00010\u0016H\bR\u0016\u0010\u0005\u001a\n\u0012\u0004\u0012\u00028\u0000\u0018\u00010\u0006X\u0082\u000e¢\u0006\u0002\n\u0000R\u0016\u0010\u0007\u001a\n\u0012\u0004\u0012\u00028\u0001\u0018\u00010\bX\u0088\u000e¢\u0006\u0002\n\u0000R\u001a\u0010\t\u001a\b\u0012\u0004\u0012\u00028\u00000\u00068VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\n\u0010\u000bR\u0014\u0010\f\u001a\u00020\r8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u000e\u0010\u000fR\u001a\u0010\u0010\u001a\b\u0012\u0004\u0012\u00028\u00010\b8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u0011\u0010\u0012¨\u0006*"}, d2 = {"Lkotlin/collections/AbstractMap;", "K", "V", "", "()V", "_keys", "", "_values", "", "keys", "getKeys", "()Ljava/util/Set;", "size", "", "getSize", "()I", "values", "getValues", "()Ljava/util/Collection;", "containsEntry", "", "entry", "", "containsEntry$kotlin_stdlib", "containsKey", "key", "(Ljava/lang/Object;)Z", "containsValue", "value", "equals", "other", "", "get", "(Ljava/lang/Object;)Ljava/lang/Object;", "hashCode", "implFindEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;", "isEmpty", "toString", "", "o", "Companion", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public abstract class AbstractMap<K, V> implements java.util.Map<K, V>, kotlin.jvm.internal.markers.KMappedMarker {
    public static final kotlin.collections.AbstractMap.Companion Companion = null;
    private volatile java.util.Set<? extends K> _keys;
    private volatile java.util.Collection<? extends V> _values;

    @kotlin.Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010&\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0080\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J'\u0010\u0003\u001a\u00020\u00042\u000e\u0010\u0005\u001a\n\u0012\u0002\b\u0003\u0012\u0002\b\u00030\u00062\b\u0010\u0007\u001a\u0004\u0018\u00010\u0001H\u0000¢\u0006\u0002\b\bJ\u001d\u0010\t\u001a\u00020\n2\u000e\u0010\u0005\u001a\n\u0012\u0002\b\u0003\u0012\u0002\b\u00030\u0006H\u0000¢\u0006\u0002\b\u000bJ\u001d\u0010\f\u001a\u00020\r2\u000e\u0010\u0005\u001a\n\u0012\u0002\b\u0003\u0012\u0002\b\u00030\u0006H\u0000¢\u0006\u0002\b\u000e¨\u0006\u000f"}, d2 = {"Lkotlin/collections/AbstractMap$Companion;", "", "()V", "entryEquals", "", "e", "", "other", "entryEquals$kotlin_stdlib", "entryHashCode", "", "entryHashCode$kotlin_stdlib", "entryToString", "", "entryToString$kotlin_stdlib", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
                r0 = this;
                r0.<init>()
                return
        }

        public Companion(kotlin.jvm.internal.DefaultConstructorMarker r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public final boolean entryEquals$kotlin_stdlib(java.util.Map.Entry<?, ?> r4, java.lang.Object r5) {
                r3 = this;
                java.lang.String r0 = "e"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                boolean r0 = r5 instanceof java.util.Map.Entry
                r1 = 0
                if (r0 != 0) goto Lb
                return r1
            Lb:
                java.lang.Object r0 = r4.getKey()
                java.util.Map$Entry r5 = (java.util.Map.Entry) r5
                java.lang.Object r2 = r5.getKey()
                boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r2)
                if (r0 == 0) goto L2a
                java.lang.Object r4 = r4.getValue()
                java.lang.Object r5 = r5.getValue()
                boolean r4 = kotlin.jvm.internal.Intrinsics.areEqual(r4, r5)
                if (r4 == 0) goto L2a
                r1 = 1
            L2a:
                return r1
        }

        public final int entryHashCode$kotlin_stdlib(java.util.Map.Entry<?, ?> r3) {
                r2 = this;
                java.lang.String r0 = "e"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                java.lang.Object r0 = r3.getKey()
                r1 = 0
                if (r0 == 0) goto L11
                int r0 = r0.hashCode()
                goto L12
            L11:
                r0 = r1
            L12:
                java.lang.Object r3 = r3.getValue()
                if (r3 == 0) goto L1c
                int r1 = r3.hashCode()
            L1c:
                r3 = r0 ^ r1
                return r3
        }

        public final java.lang.String entryToString$kotlin_stdlib(java.util.Map.Entry<?, ?> r3) {
                r2 = this;
                java.lang.String r0 = "e"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.Object r1 = r3.getKey()
                r0.append(r1)
                r1 = 61
                r0.append(r1)
                java.lang.Object r3 = r3.getValue()
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                return r3
        }
    }



    static {
            kotlin.collections.AbstractMap$Companion r0 = new kotlin.collections.AbstractMap$Companion
            r1 = 0
            r0.<init>(r1)
            kotlin.collections.AbstractMap.Companion = r0
            return
    }

    protected AbstractMap() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final java.lang.String access$toString(kotlin.collections.AbstractMap r0, java.util.Map.Entry r1) {
            java.lang.String r0 = r0.toString(r1)
            return r0
    }

    private final java.util.Map.Entry<K, V> implFindEntry(K r4) {
            r3 = this;
            java.util.Set r0 = r3.entrySet()
            java.lang.Iterable r0 = (java.lang.Iterable) r0
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L22
            java.lang.Object r1 = r0.next()
            r2 = r1
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r2 = r2.getKey()
            boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r2, r4)
            if (r2 == 0) goto La
            goto L23
        L22:
            r1 = 0
        L23:
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            return r1
    }

    private final java.lang.String toString(java.lang.Object r1) {
            r0 = this;
            if (r1 != r0) goto L5
            java.lang.String r1 = "(this Map)"
            goto L9
        L5:
            java.lang.String r1 = java.lang.String.valueOf(r1)
        L9:
            return r1
    }

    private final java.lang.String toString(java.util.Map.Entry<? extends K, ? extends V> r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Object r1 = r3.getKey()
            java.lang.String r1 = r2.toString(r1)
            r0.append(r1)
            r1 = 61
            r0.append(r1)
            java.lang.Object r3 = r3.getValue()
            java.lang.String r3 = r2.toString(r3)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }

    @Override
    public void clear() {
            r2 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "Operation is not supported for read-only collection"
            r0.<init>(r1)
            throw r0
    }

    public final boolean containsEntry$kotlin_stdlib(java.util.Map.Entry<?, ?> r5) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.lang.Object r1 = r5.getKey()
            java.lang.Object r5 = r5.getValue()
            r2 = r4
            java.util.Map r2 = (java.util.Map) r2
            java.lang.Object r3 = r2.get(r1)
            boolean r5 = kotlin.jvm.internal.Intrinsics.areEqual(r5, r3)
            if (r5 != 0) goto L1a
            return r0
        L1a:
            if (r3 != 0) goto L23
            boolean r5 = r2.containsKey(r1)
            if (r5 != 0) goto L23
            return r0
        L23:
            r5 = 1
            return r5
    }

    @Override
    public boolean containsKey(java.lang.Object r1) {
            r0 = this;
            java.util.Map$Entry r1 = r0.implFindEntry(r1)
            if (r1 == 0) goto L8
            r1 = 1
            goto L9
        L8:
            r1 = 0
        L9:
            return r1
    }

    @Override
    public boolean containsValue(java.lang.Object r4) {
            r3 = this;
            java.util.Set r0 = r3.entrySet()
            java.lang.Iterable r0 = (java.lang.Iterable) r0
            boolean r1 = r0 instanceof java.util.Collection
            r2 = 0
            if (r1 == 0) goto L15
            r1 = r0
            java.util.Collection r1 = (java.util.Collection) r1
            boolean r1 = r1.isEmpty()
            if (r1 == 0) goto L15
            goto L30
        L15:
            java.util.Iterator r0 = r0.iterator()
        L19:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r1 = r1.getValue()
            boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r1, r4)
            if (r1 == 0) goto L19
            r2 = 1
        L30:
            return r2
    }

    @Override
    public final java.util.Set<java.util.Map.Entry<K, V>> entrySet() {
            r1 = this;
            java.util.Set r0 = r1.getEntries()
            return r0
    }

    @Override
    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof java.util.Map
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            int r1 = r4.size()
            java.util.Map r5 = (java.util.Map) r5
            int r3 = r5.size()
            if (r1 == r3) goto L17
            return r2
        L17:
            java.util.Set r5 = r5.entrySet()
            java.lang.Iterable r5 = (java.lang.Iterable) r5
            boolean r1 = r5 instanceof java.util.Collection
            if (r1 == 0) goto L2b
            r1 = r5
            java.util.Collection r1 = (java.util.Collection) r1
            boolean r1 = r1.isEmpty()
            if (r1 == 0) goto L2b
            goto L42
        L2b:
            java.util.Iterator r5 = r5.iterator()
        L2f:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L42
            java.lang.Object r1 = r5.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            boolean r1 = r4.containsEntry$kotlin_stdlib(r1)
            if (r1 != 0) goto L2f
            r0 = r2
        L42:
            return r0
    }

    @Override
    public V get(java.lang.Object r1) {
            r0 = this;
            java.util.Map$Entry r1 = r0.implFindEntry(r1)
            if (r1 == 0) goto Lb
            java.lang.Object r1 = r1.getValue()
            goto Lc
        Lb:
            r1 = 0
        Lc:
            return r1
    }

    public abstract java.util.Set getEntries();

    public java.util.Set<K> getKeys() {
            r1 = this;
            java.util.Set<? extends K> r0 = r1._keys
            if (r0 != 0) goto Ld
            kotlin.collections.AbstractMap$keys$1 r0 = new kotlin.collections.AbstractMap$keys$1
            r0.<init>(r1)
            java.util.Set r0 = (java.util.Set) r0
            r1._keys = r0
        Ld:
            java.util.Set<? extends K> r0 = r1._keys
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            return r0
    }

    public int getSize() {
            r1 = this;
            java.util.Set r0 = r1.entrySet()
            int r0 = r0.size()
            return r0
    }

    public java.util.Collection<V> getValues() {
            r1 = this;
            java.util.Collection<? extends V> r0 = r1._values
            if (r0 != 0) goto Ld
            kotlin.collections.AbstractMap$values$1 r0 = new kotlin.collections.AbstractMap$values$1
            r0.<init>(r1)
            java.util.Collection r0 = (java.util.Collection) r0
            r1._values = r0
        Ld:
            java.util.Collection<? extends V> r0 = r1._values
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            return r0
    }

    @Override
    public int hashCode() {
            r1 = this;
            java.util.Set r0 = r1.entrySet()
            int r0 = r0.hashCode()
            return r0
    }

    @Override
    public boolean isEmpty() {
            r1 = this;
            int r0 = r1.size()
            if (r0 != 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    @Override
    public final java.util.Set<K> keySet() {
            r1 = this;
            java.util.Set r0 = r1.getKeys()
            return r0
    }

    @Override
    public V put(K r1, V r2) {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "Operation is not supported for read-only collection"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public void putAll(java.util.Map<? extends K, ? extends V> r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Operation is not supported for read-only collection"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public V remove(java.lang.Object r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Operation is not supported for read-only collection"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public final int size() {
            r1 = this;
            int r0 = r1.getSize()
            return r0
    }

    public java.lang.String toString() {
            r10 = this;
            java.util.Set r0 = r10.entrySet()
            r1 = r0
            java.lang.Iterable r1 = (java.lang.Iterable) r1
            java.lang.String r0 = ", "
            r2 = r0
            java.lang.CharSequence r2 = (java.lang.CharSequence) r2
            java.lang.String r0 = "{"
            r3 = r0
            java.lang.CharSequence r3 = (java.lang.CharSequence) r3
            java.lang.String r0 = "}"
            r4 = r0
            java.lang.CharSequence r4 = (java.lang.CharSequence) r4
            kotlin.collections.AbstractMap$toString$1 r0 = new kotlin.collections.AbstractMap$toString$1
            r0.<init>(r10)
            r7 = r0
            kotlin.jvm.functions.Function1 r7 = (kotlin.jvm.functions.Function1) r7
            r5 = 0
            r6 = 0
            r8 = 24
            r9 = 0
            java.lang.String r0 = kotlin.collections.CollectionsKt.joinToString$default(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            return r0
    }

    @Override
    public final java.util.Collection<V> values() {
            r1 = this;
            java.util.Collection r0 = r1.getValues()
            return r0
    }
}
