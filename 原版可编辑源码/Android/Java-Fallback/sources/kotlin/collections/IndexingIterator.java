package kotlin.collections;

@kotlin.Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0010(\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\b\u0000\u0018\u0000*\u0006\b\u0000\u0010\u0001 \u00012\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00010\u00030\u0002B\u0013\u0012\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00028\u00000\u0002¢\u0006\u0002\u0010\u0005J\t\u0010\b\u001a\u00020\tH\u0086\u0002J\u000f\u0010\n\u001a\b\u0012\u0004\u0012\u00028\u00000\u0003H\u0086\u0002R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u0004\u001a\b\u0012\u0004\u0012\u00028\u00000\u0002X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000b"}, d2 = {"Lkotlin/collections/IndexingIterator;", "T", "", "Lkotlin/collections/IndexedValue;", "iterator", "(Ljava/util/Iterator;)V", "index", "", "hasNext", "", "next", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class IndexingIterator<T> implements java.util.Iterator<kotlin.collections.IndexedValue<? extends T>>, kotlin.jvm.internal.markers.KMappedMarker {
    private int index;
    private final java.util.Iterator<T> iterator;

    public IndexingIterator(java.util.Iterator<? extends T> r2) {
            r1 = this;
            java.lang.String r0 = "iterator"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>()
            r1.iterator = r2
            return
    }

    @Override
    public final boolean hasNext() {
            r1 = this;
            java.util.Iterator<T> r0 = r1.iterator
            boolean r0 = r0.hasNext()
            return r0
    }

    @Override
    public java.lang.Object next() {
            r1 = this;
            kotlin.collections.IndexedValue r0 = r1.next()
            return r0
    }

    @Override
    public final kotlin.collections.IndexedValue<T> next() {
            r3 = this;
            kotlin.collections.IndexedValue r0 = new kotlin.collections.IndexedValue
            int r1 = r3.index
            int r2 = r1 + 1
            r3.index = r2
            if (r1 >= 0) goto Ld
            kotlin.collections.CollectionsKt.throwIndexOverflow()
        Ld:
            java.util.Iterator<T> r2 = r3.iterator
            java.lang.Object r2 = r2.next()
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public void remove() {
            r2 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "Operation is not supported for read-only collection"
            r0.<init>(r1)
            throw r0
    }
}
