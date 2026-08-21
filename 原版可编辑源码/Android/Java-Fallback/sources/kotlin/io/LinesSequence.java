package kotlin.io;

@kotlin.Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010(\n\u0000\b\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\r\u0012\u0006\u0010\u0003\u001a\u00020\u0004¢\u0006\u0002\u0010\u0005J\u000f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00020\u0007H\u0096\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\b"}, d2 = {"Lkotlin/io/LinesSequence;", "Lkotlin/sequences/Sequence;", "", "reader", "Ljava/io/BufferedReader;", "(Ljava/io/BufferedReader;)V", "iterator", "", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
final class LinesSequence implements kotlin.sequences.Sequence<java.lang.String> {
    private final java.io.BufferedReader reader;

    @kotlin.Metadata(d1 = {"\u0000\u0017\n\u0000\n\u0002\u0010(\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0004*\u0001\u0000\b\n\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001J\t\u0010\u0006\u001a\u00020\u0004H\u0096\u0002J\t\u0010\u0007\u001a\u00020\u0002H\u0096\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0005\u001a\u0004\u0018\u00010\u0002X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\b"}, d2 = {"kotlin/io/LinesSequence$iterator$1", "", "", "done", "", "nextValue", "hasNext", "next", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class 1 implements java.util.Iterator<java.lang.String>, kotlin.jvm.internal.markers.KMappedMarker {
        private boolean done;
        private java.lang.String nextValue;
        final kotlin.io.LinesSequence this$0;

        1(kotlin.io.LinesSequence r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public boolean hasNext() {
                r2 = this;
                java.lang.String r0 = r2.nextValue
                r1 = 1
                if (r0 != 0) goto L19
                boolean r0 = r2.done
                if (r0 != 0) goto L19
                kotlin.io.LinesSequence r0 = r2.this$0
                java.io.BufferedReader r0 = kotlin.io.LinesSequence.access$getReader$p(r0)
                java.lang.String r0 = r0.readLine()
                r2.nextValue = r0
                if (r0 != 0) goto L19
                r2.done = r1
            L19:
                java.lang.String r0 = r2.nextValue
                if (r0 == 0) goto L1e
                goto L1f
            L1e:
                r1 = 0
            L1f:
                return r1
        }

        @Override
        public java.lang.String next() {
                r1 = this;
                java.lang.String r0 = r1.next()
                return r0
        }

        @Override
        public java.lang.String next() {
                r2 = this;
                boolean r0 = r2.hasNext()
                if (r0 == 0) goto Lf
                java.lang.String r0 = r2.nextValue
                r1 = 0
                r2.nextValue = r1
                kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
                return r0
            Lf:
                java.util.NoSuchElementException r0 = new java.util.NoSuchElementException
                r0.<init>()
                throw r0
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

    public LinesSequence(java.io.BufferedReader r2) {
            r1 = this;
            java.lang.String r0 = "reader"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>()
            r1.reader = r2
            return
    }

    public static final java.io.BufferedReader access$getReader$p(kotlin.io.LinesSequence r0) {
            java.io.BufferedReader r0 = r0.reader
            return r0
    }

    @Override
    public java.util.Iterator<java.lang.String> iterator() {
            r1 = this;
            kotlin.io.LinesSequence$iterator$1 r0 = new kotlin.io.LinesSequence$iterator$1
            r0.<init>(r1)
            java.util.Iterator r0 = (java.util.Iterator) r0
            return r0
    }
}
