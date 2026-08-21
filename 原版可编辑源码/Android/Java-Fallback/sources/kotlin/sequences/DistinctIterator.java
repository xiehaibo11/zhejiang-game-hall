package kotlin.sequences;

@kotlin.Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010(\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\b\u0002\u0018\u0000*\u0004\b\u0000\u0010\u0001*\u0004\b\u0001\u0010\u00022\b\u0012\u0004\u0012\u0002H\u00010\u0003B'\u0012\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00028\u00000\u0005\u0012\u0012\u0010\u0006\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00010\u0007¢\u0006\u0002\u0010\bJ\b\u0010\f\u001a\u00020\rH\u0014R\u001a\u0010\u0006\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00010\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u001e\u0010\t\u001a\u0012\u0012\u0004\u0012\u00028\u00010\nj\b\u0012\u0004\u0012\u00028\u0001`\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0004\u001a\b\u0012\u0004\u0012\u00028\u00000\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000e"}, d2 = {"Lkotlin/sequences/DistinctIterator;", "T", "K", "Lkotlin/collections/AbstractIterator;", "source", "", "keySelector", "Lkotlin/Function1;", "(Ljava/util/Iterator;Lkotlin/jvm/functions/Function1;)V", "observed", "Ljava/util/HashSet;", "Lkotlin/collections/HashSet;", "computeNext", "", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
final class DistinctIterator<T, K> extends kotlin.collections.AbstractIterator<T> {
    private final kotlin.jvm.functions.Function1<T, K> keySelector;
    private final java.util.HashSet<K> observed;
    private final java.util.Iterator<T> source;

    public DistinctIterator(java.util.Iterator<? extends T> r2, kotlin.jvm.functions.Function1<? super T, ? extends K> r3) {
            r1 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "keySelector"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r1.<init>()
            r1.source = r2
            r1.keySelector = r3
            java.util.HashSet r2 = new java.util.HashSet
            r2.<init>()
            r1.observed = r2
            return
    }

    @Override
    protected void computeNext() {
            r3 = this;
        L0:
            java.util.Iterator<T> r0 = r3.source
            boolean r0 = r0.hasNext()
            if (r0 == 0) goto L20
            java.util.Iterator<T> r0 = r3.source
            java.lang.Object r0 = r0.next()
            kotlin.jvm.functions.Function1<T, K> r1 = r3.keySelector
            java.lang.Object r1 = r1.invoke(r0)
            java.util.HashSet<K> r2 = r3.observed
            boolean r1 = r2.add(r1)
            if (r1 == 0) goto L0
            r3.setNext(r0)
            return
        L20:
            r3.done()
            return
    }
}
