package kotlin;

import com.bykv.vk.openvk.downloadnew.core.TTDownloadField;
import com.kwad.sdk.api.model.AdnName;
import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import kotlin.jvm.JvmInline;
import kotlin.ranges.UIntRange;

@Metadata(d1 = {"\u0000n\n\u0002\u0018\u0002\n\u0002\u0010\u000f\n\u0000\n\u0002\u0010\b\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0010\u000b\n\u0002\u0010\u0000\n\u0002\b!\n\u0002\u0018\u0002\n\u0002\b\u0012\n\u0002\u0010\u0005\n\u0002\b\u0003\n\u0002\u0010\u0006\n\u0002\b\u0003\n\u0002\u0010\u0007\n\u0002\b\u0005\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0010\n\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u000e\b\u0087@\u0018\u0000 y2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001yB\u0014\b\u0001\u0012\u0006\u0010\u0002\u001a\u00020\u0003ø\u0001\u0000¢\u0006\u0004\b\u0004\u0010\u0005J\u001b\u0010\b\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0000H\u0087\fø\u0001\u0000¢\u0006\u0004\b\n\u0010\u000bJ\u001b\u0010\f\u001a\u00020\u00032\u0006\u0010\t\u001a\u00020\rH\u0087\nø\u0001\u0000¢\u0006\u0004\b\u000e\u0010\u000fJ\u001b\u0010\f\u001a\u00020\u00032\u0006\u0010\t\u001a\u00020\u0000H\u0097\nø\u0001\u0000¢\u0006\u0004\b\u0010\u0010\u000bJ\u001b\u0010\f\u001a\u00020\u00032\u0006\u0010\t\u001a\u00020\u0011H\u0087\nø\u0001\u0000¢\u0006\u0004\b\u0012\u0010\u0013J\u001b\u0010\f\u001a\u00020\u00032\u0006\u0010\t\u001a\u00020\u0014H\u0087\nø\u0001\u0000¢\u0006\u0004\b\u0015\u0010\u0016J\u0016\u0010\u0017\u001a\u00020\u0000H\u0087\nø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b\u0018\u0010\u0005J\u001b\u0010\u0019\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\rH\u0087\nø\u0001\u0000¢\u0006\u0004\b\u001a\u0010\u000fJ\u001b\u0010\u0019\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0000H\u0087\nø\u0001\u0000¢\u0006\u0004\b\u001b\u0010\u000bJ\u001b\u0010\u0019\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u0011H\u0087\nø\u0001\u0000¢\u0006\u0004\b\u001c\u0010\u001dJ\u001b\u0010\u0019\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0014H\u0087\nø\u0001\u0000¢\u0006\u0004\b\u001e\u0010\u0016J\u001a\u0010\u001f\u001a\u00020 2\b\u0010\t\u001a\u0004\u0018\u00010!HÖ\u0003¢\u0006\u0004\b\"\u0010#J\u001b\u0010$\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\rH\u0087\bø\u0001\u0000¢\u0006\u0004\b%\u0010\u000fJ\u001b\u0010$\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0000H\u0087\bø\u0001\u0000¢\u0006\u0004\b&\u0010\u000bJ\u001b\u0010$\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u0011H\u0087\bø\u0001\u0000¢\u0006\u0004\b'\u0010\u001dJ\u001b\u0010$\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0014H\u0087\bø\u0001\u0000¢\u0006\u0004\b(\u0010\u0016J\u0010\u0010)\u001a\u00020\u0003HÖ\u0001¢\u0006\u0004\b*\u0010\u0005J\u0016\u0010+\u001a\u00020\u0000H\u0087\nø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b,\u0010\u0005J\u0016\u0010-\u001a\u00020\u0000H\u0087\bø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b.\u0010\u0005J\u001b\u0010/\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\rH\u0087\nø\u0001\u0000¢\u0006\u0004\b0\u0010\u000fJ\u001b\u0010/\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0000H\u0087\nø\u0001\u0000¢\u0006\u0004\b1\u0010\u000bJ\u001b\u0010/\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u0011H\u0087\nø\u0001\u0000¢\u0006\u0004\b2\u0010\u001dJ\u001b\u0010/\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0014H\u0087\nø\u0001\u0000¢\u0006\u0004\b3\u0010\u0016J\u001b\u00104\u001a\u00020\r2\u0006\u0010\t\u001a\u00020\rH\u0087\bø\u0001\u0000¢\u0006\u0004\b5\u00106J\u001b\u00104\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0000H\u0087\bø\u0001\u0000¢\u0006\u0004\b7\u0010\u000bJ\u001b\u00104\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u0011H\u0087\bø\u0001\u0000¢\u0006\u0004\b8\u0010\u001dJ\u001b\u00104\u001a\u00020\u00142\u0006\u0010\t\u001a\u00020\u0014H\u0087\bø\u0001\u0000¢\u0006\u0004\b9\u0010:J\u001b\u0010;\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0000H\u0087\fø\u0001\u0000¢\u0006\u0004\b<\u0010\u000bJ\u001b\u0010=\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\rH\u0087\nø\u0001\u0000¢\u0006\u0004\b>\u0010\u000fJ\u001b\u0010=\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0000H\u0087\nø\u0001\u0000¢\u0006\u0004\b?\u0010\u000bJ\u001b\u0010=\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u0011H\u0087\nø\u0001\u0000¢\u0006\u0004\b@\u0010\u001dJ\u001b\u0010=\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0014H\u0087\nø\u0001\u0000¢\u0006\u0004\bA\u0010\u0016J\u001b\u0010B\u001a\u00020C2\u0006\u0010\t\u001a\u00020\u0000H\u0087\nø\u0001\u0000¢\u0006\u0004\bD\u0010EJ\u001b\u0010F\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\rH\u0087\nø\u0001\u0000¢\u0006\u0004\bG\u0010\u000fJ\u001b\u0010F\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0000H\u0087\nø\u0001\u0000¢\u0006\u0004\bH\u0010\u000bJ\u001b\u0010F\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u0011H\u0087\nø\u0001\u0000¢\u0006\u0004\bI\u0010\u001dJ\u001b\u0010F\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0014H\u0087\nø\u0001\u0000¢\u0006\u0004\bJ\u0010\u0016J\u001e\u0010K\u001a\u00020\u00002\u0006\u0010L\u001a\u00020\u0003H\u0087\fø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\bM\u0010\u000bJ\u001e\u0010N\u001a\u00020\u00002\u0006\u0010L\u001a\u00020\u0003H\u0087\fø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\bO\u0010\u000bJ\u001b\u0010P\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\rH\u0087\nø\u0001\u0000¢\u0006\u0004\bQ\u0010\u000fJ\u001b\u0010P\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0000H\u0087\nø\u0001\u0000¢\u0006\u0004\bR\u0010\u000bJ\u001b\u0010P\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u0011H\u0087\nø\u0001\u0000¢\u0006\u0004\bS\u0010\u001dJ\u001b\u0010P\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0014H\u0087\nø\u0001\u0000¢\u0006\u0004\bT\u0010\u0016J\u0010\u0010U\u001a\u00020VH\u0087\b¢\u0006\u0004\bW\u0010XJ\u0010\u0010Y\u001a\u00020ZH\u0087\b¢\u0006\u0004\b[\u0010\\J\u0010\u0010]\u001a\u00020^H\u0087\b¢\u0006\u0004\b_\u0010`J\u0010\u0010a\u001a\u00020\u0003H\u0087\b¢\u0006\u0004\bb\u0010\u0005J\u0010\u0010c\u001a\u00020dH\u0087\b¢\u0006\u0004\be\u0010fJ\u0010\u0010g\u001a\u00020hH\u0087\b¢\u0006\u0004\bi\u0010jJ\u000f\u0010k\u001a\u00020lH\u0016¢\u0006\u0004\bm\u0010nJ\u0016\u0010o\u001a\u00020\rH\u0087\bø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\bp\u0010XJ\u0016\u0010q\u001a\u00020\u0000H\u0087\bø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\br\u0010\u0005J\u0016\u0010s\u001a\u00020\u0011H\u0087\bø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\bt\u0010fJ\u0016\u0010u\u001a\u00020\u0014H\u0087\bø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\bv\u0010jJ\u001b\u0010w\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0000H\u0087\fø\u0001\u0000¢\u0006\u0004\bx\u0010\u000bR\u0016\u0010\u0002\u001a\u00020\u00038\u0000X\u0081\u0004¢\u0006\b\n\u0000\u0012\u0004\b\u0006\u0010\u0007\u0088\u0001\u0002\u0092\u0001\u00020\u0003ø\u0001\u0000\u0082\u0002\b\n\u0002\b\u0019\n\u0002\b!¨\u0006z"}, d2 = {"Lkotlin/UInt;", "", "data", "", "constructor-impl", "(I)I", "getData$annotations", "()V", "and", AdnName.OTHER, "and-WZ4Q5Ns", "(II)I", "compareTo", "Lkotlin/UByte;", "compareTo-7apg3OU", "(IB)I", "compareTo-WZ4Q5Ns", "Lkotlin/ULong;", "compareTo-VKZWuLQ", "(IJ)I", "Lkotlin/UShort;", "compareTo-xj2QHRw", "(IS)I", "dec", "dec-pVg5ArA", TtmlNode.TAG_DIV, "div-7apg3OU", "div-WZ4Q5Ns", "div-VKZWuLQ", "(IJ)J", "div-xj2QHRw", "equals", "", "", "equals-impl", "(ILjava/lang/Object;)Z", "floorDiv", "floorDiv-7apg3OU", "floorDiv-WZ4Q5Ns", "floorDiv-VKZWuLQ", "floorDiv-xj2QHRw", TTDownloadField.TT_HASHCODE, "hashCode-impl", "inc", "inc-pVg5ArA", "inv", "inv-pVg5ArA", "minus", "minus-7apg3OU", "minus-WZ4Q5Ns", "minus-VKZWuLQ", "minus-xj2QHRw", "mod", "mod-7apg3OU", "(IB)B", "mod-WZ4Q5Ns", "mod-VKZWuLQ", "mod-xj2QHRw", "(IS)S", "or", "or-WZ4Q5Ns", "plus", "plus-7apg3OU", "plus-WZ4Q5Ns", "plus-VKZWuLQ", "plus-xj2QHRw", "rangeTo", "Lkotlin/ranges/UIntRange;", "rangeTo-WZ4Q5Ns", "(II)Lkotlin/ranges/UIntRange;", "rem", "rem-7apg3OU", "rem-WZ4Q5Ns", "rem-VKZWuLQ", "rem-xj2QHRw", "shl", "bitCount", "shl-pVg5ArA", "shr", "shr-pVg5ArA", "times", "times-7apg3OU", "times-WZ4Q5Ns", "times-VKZWuLQ", "times-xj2QHRw", "toByte", "", "toByte-impl", "(I)B", "toDouble", "", "toDouble-impl", "(I)D", "toFloat", "", "toFloat-impl", "(I)F", "toInt", "toInt-impl", "toLong", "", "toLong-impl", "(I)J", "toShort", "", "toShort-impl", "(I)S", "toString", "", "toString-impl", "(I)Ljava/lang/String;", "toUByte", "toUByte-w2LRezQ", "toUInt", "toUInt-pVg5ArA", "toULong", "toULong-s-VKNKU", "toUShort", "toUShort-Mh2AYeg", "xor", "xor-WZ4Q5Ns", "Companion", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
@JvmInline
public final class UInt implements Comparable<UInt> {
    public static final int MAX_VALUE = -1;
    public static final int MIN_VALUE = 0;
    public static final int SIZE_BITS = 32;
    public static final int SIZE_BYTES = 4;
    private final int data;

    public static final UInt box-impl(int i) {
        return new UInt(i);
    }

    public static int constructor-impl(int i) {
        return i;
    }

    public static boolean equals-impl(int i, Object obj) {
        return (obj instanceof UInt) && i == ((UInt) obj).getData();
    }

    public static final boolean equals-impl0(int i, int i2) {
        return i == i2;
    }

    public static void getData$annotations() {
    }

    public static int hashCode-impl(int i) {
        return i;
    }

    private static final byte toByte-impl(int i) {
        return (byte) i;
    }

    private static final int toInt-impl(int i) {
        return i;
    }

    private static final long toLong-impl(int i) {
        return ((long) i) & 4294967295L;
    }

    private static final short toShort-impl(int i) {
        return (short) i;
    }

    private static final int toUInt-pVg5ArA(int i) {
        return i;
    }

    public boolean equals(Object obj) {
        return equals-impl(this.data, obj);
    }

    public int hashCode() {
        return hashCode-impl(this.data);
    }

    public final int getData() {
        return this.data;
    }

    @Override
    public int compareTo(UInt uInt) {
        return UnsignedKt.uintCompare(getData(), uInt.getData());
    }

    private UInt(int i) {
        this.data = i;
    }

    private static final int compareTo-7apg3OU(int i, byte b) {
        return UnsignedKt.uintCompare(i, constructor-impl(b & UByte.MAX_VALUE));
    }

    private static final int compareTo-xj2QHRw(int i, short s) {
        return UnsignedKt.uintCompare(i, constructor-impl(s & UShort.MAX_VALUE));
    }

    private int compareTo-WZ4Q5Ns(int i) {
        return UnsignedKt.uintCompare(getData(), i);
    }

    private static int compareTo-WZ4Q5Ns(int i, int i2) {
        return UnsignedKt.uintCompare(i, i2);
    }

    private static final int compareTo-VKZWuLQ(int i, long j) {
        return UnsignedKt.ulongCompare(ULong.constructor-impl(((long) i) & 4294967295L), j);
    }

    private static final int plus-7apg3OU(int i, byte b) {
        return constructor-impl(i + constructor-impl(b & UByte.MAX_VALUE));
    }

    private static final int plus-xj2QHRw(int i, short s) {
        return constructor-impl(i + constructor-impl(s & UShort.MAX_VALUE));
    }

    private static final int plus-WZ4Q5Ns(int i, int i2) {
        return constructor-impl(i + i2);
    }

    private static final long plus-VKZWuLQ(int i, long j) {
        return ULong.constructor-impl(ULong.constructor-impl(((long) i) & 4294967295L) + j);
    }

    private static final int minus-7apg3OU(int i, byte b) {
        return constructor-impl(i - constructor-impl(b & UByte.MAX_VALUE));
    }

    private static final int minus-xj2QHRw(int i, short s) {
        return constructor-impl(i - constructor-impl(s & UShort.MAX_VALUE));
    }

    private static final int minus-WZ4Q5Ns(int i, int i2) {
        return constructor-impl(i - i2);
    }

    private static final long minus-VKZWuLQ(int i, long j) {
        return ULong.constructor-impl(ULong.constructor-impl(((long) i) & 4294967295L) - j);
    }

    private static final int times-7apg3OU(int i, byte b) {
        return constructor-impl(i * constructor-impl(b & UByte.MAX_VALUE));
    }

    private static final int times-xj2QHRw(int i, short s) {
        return constructor-impl(i * constructor-impl(s & UShort.MAX_VALUE));
    }

    private static final int times-WZ4Q5Ns(int i, int i2) {
        return constructor-impl(i * i2);
    }

    private static final long times-VKZWuLQ(int i, long j) {
        return ULong.constructor-impl(ULong.constructor-impl(((long) i) & 4294967295L) * j);
    }

    private static final int div-7apg3OU(int i, byte b) {
        return UnsignedKt.uintDivide-J1ME1BU(i, constructor-impl(b & UByte.MAX_VALUE));
    }

    private static final int div-xj2QHRw(int i, short s) {
        return UnsignedKt.uintDivide-J1ME1BU(i, constructor-impl(s & UShort.MAX_VALUE));
    }

    private static final int div-WZ4Q5Ns(int i, int i2) {
        return UnsignedKt.uintDivide-J1ME1BU(i, i2);
    }

    private static final long div-VKZWuLQ(int i, long j) {
        return UnsignedKt.ulongDivide-eb3DHEI(ULong.constructor-impl(((long) i) & 4294967295L), j);
    }

    private static final int rem-7apg3OU(int i, byte b) {
        return UnsignedKt.uintRemainder-J1ME1BU(i, constructor-impl(b & UByte.MAX_VALUE));
    }

    private static final int rem-xj2QHRw(int i, short s) {
        return UnsignedKt.uintRemainder-J1ME1BU(i, constructor-impl(s & UShort.MAX_VALUE));
    }

    private static final int rem-WZ4Q5Ns(int i, int i2) {
        return UnsignedKt.uintRemainder-J1ME1BU(i, i2);
    }

    private static final long rem-VKZWuLQ(int i, long j) {
        return UnsignedKt.ulongRemainder-eb3DHEI(ULong.constructor-impl(((long) i) & 4294967295L), j);
    }

    private static final int floorDiv-7apg3OU(int i, byte b) {
        return UnsignedKt.uintDivide-J1ME1BU(i, constructor-impl(b & UByte.MAX_VALUE));
    }

    private static final int floorDiv-xj2QHRw(int i, short s) {
        return UnsignedKt.uintDivide-J1ME1BU(i, constructor-impl(s & UShort.MAX_VALUE));
    }

    private static final int floorDiv-WZ4Q5Ns(int i, int i2) {
        return UnsignedKt.uintDivide-J1ME1BU(i, i2);
    }

    private static final long floorDiv-VKZWuLQ(int i, long j) {
        return UnsignedKt.ulongDivide-eb3DHEI(ULong.constructor-impl(((long) i) & 4294967295L), j);
    }

    private static final byte mod-7apg3OU(int i, byte b) {
        return UByte.constructor-impl((byte) UnsignedKt.uintRemainder-J1ME1BU(i, constructor-impl(b & UByte.MAX_VALUE)));
    }

    private static final short mod-xj2QHRw(int i, short s) {
        return UShort.constructor-impl((short) UnsignedKt.uintRemainder-J1ME1BU(i, constructor-impl(s & UShort.MAX_VALUE)));
    }

    private static final int mod-WZ4Q5Ns(int i, int i2) {
        return UnsignedKt.uintRemainder-J1ME1BU(i, i2);
    }

    private static final long mod-VKZWuLQ(int i, long j) {
        return UnsignedKt.ulongRemainder-eb3DHEI(ULong.constructor-impl(((long) i) & 4294967295L), j);
    }

    private static final int inc-pVg5ArA(int i) {
        return constructor-impl(i + 1);
    }

    private static final int dec-pVg5ArA(int i) {
        return constructor-impl(i - 1);
    }

    private static final UIntRange rangeTo-WZ4Q5Ns(int i, int i2) {
        return new UIntRange(i, i2, null);
    }

    private static final int shl-pVg5ArA(int i, int i2) {
        return constructor-impl(i << i2);
    }

    private static final int shr-pVg5ArA(int i, int i2) {
        return constructor-impl(i >>> i2);
    }

    private static final int and-WZ4Q5Ns(int i, int i2) {
        return constructor-impl(i & i2);
    }

    private static final int or-WZ4Q5Ns(int i, int i2) {
        return constructor-impl(i | i2);
    }

    private static final int xor-WZ4Q5Ns(int i, int i2) {
        return constructor-impl(i ^ i2);
    }

    private static final int inv-pVg5ArA(int i) {
        return constructor-impl(~i);
    }

    private static final byte toUByte-w2LRezQ(int i) {
        return UByte.constructor-impl((byte) i);
    }

    private static final short toUShort-Mh2AYeg(int i) {
        return UShort.constructor-impl((short) i);
    }

    private static final long toULong-s-VKNKU(int i) {
        return ULong.constructor-impl(((long) i) & 4294967295L);
    }

    private static final float toFloat-impl(int i) {
        return (float) UnsignedKt.uintToDouble(i);
    }

    private static final double toDouble-impl(int i) {
        return UnsignedKt.uintToDouble(i);
    }

    public static String toString-impl(int i) {
        return String.valueOf(((long) i) & 4294967295L);
    }

    public String toString() {
        return toString-impl(this.data);
    }
}
