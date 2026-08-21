package okio.internal;

@kotlin.Metadata(d1 = {"\u0000\u0080\u0001\n\u0000\n\u0002\u0010\u0012\n\u0002\b\u0005\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0005\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0010\n\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0015\n\u0002\u0018\u0002\n\u0002\b\u0004\u001a0\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\n2\u0006\u0010\u0010\u001a\u00020\u00012\u0006\u0010\u0011\u001a\u00020\n2\u0006\u0010\u0012\u001a\u00020\nH\u0000\u001a\r\u0010\u0013\u001a\u00020\u0014*\u00020\u0015H\u0080\b\u001a\r\u0010\u0016\u001a\u00020\u0014*\u00020\u0017H\u0080\b\u001a\r\u0010\u0018\u001a\u00020\u0007*\u00020\u0015H\u0080\b\u001a\r\u0010\u0019\u001a\u00020\u0015*\u00020\u0015H\u0080\b\u001a%\u0010\u001a\u001a\u00020\u0015*\u00020\u00152\u0006\u0010\u001b\u001a\u00020\u00152\u0006\u0010\u001c\u001a\u00020\u00072\u0006\u0010\u001d\u001a\u00020\u0007H\u0080\b\u001a\u0017\u0010\u001e\u001a\u00020\f*\u00020\u00152\b\u0010\u001f\u001a\u0004\u0018\u00010 H\u0080\b\u001a\u0015\u0010!\u001a\u00020\u0007*\u00020\u00172\u0006\u0010\"\u001a\u00020\nH\u0080\b\u001a\u0015\u0010#\u001a\u00020$*\u00020\u00152\u0006\u0010%\u001a\u00020\u0007H\u0080\b\u001a\r\u0010&\u001a\u00020\n*\u00020\u0015H\u0080\b\u001a%\u0010'\u001a\u00020\u0007*\u00020\u00152\u0006\u0010(\u001a\u00020$2\u0006\u0010)\u001a\u00020\u00072\u0006\u0010*\u001a\u00020\u0007H\u0080\b\u001a\u001d\u0010'\u001a\u00020\u0007*\u00020\u00152\u0006\u0010\u0010\u001a\u00020+2\u0006\u0010)\u001a\u00020\u0007H\u0080\b\u001a\u001d\u0010,\u001a\u00020\u0007*\u00020\u00152\u0006\u0010-\u001a\u00020+2\u0006\u0010)\u001a\u00020\u0007H\u0080\b\u001a\r\u0010.\u001a\u00020\n*\u00020\u0017H\u0080\b\u001a-\u0010/\u001a\u00020\f*\u00020\u00152\u0006\u0010\u001c\u001a\u00020\u00072\u0006\u0010\u0010\u001a\u00020+2\u0006\u0010\u0011\u001a\u00020\n2\u0006\u0010\u001d\u001a\u00020\nH\u0080\b\u001a\u0015\u00100\u001a\u00020\n*\u00020\u00152\u0006\u00101\u001a\u00020\u0001H\u0080\b\u001a%\u00100\u001a\u00020\n*\u00020\u00152\u0006\u00101\u001a\u00020\u00012\u0006\u0010\u001c\u001a\u00020\n2\u0006\u0010\u001d\u001a\u00020\nH\u0080\b\u001a\u001d\u00100\u001a\u00020\u0007*\u00020\u00152\u0006\u00101\u001a\u00020\u00152\u0006\u0010\u001d\u001a\u00020\u0007H\u0080\b\u001a\u0015\u00102\u001a\u00020\u0007*\u00020\u00152\u0006\u00101\u001a\u000203H\u0080\b\u001a\u0014\u00104\u001a\u00020\u0017*\u00020\u00152\u0006\u00105\u001a\u00020\u0017H\u0000\u001a\r\u00106\u001a\u00020$*\u00020\u0015H\u0080\b\u001a\r\u00107\u001a\u00020\u0001*\u00020\u0015H\u0080\b\u001a\u0015\u00107\u001a\u00020\u0001*\u00020\u00152\u0006\u0010\u001d\u001a\u00020\u0007H\u0080\b\u001a\r\u00108\u001a\u00020+*\u00020\u0015H\u0080\b\u001a\u0015\u00108\u001a\u00020+*\u00020\u00152\u0006\u0010\u001d\u001a\u00020\u0007H\u0080\b\u001a\r\u00109\u001a\u00020\u0007*\u00020\u0015H\u0080\b\u001a\u0015\u0010:\u001a\u00020\u0014*\u00020\u00152\u0006\u00101\u001a\u00020\u0001H\u0080\b\u001a\u001d\u0010:\u001a\u00020\u0014*\u00020\u00152\u0006\u00101\u001a\u00020\u00152\u0006\u0010\u001d\u001a\u00020\u0007H\u0080\b\u001a\r\u0010;\u001a\u00020\u0007*\u00020\u0015H\u0080\b\u001a\r\u0010<\u001a\u00020\n*\u00020\u0015H\u0080\b\u001a\r\u0010=\u001a\u00020\u0007*\u00020\u0015H\u0080\b\u001a\r\u0010>\u001a\u00020?*\u00020\u0015H\u0080\b\u001a\u0014\u0010@\u001a\u00020\u0017*\u00020\u00152\u0006\u00105\u001a\u00020\u0017H\u0000\u001a\u0015\u0010A\u001a\u00020B*\u00020\u00152\u0006\u0010\u001d\u001a\u00020\u0007H\u0080\b\u001a\r\u0010C\u001a\u00020\n*\u00020\u0015H\u0080\b\u001a\u000f\u0010D\u001a\u0004\u0018\u00010B*\u00020\u0015H\u0080\b\u001a\u0015\u0010E\u001a\u00020B*\u00020\u00152\u0006\u0010F\u001a\u00020\u0007H\u0080\b\u001a\u0015\u0010G\u001a\u00020\u0007*\u00020\u00172\u0006\u0010H\u001a\u00020\u0007H\u0080\b\u001a\u0015\u0010I\u001a\u00020\n*\u00020\u00172\u0006\u0010\u001c\u001a\u00020\u0007H\u0080\b\u001a\u0015\u0010J\u001a\u00020\n*\u00020\u00152\u0006\u0010K\u001a\u00020LH\u0080\b\u001a\u0015\u0010M\u001a\u00020\u0014*\u00020\u00152\u0006\u0010\u001d\u001a\u00020\u0007H\u0080\b\u001a\r\u0010N\u001a\u00020+*\u00020\u0015H\u0080\b\u001a\u0015\u0010N\u001a\u00020+*\u00020\u00152\u0006\u0010\u001d\u001a\u00020\nH\u0080\b\u001a\u0015\u0010O\u001a\u00020\u000e*\u00020\u00152\u0006\u0010P\u001a\u00020\nH\u0080\b\u001a\u0015\u0010Q\u001a\u00020\u0015*\u00020\u00152\u0006\u0010R\u001a\u00020\u0001H\u0080\b\u001a%\u0010Q\u001a\u00020\u0015*\u00020\u00152\u0006\u0010R\u001a\u00020\u00012\u0006\u0010\u001c\u001a\u00020\n2\u0006\u0010\u001d\u001a\u00020\nH\u0080\b\u001a\u001d\u0010Q\u001a\u00020\u0014*\u00020\u00152\u0006\u0010R\u001a\u00020\u00152\u0006\u0010\u001d\u001a\u00020\u0007H\u0080\b\u001a)\u0010Q\u001a\u00020\u0015*\u00020\u00152\u0006\u0010S\u001a\u00020+2\b\b\u0002\u0010\u001c\u001a\u00020\n2\b\b\u0002\u0010\u001d\u001a\u00020\nH\u0080\b\u001a\u001d\u0010Q\u001a\u00020\u0015*\u00020\u00152\u0006\u0010R\u001a\u00020T2\u0006\u0010\u001d\u001a\u00020\u0007H\u0080\b\u001a\u0015\u0010U\u001a\u00020\u0007*\u00020\u00152\u0006\u0010R\u001a\u00020TH\u0080\b\u001a\u0015\u0010V\u001a\u00020\u0015*\u00020\u00152\u0006\u0010(\u001a\u00020\nH\u0080\b\u001a\u0015\u0010W\u001a\u00020\u0015*\u00020\u00152\u0006\u0010X\u001a\u00020\u0007H\u0080\b\u001a\u0015\u0010Y\u001a\u00020\u0015*\u00020\u00152\u0006\u0010X\u001a\u00020\u0007H\u0080\b\u001a\u0015\u0010Z\u001a\u00020\u0015*\u00020\u00152\u0006\u0010[\u001a\u00020\nH\u0080\b\u001a\u0015\u0010\\\u001a\u00020\u0015*\u00020\u00152\u0006\u0010X\u001a\u00020\u0007H\u0080\b\u001a\u0015\u0010]\u001a\u00020\u0015*\u00020\u00152\u0006\u0010^\u001a\u00020\nH\u0080\b\u001a%\u0010_\u001a\u00020\u0015*\u00020\u00152\u0006\u0010`\u001a\u00020B2\u0006\u0010a\u001a\u00020\n2\u0006\u0010b\u001a\u00020\nH\u0080\b\u001a\u0015\u0010c\u001a\u00020\u0015*\u00020\u00152\u0006\u0010d\u001a\u00020\nH\u0080\b\u001a\u0014\u0010e\u001a\u00020B*\u00020\u00152\u0006\u0010f\u001a\u00020\u0007H\u0000\u001a?\u0010g\u001a\u0002Hh\"\u0004\b\u0000\u0010h*\u00020\u00152\u0006\u0010)\u001a\u00020\u00072\u001a\u0010i\u001a\u0016\u0012\u0006\u0012\u0004\u0018\u00010\u000e\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u0002Hh0jH\u0080\bø\u0001\u0000¢\u0006\u0002\u0010k\u001a\u001e\u0010l\u001a\u00020\n*\u00020\u00152\u0006\u0010K\u001a\u00020L2\b\b\u0002\u0010m\u001a\u00020\fH\u0000\"\u001c\u0010\u0000\u001a\u00020\u00018\u0000X\u0081\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0002\u0010\u0003\u001a\u0004\b\u0004\u0010\u0005\"\u000e\u0010\u0006\u001a\u00020\u0007X\u0080T¢\u0006\u0002\n\u0000\"\u000e\u0010\b\u001a\u00020\u0007X\u0080T¢\u0006\u0002\n\u0000\"\u000e\u0010\t\u001a\u00020\nX\u0080T¢\u0006\u0002\n\u0000\u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u0006n"}, d2 = {"HEX_DIGIT_BYTES", "", "getHEX_DIGIT_BYTES$annotations", "()V", "getHEX_DIGIT_BYTES", "()[B", "OVERFLOW_DIGIT_START", "", "OVERFLOW_ZONE", "SEGMENTING_THRESHOLD", "", "rangeEquals", "", "segment", "Lokio/Segment;", "segmentPos", "bytes", "bytesOffset", "bytesLimit", "commonClear", "", "Lokio/Buffer;", "commonClose", "Lokio/Buffer$UnsafeCursor;", "commonCompleteSegmentByteCount", "commonCopy", "commonCopyTo", "out", "offset", "byteCount", "commonEquals", "other", "", "commonExpandBuffer", "minByteCount", "commonGet", "", "pos", "commonHashCode", "commonIndexOf", "b", "fromIndex", "toIndex", "Lokio/ByteString;", "commonIndexOfElement", "targetBytes", "commonNext", "commonRangeEquals", "commonRead", "sink", "commonReadAll", "Lokio/Sink;", "commonReadAndWriteUnsafe", "unsafeCursor", "commonReadByte", "commonReadByteArray", "commonReadByteString", "commonReadDecimalLong", "commonReadFully", "commonReadHexadecimalUnsignedLong", "commonReadInt", "commonReadLong", "commonReadShort", "", "commonReadUnsafe", "commonReadUtf8", "", "commonReadUtf8CodePoint", "commonReadUtf8Line", "commonReadUtf8LineStrict", "limit", "commonResizeBuffer", "newSize", "commonSeek", "commonSelect", "options", "Lokio/Options;", "commonSkip", "commonSnapshot", "commonWritableSegment", "minimumCapacity", "commonWrite", "source", "byteString", "Lokio/Source;", "commonWriteAll", "commonWriteByte", "commonWriteDecimalLong", "v", "commonWriteHexadecimalUnsignedLong", "commonWriteInt", "i", "commonWriteLong", "commonWriteShort", "s", "commonWriteUtf8", "string", "beginIndex", "endIndex", "commonWriteUtf8CodePoint", "codePoint", "readUtf8Line", "newline", "seek", "T", "lambda", "Lkotlin/Function2;", "(Lokio/Buffer;JLkotlin/jvm/functions/Function2;)Ljava/lang/Object;", "selectPrefix", "selectTruncated", "okio"}, k = 2, mv = {1, 5, 1}, xi = 48)
public final class _BufferKt {
    private static final byte[] HEX_DIGIT_BYTES = null;
    public static final long OVERFLOW_DIGIT_START = -7;
    public static final long OVERFLOW_ZONE = -922337203685477580L;
    public static final int SEGMENTING_THRESHOLD = 4096;

    static {
            java.lang.String r0 = "0123456789abcdef"
            byte[] r0 = okio._JvmPlatformKt.asUtf8ToByteArray(r0)
            okio.internal._BufferKt.HEX_DIGIT_BYTES = r0
            return
    }

    public static final void commonClear(okio.Buffer r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            long r0 = r2.size()
            r2.skip(r0)
            return
    }

    public static final void commonClose(okio.Buffer.UnsafeCursor r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okio.Buffer r0 = r3.buffer
            if (r0 == 0) goto Lb
            r0 = 1
            goto Lc
        Lb:
            r0 = 0
        Lc:
            if (r0 == 0) goto L20
            r0 = 0
            r3.buffer = r0
            r3.setSegment$okio(r0)
            r1 = -1
            r3.offset = r1
            r3.data = r0
            r0 = -1
            r3.start = r0
            r3.end = r0
            return
        L20:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r0 = "not attached to a buffer"
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            java.lang.Throwable r3 = (java.lang.Throwable) r3
            throw r3
    }

    public static final long commonCompleteSegmentByteCount(okio.Buffer r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            long r0 = r5.size()
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto L10
            return r2
        L10:
            okio.Segment r5 = r5.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r5)
            okio.Segment r5 = r5.prev
            kotlin.jvm.internal.Intrinsics.checkNotNull(r5)
            int r2 = r5.limit
            r3 = 8192(0x2000, float:1.148E-41)
            if (r2 >= r3) goto L2b
            boolean r2 = r5.owner
            if (r2 == 0) goto L2b
            int r2 = r5.limit
            int r5 = r5.pos
            int r2 = r2 - r5
            long r2 = (long) r2
            long r0 = r0 - r2
        L2b:
            return r0
    }

    public static final okio.Buffer commonCopy(okio.Buffer r6) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            okio.Buffer r0 = new okio.Buffer
            r0.<init>()
            long r1 = r6.size()
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L15
            return r0
        L15:
            okio.Segment r1 = r6.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            okio.Segment r2 = r1.sharedCopy()
            r0.head = r2
            okio.Segment r3 = r0.head
            r2.prev = r3
            okio.Segment r3 = r2.prev
            r2.next = r3
            okio.Segment r3 = r1.next
        L2a:
            if (r3 == r1) goto L3e
            okio.Segment r4 = r2.prev
            kotlin.jvm.internal.Intrinsics.checkNotNull(r4)
            kotlin.jvm.internal.Intrinsics.checkNotNull(r3)
            okio.Segment r5 = r3.sharedCopy()
            r4.push(r5)
            okio.Segment r3 = r3.next
            goto L2a
        L3e:
            long r1 = r6.size()
            r0.setSize$okio(r1)
            return r0
    }

    public static final okio.Buffer commonCopyTo(okio.Buffer r7, okio.Buffer r8, long r9, long r11) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            java.lang.String r0 = "out"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            long r1 = r7.size()
            r3 = r9
            r5 = r11
            okio._UtilKt.checkOffsetAndCount(r1, r3, r5)
            r0 = 0
            int r2 = (r11 > r0 ? 1 : (r11 == r0 ? 0 : -1))
            if (r2 != 0) goto L1a
            return r7
        L1a:
            long r2 = r8.size()
            long r2 = r2 + r11
            r8.setSize$okio(r2)
            okio.Segment r2 = r7.head
        L24:
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            int r3 = r2.limit
            int r4 = r2.pos
            int r3 = r3 - r4
            long r3 = (long) r3
            int r3 = (r9 > r3 ? 1 : (r9 == r3 ? 0 : -1))
            if (r3 < 0) goto L3b
            int r3 = r2.limit
            int r4 = r2.pos
            int r3 = r3 - r4
            long r3 = (long) r3
            long r9 = r9 - r3
            okio.Segment r2 = r2.next
            goto L24
        L3b:
            int r3 = (r11 > r0 ? 1 : (r11 == r0 ? 0 : -1))
            if (r3 <= 0) goto L7f
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            okio.Segment r3 = r2.sharedCopy()
            int r4 = r3.pos
            int r9 = (int) r9
            int r4 = r4 + r9
            r3.pos = r4
            int r9 = r3.pos
            int r10 = (int) r11
            int r9 = r9 + r10
            int r10 = r3.limit
            int r9 = java.lang.Math.min(r9, r10)
            r3.limit = r9
            okio.Segment r9 = r8.head
            if (r9 != 0) goto L67
            r3.prev = r3
            okio.Segment r9 = r3.prev
            r3.next = r9
            okio.Segment r9 = r3.next
            r8.head = r9
            goto L74
        L67:
            okio.Segment r9 = r8.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r9)
            okio.Segment r9 = r9.prev
            kotlin.jvm.internal.Intrinsics.checkNotNull(r9)
            r9.push(r3)
        L74:
            int r9 = r3.limit
            int r10 = r3.pos
            int r9 = r9 - r10
            long r9 = (long) r9
            long r11 = r11 - r9
            okio.Segment r2 = r2.next
            r9 = r0
            goto L3b
        L7f:
            return r7
    }

    public static final boolean commonEquals(okio.Buffer r18, java.lang.Object r19) {
            r0 = r18
            r1 = r19
            java.lang.String r2 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r2)
            r2 = 1
            if (r0 != r1) goto Ld
            return r2
        Ld:
            boolean r3 = r1 instanceof okio.Buffer
            r4 = 0
            if (r3 != 0) goto L13
            return r4
        L13:
            long r5 = r18.size()
            okio.Buffer r1 = (okio.Buffer) r1
            long r7 = r1.size()
            int r3 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r3 == 0) goto L22
            return r4
        L22:
            long r5 = r18.size()
            r7 = 0
            int r3 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r3 != 0) goto L2d
            return r2
        L2d:
            okio.Segment r3 = r0.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r3)
            okio.Segment r1 = r1.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            int r5 = r3.pos
            int r6 = r1.pos
            r9 = r7
        L3c:
            long r11 = r18.size()
            int r11 = (r9 > r11 ? 1 : (r9 == r11 ? 0 : -1))
            if (r11 >= 0) goto L8c
            int r11 = r3.limit
            int r11 = r11 - r5
            int r12 = r1.limit
            int r12 = r12 - r6
            int r11 = java.lang.Math.min(r11, r12)
            long r11 = (long) r11
            int r13 = (r7 > r11 ? 1 : (r7 == r11 ? 0 : -1))
            if (r13 >= 0) goto L74
            r13 = r7
        L54:
            r15 = 1
            long r13 = r13 + r15
            byte[] r15 = r3.data
            int r16 = r5 + 1
            r5 = r15[r5]
            byte[] r15 = r1.data
            int r17 = r6 + 1
            r6 = r15[r6]
            if (r5 == r6) goto L66
            return r4
        L66:
            int r5 = (r13 > r11 ? 1 : (r13 == r11 ? 0 : -1))
            if (r5 < 0) goto L6f
            r5 = r16
            r6 = r17
            goto L74
        L6f:
            r5 = r16
            r6 = r17
            goto L54
        L74:
            int r13 = r3.limit
            if (r5 != r13) goto L7f
            okio.Segment r3 = r3.next
            kotlin.jvm.internal.Intrinsics.checkNotNull(r3)
            int r5 = r3.pos
        L7f:
            int r13 = r1.limit
            if (r6 != r13) goto L8a
            okio.Segment r1 = r1.next
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            int r6 = r1.pos
        L8a:
            long r9 = r9 + r11
            goto L3c
        L8c:
            return r2
    }

    public static final long commonExpandBuffer(okio.Buffer.UnsafeCursor r9, int r10) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            r0 = 1
            r1 = 0
            if (r10 <= 0) goto Lb
            r2 = r0
            goto Lc
        Lb:
            r2 = r1
        Lc:
            if (r2 == 0) goto L74
            r2 = 8192(0x2000, float:1.148E-41)
            if (r10 > r2) goto L13
            goto L14
        L13:
            r0 = r1
        L14:
            if (r0 == 0) goto L5e
            okio.Buffer r0 = r9.buffer
            if (r0 == 0) goto L50
            boolean r1 = r9.readWrite
            if (r1 == 0) goto L42
            long r3 = r0.size()
            okio.Segment r10 = r0.writableSegment$okio(r10)
            int r1 = r10.limit
            int r1 = 8192 - r1
            r10.limit = r2
            long r5 = (long) r1
            long r7 = r3 + r5
            r0.setSize$okio(r7)
            r9.setSegment$okio(r10)
            r9.offset = r3
            byte[] r10 = r10.data
            r9.data = r10
            int r10 = 8192 - r1
            r9.start = r10
            r9.end = r2
            return r5
        L42:
            java.lang.IllegalStateException r9 = new java.lang.IllegalStateException
            java.lang.String r10 = "expandBuffer() only permitted for read/write buffers"
            java.lang.String r10 = r10.toString()
            r9.<init>(r10)
            java.lang.Throwable r9 = (java.lang.Throwable) r9
            throw r9
        L50:
            java.lang.IllegalStateException r9 = new java.lang.IllegalStateException
            java.lang.String r10 = "not attached to a buffer"
            java.lang.String r10 = r10.toString()
            r9.<init>(r10)
            java.lang.Throwable r9 = (java.lang.Throwable) r9
            throw r9
        L5e:
            java.lang.Integer r9 = java.lang.Integer.valueOf(r10)
            java.lang.String r10 = "minByteCount > Segment.SIZE: "
            java.lang.String r9 = kotlin.jvm.internal.Intrinsics.stringPlus(r10, r9)
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.String r9 = r9.toString()
            r10.<init>(r9)
            java.lang.Throwable r10 = (java.lang.Throwable) r10
            throw r10
        L74:
            java.lang.Integer r9 = java.lang.Integer.valueOf(r10)
            java.lang.String r10 = "minByteCount <= 0: "
            java.lang.String r9 = kotlin.jvm.internal.Intrinsics.stringPlus(r10, r9)
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.String r9 = r9.toString()
            r10.<init>(r9)
            java.lang.Throwable r10 = (java.lang.Throwable) r10
            throw r10
    }

    public static final byte commonGet(okio.Buffer r7, long r8) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            long r1 = r7.size()
            r5 = 1
            r3 = r8
            okio._UtilKt.checkOffsetAndCount(r1, r3, r5)
            okio.Segment r0 = r7.head
            if (r0 != 0) goto L26
            r7 = 0
            r0 = -1
            okio.Segment r7 = (okio.Segment) r7
            kotlin.jvm.internal.Intrinsics.checkNotNull(r7)
            byte[] r2 = r7.data
            int r7 = r7.pos
            long r3 = (long) r7
            long r3 = r3 + r8
            long r3 = r3 - r0
            int r7 = (int) r3
            r7 = r2[r7]
            return r7
        L26:
            long r1 = r7.size()
            long r1 = r1 - r8
            int r1 = (r1 > r8 ? 1 : (r1 == r8 ? 0 : -1))
            if (r1 >= 0) goto L52
            long r1 = r7.size()
        L33:
            int r7 = (r1 > r8 ? 1 : (r1 == r8 ? 0 : -1))
            if (r7 <= 0) goto L44
            okio.Segment r0 = r0.prev
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            int r7 = r0.limit
            int r3 = r0.pos
            int r7 = r7 - r3
            long r3 = (long) r7
            long r1 = r1 - r3
            goto L33
        L44:
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            byte[] r7 = r0.data
            int r0 = r0.pos
            long r3 = (long) r0
            long r3 = r3 + r8
            long r3 = r3 - r1
            int r8 = (int) r3
            r7 = r7[r8]
            return r7
        L52:
            r1 = 0
        L54:
            int r7 = r0.limit
            int r3 = r0.pos
            int r7 = r7 - r3
            long r3 = (long) r7
            long r3 = r3 + r1
            int r7 = (r3 > r8 ? 1 : (r3 == r8 ? 0 : -1))
            if (r7 <= 0) goto L6d
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            byte[] r7 = r0.data
            int r0 = r0.pos
            long r3 = (long) r0
            long r3 = r3 + r8
            long r3 = r3 - r1
            int r8 = (int) r3
            r7 = r7[r8]
            return r7
        L6d:
            okio.Segment r0 = r0.next
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            r1 = r3
            goto L54
    }

    public static final int commonHashCode(okio.Buffer r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            okio.Segment r0 = r5.head
            if (r0 != 0) goto Lb
            r5 = 0
            return r5
        Lb:
            r1 = 1
        Lc:
            int r2 = r0.pos
            int r3 = r0.limit
        L10:
            if (r2 >= r3) goto L1c
            int r1 = r1 * 31
            byte[] r4 = r0.data
            r4 = r4[r2]
            int r1 = r1 + r4
            int r2 = r2 + 1
            goto L10
        L1c:
            okio.Segment r0 = r0.next
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            okio.Segment r2 = r5.head
            if (r0 != r2) goto Lc
            return r1
    }

    public static final long commonIndexOf(okio.Buffer r10, byte r11, long r12, long r14) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            r0 = 0
            int r2 = (r0 > r12 ? 1 : (r0 == r12 ? 0 : -1))
            r3 = 0
            if (r2 > 0) goto L11
            int r2 = (r12 > r14 ? 1 : (r12 == r14 ? 0 : -1))
            if (r2 > 0) goto L11
            r3 = 1
        L11:
            if (r3 == 0) goto Lce
            long r2 = r10.size()
            int r2 = (r14 > r2 ? 1 : (r14 == r2 ? 0 : -1))
            if (r2 <= 0) goto L1f
            long r14 = r10.size()
        L1f:
            r2 = r14
            int r14 = (r12 > r2 ? 1 : (r12 == r2 ? 0 : -1))
            r4 = -1
            if (r14 != 0) goto L27
            return r4
        L27:
            okio.Segment r14 = r10.head
            if (r14 != 0) goto L2f
            r10 = 0
            okio.Segment r10 = (okio.Segment) r10
            return r4
        L2f:
            long r6 = r10.size()
            long r6 = r6 - r12
            int r15 = (r6 > r12 ? 1 : (r6 == r12 ? 0 : -1))
            if (r15 >= 0) goto L87
            long r0 = r10.size()
        L3c:
            int r10 = (r0 > r12 ? 1 : (r0 == r12 ? 0 : -1))
            if (r10 <= 0) goto L4d
            okio.Segment r14 = r14.prev
            kotlin.jvm.internal.Intrinsics.checkNotNull(r14)
            int r10 = r14.limit
            int r15 = r14.pos
            int r10 = r10 - r15
            long r6 = (long) r10
            long r0 = r0 - r6
            goto L3c
        L4d:
            if (r14 != 0) goto L50
            return r4
        L50:
            int r10 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r10 >= 0) goto L86
            byte[] r10 = r14.data
            int r15 = r14.limit
            long r6 = (long) r15
            int r15 = r14.pos
            long r8 = (long) r15
            long r8 = r8 + r2
            long r8 = r8 - r0
            long r6 = java.lang.Math.min(r6, r8)
            int r15 = (int) r6
            int r6 = r14.pos
            long r6 = (long) r6
            long r6 = r6 + r12
            long r6 = r6 - r0
            int r12 = (int) r6
        L69:
            if (r12 >= r15) goto L78
            r13 = r10[r12]
            if (r13 != r11) goto L75
        L6f:
            int r10 = r14.pos
            int r12 = r12 - r10
            long r10 = (long) r12
            long r10 = r10 + r0
            return r10
        L75:
            int r12 = r12 + 1
            goto L69
        L78:
            int r10 = r14.limit
            int r12 = r14.pos
            int r10 = r10 - r12
            long r12 = (long) r10
            long r0 = r0 + r12
            okio.Segment r14 = r14.next
            kotlin.jvm.internal.Intrinsics.checkNotNull(r14)
            r12 = r0
            goto L50
        L86:
            return r4
        L87:
            int r10 = r14.limit
            int r15 = r14.pos
            int r10 = r10 - r15
            long r6 = (long) r10
            long r6 = r6 + r0
            int r10 = (r6 > r12 ? 1 : (r6 == r12 ? 0 : -1))
            if (r10 <= 0) goto Lc7
            if (r14 != 0) goto L95
            return r4
        L95:
            int r10 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r10 >= 0) goto Lc6
            byte[] r10 = r14.data
            int r15 = r14.limit
            long r6 = (long) r15
            int r15 = r14.pos
            long r8 = (long) r15
            long r8 = r8 + r2
            long r8 = r8 - r0
            long r6 = java.lang.Math.min(r6, r8)
            int r15 = (int) r6
            int r6 = r14.pos
            long r6 = (long) r6
            long r6 = r6 + r12
            long r6 = r6 - r0
            int r12 = (int) r6
        Lae:
            if (r12 >= r15) goto Lb8
            r13 = r10[r12]
            if (r13 != r11) goto Lb5
            goto L6f
        Lb5:
            int r12 = r12 + 1
            goto Lae
        Lb8:
            int r10 = r14.limit
            int r12 = r14.pos
            int r10 = r10 - r12
            long r12 = (long) r10
            long r0 = r0 + r12
            okio.Segment r14 = r14.next
            kotlin.jvm.internal.Intrinsics.checkNotNull(r14)
            r12 = r0
            goto L95
        Lc6:
            return r4
        Lc7:
            okio.Segment r14 = r14.next
            kotlin.jvm.internal.Intrinsics.checkNotNull(r14)
            r0 = r6
            goto L87
        Lce:
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r0 = "size="
            r11.append(r0)
            long r0 = r10.size()
            r11.append(r0)
            java.lang.String r10 = " fromIndex="
            r11.append(r10)
            r11.append(r12)
            java.lang.String r10 = " toIndex="
            r11.append(r10)
            r11.append(r14)
            java.lang.String r10 = r11.toString()
            java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
            java.lang.String r10 = r10.toString()
            r11.<init>(r10)
            java.lang.Throwable r11 = (java.lang.Throwable) r11
            throw r11
    }

    public static final long commonIndexOf(okio.Buffer r16, okio.ByteString r17, long r18) {
            r0 = r16
            java.lang.String r1 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r1)
            java.lang.String r1 = "bytes"
            r2 = r17
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r1)
            int r1 = r17.size()
            r3 = 0
            r4 = 1
            if (r1 <= 0) goto L18
            r1 = r4
            goto L19
        L18:
            r1 = r3
        L19:
            if (r1 == 0) goto L134
            r5 = 0
            int r1 = (r18 > r5 ? 1 : (r18 == r5 ? 0 : -1))
            if (r1 < 0) goto L23
            r1 = r4
            goto L24
        L23:
            r1 = r3
        L24:
            if (r1 == 0) goto L11e
            okio.Segment r1 = r0.head
            r7 = -1
            if (r1 != 0) goto L30
            r0 = 0
            okio.Segment r0 = (okio.Segment) r0
            return r7
        L30:
            long r9 = r16.size()
            long r9 = r9 - r18
            int r9 = (r9 > r18 ? 1 : (r9 == r18 ? 0 : -1))
            r10 = 1
            if (r9 >= 0) goto Lac
            long r5 = r16.size()
        L40:
            int r9 = (r5 > r18 ? 1 : (r5 == r18 ? 0 : -1))
            if (r9 <= 0) goto L51
            okio.Segment r1 = r1.prev
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            int r9 = r1.limit
            int r12 = r1.pos
            int r9 = r9 - r12
            long r12 = (long) r9
            long r5 = r5 - r12
            goto L40
        L51:
            if (r1 != 0) goto L54
            return r7
        L54:
            byte[] r9 = r17.internalArray$okio()
            r3 = r9[r3]
            int r2 = r17.size()
            long r12 = r16.size()
            long r14 = (long) r2
            long r12 = r12 - r14
            long r12 = r12 + r10
            r10 = r5
            r5 = r1
            r0 = r18
        L69:
            int r6 = (r10 > r12 ? 1 : (r10 == r12 ? 0 : -1))
            if (r6 >= 0) goto Lab
            byte[] r6 = r5.data
            int r14 = r5.limit
            int r15 = r5.pos
            long r7 = (long) r15
            long r7 = r7 + r12
            long r7 = r7 - r10
            long r14 = (long) r14
            long r7 = java.lang.Math.min(r14, r7)
            int r7 = (int) r7
            int r8 = r5.pos
            long r14 = (long) r8
            long r14 = r14 + r0
            long r14 = r14 - r10
            int r0 = (int) r14
            if (r0 >= r7) goto L9b
        L84:
            int r1 = r0 + 1
            r8 = r6[r0]
            if (r8 != r3) goto L96
            boolean r8 = rangeEquals(r5, r1, r9, r4, r2)
            if (r8 == 0) goto L96
        L90:
            int r1 = r5.pos
            int r0 = r0 - r1
            long r0 = (long) r0
            long r0 = r0 + r10
            return r0
        L96:
            if (r1 < r7) goto L99
            goto L9b
        L99:
            r0 = r1
            goto L84
        L9b:
            int r0 = r5.limit
            int r1 = r5.pos
            int r0 = r0 - r1
            long r0 = (long) r0
            long r10 = r10 + r0
            okio.Segment r5 = r5.next
            kotlin.jvm.internal.Intrinsics.checkNotNull(r5)
            r0 = r10
            r7 = -1
            goto L69
        Lab:
            return r7
        Lac:
            int r9 = r1.limit
            int r12 = r1.pos
            int r9 = r9 - r12
            long r12 = (long) r9
            long r12 = r12 + r5
            int r9 = (r12 > r18 ? 1 : (r12 == r18 ? 0 : -1))
            if (r9 <= 0) goto L114
            if (r1 != 0) goto Lba
            return r7
        Lba:
            byte[] r7 = r17.internalArray$okio()
            r3 = r7[r3]
            int r2 = r17.size()
            long r8 = r16.size()
            long r12 = (long) r2
            long r8 = r8 - r12
            long r8 = r8 + r10
            r10 = r5
            r5 = r1
            r0 = r18
        Lcf:
            int r6 = (r10 > r8 ? 1 : (r10 == r8 ? 0 : -1))
            if (r6 >= 0) goto L111
            byte[] r6 = r5.data
            int r12 = r5.limit
            int r13 = r5.pos
            long r13 = (long) r13
            long r13 = r13 + r8
            long r13 = r13 - r10
            r16 = r5
            long r4 = (long) r12
            long r4 = java.lang.Math.min(r4, r13)
            int r4 = (int) r4
            r5 = r16
            int r12 = r5.pos
            long r12 = (long) r12
            long r12 = r12 + r0
            long r12 = r12 - r10
            int r0 = (int) r12
            if (r0 >= r4) goto L101
        Lee:
            int r1 = r0 + 1
            r12 = r6[r0]
            r14 = 1
            if (r12 != r3) goto Lfc
            boolean r12 = rangeEquals(r5, r1, r7, r14, r2)
            if (r12 == 0) goto Lfc
            goto L90
        Lfc:
            if (r1 < r4) goto Lff
            goto L102
        Lff:
            r0 = r1
            goto Lee
        L101:
            r14 = 1
        L102:
            int r0 = r5.limit
            int r1 = r5.pos
            int r0 = r0 - r1
            long r0 = (long) r0
            long r10 = r10 + r0
            okio.Segment r5 = r5.next
            kotlin.jvm.internal.Intrinsics.checkNotNull(r5)
            r0 = r10
            r4 = r14
            goto Lcf
        L111:
            r4 = -1
            return r4
        L114:
            r14 = r4
            r4 = r7
            okio.Segment r1 = r1.next
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            r5 = r12
            r4 = r14
            goto Lac
        L11e:
            java.lang.Long r0 = java.lang.Long.valueOf(r18)
            java.lang.String r1 = "fromIndex < 0: "
            java.lang.String r0 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r0)
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            throw r1
        L134:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "bytes is empty"
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            java.lang.Throwable r0 = (java.lang.Throwable) r0
            throw r0
    }

    public static final long commonIndexOfElement(okio.Buffer r11, okio.ByteString r12, long r13) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
            java.lang.String r0 = "targetBytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
            r0 = 0
            int r2 = (r13 > r0 ? 1 : (r13 == r0 ? 0 : -1))
            r3 = 0
            r4 = 1
            if (r2 < 0) goto L14
            r2 = r4
            goto L15
        L14:
            r2 = r3
        L15:
            if (r2 == 0) goto L145
            okio.Segment r2 = r11.head
            r5 = -1
            if (r2 != 0) goto L21
            r11 = 0
            okio.Segment r11 = (okio.Segment) r11
            return r5
        L21:
            long r7 = r11.size()
            long r7 = r7 - r13
            int r7 = (r7 > r13 ? 1 : (r7 == r13 ? 0 : -1))
            r8 = 2
            if (r7 >= 0) goto Lbc
            long r0 = r11.size()
        L2f:
            int r7 = (r0 > r13 ? 1 : (r0 == r13 ? 0 : -1))
            if (r7 <= 0) goto L40
            okio.Segment r2 = r2.prev
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            int r7 = r2.limit
            int r9 = r2.pos
            int r7 = r7 - r9
            long r9 = (long) r7
            long r0 = r0 - r9
            goto L2f
        L40:
            if (r2 != 0) goto L43
            return r5
        L43:
            int r7 = r12.size()
            if (r7 != r8) goto L83
            byte r3 = r12.getByte(r3)
            byte r12 = r12.getByte(r4)
        L51:
            long r7 = r11.size()
            int r4 = (r0 > r7 ? 1 : (r0 == r7 ? 0 : -1))
            if (r4 >= 0) goto Lbb
            byte[] r4 = r2.data
            int r7 = r2.pos
            long r7 = (long) r7
            long r7 = r7 + r13
            long r7 = r7 - r0
            int r13 = (int) r7
            int r14 = r2.limit
        L63:
            if (r13 >= r14) goto L75
            r7 = r4[r13]
            if (r7 == r3) goto L6f
            if (r7 != r12) goto L6c
            goto L6f
        L6c:
            int r13 = r13 + 1
            goto L63
        L6f:
            int r11 = r2.pos
        L71:
            int r13 = r13 - r11
            long r11 = (long) r13
            long r11 = r11 + r0
            return r11
        L75:
            int r13 = r2.limit
            int r14 = r2.pos
            int r13 = r13 - r14
            long r13 = (long) r13
            long r0 = r0 + r13
            okio.Segment r2 = r2.next
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            r13 = r0
            goto L51
        L83:
            byte[] r12 = r12.internalArray$okio()
        L87:
            long r7 = r11.size()
            int r4 = (r0 > r7 ? 1 : (r0 == r7 ? 0 : -1))
            if (r4 >= 0) goto Lbb
            byte[] r4 = r2.data
            int r7 = r2.pos
            long r7 = (long) r7
            long r7 = r7 + r13
            long r7 = r7 - r0
            int r13 = (int) r7
            int r14 = r2.limit
        L99:
            if (r13 >= r14) goto Lad
            r7 = r4[r13]
            int r8 = r12.length
            r9 = r3
        L9f:
            if (r9 >= r8) goto Laa
            r10 = r12[r9]
            int r9 = r9 + 1
            if (r7 != r10) goto L9f
        La7:
            int r11 = r2.pos
            goto L71
        Laa:
            int r13 = r13 + 1
            goto L99
        Lad:
            int r13 = r2.limit
            int r14 = r2.pos
            int r13 = r13 - r14
            long r13 = (long) r13
            long r0 = r0 + r13
            okio.Segment r2 = r2.next
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            r13 = r0
            goto L87
        Lbb:
            return r5
        Lbc:
            int r7 = r2.limit
            int r9 = r2.pos
            int r7 = r7 - r9
            long r9 = (long) r7
            long r9 = r9 + r0
            int r7 = (r9 > r13 ? 1 : (r9 == r13 ? 0 : -1))
            if (r7 <= 0) goto L13d
            if (r2 != 0) goto Lca
            return r5
        Lca:
            int r7 = r12.size()
            if (r7 != r8) goto L105
            byte r3 = r12.getByte(r3)
            byte r12 = r12.getByte(r4)
        Ld8:
            long r7 = r11.size()
            int r4 = (r0 > r7 ? 1 : (r0 == r7 ? 0 : -1))
            if (r4 >= 0) goto L13c
            byte[] r4 = r2.data
            int r7 = r2.pos
            long r7 = (long) r7
            long r7 = r7 + r13
            long r7 = r7 - r0
            int r13 = (int) r7
            int r14 = r2.limit
        Lea:
            if (r13 >= r14) goto Lf7
            r7 = r4[r13]
            if (r7 == r3) goto L6f
            if (r7 != r12) goto Lf4
            goto L6f
        Lf4:
            int r13 = r13 + 1
            goto Lea
        Lf7:
            int r13 = r2.limit
            int r14 = r2.pos
            int r13 = r13 - r14
            long r13 = (long) r13
            long r0 = r0 + r13
            okio.Segment r2 = r2.next
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            r13 = r0
            goto Ld8
        L105:
            byte[] r12 = r12.internalArray$okio()
        L109:
            long r7 = r11.size()
            int r4 = (r0 > r7 ? 1 : (r0 == r7 ? 0 : -1))
            if (r4 >= 0) goto L13c
            byte[] r4 = r2.data
            int r7 = r2.pos
            long r7 = (long) r7
            long r7 = r7 + r13
            long r7 = r7 - r0
            int r13 = (int) r7
            int r14 = r2.limit
        L11b:
            if (r13 >= r14) goto L12e
            r7 = r4[r13]
            int r8 = r12.length
            r9 = r3
        L121:
            if (r9 >= r8) goto L12b
            r10 = r12[r9]
            int r9 = r9 + 1
            if (r7 != r10) goto L121
            goto La7
        L12b:
            int r13 = r13 + 1
            goto L11b
        L12e:
            int r13 = r2.limit
            int r14 = r2.pos
            int r13 = r13 - r14
            long r13 = (long) r13
            long r0 = r0 + r13
            okio.Segment r2 = r2.next
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            r13 = r0
            goto L109
        L13c:
            return r5
        L13d:
            okio.Segment r2 = r2.next
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            r0 = r9
            goto Lbc
        L145:
            java.lang.Long r11 = java.lang.Long.valueOf(r13)
            java.lang.String r12 = "fromIndex < 0: "
            java.lang.String r11 = kotlin.jvm.internal.Intrinsics.stringPlus(r12, r11)
            java.lang.IllegalArgumentException r12 = new java.lang.IllegalArgumentException
            java.lang.String r11 = r11.toString()
            r12.<init>(r11)
            java.lang.Throwable r12 = (java.lang.Throwable) r12
            throw r12
    }

    public static final int commonNext(okio.Buffer.UnsafeCursor r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            long r0 = r4.offset
            okio.Buffer r2 = r4.buffer
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            long r2 = r2.size()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            r0 = 1
            goto L17
        L16:
            r0 = 0
        L17:
            if (r0 == 0) goto L32
            long r0 = r4.offset
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L24
            r0 = 0
            goto L2d
        L24:
            long r0 = r4.offset
            int r2 = r4.end
            int r3 = r4.start
            int r2 = r2 - r3
            long r2 = (long) r2
            long r0 = r0 + r2
        L2d:
            int r4 = r4.seek(r0)
            return r4
        L32:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r0 = "no more bytes"
            java.lang.String r0 = r0.toString()
            r4.<init>(r0)
            java.lang.Throwable r4 = (java.lang.Throwable) r4
            throw r4
    }

    public static final boolean commonRangeEquals(okio.Buffer r6, long r7, okio.ByteString r9, int r10, int r11) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            java.lang.String r0 = "bytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            r0 = 0
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            r1 = 0
            if (r0 < 0) goto L41
            if (r10 < 0) goto L41
            if (r11 < 0) goto L41
            long r2 = r6.size()
            long r2 = r2 - r7
            long r4 = (long) r11
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 < 0) goto L41
            int r0 = r9.size()
            int r0 = r0 - r10
            if (r0 >= r11) goto L27
            goto L41
        L27:
            if (r11 <= 0) goto L3f
            r0 = r1
        L2a:
            int r2 = r0 + 1
            long r3 = (long) r0
            long r3 = r3 + r7
            byte r3 = r6.getByte(r3)
            int r0 = r0 + r10
            byte r0 = r9.getByte(r0)
            if (r3 == r0) goto L3a
            return r1
        L3a:
            if (r2 < r11) goto L3d
            goto L3f
        L3d:
            r0 = r2
            goto L2a
        L3f:
            r6 = 1
            return r6
        L41:
            return r1
    }

    public static final int commonRead(okio.Buffer r2, byte[] r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            int r0 = r3.length
            r1 = 0
            int r2 = r2.read(r3, r1, r0)
            return r2
    }

    public static final int commonRead(okio.Buffer r7, byte[] r8, int r9, int r10) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            int r0 = r8.length
            long r1 = (long) r0
            long r3 = (long) r9
            long r5 = (long) r10
            okio._UtilKt.checkOffsetAndCount(r1, r3, r5)
            okio.Segment r0 = r7.head
            if (r0 != 0) goto L17
            r7 = -1
            return r7
        L17:
            int r1 = r0.limit
            int r2 = r0.pos
            int r1 = r1 - r2
            int r10 = java.lang.Math.min(r10, r1)
            byte[] r1 = r0.data
            int r2 = r0.pos
            int r3 = r0.pos
            int r3 = r3 + r10
            kotlin.collections.ArraysKt.copyInto(r1, r8, r9, r2, r3)
            int r8 = r0.pos
            int r8 = r8 + r10
            r0.pos = r8
            long r8 = r7.size()
            long r1 = (long) r10
            long r8 = r8 - r1
            r7.setSize$okio(r8)
            int r8 = r0.pos
            int r9 = r0.limit
            if (r8 != r9) goto L47
            okio.Segment r8 = r0.pop()
            r7.head = r8
            okio.SegmentPool.recycle(r0)
        L47:
            return r10
    }

    public static final long commonRead(okio.Buffer r4, okio.Buffer r5, long r6) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            r0 = 0
            int r2 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r2 < 0) goto L12
            r2 = 1
            goto L13
        L12:
            r2 = 0
        L13:
            if (r2 == 0) goto L30
            long r2 = r4.size()
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 != 0) goto L20
            r4 = -1
            return r4
        L20:
            long r0 = r4.size()
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 <= 0) goto L2c
            long r6 = r4.size()
        L2c:
            r5.write(r4, r6)
            return r6
        L30:
            java.lang.Long r4 = java.lang.Long.valueOf(r6)
            java.lang.String r5 = "byteCount < 0: "
            java.lang.String r4 = kotlin.jvm.internal.Intrinsics.stringPlus(r5, r4)
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r4 = r4.toString()
            r5.<init>(r4)
            java.lang.Throwable r5 = (java.lang.Throwable) r5
            throw r5
    }

    public static final long commonReadAll(okio.Buffer r4, okio.Sink r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            long r0 = r4.size()
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L17
            r5.write(r4, r0)
        L17:
            return r0
    }

    public static final okio.Buffer.UnsafeCursor commonReadAndWriteUnsafe(okio.Buffer r2, okio.Buffer.UnsafeCursor r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "unsafeCursor"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okio.Buffer$UnsafeCursor r3 = okio._UtilKt.resolveDefaultParameter(r3)
            okio.Buffer r0 = r3.buffer
            r1 = 1
            if (r0 != 0) goto L15
            r0 = r1
            goto L16
        L15:
            r0 = 0
        L16:
            if (r0 == 0) goto L1d
            r3.buffer = r2
            r3.readWrite = r1
            return r3
        L1d:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "already attached to a buffer"
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    public static final byte commonReadByte(okio.Buffer r9) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            long r0 = r9.size()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L37
            okio.Segment r0 = r9.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            int r1 = r0.pos
            int r2 = r0.limit
            byte[] r3 = r0.data
            int r4 = r1 + 1
            r1 = r3[r1]
            long r5 = r9.size()
            r7 = 1
            long r5 = r5 - r7
            r9.setSize$okio(r5)
            if (r4 != r2) goto L34
            okio.Segment r2 = r0.pop()
            r9.head = r2
            okio.SegmentPool.recycle(r0)
            goto L36
        L34:
            r0.pos = r4
        L36:
            return r1
        L37:
            java.io.EOFException r9 = new java.io.EOFException
            r9.<init>()
            throw r9
    }

    public static final byte[] commonReadByteArray(okio.Buffer r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            long r0 = r2.size()
            byte[] r2 = r2.readByteArray(r0)
            return r2
    }

    public static final byte[] commonReadByteArray(okio.Buffer r2, long r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 < 0) goto L14
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 > 0) goto L14
            r0 = 1
            goto L15
        L14:
            r0 = 0
        L15:
            if (r0 == 0) goto L2c
            long r0 = r2.size()
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 < 0) goto L26
            int r3 = (int) r3
            byte[] r3 = new byte[r3]
            r2.readFully(r3)
            return r3
        L26:
            java.io.EOFException r2 = new java.io.EOFException
            r2.<init>()
            throw r2
        L2c:
            java.lang.Long r2 = java.lang.Long.valueOf(r3)
            java.lang.String r3 = "byteCount: "
            java.lang.String r2 = kotlin.jvm.internal.Intrinsics.stringPlus(r3, r2)
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r2 = r2.toString()
            r3.<init>(r2)
            java.lang.Throwable r3 = (java.lang.Throwable) r3
            throw r3
    }

    public static final okio.ByteString commonReadByteString(okio.Buffer r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            long r0 = r2.size()
            okio.ByteString r2 = r2.readByteString(r0)
            return r2
    }

    public static final okio.ByteString commonReadByteString(okio.Buffer r2, long r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 < 0) goto L14
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 > 0) goto L14
            r0 = 1
            goto L15
        L14:
            r0 = 0
        L15:
            if (r0 == 0) goto L3e
            long r0 = r2.size()
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 < 0) goto L38
            r0 = 4096(0x1000, double:2.0237E-320)
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 < 0) goto L2e
            int r0 = (int) r3
            okio.ByteString r0 = r2.snapshot(r0)
            r2.skip(r3)
            return r0
        L2e:
            okio.ByteString r0 = new okio.ByteString
            byte[] r2 = r2.readByteArray(r3)
            r0.<init>(r2)
            return r0
        L38:
            java.io.EOFException r2 = new java.io.EOFException
            r2.<init>()
            throw r2
        L3e:
            java.lang.Long r2 = java.lang.Long.valueOf(r3)
            java.lang.String r3 = "byteCount: "
            java.lang.String r2 = kotlin.jvm.internal.Intrinsics.stringPlus(r3, r2)
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r2 = r2.toString()
            r3.<init>(r2)
            java.lang.Throwable r3 = (java.lang.Throwable) r3
            throw r3
    }

    public static final long commonReadDecimalLong(okio.Buffer r16) {
            r0 = r16
            java.lang.String r1 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r1)
            long r1 = r16.size()
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 == 0) goto Le5
            r1 = -7
            r5 = 0
            r8 = r3
            r6 = r5
            r7 = r6
        L17:
            okio.Segment r10 = r0.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r10)
            byte[] r11 = r10.data
            int r12 = r10.pos
            int r13 = r10.limit
        L22:
            if (r12 >= r13) goto L7d
            r15 = r11[r12]
            r14 = 48
            byte r14 = (byte) r14
            if (r15 < r14) goto L6a
            r3 = 57
            byte r3 = (byte) r3
            if (r15 > r3) goto L6a
            int r14 = r14 - r15
            r3 = -922337203685477580(0xf333333333333334, double:-8.390303882365713E246)
            int r3 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r3 < 0) goto L48
            if (r3 != 0) goto L42
            long r3 = (long) r14
            int r3 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r3 >= 0) goto L42
            goto L48
        L42:
            r3 = 10
            long r8 = r8 * r3
            long r3 = (long) r14
            long r8 = r8 + r3
            goto L75
        L48:
            okio.Buffer r0 = new okio.Buffer
            r0.<init>()
            okio.Buffer r0 = r0.writeDecimalLong(r8)
            okio.Buffer r0 = r0.writeByte(r15)
            if (r6 != 0) goto L5a
            r0.readByte()
        L5a:
            java.lang.NumberFormatException r1 = new java.lang.NumberFormatException
            java.lang.String r0 = r0.readUtf8()
            java.lang.String r2 = "Number too large: "
            java.lang.String r0 = kotlin.jvm.internal.Intrinsics.stringPlus(r2, r0)
            r1.<init>(r0)
            throw r1
        L6a:
            r3 = 45
            byte r3 = (byte) r3
            if (r15 != r3) goto L7c
            if (r5 != 0) goto L7c
            r3 = 1
            long r1 = r1 - r3
            r6 = 1
        L75:
            int r12 = r12 + 1
            int r5 = r5 + 1
            r3 = 0
            goto L22
        L7c:
            r7 = 1
        L7d:
            if (r12 != r13) goto L89
            okio.Segment r3 = r10.pop()
            r0.head = r3
            okio.SegmentPool.recycle(r10)
            goto L8b
        L89:
            r10.pos = r12
        L8b:
            if (r7 != 0) goto L95
            okio.Segment r3 = r0.head
            if (r3 != 0) goto L92
            goto L95
        L92:
            r3 = 0
            goto L17
        L95:
            long r1 = r16.size()
            long r3 = (long) r5
            long r1 = r1 - r3
            r0.setSize$okio(r1)
            if (r6 == 0) goto La2
            r14 = 2
            goto La3
        La2:
            r14 = 1
        La3:
            if (r5 >= r14) goto Le0
            long r1 = r16.size()
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 == 0) goto Lda
            if (r6 == 0) goto Lb4
            java.lang.String r1 = "Expected a digit"
            goto Lb6
        Lb4:
            java.lang.String r1 = "Expected a digit or '-'"
        Lb6:
            java.lang.NumberFormatException r2 = new java.lang.NumberFormatException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            java.lang.String r1 = " but was 0x"
            r3.append(r1)
            r4 = 0
            byte r0 = r0.getByte(r4)
            java.lang.String r0 = okio._UtilKt.toHexString(r0)
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.<init>(r0)
            throw r2
        Lda:
            java.io.EOFException r0 = new java.io.EOFException
            r0.<init>()
            throw r0
        Le0:
            if (r6 == 0) goto Le3
            goto Le4
        Le3:
            long r8 = -r8
        Le4:
            return r8
        Le5:
            java.io.EOFException r0 = new java.io.EOFException
            r0.<init>()
            throw r0
    }

    public static final void commonReadFully(okio.Buffer r2, okio.Buffer r3, long r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            long r0 = r2.size()
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 < 0) goto L16
            r3.write(r2, r4)
            return
        L16:
            long r4 = r2.size()
            r3.write(r2, r4)
            java.io.EOFException r2 = new java.io.EOFException
            r2.<init>()
            throw r2
    }

    public static final void commonReadFully(okio.Buffer r3, byte[] r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r0 = 0
        Lb:
            int r1 = r4.length
            if (r0 >= r1) goto L1f
            int r1 = r4.length
            int r1 = r1 - r0
            int r1 = r3.read(r4, r0, r1)
            r2 = -1
            if (r1 == r2) goto L19
            int r0 = r0 + r1
            goto Lb
        L19:
            java.io.EOFException r3 = new java.io.EOFException
            r3.<init>()
            throw r3
        L1f:
            return
    }

    public static final long commonReadHexadecimalUnsignedLong(okio.Buffer r14) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r14, r0)
            long r0 = r14.size()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto La7
            r0 = 0
            r1 = r0
            r4 = r2
        L12:
            okio.Segment r6 = r14.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r6)
            byte[] r7 = r6.data
            int r8 = r6.pos
            int r9 = r6.limit
        L1d:
            if (r8 >= r9) goto L89
            r10 = r7[r8]
            r11 = 48
            byte r11 = (byte) r11
            if (r10 < r11) goto L2e
            r12 = 57
            byte r12 = (byte) r12
            if (r10 > r12) goto L2e
            int r11 = r10 - r11
            goto L48
        L2e:
            r11 = 97
            byte r11 = (byte) r11
            if (r10 < r11) goto L3d
            r12 = 102(0x66, float:1.43E-43)
            byte r12 = (byte) r12
            if (r10 > r12) goto L3d
        L38:
            int r11 = r10 - r11
            int r11 = r11 + 10
            goto L48
        L3d:
            r11 = 65
            byte r11 = (byte) r11
            if (r10 < r11) goto L75
            r12 = 70
            byte r12 = (byte) r12
            if (r10 > r12) goto L75
            goto L38
        L48:
            r12 = -1152921504606846976(0xf000000000000000, double:-3.105036184601418E231)
            long r12 = r12 & r4
            int r12 = (r12 > r2 ? 1 : (r12 == r2 ? 0 : -1))
            if (r12 != 0) goto L58
            r10 = 4
            long r4 = r4 << r10
            long r10 = (long) r11
            long r4 = r4 | r10
            int r8 = r8 + 1
            int r0 = r0 + 1
            goto L1d
        L58:
            okio.Buffer r14 = new okio.Buffer
            r14.<init>()
            okio.Buffer r14 = r14.writeHexadecimalUnsignedLong(r4)
            okio.Buffer r14 = r14.writeByte(r10)
            java.lang.NumberFormatException r0 = new java.lang.NumberFormatException
            java.lang.String r14 = r14.readUtf8()
            java.lang.String r1 = "Number too large: "
            java.lang.String r14 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r14)
            r0.<init>(r14)
            throw r0
        L75:
            if (r0 == 0) goto L79
            r1 = 1
            goto L89
        L79:
            java.lang.NumberFormatException r14 = new java.lang.NumberFormatException
            java.lang.String r0 = okio._UtilKt.toHexString(r10)
            java.lang.String r1 = "Expected leading [0-9a-fA-F] character but was 0x"
            java.lang.String r0 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r0)
            r14.<init>(r0)
            throw r14
        L89:
            if (r8 != r9) goto L95
            okio.Segment r7 = r6.pop()
            r14.head = r7
            okio.SegmentPool.recycle(r6)
            goto L97
        L95:
            r6.pos = r8
        L97:
            if (r1 != 0) goto L9d
            okio.Segment r6 = r14.head
            if (r6 != 0) goto L12
        L9d:
            long r1 = r14.size()
            long r6 = (long) r0
            long r1 = r1 - r6
            r14.setSize$okio(r1)
            return r4
        La7:
            java.io.EOFException r14 = new java.io.EOFException
            r14.<init>()
            throw r14
    }

    public static final int commonReadInt(okio.Buffer r8) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            long r0 = r8.size()
            r2 = 4
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L7b
            okio.Segment r0 = r8.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            int r1 = r0.pos
            int r4 = r0.limit
            int r5 = r4 - r1
            long r5 = (long) r5
            int r5 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r5 >= 0) goto L41
            byte r0 = r8.readByte()
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 24
            byte r1 = r8.readByte()
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 16
            r0 = r0 | r1
            byte r1 = r8.readByte()
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            r0 = r0 | r1
            byte r8 = r8.readByte()
            r8 = r8 & 255(0xff, float:3.57E-43)
            r8 = r8 | r0
            return r8
        L41:
            byte[] r5 = r0.data
            int r6 = r1 + 1
            r1 = r5[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 24
            int r7 = r6 + 1
            r6 = r5[r6]
            r6 = r6 & 255(0xff, float:3.57E-43)
            int r6 = r6 << 16
            r1 = r1 | r6
            int r6 = r7 + 1
            r7 = r5[r7]
            r7 = r7 & 255(0xff, float:3.57E-43)
            int r7 = r7 << 8
            r1 = r1 | r7
            int r7 = r6 + 1
            r5 = r5[r6]
            r5 = r5 & 255(0xff, float:3.57E-43)
            r1 = r1 | r5
            long r5 = r8.size()
            long r5 = r5 - r2
            r8.setSize$okio(r5)
            if (r7 != r4) goto L78
            okio.Segment r2 = r0.pop()
            r8.head = r2
            okio.SegmentPool.recycle(r0)
            goto L7a
        L78:
            r0.pos = r7
        L7a:
            return r1
        L7b:
            java.io.EOFException r8 = new java.io.EOFException
            r8.<init>()
            throw r8
    }

    public static final long commonReadLong(okio.Buffer r14) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r14, r0)
            long r0 = r14.size()
            r2 = 8
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L9d
            okio.Segment r0 = r14.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            int r1 = r0.pos
            int r4 = r0.limit
            int r5 = r4 - r1
            long r5 = (long) r5
            int r5 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            r6 = 32
            if (r5 >= 0) goto L35
            int r0 = r14.readInt()
            long r0 = (long) r0
            r2 = 4294967295(0xffffffff, double:2.1219957905E-314)
            long r0 = r0 & r2
            long r0 = r0 << r6
            int r14 = r14.readInt()
            long r4 = (long) r14
            long r2 = r2 & r4
            long r0 = r0 | r2
            return r0
        L35:
            byte[] r5 = r0.data
            int r7 = r1 + 1
            r1 = r5[r1]
            long r8 = (long) r1
            r10 = 255(0xff, double:1.26E-321)
            long r8 = r8 & r10
            r1 = 56
            long r8 = r8 << r1
            int r1 = r7 + 1
            r7 = r5[r7]
            long r12 = (long) r7
            long r12 = r12 & r10
            r7 = 48
            long r12 = r12 << r7
            long r7 = r8 | r12
            int r9 = r1 + 1
            r1 = r5[r1]
            long r12 = (long) r1
            long r12 = r12 & r10
            r1 = 40
            long r12 = r12 << r1
            long r7 = r7 | r12
            int r1 = r9 + 1
            r9 = r5[r9]
            long r12 = (long) r9
            long r12 = r12 & r10
            long r12 = r12 << r6
            long r6 = r7 | r12
            int r8 = r1 + 1
            r1 = r5[r1]
            long r12 = (long) r1
            long r12 = r12 & r10
            r1 = 24
            long r12 = r12 << r1
            long r6 = r6 | r12
            int r1 = r8 + 1
            r8 = r5[r8]
            long r8 = (long) r8
            long r8 = r8 & r10
            r12 = 16
            long r8 = r8 << r12
            long r6 = r6 | r8
            int r8 = r1 + 1
            r1 = r5[r1]
            long r12 = (long) r1
            long r12 = r12 & r10
            r1 = 8
            long r12 = r12 << r1
            long r6 = r6 | r12
            int r1 = r8 + 1
            r5 = r5[r8]
            long r8 = (long) r5
            long r8 = r8 & r10
            long r5 = r6 | r8
            long r7 = r14.size()
            long r7 = r7 - r2
            r14.setSize$okio(r7)
            if (r1 != r4) goto L9a
            okio.Segment r1 = r0.pop()
            r14.head = r1
            okio.SegmentPool.recycle(r0)
            goto L9c
        L9a:
            r0.pos = r1
        L9c:
            return r5
        L9d:
            java.io.EOFException r14 = new java.io.EOFException
            r14.<init>()
            throw r14
    }

    public static final short commonReadShort(okio.Buffer r8) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            long r0 = r8.size()
            r2 = 2
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L57
            okio.Segment r0 = r8.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            int r1 = r0.pos
            int r4 = r0.limit
            int r5 = r4 - r1
            r6 = 2
            if (r5 >= r6) goto L2e
            byte r0 = r8.readByte()
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 8
            byte r8 = r8.readByte()
            r8 = r8 & 255(0xff, float:3.57E-43)
            r8 = r8 | r0
            short r8 = (short) r8
            return r8
        L2e:
            byte[] r5 = r0.data
            int r6 = r1 + 1
            r1 = r5[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            int r7 = r6 + 1
            r5 = r5[r6]
            r5 = r5 & 255(0xff, float:3.57E-43)
            r1 = r1 | r5
            long r5 = r8.size()
            long r5 = r5 - r2
            r8.setSize$okio(r5)
            if (r7 != r4) goto L53
            okio.Segment r2 = r0.pop()
            r8.head = r2
            okio.SegmentPool.recycle(r0)
            goto L55
        L53:
            r0.pos = r7
        L55:
            short r8 = (short) r1
            return r8
        L57:
            java.io.EOFException r8 = new java.io.EOFException
            r8.<init>()
            throw r8
    }

    public static final okio.Buffer.UnsafeCursor commonReadUnsafe(okio.Buffer r2, okio.Buffer.UnsafeCursor r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "unsafeCursor"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okio.Buffer$UnsafeCursor r3 = okio._UtilKt.resolveDefaultParameter(r3)
            okio.Buffer r0 = r3.buffer
            r1 = 0
            if (r0 != 0) goto L15
            r0 = 1
            goto L16
        L15:
            r0 = r1
        L16:
            if (r0 == 0) goto L1d
            r3.buffer = r2
            r3.readWrite = r1
            return r3
        L1d:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "already attached to a buffer"
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    public static final java.lang.String commonReadUtf8(okio.Buffer r6, long r7) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            r0 = 0
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            r1 = 0
            if (r0 < 0) goto L15
            r2 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r2 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r2 > 0) goto L15
            r2 = 1
            goto L16
        L15:
            r2 = r1
        L16:
            if (r2 == 0) goto L6f
            long r2 = r6.size()
            int r2 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
            if (r2 < 0) goto L69
            if (r0 != 0) goto L25
            java.lang.String r6 = ""
            return r6
        L25:
            okio.Segment r0 = r6.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            int r2 = r0.pos
            long r2 = (long) r2
            long r2 = r2 + r7
            int r4 = r0.limit
            long r4 = (long) r4
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L40
            byte[] r6 = r6.readByteArray(r7)
            r7 = 3
            r8 = 0
            java.lang.String r6 = okio.internal._Utf8Kt.commonToUtf8String$default(r6, r1, r1, r7, r8)
            return r6
        L40:
            byte[] r1 = r0.data
            int r2 = r0.pos
            int r3 = r0.pos
            int r4 = (int) r7
            int r3 = r3 + r4
            java.lang.String r1 = okio.internal._Utf8Kt.commonToUtf8String(r1, r2, r3)
            int r2 = r0.pos
            int r2 = r2 + r4
            r0.pos = r2
            long r2 = r6.size()
            long r2 = r2 - r7
            r6.setSize$okio(r2)
            int r7 = r0.pos
            int r8 = r0.limit
            if (r7 != r8) goto L68
            okio.Segment r7 = r0.pop()
            r6.head = r7
            okio.SegmentPool.recycle(r0)
        L68:
            return r1
        L69:
            java.io.EOFException r6 = new java.io.EOFException
            r6.<init>()
            throw r6
        L6f:
            java.lang.Long r6 = java.lang.Long.valueOf(r7)
            java.lang.String r7 = "byteCount: "
            java.lang.String r6 = kotlin.jvm.internal.Intrinsics.stringPlus(r7, r6)
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r6 = r6.toString()
            r7.<init>(r6)
            java.lang.Throwable r7 = (java.lang.Throwable) r7
            throw r7
    }

    public static final int commonReadUtf8CodePoint(okio.Buffer r14) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r14, r0)
            long r0 = r14.size()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Lc0
            byte r0 = r14.getByte(r2)
            r1 = r0 & 128(0x80, float:1.8E-43)
            r2 = 0
            r3 = 128(0x80, float:1.8E-43)
            r4 = 1
            r5 = 65533(0xfffd, float:9.1831E-41)
            if (r1 != 0) goto L23
            r1 = r0 & 127(0x7f, float:1.78E-43)
            r7 = r2
            r6 = r4
            goto L45
        L23:
            r1 = r0 & 224(0xe0, float:3.14E-43)
            r6 = 192(0xc0, float:2.69E-43)
            if (r1 != r6) goto L2e
            r1 = r0 & 31
            r6 = 2
            r7 = r3
            goto L45
        L2e:
            r1 = r0 & 240(0xf0, float:3.36E-43)
            r6 = 224(0xe0, float:3.14E-43)
            if (r1 != r6) goto L3a
            r1 = r0 & 15
            r6 = 3
            r7 = 2048(0x800, float:2.87E-42)
            goto L45
        L3a:
            r1 = r0 & 248(0xf8, float:3.48E-43)
            r6 = 240(0xf0, float:3.36E-43)
            if (r1 != r6) goto Lba
            r1 = r0 & 7
            r6 = 4
            r7 = 65536(0x10000, float:9.1835E-41)
        L45:
            long r8 = r14.size()
            long r10 = (long) r6
            int r8 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r8 < 0) goto L86
            if (r4 >= r6) goto L6a
            r0 = r4
        L51:
            int r8 = r0 + 1
            long r12 = (long) r0
            byte r0 = r14.getByte(r12)
            r9 = r0 & 192(0xc0, float:2.69E-43)
            if (r9 != r3) goto L66
            int r1 = r1 << 6
            r0 = r0 & 63
            r1 = r1 | r0
            if (r8 < r6) goto L64
            goto L6a
        L64:
            r0 = r8
            goto L51
        L66:
            r14.skip(r12)
            return r5
        L6a:
            r14.skip(r10)
            r14 = 1114111(0x10ffff, float:1.561202E-39)
            if (r1 <= r14) goto L73
            goto L85
        L73:
            r14 = 55296(0xd800, float:7.7486E-41)
            if (r14 > r1) goto L7e
            r14 = 57343(0xdfff, float:8.0355E-41)
            if (r1 > r14) goto L7e
            r2 = r4
        L7e:
            if (r2 == 0) goto L81
            goto L85
        L81:
            if (r1 >= r7) goto L84
            goto L85
        L84:
            r5 = r1
        L85:
            return r5
        L86:
            java.io.EOFException r1 = new java.io.EOFException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "size < "
            r2.append(r3)
            r2.append(r6)
            java.lang.String r3 = ": "
            r2.append(r3)
            long r3 = r14.size()
            r2.append(r3)
            java.lang.String r14 = " (to read code point prefixed 0x"
            r2.append(r14)
            java.lang.String r14 = okio._UtilKt.toHexString(r0)
            r2.append(r14)
            r14 = 41
            r2.append(r14)
            java.lang.String r14 = r2.toString()
            r1.<init>(r14)
            throw r1
        Lba:
            r0 = 1
            r14.skip(r0)
            return r5
        Lc0:
            java.io.EOFException r14 = new java.io.EOFException
            r14.<init>()
            throw r14
    }

    public static final java.lang.String commonReadUtf8Line(okio.Buffer r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r0 = 10
            byte r0 = (byte) r0
            long r0 = r4.indexOf(r0)
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L17
            java.lang.String r4 = readUtf8Line(r4, r0)
            goto L2b
        L17:
            long r0 = r4.size()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L2a
            long r0 = r4.size()
            java.lang.String r4 = r4.readUtf8(r0)
            goto L2b
        L2a:
            r4 = 0
        L2b:
            return r4
    }

    public static final java.lang.String commonReadUtf8LineStrict(okio.Buffer r11, long r12) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
            r0 = 0
            int r0 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r0 < 0) goto Ld
            r0 = 1
            goto Le
        Ld:
            r0 = 0
        Le:
            if (r0 == 0) goto L9e
            r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r2 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            r3 = 1
            if (r2 != 0) goto L1c
            goto L1e
        L1c:
            long r0 = r12 + r3
        L1e:
            r2 = 10
            byte r2 = (byte) r2
            r7 = 0
            r5 = r11
            r6 = r2
            r9 = r0
            long r5 = r5.indexOf(r6, r7, r9)
            r7 = -1
            int r7 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r7 == 0) goto L35
            java.lang.String r11 = readUtf8Line(r11, r5)
            return r11
        L35:
            long r5 = r11.size()
            int r5 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r5 >= 0) goto L53
            long r3 = r0 - r3
            byte r3 = r11.getByte(r3)
            r4 = 13
            byte r4 = (byte) r4
            if (r3 != r4) goto L53
            byte r3 = r11.getByte(r0)
            if (r3 != r2) goto L53
            java.lang.String r11 = readUtf8Line(r11, r0)
            return r11
        L53:
            okio.Buffer r6 = new okio.Buffer
            r6.<init>()
            r2 = 0
            r0 = 32
            long r4 = r11.size()
            long r0 = (long) r0
            long r4 = java.lang.Math.min(r0, r4)
            r0 = r11
            r1 = r6
            r0.copyTo(r1, r2, r4)
            java.io.EOFException r0 = new java.io.EOFException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "\\n not found: limit="
            r1.append(r2)
            long r2 = r11.size()
            long r11 = java.lang.Math.min(r2, r12)
            r1.append(r11)
            java.lang.String r11 = " content="
            r1.append(r11)
            okio.ByteString r11 = r6.readByteString()
            java.lang.String r11 = r11.hex()
            r1.append(r11)
            r11 = 8230(0x2026, float:1.1533E-41)
            r1.append(r11)
            java.lang.String r11 = r1.toString()
            r0.<init>(r11)
            throw r0
        L9e:
            java.lang.Long r11 = java.lang.Long.valueOf(r12)
            java.lang.String r12 = "limit < 0: "
            java.lang.String r11 = kotlin.jvm.internal.Intrinsics.stringPlus(r12, r11)
            java.lang.IllegalArgumentException r12 = new java.lang.IllegalArgumentException
            java.lang.String r11 = r11.toString()
            r12.<init>(r11)
            java.lang.Throwable r12 = (java.lang.Throwable) r12
            throw r12
    }

    public static final long commonResizeBuffer(okio.Buffer.UnsafeCursor r16, long r17) {
            r0 = r16
            r1 = r17
            java.lang.String r3 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r3)
            okio.Buffer r3 = r0.buffer
            if (r3 == 0) goto Lbb
            boolean r4 = r0.readWrite
            if (r4 == 0) goto Lad
            long r4 = r3.size()
            int r6 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
            r8 = 1
            r9 = 0
            if (r6 > 0) goto L74
            int r6 = (r1 > r9 ? 1 : (r1 == r9 ? 0 : -1))
            if (r6 < 0) goto L22
            r7 = r8
            goto L23
        L22:
            r7 = 0
        L23:
            if (r7 == 0) goto L5e
            long r6 = r4 - r1
        L27:
            int r8 = (r6 > r9 ? 1 : (r6 == r9 ? 0 : -1))
            if (r8 <= 0) goto L50
            okio.Segment r8 = r3.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r8)
            okio.Segment r8 = r8.prev
            kotlin.jvm.internal.Intrinsics.checkNotNull(r8)
            int r11 = r8.limit
            int r12 = r8.pos
            int r11 = r11 - r12
            long r11 = (long) r11
            int r13 = (r11 > r6 ? 1 : (r11 == r6 ? 0 : -1))
            if (r13 > 0) goto L4a
            okio.Segment r13 = r8.pop()
            r3.head = r13
            okio.SegmentPool.recycle(r8)
            long r6 = r6 - r11
            goto L27
        L4a:
            int r9 = r8.limit
            int r6 = (int) r6
            int r9 = r9 - r6
            r8.limit = r9
        L50:
            r6 = 0
            r0.setSegment$okio(r6)
            r0.offset = r1
            r0.data = r6
            r6 = -1
            r0.start = r6
            r0.end = r6
            goto La9
        L5e:
            java.lang.Long r0 = java.lang.Long.valueOf(r17)
            java.lang.String r1 = "newSize < 0: "
            java.lang.String r0 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r0)
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            throw r1
        L74:
            if (r6 <= 0) goto La9
            long r11 = r1 - r4
            r6 = r8
        L79:
            int r13 = (r11 > r9 ? 1 : (r11 == r9 ? 0 : -1))
            if (r13 <= 0) goto La9
            okio.Segment r13 = r3.writableSegment$okio(r8)
            int r14 = r13.limit
            int r14 = 8192 - r14
            long r14 = (long) r14
            long r14 = java.lang.Math.min(r11, r14)
            int r14 = (int) r14
            int r15 = r13.limit
            int r15 = r15 + r14
            r13.limit = r15
            long r7 = (long) r14
            long r11 = r11 - r7
            if (r6 == 0) goto La7
            r0.setSegment$okio(r13)
            r0.offset = r4
            byte[] r6 = r13.data
            r0.data = r6
            int r6 = r13.limit
            int r6 = r6 - r14
            r0.start = r6
            int r6 = r13.limit
            r0.end = r6
            r6 = 0
        La7:
            r8 = 1
            goto L79
        La9:
            r3.setSize$okio(r1)
            return r4
        Lad:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "resizeBuffer() only permitted for read/write buffers"
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            java.lang.Throwable r0 = (java.lang.Throwable) r0
            throw r0
        Lbb:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "not attached to a buffer"
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            java.lang.Throwable r0 = (java.lang.Throwable) r0
            throw r0
    }

    public static final int commonSeek(okio.Buffer.UnsafeCursor r11, long r12) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
            okio.Buffer r0 = r11.buffer
            if (r0 == 0) goto Lf7
            r1 = -1
            int r1 = (r12 > r1 ? 1 : (r12 == r1 ? 0 : -1))
            if (r1 < 0) goto Ld4
            long r2 = r0.size()
            int r2 = (r12 > r2 ? 1 : (r12 == r2 ? 0 : -1))
            if (r2 > 0) goto Ld4
            if (r1 == 0) goto Lc6
            long r1 = r0.size()
            int r1 = (r12 > r1 ? 1 : (r12 == r1 ? 0 : -1))
            if (r1 != 0) goto L23
            goto Lc6
        L23:
            r1 = 0
            long r3 = r0.size()
            okio.Segment r5 = r0.head
            okio.Segment r6 = r0.head
            okio.Segment r7 = r11.getSegment$okio()
            if (r7 == 0) goto L52
            long r7 = r11.offset
            int r9 = r11.start
            okio.Segment r10 = r11.getSegment$okio()
            kotlin.jvm.internal.Intrinsics.checkNotNull(r10)
            int r10 = r10.pos
            int r9 = r9 - r10
            long r9 = (long) r9
            long r7 = r7 - r9
            int r9 = (r7 > r12 ? 1 : (r7 == r12 ? 0 : -1))
            if (r9 <= 0) goto L4d
            okio.Segment r6 = r11.getSegment$okio()
            r3 = r7
            goto L52
        L4d:
            okio.Segment r5 = r11.getSegment$okio()
            r1 = r7
        L52:
            long r7 = r3 - r12
            long r9 = r12 - r1
            int r7 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r7 <= 0) goto L72
        L5a:
            kotlin.jvm.internal.Intrinsics.checkNotNull(r5)
            int r3 = r5.limit
            int r4 = r5.pos
            int r3 = r3 - r4
            long r3 = (long) r3
            long r3 = r3 + r1
            int r3 = (r12 > r3 ? 1 : (r12 == r3 ? 0 : -1))
            if (r3 < 0) goto L88
            int r3 = r5.limit
            int r4 = r5.pos
            int r3 = r3 - r4
            long r3 = (long) r3
            long r1 = r1 + r3
            okio.Segment r5 = r5.next
            goto L5a
        L72:
            int r1 = (r3 > r12 ? 1 : (r3 == r12 ? 0 : -1))
            if (r1 <= 0) goto L86
            kotlin.jvm.internal.Intrinsics.checkNotNull(r6)
            okio.Segment r6 = r6.prev
            kotlin.jvm.internal.Intrinsics.checkNotNull(r6)
            int r1 = r6.limit
            int r2 = r6.pos
            int r1 = r1 - r2
            long r1 = (long) r1
            long r3 = r3 - r1
            goto L72
        L86:
            r1 = r3
            r5 = r6
        L88:
            boolean r3 = r11.readWrite
            if (r3 == 0) goto La9
            kotlin.jvm.internal.Intrinsics.checkNotNull(r5)
            boolean r3 = r5.shared
            if (r3 == 0) goto La9
            okio.Segment r3 = r5.unsharedCopy()
            okio.Segment r4 = r0.head
            if (r4 != r5) goto L9d
            r0.head = r3
        L9d:
            okio.Segment r5 = r5.push(r3)
            okio.Segment r0 = r5.prev
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            r0.pop()
        La9:
            r11.setSegment$okio(r5)
            r11.offset = r12
            kotlin.jvm.internal.Intrinsics.checkNotNull(r5)
            byte[] r0 = r5.data
            r11.data = r0
            int r0 = r5.pos
            long r12 = r12 - r1
            int r12 = (int) r12
            int r0 = r0 + r12
            r11.start = r0
            int r12 = r5.limit
            r11.end = r12
            int r12 = r11.end
            int r11 = r11.start
            int r12 = r12 - r11
            return r12
        Lc6:
            r0 = 0
            r11.setSegment$okio(r0)
            r11.offset = r12
            r11.data = r0
            r12 = -1
            r11.start = r12
            r11.end = r12
            return r12
        Ld4:
            java.lang.ArrayIndexOutOfBoundsException r11 = new java.lang.ArrayIndexOutOfBoundsException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "offset="
            r1.append(r2)
            r1.append(r12)
            java.lang.String r12 = " > size="
            r1.append(r12)
            long r12 = r0.size()
            r1.append(r12)
            java.lang.String r12 = r1.toString()
            r11.<init>(r12)
            throw r11
        Lf7:
            java.lang.IllegalStateException r11 = new java.lang.IllegalStateException
            java.lang.String r12 = "not attached to a buffer"
            java.lang.String r12 = r12.toString()
            r11.<init>(r12)
            java.lang.Throwable r11 = (java.lang.Throwable) r11
            throw r11
    }

    public static final int commonSelect(okio.Buffer r3, okio.Options r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "options"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r0 = 0
            r1 = 2
            r2 = 0
            int r0 = selectPrefix$default(r3, r4, r0, r1, r2)
            r1 = -1
            if (r0 != r1) goto L15
            return r1
        L15:
            okio.ByteString[] r4 = r4.getByteStrings$okio()
            r4 = r4[r0]
            int r4 = r4.size()
            long r1 = (long) r4
            r3.skip(r1)
            return r0
    }

    public static final void commonSkip(okio.Buffer r6, long r7) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
        L5:
            r0 = 0
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r0 <= 0) goto L3f
            okio.Segment r0 = r6.head
            if (r0 == 0) goto L39
            int r1 = r0.limit
            int r2 = r0.pos
            int r1 = r1 - r2
            long r1 = (long) r1
            long r1 = java.lang.Math.min(r7, r1)
            int r1 = (int) r1
            long r2 = r6.size()
            long r4 = (long) r1
            long r2 = r2 - r4
            r6.setSize$okio(r2)
            long r7 = r7 - r4
            int r2 = r0.pos
            int r2 = r2 + r1
            r0.pos = r2
            int r1 = r0.pos
            int r2 = r0.limit
            if (r1 != r2) goto L5
            okio.Segment r1 = r0.pop()
            r6.head = r1
            okio.SegmentPool.recycle(r0)
            goto L5
        L39:
            java.io.EOFException r6 = new java.io.EOFException
            r6.<init>()
            throw r6
        L3f:
            return
    }

    public static final okio.ByteString commonSnapshot(okio.Buffer r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            long r0 = r4.size()
            r2 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto L12
            r0 = 1
            goto L13
        L12:
            r0 = 0
        L13:
            if (r0 == 0) goto L1f
            long r0 = r4.size()
            int r0 = (int) r0
            okio.ByteString r4 = r4.snapshot(r0)
            return r4
        L1f:
            long r0 = r4.size()
            java.lang.Long r4 = java.lang.Long.valueOf(r0)
            java.lang.String r0 = "size > Int.MAX_VALUE: "
            java.lang.String r4 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r4)
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r4 = r4.toString()
            r0.<init>(r4)
            java.lang.Throwable r0 = (java.lang.Throwable) r0
            throw r0
    }

    public static final okio.ByteString commonSnapshot(okio.Buffer r6, int r7) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            if (r7 != 0) goto La
            okio.ByteString r6 = okio.ByteString.EMPTY
            return r6
        La:
            long r0 = r6.size()
            r2 = 0
            long r4 = (long) r7
            okio._UtilKt.checkOffsetAndCount(r0, r2, r4)
            okio.Segment r0 = r6.head
            r1 = 0
            r2 = r1
            r3 = r2
        L19:
            if (r2 >= r7) goto L37
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            int r4 = r0.limit
            int r5 = r0.pos
            if (r4 == r5) goto L2f
            int r4 = r0.limit
            int r5 = r0.pos
            int r4 = r4 - r5
            int r2 = r2 + r4
            int r3 = r3 + 1
            okio.Segment r0 = r0.next
            goto L19
        L2f:
            java.lang.AssertionError r6 = new java.lang.AssertionError
            java.lang.String r7 = "s.limit == s.pos"
            r6.<init>(r7)
            throw r6
        L37:
            byte[][] r0 = new byte[r3][]
            int r3 = r3 * 2
            int[] r2 = new int[r3]
            okio.Segment r6 = r6.head
            r3 = r1
        L40:
            if (r1 >= r7) goto L65
            kotlin.jvm.internal.Intrinsics.checkNotNull(r6)
            byte[] r4 = r6.data
            r0[r3] = r4
            int r4 = r6.limit
            int r5 = r6.pos
            int r4 = r4 - r5
            int r1 = r1 + r4
            int r4 = java.lang.Math.min(r1, r7)
            r2[r3] = r4
            r4 = r0
            java.lang.Object[] r4 = (java.lang.Object[]) r4
            int r4 = r4.length
            int r4 = r4 + r3
            int r5 = r6.pos
            r2[r4] = r5
            r4 = 1
            r6.shared = r4
            int r3 = r3 + r4
            okio.Segment r6 = r6.next
            goto L40
        L65:
            okio.SegmentedByteString r6 = new okio.SegmentedByteString
            r6.<init>(r0, r2)
            okio.ByteString r6 = (okio.ByteString) r6
            return r6
    }

    public static final okio.Segment commonWritableSegment(okio.Buffer r2, int r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = 8192(0x2000, float:1.148E-41)
            r1 = 1
            if (r3 < r1) goto Ld
            if (r3 > r0) goto Ld
            goto Le
        Ld:
            r1 = 0
        Le:
            if (r1 == 0) goto L3b
            okio.Segment r1 = r2.head
            if (r1 != 0) goto L1f
            okio.Segment r3 = okio.SegmentPool.take()
            r2.head = r3
            r3.prev = r3
            r3.next = r3
            return r3
        L1f:
            okio.Segment r2 = r2.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            okio.Segment r2 = r2.prev
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            int r1 = r2.limit
            int r1 = r1 + r3
            if (r1 > r0) goto L32
            boolean r3 = r2.owner
            if (r3 != 0) goto L3a
        L32:
            okio.Segment r3 = okio.SegmentPool.take()
            okio.Segment r2 = r2.push(r3)
        L3a:
            return r2
        L3b:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "unexpected capacity"
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    public static final okio.Buffer commonWrite(okio.Buffer r1, okio.ByteString r2, int r3, int r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "byteString"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r2.write$okio(r1, r3, r4)
            return r1
    }

    public static final okio.Buffer commonWrite(okio.Buffer r4, okio.Source r5, long r6) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
        La:
            r0 = 0
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 <= 0) goto L22
            long r0 = r5.read(r4, r6)
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L1c
            long r6 = r6 - r0
            goto La
        L1c:
            java.io.EOFException r4 = new java.io.EOFException
            r4.<init>()
            throw r4
        L22:
            return r4
    }

    public static final okio.Buffer commonWrite(okio.Buffer r2, byte[] r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            int r0 = r3.length
            r1 = 0
            okio.Buffer r2 = r2.write(r3, r1, r0)
            return r2
    }

    public static final okio.Buffer commonWrite(okio.Buffer r9, byte[] r10, int r11, int r12) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            int r0 = r10.length
            long r1 = (long) r0
            long r3 = (long) r11
            long r7 = (long) r12
            r5 = r7
            okio._UtilKt.checkOffsetAndCount(r1, r3, r5)
            int r12 = r12 + r11
        L13:
            if (r11 >= r12) goto L34
            r0 = 1
            okio.Segment r0 = r9.writableSegment$okio(r0)
            int r1 = r12 - r11
            int r2 = r0.limit
            int r2 = 8192 - r2
            int r1 = java.lang.Math.min(r1, r2)
            byte[] r2 = r0.data
            int r3 = r0.limit
            int r4 = r11 + r1
            kotlin.collections.ArraysKt.copyInto(r10, r2, r3, r11, r4)
            int r11 = r0.limit
            int r11 = r11 + r1
            r0.limit = r11
            r11 = r4
            goto L13
        L34:
            long r10 = r9.size()
            long r10 = r10 + r7
            r9.setSize$okio(r10)
            return r9
    }

    public static final void commonWrite(okio.Buffer r8, okio.Buffer r9, long r10) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            r0 = 0
            if (r9 == r8) goto Lf
            r1 = 1
            goto L10
        Lf:
            r1 = r0
        L10:
            if (r1 == 0) goto Lc6
            long r2 = r9.size()
            r4 = 0
            r6 = r10
            okio._UtilKt.checkOffsetAndCount(r2, r4, r6)
        L1c:
            r1 = 0
            int r1 = (r10 > r1 ? 1 : (r10 == r1 ? 0 : -1))
            if (r1 <= 0) goto Lc5
            okio.Segment r1 = r9.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            int r1 = r1.limit
            okio.Segment r2 = r9.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            int r2 = r2.pos
            int r1 = r1 - r2
            long r1 = (long) r1
            int r1 = (r10 > r1 ? 1 : (r10 == r1 ? 0 : -1))
            if (r1 >= 0) goto L83
            okio.Segment r1 = r8.head
            if (r1 == 0) goto L42
            okio.Segment r1 = r8.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            okio.Segment r1 = r1.prev
            goto L43
        L42:
            r1 = 0
        L43:
            if (r1 == 0) goto L77
            boolean r2 = r1.owner
            if (r2 == 0) goto L77
            int r2 = r1.limit
            long r2 = (long) r2
            long r2 = r2 + r10
            boolean r4 = r1.shared
            if (r4 == 0) goto L53
            r4 = r0
            goto L55
        L53:
            int r4 = r1.pos
        L55:
            long r4 = (long) r4
            long r2 = r2 - r4
            r4 = 8192(0x2000, double:4.0474E-320)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 > 0) goto L77
            okio.Segment r0 = r9.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            int r2 = (int) r10
            r0.writeTo(r1, r2)
            long r0 = r9.size()
            long r0 = r0 - r10
            r9.setSize$okio(r0)
            long r0 = r8.size()
            long r0 = r0 + r10
            r8.setSize$okio(r0)
            return
        L77:
            okio.Segment r1 = r9.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            int r2 = (int) r10
            okio.Segment r1 = r1.split(r2)
            r9.head = r1
        L83:
            okio.Segment r1 = r9.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            int r2 = r1.limit
            int r3 = r1.pos
            int r2 = r2 - r3
            long r2 = (long) r2
            okio.Segment r4 = r1.pop()
            r9.head = r4
            okio.Segment r4 = r8.head
            if (r4 != 0) goto La1
            r8.head = r1
            r1.prev = r1
            okio.Segment r4 = r1.prev
            r1.next = r4
            goto Lb2
        La1:
            okio.Segment r4 = r8.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r4)
            okio.Segment r4 = r4.prev
            kotlin.jvm.internal.Intrinsics.checkNotNull(r4)
            okio.Segment r1 = r4.push(r1)
            r1.compact()
        Lb2:
            long r4 = r9.size()
            long r4 = r4 - r2
            r9.setSize$okio(r4)
            long r4 = r8.size()
            long r4 = r4 + r2
            r8.setSize$okio(r4)
            long r10 = r10 - r2
            goto L1c
        Lc5:
            return
        Lc6:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r9 = "source == this"
            java.lang.String r9 = r9.toString()
            r8.<init>(r9)
            java.lang.Throwable r8 = (java.lang.Throwable) r8
            throw r8
    }

    public static okio.Buffer commonWrite$default(okio.Buffer r0, okio.ByteString r1, int r2, int r3, int r4, java.lang.Object r5) {
            r5 = r4 & 2
            if (r5 == 0) goto L5
            r2 = 0
        L5:
            r4 = r4 & 4
            if (r4 == 0) goto Ld
            int r3 = r1.size()
        Ld:
            java.lang.String r4 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r4)
            java.lang.String r4 = "byteString"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r4)
            r1.write$okio(r0, r2, r3)
            return r0
    }

    public static final long commonWriteAll(okio.Buffer r6, okio.Source r7) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            r0 = 0
        Lc:
            r2 = 8192(0x2000, double:4.0474E-320)
            long r2 = r7.read(r6, r2)
            r4 = -1
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 != 0) goto L19
            return r0
        L19:
            long r0 = r0 + r2
            goto Lc
    }

    public static final okio.Buffer commonWriteByte(okio.Buffer r4, int r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r0 = 1
            okio.Segment r0 = r4.writableSegment$okio(r0)
            byte[] r1 = r0.data
            int r2 = r0.limit
            int r3 = r2 + 1
            r0.limit = r3
            byte r5 = (byte) r5
            r1[r2] = r5
            long r0 = r4.size()
            r2 = 1
            long r0 = r0 + r2
            r4.setSize$okio(r0)
            return r4
    }

    public static final okio.Buffer commonWriteDecimalLong(okio.Buffer r12, long r13) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
            r0 = 0
            int r2 = (r13 > r0 ? 1 : (r13 == r0 ? 0 : -1))
            if (r2 != 0) goto L12
            r13 = 48
            okio.Buffer r12 = r12.writeByte(r13)
            return r12
        L12:
            r3 = 0
            r4 = 1
            if (r2 >= 0) goto L23
            long r13 = -r13
            int r2 = (r13 > r0 ? 1 : (r13 == r0 ? 0 : -1))
            if (r2 >= 0) goto L22
            java.lang.String r13 = "-9223372036854775808"
            okio.Buffer r12 = r12.writeUtf8(r13)
            return r12
        L22:
            r3 = r4
        L23:
            r5 = 100000000(0x5f5e100, double:4.94065646E-316)
            int r2 = (r13 > r5 ? 1 : (r13 == r5 ? 0 : -1))
            r5 = 10
            if (r2 >= 0) goto L71
            r6 = 10000(0x2710, double:4.9407E-320)
            int r2 = (r13 > r6 ? 1 : (r13 == r6 ? 0 : -1))
            if (r2 >= 0) goto L4f
            r6 = 100
            int r2 = (r13 > r6 ? 1 : (r13 == r6 ? 0 : -1))
            if (r2 >= 0) goto L43
            r6 = 10
            int r2 = (r13 > r6 ? 1 : (r13 == r6 ? 0 : -1))
            if (r2 >= 0) goto L40
            goto Le8
        L40:
            r4 = 2
            goto Le8
        L43:
            r6 = 1000(0x3e8, double:4.94E-321)
            int r2 = (r13 > r6 ? 1 : (r13 == r6 ? 0 : -1))
            if (r2 >= 0) goto L4c
            r4 = 3
            goto Le8
        L4c:
            r4 = 4
            goto Le8
        L4f:
            r6 = 1000000(0xf4240, double:4.940656E-318)
            int r2 = (r13 > r6 ? 1 : (r13 == r6 ? 0 : -1))
            if (r2 >= 0) goto L63
            r6 = 100000(0x186a0, double:4.94066E-319)
            int r2 = (r13 > r6 ? 1 : (r13 == r6 ? 0 : -1))
            if (r2 >= 0) goto L60
            r4 = 5
            goto Le8
        L60:
            r4 = 6
            goto Le8
        L63:
            r6 = 10000000(0x989680, double:4.9406565E-317)
            int r2 = (r13 > r6 ? 1 : (r13 == r6 ? 0 : -1))
            if (r2 >= 0) goto L6d
            r4 = 7
            goto Le8
        L6d:
            r4 = 8
            goto Le8
        L71:
            r6 = 1000000000000(0xe8d4a51000, double:4.94065645841E-312)
            int r2 = (r13 > r6 ? 1 : (r13 == r6 ? 0 : -1))
            if (r2 >= 0) goto L9e
            r6 = 10000000000(0x2540be400, double:4.9406564584E-314)
            int r2 = (r13 > r6 ? 1 : (r13 == r6 ? 0 : -1))
            if (r2 >= 0) goto L8f
            r6 = 1000000000(0x3b9aca00, double:4.94065646E-315)
            int r2 = (r13 > r6 ? 1 : (r13 == r6 ? 0 : -1))
            if (r2 >= 0) goto L8d
            r4 = 9
            goto Le8
        L8d:
            r4 = r5
            goto Le8
        L8f:
            r6 = 100000000000(0x174876e800, double:4.9406564584E-313)
            int r2 = (r13 > r6 ? 1 : (r13 == r6 ? 0 : -1))
            if (r2 >= 0) goto L9b
            r4 = 11
            goto Le8
        L9b:
            r4 = 12
            goto Le8
        L9e:
            r6 = 1000000000000000(0x38d7ea4c68000, double:4.940656458412465E-309)
            int r2 = (r13 > r6 ? 1 : (r13 == r6 ? 0 : -1))
            if (r2 >= 0) goto Lc2
            r6 = 10000000000000(0x9184e72a000, double:4.9406564584125E-311)
            int r2 = (r13 > r6 ? 1 : (r13 == r6 ? 0 : -1))
            if (r2 >= 0) goto Lb3
            r4 = 13
            goto Le8
        Lb3:
            r6 = 100000000000000(0x5af3107a4000, double:4.94065645841247E-310)
            int r2 = (r13 > r6 ? 1 : (r13 == r6 ? 0 : -1))
            if (r2 >= 0) goto Lbf
            r4 = 14
            goto Le8
        Lbf:
            r4 = 15
            goto Le8
        Lc2:
            r6 = 100000000000000000(0x16345785d8a0000, double:5.620395787888205E-302)
            int r2 = (r13 > r6 ? 1 : (r13 == r6 ? 0 : -1))
            if (r2 >= 0) goto Lda
            r6 = 10000000000000000(0x2386f26fc10000, double:5.431165199810528E-308)
            int r2 = (r13 > r6 ? 1 : (r13 == r6 ? 0 : -1))
            if (r2 >= 0) goto Ld7
            r4 = 16
            goto Le8
        Ld7:
            r4 = 17
            goto Le8
        Lda:
            r6 = 1000000000000000000(0xde0b6b3a7640000, double:7.832953389245686E-242)
            int r2 = (r13 > r6 ? 1 : (r13 == r6 ? 0 : -1))
            if (r2 >= 0) goto Le6
            r4 = 18
            goto Le8
        Le6:
            r4 = 19
        Le8:
            if (r3 == 0) goto Lec
            int r4 = r4 + 1
        Lec:
            okio.Segment r2 = r12.writableSegment$okio(r4)
            byte[] r6 = r2.data
            int r7 = r2.limit
            int r7 = r7 + r4
        Lf5:
            int r8 = (r13 > r0 ? 1 : (r13 == r0 ? 0 : -1))
            if (r8 == 0) goto L109
            long r8 = (long) r5
            long r10 = r13 % r8
            int r10 = (int) r10
            int r7 = r7 + (-1)
            byte[] r11 = getHEX_DIGIT_BYTES()
            r10 = r11[r10]
            r6[r7] = r10
            long r13 = r13 / r8
            goto Lf5
        L109:
            if (r3 == 0) goto L112
            int r7 = r7 + (-1)
            r13 = 45
            byte r13 = (byte) r13
            r6[r7] = r13
        L112:
            int r13 = r2.limit
            int r13 = r13 + r4
            r2.limit = r13
            long r13 = r12.size()
            long r0 = (long) r4
            long r13 = r13 + r0
            r12.setSize$okio(r13)
            return r12
    }

    public static final okio.Buffer commonWriteHexadecimalUnsignedLong(okio.Buffer r12, long r13) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
            r0 = 0
            int r0 = (r13 > r0 ? 1 : (r13 == r0 ? 0 : -1))
            if (r0 != 0) goto L12
            r13 = 48
            okio.Buffer r12 = r12.writeByte(r13)
            return r12
        L12:
            r0 = 1
            long r1 = r13 >>> r0
            long r1 = r1 | r13
            r3 = 2
            long r4 = r1 >>> r3
            long r1 = r1 | r4
            r4 = 4
            long r5 = r1 >>> r4
            long r1 = r1 | r5
            r5 = 8
            long r6 = r1 >>> r5
            long r1 = r1 | r6
            r6 = 16
            long r7 = r1 >>> r6
            long r1 = r1 | r7
            r7 = 32
            long r8 = r1 >>> r7
            long r1 = r1 | r8
            long r8 = r1 >>> r0
            r10 = 6148914691236517205(0x5555555555555555, double:1.1945305291614955E103)
            long r8 = r8 & r10
            long r1 = r1 - r8
            long r8 = r1 >>> r3
            r10 = 3689348814741910323(0x3333333333333333, double:4.667261458395856E-62)
            long r8 = r8 & r10
            long r1 = r1 & r10
            long r8 = r8 + r1
            long r1 = r8 >>> r4
            long r1 = r1 + r8
            r8 = 1085102592571150095(0xf0f0f0f0f0f0f0f, double:3.815736827118017E-236)
            long r1 = r1 & r8
            long r8 = r1 >>> r5
            long r1 = r1 + r8
            long r5 = r1 >>> r6
            long r1 = r1 + r5
            r5 = 63
            long r8 = r1 & r5
            long r1 = r1 >>> r7
            long r1 = r1 & r5
            long r8 = r8 + r1
            r1 = 3
            long r1 = (long) r1
            long r8 = r8 + r1
            long r1 = (long) r4
            long r8 = r8 / r1
            int r1 = (int) r8
            okio.Segment r2 = r12.writableSegment$okio(r1)
            byte[] r3 = r2.data
            int r5 = r2.limit
            int r5 = r5 + r1
            int r5 = r5 - r0
            int r0 = r2.limit
        L68:
            if (r5 < r0) goto L7a
            byte[] r6 = getHEX_DIGIT_BYTES()
            r7 = 15
            long r7 = r7 & r13
            int r7 = (int) r7
            r6 = r6[r7]
            r3[r5] = r6
            long r13 = r13 >>> r4
            int r5 = r5 + (-1)
            goto L68
        L7a:
            int r13 = r2.limit
            int r13 = r13 + r1
            r2.limit = r13
            long r13 = r12.size()
            long r0 = (long) r1
            long r13 = r13 + r0
            r12.setSize$okio(r13)
            return r12
    }

    public static final okio.Buffer commonWriteInt(okio.Buffer r5, int r6) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            r0 = 4
            okio.Segment r0 = r5.writableSegment$okio(r0)
            byte[] r1 = r0.data
            int r2 = r0.limit
            int r3 = r2 + 1
            int r4 = r6 >>> 24
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r1[r2] = r4
            int r2 = r3 + 1
            int r4 = r6 >>> 16
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r1[r3] = r4
            int r3 = r2 + 1
            int r4 = r6 >>> 8
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r1[r2] = r4
            int r2 = r3 + 1
            r6 = r6 & 255(0xff, float:3.57E-43)
            byte r6 = (byte) r6
            r1[r3] = r6
            r0.limit = r2
            long r0 = r5.size()
            r2 = 4
            long r0 = r0 + r2
            r5.setSize$okio(r0)
            return r5
    }

    public static final okio.Buffer commonWriteLong(okio.Buffer r9, long r10) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            r0 = 8
            okio.Segment r1 = r9.writableSegment$okio(r0)
            byte[] r2 = r1.data
            int r3 = r1.limit
            int r4 = r3 + 1
            r5 = 56
            long r5 = r10 >>> r5
            r7 = 255(0xff, double:1.26E-321)
            long r5 = r5 & r7
            int r5 = (int) r5
            byte r5 = (byte) r5
            r2[r3] = r5
            int r3 = r4 + 1
            r5 = 48
            long r5 = r10 >>> r5
            long r5 = r5 & r7
            int r5 = (int) r5
            byte r5 = (byte) r5
            r2[r4] = r5
            int r4 = r3 + 1
            r5 = 40
            long r5 = r10 >>> r5
            long r5 = r5 & r7
            int r5 = (int) r5
            byte r5 = (byte) r5
            r2[r3] = r5
            int r3 = r4 + 1
            r5 = 32
            long r5 = r10 >>> r5
            long r5 = r5 & r7
            int r5 = (int) r5
            byte r5 = (byte) r5
            r2[r4] = r5
            int r4 = r3 + 1
            r5 = 24
            long r5 = r10 >>> r5
            long r5 = r5 & r7
            int r5 = (int) r5
            byte r5 = (byte) r5
            r2[r3] = r5
            int r3 = r4 + 1
            r5 = 16
            long r5 = r10 >>> r5
            long r5 = r5 & r7
            int r5 = (int) r5
            byte r5 = (byte) r5
            r2[r4] = r5
            int r4 = r3 + 1
            long r5 = r10 >>> r0
            long r5 = r5 & r7
            int r0 = (int) r5
            byte r0 = (byte) r0
            r2[r3] = r0
            int r0 = r4 + 1
            long r10 = r10 & r7
            int r10 = (int) r10
            byte r10 = (byte) r10
            r2[r4] = r10
            r1.limit = r0
            long r10 = r9.size()
            r0 = 8
            long r10 = r10 + r0
            r9.setSize$okio(r10)
            return r9
    }

    public static final okio.Buffer commonWriteShort(okio.Buffer r5, int r6) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            r0 = 2
            okio.Segment r0 = r5.writableSegment$okio(r0)
            byte[] r1 = r0.data
            int r2 = r0.limit
            int r3 = r2 + 1
            int r4 = r6 >>> 8
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r1[r2] = r4
            int r2 = r3 + 1
            r6 = r6 & 255(0xff, float:3.57E-43)
            byte r6 = (byte) r6
            r1[r3] = r6
            r0.limit = r2
            long r0 = r5.size()
            r2 = 2
            long r0 = r0 + r2
            r5.setSize$okio(r0)
            return r5
    }

    public static final okio.Buffer commonWriteUtf8(okio.Buffer r12, java.lang.String r13, int r14, int r15) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
            java.lang.String r0 = "string"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r13, r0)
            r0 = 0
            r1 = 1
            if (r14 < 0) goto L10
            r2 = r1
            goto L11
        L10:
            r2 = r0
        L11:
            if (r2 == 0) goto L19f
            if (r15 < r14) goto L17
            r2 = r1
            goto L18
        L17:
            r2 = r0
        L18:
            if (r2 == 0) goto L17a
            int r2 = r13.length()
            if (r15 > r2) goto L22
            r2 = r1
            goto L23
        L22:
            r2 = r0
        L23:
            if (r2 == 0) goto L151
        L25:
            if (r14 >= r15) goto L150
            char r2 = r13.charAt(r14)
            r3 = 128(0x80, float:1.8E-43)
            if (r2 >= r3) goto L68
            okio.Segment r4 = r12.writableSegment$okio(r1)
            byte[] r5 = r4.data
            int r6 = r4.limit
            int r6 = r6 - r14
            int r7 = 8192 - r6
            int r7 = java.lang.Math.min(r15, r7)
            int r8 = r14 + 1
            int r14 = r14 + r6
            byte r2 = (byte) r2
            r5[r14] = r2
        L44:
            r14 = r8
            if (r14 >= r7) goto L55
            char r2 = r13.charAt(r14)
            if (r2 < r3) goto L4e
            goto L55
        L4e:
            int r8 = r14 + 1
            int r14 = r14 + r6
            byte r2 = (byte) r2
            r5[r14] = r2
            goto L44
        L55:
            int r6 = r6 + r14
            int r2 = r4.limit
            int r6 = r6 - r2
            int r2 = r4.limit
            int r2 = r2 + r6
            r4.limit = r2
            long r2 = r12.size()
            long r4 = (long) r6
            long r2 = r2 + r4
            r12.setSize$okio(r2)
            goto L25
        L68:
            r4 = 2048(0x800, float:2.87E-42)
            r5 = 2
            if (r2 >= r4) goto L99
            okio.Segment r4 = r12.writableSegment$okio(r5)
            byte[] r6 = r4.data
            int r7 = r4.limit
            int r8 = r2 >> 6
            r8 = r8 | 192(0xc0, float:2.69E-43)
            byte r8 = (byte) r8
            r6[r7] = r8
            byte[] r6 = r4.data
            int r7 = r4.limit
            int r7 = r7 + r1
            r2 = r2 & 63
            r2 = r2 | r3
            byte r2 = (byte) r2
            r6[r7] = r2
            int r2 = r4.limit
            int r2 = r2 + r5
            r4.limit = r2
            long r2 = r12.size()
            r4 = 2
            long r2 = r2 + r4
            r12.setSize$okio(r2)
        L96:
            int r14 = r14 + 1
            goto L25
        L99:
            r4 = 55296(0xd800, float:7.7486E-41)
            r6 = 3
            r7 = 63
            if (r2 < r4) goto L119
            r4 = 57343(0xdfff, float:8.0355E-41)
            if (r2 <= r4) goto La8
            goto L119
        La8:
            int r8 = r14 + 1
            if (r8 >= r15) goto Lb1
            char r9 = r13.charAt(r8)
            goto Lb2
        Lb1:
            r9 = r0
        Lb2:
            r10 = 56319(0xdbff, float:7.892E-41)
            if (r2 > r10) goto L113
            r10 = 56320(0xdc00, float:7.8921E-41)
            if (r10 > r9) goto Lc0
            if (r9 > r4) goto Lc0
            r4 = r1
            goto Lc1
        Lc0:
            r4 = r0
        Lc1:
            if (r4 != 0) goto Lc4
            goto L113
        Lc4:
            r4 = 65536(0x10000, float:9.1835E-41)
            r2 = r2 & 1023(0x3ff, float:1.434E-42)
            int r2 = r2 << 10
            r8 = r9 & 1023(0x3ff, float:1.434E-42)
            r2 = r2 | r8
            int r2 = r2 + r4
            r4 = 4
            okio.Segment r8 = r12.writableSegment$okio(r4)
            byte[] r9 = r8.data
            int r10 = r8.limit
            int r11 = r2 >> 18
            r11 = r11 | 240(0xf0, float:3.36E-43)
            byte r11 = (byte) r11
            r9[r10] = r11
            byte[] r9 = r8.data
            int r10 = r8.limit
            int r10 = r10 + r1
            int r11 = r2 >> 12
            r11 = r11 & r7
            r11 = r11 | r3
            byte r11 = (byte) r11
            r9[r10] = r11
            byte[] r9 = r8.data
            int r10 = r8.limit
            int r10 = r10 + r5
            int r5 = r2 >> 6
            r5 = r5 & r7
            r5 = r5 | r3
            byte r5 = (byte) r5
            r9[r10] = r5
            byte[] r5 = r8.data
            int r9 = r8.limit
            int r9 = r9 + r6
            r2 = r2 & r7
            r2 = r2 | r3
            byte r2 = (byte) r2
            r5[r9] = r2
            int r2 = r8.limit
            int r2 = r2 + r4
            r8.limit = r2
            long r2 = r12.size()
            r4 = 4
            long r2 = r2 + r4
            r12.setSize$okio(r2)
            int r14 = r14 + 2
            goto L25
        L113:
            r12.writeByte(r7)
            r14 = r8
            goto L25
        L119:
            okio.Segment r4 = r12.writableSegment$okio(r6)
            byte[] r8 = r4.data
            int r9 = r4.limit
            int r10 = r2 >> 12
            r10 = r10 | 224(0xe0, float:3.14E-43)
            byte r10 = (byte) r10
            r8[r9] = r10
            byte[] r8 = r4.data
            int r9 = r4.limit
            int r9 = r9 + r1
            int r10 = r2 >> 6
            r7 = r7 & r10
            r7 = r7 | r3
            byte r7 = (byte) r7
            r8[r9] = r7
            byte[] r7 = r4.data
            int r8 = r4.limit
            int r8 = r8 + r5
            r2 = r2 & 63
            r2 = r2 | r3
            byte r2 = (byte) r2
            r7[r8] = r2
            int r2 = r4.limit
            int r2 = r2 + r6
            r4.limit = r2
            long r2 = r12.size()
            r4 = 3
            long r2 = r2 + r4
            r12.setSize$okio(r2)
            goto L96
        L150:
            return r12
        L151:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r14 = "endIndex > string.length: "
            r12.append(r14)
            r12.append(r15)
            java.lang.String r14 = " > "
            r12.append(r14)
            int r13 = r13.length()
            r12.append(r13)
            java.lang.String r12 = r12.toString()
            java.lang.IllegalArgumentException r13 = new java.lang.IllegalArgumentException
            java.lang.String r12 = r12.toString()
            r13.<init>(r12)
            java.lang.Throwable r13 = (java.lang.Throwable) r13
            throw r13
        L17a:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r13 = "endIndex < beginIndex: "
            r12.append(r13)
            r12.append(r15)
            java.lang.String r13 = " < "
            r12.append(r13)
            r12.append(r14)
            java.lang.String r12 = r12.toString()
            java.lang.IllegalArgumentException r13 = new java.lang.IllegalArgumentException
            java.lang.String r12 = r12.toString()
            r13.<init>(r12)
            java.lang.Throwable r13 = (java.lang.Throwable) r13
            throw r13
        L19f:
            java.lang.Integer r12 = java.lang.Integer.valueOf(r14)
            java.lang.String r13 = "beginIndex < 0: "
            java.lang.String r12 = kotlin.jvm.internal.Intrinsics.stringPlus(r13, r12)
            java.lang.IllegalArgumentException r13 = new java.lang.IllegalArgumentException
            java.lang.String r12 = r12.toString()
            r13.<init>(r12)
            java.lang.Throwable r13 = (java.lang.Throwable) r13
            throw r13
    }

    public static final okio.Buffer commonWriteUtf8CodePoint(okio.Buffer r10, int r11) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            r0 = 128(0x80, float:1.8E-43)
            if (r11 >= r0) goto Le
            r10.writeByte(r11)
            goto Ld3
        Le:
            r1 = 2048(0x800, float:2.87E-42)
            r2 = 1
            r3 = 2
            r4 = 63
            if (r11 >= r1) goto L40
            okio.Segment r1 = r10.writableSegment$okio(r3)
            byte[] r5 = r1.data
            int r6 = r1.limit
            int r7 = r11 >> 6
            r7 = r7 | 192(0xc0, float:2.69E-43)
            byte r7 = (byte) r7
            r5[r6] = r7
            byte[] r5 = r1.data
            int r6 = r1.limit
            int r6 = r6 + r2
            r11 = r11 & r4
            r11 = r11 | r0
            byte r11 = (byte) r11
            r5[r6] = r11
            int r11 = r1.limit
            int r11 = r11 + r3
            r1.limit = r11
            long r0 = r10.size()
            r2 = 2
            long r0 = r0 + r2
            r10.setSize$okio(r0)
            goto Ld3
        L40:
            r1 = 55296(0xd800, float:7.7486E-41)
            r5 = 0
            if (r1 > r11) goto L4c
            r1 = 57343(0xdfff, float:8.0355E-41)
            if (r11 > r1) goto L4c
            r5 = r2
        L4c:
            if (r5 == 0) goto L53
            r10.writeByte(r4)
            goto Ld3
        L53:
            r1 = 65536(0x10000, float:9.1835E-41)
            r5 = 3
            if (r11 >= r1) goto L8d
            okio.Segment r1 = r10.writableSegment$okio(r5)
            byte[] r6 = r1.data
            int r7 = r1.limit
            int r8 = r11 >> 12
            r8 = r8 | 224(0xe0, float:3.14E-43)
            byte r8 = (byte) r8
            r6[r7] = r8
            byte[] r6 = r1.data
            int r7 = r1.limit
            int r7 = r7 + r2
            int r2 = r11 >> 6
            r2 = r2 & r4
            r2 = r2 | r0
            byte r2 = (byte) r2
            r6[r7] = r2
            byte[] r2 = r1.data
            int r6 = r1.limit
            int r6 = r6 + r3
            r11 = r11 & r4
            r11 = r11 | r0
            byte r11 = (byte) r11
            r2[r6] = r11
            int r11 = r1.limit
            int r11 = r11 + r5
            r1.limit = r11
            long r0 = r10.size()
            r2 = 3
            long r0 = r0 + r2
            r10.setSize$okio(r0)
            goto Ld3
        L8d:
            r1 = 1114111(0x10ffff, float:1.561202E-39)
            if (r11 > r1) goto Ld4
            r1 = 4
            okio.Segment r6 = r10.writableSegment$okio(r1)
            byte[] r7 = r6.data
            int r8 = r6.limit
            int r9 = r11 >> 18
            r9 = r9 | 240(0xf0, float:3.36E-43)
            byte r9 = (byte) r9
            r7[r8] = r9
            byte[] r7 = r6.data
            int r8 = r6.limit
            int r8 = r8 + r2
            int r2 = r11 >> 12
            r2 = r2 & r4
            r2 = r2 | r0
            byte r2 = (byte) r2
            r7[r8] = r2
            byte[] r2 = r6.data
            int r7 = r6.limit
            int r7 = r7 + r3
            int r3 = r11 >> 6
            r3 = r3 & r4
            r3 = r3 | r0
            byte r3 = (byte) r3
            r2[r7] = r3
            byte[] r2 = r6.data
            int r3 = r6.limit
            int r3 = r3 + r5
            r11 = r11 & r4
            r11 = r11 | r0
            byte r11 = (byte) r11
            r2[r3] = r11
            int r11 = r6.limit
            int r11 = r11 + r1
            r6.limit = r11
            long r0 = r10.size()
            r2 = 4
            long r0 = r0 + r2
            r10.setSize$okio(r0)
        Ld3:
            return r10
        Ld4:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.String r11 = okio._UtilKt.toHexString(r11)
            java.lang.String r0 = "Unexpected code point: 0x"
            java.lang.String r11 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r11)
            r10.<init>(r11)
            throw r10
    }

    public static final byte[] getHEX_DIGIT_BYTES() {
            byte[] r0 = okio.internal._BufferKt.HEX_DIGIT_BYTES
            return r0
    }

    public static void getHEX_DIGIT_BYTES$annotations() {
            return
    }

    public static final boolean rangeEquals(okio.Segment r5, int r6, byte[] r7, int r8, int r9) {
            java.lang.String r0 = "segment"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.lang.String r0 = "bytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            int r0 = r5.limit
            byte[] r1 = r5.data
        Le:
            if (r8 >= r9) goto L2e
            if (r6 != r0) goto L21
            okio.Segment r5 = r5.next
            kotlin.jvm.internal.Intrinsics.checkNotNull(r5)
            byte[] r6 = r5.data
            int r0 = r5.pos
            int r1 = r5.limit
            r4 = r1
            r1 = r6
            r6 = r0
            r0 = r4
        L21:
            r2 = r1[r6]
            r3 = r7[r8]
            if (r2 == r3) goto L29
            r5 = 0
            return r5
        L29:
            int r6 = r6 + 1
            int r8 = r8 + 1
            goto Le
        L2e:
            r5 = 1
            return r5
    }

    public static final java.lang.String readUtf8Line(okio.Buffer r6, long r7) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            r0 = 0
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            r1 = 1
            if (r0 <= 0) goto L22
            long r3 = r7 - r1
            byte r0 = r6.getByte(r3)
            r5 = 13
            byte r5 = (byte) r5
            if (r0 != r5) goto L22
            java.lang.String r7 = r6.readUtf8(r3)
            r0 = 2
            r6.skip(r0)
            goto L29
        L22:
            java.lang.String r7 = r6.readUtf8(r7)
            r6.skip(r1)
        L29:
            return r7
    }

    public static final <T> T seek(okio.Buffer r5, long r6, kotlin.jvm.functions.Function2<? super okio.Segment, ? super java.lang.Long, ? extends T> r8) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.lang.String r0 = "lambda"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            okio.Segment r0 = r5.head
            if (r0 != 0) goto L1a
            r5 = 0
            r6 = -1
            java.lang.Long r6 = java.lang.Long.valueOf(r6)
            java.lang.Object r5 = r8.invoke(r5, r6)
            return r5
        L1a:
            long r1 = r5.size()
            long r1 = r1 - r6
            int r1 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r1 >= 0) goto L41
            long r1 = r5.size()
        L27:
            int r5 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r5 <= 0) goto L38
            okio.Segment r0 = r0.prev
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            int r5 = r0.limit
            int r3 = r0.pos
            int r5 = r5 - r3
            long r3 = (long) r5
            long r1 = r1 - r3
            goto L27
        L38:
            java.lang.Long r5 = java.lang.Long.valueOf(r1)
            java.lang.Object r5 = r8.invoke(r0, r5)
            return r5
        L41:
            r1 = 0
        L43:
            int r5 = r0.limit
            int r3 = r0.pos
            int r5 = r5 - r3
            long r3 = (long) r5
            long r3 = r3 + r1
            int r5 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r5 <= 0) goto L57
            java.lang.Long r5 = java.lang.Long.valueOf(r1)
            java.lang.Object r5 = r8.invoke(r0, r5)
            return r5
        L57:
            okio.Segment r0 = r0.next
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            r1 = r3
            goto L43
    }

    public static final int selectPrefix(okio.Buffer r17, okio.Options r18, boolean r19) {
            r0 = r17
            java.lang.String r1 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r1)
            java.lang.String r1 = "options"
            r2 = r18
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r1)
            okio.Segment r0 = r0.head
            r1 = -2
            r3 = -1
            if (r0 != 0) goto L19
            if (r19 == 0) goto L17
            goto L18
        L17:
            r1 = r3
        L18:
            return r1
        L19:
            byte[] r4 = r0.data
            int r5 = r0.pos
            int r6 = r0.limit
            int[] r2 = r18.getTrie$okio()
            r7 = 0
            r9 = r0
            r10 = r3
            r8 = r7
        L27:
            int r11 = r8 + 1
            r8 = r2[r8]
            int r12 = r11 + 1
            r11 = r2[r11]
            if (r11 == r3) goto L32
            r10 = r11
        L32:
            if (r9 != 0) goto L35
            goto L62
        L35:
            r11 = 0
            if (r8 >= 0) goto L82
            int r8 = r8 * (-1)
            int r13 = r12 + r8
        L3c:
            int r8 = r5 + 1
            r5 = r4[r5]
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r14 = r12 + 1
            r12 = r2[r12]
            if (r5 == r12) goto L49
            return r10
        L49:
            if (r14 != r13) goto L4d
            r5 = 1
            goto L4e
        L4d:
            r5 = r7
        L4e:
            if (r8 != r6) goto L6f
            kotlin.jvm.internal.Intrinsics.checkNotNull(r9)
            okio.Segment r4 = r9.next
            kotlin.jvm.internal.Intrinsics.checkNotNull(r4)
            int r6 = r4.pos
            byte[] r8 = r4.data
            int r9 = r4.limit
            if (r4 != r0) goto L69
            if (r5 != 0) goto L66
        L62:
            if (r19 == 0) goto L65
            return r1
        L65:
            return r10
        L66:
            r4 = r8
            r8 = r11
            goto L75
        L69:
            r16 = r8
            r8 = r4
            r4 = r16
            goto L75
        L6f:
            r16 = r9
            r9 = r6
            r6 = r8
            r8 = r16
        L75:
            if (r5 == 0) goto L7d
            r5 = r2[r14]
            r13 = r6
            r6 = r9
            r9 = r8
            goto La7
        L7d:
            r5 = r6
            r6 = r9
            r12 = r14
            r9 = r8
            goto L3c
        L82:
            int r13 = r5 + 1
            r5 = r4[r5]
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r14 = r12 + r8
        L8a:
            if (r12 != r14) goto L8d
            return r10
        L8d:
            r15 = r2[r12]
            if (r5 != r15) goto Lae
            int r12 = r12 + r8
            r5 = r2[r12]
            if (r13 != r6) goto La7
            okio.Segment r9 = r9.next
            kotlin.jvm.internal.Intrinsics.checkNotNull(r9)
            int r4 = r9.pos
            byte[] r6 = r9.data
            int r8 = r9.limit
            r13 = r4
            r4 = r6
            r6 = r8
            if (r9 != r0) goto La7
            r9 = r11
        La7:
            if (r5 < 0) goto Laa
            return r5
        Laa:
            int r8 = -r5
            r5 = r13
            goto L27
        Lae:
            int r12 = r12 + 1
            goto L8a
    }

    public static int selectPrefix$default(okio.Buffer r0, okio.Options r1, boolean r2, int r3, java.lang.Object r4) {
            r3 = r3 & 2
            if (r3 == 0) goto L5
            r2 = 0
        L5:
            int r0 = selectPrefix(r0, r1, r2)
            return r0
    }
}
