package okio.internal;

@kotlin.Metadata(d1 = {"\u0000T\n\u0000\n\u0002\u0010\b\n\u0002\u0010\u0015\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0012\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0005\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\u001a$\u0010\u0000\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\u0003\u001a\u00020\u00012\u0006\u0010\u0004\u001a\u00020\u00012\u0006\u0010\u0005\u001a\u00020\u0001H\u0000\u001a-\u0010\u0006\u001a\u00020\u0007*\u00020\b2\u0006\u0010\t\u001a\u00020\u00012\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\u00012\u0006\u0010\r\u001a\u00020\u0001H\u0080\b\u001a\u0017\u0010\u000e\u001a\u00020\u000f*\u00020\b2\b\u0010\u0010\u001a\u0004\u0018\u00010\u0011H\u0080\b\u001a\r\u0010\u0012\u001a\u00020\u0001*\u00020\bH\u0080\b\u001a\r\u0010\u0013\u001a\u00020\u0001*\u00020\bH\u0080\b\u001a\u0015\u0010\u0014\u001a\u00020\u0015*\u00020\b2\u0006\u0010\u0016\u001a\u00020\u0001H\u0080\b\u001a-\u0010\u0017\u001a\u00020\u000f*\u00020\b2\u0006\u0010\t\u001a\u00020\u00012\u0006\u0010\u0010\u001a\u00020\u000b2\u0006\u0010\u0018\u001a\u00020\u00012\u0006\u0010\r\u001a\u00020\u0001H\u0080\b\u001a-\u0010\u0017\u001a\u00020\u000f*\u00020\b2\u0006\u0010\t\u001a\u00020\u00012\u0006\u0010\u0010\u001a\u00020\u00192\u0006\u0010\u0018\u001a\u00020\u00012\u0006\u0010\r\u001a\u00020\u0001H\u0080\b\u001a\u001d\u0010\u001a\u001a\u00020\u0019*\u00020\b2\u0006\u0010\u001b\u001a\u00020\u00012\u0006\u0010\u001c\u001a\u00020\u0001H\u0080\b\u001a\r\u0010\u001d\u001a\u00020\u000b*\u00020\bH\u0080\b\u001a%\u0010\u001e\u001a\u00020\u0007*\u00020\b2\u0006\u0010\u001f\u001a\u00020 2\u0006\u0010\t\u001a\u00020\u00012\u0006\u0010\r\u001a\u00020\u0001H\u0080\b\u001a]\u0010!\u001a\u00020\u0007*\u00020\b2K\u0010\"\u001aG\u0012\u0013\u0012\u00110\u000b¢\u0006\f\b$\u0012\b\b%\u0012\u0004\b\b(&\u0012\u0013\u0012\u00110\u0001¢\u0006\f\b$\u0012\b\b%\u0012\u0004\b\b(\t\u0012\u0013\u0012\u00110\u0001¢\u0006\f\b$\u0012\b\b%\u0012\u0004\b\b(\r\u0012\u0004\u0012\u00020\u00070#H\u0080\bø\u0001\u0000\u001aj\u0010!\u001a\u00020\u0007*\u00020\b2\u0006\u0010\u001b\u001a\u00020\u00012\u0006\u0010\u001c\u001a\u00020\u00012K\u0010\"\u001aG\u0012\u0013\u0012\u00110\u000b¢\u0006\f\b$\u0012\b\b%\u0012\u0004\b\b(&\u0012\u0013\u0012\u00110\u0001¢\u0006\f\b$\u0012\b\b%\u0012\u0004\b\b(\t\u0012\u0013\u0012\u00110\u0001¢\u0006\f\b$\u0012\b\b%\u0012\u0004\b\b(\r\u0012\u0004\u0012\u00020\u00070#H\u0082\b\u001a\u0014\u0010'\u001a\u00020\u0001*\u00020\b2\u0006\u0010\u0016\u001a\u00020\u0001H\u0000\u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u0006("}, d2 = {"binarySearch", "", "", "value", "fromIndex", "toIndex", "commonCopyInto", "", "Lokio/SegmentedByteString;", "offset", "target", "", "targetOffset", "byteCount", "commonEquals", "", "other", "", "commonGetSize", "commonHashCode", "commonInternalGet", "", "pos", "commonRangeEquals", "otherOffset", "Lokio/ByteString;", "commonSubstring", "beginIndex", "endIndex", "commonToByteArray", "commonWrite", "buffer", "Lokio/Buffer;", "forEachSegment", "action", "Lkotlin/Function3;", "Lkotlin/ParameterName;", "name", "data", "segment", "okio"}, k = 2, mv = {1, 5, 1}, xi = 48)
public final class _SegmentedByteStringKt {
    public static final int binarySearch(int[] r2, int r3, int r4, int r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            int r5 = r5 + (-1)
        L7:
            if (r4 > r5) goto L1a
            int r0 = r4 + r5
            int r0 = r0 >>> 1
            r1 = r2[r0]
            if (r1 >= r3) goto L14
            int r4 = r0 + 1
            goto L7
        L14:
            if (r1 <= r3) goto L19
            int r5 = r0 + (-1)
            goto L7
        L19:
            return r0
        L1a:
            int r2 = -r4
            int r2 = r2 + (-1)
            return r2
    }

    public static final void commonCopyInto(okio.SegmentedByteString r11, int r12, byte[] r13, int r14, int r15) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
            java.lang.String r0 = "target"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r13, r0)
            int r0 = r11.size()
            long r1 = (long) r0
            long r3 = (long) r12
            long r9 = (long) r15
            r5 = r9
            okio._UtilKt.checkOffsetAndCount(r1, r3, r5)
            int r0 = r13.length
            long r5 = (long) r0
            long r7 = (long) r14
            okio._UtilKt.checkOffsetAndCount(r5, r7, r9)
            int r15 = r15 + r12
            int r0 = segment(r11, r12)
        L20:
            if (r12 >= r15) goto L5c
            if (r0 != 0) goto L26
            r1 = 0
            goto L2e
        L26:
            int[] r1 = r11.getDirectory$okio()
            int r2 = r0 + (-1)
            r1 = r1[r2]
        L2e:
            int[] r2 = r11.getDirectory$okio()
            r2 = r2[r0]
            int r2 = r2 - r1
            int[] r3 = r11.getDirectory$okio()
            byte[][] r4 = r11.getSegments$okio()
            java.lang.Object[] r4 = (java.lang.Object[]) r4
            int r4 = r4.length
            int r4 = r4 + r0
            r3 = r3[r4]
            int r2 = r2 + r1
            int r2 = java.lang.Math.min(r15, r2)
            int r2 = r2 - r12
            int r1 = r12 - r1
            int r3 = r3 + r1
            byte[][] r1 = r11.getSegments$okio()
            r1 = r1[r0]
            int r4 = r3 + r2
            kotlin.collections.ArraysKt.copyInto(r1, r13, r14, r3, r4)
            int r14 = r14 + r2
            int r12 = r12 + r2
            int r0 = r0 + 1
            goto L20
        L5c:
            return
    }

    public static final boolean commonEquals(okio.SegmentedByteString r4, java.lang.Object r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r0 = 1
            r1 = 0
            if (r5 != r4) goto La
            goto L26
        La:
            boolean r2 = r5 instanceof okio.ByteString
            if (r2 == 0) goto L25
            okio.ByteString r5 = (okio.ByteString) r5
            int r2 = r5.size()
            int r3 = r4.size()
            if (r2 != r3) goto L25
            int r2 = r4.size()
            boolean r4 = r4.rangeEquals(r1, r5, r1, r2)
            if (r4 == 0) goto L25
            goto L26
        L25:
            r0 = r1
        L26:
            return r0
    }

    public static final int commonGetSize(okio.SegmentedByteString r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            int[] r0 = r1.getDirectory$okio()
            byte[][] r1 = r1.getSegments$okio()
            java.lang.Object[] r1 = (java.lang.Object[]) r1
            int r1 = r1.length
            int r1 = r1 + (-1)
            r1 = r0[r1]
            return r1
    }

    public static final int commonHashCode(okio.SegmentedByteString r8) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            int r0 = r8.getHashCode$okio()
            if (r0 == 0) goto Lc
            return r0
        Lc:
            byte[][] r0 = r8.getSegments$okio()
            java.lang.Object[] r0 = (java.lang.Object[]) r0
            int r0 = r0.length
            r1 = 0
            r2 = 1
            r3 = r2
            r2 = r1
        L17:
            if (r1 >= r0) goto L3e
            int[] r4 = r8.getDirectory$okio()
            int r5 = r0 + r1
            r4 = r4[r5]
            int[] r5 = r8.getDirectory$okio()
            r5 = r5[r1]
            byte[][] r6 = r8.getSegments$okio()
            r6 = r6[r1]
            int r2 = r5 - r2
            int r2 = r2 + r4
        L30:
            if (r4 >= r2) goto L3a
            int r3 = r3 * 31
            r7 = r6[r4]
            int r3 = r3 + r7
            int r4 = r4 + 1
            goto L30
        L3a:
            int r1 = r1 + 1
            r2 = r5
            goto L17
        L3e:
            r8.setHashCode$okio(r3)
            return r3
    }

    public static final byte commonInternalGet(okio.SegmentedByteString r7, int r8) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            int[] r0 = r7.getDirectory$okio()
            byte[][] r1 = r7.getSegments$okio()
            java.lang.Object[] r1 = (java.lang.Object[]) r1
            int r1 = r1.length
            int r1 = r1 + (-1)
            r0 = r0[r1]
            long r1 = (long) r0
            long r3 = (long) r8
            r5 = 1
            okio._UtilKt.checkOffsetAndCount(r1, r3, r5)
            int r0 = segment(r7, r8)
            if (r0 != 0) goto L23
            r1 = 0
            goto L2b
        L23:
            int[] r1 = r7.getDirectory$okio()
            int r2 = r0 + (-1)
            r1 = r1[r2]
        L2b:
            int[] r2 = r7.getDirectory$okio()
            byte[][] r3 = r7.getSegments$okio()
            java.lang.Object[] r3 = (java.lang.Object[]) r3
            int r3 = r3.length
            int r3 = r3 + r0
            r2 = r2[r3]
            byte[][] r7 = r7.getSegments$okio()
            r7 = r7[r0]
            int r8 = r8 - r1
            int r8 = r8 + r2
            r7 = r7[r8]
            return r7
    }

    public static final boolean commonRangeEquals(okio.SegmentedByteString r6, int r7, okio.ByteString r8, int r9, int r10) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            r0 = 0
            if (r7 < 0) goto L5a
            int r1 = r6.size()
            int r1 = r1 - r10
            if (r7 <= r1) goto L15
            goto L5a
        L15:
            int r10 = r10 + r7
            int r1 = segment(r6, r7)
        L1a:
            if (r7 >= r10) goto L58
            if (r1 != 0) goto L20
            r2 = r0
            goto L28
        L20:
            int[] r2 = r6.getDirectory$okio()
            int r3 = r1 + (-1)
            r2 = r2[r3]
        L28:
            int[] r3 = r6.getDirectory$okio()
            r3 = r3[r1]
            int r3 = r3 - r2
            int[] r4 = r6.getDirectory$okio()
            byte[][] r5 = r6.getSegments$okio()
            java.lang.Object[] r5 = (java.lang.Object[]) r5
            int r5 = r5.length
            int r5 = r5 + r1
            r4 = r4[r5]
            int r3 = r3 + r2
            int r3 = java.lang.Math.min(r10, r3)
            int r3 = r3 - r7
            int r2 = r7 - r2
            int r4 = r4 + r2
            byte[][] r2 = r6.getSegments$okio()
            r2 = r2[r1]
            boolean r2 = r8.rangeEquals(r9, r2, r4, r3)
            if (r2 != 0) goto L53
            return r0
        L53:
            int r9 = r9 + r3
            int r7 = r7 + r3
            int r1 = r1 + 1
            goto L1a
        L58:
            r6 = 1
            return r6
        L5a:
            return r0
    }

    public static final boolean commonRangeEquals(okio.SegmentedByteString r6, int r7, byte[] r8, int r9, int r10) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            r0 = 0
            if (r7 < 0) goto L60
            int r1 = r6.size()
            int r1 = r1 - r10
            if (r7 > r1) goto L60
            if (r9 < 0) goto L60
            int r1 = r8.length
            int r1 = r1 - r10
            if (r9 <= r1) goto L1b
            goto L60
        L1b:
            int r10 = r10 + r7
            int r1 = segment(r6, r7)
        L20:
            if (r7 >= r10) goto L5e
            if (r1 != 0) goto L26
            r2 = r0
            goto L2e
        L26:
            int[] r2 = r6.getDirectory$okio()
            int r3 = r1 + (-1)
            r2 = r2[r3]
        L2e:
            int[] r3 = r6.getDirectory$okio()
            r3 = r3[r1]
            int r3 = r3 - r2
            int[] r4 = r6.getDirectory$okio()
            byte[][] r5 = r6.getSegments$okio()
            java.lang.Object[] r5 = (java.lang.Object[]) r5
            int r5 = r5.length
            int r5 = r5 + r1
            r4 = r4[r5]
            int r3 = r3 + r2
            int r3 = java.lang.Math.min(r10, r3)
            int r3 = r3 - r7
            int r2 = r7 - r2
            int r4 = r4 + r2
            byte[][] r2 = r6.getSegments$okio()
            r2 = r2[r1]
            boolean r2 = okio._UtilKt.arrayRangeEquals(r2, r4, r8, r9, r3)
            if (r2 != 0) goto L59
            return r0
        L59:
            int r9 = r9 + r3
            int r7 = r7 + r3
            int r1 = r1 + 1
            goto L20
        L5e:
            r6 = 1
            return r6
        L60:
            return r0
    }

    public static final okio.ByteString commonSubstring(okio.SegmentedByteString r13, int r14, int r15) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r13, r0)
            r0 = r13
            okio.ByteString r0 = (okio.ByteString) r0
            int r15 = okio._UtilKt.resolveDefaultParameter(r0, r15)
            r1 = 0
            r2 = 1
            if (r14 < 0) goto L12
            r3 = r2
            goto L13
        L12:
            r3 = r1
        L13:
            if (r3 == 0) goto Led
            int r3 = r13.size()
            if (r15 > r3) goto L1d
            r3 = r2
            goto L1e
        L1d:
            r3 = r1
        L1e:
            java.lang.String r4 = "endIndex="
            if (r3 == 0) goto Lc1
            int r3 = r15 - r14
            if (r3 < 0) goto L28
            r5 = r2
            goto L29
        L28:
            r5 = r1
        L29:
            if (r5 == 0) goto L9e
            if (r14 != 0) goto L34
            int r4 = r13.size()
            if (r15 != r4) goto L34
            return r0
        L34:
            if (r14 != r15) goto L39
            okio.ByteString r13 = okio.ByteString.EMPTY
            return r13
        L39:
            int r0 = segment(r13, r14)
            int r15 = r15 - r2
            int r15 = segment(r13, r15)
            byte[][] r4 = r13.getSegments$okio()
            java.lang.Object[] r4 = (java.lang.Object[]) r4
            int r5 = r15 + 1
            java.lang.Object[] r4 = kotlin.collections.ArraysKt.copyOfRange(r4, r0, r5)
            byte[][] r4 = (byte[][]) r4
            r5 = r4
            java.lang.Object[] r5 = (java.lang.Object[]) r5
            int r6 = r5.length
            int r6 = r6 * 2
            int[] r6 = new int[r6]
            if (r0 > r15) goto L85
            r7 = r0
            r8 = r1
        L5c:
            int r9 = r7 + 1
            int[] r10 = r13.getDirectory$okio()
            r10 = r10[r7]
            int r10 = r10 - r14
            int r10 = java.lang.Math.min(r10, r3)
            r6[r8] = r10
            int r10 = r8 + 1
            int r11 = r5.length
            int r8 = r8 + r11
            int[] r11 = r13.getDirectory$okio()
            byte[][] r12 = r13.getSegments$okio()
            java.lang.Object[] r12 = (java.lang.Object[]) r12
            int r12 = r12.length
            int r12 = r12 + r7
            r11 = r11[r12]
            r6[r8] = r11
            if (r7 != r15) goto L82
            goto L85
        L82:
            r7 = r9
            r8 = r10
            goto L5c
        L85:
            if (r0 != 0) goto L88
            goto L8f
        L88:
            int[] r13 = r13.getDirectory$okio()
            int r0 = r0 - r2
            r1 = r13[r0]
        L8f:
            int r13 = r5.length
            r15 = r6[r13]
            int r14 = r14 - r1
            int r15 = r15 + r14
            r6[r13] = r15
            okio.SegmentedByteString r13 = new okio.SegmentedByteString
            r13.<init>(r4, r6)
            okio.ByteString r13 = (okio.ByteString) r13
            return r13
        L9e:
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            r13.append(r4)
            r13.append(r15)
            java.lang.String r15 = " < beginIndex="
            r13.append(r15)
            r13.append(r14)
            java.lang.String r13 = r13.toString()
            java.lang.IllegalArgumentException r14 = new java.lang.IllegalArgumentException
            java.lang.String r13 = r13.toString()
            r14.<init>(r13)
            java.lang.Throwable r14 = (java.lang.Throwable) r14
            throw r14
        Lc1:
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            r14.append(r4)
            r14.append(r15)
            java.lang.String r15 = " > length("
            r14.append(r15)
            int r13 = r13.size()
            r14.append(r13)
            r13 = 41
            r14.append(r13)
            java.lang.String r13 = r14.toString()
            java.lang.IllegalArgumentException r14 = new java.lang.IllegalArgumentException
            java.lang.String r13 = r13.toString()
            r14.<init>(r13)
            java.lang.Throwable r14 = (java.lang.Throwable) r14
            throw r14
        Led:
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r15 = "beginIndex="
            r13.append(r15)
            r13.append(r14)
            java.lang.String r14 = " < 0"
            r13.append(r14)
            java.lang.String r13 = r13.toString()
            java.lang.IllegalArgumentException r14 = new java.lang.IllegalArgumentException
            java.lang.String r13 = r13.toString()
            r14.<init>(r13)
            java.lang.Throwable r14 = (java.lang.Throwable) r14
            throw r14
    }

    public static final byte[] commonToByteArray(okio.SegmentedByteString r9) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            int r0 = r9.size()
            byte[] r0 = new byte[r0]
            byte[][] r1 = r9.getSegments$okio()
            java.lang.Object[] r1 = (java.lang.Object[]) r1
            int r1 = r1.length
            r2 = 0
            r3 = r2
            r4 = r3
        L15:
            if (r2 >= r1) goto L37
            int[] r5 = r9.getDirectory$okio()
            int r6 = r1 + r2
            r5 = r5[r6]
            int[] r6 = r9.getDirectory$okio()
            r6 = r6[r2]
            byte[][] r7 = r9.getSegments$okio()
            r7 = r7[r2]
            int r3 = r6 - r3
            int r8 = r5 + r3
            kotlin.collections.ArraysKt.copyInto(r7, r0, r4, r5, r8)
            int r4 = r4 + r3
            int r2 = r2 + 1
            r3 = r6
            goto L15
        L37:
            return r0
    }

    public static final void commonWrite(okio.SegmentedByteString r11, okio.Buffer r12, int r13, int r14) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
            java.lang.String r0 = "buffer"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
            int r0 = r13 + r14
            int r1 = segment(r11, r13)
        L10:
            if (r13 >= r0) goto L6d
            if (r1 != 0) goto L16
            r2 = 0
            goto L1e
        L16:
            int[] r2 = r11.getDirectory$okio()
            int r3 = r1 + (-1)
            r2 = r2[r3]
        L1e:
            int[] r3 = r11.getDirectory$okio()
            r3 = r3[r1]
            int r3 = r3 - r2
            int[] r4 = r11.getDirectory$okio()
            byte[][] r5 = r11.getSegments$okio()
            java.lang.Object[] r5 = (java.lang.Object[]) r5
            int r5 = r5.length
            int r5 = r5 + r1
            r4 = r4[r5]
            int r3 = r3 + r2
            int r3 = java.lang.Math.min(r0, r3)
            int r3 = r3 - r13
            int r2 = r13 - r2
            int r7 = r4 + r2
            byte[][] r2 = r11.getSegments$okio()
            r6 = r2[r1]
            okio.Segment r2 = new okio.Segment
            int r8 = r7 + r3
            r9 = 1
            r10 = 0
            r5 = r2
            r5.<init>(r6, r7, r8, r9, r10)
            okio.Segment r4 = r12.head
            if (r4 != 0) goto L5c
            r2.prev = r2
            okio.Segment r4 = r2.prev
            r2.next = r4
            okio.Segment r2 = r2.next
            r12.head = r2
            goto L69
        L5c:
            okio.Segment r4 = r12.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r4)
            okio.Segment r4 = r4.prev
            kotlin.jvm.internal.Intrinsics.checkNotNull(r4)
            r4.push(r2)
        L69:
            int r13 = r13 + r3
            int r1 = r1 + 1
            goto L10
        L6d:
            long r0 = r12.size()
            long r13 = (long) r14
            long r0 = r0 + r13
            r12.setSize$okio(r0)
            return
    }

    private static final void forEachSegment(okio.SegmentedByteString r5, int r6, int r7, kotlin.jvm.functions.Function3<? super byte[], ? super java.lang.Integer, ? super java.lang.Integer, kotlin.Unit> r8) {
            int r0 = segment(r5, r6)
        L4:
            if (r6 >= r7) goto L45
            if (r0 != 0) goto La
            r1 = 0
            goto L12
        La:
            int[] r1 = r5.getDirectory$okio()
            int r2 = r0 + (-1)
            r1 = r1[r2]
        L12:
            int[] r2 = r5.getDirectory$okio()
            r2 = r2[r0]
            int r2 = r2 - r1
            int[] r3 = r5.getDirectory$okio()
            byte[][] r4 = r5.getSegments$okio()
            java.lang.Object[] r4 = (java.lang.Object[]) r4
            int r4 = r4.length
            int r4 = r4 + r0
            r3 = r3[r4]
            int r2 = r2 + r1
            int r2 = java.lang.Math.min(r7, r2)
            int r2 = r2 - r6
            int r1 = r6 - r1
            int r3 = r3 + r1
            byte[][] r1 = r5.getSegments$okio()
            r1 = r1[r0]
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.Integer r4 = java.lang.Integer.valueOf(r2)
            r8.invoke(r1, r3, r4)
            int r6 = r6 + r2
            int r0 = r0 + 1
            goto L4
        L45:
            return
    }

    public static final void forEachSegment(okio.SegmentedByteString r6, kotlin.jvm.functions.Function3<? super byte[], ? super java.lang.Integer, ? super java.lang.Integer, kotlin.Unit> r7) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            java.lang.String r0 = "action"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            byte[][] r0 = r6.getSegments$okio()
            java.lang.Object[] r0 = (java.lang.Object[]) r0
            int r0 = r0.length
            r1 = 0
            r2 = r1
        L13:
            if (r1 >= r0) goto L3a
            int[] r3 = r6.getDirectory$okio()
            int r4 = r0 + r1
            r3 = r3[r4]
            int[] r4 = r6.getDirectory$okio()
            r4 = r4[r1]
            byte[][] r5 = r6.getSegments$okio()
            r5 = r5[r1]
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            int r2 = r4 - r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r7.invoke(r5, r3, r2)
            int r1 = r1 + 1
            r2 = r4
            goto L13
        L3a:
            return
    }

    public static final int segment(okio.SegmentedByteString r2, int r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            int[] r0 = r2.getDirectory$okio()
            int r3 = r3 + 1
            byte[][] r2 = r2.getSegments$okio()
            java.lang.Object[] r2 = (java.lang.Object[]) r2
            int r2 = r2.length
            r1 = 0
            int r2 = binarySearch(r0, r3, r1, r2)
            if (r2 < 0) goto L1a
            goto L1b
        L1a:
            int r2 = ~r2
        L1b:
            return r2
    }
}
