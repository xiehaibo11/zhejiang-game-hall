package kotlin.ranges;

@kotlin.Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\t\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\u0018\u0000 \u00152\u00020\u00012\b\u0012\u0004\u0012\u00020\u00030\u0002:\u0001\u0015B\u0015\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003¢\u0006\u0002\u0010\u0006J\u0011\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\u0003H\u0096\u0002J\u0013\u0010\r\u001a\u00020\u000b2\b\u0010\u000e\u001a\u0004\u0018\u00010\u000fH\u0096\u0002J\b\u0010\u0010\u001a\u00020\u0011H\u0016J\b\u0010\u0012\u001a\u00020\u000bH\u0016J\b\u0010\u0013\u001a\u00020\u0014H\u0016R\u0014\u0010\u0005\u001a\u00020\u00038VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u0007\u0010\bR\u0014\u0010\u0004\u001a\u00020\u00038VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\t\u0010\b¨\u0006\u0016"}, d2 = {"Lkotlin/ranges/LongRange;", "Lkotlin/ranges/LongProgression;", "Lkotlin/ranges/ClosedRange;", "", "start", "endInclusive", "(JJ)V", "getEndInclusive", "()Ljava/lang/Long;", "getStart", "contains", "", "value", "equals", "other", "", "hashCode", "", "isEmpty", "toString", "", "Companion", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class LongRange extends kotlin.ranges.LongProgression implements kotlin.ranges.ClosedRange<java.lang.Long> {
    public static final kotlin.ranges.LongRange.Companion Companion = null;
    private static final kotlin.ranges.LongRange EMPTY = null;

    @kotlin.Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u0011\u0010\u0003\u001a\u00020\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006¨\u0006\u0007"}, d2 = {"Lkotlin/ranges/LongRange$Companion;", "", "()V", "EMPTY", "Lkotlin/ranges/LongRange;", "getEMPTY", "()Lkotlin/ranges/LongRange;", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
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

        public final kotlin.ranges.LongRange getEMPTY() {
                r1 = this;
                kotlin.ranges.LongRange r0 = kotlin.ranges.LongRange.access$getEMPTY$cp()
                return r0
        }
    }

    static {
            kotlin.ranges.LongRange$Companion r0 = new kotlin.ranges.LongRange$Companion
            r1 = 0
            r0.<init>(r1)
            kotlin.ranges.LongRange.Companion = r0
            kotlin.ranges.LongRange r0 = new kotlin.ranges.LongRange
            r1 = 1
            r3 = 0
            r0.<init>(r1, r3)
            kotlin.ranges.LongRange.EMPTY = r0
            return
    }

    public LongRange(long r8, long r10) {
            r7 = this;
            r5 = 1
            r0 = r7
            r1 = r8
            r3 = r10
            r0.<init>(r1, r3, r5)
            return
    }

    public static final kotlin.ranges.LongRange access$getEMPTY$cp() {
            kotlin.ranges.LongRange r0 = kotlin.ranges.LongRange.EMPTY
            return r0
    }

    public boolean contains(long r3) {
            r2 = this;
            long r0 = r2.getFirst()
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 > 0) goto L12
            long r0 = r2.getLast()
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 > 0) goto L12
            r3 = 1
            goto L13
        L12:
            r3 = 0
        L13:
            return r3
    }

    @Override
    public boolean contains(java.lang.Comparable r3) {
            r2 = this;
            java.lang.Number r3 = (java.lang.Number) r3
            long r0 = r3.longValue()
            boolean r3 = r2.contains(r0)
            return r3
    }

    @Override
    public boolean equals(java.lang.Object r5) {
            r4 = this;
            boolean r0 = r5 instanceof kotlin.ranges.LongRange
            if (r0 == 0) goto L2f
            boolean r0 = r4.isEmpty()
            if (r0 == 0) goto L13
            r0 = r5
            kotlin.ranges.LongRange r0 = (kotlin.ranges.LongRange) r0
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L2d
        L13:
            long r0 = r4.getFirst()
            kotlin.ranges.LongRange r5 = (kotlin.ranges.LongRange) r5
            long r2 = r5.getFirst()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L2f
            long r0 = r4.getLast()
            long r2 = r5.getLast()
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

    @Override
    public java.lang.Comparable getEndInclusive() {
            r1 = this;
            java.lang.Long r0 = r1.getEndInclusive()
            java.lang.Comparable r0 = (java.lang.Comparable) r0
            return r0
    }

    @Override
    public java.lang.Long getEndInclusive() {
            r2 = this;
            long r0 = r2.getLast()
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            return r0
    }

    @Override
    public java.lang.Comparable getStart() {
            r1 = this;
            java.lang.Long r0 = r1.getStart()
            java.lang.Comparable r0 = (java.lang.Comparable) r0
            return r0
    }

    @Override
    public java.lang.Long getStart() {
            r2 = this;
            long r0 = r2.getFirst()
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            return r0
    }

    @Override
    public int hashCode() {
            r7 = this;
            boolean r0 = r7.isEmpty()
            if (r0 == 0) goto L8
            r0 = -1
            goto L24
        L8:
            r0 = 31
            long r0 = (long) r0
            long r2 = r7.getFirst()
            long r4 = r7.getFirst()
            r6 = 32
            long r4 = r4 >>> r6
            long r2 = r2 ^ r4
            long r0 = r0 * r2
            long r2 = r7.getLast()
            long r4 = r7.getLast()
            long r4 = r4 >>> r6
            long r2 = r2 ^ r4
            long r0 = r0 + r2
            int r0 = (int) r0
        L24:
            return r0
    }

    @Override
    public boolean isEmpty() {
            r4 = this;
            long r0 = r4.getFirst()
            long r2 = r4.getLast()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    @Override
    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r1 = r3.getFirst()
            r0.append(r1)
            java.lang.String r1 = ".."
            r0.append(r1)
            long r1 = r3.getLast()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
