package kotlin.comparisons;

@kotlin.Metadata(d1 = {"\u0000B\n\u0000\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0010\u001a\"\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00012\u0006\u0010\u0003\u001a\u00020\u0001H\u0007ø\u0001\u0000¢\u0006\u0004\b\u0004\u0010\u0005\u001a+\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00012\u0006\u0010\u0003\u001a\u00020\u00012\u0006\u0010\u0006\u001a\u00020\u0001H\u0087\bø\u0001\u0000¢\u0006\u0004\b\u0007\u0010\b\u001a&\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00012\n\u0010\t\u001a\u00020\n\"\u00020\u0001H\u0007ø\u0001\u0000¢\u0006\u0004\b\u000b\u0010\f\u001a\"\u0010\u0000\u001a\u00020\r2\u0006\u0010\u0002\u001a\u00020\r2\u0006\u0010\u0003\u001a\u00020\rH\u0007ø\u0001\u0000¢\u0006\u0004\b\u000e\u0010\u000f\u001a+\u0010\u0000\u001a\u00020\r2\u0006\u0010\u0002\u001a\u00020\r2\u0006\u0010\u0003\u001a\u00020\r2\u0006\u0010\u0006\u001a\u00020\rH\u0087\bø\u0001\u0000¢\u0006\u0004\b\u0010\u0010\u0011\u001a&\u0010\u0000\u001a\u00020\r2\u0006\u0010\u0002\u001a\u00020\r2\n\u0010\t\u001a\u00020\u0012\"\u00020\rH\u0007ø\u0001\u0000¢\u0006\u0004\b\u0013\u0010\u0014\u001a\"\u0010\u0000\u001a\u00020\u00152\u0006\u0010\u0002\u001a\u00020\u00152\u0006\u0010\u0003\u001a\u00020\u0015H\u0007ø\u0001\u0000¢\u0006\u0004\b\u0016\u0010\u0017\u001a+\u0010\u0000\u001a\u00020\u00152\u0006\u0010\u0002\u001a\u00020\u00152\u0006\u0010\u0003\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u0015H\u0087\bø\u0001\u0000¢\u0006\u0004\b\u0018\u0010\u0019\u001a&\u0010\u0000\u001a\u00020\u00152\u0006\u0010\u0002\u001a\u00020\u00152\n\u0010\t\u001a\u00020\u001a\"\u00020\u0015H\u0007ø\u0001\u0000¢\u0006\u0004\b\u001b\u0010\u001c\u001a\"\u0010\u0000\u001a\u00020\u001d2\u0006\u0010\u0002\u001a\u00020\u001d2\u0006\u0010\u0003\u001a\u00020\u001dH\u0007ø\u0001\u0000¢\u0006\u0004\b\u001e\u0010\u001f\u001a+\u0010\u0000\u001a\u00020\u001d2\u0006\u0010\u0002\u001a\u00020\u001d2\u0006\u0010\u0003\u001a\u00020\u001d2\u0006\u0010\u0006\u001a\u00020\u001dH\u0087\bø\u0001\u0000¢\u0006\u0004\b \u0010!\u001a&\u0010\u0000\u001a\u00020\u001d2\u0006\u0010\u0002\u001a\u00020\u001d2\n\u0010\t\u001a\u00020\"\"\u00020\u001dH\u0007ø\u0001\u0000¢\u0006\u0004\b#\u0010$\u001a\"\u0010%\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00012\u0006\u0010\u0003\u001a\u00020\u0001H\u0007ø\u0001\u0000¢\u0006\u0004\b&\u0010\u0005\u001a+\u0010%\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00012\u0006\u0010\u0003\u001a\u00020\u00012\u0006\u0010\u0006\u001a\u00020\u0001H\u0087\bø\u0001\u0000¢\u0006\u0004\b'\u0010\b\u001a&\u0010%\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00012\n\u0010\t\u001a\u00020\n\"\u00020\u0001H\u0007ø\u0001\u0000¢\u0006\u0004\b(\u0010\f\u001a\"\u0010%\u001a\u00020\r2\u0006\u0010\u0002\u001a\u00020\r2\u0006\u0010\u0003\u001a\u00020\rH\u0007ø\u0001\u0000¢\u0006\u0004\b)\u0010\u000f\u001a+\u0010%\u001a\u00020\r2\u0006\u0010\u0002\u001a\u00020\r2\u0006\u0010\u0003\u001a\u00020\r2\u0006\u0010\u0006\u001a\u00020\rH\u0087\bø\u0001\u0000¢\u0006\u0004\b*\u0010\u0011\u001a&\u0010%\u001a\u00020\r2\u0006\u0010\u0002\u001a\u00020\r2\n\u0010\t\u001a\u00020\u0012\"\u00020\rH\u0007ø\u0001\u0000¢\u0006\u0004\b+\u0010\u0014\u001a\"\u0010%\u001a\u00020\u00152\u0006\u0010\u0002\u001a\u00020\u00152\u0006\u0010\u0003\u001a\u00020\u0015H\u0007ø\u0001\u0000¢\u0006\u0004\b,\u0010\u0017\u001a+\u0010%\u001a\u00020\u00152\u0006\u0010\u0002\u001a\u00020\u00152\u0006\u0010\u0003\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u0015H\u0087\bø\u0001\u0000¢\u0006\u0004\b-\u0010\u0019\u001a&\u0010%\u001a\u00020\u00152\u0006\u0010\u0002\u001a\u00020\u00152\n\u0010\t\u001a\u00020\u001a\"\u00020\u0015H\u0007ø\u0001\u0000¢\u0006\u0004\b.\u0010\u001c\u001a\"\u0010%\u001a\u00020\u001d2\u0006\u0010\u0002\u001a\u00020\u001d2\u0006\u0010\u0003\u001a\u00020\u001dH\u0007ø\u0001\u0000¢\u0006\u0004\b/\u0010\u001f\u001a+\u0010%\u001a\u00020\u001d2\u0006\u0010\u0002\u001a\u00020\u001d2\u0006\u0010\u0003\u001a\u00020\u001d2\u0006\u0010\u0006\u001a\u00020\u001dH\u0087\bø\u0001\u0000¢\u0006\u0004\b0\u0010!\u001a&\u0010%\u001a\u00020\u001d2\u0006\u0010\u0002\u001a\u00020\u001d2\n\u0010\t\u001a\u00020\"\"\u00020\u001dH\u0007ø\u0001\u0000¢\u0006\u0004\b1\u0010$\u0082\u0002\u0004\n\u0002\b\u0019¨\u00062"}, d2 = {"maxOf", "Lkotlin/UByte;", "a", "b", "maxOf-Kr8caGY", "(BB)B", "c", "maxOf-b33U2AM", "(BBB)B", "other", "Lkotlin/UByteArray;", "maxOf-Wr6uiD8", "(B[B)B", "Lkotlin/UInt;", "maxOf-J1ME1BU", "(II)I", "maxOf-WZ9TVnA", "(III)I", "Lkotlin/UIntArray;", "maxOf-Md2H83M", "(I[I)I", "Lkotlin/ULong;", "maxOf-eb3DHEI", "(JJ)J", "maxOf-sambcqE", "(JJJ)J", "Lkotlin/ULongArray;", "maxOf-R03FKyM", "(J[J)J", "Lkotlin/UShort;", "maxOf-5PvTz6A", "(SS)S", "maxOf-VKSA0NQ", "(SSS)S", "Lkotlin/UShortArray;", "maxOf-t1qELG4", "(S[S)S", "minOf", "minOf-Kr8caGY", "minOf-b33U2AM", "minOf-Wr6uiD8", "minOf-J1ME1BU", "minOf-WZ9TVnA", "minOf-Md2H83M", "minOf-eb3DHEI", "minOf-sambcqE", "minOf-R03FKyM", "minOf-5PvTz6A", "minOf-VKSA0NQ", "minOf-t1qELG4", "kotlin-stdlib"}, k = 5, mv = {1, 6, 0}, xi = 49, xs = "kotlin/comparisons/UComparisonsKt")
class UComparisonsKt___UComparisonsKt {
    public UComparisonsKt___UComparisonsKt() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final short maxOf-5PvTz6A(short r2, short r3) {
            r0 = 65535(0xffff, float:9.1834E-41)
            r1 = r2 & r0
            r0 = r0 & r3
            int r0 = kotlin.jvm.internal.Intrinsics.compare(r1, r0)
            if (r0 < 0) goto Ld
            goto Le
        Ld:
            r2 = r3
        Le:
            return r2
    }

    public static final int maxOf-J1ME1BU(int r1, int r2) {
            int r0 = kotlin.UnsignedKt.uintCompare(r1, r2)
            if (r0 < 0) goto L7
            goto L8
        L7:
            r1 = r2
        L8:
            return r1
    }

    public static final byte maxOf-Kr8caGY(byte r2, byte r3) {
            r0 = r2 & 255(0xff, float:3.57E-43)
            r1 = r3 & 255(0xff, float:3.57E-43)
            int r0 = kotlin.jvm.internal.Intrinsics.compare(r0, r1)
            if (r0 < 0) goto Lb
            goto Lc
        Lb:
            r2 = r3
        Lc:
            return r2
    }

    public static final int maxOf-Md2H83M(int r3, int... r4) {
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            int r0 = kotlin.UIntArray.getSize-impl(r4)
            r1 = 0
        La:
            if (r1 >= r0) goto L17
            int r2 = kotlin.UIntArray.get-pVg5ArA(r4, r1)
            int r3 = kotlin.comparisons.UComparisonsKt.maxOf-J1ME1BU(r3, r2)
            int r1 = r1 + 1
            goto La
        L17:
            return r3
    }

    public static final long maxOf-R03FKyM(long r4, long... r6) {
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            int r0 = kotlin.ULongArray.getSize-impl(r6)
            r1 = 0
        La:
            if (r1 >= r0) goto L17
            long r2 = kotlin.ULongArray.get-s-VKNKU(r6, r1)
            long r4 = kotlin.comparisons.UComparisonsKt.maxOf-eb3DHEI(r4, r2)
            int r1 = r1 + 1
            goto La
        L17:
            return r4
    }

    private static final short maxOf-VKSA0NQ(short r0, short r1, short r2) {
            short r1 = kotlin.comparisons.UComparisonsKt.maxOf-5PvTz6A(r1, r2)
            short r0 = kotlin.comparisons.UComparisonsKt.maxOf-5PvTz6A(r0, r1)
            return r0
    }

    private static final int maxOf-WZ9TVnA(int r0, int r1, int r2) {
            int r1 = kotlin.comparisons.UComparisonsKt.maxOf-J1ME1BU(r1, r2)
            int r0 = kotlin.comparisons.UComparisonsKt.maxOf-J1ME1BU(r0, r1)
            return r0
    }

    public static final byte maxOf-Wr6uiD8(byte r3, byte... r4) {
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            int r0 = kotlin.UByteArray.getSize-impl(r4)
            r1 = 0
        La:
            if (r1 >= r0) goto L17
            byte r2 = kotlin.UByteArray.get-w2LRezQ(r4, r1)
            byte r3 = kotlin.comparisons.UComparisonsKt.maxOf-Kr8caGY(r3, r2)
            int r1 = r1 + 1
            goto La
        L17:
            return r3
    }

    private static final byte maxOf-b33U2AM(byte r0, byte r1, byte r2) {
            byte r1 = kotlin.comparisons.UComparisonsKt.maxOf-Kr8caGY(r1, r2)
            byte r0 = kotlin.comparisons.UComparisonsKt.maxOf-Kr8caGY(r0, r1)
            return r0
    }

    public static final long maxOf-eb3DHEI(long r1, long r3) {
            int r0 = kotlin.UnsignedKt.ulongCompare(r1, r3)
            if (r0 < 0) goto L7
            goto L8
        L7:
            r1 = r3
        L8:
            return r1
    }

    private static final long maxOf-sambcqE(long r0, long r2, long r4) {
            long r2 = kotlin.comparisons.UComparisonsKt.maxOf-eb3DHEI(r2, r4)
            long r0 = kotlin.comparisons.UComparisonsKt.maxOf-eb3DHEI(r0, r2)
            return r0
    }

    public static final short maxOf-t1qELG4(short r3, short... r4) {
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            int r0 = kotlin.UShortArray.getSize-impl(r4)
            r1 = 0
        La:
            if (r1 >= r0) goto L17
            short r2 = kotlin.UShortArray.get-Mh2AYeg(r4, r1)
            short r3 = kotlin.comparisons.UComparisonsKt.maxOf-5PvTz6A(r3, r2)
            int r1 = r1 + 1
            goto La
        L17:
            return r3
    }

    public static final short minOf-5PvTz6A(short r2, short r3) {
            r0 = 65535(0xffff, float:9.1834E-41)
            r1 = r2 & r0
            r0 = r0 & r3
            int r0 = kotlin.jvm.internal.Intrinsics.compare(r1, r0)
            if (r0 > 0) goto Ld
            goto Le
        Ld:
            r2 = r3
        Le:
            return r2
    }

    public static final int minOf-J1ME1BU(int r1, int r2) {
            int r0 = kotlin.UnsignedKt.uintCompare(r1, r2)
            if (r0 > 0) goto L7
            goto L8
        L7:
            r1 = r2
        L8:
            return r1
    }

    public static final byte minOf-Kr8caGY(byte r2, byte r3) {
            r0 = r2 & 255(0xff, float:3.57E-43)
            r1 = r3 & 255(0xff, float:3.57E-43)
            int r0 = kotlin.jvm.internal.Intrinsics.compare(r0, r1)
            if (r0 > 0) goto Lb
            goto Lc
        Lb:
            r2 = r3
        Lc:
            return r2
    }

    public static final int minOf-Md2H83M(int r3, int... r4) {
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            int r0 = kotlin.UIntArray.getSize-impl(r4)
            r1 = 0
        La:
            if (r1 >= r0) goto L17
            int r2 = kotlin.UIntArray.get-pVg5ArA(r4, r1)
            int r3 = kotlin.comparisons.UComparisonsKt.minOf-J1ME1BU(r3, r2)
            int r1 = r1 + 1
            goto La
        L17:
            return r3
    }

    public static final long minOf-R03FKyM(long r4, long... r6) {
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            int r0 = kotlin.ULongArray.getSize-impl(r6)
            r1 = 0
        La:
            if (r1 >= r0) goto L17
            long r2 = kotlin.ULongArray.get-s-VKNKU(r6, r1)
            long r4 = kotlin.comparisons.UComparisonsKt.minOf-eb3DHEI(r4, r2)
            int r1 = r1 + 1
            goto La
        L17:
            return r4
    }

    private static final short minOf-VKSA0NQ(short r0, short r1, short r2) {
            short r1 = kotlin.comparisons.UComparisonsKt.minOf-5PvTz6A(r1, r2)
            short r0 = kotlin.comparisons.UComparisonsKt.minOf-5PvTz6A(r0, r1)
            return r0
    }

    private static final int minOf-WZ9TVnA(int r0, int r1, int r2) {
            int r1 = kotlin.comparisons.UComparisonsKt.minOf-J1ME1BU(r1, r2)
            int r0 = kotlin.comparisons.UComparisonsKt.minOf-J1ME1BU(r0, r1)
            return r0
    }

    public static final byte minOf-Wr6uiD8(byte r3, byte... r4) {
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            int r0 = kotlin.UByteArray.getSize-impl(r4)
            r1 = 0
        La:
            if (r1 >= r0) goto L17
            byte r2 = kotlin.UByteArray.get-w2LRezQ(r4, r1)
            byte r3 = kotlin.comparisons.UComparisonsKt.minOf-Kr8caGY(r3, r2)
            int r1 = r1 + 1
            goto La
        L17:
            return r3
    }

    private static final byte minOf-b33U2AM(byte r0, byte r1, byte r2) {
            byte r1 = kotlin.comparisons.UComparisonsKt.minOf-Kr8caGY(r1, r2)
            byte r0 = kotlin.comparisons.UComparisonsKt.minOf-Kr8caGY(r0, r1)
            return r0
    }

    public static final long minOf-eb3DHEI(long r1, long r3) {
            int r0 = kotlin.UnsignedKt.ulongCompare(r1, r3)
            if (r0 > 0) goto L7
            goto L8
        L7:
            r1 = r3
        L8:
            return r1
    }

    private static final long minOf-sambcqE(long r0, long r2, long r4) {
            long r2 = kotlin.comparisons.UComparisonsKt.minOf-eb3DHEI(r2, r4)
            long r0 = kotlin.comparisons.UComparisonsKt.minOf-eb3DHEI(r0, r2)
            return r0
    }

    public static final short minOf-t1qELG4(short r3, short... r4) {
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            int r0 = kotlin.UShortArray.getSize-impl(r4)
            r1 = 0
        La:
            if (r1 >= r0) goto L17
            short r2 = kotlin.UShortArray.get-Mh2AYeg(r4, r1)
            short r3 = kotlin.comparisons.UComparisonsKt.minOf-5PvTz6A(r3, r2)
            int r1 = r1 + 1
            goto La
        L17:
            return r3
    }
}
