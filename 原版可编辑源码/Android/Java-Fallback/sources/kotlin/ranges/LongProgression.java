package kotlin.ranges;

@kotlin.Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0010\u001c\n\u0002\u0010\t\n\u0002\b\u000b\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0016\u0018\u0000 \u00182\b\u0012\u0004\u0012\u00020\u00020\u0001:\u0001\u0018B\u001f\b\u0000\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\u0006\u0010\u0004\u001a\u00020\u0002\u0012\u0006\u0010\u0005\u001a\u00020\u0002¢\u0006\u0002\u0010\u0006J\u0013\u0010\r\u001a\u00020\u000e2\b\u0010\u000f\u001a\u0004\u0018\u00010\u0010H\u0096\u0002J\b\u0010\u0011\u001a\u00020\u0012H\u0016J\b\u0010\u0013\u001a\u00020\u000eH\u0016J\t\u0010\u0014\u001a\u00020\u0015H\u0096\u0002J\b\u0010\u0016\u001a\u00020\u0017H\u0016R\u0011\u0010\u0007\u001a\u00020\u0002¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\n\u001a\u00020\u0002¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\tR\u0011\u0010\u0005\u001a\u00020\u0002¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\t¨\u0006\u0019"}, d2 = {"Lkotlin/ranges/LongProgression;", "", "", "start", "endInclusive", "step", "(JJJ)V", "first", "getFirst", "()J", "last", "getLast", "getStep", "equals", "", "other", "", "hashCode", "", "isEmpty", "iterator", "Lkotlin/collections/LongIterator;", "toString", "", "Companion", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public class LongProgression implements java.lang.Iterable<java.lang.Long>, kotlin.jvm.internal.markers.KMappedMarker {
    public static final kotlin.ranges.LongProgression.Companion Companion = null;
    private final long first;
    private final long last;
    private final long step;

    @kotlin.Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u001e\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\u00062\u0006\u0010\b\u001a\u00020\u0006¨\u0006\t"}, d2 = {"Lkotlin/ranges/LongProgression$Companion;", "", "()V", "fromClosedRange", "Lkotlin/ranges/LongProgression;", "rangeStart", "", "rangeEnd", "step", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
                r0 = this;
                r0.<init>()
                return
        }

        public Companion(kotlin.jvm.internal.DefaultConstructorMarker r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public final kotlin.ranges.LongProgression fromClosedRange(long r9, long r11, long r13) {
                r8 = this;
                kotlin.ranges.LongProgression r7 = new kotlin.ranges.LongProgression
                r0 = r7
                r1 = r9
                r3 = r11
                r5 = r13
                r0.<init>(r1, r3, r5)
                return r7
        }
    }

    static {
            kotlin.ranges.LongProgression$Companion r0 = new kotlin.ranges.LongProgression$Companion
            r1 = 0
            r0.<init>(r1)
            kotlin.ranges.LongProgression.Companion = r0
            return
    }

    public LongProgression(long r3, long r5, long r7) {
            r2 = this;
            r2.<init>()
            r0 = 0
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r0 == 0) goto L22
            r0 = -9223372036854775808
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r0 == 0) goto L1a
            r2.first = r3
            long r3 = kotlin.internal.ProgressionUtilKt.getProgressionLastElement(r3, r5, r7)
            r2.last = r3
            r2.step = r7
            return
        L1a:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Step must be greater than Long.MIN_VALUE to avoid overflow on negation."
            r3.<init>(r4)
            throw r3
        L22:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Step must be non-zero."
            r3.<init>(r4)
            throw r3
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            boolean r0 = r5 instanceof kotlin.ranges.LongProgression
            if (r0 == 0) goto L2f
            boolean r0 = r4.isEmpty()
            if (r0 == 0) goto L13
            r0 = r5
            kotlin.ranges.LongProgression r0 = (kotlin.ranges.LongProgression) r0
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L2d
        L13:
            long r0 = r4.first
            kotlin.ranges.LongProgression r5 = (kotlin.ranges.LongProgression) r5
            long r2 = r5.first
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L2f
            long r0 = r4.last
            long r2 = r5.last
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L2f
            long r0 = r4.step
            long r2 = r5.step
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 != 0) goto L2f
        L2d:
            r5 = 1
            goto L30
        L2f:
            r5 = 0
        L30:
            return r5
    }

    public final long getFirst() {
            r2 = this;
            long r0 = r2.first
            return r0
    }

    public final long getLast() {
            r2 = this;
            long r0 = r2.last
            return r0
    }

    public final long getStep() {
            r2 = this;
            long r0 = r2.step
            return r0
    }

    public int hashCode() {
            r9 = this;
            boolean r0 = r9.isEmpty()
            if (r0 == 0) goto L8
            r0 = -1
            goto L21
        L8:
            r0 = 31
            long r0 = (long) r0
            long r2 = r9.first
            r4 = 32
            long r5 = r2 >>> r4
            long r2 = r2 ^ r5
            long r2 = r2 * r0
            long r5 = r9.last
            long r7 = r5 >>> r4
            long r5 = r5 ^ r7
            long r2 = r2 + r5
            long r0 = r0 * r2
            long r2 = r9.step
            long r4 = r2 >>> r4
            long r2 = r2 ^ r4
            long r0 = r0 + r2
            int r0 = (int) r0
        L21:
            return r0
    }

    public boolean isEmpty() {
            r7 = this;
            long r0 = r7.step
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 1
            r2 = 0
            long r3 = r7.first
            long r5 = r7.last
            if (r0 <= 0) goto L13
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 <= 0) goto L18
            goto L19
        L13:
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 >= 0) goto L18
            goto L19
        L18:
            r1 = r2
        L19:
            return r1
    }

    @Override
    public java.util.Iterator<java.lang.Long> iterator() {
            r1 = this;
            kotlin.collections.LongIterator r0 = r1.iterator()
            java.util.Iterator r0 = (java.util.Iterator) r0
            return r0
    }

    @Override
    public java.util.Iterator<java.lang.Long> iterator() {
            r8 = this;
            kotlin.ranges.LongProgressionIterator r7 = new kotlin.ranges.LongProgressionIterator
            long r1 = r8.first
            long r3 = r8.last
            long r5 = r8.step
            r0 = r7
            r0.<init>(r1, r3, r5)
            kotlin.collections.LongIterator r7 = (kotlin.collections.LongIterator) r7
            return r7
    }

    public java.lang.String toString() {
            r4 = this;
            long r0 = r4.step
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            java.lang.String r1 = " step "
            if (r0 <= 0) goto L24
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r2 = r4.first
            r0.append(r2)
            java.lang.String r2 = ".."
            r0.append(r2)
            long r2 = r4.last
            r0.append(r2)
            r0.append(r1)
            long r1 = r4.step
            goto L3e
        L24:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r2 = r4.first
            r0.append(r2)
            java.lang.String r2 = " downTo "
            r0.append(r2)
            long r2 = r4.last
            r0.append(r2)
            r0.append(r1)
            long r1 = r4.step
            long r1 = -r1
        L3e:
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
