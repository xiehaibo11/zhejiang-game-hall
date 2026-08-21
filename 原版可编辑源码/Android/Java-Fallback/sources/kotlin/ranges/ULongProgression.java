package kotlin.ranges;

@kotlin.Metadata(d1 = {"\u0000:\n\u0002\u0018\u0002\n\u0002\u0010\u001c\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\t\n\u0002\b\t\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010(\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0017\u0018\u0000 \u001a2\b\u0012\u0004\u0012\u00020\u00020\u0001:\u0001\u001aB\"\b\u0000\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\u0006\u0010\u0004\u001a\u00020\u0002\u0012\u0006\u0010\u0005\u001a\u00020\u0006ø\u0001\u0000¢\u0006\u0002\u0010\u0007J\u0013\u0010\u000f\u001a\u00020\u00102\b\u0010\u0011\u001a\u0004\u0018\u00010\u0012H\u0096\u0002J\b\u0010\u0013\u001a\u00020\u0014H\u0016J\b\u0010\u0015\u001a\u00020\u0010H\u0016J\u0012\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\u00020\u0017H\u0086\u0002ø\u0001\u0000J\b\u0010\u0018\u001a\u00020\u0019H\u0016R\u0019\u0010\b\u001a\u00020\u0002ø\u0001\u0000ø\u0001\u0001¢\u0006\n\n\u0002\u0010\u000b\u001a\u0004\b\t\u0010\nR\u0019\u0010\f\u001a\u00020\u0002ø\u0001\u0000ø\u0001\u0001¢\u0006\n\n\u0002\u0010\u000b\u001a\u0004\b\r\u0010\nR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\nø\u0001\u0000\u0082\u0002\b\n\u0002\b\u0019\n\u0002\b!¨\u0006\u001b"}, d2 = {"Lkotlin/ranges/ULongProgression;", "", "Lkotlin/ULong;", "start", "endInclusive", "step", "", "(JJJLkotlin/jvm/internal/DefaultConstructorMarker;)V", "first", "getFirst-s-VKNKU", "()J", "J", "last", "getLast-s-VKNKU", "getStep", "equals", "", "other", "", "hashCode", "", "isEmpty", "iterator", "", "toString", "", "Companion", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public class ULongProgression implements java.lang.Iterable<kotlin.ULong>, kotlin.jvm.internal.markers.KMappedMarker {
    public static final kotlin.ranges.ULongProgression.Companion Companion = null;
    private final long first;
    private final long last;
    private final long step;

    @kotlin.Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J(\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\u00062\u0006\u0010\b\u001a\u00020\tø\u0001\u0000¢\u0006\u0004\b\n\u0010\u000b\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006\f"}, d2 = {"Lkotlin/ranges/ULongProgression$Companion;", "", "()V", "fromClosedRange", "Lkotlin/ranges/ULongProgression;", "rangeStart", "Lkotlin/ULong;", "rangeEnd", "step", "", "fromClosedRange-7ftBX0g", "(JJJ)Lkotlin/ranges/ULongProgression;", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
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

        public final kotlin.ranges.ULongProgression fromClosedRange-7ftBX0g(long r10, long r12, long r14) {
                r9 = this;
                kotlin.ranges.ULongProgression r8 = new kotlin.ranges.ULongProgression
                r7 = 0
                r0 = r8
                r1 = r10
                r3 = r12
                r5 = r14
                r0.<init>(r1, r3, r5, r7)
                return r8
        }
    }

    static {
            kotlin.ranges.ULongProgression$Companion r0 = new kotlin.ranges.ULongProgression$Companion
            r1 = 0
            r0.<init>(r1)
            kotlin.ranges.ULongProgression.Companion = r0
            return
    }

    private ULongProgression(long r3, long r5, long r7) {
            r2 = this;
            r2.<init>()
            r0 = 0
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r0 == 0) goto L22
            r0 = -9223372036854775808
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r0 == 0) goto L1a
            r2.first = r3
            long r3 = kotlin.internal.UProgressionUtilKt.getProgressionLastElement-7ftBX0g(r3, r5, r7)
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

    public ULongProgression(long r1, long r3, long r5, kotlin.jvm.internal.DefaultConstructorMarker r7) {
            r0 = this;
            r0.<init>(r1, r3, r5)
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            boolean r0 = r5 instanceof kotlin.ranges.ULongProgression
            if (r0 == 0) goto L37
            boolean r0 = r4.isEmpty()
            if (r0 == 0) goto L13
            r0 = r5
            kotlin.ranges.ULongProgression r0 = (kotlin.ranges.ULongProgression) r0
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L35
        L13:
            long r0 = r4.getFirst-s-VKNKU()
            kotlin.ranges.ULongProgression r5 = (kotlin.ranges.ULongProgression) r5
            long r2 = r5.getFirst-s-VKNKU()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L37
            long r0 = r4.getLast-s-VKNKU()
            long r2 = r5.getLast-s-VKNKU()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L37
            long r0 = r4.step
            long r2 = r5.step
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 != 0) goto L37
        L35:
            r5 = 1
            goto L38
        L37:
            r5 = 0
        L38:
            return r5
    }

    public final long getFirst-s-VKNKU() {
            r2 = this;
            long r0 = r2.first
            return r0
    }

    public final long getLast-s-VKNKU() {
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
            r7 = this;
            boolean r0 = r7.isEmpty()
            if (r0 == 0) goto L8
            r0 = -1
            goto L3c
        L8:
            long r0 = r7.getFirst-s-VKNKU()
            long r2 = r7.getFirst-s-VKNKU()
            r4 = 32
            long r2 = r2 >>> r4
            long r2 = kotlin.ULong.constructor-impl(r2)
            long r0 = r0 ^ r2
            long r0 = kotlin.ULong.constructor-impl(r0)
            int r0 = (int) r0
            int r0 = r0 * 31
            long r1 = r7.getLast-s-VKNKU()
            long r5 = r7.getLast-s-VKNKU()
            long r5 = r5 >>> r4
            long r5 = kotlin.ULong.constructor-impl(r5)
            long r1 = r1 ^ r5
            long r1 = kotlin.ULong.constructor-impl(r1)
            int r1 = (int) r1
            int r0 = r0 + r1
            int r0 = r0 * 31
            long r1 = r7.step
            long r3 = r1 >>> r4
            long r1 = r1 ^ r3
            int r1 = (int) r1
            int r0 = r0 + r1
        L3c:
            return r0
    }

    public boolean isEmpty() {
            r7 = this;
            long r0 = r7.step
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 1
            r2 = 0
            long r3 = r7.getFirst-s-VKNKU()
            long r5 = r7.getLast-s-VKNKU()
            if (r0 <= 0) goto L19
            int r0 = kotlin.UnsignedKt.ulongCompare(r3, r5)
            if (r0 <= 0) goto L20
            goto L21
        L19:
            int r0 = kotlin.UnsignedKt.ulongCompare(r3, r5)
            if (r0 >= 0) goto L20
            goto L21
        L20:
            r1 = r2
        L21:
            return r1
    }

    @Override
    public final java.util.Iterator<kotlin.ULong> iterator() {
            r9 = this;
            kotlin.ranges.ULongProgressionIterator r8 = new kotlin.ranges.ULongProgressionIterator
            long r1 = r9.getFirst-s-VKNKU()
            long r3 = r9.getLast-s-VKNKU()
            long r5 = r9.step
            r7 = 0
            r0 = r8
            r0.<init>(r1, r3, r5, r7)
            java.util.Iterator r8 = (java.util.Iterator) r8
            return r8
    }

    public java.lang.String toString() {
            r4 = this;
            long r0 = r4.step
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            java.lang.String r1 = " step "
            if (r0 <= 0) goto L30
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r2 = r4.getFirst-s-VKNKU()
            java.lang.String r2 = kotlin.ULong.toString-impl(r2)
            r0.append(r2)
            java.lang.String r2 = ".."
            r0.append(r2)
            long r2 = r4.getLast-s-VKNKU()
            java.lang.String r2 = kotlin.ULong.toString-impl(r2)
            r0.append(r2)
            r0.append(r1)
            long r1 = r4.step
            goto L56
        L30:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r2 = r4.getFirst-s-VKNKU()
            java.lang.String r2 = kotlin.ULong.toString-impl(r2)
            r0.append(r2)
            java.lang.String r2 = " downTo "
            r0.append(r2)
            long r2 = r4.getLast-s-VKNKU()
            java.lang.String r2 = kotlin.ULong.toString-impl(r2)
            r0.append(r2)
            r0.append(r1)
            long r1 = r4.step
            long r1 = -r1
        L56:
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
