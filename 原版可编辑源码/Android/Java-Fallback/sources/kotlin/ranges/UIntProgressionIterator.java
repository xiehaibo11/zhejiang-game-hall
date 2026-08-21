package kotlin.ranges;

@kotlin.Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0005\b\u0003\u0018\u00002\u00020\u0001B \u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006ø\u0001\u0000¢\u0006\u0002\u0010\u0007J\t\u0010\n\u001a\u00020\u000bH\u0096\u0002J\u0015\u0010\r\u001a\u00020\u0003H\u0016ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b\u000e\u0010\u000fR\u0016\u0010\b\u001a\u00020\u0003X\u0082\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\n\u0002\u0010\tR\u000e\u0010\n\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u0016\u0010\f\u001a\u00020\u0003X\u0082\u000eø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\n\u0002\u0010\tR\u0016\u0010\u0005\u001a\u00020\u0003X\u0082\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\n\u0002\u0010\t\u0082\u0002\b\n\u0002\b\u0019\n\u0002\b!¨\u0006\u0010"}, d2 = {"Lkotlin/ranges/UIntProgressionIterator;", "Lkotlin/collections/UIntIterator;", "first", "Lkotlin/UInt;", "last", "step", "", "(IIILkotlin/jvm/internal/DefaultConstructorMarker;)V", "finalElement", "I", "hasNext", "", "next", "nextUInt", "nextUInt-pVg5ArA", "()I", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
final class UIntProgressionIterator extends kotlin.collections.UIntIterator {
    private final int finalElement;
    private boolean hasNext;
    private int next;
    private final int step;

    private UIntProgressionIterator(int r3, int r4, int r5) {
            r2 = this;
            r2.<init>()
            r2.finalElement = r4
            r0 = 1
            r1 = 0
            int r4 = kotlin.UnsignedKt.uintCompare(r3, r4)
            if (r5 <= 0) goto L10
            if (r4 > 0) goto L13
            goto L14
        L10:
            if (r4 < 0) goto L13
            goto L14
        L13:
            r0 = r1
        L14:
            r2.hasNext = r0
            int r4 = kotlin.UInt.constructor-impl(r5)
            r2.step = r4
            boolean r4 = r2.hasNext
            if (r4 == 0) goto L21
            goto L23
        L21:
            int r3 = r2.finalElement
        L23:
            r2.next = r3
            return
    }

    public UIntProgressionIterator(int r1, int r2, int r3, kotlin.jvm.internal.DefaultConstructorMarker r4) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    public boolean hasNext() {
            r1 = this;
            boolean r0 = r1.hasNext
            return r0
    }

    @Override
    public int nextUInt-pVg5ArA() {
            r2 = this;
            int r0 = r2.next
            int r1 = r2.finalElement
            if (r0 != r1) goto L14
            boolean r1 = r2.hasNext
            if (r1 == 0) goto Le
            r1 = 0
            r2.hasNext = r1
            goto L1d
        Le:
            java.util.NoSuchElementException r0 = new java.util.NoSuchElementException
            r0.<init>()
            throw r0
        L14:
            int r1 = r2.step
            int r1 = r1 + r0
            int r1 = kotlin.UInt.constructor-impl(r1)
            r2.next = r1
        L1d:
            return r0
    }
}
