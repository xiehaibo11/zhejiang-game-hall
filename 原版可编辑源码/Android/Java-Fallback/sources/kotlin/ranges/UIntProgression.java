package kotlin.ranges;

@kotlin.Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0010\u001c\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\t\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010(\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0017\u0018\u0000 \u00192\b\u0012\u0004\u0012\u00020\u00020\u0001:\u0001\u0019B\"\b\u0000\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\u0006\u0010\u0004\u001a\u00020\u0002\u0012\u0006\u0010\u0005\u001a\u00020\u0006ø\u0001\u0000¢\u0006\u0002\u0010\u0007J\u0013\u0010\u000f\u001a\u00020\u00102\b\u0010\u0011\u001a\u0004\u0018\u00010\u0012H\u0096\u0002J\b\u0010\u0013\u001a\u00020\u0006H\u0016J\b\u0010\u0014\u001a\u00020\u0010H\u0016J\u0012\u0010\u0015\u001a\b\u0012\u0004\u0012\u00020\u00020\u0016H\u0086\u0002ø\u0001\u0000J\b\u0010\u0017\u001a\u00020\u0018H\u0016R\u0019\u0010\b\u001a\u00020\u0002ø\u0001\u0000ø\u0001\u0001¢\u0006\n\n\u0002\u0010\u000b\u001a\u0004\b\t\u0010\nR\u0019\u0010\f\u001a\u00020\u0002ø\u0001\u0000ø\u0001\u0001¢\u0006\n\n\u0002\u0010\u000b\u001a\u0004\b\r\u0010\nR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\nø\u0001\u0000\u0082\u0002\b\n\u0002\b\u0019\n\u0002\b!¨\u0006\u001a"}, d2 = {"Lkotlin/ranges/UIntProgression;", "", "Lkotlin/UInt;", "start", "endInclusive", "step", "", "(IIILkotlin/jvm/internal/DefaultConstructorMarker;)V", "first", "getFirst-pVg5ArA", "()I", "I", "last", "getLast-pVg5ArA", "getStep", "equals", "", "other", "", "hashCode", "isEmpty", "iterator", "", "toString", "", "Companion", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public class UIntProgression implements java.lang.Iterable<kotlin.UInt>, kotlin.jvm.internal.markers.KMappedMarker {
    public static final kotlin.ranges.UIntProgression.Companion Companion = null;
    private final int first;
    private final int last;
    private final int step;

    @kotlin.Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J(\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\u00062\u0006\u0010\b\u001a\u00020\tø\u0001\u0000¢\u0006\u0004\b\n\u0010\u000b\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006\f"}, d2 = {"Lkotlin/ranges/UIntProgression$Companion;", "", "()V", "fromClosedRange", "Lkotlin/ranges/UIntProgression;", "rangeStart", "Lkotlin/UInt;", "rangeEnd", "step", "", "fromClosedRange-Nkh28Cs", "(III)Lkotlin/ranges/UIntProgression;", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
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

        public final kotlin.ranges.UIntProgression fromClosedRange-Nkh28Cs(int r3, int r4, int r5) {
                r2 = this;
                kotlin.ranges.UIntProgression r0 = new kotlin.ranges.UIntProgression
                r1 = 0
                r0.<init>(r3, r4, r5, r1)
                return r0
        }
    }

    static {
            kotlin.ranges.UIntProgression$Companion r0 = new kotlin.ranges.UIntProgression$Companion
            r1 = 0
            r0.<init>(r1)
            kotlin.ranges.UIntProgression.Companion = r0
            return
    }

    private UIntProgression(int r2, int r3, int r4) {
            r1 = this;
            r1.<init>()
            if (r4 == 0) goto L1c
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r4 == r0) goto L14
            r1.first = r2
            int r2 = kotlin.internal.UProgressionUtilKt.getProgressionLastElement-Nkh28Cs(r2, r3, r4)
            r1.last = r2
            r1.step = r4
            return
        L14:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "Step must be greater than Int.MIN_VALUE to avoid overflow on negation."
            r2.<init>(r3)
            throw r2
        L1c:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "Step must be non-zero."
            r2.<init>(r3)
            throw r2
    }

    public UIntProgression(int r1, int r2, int r3, kotlin.jvm.internal.DefaultConstructorMarker r4) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            boolean r0 = r3 instanceof kotlin.ranges.UIntProgression
            if (r0 == 0) goto L31
            boolean r0 = r2.isEmpty()
            if (r0 == 0) goto L13
            r0 = r3
            kotlin.ranges.UIntProgression r0 = (kotlin.ranges.UIntProgression) r0
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L2f
        L13:
            int r0 = r2.getFirst-pVg5ArA()
            kotlin.ranges.UIntProgression r3 = (kotlin.ranges.UIntProgression) r3
            int r1 = r3.getFirst-pVg5ArA()
            if (r0 != r1) goto L31
            int r0 = r2.getLast-pVg5ArA()
            int r1 = r3.getLast-pVg5ArA()
            if (r0 != r1) goto L31
            int r0 = r2.step
            int r3 = r3.step
            if (r0 != r3) goto L31
        L2f:
            r3 = 1
            goto L32
        L31:
            r3 = 0
        L32:
            return r3
    }

    public final int getFirst-pVg5ArA() {
            r1 = this;
            int r0 = r1.first
            return r0
    }

    public final int getLast-pVg5ArA() {
            r1 = this;
            int r0 = r1.last
            return r0
    }

    public final int getStep() {
            r1 = this;
            int r0 = r1.step
            return r0
    }

    public int hashCode() {
            r2 = this;
            boolean r0 = r2.isEmpty()
            if (r0 == 0) goto L8
            r0 = -1
            goto L18
        L8:
            int r0 = r2.getFirst-pVg5ArA()
            int r0 = r0 * 31
            int r1 = r2.getLast-pVg5ArA()
            int r0 = r0 + r1
            int r0 = r0 * 31
            int r1 = r2.step
            int r0 = r0 + r1
        L18:
            return r0
    }

    public boolean isEmpty() {
            r4 = this;
            int r0 = r4.step
            r1 = 1
            r2 = 0
            if (r0 <= 0) goto L15
            int r0 = r4.getFirst-pVg5ArA()
            int r3 = r4.getLast-pVg5ArA()
            int r0 = kotlin.UnsignedKt.uintCompare(r0, r3)
            if (r0 <= 0) goto L24
            goto L25
        L15:
            int r0 = r4.getFirst-pVg5ArA()
            int r3 = r4.getLast-pVg5ArA()
            int r0 = kotlin.UnsignedKt.uintCompare(r0, r3)
            if (r0 >= 0) goto L24
            goto L25
        L24:
            r1 = r2
        L25:
            return r1
    }

    @Override
    public final java.util.Iterator<kotlin.UInt> iterator() {
            r5 = this;
            kotlin.ranges.UIntProgressionIterator r0 = new kotlin.ranges.UIntProgressionIterator
            int r1 = r5.getFirst-pVg5ArA()
            int r2 = r5.getLast-pVg5ArA()
            int r3 = r5.step
            r4 = 0
            r0.<init>(r1, r2, r3, r4)
            java.util.Iterator r0 = (java.util.Iterator) r0
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            int r0 = r3.step
            java.lang.String r1 = " step "
            if (r0 <= 0) goto L2c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r2 = r3.getFirst-pVg5ArA()
            java.lang.String r2 = kotlin.UInt.toString-impl(r2)
            r0.append(r2)
            java.lang.String r2 = ".."
            r0.append(r2)
            int r2 = r3.getLast-pVg5ArA()
            java.lang.String r2 = kotlin.UInt.toString-impl(r2)
            r0.append(r2)
            r0.append(r1)
            int r1 = r3.step
            goto L52
        L2c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r2 = r3.getFirst-pVg5ArA()
            java.lang.String r2 = kotlin.UInt.toString-impl(r2)
            r0.append(r2)
            java.lang.String r2 = " downTo "
            r0.append(r2)
            int r2 = r3.getLast-pVg5ArA()
            java.lang.String r2 = kotlin.UInt.toString-impl(r2)
            r0.append(r2)
            r0.append(r1)
            int r1 = r3.step
            int r1 = -r1
        L52:
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
