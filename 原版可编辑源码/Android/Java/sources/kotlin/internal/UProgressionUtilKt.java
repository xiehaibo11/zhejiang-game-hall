package kotlin.internal;

import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import kotlin.Metadata;
import kotlin.UInt;
import kotlin.ULong;
import kotlin.UnsignedKt;

@Metadata(d1 = {"\u0000 \n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\b\n\u0000\n\u0002\u0010\t\n\u0002\b\u0002\u001a*\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00012\u0006\u0010\u0003\u001a\u00020\u00012\u0006\u0010\u0004\u001a\u00020\u0001H\u0002ø\u0001\u0000¢\u0006\u0004\b\u0005\u0010\u0006\u001a*\u0010\u0000\u001a\u00020\u00072\u0006\u0010\u0002\u001a\u00020\u00072\u0006\u0010\u0003\u001a\u00020\u00072\u0006\u0010\u0004\u001a\u00020\u0007H\u0002ø\u0001\u0000¢\u0006\u0004\b\b\u0010\t\u001a*\u0010\n\u001a\u00020\u00012\u0006\u0010\u000b\u001a\u00020\u00012\u0006\u0010\f\u001a\u00020\u00012\u0006\u0010\r\u001a\u00020\u000eH\u0001ø\u0001\u0000¢\u0006\u0004\b\u000f\u0010\u0006\u001a*\u0010\n\u001a\u00020\u00072\u0006\u0010\u000b\u001a\u00020\u00072\u0006\u0010\f\u001a\u00020\u00072\u0006\u0010\r\u001a\u00020\u0010H\u0001ø\u0001\u0000¢\u0006\u0004\b\u0011\u0010\t\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006\u0012"}, d2 = {"differenceModulo", "Lkotlin/UInt;", "a", "b", "c", "differenceModulo-WZ9TVnA", "(III)I", "Lkotlin/ULong;", "differenceModulo-sambcqE", "(JJJ)J", "getProgressionLastElement", "start", TtmlNode.END, "step", "", "getProgressionLastElement-Nkh28Cs", "", "getProgressionLastElement-7ftBX0g", "kotlin-stdlib"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class UProgressionUtilKt {
    private static final int differenceModulo-WZ9TVnA(int i, int i2, int i3) {
        int i4 = UnsignedKt.uintRemainder-J1ME1BU(i, i3);
        int i5 = UnsignedKt.uintRemainder-J1ME1BU(i2, i3);
        int iUintCompare = UnsignedKt.uintCompare(i4, i5);
        int i6 = UInt.constructor-impl(i4 - i5);
        return iUintCompare >= 0 ? i6 : UInt.constructor-impl(i6 + i3);
    }

    private static final long differenceModulo-sambcqE(long j, long j2, long j3) {
        long j4 = UnsignedKt.ulongRemainder-eb3DHEI(j, j3);
        long j5 = UnsignedKt.ulongRemainder-eb3DHEI(j2, j3);
        int iUlongCompare = UnsignedKt.ulongCompare(j4, j5);
        long j6 = ULong.constructor-impl(j4 - j5);
        return iUlongCompare >= 0 ? j6 : ULong.constructor-impl(j6 + j3);
    }

    public static final int getProgressionLastElement-Nkh28Cs(int i, int i2, int i3) {
        if (i3 > 0) {
            return UnsignedKt.uintCompare(i, i2) >= 0 ? i2 : UInt.constructor-impl(i2 - differenceModulo-WZ9TVnA(i2, i, UInt.constructor-impl(i3)));
        }
        if (i3 < 0) {
            return UnsignedKt.uintCompare(i, i2) <= 0 ? i2 : UInt.constructor-impl(i2 + differenceModulo-WZ9TVnA(i, i2, UInt.constructor-impl(-i3)));
        }
        throw new IllegalArgumentException("Step is zero.");
    }

    public static final long getProgressionLastElement-7ftBX0g(long j, long j2, long j3) {
        if (j3 > 0) {
            return UnsignedKt.ulongCompare(j, j2) >= 0 ? j2 : ULong.constructor-impl(j2 - differenceModulo-sambcqE(j2, j, ULong.constructor-impl(j3)));
        }
        if (j3 < 0) {
            return UnsignedKt.ulongCompare(j, j2) <= 0 ? j2 : ULong.constructor-impl(j2 + differenceModulo-sambcqE(j, j2, ULong.constructor-impl(-j3)));
        }
        throw new IllegalArgumentException("Step is zero.");
    }
}
