package kotlin.collections;

@kotlin.Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u001e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0010(\n\u0000\n\u0002\u0010\u0011\n\u0002\u0010\u0000\n\u0002\b\u0005\n\u0002\u0010\u000e\n\u0000\b'\u0018\u0000*\u0006\b\u0000\u0010\u0001 \u00012\b\u0012\u0004\u0012\u0002H\u00010\u0002B\u0007\b\u0004¢\u0006\u0002\u0010\u0003J\u0016\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00028\u0000H\u0096\u0002¢\u0006\u0002\u0010\u000bJ\u0016\u0010\f\u001a\u00020\t2\f\u0010\r\u001a\b\u0012\u0004\u0012\u00028\u00000\u0002H\u0016J\b\u0010\u000e\u001a\u00020\tH\u0016J\u000f\u0010\u000f\u001a\b\u0012\u0004\u0012\u00028\u00000\u0010H¦\u0002J\u0015\u0010\u0011\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00130\u0012H\u0015¢\u0006\u0002\u0010\u0014J'\u0010\u0011\u001a\b\u0012\u0004\u0012\u0002H\u00150\u0012\"\u0004\b\u0001\u0010\u00152\f\u0010\u0016\u001a\b\u0012\u0004\u0012\u0002H\u00150\u0012H\u0014¢\u0006\u0002\u0010\u0017J\b\u0010\u0018\u001a\u00020\u0019H\u0016R\u0012\u0010\u0004\u001a\u00020\u0005X¦\u0004¢\u0006\u0006\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u001a"}, d2 = {"Lkotlin/collections/AbstractCollection;", "E", "", "()V", "size", "", "getSize", "()I", "contains", "", "element", "(Ljava/lang/Object;)Z", "containsAll", "elements", "isEmpty", "iterator", "", "toArray", "", "", "()[Ljava/lang/Object;", "T", "array", "([Ljava/lang/Object;)[Ljava/lang/Object;", "toString", "", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public abstract class AbstractCollection<E> implements java.util.Collection<E>, kotlin.jvm.internal.markers.KMappedMarker {


    protected AbstractCollection() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean add(E r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Operation is not supported for read-only collection"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public boolean addAll(java.util.Collection<? extends E> r2) {
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
    public boolean contains(E r4) {
            r3 = this;
            r0 = r3
            java.lang.Iterable r0 = (java.lang.Iterable) r0
            boolean r1 = r0 instanceof java.util.Collection
            r2 = 0
            if (r1 == 0) goto L12
            r1 = r0
            java.util.Collection r1 = (java.util.Collection) r1
            boolean r1 = r1.isEmpty()
            if (r1 == 0) goto L12
            goto L27
        L12:
            java.util.Iterator r0 = r0.iterator()
        L16:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L27
            java.lang.Object r1 = r0.next()
            boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r1, r4)
            if (r1 == 0) goto L16
            r2 = 1
        L27:
            return r2
    }

    @Override
    public boolean containsAll(java.util.Collection<? extends java.lang.Object> r3) {
            r2 = this;
            java.lang.String r0 = "elements"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.Iterable r3 = (java.lang.Iterable) r3
            r0 = r3
            java.util.Collection r0 = (java.util.Collection) r0
            boolean r0 = r0.isEmpty()
            r1 = 1
            if (r0 == 0) goto L12
            goto L27
        L12:
            java.util.Iterator r3 = r3.iterator()
        L16:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L27
            java.lang.Object r0 = r3.next()
            boolean r0 = r2.contains(r0)
            if (r0 != 0) goto L16
            r1 = 0
        L27:
            return r1
    }

    public abstract int getSize();

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
    public abstract java.util.Iterator<E> iterator();

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
    public final int size() {
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
            r9 = this;
            r0 = r9
            java.lang.Iterable r0 = (java.lang.Iterable) r0
            java.lang.String r1 = ", "
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            java.lang.String r2 = "["
            java.lang.CharSequence r2 = (java.lang.CharSequence) r2
            java.lang.String r3 = "]"
            java.lang.CharSequence r3 = (java.lang.CharSequence) r3
            kotlin.collections.AbstractCollection$toString$1 r4 = new kotlin.collections.AbstractCollection$toString$1
            r4.<init>(r9)
            r6 = r4
            kotlin.jvm.functions.Function1 r6 = (kotlin.jvm.functions.Function1) r6
            r4 = 0
            r5 = 0
            r7 = 24
            r8 = 0
            java.lang.String r0 = kotlin.collections.CollectionsKt.joinToString$default(r0, r1, r2, r3, r4, r5, r6, r7, r8)
            return r0
    }
}
