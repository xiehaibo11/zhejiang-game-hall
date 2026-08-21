package kotlin;

@kotlin.Metadata(d1 = {"\u00000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0006\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\t\n\u0002\u0010\t\n\u0002\b\u0007\n\u0002\u0010\u000e\n\u0002\b\u0002\u001a\u0018\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\u0001ø\u0001\u0000¢\u0006\u0002\u0010\u0004\u001a\u0018\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0002\u001a\u00020\u0003H\u0001ø\u0001\u0000¢\u0006\u0002\u0010\u0007\u001a\u0018\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\t2\u0006\u0010\u000b\u001a\u00020\tH\u0001\u001a\"\u0010\f\u001a\u00020\u00012\u0006\u0010\n\u001a\u00020\u00012\u0006\u0010\u000b\u001a\u00020\u0001H\u0001ø\u0001\u0000¢\u0006\u0004\b\r\u0010\u000e\u001a\"\u0010\u000f\u001a\u00020\u00012\u0006\u0010\n\u001a\u00020\u00012\u0006\u0010\u000b\u001a\u00020\u0001H\u0001ø\u0001\u0000¢\u0006\u0004\b\u0010\u0010\u000e\u001a\u0010\u0010\u0011\u001a\u00020\u00032\u0006\u0010\u0002\u001a\u00020\tH\u0001\u001a\u0018\u0010\u0012\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u00132\u0006\u0010\u000b\u001a\u00020\u0013H\u0001\u001a\"\u0010\u0014\u001a\u00020\u00062\u0006\u0010\n\u001a\u00020\u00062\u0006\u0010\u000b\u001a\u00020\u0006H\u0001ø\u0001\u0000¢\u0006\u0004\b\u0015\u0010\u0016\u001a\"\u0010\u0017\u001a\u00020\u00062\u0006\u0010\n\u001a\u00020\u00062\u0006\u0010\u000b\u001a\u00020\u0006H\u0001ø\u0001\u0000¢\u0006\u0004\b\u0018\u0010\u0016\u001a\u0010\u0010\u0019\u001a\u00020\u00032\u0006\u0010\u0002\u001a\u00020\u0013H\u0001\u001a\u0010\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u0002\u001a\u00020\u0013H\u0000\u001a\u0018\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u0002\u001a\u00020\u00132\u0006\u0010\u001c\u001a\u00020\tH\u0000\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006\u001d"}, d2 = {"doubleToUInt", "Lkotlin/UInt;", "v", "", "(D)I", "doubleToULong", "Lkotlin/ULong;", "(D)J", "uintCompare", "", "v1", "v2", "uintDivide", "uintDivide-J1ME1BU", "(II)I", "uintRemainder", "uintRemainder-J1ME1BU", "uintToDouble", "ulongCompare", "", "ulongDivide", "ulongDivide-eb3DHEI", "(JJ)J", "ulongRemainder", "ulongRemainder-eb3DHEI", "ulongToDouble", "ulongToString", "", "base", "kotlin-stdlib"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class UnsignedKt {
    public static final int doubleToUInt(double r5) {
            boolean r0 = java.lang.Double.isNaN(r5)
            r1 = -1
            r2 = 0
            if (r0 == 0) goto La
        L8:
            r1 = r2
            goto L3e
        La:
            double r3 = uintToDouble(r2)
            int r0 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r0 > 0) goto L13
            goto L8
        L13:
            double r2 = uintToDouble(r1)
            int r0 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r0 < 0) goto L1c
            goto L3e
        L1c:
            r0 = 4746794007244308480(0x41dfffffffc00000, double:2.147483647E9)
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 > 0) goto L2b
            int r5 = (int) r5
            int r1 = kotlin.UInt.constructor-impl(r5)
            goto L3e
        L2b:
            r0 = 2147483647(0x7fffffff, float:NaN)
            double r1 = (double) r0
            double r5 = r5 - r1
            int r5 = (int) r5
            int r5 = kotlin.UInt.constructor-impl(r5)
            int r6 = kotlin.UInt.constructor-impl(r0)
            int r5 = r5 + r6
            int r1 = kotlin.UInt.constructor-impl(r5)
        L3e:
            return r1
    }

    public static final long doubleToULong(double r7) {
            boolean r0 = java.lang.Double.isNaN(r7)
            r1 = -1
            r3 = 0
            if (r0 == 0) goto Lc
        La:
            r1 = r3
            goto L37
        Lc:
            double r5 = ulongToDouble(r3)
            int r0 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r0 > 0) goto L15
            goto La
        L15:
            double r3 = ulongToDouble(r1)
            int r0 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
            if (r0 < 0) goto L1e
            goto L37
        L1e:
            r0 = 4890909195324358656(0x43e0000000000000, double:9.223372036854776E18)
            int r2 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r2 >= 0) goto L2a
            long r7 = (long) r7
            long r1 = kotlin.ULong.constructor-impl(r7)
            goto L37
        L2a:
            double r7 = r7 - r0
            long r7 = (long) r7
            long r7 = kotlin.ULong.constructor-impl(r7)
            r0 = -9223372036854775808
            long r7 = r7 + r0
            long r1 = kotlin.ULong.constructor-impl(r7)
        L37:
            return r1
    }

    public static final int uintCompare(int r1, int r2) {
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r1 = r1 ^ r0
            r2 = r2 ^ r0
            int r1 = kotlin.jvm.internal.Intrinsics.compare(r1, r2)
            return r1
    }

    public static final int uintDivide-J1ME1BU(int r4, int r5) {
            long r0 = (long) r4
            r2 = 4294967295(0xffffffff, double:2.1219957905E-314)
            long r0 = r0 & r2
            long r4 = (long) r5
            long r4 = r4 & r2
            long r0 = r0 / r4
            int r4 = (int) r0
            int r4 = kotlin.UInt.constructor-impl(r4)
            return r4
    }

    public static final int uintRemainder-J1ME1BU(int r4, int r5) {
            long r0 = (long) r4
            r2 = 4294967295(0xffffffff, double:2.1219957905E-314)
            long r0 = r0 & r2
            long r4 = (long) r5
            long r4 = r4 & r2
            long r0 = r0 % r4
            int r4 = (int) r0
            int r4 = kotlin.UInt.constructor-impl(r4)
            return r4
    }

    public static final double uintToDouble(int r6) {
            r0 = 2147483647(0x7fffffff, float:NaN)
            r0 = r0 & r6
            double r0 = (double) r0
            int r6 = r6 >>> 31
            int r6 = r6 << 30
            double r2 = (double) r6
            r6 = 2
            double r4 = (double) r6
            double r2 = r2 * r4
            double r0 = r0 + r2
            return r0
    }

    public static final int ulongCompare(long r2, long r4) {
            r0 = -9223372036854775808
            long r2 = r2 ^ r0
            long r4 = r4 ^ r0
            int r2 = kotlin.jvm.internal.Intrinsics.compare(r2, r4)
            return r2
    }

    public static final long ulongDivide-eb3DHEI(long r5, long r7) {
            r0 = 0
            int r2 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r2 >= 0) goto L18
            int r5 = ulongCompare(r5, r7)
            if (r5 >= 0) goto L11
            long r5 = kotlin.ULong.constructor-impl(r0)
            goto L17
        L11:
            r5 = 1
            long r5 = kotlin.ULong.constructor-impl(r5)
        L17:
            return r5
        L18:
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 < 0) goto L22
            long r5 = r5 / r7
            long r5 = kotlin.ULong.constructor-impl(r5)
            return r5
        L22:
            r0 = 1
            long r1 = r5 >>> r0
            long r1 = r1 / r7
            long r1 = r1 << r0
            long r3 = r1 * r7
            long r5 = r5 - r3
            long r5 = kotlin.ULong.constructor-impl(r5)
            long r7 = kotlin.ULong.constructor-impl(r7)
            int r5 = ulongCompare(r5, r7)
            if (r5 < 0) goto L39
            goto L3a
        L39:
            r0 = 0
        L3a:
            long r5 = (long) r0
            long r1 = r1 + r5
            long r5 = kotlin.ULong.constructor-impl(r1)
            return r5
    }

    public static final long ulongRemainder-eb3DHEI(long r6, long r8) {
            r0 = 0
            int r2 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r2 >= 0) goto L13
            int r0 = ulongCompare(r6, r8)
            if (r0 >= 0) goto Ld
            goto L12
        Ld:
            long r6 = r6 - r8
            long r6 = kotlin.ULong.constructor-impl(r6)
        L12:
            return r6
        L13:
            int r2 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r2 < 0) goto L1d
            long r6 = r6 % r8
            long r6 = kotlin.ULong.constructor-impl(r6)
            return r6
        L1d:
            r2 = 1
            long r3 = r6 >>> r2
            long r3 = r3 / r8
            long r2 = r3 << r2
            long r2 = r2 * r8
            long r6 = r6 - r2
            long r2 = kotlin.ULong.constructor-impl(r6)
            long r4 = kotlin.ULong.constructor-impl(r8)
            int r2 = ulongCompare(r2, r4)
            if (r2 < 0) goto L34
            goto L35
        L34:
            r8 = r0
        L35:
            long r6 = r6 - r8
            long r6 = kotlin.ULong.constructor-impl(r6)
            return r6
    }

    public static final double ulongToDouble(long r4) {
            r0 = 11
            long r0 = r4 >>> r0
            double r0 = (double) r0
            r2 = 2048(0x800, float:2.87E-42)
            double r2 = (double) r2
            double r0 = r0 * r2
            r2 = 2047(0x7ff, double:1.0114E-320)
            long r4 = r4 & r2
            double r4 = (double) r4
            double r0 = r0 + r4
            return r0
    }

    public static final java.lang.String ulongToString(long r1) {
            r0 = 10
            java.lang.String r1 = ulongToString(r1, r0)
            return r1
    }

    public static final java.lang.String ulongToString(long r8, int r10) {
            r0 = 0
            int r0 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            java.lang.String r1 = "toString(this, checkRadix(radix))"
            if (r0 < 0) goto L14
            int r10 = kotlin.text.CharsKt.checkRadix(r10)
            java.lang.String r8 = java.lang.Long.toString(r8, r10)
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r8, r1)
            return r8
        L14:
            r0 = 1
            long r2 = r8 >>> r0
            long r4 = (long) r10
            long r2 = r2 / r4
            long r2 = r2 << r0
            long r6 = r2 * r4
            long r8 = r8 - r6
            int r0 = (r8 > r4 ? 1 : (r8 == r4 ? 0 : -1))
            if (r0 < 0) goto L25
            long r8 = r8 - r4
            r4 = 1
            long r2 = r2 + r4
        L25:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r4 = kotlin.text.CharsKt.checkRadix(r10)
            java.lang.String r2 = java.lang.Long.toString(r2, r4)
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r1)
            r0.append(r2)
            int r10 = kotlin.text.CharsKt.checkRadix(r10)
            java.lang.String r8 = java.lang.Long.toString(r8, r10)
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r8, r1)
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            return r8
    }
}
