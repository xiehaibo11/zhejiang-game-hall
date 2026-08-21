package kotlin.sequences;

@kotlin.Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010(\n\u0000\b\u0000\u0018\u0000*\u0004\b\u0000\u0010\u0001*\u0004\b\u0001\u0010\u00022\b\u0012\u0004\u0012\u0002H\u00020\u0003B-\u0012\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00028\u00000\u0003\u0012\u0018\u0010\u0005\u001a\u0014\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00010\u0006¢\u0006\u0002\u0010\bJ\u000f\u0010\t\u001a\b\u0012\u0004\u0012\u00028\u00010\nH\u0096\u0002R\u0014\u0010\u0004\u001a\b\u0012\u0004\u0012\u00028\u00000\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R \u0010\u0005\u001a\u0014\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00010\u0006X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000b"}, d2 = {"Lkotlin/sequences/TransformingIndexedSequence;", "T", "R", "Lkotlin/sequences/Sequence;", "sequence", "transformer", "Lkotlin/Function2;", "", "(Lkotlin/sequences/Sequence;Lkotlin/jvm/functions/Function2;)V", "iterator", "", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class TransformingIndexedSequence<T, R> implements kotlin.sequences.Sequence<R> {
    private final kotlin.sequences.Sequence<T> sequence;
    private final kotlin.jvm.functions.Function2<java.lang.Integer, T, R> transformer;

    @kotlin.Metadata(d1 = {"\u0000\u001b\n\u0000\n\u0002\u0010(\n\u0000\n\u0002\u0010\b\n\u0002\b\b\n\u0002\u0010\u000b\n\u0002\b\u0003*\u0001\u0000\b\n\u0018\u00002\b\u0012\u0004\u0012\u00028\u00000\u0001J\t\u0010\u000b\u001a\u00020\fH\u0096\u0002J\u000e\u0010\r\u001a\u00028\u0000H\u0096\u0002¢\u0006\u0002\u0010\u000eR\u001a\u0010\u0002\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0004\u0010\u0005\"\u0004\b\u0006\u0010\u0007R\u0017\u0010\b\u001a\b\u0012\u0004\u0012\u00028\u00010\u0001¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\n¨\u0006\u000f"}, d2 = {"kotlin/sequences/TransformingIndexedSequence$iterator$1", "", "index", "", "getIndex", "()I", "setIndex", "(I)V", "iterator", "getIterator", "()Ljava/util/Iterator;", "hasNext", "", "next", "()Ljava/lang/Object;", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class 1 implements java.util.Iterator<R>, kotlin.jvm.internal.markers.KMappedMarker {
        private int index;
        private final java.util.Iterator<T> iterator;
        final kotlin.sequences.TransformingIndexedSequence<T, R> this$0;

        1(kotlin.sequences.TransformingIndexedSequence<T, R> r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                kotlin.sequences.Sequence r1 = kotlin.sequences.TransformingIndexedSequence.access$getSequence$p(r1)
                java.util.Iterator r1 = r1.iterator()
                r0.iterator = r1
                return
        }

        public final int getIndex() {
                r1 = this;
                int r0 = r1.index
                return r0
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
                r3 = this;
                kotlin.sequences.TransformingIndexedSequence<T, R> r0 = r3.this$0
                kotlin.jvm.functions.Function2 r0 = kotlin.sequences.TransformingIndexedSequence.access$getTransformer$p(r0)
                int r1 = r3.index
                int r2 = r1 + 1
                r3.index = r2
                if (r1 >= 0) goto L11
                kotlin.collections.CollectionsKt.throwIndexOverflow()
            L11:
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                java.util.Iterator<T> r2 = r3.iterator
                java.lang.Object r2 = r2.next()
                java.lang.Object r0 = r0.invoke(r1, r2)
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

        public final void setIndex(int r1) {
                r0 = this;
                r0.index = r1
                return
        }
    }

    public TransformingIndexedSequence(kotlin.sequences.Sequence<? extends T> r2, kotlin.jvm.functions.Function2<? super java.lang.Integer, ? super T, ? extends R> r3) {
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

    public static final kotlin.sequences.Sequence access$getSequence$p(kotlin.sequences.TransformingIndexedSequence r0) {
            kotlin.sequences.Sequence<T> r0 = r0.sequence
            return r0
    }

    public static final kotlin.jvm.functions.Function2 access$getTransformer$p(kotlin.sequences.TransformingIndexedSequence r0) {
            kotlin.jvm.functions.Function2<java.lang.Integer, T, R> r0 = r0.transformer
            return r0
    }

    @Override
    public java.util.Iterator<R> iterator() {
            r1 = this;
            kotlin.sequences.TransformingIndexedSequence$iterator$1 r0 = new kotlin.sequences.TransformingIndexedSequence$iterator$1
            r0.<init>(r1)
            java.util.Iterator r0 = (java.util.Iterator) r0
            return r0
    }
}
