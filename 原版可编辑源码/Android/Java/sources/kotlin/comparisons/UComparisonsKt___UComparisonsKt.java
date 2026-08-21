package kotlin.comparisons;

import com.kwad.sdk.api.model.AdnName;
import kotlin.Metadata;
import kotlin.UByte;
import kotlin.UByteArray;
import kotlin.UIntArray;
import kotlin.ULongArray;
import kotlin.UShort;
import kotlin.UShortArray;
import kotlin.UnsignedKt;
import kotlin.jvm.internal.Intrinsics;

@Metadata(d1 = {"\u0000B\n\u0000\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0010\u001a\"\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00012\u0006\u0010\u0003\u001a\u00020\u0001H\u0007ø\u0001\u0000¢\u0006\u0004\b\u0004\u0010\u0005\u001a+\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00012\u0006\u0010\u0003\u001a\u00020\u00012\u0006\u0010\u0006\u001a\u00020\u0001H\u0087\bø\u0001\u0000¢\u0006\u0004\b\u0007\u0010\b\u001a&\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00012\n\u0010\t\u001a\u00020\n\"\u00020\u0001H\u0007ø\u0001\u0000¢\u0006\u0004\b\u000b\u0010\f\u001a\"\u0010\u0000\u001a\u00020\r2\u0006\u0010\u0002\u001a\u00020\r2\u0006\u0010\u0003\u001a\u00020\rH\u0007ø\u0001\u0000¢\u0006\u0004\b\u000e\u0010\u000f\u001a+\u0010\u0000\u001a\u00020\r2\u0006\u0010\u0002\u001a\u00020\r2\u0006\u0010\u0003\u001a\u00020\r2\u0006\u0010\u0006\u001a\u00020\rH\u0087\bø\u0001\u0000¢\u0006\u0004\b\u0010\u0010\u0011\u001a&\u0010\u0000\u001a\u00020\r2\u0006\u0010\u0002\u001a\u00020\r2\n\u0010\t\u001a\u00020\u0012\"\u00020\rH\u0007ø\u0001\u0000¢\u0006\u0004\b\u0013\u0010\u0014\u001a\"\u0010\u0000\u001a\u00020\u00152\u0006\u0010\u0002\u001a\u00020\u00152\u0006\u0010\u0003\u001a\u00020\u0015H\u0007ø\u0001\u0000¢\u0006\u0004\b\u0016\u0010\u0017\u001a+\u0010\u0000\u001a\u00020\u00152\u0006\u0010\u0002\u001a\u00020\u00152\u0006\u0010\u0003\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u0015H\u0087\bø\u0001\u0000¢\u0006\u0004\b\u0018\u0010\u0019\u001a&\u0010\u0000\u001a\u00020\u00152\u0006\u0010\u0002\u001a\u00020\u00152\n\u0010\t\u001a\u00020\u001a\"\u00020\u0015H\u0007ø\u0001\u0000¢\u0006\u0004\b\u001b\u0010\u001c\u001a\"\u0010\u0000\u001a\u00020\u001d2\u0006\u0010\u0002\u001a\u00020\u001d2\u0006\u0010\u0003\u001a\u00020\u001dH\u0007ø\u0001\u0000¢\u0006\u0004\b\u001e\u0010\u001f\u001a+\u0010\u0000\u001a\u00020\u001d2\u0006\u0010\u0002\u001a\u00020\u001d2\u0006\u0010\u0003\u001a\u00020\u001d2\u0006\u0010\u0006\u001a\u00020\u001dH\u0087\bø\u0001\u0000¢\u0006\u0004\b \u0010!\u001a&\u0010\u0000\u001a\u00020\u001d2\u0006\u0010\u0002\u001a\u00020\u001d2\n\u0010\t\u001a\u00020\"\"\u00020\u001dH\u0007ø\u0001\u0000¢\u0006\u0004\b#\u0010$\u001a\"\u0010%\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00012\u0006\u0010\u0003\u001a\u00020\u0001H\u0007ø\u0001\u0000¢\u0006\u0004\b&\u0010\u0005\u001a+\u0010%\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00012\u0006\u0010\u0003\u001a\u00020\u00012\u0006\u0010\u0006\u001a\u00020\u0001H\u0087\bø\u0001\u0000¢\u0006\u0004\b'\u0010\b\u001a&\u0010%\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00012\n\u0010\t\u001a\u00020\n\"\u00020\u0001H\u0007ø\u0001\u0000¢\u0006\u0004\b(\u0010\f\u001a\"\u0010%\u001a\u00020\r2\u0006\u0010\u0002\u001a\u00020\r2\u0006\u0010\u0003\u001a\u00020\rH\u0007ø\u0001\u0000¢\u0006\u0004\b)\u0010\u000f\u001a+\u0010%\u001a\u00020\r2\u0006\u0010\u0002\u001a\u00020\r2\u0006\u0010\u0003\u001a\u00020\r2\u0006\u0010\u0006\u001a\u00020\rH\u0087\bø\u0001\u0000¢\u0006\u0004\b*\u0010\u0011\u001a&\u0010%\u001a\u00020\r2\u0006\u0010\u0002\u001a\u00020\r2\n\u0010\t\u001a\u00020\u0012\"\u00020\rH\u0007ø\u0001\u0000¢\u0006\u0004\b+\u0010\u0014\u001a\"\u0010%\u001a\u00020\u00152\u0006\u0010\u0002\u001a\u00020\u00152\u0006\u0010\u0003\u001a\u00020\u0015H\u0007ø\u0001\u0000¢\u0006\u0004\b,\u0010\u0017\u001a+\u0010%\u001a\u00020\u00152\u0006\u0010\u0002\u001a\u00020\u00152\u0006\u0010\u0003\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u0015H\u0087\bø\u0001\u0000¢\u0006\u0004\b-\u0010\u0019\u001a&\u0010%\u001a\u00020\u00152\u0006\u0010\u0002\u001a\u00020\u00152\n\u0010\t\u001a\u00020\u001a\"\u00020\u0015H\u0007ø\u0001\u0000¢\u0006\u0004\b.\u0010\u001c\u001a\"\u0010%\u001a\u00020\u001d2\u0006\u0010\u0002\u001a\u00020\u001d2\u0006\u0010\u0003\u001a\u00020\u001dH\u0007ø\u0001\u0000¢\u0006\u0004\b/\u0010\u001f\u001a+\u0010%\u001a\u00020\u001d2\u0006\u0010\u0002\u001a\u00020\u001d2\u0006\u0010\u0003\u001a\u00020\u001d2\u0006\u0010\u0006\u001a\u00020\u001dH\u0087\bø\u0001\u0000¢\u0006\u0004\b0\u0010!\u001a&\u0010%\u001a\u00020\u001d2\u0006\u0010\u0002\u001a\u00020\u001d2\n\u0010\t\u001a\u00020\"\"\u00020\u001dH\u0007ø\u0001\u0000¢\u0006\u0004\b1\u0010$\u0082\u0002\u0004\n\u0002\b\u0019¨\u00062"}, d2 = {"maxOf", "Lkotlin/UByte;", "a", "b", "maxOf-Kr8caGY", "(BB)B", "c", "maxOf-b33U2AM", "(BBB)B", AdnName.OTHER, "Lkotlin/UByteArray;", "maxOf-Wr6uiD8", "(B[B)B", "Lkotlin/UInt;", "maxOf-J1ME1BU", "(II)I", "maxOf-WZ9TVnA", "(III)I", "Lkotlin/UIntArray;", "maxOf-Md2H83M", "(I[I)I", "Lkotlin/ULong;", "maxOf-eb3DHEI", "(JJ)J", "maxOf-sambcqE", "(JJJ)J", "Lkotlin/ULongArray;", "maxOf-R03FKyM", "(J[J)J", "Lkotlin/UShort;", "maxOf-5PvTz6A", "(SS)S", "maxOf-VKSA0NQ", "(SSS)S", "Lkotlin/UShortArray;", "maxOf-t1qELG4", "(S[S)S", "minOf", "minOf-Kr8caGY", "minOf-b33U2AM", "minOf-Wr6uiD8", "minOf-J1ME1BU", "minOf-WZ9TVnA", "minOf-Md2H83M", "minOf-eb3DHEI", "minOf-sambcqE", "minOf-R03FKyM", "minOf-5PvTz6A", "minOf-VKSA0NQ", "minOf-t1qELG4", "kotlin-stdlib"}, k = 5, mv = {1, 6, 0}, xi = 49, xs = "kotlin/comparisons/UComparisonsKt")
class UComparisonsKt___UComparisonsKt {
    public static final int maxOf-J1ME1BU(int i, int i2) {
        return UnsignedKt.uintCompare(i, i2) >= 0 ? i : i2;
    }

    public static final long maxOf-eb3DHEI(long j, long j2) {
        return UnsignedKt.ulongCompare(j, j2) >= 0 ? j : j2;
    }

    public static final byte maxOf-Kr8caGY(byte b, byte b2) {
        return Intrinsics.compare(b & UByte.MAX_VALUE, b2 & UByte.MAX_VALUE) >= 0 ? b : b2;
    }

    public static final short maxOf-5PvTz6A(short s, short s2) {
        return Intrinsics.compare(s & UShort.MAX_VALUE, 65535 & s2) >= 0 ? s : s2;
    }

    private static final int maxOf-WZ9TVnA(int i, int i2, int i3) {
        return UComparisonsKt.maxOf-J1ME1BU(i, UComparisonsKt.maxOf-J1ME1BU(i2, i3));
    }

    private static final long maxOf-sambcqE(long j, long j2, long j3) {
        return UComparisonsKt.maxOf-eb3DHEI(j, UComparisonsKt.maxOf-eb3DHEI(j2, j3));
    }

    private static final byte maxOf-b33U2AM(byte b, byte b2, byte b3) {
        return UComparisonsKt.maxOf-Kr8caGY(b, UComparisonsKt.maxOf-Kr8caGY(b2, b3));
    }

    private static final short maxOf-VKSA0NQ(short s, short s2, short s3) {
        return UComparisonsKt.maxOf-5PvTz6A(s, UComparisonsKt.maxOf-5PvTz6A(s2, s3));
    }

    public static final int maxOf-Md2H83M(int i, int... other) {
        Intrinsics.checkNotNullParameter(other, "other");
        int i2 = UIntArray.getSize-impl(other);
        for (int i3 = 0; i3 < i2; i3++) {
            i = UComparisonsKt.maxOf-J1ME1BU(i, UIntArray.get-pVg5ArA(other, i3));
        }
        return i;
    }

    public static final long maxOf-R03FKyM(long j, long... other) {
        Intrinsics.checkNotNullParameter(other, "other");
        int i = ULongArray.getSize-impl(other);
        for (int i2 = 0; i2 < i; i2++) {
            j = UComparisonsKt.maxOf-eb3DHEI(j, ULongArray.get-s-VKNKU(other, i2));
        }
        return j;
    }

    public static final byte maxOf-Wr6uiD8(byte b, byte... other) {
        Intrinsics.checkNotNullParameter(other, "other");
        int i = UByteArray.getSize-impl(other);
        for (int i2 = 0; i2 < i; i2++) {
            b = UComparisonsKt.maxOf-Kr8caGY(b, UByteArray.get-w2LRezQ(other, i2));
        }
        return b;
    }

    public static final short maxOf-t1qELG4(short s, short... other) {
        Intrinsics.checkNotNullParameter(other, "other");
        int i = UShortArray.getSize-impl(other);
        for (int i2 = 0; i2 < i; i2++) {
            s = UComparisonsKt.maxOf-5PvTz6A(s, UShortArray.get-Mh2AYeg(other, i2));
        }
        return s;
    }

    public static final int minOf-J1ME1BU(int i, int i2) {
        return UnsignedKt.uintCompare(i, i2) <= 0 ? i : i2;
    }

    public static final long minOf-eb3DHEI(long j, long j2) {
        return UnsignedKt.ulongCompare(j, j2) <= 0 ? j : j2;
    }

    public static final byte minOf-Kr8caGY(byte b, byte b2) {
        return Intrinsics.compare(b & UByte.MAX_VALUE, b2 & UByte.MAX_VALUE) <= 0 ? b : b2;
    }

    public static final short minOf-5PvTz6A(short s, short s2) {
        return Intrinsics.compare(s & UShort.MAX_VALUE, 65535 & s2) <= 0 ? s : s2;
    }

    private static final int minOf-WZ9TVnA(int i, int i2, int i3) {
        return UComparisonsKt.minOf-J1ME1BU(i, UComparisonsKt.minOf-J1ME1BU(i2, i3));
    }

    private static final long minOf-sambcqE(long j, long j2, long j3) {
        return UComparisonsKt.minOf-eb3DHEI(j, UComparisonsKt.minOf-eb3DHEI(j2, j3));
    }

    private static final byte minOf-b33U2AM(byte b, byte b2, byte b3) {
        return UComparisonsKt.minOf-Kr8caGY(b, UComparisonsKt.minOf-Kr8caGY(b2, b3));
    }

    private static final short minOf-VKSA0NQ(short s, short s2, short s3) {
        return UComparisonsKt.minOf-5PvTz6A(s, UComparisonsKt.minOf-5PvTz6A(s2, s3));
    }

    public static final int minOf-Md2H83M(int i, int... other) {
        Intrinsics.checkNotNullParameter(other, "other");
        int i2 = UIntArray.getSize-impl(other);
        for (int i3 = 0; i3 < i2; i3++) {
            i = UComparisonsKt.minOf-J1ME1BU(i, UIntArray.get-pVg5ArA(other, i3));
        }
        return i;
    }

    public static final long minOf-R03FKyM(long j, long... other) {
        Intrinsics.checkNotNullParameter(other, "other");
        int i = ULongArray.getSize-impl(other);
        for (int i2 = 0; i2 < i; i2++) {
            j = UComparisonsKt.minOf-eb3DHEI(j, ULongArray.get-s-VKNKU(other, i2));
        }
        return j;
    }

    public static final byte minOf-Wr6uiD8(byte b, byte... other) {
        Intrinsics.checkNotNullParameter(other, "other");
        int i = UByteArray.getSize-impl(other);
        for (int i2 = 0; i2 < i; i2++) {
            b = UComparisonsKt.minOf-Kr8caGY(b, UByteArray.get-w2LRezQ(other, i2));
        }
        return b;
    }

    public static final short minOf-t1qELG4(short s, short... other) {
        Intrinsics.checkNotNullParameter(other, "other");
        int i = UShortArray.getSize-impl(other);
        for (int i2 = 0; i2 < i; i2++) {
            s = UComparisonsKt.minOf-5PvTz6A(s, UShortArray.get-Mh2AYeg(other, i2));
        }
        return s;
    }
}
