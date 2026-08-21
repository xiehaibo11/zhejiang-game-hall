package kotlin.collections;

@kotlin.Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0010(\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a\u001f\u0010\u0000\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u0003H\u0086\u0002¨\u0006\u0004"}, d2 = {"iterator", "", "T", "Ljava/util/Enumeration;", "kotlin-stdlib"}, k = 5, mv = {1, 6, 0}, xi = 49, xs = "kotlin/collections/CollectionsKt")
class CollectionsKt__IteratorsJVMKt extends kotlin.collections.CollectionsKt__IterablesKt {

    @kotlin.Metadata(d1 = {"\u0000\u0013\n\u0000\n\u0002\u0010(\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0003*\u0001\u0000\b\n\u0018\u00002\b\u0012\u0004\u0012\u00028\u00000\u0001J\t\u0010\u0002\u001a\u00020\u0003H\u0096\u0002J\u000e\u0010\u0004\u001a\u00028\u0000H\u0096\u0002¢\u0006\u0002\u0010\u0005¨\u0006\u0006"}, d2 = {"kotlin/collections/CollectionsKt__IteratorsJVMKt$iterator$1", "", "hasNext", "", "next", "()Ljava/lang/Object;", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class 1<T> implements java.util.Iterator<T>, kotlin.jvm.internal.markers.KMappedMarker {
        final java.util.Enumeration<T> $this_iterator;

        1(java.util.Enumeration<T> r1) {
                r0 = this;
                r0.$this_iterator = r1
                r0.<init>()
                return
        }

        @Override
        public boolean hasNext() {
                r1 = this;
                java.util.Enumeration<T> r0 = r1.$this_iterator
                boolean r0 = r0.hasMoreElements()
                return r0
        }

        @Override
        public T next() {
                r1 = this;
                java.util.Enumeration<T> r0 = r1.$this_iterator
                java.lang.Object r0 = r0.nextElement()
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

    public CollectionsKt__IteratorsJVMKt() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final <T> java.util.Iterator<T> iterator(java.util.Enumeration<T> r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.collections.CollectionsKt__IteratorsJVMKt$iterator$1 r0 = new kotlin.collections.CollectionsKt__IteratorsJVMKt$iterator$1
            r0.<init>(r1)
            java.util.Iterator r0 = (java.util.Iterator) r0
            return r0
    }
}
