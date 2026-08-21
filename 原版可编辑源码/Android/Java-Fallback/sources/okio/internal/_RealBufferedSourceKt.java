package okio.internal;

@kotlin.Metadata(d1 = {"\u0000j\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u0005\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u0012\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0010\n\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\r\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u0080\b\u001a\r\u0010\u0003\u001a\u00020\u0004*\u00020\u0002H\u0080\b\u001a%\u0010\u0005\u001a\u00020\u0006*\u00020\u00022\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\u00062\u0006\u0010\n\u001a\u00020\u0006H\u0080\b\u001a\u001d\u0010\u0005\u001a\u00020\u0006*\u00020\u00022\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\t\u001a\u00020\u0006H\u0080\b\u001a\u001d\u0010\r\u001a\u00020\u0006*\u00020\u00022\u0006\u0010\u000e\u001a\u00020\f2\u0006\u0010\t\u001a\u00020\u0006H\u0080\b\u001a\r\u0010\u000f\u001a\u00020\u0010*\u00020\u0002H\u0080\b\u001a-\u0010\u0011\u001a\u00020\u0004*\u00020\u00022\u0006\u0010\u0012\u001a\u00020\u00062\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u0014H\u0080\b\u001a%\u0010\u0016\u001a\u00020\u0014*\u00020\u00022\u0006\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0012\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u0014H\u0080\b\u001a\u001d\u0010\u0016\u001a\u00020\u0006*\u00020\u00022\u0006\u0010\u0017\u001a\u00020\u00192\u0006\u0010\u0015\u001a\u00020\u0006H\u0080\b\u001a\u0015\u0010\u001a\u001a\u00020\u0006*\u00020\u00022\u0006\u0010\u0017\u001a\u00020\u001bH\u0080\b\u001a\r\u0010\u001c\u001a\u00020\b*\u00020\u0002H\u0080\b\u001a\r\u0010\u001d\u001a\u00020\u0018*\u00020\u0002H\u0080\b\u001a\u0015\u0010\u001d\u001a\u00020\u0018*\u00020\u00022\u0006\u0010\u0015\u001a\u00020\u0006H\u0080\b\u001a\r\u0010\u001e\u001a\u00020\f*\u00020\u0002H\u0080\b\u001a\u0015\u0010\u001e\u001a\u00020\f*\u00020\u00022\u0006\u0010\u0015\u001a\u00020\u0006H\u0080\b\u001a\r\u0010\u001f\u001a\u00020\u0006*\u00020\u0002H\u0080\b\u001a\u0015\u0010 \u001a\u00020\u0001*\u00020\u00022\u0006\u0010\u0017\u001a\u00020\u0018H\u0080\b\u001a\u001d\u0010 \u001a\u00020\u0001*\u00020\u00022\u0006\u0010\u0017\u001a\u00020\u00192\u0006\u0010\u0015\u001a\u00020\u0006H\u0080\b\u001a\r\u0010!\u001a\u00020\u0006*\u00020\u0002H\u0080\b\u001a\r\u0010\"\u001a\u00020\u0014*\u00020\u0002H\u0080\b\u001a\r\u0010#\u001a\u00020\u0014*\u00020\u0002H\u0080\b\u001a\r\u0010$\u001a\u00020\u0006*\u00020\u0002H\u0080\b\u001a\r\u0010%\u001a\u00020\u0006*\u00020\u0002H\u0080\b\u001a\r\u0010&\u001a\u00020'*\u00020\u0002H\u0080\b\u001a\r\u0010(\u001a\u00020'*\u00020\u0002H\u0080\b\u001a\r\u0010)\u001a\u00020**\u00020\u0002H\u0080\b\u001a\u0015\u0010)\u001a\u00020**\u00020\u00022\u0006\u0010\u0015\u001a\u00020\u0006H\u0080\b\u001a\r\u0010+\u001a\u00020\u0014*\u00020\u0002H\u0080\b\u001a\u000f\u0010,\u001a\u0004\u0018\u00010**\u00020\u0002H\u0080\b\u001a\u0015\u0010-\u001a\u00020**\u00020\u00022\u0006\u0010.\u001a\u00020\u0006H\u0080\b\u001a\u0015\u0010/\u001a\u00020\u0004*\u00020\u00022\u0006\u0010\u0015\u001a\u00020\u0006H\u0080\b\u001a\u0015\u00100\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\u0015\u001a\u00020\u0006H\u0080\b\u001a\u0015\u00101\u001a\u00020\u0014*\u00020\u00022\u0006\u00102\u001a\u000203H\u0080\b\u001a\u0015\u00104\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\u0015\u001a\u00020\u0006H\u0080\b\u001a\r\u00105\u001a\u000206*\u00020\u0002H\u0080\b\u001a\r\u00107\u001a\u00020**\u00020\u0002H\u0080\b¨\u00068"}, d2 = {"commonClose", "", "Lokio/RealBufferedSource;", "commonExhausted", "", "commonIndexOf", "", "b", "", "fromIndex", "toIndex", "bytes", "Lokio/ByteString;", "commonIndexOfElement", "targetBytes", "commonPeek", "Lokio/BufferedSource;", "commonRangeEquals", "offset", "bytesOffset", "", "byteCount", "commonRead", "sink", "", "Lokio/Buffer;", "commonReadAll", "Lokio/Sink;", "commonReadByte", "commonReadByteArray", "commonReadByteString", "commonReadDecimalLong", "commonReadFully", "commonReadHexadecimalUnsignedLong", "commonReadInt", "commonReadIntLe", "commonReadLong", "commonReadLongLe", "commonReadShort", "", "commonReadShortLe", "commonReadUtf8", "", "commonReadUtf8CodePoint", "commonReadUtf8Line", "commonReadUtf8LineStrict", "limit", "commonRequest", "commonRequire", "commonSelect", "options", "Lokio/Options;", "commonSkip", "commonTimeout", "Lokio/Timeout;", "commonToString", "okio"}, k = 2, mv = {1, 5, 1}, xi = 48)
public final class _RealBufferedSourceKt {
    public static final void commonClose(okio.RealBufferedSource r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            boolean r0 = r1.closed
            if (r0 == 0) goto La
            return
        La:
            r0 = 1
            r1.closed = r0
            okio.Source r0 = r1.source
            r0.close()
            okio.Buffer r1 = r1.bufferField
            r1.clear()
            return
    }

    public static final boolean commonExhausted(okio.RealBufferedSource r6) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            boolean r0 = r6.closed
            r1 = 1
            r0 = r0 ^ r1
            if (r0 == 0) goto L26
            okio.Buffer r0 = r6.bufferField
            boolean r0 = r0.exhausted()
            if (r0 == 0) goto L24
            okio.Source r0 = r6.source
            okio.Buffer r6 = r6.bufferField
            r2 = 8192(0x2000, double:4.0474E-320)
            long r2 = r0.read(r6, r2)
            r4 = -1
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 != 0) goto L24
            goto L25
        L24:
            r1 = 0
        L25:
            return r1
        L26:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            java.lang.String r0 = r0.toString()
            r6.<init>(r0)
            java.lang.Throwable r6 = (java.lang.Throwable) r6
            throw r6
    }

    public static final long commonIndexOf(okio.RealBufferedSource r10, byte r11, long r12, long r14) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            boolean r0 = r10.closed
            r1 = 1
            r0 = r0 ^ r1
            if (r0 == 0) goto L72
            r2 = 0
            int r0 = (r2 > r12 ? 1 : (r2 == r12 ? 0 : -1))
            r2 = 0
            if (r0 > 0) goto L17
            int r0 = (r12 > r14 ? 1 : (r12 == r14 ? 0 : -1))
            if (r0 > 0) goto L17
            goto L18
        L17:
            r1 = r2
        L18:
            if (r1 == 0) goto L4d
        L1a:
            int r0 = (r12 > r14 ? 1 : (r12 == r14 ? 0 : -1))
            r8 = -1
            if (r0 >= 0) goto L4c
            okio.Buffer r2 = r10.bufferField
            r3 = r11
            r4 = r12
            r6 = r14
            long r0 = r2.indexOf(r3, r4, r6)
            int r2 = (r0 > r8 ? 1 : (r0 == r8 ? 0 : -1))
            if (r2 == 0) goto L2e
            return r0
        L2e:
            okio.Buffer r0 = r10.bufferField
            long r0 = r0.size()
            int r2 = (r0 > r14 ? 1 : (r0 == r14 ? 0 : -1))
            if (r2 >= 0) goto L4c
            okio.Source r2 = r10.source
            okio.Buffer r3 = r10.bufferField
            r4 = 8192(0x2000, double:4.0474E-320)
            long r2 = r2.read(r3, r4)
            int r2 = (r2 > r8 ? 1 : (r2 == r8 ? 0 : -1))
            if (r2 != 0) goto L47
            goto L4c
        L47:
            long r12 = java.lang.Math.max(r12, r0)
            goto L1a
        L4c:
            return r8
        L4d:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "fromIndex="
            r10.append(r11)
            r10.append(r12)
            java.lang.String r11 = " toIndex="
            r10.append(r11)
            r10.append(r14)
            java.lang.String r10 = r10.toString()
            java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
            java.lang.String r10 = r10.toString()
            r11.<init>(r10)
            java.lang.Throwable r11 = (java.lang.Throwable) r11
            throw r11
        L72:
            java.lang.IllegalStateException r10 = new java.lang.IllegalStateException
            java.lang.String r11 = "closed"
            java.lang.String r11 = r11.toString()
            r10.<init>(r11)
            java.lang.Throwable r10 = (java.lang.Throwable) r10
            throw r10
    }

    public static final long commonIndexOf(okio.RealBufferedSource r8, okio.ByteString r9, long r10) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            java.lang.String r0 = "bytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            boolean r0 = r8.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L40
        L10:
            okio.Buffer r0 = r8.bufferField
            long r0 = r0.indexOf(r9, r10)
            r2 = -1
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L1d
            return r0
        L1d:
            okio.Buffer r0 = r8.bufferField
            long r0 = r0.size()
            okio.Source r4 = r8.source
            okio.Buffer r5 = r8.bufferField
            r6 = 8192(0x2000, double:4.0474E-320)
            long r4 = r4.read(r5, r6)
            int r4 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r4 != 0) goto L32
            return r2
        L32:
            int r2 = r9.size()
            long r2 = (long) r2
            long r0 = r0 - r2
            r2 = 1
            long r0 = r0 + r2
            long r10 = java.lang.Math.max(r10, r0)
            goto L10
        L40:
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
            java.lang.String r9 = "closed"
            java.lang.String r9 = r9.toString()
            r8.<init>(r9)
            java.lang.Throwable r8 = (java.lang.Throwable) r8
            throw r8
    }

    public static final long commonIndexOfElement(okio.RealBufferedSource r8, okio.ByteString r9, long r10) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            java.lang.String r0 = "targetBytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            boolean r0 = r8.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L37
        L10:
            okio.Buffer r0 = r8.bufferField
            long r0 = r0.indexOfElement(r9, r10)
            r2 = -1
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L1d
            return r0
        L1d:
            okio.Buffer r0 = r8.bufferField
            long r0 = r0.size()
            okio.Source r4 = r8.source
            okio.Buffer r5 = r8.bufferField
            r6 = 8192(0x2000, double:4.0474E-320)
            long r4 = r4.read(r5, r6)
            int r4 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r4 != 0) goto L32
            return r2
        L32:
            long r10 = java.lang.Math.max(r10, r0)
            goto L10
        L37:
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
            java.lang.String r9 = "closed"
            java.lang.String r9 = r9.toString()
            r8.<init>(r9)
            java.lang.Throwable r8 = (java.lang.Throwable) r8
            throw r8
    }

    public static final okio.BufferedSource commonPeek(okio.RealBufferedSource r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            okio.PeekSource r0 = new okio.PeekSource
            okio.BufferedSource r1 = (okio.BufferedSource) r1
            r0.<init>(r1)
            okio.Source r0 = (okio.Source) r0
            okio.BufferedSource r1 = okio.Okio.buffer(r0)
            return r1
    }

    public static final boolean commonRangeEquals(okio.RealBufferedSource r8, long r9, okio.ByteString r11, int r12, int r13) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            java.lang.String r0 = "bytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
            boolean r0 = r8.closed
            r1 = 1
            r0 = r0 ^ r1
            if (r0 == 0) goto L49
            r2 = 0
            int r0 = (r9 > r2 ? 1 : (r9 == r2 ? 0 : -1))
            r2 = 0
            if (r0 < 0) goto L48
            if (r12 < 0) goto L48
            if (r13 < 0) goto L48
            int r0 = r11.size()
            int r0 = r0 - r12
            if (r0 >= r13) goto L23
            goto L48
        L23:
            if (r13 <= 0) goto L47
            r0 = r2
        L26:
            int r3 = r0 + 1
            long r4 = (long) r0
            long r4 = r4 + r9
            r6 = 1
            long r6 = r6 + r4
            boolean r6 = r8.request(r6)
            if (r6 != 0) goto L34
            return r2
        L34:
            okio.Buffer r6 = r8.bufferField
            byte r4 = r6.getByte(r4)
            int r0 = r0 + r12
            byte r0 = r11.getByte(r0)
            if (r4 == r0) goto L42
            return r2
        L42:
            if (r3 < r13) goto L45
            goto L47
        L45:
            r0 = r3
            goto L26
        L47:
            return r1
        L48:
            return r2
        L49:
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
            java.lang.String r9 = "closed"
            java.lang.String r9 = r9.toString()
            r8.<init>(r9)
            java.lang.Throwable r8 = (java.lang.Throwable) r8
            throw r8
    }

    public static final int commonRead(okio.RealBufferedSource r9, byte[] r10, int r11, int r12) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            int r0 = r10.length
            long r1 = (long) r0
            long r3 = (long) r11
            long r7 = (long) r12
            r5 = r7
            okio._UtilKt.checkOffsetAndCount(r1, r3, r5)
            okio.Buffer r12 = r9.bufferField
            long r0 = r12.size()
            r2 = 0
            int r12 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r12 != 0) goto L30
            okio.Source r12 = r9.source
            okio.Buffer r0 = r9.bufferField
            r1 = 8192(0x2000, double:4.0474E-320)
            long r0 = r12.read(r0, r1)
            r2 = -1
            int r12 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r12 != 0) goto L30
            r9 = -1
            return r9
        L30:
            okio.Buffer r12 = r9.bufferField
            long r0 = r12.size()
            long r0 = java.lang.Math.min(r7, r0)
            int r12 = (int) r0
            okio.Buffer r9 = r9.bufferField
            int r9 = r9.read(r10, r11, r12)
            return r9
    }

    public static final long commonRead(okio.RealBufferedSource r4, okio.Buffer r5, long r6) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            r0 = 0
            int r2 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            r3 = 1
            if (r2 < 0) goto L13
            r2 = r3
            goto L14
        L13:
            r2 = 0
        L14:
            if (r2 == 0) goto L55
            boolean r2 = r4.closed
            r2 = r2 ^ r3
            if (r2 == 0) goto L47
            okio.Buffer r2 = r4.bufferField
            long r2 = r2.size()
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 != 0) goto L36
            okio.Source r0 = r4.source
            okio.Buffer r1 = r4.bufferField
            r2 = 8192(0x2000, double:4.0474E-320)
            long r0 = r0.read(r1, r2)
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L36
            return r2
        L36:
            okio.Buffer r0 = r4.bufferField
            long r0 = r0.size()
            long r6 = java.lang.Math.min(r6, r0)
            okio.Buffer r4 = r4.bufferField
            long r4 = r4.read(r5, r6)
            return r4
        L47:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r5 = "closed"
            java.lang.String r5 = r5.toString()
            r4.<init>(r5)
            java.lang.Throwable r4 = (java.lang.Throwable) r4
            throw r4
        L55:
            java.lang.Long r4 = java.lang.Long.valueOf(r6)
            java.lang.String r5 = "byteCount < 0: "
            java.lang.String r4 = kotlin.jvm.internal.Intrinsics.stringPlus(r5, r4)
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r4 = r4.toString()
            r5.<init>(r4)
            java.lang.Throwable r5 = (java.lang.Throwable) r5
            throw r5
    }

    public static final long commonReadAll(okio.RealBufferedSource r8, okio.Sink r9) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            r0 = 0
            r2 = r0
        Ld:
            okio.Source r4 = r8.source
            okio.Buffer r5 = r8.bufferField
            r6 = 8192(0x2000, double:4.0474E-320)
            long r4 = r4.read(r5, r6)
            r6 = -1
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 == 0) goto L2e
            okio.Buffer r4 = r8.bufferField
            long r4 = r4.completeSegmentByteCount()
            int r6 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r6 <= 0) goto Ld
            long r2 = r2 + r4
            okio.Buffer r6 = r8.bufferField
            r9.write(r6, r4)
            goto Ld
        L2e:
            okio.Buffer r4 = r8.bufferField
            long r4 = r4.size()
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 <= 0) goto L4a
            okio.Buffer r0 = r8.bufferField
            long r0 = r0.size()
            long r2 = r2 + r0
            okio.Buffer r0 = r8.bufferField
            okio.Buffer r8 = r8.bufferField
            long r4 = r8.size()
            r9.write(r0, r4)
        L4a:
            return r2
    }

    public static final byte commonReadByte(okio.RealBufferedSource r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = 1
            r2.require(r0)
            okio.Buffer r2 = r2.bufferField
            byte r2 = r2.readByte()
            return r2
    }

    public static final byte[] commonReadByteArray(okio.RealBufferedSource r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.Buffer r0 = r2.bufferField
            okio.Source r1 = r2.source
            r0.writeAll(r1)
            okio.Buffer r2 = r2.bufferField
            byte[] r2 = r2.readByteArray()
            return r2
    }

    public static final byte[] commonReadByteArray(okio.RealBufferedSource r1, long r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            r1.require(r2)
            okio.Buffer r1 = r1.bufferField
            byte[] r1 = r1.readByteArray(r2)
            return r1
    }

    public static final okio.ByteString commonReadByteString(okio.RealBufferedSource r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.Buffer r0 = r2.bufferField
            okio.Source r1 = r2.source
            r0.writeAll(r1)
            okio.Buffer r2 = r2.bufferField
            okio.ByteString r2 = r2.readByteString()
            return r2
    }

    public static final okio.ByteString commonReadByteString(okio.RealBufferedSource r1, long r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            r1.require(r2)
            okio.Buffer r1 = r1.bufferField
            okio.ByteString r1 = r1.readByteString(r2)
            return r1
    }

    public static final long commonReadDecimalLong(okio.RealBufferedSource r10) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            r0 = 1
            r10.require(r0)
            r2 = 0
            r4 = r2
        Ld:
            long r6 = r4 + r0
            boolean r8 = r10.request(r6)
            if (r8 == 0) goto L53
            okio.Buffer r8 = r10.bufferField
            byte r8 = r8.getByte(r4)
            r9 = 48
            byte r9 = (byte) r9
            if (r8 < r9) goto L25
            r9 = 57
            byte r9 = (byte) r9
            if (r8 <= r9) goto L2f
        L25:
            int r4 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r4 != 0) goto L31
            r5 = 45
            byte r5 = (byte) r5
            if (r8 == r5) goto L2f
            goto L31
        L2f:
            r4 = r6
            goto Ld
        L31:
            if (r4 == 0) goto L34
            goto L53
        L34:
            java.lang.NumberFormatException r10 = new java.lang.NumberFormatException
            r0 = 16
            int r0 = kotlin.text.CharsKt.checkRadix(r0)
            int r0 = kotlin.text.CharsKt.checkRadix(r0)
            java.lang.String r0 = java.lang.Integer.toString(r8, r0)
            java.lang.String r1 = "java.lang.Integer.toStri…(this, checkRadix(radix))"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            java.lang.String r1 = "Expected a digit or '-' but was 0x"
            java.lang.String r0 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r0)
            r10.<init>(r0)
            throw r10
        L53:
            okio.Buffer r10 = r10.bufferField
            long r0 = r10.readDecimalLong()
            return r0
    }

    public static final void commonReadFully(okio.RealBufferedSource r1, okio.Buffer r2, long r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.require(r3)     // Catch: java.io.EOFException -> L13
            okio.Buffer r1 = r1.bufferField
            r1.readFully(r2, r3)
            return
        L13:
            r3 = move-exception
            okio.Buffer r1 = r1.bufferField
            okio.Source r1 = (okio.Source) r1
            r2.writeAll(r1)
            throw r3
    }

    public static final void commonReadFully(okio.RealBufferedSource r6, byte[] r7) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            int r0 = r7.length     // Catch: java.io.EOFException -> L15
            long r0 = (long) r0     // Catch: java.io.EOFException -> L15
            r6.require(r0)     // Catch: java.io.EOFException -> L15
            okio.Buffer r6 = r6.bufferField
            r6.readFully(r7)
            return
        L15:
            r0 = move-exception
            r1 = 0
        L17:
            okio.Buffer r2 = r6.bufferField
            long r2 = r2.size()
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L3b
            okio.Buffer r2 = r6.bufferField
            okio.Buffer r3 = r6.bufferField
            long r3 = r3.size()
            int r3 = (int) r3
            int r2 = r2.read(r7, r1, r3)
            r3 = -1
            if (r2 == r3) goto L35
            int r1 = r1 + r2
            goto L17
        L35:
            java.lang.AssertionError r6 = new java.lang.AssertionError
            r6.<init>()
            throw r6
        L3b:
            throw r0
    }

    public static final long commonReadHexadecimalUnsignedLong(okio.RealBufferedSource r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            r0 = 1
            r5.require(r0)
            r0 = 0
        Lb:
            int r1 = r0 + 1
            long r2 = (long) r1
            boolean r2 = r5.request(r2)
            if (r2 == 0) goto L5e
            okio.Buffer r2 = r5.bufferField
            long r3 = (long) r0
            byte r2 = r2.getByte(r3)
            r3 = 48
            byte r3 = (byte) r3
            if (r2 < r3) goto L25
            r3 = 57
            byte r3 = (byte) r3
            if (r2 <= r3) goto L3a
        L25:
            r3 = 97
            byte r3 = (byte) r3
            if (r2 < r3) goto L2f
            r3 = 102(0x66, float:1.43E-43)
            byte r3 = (byte) r3
            if (r2 <= r3) goto L3a
        L2f:
            r3 = 65
            byte r3 = (byte) r3
            if (r2 < r3) goto L3c
            r3 = 70
            byte r3 = (byte) r3
            if (r2 <= r3) goto L3a
            goto L3c
        L3a:
            r0 = r1
            goto Lb
        L3c:
            if (r0 == 0) goto L3f
            goto L5e
        L3f:
            java.lang.NumberFormatException r5 = new java.lang.NumberFormatException
            r0 = 16
            int r0 = kotlin.text.CharsKt.checkRadix(r0)
            int r0 = kotlin.text.CharsKt.checkRadix(r0)
            java.lang.String r0 = java.lang.Integer.toString(r2, r0)
            java.lang.String r1 = "java.lang.Integer.toStri…(this, checkRadix(radix))"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            java.lang.String r1 = "Expected leading [0-9a-fA-F] character but was 0x"
            java.lang.String r0 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r0)
            r5.<init>(r0)
            throw r5
        L5e:
            okio.Buffer r5 = r5.bufferField
            long r0 = r5.readHexadecimalUnsignedLong()
            return r0
    }

    public static final int commonReadInt(okio.RealBufferedSource r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = 4
            r2.require(r0)
            okio.Buffer r2 = r2.bufferField
            int r2 = r2.readInt()
            return r2
    }

    public static final int commonReadIntLe(okio.RealBufferedSource r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = 4
            r2.require(r0)
            okio.Buffer r2 = r2.bufferField
            int r2 = r2.readIntLe()
            return r2
    }

    public static final long commonReadLong(okio.RealBufferedSource r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = 8
            r2.require(r0)
            okio.Buffer r2 = r2.bufferField
            long r0 = r2.readLong()
            return r0
    }

    public static final long commonReadLongLe(okio.RealBufferedSource r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = 8
            r2.require(r0)
            okio.Buffer r2 = r2.bufferField
            long r0 = r2.readLongLe()
            return r0
    }

    public static final short commonReadShort(okio.RealBufferedSource r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = 2
            r2.require(r0)
            okio.Buffer r2 = r2.bufferField
            short r2 = r2.readShort()
            return r2
    }

    public static final short commonReadShortLe(okio.RealBufferedSource r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = 2
            r2.require(r0)
            okio.Buffer r2 = r2.bufferField
            short r2 = r2.readShortLe()
            return r2
    }

    public static final java.lang.String commonReadUtf8(okio.RealBufferedSource r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.Buffer r0 = r2.bufferField
            okio.Source r1 = r2.source
            r0.writeAll(r1)
            okio.Buffer r2 = r2.bufferField
            java.lang.String r2 = r2.readUtf8()
            return r2
    }

    public static final java.lang.String commonReadUtf8(okio.RealBufferedSource r1, long r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            r1.require(r2)
            okio.Buffer r1 = r1.bufferField
            java.lang.String r1 = r1.readUtf8(r2)
            return r1
    }

    public static final int commonReadUtf8CodePoint(okio.RealBufferedSource r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r0 = 1
            r3.require(r0)
            okio.Buffer r0 = r3.bufferField
            r1 = 0
            byte r0 = r0.getByte(r1)
            r1 = r0 & 224(0xe0, float:3.14E-43)
            r2 = 192(0xc0, float:2.69E-43)
            if (r1 != r2) goto L1e
            r0 = 2
            r3.require(r0)
            goto L35
        L1e:
            r1 = r0 & 240(0xf0, float:3.36E-43)
            r2 = 224(0xe0, float:3.14E-43)
            if (r1 != r2) goto L2a
            r0 = 3
            r3.require(r0)
            goto L35
        L2a:
            r0 = r0 & 248(0xf8, float:3.48E-43)
            r1 = 240(0xf0, float:3.36E-43)
            if (r0 != r1) goto L35
            r0 = 4
            r3.require(r0)
        L35:
            okio.Buffer r3 = r3.bufferField
            int r3 = r3.readUtf8CodePoint()
            return r3
    }

    public static final java.lang.String commonReadUtf8Line(okio.RealBufferedSource r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r0 = 10
            byte r0 = (byte) r0
            long r0 = r4.indexOf(r0)
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L2d
            okio.Buffer r0 = r4.bufferField
            long r0 = r0.size()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L29
            okio.Buffer r0 = r4.bufferField
            long r0 = r0.size()
            java.lang.String r4 = r4.readUtf8(r0)
            goto L33
        L29:
            r4 = 0
            java.lang.String r4 = (java.lang.String) r4
            goto L33
        L2d:
            okio.Buffer r4 = r4.bufferField
            java.lang.String r4 = okio.internal._BufferKt.readUtf8Line(r4, r0)
        L33:
            return r4
    }

    public static final java.lang.String commonReadUtf8LineStrict(okio.RealBufferedSource r13, long r14) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r13, r0)
            r0 = 0
            int r0 = (r14 > r0 ? 1 : (r14 == r0 ? 0 : -1))
            if (r0 < 0) goto Ld
            r0 = 1
            goto Le
        Ld:
            r0 = 0
        Le:
            if (r0 == 0) goto Lb5
            r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r2 = (r14 > r0 ? 1 : (r14 == r0 ? 0 : -1))
            r3 = 1
            if (r2 != 0) goto L1d
            r5 = r0
            goto L1f
        L1d:
            long r5 = r14 + r3
        L1f:
            r2 = 10
            byte r2 = (byte) r2
            r9 = 0
            r7 = r13
            r8 = r2
            r11 = r5
            long r7 = r7.indexOf(r8, r9, r11)
            r9 = -1
            int r9 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r9 == 0) goto L38
            okio.Buffer r13 = r13.bufferField
            java.lang.String r13 = okio.internal._BufferKt.readUtf8Line(r13, r7)
            return r13
        L38:
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 >= 0) goto L65
            boolean r0 = r13.request(r5)
            if (r0 == 0) goto L65
            okio.Buffer r0 = r13.bufferField
            long r7 = r5 - r3
            byte r0 = r0.getByte(r7)
            r1 = 13
            byte r1 = (byte) r1
            if (r0 != r1) goto L65
            long r3 = r3 + r5
            boolean r0 = r13.request(r3)
            if (r0 == 0) goto L65
            okio.Buffer r0 = r13.bufferField
            byte r0 = r0.getByte(r5)
            if (r0 != r2) goto L65
            okio.Buffer r13 = r13.bufferField
            java.lang.String r13 = okio.internal._BufferKt.readUtf8Line(r13, r5)
            return r13
        L65:
            okio.Buffer r6 = new okio.Buffer
            r6.<init>()
            okio.Buffer r0 = r13.bufferField
            r2 = 0
            r1 = 32
            okio.Buffer r4 = r13.bufferField
            long r4 = r4.size()
            long r7 = (long) r1
            long r4 = java.lang.Math.min(r7, r4)
            r1 = r6
            r0.copyTo(r1, r2, r4)
            java.io.EOFException r0 = new java.io.EOFException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "\\n not found: limit="
            r1.append(r2)
            okio.Buffer r13 = r13.bufferField
            long r2 = r13.size()
            long r13 = java.lang.Math.min(r2, r14)
            r1.append(r13)
            java.lang.String r13 = " content="
            r1.append(r13)
            okio.ByteString r13 = r6.readByteString()
            java.lang.String r13 = r13.hex()
            r1.append(r13)
            r13 = 8230(0x2026, float:1.1533E-41)
            r1.append(r13)
            java.lang.String r13 = r1.toString()
            r0.<init>(r13)
            throw r0
        Lb5:
            java.lang.Long r13 = java.lang.Long.valueOf(r14)
            java.lang.String r14 = "limit < 0: "
            java.lang.String r13 = kotlin.jvm.internal.Intrinsics.stringPlus(r14, r13)
            java.lang.IllegalArgumentException r14 = new java.lang.IllegalArgumentException
            java.lang.String r13 = r13.toString()
            r14.<init>(r13)
            java.lang.Throwable r14 = (java.lang.Throwable) r14
            throw r14
    }

    public static final boolean commonRequest(okio.RealBufferedSource r7, long r8) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            r0 = 0
            int r0 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            r1 = 0
            r2 = 1
            if (r0 < 0) goto Lf
            r0 = r2
            goto L10
        Lf:
            r0 = r1
        L10:
            if (r0 == 0) goto L41
            boolean r0 = r7.closed
            r0 = r0 ^ r2
            if (r0 == 0) goto L33
        L17:
            okio.Buffer r0 = r7.bufferField
            long r3 = r0.size()
            int r0 = (r3 > r8 ? 1 : (r3 == r8 ? 0 : -1))
            if (r0 >= 0) goto L32
            okio.Source r0 = r7.source
            okio.Buffer r3 = r7.bufferField
            r4 = 8192(0x2000, double:4.0474E-320)
            long r3 = r0.read(r3, r4)
            r5 = -1
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 != 0) goto L17
            return r1
        L32:
            return r2
        L33:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            java.lang.String r8 = "closed"
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            java.lang.Throwable r7 = (java.lang.Throwable) r7
            throw r7
        L41:
            java.lang.Long r7 = java.lang.Long.valueOf(r8)
            java.lang.String r8 = "byteCount < 0: "
            java.lang.String r7 = kotlin.jvm.internal.Intrinsics.stringPlus(r8, r7)
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r7 = r7.toString()
            r8.<init>(r7)
            java.lang.Throwable r8 = (java.lang.Throwable) r8
            throw r8
    }

    public static final void commonRequire(okio.RealBufferedSource r1, long r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            boolean r1 = r1.request(r2)
            if (r1 == 0) goto Lc
            return
        Lc:
            java.io.EOFException r1 = new java.io.EOFException
            r1.<init>()
            throw r1
    }

    public static final int commonSelect(okio.RealBufferedSource r8, okio.Options r9) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            java.lang.String r0 = "options"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            boolean r0 = r8.closed
            r1 = 1
            r0 = r0 ^ r1
            if (r0 == 0) goto L3f
        L10:
            okio.Buffer r0 = r8.bufferField
            int r0 = okio.internal._BufferKt.selectPrefix(r0, r9, r1)
            r2 = -2
            r3 = -1
            if (r0 == r2) goto L2e
            if (r0 == r3) goto L2d
            okio.ByteString[] r9 = r9.getByteStrings$okio()
            r9 = r9[r0]
            int r9 = r9.size()
            okio.Buffer r8 = r8.bufferField
            long r1 = (long) r9
            r8.skip(r1)
            return r0
        L2d:
            return r3
        L2e:
            okio.Source r0 = r8.source
            okio.Buffer r2 = r8.bufferField
            r4 = 8192(0x2000, double:4.0474E-320)
            long r4 = r0.read(r2, r4)
            r6 = -1
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 != 0) goto L10
            return r3
        L3f:
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
            java.lang.String r9 = "closed"
            java.lang.String r9 = r9.toString()
            r8.<init>(r9)
            java.lang.Throwable r8 = (java.lang.Throwable) r8
            throw r8
    }

    public static final void commonSkip(okio.RealBufferedSource r4, long r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            boolean r0 = r4.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L44
        Lb:
            r0 = 0
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 <= 0) goto L43
            okio.Buffer r2 = r4.bufferField
            long r2 = r2.size()
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 != 0) goto L32
            okio.Source r0 = r4.source
            okio.Buffer r1 = r4.bufferField
            r2 = 8192(0x2000, double:4.0474E-320)
            long r0 = r0.read(r1, r2)
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L2c
            goto L32
        L2c:
            java.io.EOFException r4 = new java.io.EOFException
            r4.<init>()
            throw r4
        L32:
            okio.Buffer r0 = r4.bufferField
            long r0 = r0.size()
            long r0 = java.lang.Math.min(r5, r0)
            okio.Buffer r2 = r4.bufferField
            r2.skip(r0)
            long r5 = r5 - r0
            goto Lb
        L43:
            return
        L44:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r5 = "closed"
            java.lang.String r5 = r5.toString()
            r4.<init>(r5)
            java.lang.Throwable r4 = (java.lang.Throwable) r4
            throw r4
    }

    public static final okio.Timeout commonTimeout(okio.RealBufferedSource r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            okio.Source r1 = r1.source
            okio.Timeout r1 = r1.timeout()
            return r1
    }

    public static final java.lang.String commonToString(okio.RealBufferedSource r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "buffer("
            r0.append(r1)
            okio.Source r2 = r2.source
            r0.append(r2)
            r2 = 41
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }
}
