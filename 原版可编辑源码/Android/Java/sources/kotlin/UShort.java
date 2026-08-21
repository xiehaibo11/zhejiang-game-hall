package kotlin;

import com.bykv.vk.openvk.downloadnew.core.TTDownloadField;
import com.kwad.sdk.api.model.AdnName;
import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import kotlin.jvm.JvmInline;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.UIntRange;
import okhttp3.internal.ws.WebSocketProtocol;

@Metadata(d1 = {"\u0000j\n\u0002\u0018\u0002\n\u0002\u0010\u000f\n\u0000\n\u0002\u0010\n\n\u0002\b\t\n\u0002\u0010\b\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\r\n\u0002\u0010\u000b\n\u0002\u0010\u0000\n\u0002\b!\n\u0002\u0018\u0002\n\u0002\b\r\n\u0002\u0010\u0005\n\u0002\b\u0003\n\u0002\u0010\u0006\n\u0002\b\u0003\n\u0002\u0010\u0007\n\u0002\b\u0005\n\u0002\u0010\t\n\u0002\b\u0005\n\u0002\u0010\u000e\n\u0002\b\u000e\b\u0087@\u0018\u0000 t2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001tB\u0014\b\u0001\u0012\u0006\u0010\u0002\u001a\u00020\u0003ø\u0001\u0000¢\u0006\u0004\b\u0004\u0010\u0005J\u001b\u0010\b\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0000H\u0087\fø\u0001\u0000¢\u0006\u0004\b\n\u0010\u000bJ\u001b\u0010\f\u001a\u00020\r2\u0006\u0010\t\u001a\u00020\u000eH\u0087\nø\u0001\u0000¢\u0006\u0004\b\u000f\u0010\u0010J\u001b\u0010\f\u001a\u00020\r2\u0006\u0010\t\u001a\u00020\u0011H\u0087\nø\u0001\u0000¢\u0006\u0004\b\u0012\u0010\u0013J\u001b\u0010\f\u001a\u00020\r2\u0006\u0010\t\u001a\u00020\u0014H\u0087\nø\u0001\u0000¢\u0006\u0004\b\u0015\u0010\u0016J\u001b\u0010\f\u001a\u00020\r2\u0006\u0010\t\u001a\u00020\u0000H\u0097\nø\u0001\u0000¢\u0006\u0004\b\u0017\u0010\u0018J\u0016\u0010\u0019\u001a\u00020\u0000H\u0087\nø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b\u001a\u0010\u0005J\u001b\u0010\u001b\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u000eH\u0087\nø\u0001\u0000¢\u0006\u0004\b\u001c\u0010\u0010J\u001b\u0010\u001b\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u0011H\u0087\nø\u0001\u0000¢\u0006\u0004\b\u001d\u0010\u0013J\u001b\u0010\u001b\u001a\u00020\u00142\u0006\u0010\t\u001a\u00020\u0014H\u0087\nø\u0001\u0000¢\u0006\u0004\b\u001e\u0010\u001fJ\u001b\u0010\u001b\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u0000H\u0087\nø\u0001\u0000¢\u0006\u0004\b \u0010\u0018J\u001a\u0010!\u001a\u00020\"2\b\u0010\t\u001a\u0004\u0018\u00010#HÖ\u0003¢\u0006\u0004\b$\u0010%J\u001b\u0010&\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u000eH\u0087\bø\u0001\u0000¢\u0006\u0004\b'\u0010\u0010J\u001b\u0010&\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u0011H\u0087\bø\u0001\u0000¢\u0006\u0004\b(\u0010\u0013J\u001b\u0010&\u001a\u00020\u00142\u0006\u0010\t\u001a\u00020\u0014H\u0087\bø\u0001\u0000¢\u0006\u0004\b)\u0010\u001fJ\u001b\u0010&\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u0000H\u0087\bø\u0001\u0000¢\u0006\u0004\b*\u0010\u0018J\u0010\u0010+\u001a\u00020\rHÖ\u0001¢\u0006\u0004\b,\u0010-J\u0016\u0010.\u001a\u00020\u0000H\u0087\nø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b/\u0010\u0005J\u0016\u00100\u001a\u00020\u0000H\u0087\bø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b1\u0010\u0005J\u001b\u00102\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u000eH\u0087\nø\u0001\u0000¢\u0006\u0004\b3\u0010\u0010J\u001b\u00102\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u0011H\u0087\nø\u0001\u0000¢\u0006\u0004\b4\u0010\u0013J\u001b\u00102\u001a\u00020\u00142\u0006\u0010\t\u001a\u00020\u0014H\u0087\nø\u0001\u0000¢\u0006\u0004\b5\u0010\u001fJ\u001b\u00102\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u0000H\u0087\nø\u0001\u0000¢\u0006\u0004\b6\u0010\u0018J\u001b\u00107\u001a\u00020\u000e2\u0006\u0010\t\u001a\u00020\u000eH\u0087\bø\u0001\u0000¢\u0006\u0004\b8\u00109J\u001b\u00107\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u0011H\u0087\bø\u0001\u0000¢\u0006\u0004\b:\u0010\u0013J\u001b\u00107\u001a\u00020\u00142\u0006\u0010\t\u001a\u00020\u0014H\u0087\bø\u0001\u0000¢\u0006\u0004\b;\u0010\u001fJ\u001b\u00107\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0000H\u0087\bø\u0001\u0000¢\u0006\u0004\b<\u0010\u000bJ\u001b\u0010=\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0000H\u0087\fø\u0001\u0000¢\u0006\u0004\b>\u0010\u000bJ\u001b\u0010?\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u000eH\u0087\nø\u0001\u0000¢\u0006\u0004\b@\u0010\u0010J\u001b\u0010?\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u0011H\u0087\nø\u0001\u0000¢\u0006\u0004\bA\u0010\u0013J\u001b\u0010?\u001a\u00020\u00142\u0006\u0010\t\u001a\u00020\u0014H\u0087\nø\u0001\u0000¢\u0006\u0004\bB\u0010\u001fJ\u001b\u0010?\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u0000H\u0087\nø\u0001\u0000¢\u0006\u0004\bC\u0010\u0018J\u001b\u0010D\u001a\u00020E2\u0006\u0010\t\u001a\u00020\u0000H\u0087\nø\u0001\u0000¢\u0006\u0004\bF\u0010GJ\u001b\u0010H\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u000eH\u0087\nø\u0001\u0000¢\u0006\u0004\bI\u0010\u0010J\u001b\u0010H\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u0011H\u0087\nø\u0001\u0000¢\u0006\u0004\bJ\u0010\u0013J\u001b\u0010H\u001a\u00020\u00142\u0006\u0010\t\u001a\u00020\u0014H\u0087\nø\u0001\u0000¢\u0006\u0004\bK\u0010\u001fJ\u001b\u0010H\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u0000H\u0087\nø\u0001\u0000¢\u0006\u0004\bL\u0010\u0018J\u001b\u0010M\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u000eH\u0087\nø\u0001\u0000¢\u0006\u0004\bN\u0010\u0010J\u001b\u0010M\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u0011H\u0087\nø\u0001\u0000¢\u0006\u0004\bO\u0010\u0013J\u001b\u0010M\u001a\u00020\u00142\u0006\u0010\t\u001a\u00020\u0014H\u0087\nø\u0001\u0000¢\u0006\u0004\bP\u0010\u001fJ\u001b\u0010M\u001a\u00020\u00112\u0006\u0010\t\u001a\u00020\u0000H\u0087\nø\u0001\u0000¢\u0006\u0004\bQ\u0010\u0018J\u0010\u0010R\u001a\u00020SH\u0087\b¢\u0006\u0004\bT\u0010UJ\u0010\u0010V\u001a\u00020WH\u0087\b¢\u0006\u0004\bX\u0010YJ\u0010\u0010Z\u001a\u00020[H\u0087\b¢\u0006\u0004\b\\\u0010]J\u0010\u0010^\u001a\u00020\rH\u0087\b¢\u0006\u0004\b_\u0010-J\u0010\u0010`\u001a\u00020aH\u0087\b¢\u0006\u0004\bb\u0010cJ\u0010\u0010d\u001a\u00020\u0003H\u0087\b¢\u0006\u0004\be\u0010\u0005J\u000f\u0010f\u001a\u00020gH\u0016¢\u0006\u0004\bh\u0010iJ\u0016\u0010j\u001a\u00020\u000eH\u0087\bø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\bk\u0010UJ\u0016\u0010l\u001a\u00020\u0011H\u0087\bø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\bm\u0010-J\u0016\u0010n\u001a\u00020\u0014H\u0087\bø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\bo\u0010cJ\u0016\u0010p\u001a\u00020\u0000H\u0087\bø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\bq\u0010\u0005J\u001b\u0010r\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0000H\u0087\fø\u0001\u0000¢\u0006\u0004\bs\u0010\u000bR\u0016\u0010\u0002\u001a\u00020\u00038\u0000X\u0081\u0004¢\u0006\b\n\u0000\u0012\u0004\b\u0006\u0010\u0007\u0088\u0001\u0002\u0092\u0001\u00020\u0003ø\u0001\u0000\u0082\u0002\b\n\u0002\b\u0019\n\u0002\b!¨\u0006u"}, d2 = {"Lkotlin/UShort;", "", "data", "", "constructor-impl", "(S)S", "getData$annotations", "()V", "and", AdnName.OTHER, "and-xj2QHRw", "(SS)S", "compareTo", "", "Lkotlin/UByte;", "compareTo-7apg3OU", "(SB)I", "Lkotlin/UInt;", "compareTo-WZ4Q5Ns", "(SI)I", "Lkotlin/ULong;", "compareTo-VKZWuLQ", "(SJ)I", "compareTo-xj2QHRw", "(SS)I", "dec", "dec-Mh2AYeg", TtmlNode.TAG_DIV, "div-7apg3OU", "div-WZ4Q5Ns", "div-VKZWuLQ", "(SJ)J", "div-xj2QHRw", "equals", "", "", "equals-impl", "(SLjava/lang/Object;)Z", "floorDiv", "floorDiv-7apg3OU", "floorDiv-WZ4Q5Ns", "floorDiv-VKZWuLQ", "floorDiv-xj2QHRw", TTDownloadField.TT_HASHCODE, "hashCode-impl", "(S)I", "inc", "inc-Mh2AYeg", "inv", "inv-Mh2AYeg", "minus", "minus-7apg3OU", "minus-WZ4Q5Ns", "minus-VKZWuLQ", "minus-xj2QHRw", "mod", "mod-7apg3OU", "(SB)B", "mod-WZ4Q5Ns", "mod-VKZWuLQ", "mod-xj2QHRw", "or", "or-xj2QHRw", "plus", "plus-7apg3OU", "plus-WZ4Q5Ns", "plus-VKZWuLQ", "plus-xj2QHRw", "rangeTo", "Lkotlin/ranges/UIntRange;", "rangeTo-xj2QHRw", "(SS)Lkotlin/ranges/UIntRange;", "rem", "rem-7apg3OU", "rem-WZ4Q5Ns", "rem-VKZWuLQ", "rem-xj2QHRw", "times", "times-7apg3OU", "times-WZ4Q5Ns", "times-VKZWuLQ", "times-xj2QHRw", "toByte", "", "toByte-impl", "(S)B", "toDouble", "", "toDouble-impl", "(S)D", "toFloat", "", "toFloat-impl", "(S)F", "toInt", "toInt-impl", "toLong", "", "toLong-impl", "(S)J", "toShort", "toShort-impl", "toString", "", "toString-impl", "(S)Ljava/lang/String;", "toUByte", "toUByte-w2LRezQ", "toUInt", "toUInt-pVg5ArA", "toULong", "toULong-s-VKNKU", "toUShort", "toUShort-Mh2AYeg", "xor", "xor-xj2QHRw", "Companion", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
@JvmInline
public final class UShort implements Comparable<UShort> {
    public static final short MAX_VALUE = -1;
    public static final short MIN_VALUE = 0;
    public static final int SIZE_BITS = 16;
    public static final int SIZE_BYTES = 2;
    private final short data;

    public static final UShort box-impl(short s) {
        return new UShort(s);
    }

    public static short constructor-impl(short s) {
        return s;
    }

    public static boolean equals-impl(short s, Object obj) {
        return (obj instanceof UShort) && s == ((UShort) obj).getData();
    }

    public static final boolean equals-impl0(short s, short s2) {
        return s == s2;
    }

    public static void getData$annotations() {
    }

    public static int hashCode-impl(short s) {
        return s;
    }

    private static final byte toByte-impl(short s) {
        return (byte) s;
    }

    private static final double toDouble-impl(short s) {
        return s & MAX_VALUE;
    }

    private static final float toFloat-impl(short s) {
        return s & MAX_VALUE;
    }

    private static final int toInt-impl(short s) {
        return s & MAX_VALUE;
    }

    private static final long toLong-impl(short s) {
        return ((long) s) & WebSocketProtocol.PAYLOAD_SHORT_MAX;
    }

    private static final short toShort-impl(short s) {
        return s;
    }

    private static final short toUShort-Mh2AYeg(short s) {
        return s;
    }

    public boolean equals(Object obj) {
        return equals-impl(this.data, obj);
    }

    public int hashCode() {
        return hashCode-impl(this.data);
    }

    public final short getData() {
        return this.data;
    }

    @Override
    public int compareTo(UShort uShort) {
        return Intrinsics.compare(getData() & MAX_VALUE, uShort.getData() & MAX_VALUE);
    }

    private UShort(short s) {
        this.data = s;
    }

    private static final int compareTo-7apg3OU(short s, byte b) {
        return Intrinsics.compare(s & MAX_VALUE, b & UByte.MAX_VALUE);
    }

    private int compareTo-xj2QHRw(short s) {
        return Intrinsics.compare(getData() & MAX_VALUE, s & MAX_VALUE);
    }

    private static int compareTo-xj2QHRw(short s, short s2) {
        return Intrinsics.compare(s & MAX_VALUE, s2 & MAX_VALUE);
    }

    private static final int compareTo-WZ4Q5Ns(short s, int i) {
        return UnsignedKt.uintCompare(UInt.constructor-impl(s & MAX_VALUE), i);
    }

    private static final int compareTo-VKZWuLQ(short s, long j) {
        return UnsignedKt.ulongCompare(ULong.constructor-impl(((long) s) & WebSocketProtocol.PAYLOAD_SHORT_MAX), j);
    }

    private static final int plus-7apg3OU(short s, byte b) {
        return UInt.constructor-impl(UInt.constructor-impl(s & MAX_VALUE) + UInt.constructor-impl(b & UByte.MAX_VALUE));
    }

    private static final int plus-xj2QHRw(short s, short s2) {
        return UInt.constructor-impl(UInt.constructor-impl(s & MAX_VALUE) + UInt.constructor-impl(s2 & MAX_VALUE));
    }

    private static final int plus-WZ4Q5Ns(short s, int i) {
        return UInt.constructor-impl(UInt.constructor-impl(s & MAX_VALUE) + i);
    }

    private static final long plus-VKZWuLQ(short s, long j) {
        return ULong.constructor-impl(ULong.constructor-impl(((long) s) & WebSocketProtocol.PAYLOAD_SHORT_MAX) + j);
    }

    private static final int minus-7apg3OU(short s, byte b) {
        return UInt.constructor-impl(UInt.constructor-impl(s & MAX_VALUE) - UInt.constructor-impl(b & UByte.MAX_VALUE));
    }

    private static final int minus-xj2QHRw(short s, short s2) {
        return UInt.constructor-impl(UInt.constructor-impl(s & MAX_VALUE) - UInt.constructor-impl(s2 & MAX_VALUE));
    }

    private static final int minus-WZ4Q5Ns(short s, int i) {
        return UInt.constructor-impl(UInt.constructor-impl(s & MAX_VALUE) - i);
    }

    private static final long minus-VKZWuLQ(short s, long j) {
        return ULong.constructor-impl(ULong.constructor-impl(((long) s) & WebSocketProtocol.PAYLOAD_SHORT_MAX) - j);
    }

    private static final int times-7apg3OU(short s, byte b) {
        return UInt.constructor-impl(UInt.constructor-impl(s & MAX_VALUE) * UInt.constructor-impl(b & UByte.MAX_VALUE));
    }

    private static final int times-xj2QHRw(short s, short s2) {
        return UInt.constructor-impl(UInt.constructor-impl(s & MAX_VALUE) * UInt.constructor-impl(s2 & MAX_VALUE));
    }

    private static final int times-WZ4Q5Ns(short s, int i) {
        return UInt.constructor-impl(UInt.constructor-impl(s & MAX_VALUE) * i);
    }

    private static final long times-VKZWuLQ(short s, long j) {
        return ULong.constructor-impl(ULong.constructor-impl(((long) s) & WebSocketProtocol.PAYLOAD_SHORT_MAX) * j);
    }

    private static final int div-7apg3OU(short s, byte b) {
        return UnsignedKt.uintDivide-J1ME1BU(UInt.constructor-impl(s & MAX_VALUE), UInt.constructor-impl(b & UByte.MAX_VALUE));
    }

    private static final int div-xj2QHRw(short s, short s2) {
        return UnsignedKt.uintDivide-J1ME1BU(UInt.constructor-impl(s & MAX_VALUE), UInt.constructor-impl(s2 & MAX_VALUE));
    }

    private static final int div-WZ4Q5Ns(short s, int i) {
        return UnsignedKt.uintDivide-J1ME1BU(UInt.constructor-impl(s & MAX_VALUE), i);
    }

    private static final long div-VKZWuLQ(short s, long j) {
        return UnsignedKt.ulongDivide-eb3DHEI(ULong.constructor-impl(((long) s) & WebSocketProtocol.PAYLOAD_SHORT_MAX), j);
    }

    private static final int rem-7apg3OU(short s, byte b) {
        return UnsignedKt.uintRemainder-J1ME1BU(UInt.constructor-impl(s & MAX_VALUE), UInt.constructor-impl(b & UByte.MAX_VALUE));
    }

    private static final int rem-xj2QHRw(short s, short s2) {
        return UnsignedKt.uintRemainder-J1ME1BU(UInt.constructor-impl(s & MAX_VALUE), UInt.constructor-impl(s2 & MAX_VALUE));
    }

    private static final int rem-WZ4Q5Ns(short s, int i) {
        return UnsignedKt.uintRemainder-J1ME1BU(UInt.constructor-impl(s & MAX_VALUE), i);
    }

    private static final long rem-VKZWuLQ(short s, long j) {
        return UnsignedKt.ulongRemainder-eb3DHEI(ULong.constructor-impl(((long) s) & WebSocketProtocol.PAYLOAD_SHORT_MAX), j);
    }

    private static final int floorDiv-7apg3OU(short s, byte b) {
        return UnsignedKt.uintDivide-J1ME1BU(UInt.constructor-impl(s & MAX_VALUE), UInt.constructor-impl(b & UByte.MAX_VALUE));
    }

    private static final int floorDiv-xj2QHRw(short s, short s2) {
        return UnsignedKt.uintDivide-J1ME1BU(UInt.constructor-impl(s & MAX_VALUE), UInt.constructor-impl(s2 & MAX_VALUE));
    }

    private static final int floorDiv-WZ4Q5Ns(short s, int i) {
        return UnsignedKt.uintDivide-J1ME1BU(UInt.constructor-impl(s & MAX_VALUE), i);
    }

    private static final long floorDiv-VKZWuLQ(short s, long j) {
        return UnsignedKt.ulongDivide-eb3DHEI(ULong.constructor-impl(((long) s) & WebSocketProtocol.PAYLOAD_SHORT_MAX), j);
    }

    private static final byte mod-7apg3OU(short s, byte b) {
        return UByte.constructor-impl((byte) UnsignedKt.uintRemainder-J1ME1BU(UInt.constructor-impl(s & MAX_VALUE), UInt.constructor-impl(b & UByte.MAX_VALUE)));
    }

    private static final short mod-xj2QHRw(short s, short s2) {
        return constructor-impl((short) UnsignedKt.uintRemainder-J1ME1BU(UInt.constructor-impl(s & MAX_VALUE), UInt.constructor-impl(s2 & MAX_VALUE)));
    }

    private static final int mod-WZ4Q5Ns(short s, int i) {
        return UnsignedKt.uintRemainder-J1ME1BU(UInt.constructor-impl(s & MAX_VALUE), i);
    }

    private static final long mod-VKZWuLQ(short s, long j) {
        return UnsignedKt.ulongRemainder-eb3DHEI(ULong.constructor-impl(((long) s) & WebSocketProtocol.PAYLOAD_SHORT_MAX), j);
    }

    private static final short inc-Mh2AYeg(short s) {
        return constructor-impl((short) (s + 1));
    }

    private static final short dec-Mh2AYeg(short s) {
        return constructor-impl((short) (s - 1));
    }

    private static final UIntRange rangeTo-xj2QHRw(short s, short s2) {
        return new UIntRange(UInt.constructor-impl(s & MAX_VALUE), UInt.constructor-impl(s2 & MAX_VALUE), null);
    }

    private static final short and-xj2QHRw(short s, short s2) {
        return constructor-impl((short) (s & s2));
    }

    private static final short or-xj2QHRw(short s, short s2) {
        return constructor-impl((short) (s | s2));
    }

    private static final short xor-xj2QHRw(short s, short s2) {
        return constructor-impl((short) (s ^ s2));
    }

    private static final short inv-Mh2AYeg(short s) {
        return constructor-impl((short) (~s));
    }

    private static final byte toUByte-w2LRezQ(short s) {
        return UByte.constructor-impl((byte) s);
    }

    private static final int toUInt-pVg5ArA(short s) {
        return UInt.constructor-impl(s & MAX_VALUE);
    }

    private static final long toULong-s-VKNKU(short s) {
        return ULong.constructor-impl(((long) s) & WebSocketProtocol.PAYLOAD_SHORT_MAX);
    }

    public static String toString-impl(short s) {
        return String.valueOf(s & MAX_VALUE);
    }

    public String toString() {
        return toString-impl(this.data);
    }
}
