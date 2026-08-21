package kotlin.ranges;

@kotlin.Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0005\b\u0003\u0018\u00002\u00020\u0001B \u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006ø\u0001\u0000¢\u0006\u0002\u0010\u0007J\t\u0010\n\u001a\u00020\u000bH\u0096\u0002J\u0015\u0010\r\u001a\u00020\u0003H\u0016ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b\u000e\u0010\u000fR\u0016\u0010\b\u001a\u00020\u0003X\u0082\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\n\u0002\u0010\tR\u000e\u0010\n\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u0016\u0010\f\u001a\u00020\u0003X\u0082\u000eø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\n\u0002\u0010\tR\u0016\u0010\u0005\u001a\u00020\u0003X\u0082\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\n\u0002\u0010\t\u0082\u0002\b\n\u0002\b\u0019\n\u0002\b!¨\u0006\u0010"}, d2 = {"Lkotlin/ranges/ULongProgressionIterator;", "Lkotlin/collections/ULongIterator;", "first", "Lkotlin/ULong;", "last", "step", "", "(JJJLkotlin/jvm/internal/DefaultConstructorMarker;)V", "finalElement", "J", "hasNext", "", "next", "nextULong", "nextULong-s-VKNKU", "()J", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
final class ULongProgressionIterator extends kotlin.collections.ULongIterator {
    private final long finalElement;
    private boolean hasNext;
    private long next;
    private final long step;

    private ULongProgressionIterator(long r4, long r6, long r8) {
            r3 = this;
            r3.<init>()
            r3.finalElement = r6
            r0 = 0
            int r0 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            r1 = 1
            r2 = 0
            int r6 = kotlin.UnsignedKt.ulongCompare(r4, r6)
            if (r0 <= 0) goto L14
            if (r6 > 0) goto L17
            goto L18
        L14:
            if (r6 < 0) goto L17
            goto L18
        L17:
            r1 = r2
        L18:
            r3.hasNext = r1
            long r6 = kotlin.ULong.constructor-impl(r8)
            r3.step = r6
            boolean r6 = r3.hasNext
            if (r6 == 0) goto L25
            goto L27
        L25:
            long r4 = r3.finalElement
        L27:
            r3.next = r4
            return
    }

    public ULongProgressionIterator(long r1, long r3, long r5, kotlin.jvm.internal.DefaultConstructorMarker r7) {
            r0 = this;
            r0.<init>(r1, r3, r5)
            return
    }

    @Override
    public boolean hasNext() {
            r1 = this;
            boolean r0 = r1.hasNext
            return r0
    }

    @Override
    public long nextULong-s-VKNKU() {
            r4 = this;
            long r0 = r4.next
            long r2 = r4.finalElement
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L16
            boolean r2 = r4.hasNext
            if (r2 == 0) goto L10
            r2 = 0
            r4.hasNext = r2
            goto L1f
        L10:
            java.util.NoSuchElementException r0 = new java.util.NoSuchElementException
            r0.<init>()
            throw r0
        L16:
            long r2 = r4.step
            long r2 = r2 + r0
            long r2 = kotlin.ULong.constructor-impl(r2)
            r4.next = r2
        L1f:
            return r0
    }
}
