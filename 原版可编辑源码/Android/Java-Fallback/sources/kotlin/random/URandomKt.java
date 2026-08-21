package kotlin.random;

@kotlin.Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u000f\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\"\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0003H\u0000ø\u0001\u0000¢\u0006\u0004\b\u0005\u0010\u0006\u001a\"\u0010\u0007\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\b2\u0006\u0010\u0004\u001a\u00020\bH\u0000ø\u0001\u0000¢\u0006\u0004\b\t\u0010\n\u001a\u001c\u0010\u000b\u001a\u00020\f*\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000fH\u0007ø\u0001\u0000¢\u0006\u0002\u0010\u0010\u001a\u001e\u0010\u000b\u001a\u00020\f*\u00020\r2\u0006\u0010\u0011\u001a\u00020\fH\u0007ø\u0001\u0000¢\u0006\u0004\b\u0012\u0010\u0013\u001a2\u0010\u000b\u001a\u00020\f*\u00020\r2\u0006\u0010\u0011\u001a\u00020\f2\b\b\u0002\u0010\u0014\u001a\u00020\u000f2\b\b\u0002\u0010\u0015\u001a\u00020\u000fH\u0007ø\u0001\u0000¢\u0006\u0004\b\u0016\u0010\u0017\u001a\u0014\u0010\u0018\u001a\u00020\u0003*\u00020\rH\u0007ø\u0001\u0000¢\u0006\u0002\u0010\u0019\u001a\u001e\u0010\u0018\u001a\u00020\u0003*\u00020\r2\u0006\u0010\u0004\u001a\u00020\u0003H\u0007ø\u0001\u0000¢\u0006\u0004\b\u001a\u0010\u001b\u001a&\u0010\u0018\u001a\u00020\u0003*\u00020\r2\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0003H\u0007ø\u0001\u0000¢\u0006\u0004\b\u001c\u0010\u001d\u001a\u001c\u0010\u0018\u001a\u00020\u0003*\u00020\r2\u0006\u0010\u001e\u001a\u00020\u001fH\u0007ø\u0001\u0000¢\u0006\u0002\u0010 \u001a\u0014\u0010!\u001a\u00020\b*\u00020\rH\u0007ø\u0001\u0000¢\u0006\u0002\u0010\"\u001a\u001e\u0010!\u001a\u00020\b*\u00020\r2\u0006\u0010\u0004\u001a\u00020\bH\u0007ø\u0001\u0000¢\u0006\u0004\b#\u0010$\u001a&\u0010!\u001a\u00020\b*\u00020\r2\u0006\u0010\u0002\u001a\u00020\b2\u0006\u0010\u0004\u001a\u00020\bH\u0007ø\u0001\u0000¢\u0006\u0004\b%\u0010&\u001a\u001c\u0010!\u001a\u00020\b*\u00020\r2\u0006\u0010\u001e\u001a\u00020'H\u0007ø\u0001\u0000¢\u0006\u0002\u0010(\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006)"}, d2 = {"checkUIntRangeBounds", "", "from", "Lkotlin/UInt;", "until", "checkUIntRangeBounds-J1ME1BU", "(II)V", "checkULongRangeBounds", "Lkotlin/ULong;", "checkULongRangeBounds-eb3DHEI", "(JJ)V", "nextUBytes", "Lkotlin/UByteArray;", "Lkotlin/random/Random;", "size", "", "(Lkotlin/random/Random;I)[B", "array", "nextUBytes-EVgfTAA", "(Lkotlin/random/Random;[B)[B", "fromIndex", "toIndex", "nextUBytes-Wvrt4B4", "(Lkotlin/random/Random;[BII)[B", "nextUInt", "(Lkotlin/random/Random;)I", "nextUInt-qCasIEU", "(Lkotlin/random/Random;I)I", "nextUInt-a8DCA5k", "(Lkotlin/random/Random;II)I", "range", "Lkotlin/ranges/UIntRange;", "(Lkotlin/random/Random;Lkotlin/ranges/UIntRange;)I", "nextULong", "(Lkotlin/random/Random;)J", "nextULong-V1Xi4fY", "(Lkotlin/random/Random;J)J", "nextULong-jmpaW-c", "(Lkotlin/random/Random;JJ)J", "Lkotlin/ranges/ULongRange;", "(Lkotlin/random/Random;Lkotlin/ranges/ULongRange;)J", "kotlin-stdlib"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class URandomKt {
    public static final void checkUIntRangeBounds-J1ME1BU(int r1, int r2) {
            int r0 = kotlin.UnsignedKt.uintCompare(r2, r1)
            if (r0 <= 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            if (r0 == 0) goto Lc
            return
        Lc:
            kotlin.UInt r1 = kotlin.UInt.box-impl(r1)
            kotlin.UInt r2 = kotlin.UInt.box-impl(r2)
            java.lang.String r1 = kotlin.random.RandomKt.boundsErrorMessage(r1, r2)
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r1 = r1.toString()
            r2.<init>(r1)
            throw r2
    }

    public static final void checkULongRangeBounds-eb3DHEI(long r1, long r3) {
            int r0 = kotlin.UnsignedKt.ulongCompare(r3, r1)
            if (r0 <= 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            if (r0 == 0) goto Lc
            return
        Lc:
            kotlin.ULong r1 = kotlin.ULong.box-impl(r1)
            kotlin.ULong r2 = kotlin.ULong.box-impl(r3)
            java.lang.String r1 = kotlin.random.RandomKt.boundsErrorMessage(r1, r2)
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r1 = r1.toString()
            r2.<init>(r1)
            throw r2
    }

    public static final byte[] nextUBytes(kotlin.random.Random r1, int r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            byte[] r1 = r1.nextBytes(r2)
            byte[] r1 = kotlin.UByteArray.constructor-impl(r1)
            return r1
    }

    public static final byte[] nextUBytes-EVgfTAA(kotlin.random.Random r1, byte[] r2) {
            java.lang.String r0 = "$this$nextUBytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "array"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.nextBytes(r2)
            return r2
    }

    public static final byte[] nextUBytes-Wvrt4B4(kotlin.random.Random r1, byte[] r2, int r3, int r4) {
            java.lang.String r0 = "$this$nextUBytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "array"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.nextBytes(r2, r3, r4)
            return r2
    }

    public static byte[] nextUBytes-Wvrt4B4$default(kotlin.random.Random r0, byte[] r1, int r2, int r3, int r4, java.lang.Object r5) {
            r5 = r4 & 2
            if (r5 == 0) goto L5
            r2 = 0
        L5:
            r4 = r4 & 4
            if (r4 == 0) goto Ld
            int r3 = kotlin.UByteArray.getSize-impl(r1)
        Ld:
            byte[] r0 = nextUBytes-Wvrt4B4(r0, r1, r2, r3)
            return r0
    }

    public static final int nextUInt(kotlin.random.Random r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            int r1 = r1.nextInt()
            int r1 = kotlin.UInt.constructor-impl(r1)
            return r1
    }

    public static final int nextUInt(kotlin.random.Random r2, kotlin.ranges.UIntRange r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "range"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            boolean r0 = r3.isEmpty()
            if (r0 != 0) goto L57
            int r0 = r3.getLast-pVg5ArA()
            r1 = -1
            int r0 = kotlin.UnsignedKt.uintCompare(r0, r1)
            if (r0 >= 0) goto L2e
            int r0 = r3.getFirst-pVg5ArA()
            int r3 = r3.getLast-pVg5ArA()
            int r3 = r3 + 1
            int r3 = kotlin.UInt.constructor-impl(r3)
            int r2 = nextUInt-a8DCA5k(r2, r0, r3)
            goto L56
        L2e:
            int r0 = r3.getFirst-pVg5ArA()
            r1 = 0
            int r0 = kotlin.UnsignedKt.uintCompare(r0, r1)
            if (r0 <= 0) goto L52
            int r0 = r3.getFirst-pVg5ArA()
            int r0 = r0 + (-1)
            int r0 = kotlin.UInt.constructor-impl(r0)
            int r3 = r3.getLast-pVg5ArA()
            int r2 = nextUInt-a8DCA5k(r2, r0, r3)
            int r2 = r2 + 1
            int r2 = kotlin.UInt.constructor-impl(r2)
            goto L56
        L52:
            int r2 = nextUInt(r2)
        L56:
            return r2
        L57:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Cannot get random in empty range: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.<init>(r3)
            throw r2
    }

    public static final int nextUInt-a8DCA5k(kotlin.random.Random r1, int r2, int r3) {
            java.lang.String r0 = "$this$nextUInt"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            checkUIntRangeBounds-J1ME1BU(r2, r3)
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r2 = r2 ^ r0
            r3 = r3 ^ r0
            int r1 = r1.nextInt(r2, r3)
            r1 = r1 ^ r0
            int r1 = kotlin.UInt.constructor-impl(r1)
            return r1
    }

    public static final int nextUInt-qCasIEU(kotlin.random.Random r1, int r2) {
            java.lang.String r0 = "$this$nextUInt"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            r0 = 0
            int r1 = nextUInt-a8DCA5k(r1, r0, r2)
            return r1
    }

    public static final long nextULong(kotlin.random.Random r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            long r0 = r2.nextLong()
            long r0 = kotlin.ULong.constructor-impl(r0)
            return r0
    }

    public static final long nextULong(kotlin.random.Random r10, kotlin.ranges.ULongRange r11) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            java.lang.String r0 = "range"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
            boolean r0 = r11.isEmpty()
            if (r0 != 0) goto L6e
            long r0 = r11.getLast-s-VKNKU()
            r2 = -1
            int r0 = kotlin.UnsignedKt.ulongCompare(r0, r2)
            r1 = 4294967295(0xffffffff, double:2.1219957905E-314)
            r3 = 1
            if (r0 >= 0) goto L3b
            long r4 = r11.getFirst-s-VKNKU()
            long r6 = r11.getLast-s-VKNKU()
            long r8 = (long) r3
            long r0 = r8 & r1
            long r0 = kotlin.ULong.constructor-impl(r0)
            long r6 = r6 + r0
            long r0 = kotlin.ULong.constructor-impl(r6)
            long r10 = nextULong-jmpaW-c(r10, r4, r0)
            goto L6d
        L3b:
            long r4 = r11.getFirst-s-VKNKU()
            r6 = 0
            int r0 = kotlin.UnsignedKt.ulongCompare(r4, r6)
            if (r0 <= 0) goto L69
            long r4 = r11.getFirst-s-VKNKU()
            long r6 = (long) r3
            long r0 = r6 & r1
            long r2 = kotlin.ULong.constructor-impl(r0)
            long r4 = r4 - r2
            long r2 = kotlin.ULong.constructor-impl(r4)
            long r4 = r11.getLast-s-VKNKU()
            long r10 = nextULong-jmpaW-c(r10, r2, r4)
            long r0 = kotlin.ULong.constructor-impl(r0)
            long r10 = r10 + r0
            long r10 = kotlin.ULong.constructor-impl(r10)
            goto L6d
        L69:
            long r10 = nextULong(r10)
        L6d:
            return r10
        L6e:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Cannot get random in empty range: "
            r0.append(r1)
            r0.append(r11)
            java.lang.String r11 = r0.toString()
            r10.<init>(r11)
            throw r10
    }

    public static final long nextULong-V1Xi4fY(kotlin.random.Random r2, long r3) {
            java.lang.String r0 = "$this$nextULong"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = 0
            long r2 = nextULong-jmpaW-c(r2, r0, r3)
            return r2
    }

    public static final long nextULong-jmpaW-c(kotlin.random.Random r2, long r3, long r5) {
            java.lang.String r0 = "$this$nextULong"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            checkULongRangeBounds-eb3DHEI(r3, r5)
            r0 = -9223372036854775808
            long r3 = r3 ^ r0
            long r5 = r5 ^ r0
            long r2 = r2.nextLong(r3, r5)
            long r2 = r2 ^ r0
            long r2 = kotlin.ULong.constructor-impl(r2)
            return r2
    }
}
