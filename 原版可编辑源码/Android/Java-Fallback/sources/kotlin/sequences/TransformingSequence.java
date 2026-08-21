package kotlin.sequences;

@kotlin.Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010(\n\u0002\b\u0002\b\u0000\u0018\u0000*\u0004\b\u0000\u0010\u0001*\u0004\b\u0001\u0010\u00022\b\u0012\u0004\u0012\u0002H\u00020\u0003B'\u0012\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00028\u00000\u0003\u0012\u0012\u0010\u0005\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00010\u0006¢\u0006\u0002\u0010\u0007J3\u0010\b\u001a\b\u0012\u0004\u0012\u0002H\t0\u0003\"\u0004\b\u0002\u0010\t2\u0018\u0010\n\u001a\u0014\u0012\u0004\u0012\u00028\u0001\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\t0\u000b0\u0006H\u0000¢\u0006\u0002\b\fJ\u000f\u0010\n\u001a\b\u0012\u0004\u0012\u00028\u00010\u000bH\u0096\u0002R\u0014\u0010\u0004\u001a\b\u0012\u0004\u0012\u00028\u00000\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\u0005\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00010\u0006X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\r"}, d2 = {"Lkotlin/sequences/TransformingSequence;", "T", "R", "Lkotlin/sequences/Sequence;", "sequence", "transformer", "Lkotlin/Function1;", "(Lkotlin/sequences/Sequence;Lkotlin/jvm/functions/Function1;)V", "flatten", "E", "iterator", "", "flatten$kotlin_stdlib", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class TransformingSequence<T, R> implements kotlin.sequences.Sequence<R> {
    private final kotlin.sequences.Sequence<T> sequence;
    private final kotlin.jvm.functions.Function1<T, R> transformer;

    @kotlin.Metadata(d1 = {"\u0000\u0015\n\u0000\n\u0002\u0010(\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0003*\u0001\u0000\b\n\u0018\u00002\b\u0012\u0004\u0012\u00028\u00000\u0001J\t\u0010\u0005\u001a\u00020\u0006H\u0096\u0002J\u000e\u0010\u0007\u001a\u00028\u0000H\u0096\u0002¢\u0006\u0002\u0010\bR\u0017\u0010\u0002\u001a\b\u0012\u0004\u0012\u00028\u00010\u0001¢\u0006\b\n\u0000\u001a\u0004\b\u0003\u0010\u0004¨\u0006\t"}, d2 = {"kotlin/sequences/TransformingSequence$iterator$1", "", "iterator", "getIterator", "()Ljava/util/Iterator;", "hasNext", "", "next", "()Ljava/lang/Object;", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class 1 implements java.util.Iterator<R>, kotlin.jvm.internal.markers.KMappedMarker {
        private final java.util.Iterator<T> iterator;
        final kotlin.sequences.TransformingSequence<T, R> this$0;

        1(kotlin.sequences.TransformingSequence<T, R> r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                kotlin.sequences.Sequence r1 = kotlin.sequences.TransformingSequence.access$getSequence$p(r1)
                java.util.Iterator r1 = r1.iterator()
                r0.iterator = r1
                return
        }

        public final java.util.Iterator<T> getIterator() {
                r1 = this;
                java.util.Iterator<T> r0 = r1.iterator
                return r0
        }

        @Override
        public boolean hasNext() {
                r1 = this;
                java.util.Iterator<T> r0 = r1.iterator
                boolean r0 = r0.hasNext()
                return r0
        }

        @Override
        public R next() {
                r2 = this;
                kotlin.sequences.TransformingSequence<T, R> r0 = r2.this$0
                kotlin.jvm.functions.Function1 r0 = kotlin.sequences.TransformingSequence.access$getTransformer$p(r0)
                java.util.Iterator<T> r1 = r2.iterator
                java.lang.Object r1 = r1.next()
                java.lang.Object r0 = r0.invoke(r1)
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

    public TransformingSequence(kotlin.sequences.Sequence<? extends T> r2, kotlin.jvm.functions.Function1<? super T, ? extends R> r3) {
            r1 = this;
            java.lang.String r0 = "sequence"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "transformer"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r1.<init>()
            r1.sequence = r2
            r1.transformer = r3
            return
    }

    public static final kotlin.sequences.Sequence access$getSequence$p(kotlin.sequences.TransformingSequence r0) {
            kotlin.sequences.Sequence<T> r0 = r0.sequence
            return r0
    }

    public static final kotlin.jvm.functions.Function1 access$getTransformer$p(kotlin.sequences.TransformingSequence r0) {
            kotlin.jvm.functions.Function1<T, R> r0 = r0.transformer
            return r0
    }

    public final <E> kotlin.sequences.Sequence<E> flatten$kotlin_stdlib(kotlin.jvm.functions.Function1<? super R, ? extends java.util.Iterator<? extends E>> r4) {
            r3 = this;
            java.lang.String r0 = "iterator"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            kotlin.sequences.FlatteningSequence r0 = new kotlin.sequences.FlatteningSequence
            kotlin.sequences.Sequence<T> r1 = r3.sequence
            kotlin.jvm.functions.Function1<T, R> r2 = r3.transformer
            r0.<init>(r1, r2, r4)
            kotlin.sequences.Sequence r0 = (kotlin.sequences.Sequence) r0
            return r0
    }

    @Override
    public java.util.Iterator<R> iterator() {
            r1 = this;
            kotlin.sequences.TransformingSequence$iterator$1 r0 = new kotlin.sequences.TransformingSequence$iterator$1
            r0.<init>(r1)
            java.util.Iterator r0 = (java.util.Iterator) r0
            return r0
    }
}
