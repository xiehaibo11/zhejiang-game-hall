package kotlin.collections;

@kotlin.Metadata(d1 = {"\u0000L\n\u0002\u0018\u0002\n\u0002\u0010\"\n\u0002\u0010\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\t\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u001e\n\u0002\b\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010(\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\bÀ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u00012\u00060\u0003j\u0002`\u0004B\u0007\b\u0002¢\u0006\u0002\u0010\u0005J\u0011\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u0002H\u0096\u0002J\u0016\u0010\u000f\u001a\u00020\r2\f\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\u00020\u0011H\u0016J\u0013\u0010\u0012\u001a\u00020\r2\b\u0010\u0013\u001a\u0004\u0018\u00010\u0014H\u0096\u0002J\b\u0010\u0015\u001a\u00020\tH\u0016J\b\u0010\u0016\u001a\u00020\rH\u0016J\u000f\u0010\u0017\u001a\b\u0012\u0004\u0012\u00020\u00020\u0018H\u0096\u0002J\b\u0010\u0019\u001a\u00020\u0014H\u0002J\b\u0010\u001a\u001a\u00020\u001bH\u0016R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082T¢\u0006\u0002\n\u0000R\u0014\u0010\b\u001a\u00020\t8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\n\u0010\u000b¨\u0006\u001c"}, d2 = {"Lkotlin/collections/EmptySet;", "", "", "Ljava/io/Serializable;", "Lkotlin/io/Serializable;", "()V", "serialVersionUID", "", "size", "", "getSize", "()I", "contains", "", "element", "containsAll", "elements", "", "equals", "other", "", "hashCode", "isEmpty", "iterator", "", "readResolve", "toString", "", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class EmptySet implements java.util.Set, java.io.Serializable, kotlin.jvm.internal.markers.KMappedMarker {
    public static final kotlin.collections.EmptySet INSTANCE = null;
    private static final long serialVersionUID = 3406603774387020532L;

    static {
            kotlin.collections.EmptySet r0 = new kotlin.collections.EmptySet
            r0.<init>()
            kotlin.collections.EmptySet.INSTANCE = r0
            return
    }

    private EmptySet() {
            r0 = this;
            r0.<init>()
            return
    }

    private final java.lang.Object readResolve() {
            r1 = this;
            kotlin.collections.EmptySet r0 = kotlin.collections.EmptySet.INSTANCE
            return r0
    }

    @Override
    public boolean add(java.lang.Object r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Operation is not supported for read-only collection"
            r2.<init>(r0)
            throw r2
    }

    public boolean add(java.lang.Void r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Operation is not supported for read-only collection"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public boolean addAll(java.util.Collection r2) {
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
            boolean r0 = r2 instanceof java.lang.Void
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            java.lang.Void r2 = (java.lang.Void) r2
            boolean r2 = r1.contains(r2)
            return r2
    }

    public boolean contains(java.lang.Void r2) {
            r1 = this;
            java.lang.String r0 = "element"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r2 = 0
            return r2
    }

    @Override
    public boolean containsAll(java.util.Collection r2) {
            r1 = this;
            java.lang.String r0 = "elements"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r2 = r2.isEmpty()
            return r2
    }

    @Override
    public boolean equals(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof java.util.Set
            if (r0 == 0) goto Le
            java.util.Set r2 = (java.util.Set) r2
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto Le
            r2 = 1
            goto Lf
        Le:
            r2 = 0
        Lf:
            return r2
    }

    public int getSize() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public int hashCode() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public boolean isEmpty() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public java.util.Iterator iterator() {
            r1 = this;
            kotlin.collections.EmptyIterator r0 = kotlin.collections.EmptyIterator.INSTANCE
            java.util.Iterator r0 = (java.util.Iterator) r0
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
    public boolean removeAll(java.util.Collection r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "Operation is not supported for read-only collection"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public boolean retainAll(java.util.Collection r2) {
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
            r1 = this;
            java.lang.String r0 = "[]"
            return r0
    }
}
