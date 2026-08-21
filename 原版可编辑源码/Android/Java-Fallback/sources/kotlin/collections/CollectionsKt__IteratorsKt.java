package kotlin.collections;

@kotlin.Metadata(d1 = {"\u0000\u001c\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010(\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\u001a0\u0010\u0000\u001a\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u00032\u0012\u0010\u0004\u001a\u000e\u0012\u0004\u0012\u0002H\u0002\u0012\u0004\u0012\u00020\u00010\u0005H\u0086\bø\u0001\u0000\u001a\u001f\u0010\u0006\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0003\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u0003H\u0087\n\u001a\"\u0010\u0007\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00020\b0\u0003\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u0003\u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u0006\t"}, d2 = {"forEach", "", "T", "", "operation", "Lkotlin/Function1;", "iterator", "withIndex", "Lkotlin/collections/IndexedValue;", "kotlin-stdlib"}, k = 5, mv = {1, 6, 0}, xi = 49, xs = "kotlin/collections/CollectionsKt")
class CollectionsKt__IteratorsKt extends kotlin.collections.CollectionsKt__IteratorsJVMKt {
    public CollectionsKt__IteratorsKt() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final <T> void forEach(java.util.Iterator<? extends T> r1, kotlin.jvm.functions.Function1<? super T, kotlin.Unit> r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "operation"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
        La:
            boolean r0 = r1.hasNext()
            if (r0 == 0) goto L18
            java.lang.Object r0 = r1.next()
            r2.invoke(r0)
            goto La
        L18:
            return
    }

    private static final <T> java.util.Iterator<T> iterator(java.util.Iterator<? extends T> r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            return r1
    }

    public static final <T> java.util.Iterator<kotlin.collections.IndexedValue<T>> withIndex(java.util.Iterator<? extends T> r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.collections.IndexingIterator r0 = new kotlin.collections.IndexingIterator
            r0.<init>(r1)
            java.util.Iterator r0 = (java.util.Iterator) r0
            return r0
    }
}
