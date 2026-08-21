package okio;

@kotlin.Metadata(d1 = {"\u0000j\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0011\n\u0002\u0010\u0012\n\u0000\n\u0002\u0010\u0015\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\f\n\u0002\u0010\u0005\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\b\u0000\u0018\u00002\u00020\u0001B\u001d\b\u0000\u0012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006¢\u0006\u0002\u0010\u0007J\b\u0010\r\u001a\u00020\u000eH\u0016J\b\u0010\u000f\u001a\u00020\u0010H\u0016J\b\u0010\u0011\u001a\u00020\u0010H\u0016J(\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u00042\u0006\u0010\u0017\u001a\u00020\u00152\u0006\u0010\u0018\u001a\u00020\u0015H\u0016J\u0015\u0010\u0019\u001a\u00020\u00012\u0006\u0010\u001a\u001a\u00020\u0010H\u0010¢\u0006\u0002\b\u001bJ\u0013\u0010\u001c\u001a\u00020\u001d2\b\u0010\u001e\u001a\u0004\u0018\u00010\u001fH\u0096\u0002J\r\u0010 \u001a\u00020\u0015H\u0010¢\u0006\u0002\b!J\b\u0010\"\u001a\u00020\u0015H\u0016J\b\u0010#\u001a\u00020\u0010H\u0016J\u001d\u0010$\u001a\u00020\u00012\u0006\u0010\u001a\u001a\u00020\u00102\u0006\u0010%\u001a\u00020\u0001H\u0010¢\u0006\u0002\b&J\u0018\u0010'\u001a\u00020\u00152\u0006\u0010\u001e\u001a\u00020\u00042\u0006\u0010(\u001a\u00020\u0015H\u0016J\r\u0010)\u001a\u00020\u0004H\u0010¢\u0006\u0002\b*J\u0015\u0010+\u001a\u00020,2\u0006\u0010-\u001a\u00020\u0015H\u0010¢\u0006\u0002\b.J\u0018\u0010/\u001a\u00020\u00152\u0006\u0010\u001e\u001a\u00020\u00042\u0006\u0010(\u001a\u00020\u0015H\u0016J(\u00100\u001a\u00020\u001d2\u0006\u0010\u0014\u001a\u00020\u00152\u0006\u0010\u001e\u001a\u00020\u00042\u0006\u00101\u001a\u00020\u00152\u0006\u0010\u0018\u001a\u00020\u0015H\u0016J(\u00100\u001a\u00020\u001d2\u0006\u0010\u0014\u001a\u00020\u00152\u0006\u0010\u001e\u001a\u00020\u00012\u0006\u00101\u001a\u00020\u00152\u0006\u0010\u0018\u001a\u00020\u0015H\u0016J\u0010\u00102\u001a\u00020\u00102\u0006\u00103\u001a\u000204H\u0016J\u0018\u00105\u001a\u00020\u00012\u0006\u00106\u001a\u00020\u00152\u0006\u00107\u001a\u00020\u0015H\u0016J\b\u00108\u001a\u00020\u0001H\u0016J\b\u00109\u001a\u00020\u0001H\u0016J\b\u0010:\u001a\u00020\u0004H\u0016J\b\u0010;\u001a\u00020\u0001H\u0002J\b\u0010<\u001a\u00020\u0010H\u0016J\u0010\u0010=\u001a\u00020\u00132\u0006\u0010>\u001a\u00020?H\u0016J%\u0010=\u001a\u00020\u00132\u0006\u0010@\u001a\u00020A2\u0006\u0010\u0014\u001a\u00020\u00152\u0006\u0010\u0018\u001a\u00020\u0015H\u0010¢\u0006\u0002\bBJ\b\u0010C\u001a\u00020DH\u0002R\u0014\u0010\u0005\u001a\u00020\u0006X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u001c\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003X\u0080\u0004¢\u0006\n\n\u0002\u0010\f\u001a\u0004\b\n\u0010\u000b¨\u0006E"}, d2 = {"Lokio/SegmentedByteString;", "Lokio/ByteString;", "segments", "", "", "directory", "", "([[B[I)V", "getDirectory$okio", "()[I", "getSegments$okio", "()[[B", "[[B", "asByteBuffer", "Ljava/nio/ByteBuffer;", "base64", "", "base64Url", "copyInto", "", "offset", "", "target", "targetOffset", "byteCount", "digest", "algorithm", "digest$okio", "equals", "", "other", "", "getSize", "getSize$okio", "hashCode", "hex", "hmac", "key", "hmac$okio", "indexOf", "fromIndex", "internalArray", "internalArray$okio", "internalGet", "", "pos", "internalGet$okio", "lastIndexOf", "rangeEquals", "otherOffset", "string", "charset", "Ljava/nio/charset/Charset;", "substring", "beginIndex", "endIndex", "toAsciiLowercase", "toAsciiUppercase", "toByteArray", "toByteString", "toString", "write", "out", "Ljava/io/OutputStream;", "buffer", "Lokio/Buffer;", "write$okio", "writeReplace", "Ljava/lang/Object;", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
public final class SegmentedByteString extends okio.ByteString {
    private final transient int[] directory;
    private final transient byte[][] segments;

    public SegmentedByteString(byte[][] r2, int[] r3) {
            r1 = this;
            java.lang.String r0 = "segments"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "directory"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okio.ByteString r0 = okio.ByteString.EMPTY
            byte[] r0 = r0.getData$okio()
            r1.<init>(r0)
            r1.segments = r2
            r1.directory = r3
            return
    }

    private final okio.ByteString toByteString() {
            r2 = this;
            okio.ByteString r0 = new okio.ByteString
            byte[] r1 = r2.toByteArray()
            r0.<init>(r1)
            return r0
    }

    private final java.lang.Object writeReplace() {
            r1 = this;
            okio.ByteString r0 = r1.toByteString()
            java.lang.Object r0 = (java.lang.Object) r0
            return r0
    }

    @Override
    public java.nio.ByteBuffer asByteBuffer() {
            r2 = this;
            byte[] r0 = r2.toByteArray()
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.wrap(r0)
            java.nio.ByteBuffer r0 = r0.asReadOnlyBuffer()
            java.lang.String r1 = "wrap(toByteArray()).asReadOnlyBuffer()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
    }

    @Override
    public java.lang.String base64() {
            r1 = this;
            okio.ByteString r0 = r1.toByteString()
            java.lang.String r0 = r0.base64()
            return r0
    }

    @Override
    public java.lang.String base64Url() {
            r1 = this;
            okio.ByteString r0 = r1.toByteString()
            java.lang.String r0 = r0.base64Url()
            return r0
    }

    @Override
    public void copyInto(int r12, byte[] r13, int r14, int r15) {
            r11 = this;
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
            int r0 = okio.internal._SegmentedByteStringKt.segment(r11, r12)
        L1b:
            if (r12 >= r15) goto L57
            if (r0 != 0) goto L21
            r1 = 0
            goto L29
        L21:
            int[] r1 = r11.getDirectory$okio()
            int r2 = r0 + (-1)
            r1 = r1[r2]
        L29:
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
            goto L1b
        L57:
            return
    }

    @Override
    public okio.ByteString digest$okio(java.lang.String r7) {
            r6 = this;
            java.lang.String r0 = "algorithm"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            java.security.MessageDigest r7 = java.security.MessageDigest.getInstance(r7)
            byte[][] r0 = r6.getSegments$okio()
            java.lang.Object[] r0 = (java.lang.Object[]) r0
            int r0 = r0.length
            r1 = 0
            r2 = r1
        L12:
            if (r1 >= r0) goto L31
            int[] r3 = r6.getDirectory$okio()
            int r4 = r0 + r1
            r3 = r3[r4]
            int[] r4 = r6.getDirectory$okio()
            r4 = r4[r1]
            byte[][] r5 = r6.getSegments$okio()
            r5 = r5[r1]
            int r2 = r4 - r2
            r7.update(r5, r3, r2)
            int r1 = r1 + 1
            r2 = r4
            goto L12
        L31:
            byte[] r7 = r7.digest()
            okio.ByteString r0 = new okio.ByteString
            java.lang.String r1 = "digestBytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r7, r1)
            r0.<init>(r7)
            return r0
    }

    @Override
    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            r1 = 0
            if (r5 != r4) goto L5
            goto L21
        L5:
            boolean r2 = r5 instanceof okio.ByteString
            if (r2 == 0) goto L20
            okio.ByteString r5 = (okio.ByteString) r5
            int r2 = r5.size()
            int r3 = r4.size()
            if (r2 != r3) goto L20
            int r2 = r4.size()
            boolean r5 = r4.rangeEquals(r1, r5, r1, r2)
            if (r5 == 0) goto L20
            goto L21
        L20:
            r0 = r1
        L21:
            return r0
    }

    public final int[] getDirectory$okio() {
            r1 = this;
            int[] r0 = r1.directory
            return r0
    }

    public final byte[][] getSegments$okio() {
            r1 = this;
            byte[][] r0 = r1.segments
            return r0
    }

    @Override
    public int getSize$okio() {
            r2 = this;
            int[] r0 = r2.getDirectory$okio()
            byte[][] r1 = r2.getSegments$okio()
            java.lang.Object[] r1 = (java.lang.Object[]) r1
            int r1 = r1.length
            int r1 = r1 + (-1)
            r0 = r0[r1]
            return r0
    }

    @Override
    public int hashCode() {
            r8 = this;
            int r0 = r8.getHashCode$okio()
            if (r0 == 0) goto L7
            goto L3c
        L7:
            byte[][] r0 = r8.getSegments$okio()
            java.lang.Object[] r0 = (java.lang.Object[]) r0
            int r0 = r0.length
            r1 = 0
            r2 = 1
            r3 = r1
        L11:
            if (r1 >= r0) goto L38
            int[] r4 = r8.getDirectory$okio()
            int r5 = r0 + r1
            r4 = r4[r5]
            int[] r5 = r8.getDirectory$okio()
            r5 = r5[r1]
            byte[][] r6 = r8.getSegments$okio()
            r6 = r6[r1]
            int r3 = r5 - r3
            int r3 = r3 + r4
        L2a:
            if (r4 >= r3) goto L34
            int r2 = r2 * 31
            r7 = r6[r4]
            int r2 = r2 + r7
            int r4 = r4 + 1
            goto L2a
        L34:
            int r1 = r1 + 1
            r3 = r5
            goto L11
        L38:
            r8.setHashCode$okio(r2)
            r0 = r2
        L3c:
            return r0
    }

    @Override
    public java.lang.String hex() {
            r1 = this;
            okio.ByteString r0 = r1.toByteString()
            java.lang.String r0 = r0.hex()
            return r0
    }

    @Override
    public okio.ByteString hmac$okio(java.lang.String r6, okio.ByteString r7) {
            r5 = this;
            java.lang.String r0 = "algorithm"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            java.lang.String r0 = "key"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            javax.crypto.Mac r0 = javax.crypto.Mac.getInstance(r6)     // Catch: java.security.InvalidKeyException -> L53
            javax.crypto.spec.SecretKeySpec r1 = new javax.crypto.spec.SecretKeySpec     // Catch: java.security.InvalidKeyException -> L53
            byte[] r7 = r7.toByteArray()     // Catch: java.security.InvalidKeyException -> L53
            r1.<init>(r7, r6)     // Catch: java.security.InvalidKeyException -> L53
            java.security.Key r1 = (java.security.Key) r1     // Catch: java.security.InvalidKeyException -> L53
            r0.init(r1)     // Catch: java.security.InvalidKeyException -> L53
            byte[][] r6 = r5.getSegments$okio()     // Catch: java.security.InvalidKeyException -> L53
            java.lang.Object[] r6 = (java.lang.Object[]) r6     // Catch: java.security.InvalidKeyException -> L53
            int r6 = r6.length     // Catch: java.security.InvalidKeyException -> L53
            r7 = 0
            r1 = r7
        L25:
            if (r7 >= r6) goto L44
            int[] r2 = r5.getDirectory$okio()     // Catch: java.security.InvalidKeyException -> L53
            int r3 = r6 + r7
            r2 = r2[r3]     // Catch: java.security.InvalidKeyException -> L53
            int[] r3 = r5.getDirectory$okio()     // Catch: java.security.InvalidKeyException -> L53
            r3 = r3[r7]     // Catch: java.security.InvalidKeyException -> L53
            byte[][] r4 = r5.getSegments$okio()     // Catch: java.security.InvalidKeyException -> L53
            r4 = r4[r7]     // Catch: java.security.InvalidKeyException -> L53
            int r1 = r3 - r1
            r0.update(r4, r2, r1)     // Catch: java.security.InvalidKeyException -> L53
            int r7 = r7 + 1
            r1 = r3
            goto L25
        L44:
            okio.ByteString r6 = new okio.ByteString     // Catch: java.security.InvalidKeyException -> L53
            byte[] r7 = r0.doFinal()     // Catch: java.security.InvalidKeyException -> L53
            java.lang.String r0 = "mac.doFinal()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r7, r0)     // Catch: java.security.InvalidKeyException -> L53
            r6.<init>(r7)     // Catch: java.security.InvalidKeyException -> L53
            return r6
        L53:
            r6 = move-exception
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.Throwable r6 = (java.lang.Throwable) r6
            r7.<init>(r6)
            throw r7
    }

    @Override
    public int indexOf(byte[] r2, int r3) {
            r1 = this;
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.ByteString r0 = r1.toByteString()
            int r2 = r0.indexOf(r2, r3)
            return r2
    }

    @Override
    public byte[] internalArray$okio() {
            r1 = this;
            byte[] r0 = r1.toByteArray()
            return r0
    }

    @Override
    public byte internalGet$okio(int r8) {
            r7 = this;
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
            int r0 = okio.internal._SegmentedByteStringKt.segment(r7, r8)
            if (r0 != 0) goto L1e
            r1 = 0
            goto L26
        L1e:
            int[] r1 = r7.getDirectory$okio()
            int r2 = r0 + (-1)
            r1 = r1[r2]
        L26:
            int[] r2 = r7.getDirectory$okio()
            byte[][] r3 = r7.getSegments$okio()
            java.lang.Object[] r3 = (java.lang.Object[]) r3
            int r3 = r3.length
            int r3 = r3 + r0
            r2 = r2[r3]
            byte[][] r3 = r7.getSegments$okio()
            r0 = r3[r0]
            int r8 = r8 - r1
            int r8 = r8 + r2
            r8 = r0[r8]
            return r8
    }

    @Override
    public int lastIndexOf(byte[] r2, int r3) {
            r1 = this;
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.ByteString r0 = r1.toByteString()
            int r2 = r0.lastIndexOf(r2, r3)
            return r2
    }

    @Override
    public boolean rangeEquals(int r7, okio.ByteString r8, int r9, int r10) {
            r6 = this;
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            r0 = 0
            if (r7 < 0) goto L54
            int r1 = r6.size()
            int r1 = r1 - r10
            if (r7 <= r1) goto L10
            goto L54
        L10:
            int r10 = r10 + r7
            int r1 = okio.internal._SegmentedByteStringKt.segment(r6, r7)
        L15:
            if (r7 >= r10) goto L53
            if (r1 != 0) goto L1b
            r2 = r0
            goto L23
        L1b:
            int[] r2 = r6.getDirectory$okio()
            int r3 = r1 + (-1)
            r2 = r2[r3]
        L23:
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
            if (r2 != 0) goto L4e
            goto L54
        L4e:
            int r9 = r9 + r3
            int r7 = r7 + r3
            int r1 = r1 + 1
            goto L15
        L53:
            r0 = 1
        L54:
            return r0
    }

    @Override
    public boolean rangeEquals(int r7, byte[] r8, int r9, int r10) {
            r6 = this;
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            r0 = 0
            if (r7 < 0) goto L5a
            int r1 = r6.size()
            int r1 = r1 - r10
            if (r7 > r1) goto L5a
            if (r9 < 0) goto L5a
            int r1 = r8.length
            int r1 = r1 - r10
            if (r9 <= r1) goto L16
            goto L5a
        L16:
            int r10 = r10 + r7
            int r1 = okio.internal._SegmentedByteStringKt.segment(r6, r7)
        L1b:
            if (r7 >= r10) goto L59
            if (r1 != 0) goto L21
            r2 = r0
            goto L29
        L21:
            int[] r2 = r6.getDirectory$okio()
            int r3 = r1 + (-1)
            r2 = r2[r3]
        L29:
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
            if (r2 != 0) goto L54
            goto L5a
        L54:
            int r9 = r9 + r3
            int r7 = r7 + r3
            int r1 = r1 + 1
            goto L1b
        L59:
            r0 = 1
        L5a:
            return r0
    }

    @Override
    public java.lang.String string(java.nio.charset.Charset r2) {
            r1 = this;
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.ByteString r0 = r1.toByteString()
            java.lang.String r2 = r0.string(r2)
            return r2
    }

    @Override
    public okio.ByteString substring(int r14, int r15) {
            r13 = this;
            r0 = r13
            okio.ByteString r0 = (okio.ByteString) r0
            int r15 = okio._UtilKt.resolveDefaultParameter(r0, r15)
            r1 = 0
            r2 = 1
            if (r14 < 0) goto Ld
            r3 = r2
            goto Le
        Ld:
            r3 = r1
        Le:
            if (r3 == 0) goto Lea
            int r3 = r13.size()
            if (r15 > r3) goto L18
            r3 = r2
            goto L19
        L18:
            r3 = r1
        L19:
            java.lang.String r4 = "endIndex="
            if (r3 == 0) goto Lbe
            int r3 = r15 - r14
            if (r3 < 0) goto L23
            r5 = r2
            goto L24
        L23:
            r5 = r1
        L24:
            if (r5 == 0) goto L9b
            if (r14 != 0) goto L30
            int r4 = r13.size()
            if (r15 != r4) goto L30
            goto L9a
        L30:
            if (r14 != r15) goto L35
            okio.ByteString r0 = okio.ByteString.EMPTY
            goto L9a
        L35:
            int r0 = okio.internal._SegmentedByteStringKt.segment(r13, r14)
            int r15 = r15 - r2
            int r15 = okio.internal._SegmentedByteStringKt.segment(r13, r15)
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
            if (r0 > r15) goto L81
            r7 = r0
            r8 = r1
        L58:
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
            if (r7 != r15) goto L7e
            goto L81
        L7e:
            r7 = r9
            r8 = r10
            goto L58
        L81:
            if (r0 != 0) goto L84
            goto L8b
        L84:
            int[] r15 = r13.getDirectory$okio()
            int r0 = r0 - r2
            r1 = r15[r0]
        L8b:
            int r15 = r5.length
            r0 = r6[r15]
            int r14 = r14 - r1
            int r0 = r0 + r14
            r6[r15] = r0
            okio.SegmentedByteString r14 = new okio.SegmentedByteString
            r14.<init>(r4, r6)
            r0 = r14
            okio.ByteString r0 = (okio.ByteString) r0
        L9a:
            return r0
        L9b:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            r0.append(r15)
            java.lang.String r15 = " < beginIndex="
            r0.append(r15)
            r0.append(r14)
            java.lang.String r14 = r0.toString()
            java.lang.IllegalArgumentException r15 = new java.lang.IllegalArgumentException
            java.lang.String r14 = r14.toString()
            r15.<init>(r14)
            java.lang.Throwable r15 = (java.lang.Throwable) r15
            throw r15
        Lbe:
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            r14.append(r4)
            r14.append(r15)
            java.lang.String r15 = " > length("
            r14.append(r15)
            int r15 = r13.size()
            r14.append(r15)
            r15 = 41
            r14.append(r15)
            java.lang.String r14 = r14.toString()
            java.lang.IllegalArgumentException r15 = new java.lang.IllegalArgumentException
            java.lang.String r14 = r14.toString()
            r15.<init>(r14)
            java.lang.Throwable r15 = (java.lang.Throwable) r15
            throw r15
        Lea:
            java.lang.StringBuilder r15 = new java.lang.StringBuilder
            r15.<init>()
            java.lang.String r0 = "beginIndex="
            r15.append(r0)
            r15.append(r14)
            java.lang.String r14 = " < 0"
            r15.append(r14)
            java.lang.String r14 = r15.toString()
            java.lang.IllegalArgumentException r15 = new java.lang.IllegalArgumentException
            java.lang.String r14 = r14.toString()
            r15.<init>(r14)
            java.lang.Throwable r15 = (java.lang.Throwable) r15
            throw r15
    }

    @Override
    public okio.ByteString toAsciiLowercase() {
            r1 = this;
            okio.ByteString r0 = r1.toByteString()
            okio.ByteString r0 = r0.toAsciiLowercase()
            return r0
    }

    @Override
    public okio.ByteString toAsciiUppercase() {
            r1 = this;
            okio.ByteString r0 = r1.toByteString()
            okio.ByteString r0 = r0.toAsciiUppercase()
            return r0
    }

    @Override
    public byte[] toByteArray() {
            r9 = this;
            int r0 = r9.size()
            byte[] r0 = new byte[r0]
            byte[][] r1 = r9.getSegments$okio()
            java.lang.Object[] r1 = (java.lang.Object[]) r1
            int r1 = r1.length
            r2 = 0
            r3 = r2
            r4 = r3
        L10:
            if (r2 >= r1) goto L32
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
            goto L10
        L32:
            return r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            okio.ByteString r0 = r1.toByteString()
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void write(java.io.OutputStream r7) throws java.io.IOException {
            r6 = this;
            java.lang.String r0 = "out"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            byte[][] r0 = r6.getSegments$okio()
            java.lang.Object[] r0 = (java.lang.Object[]) r0
            int r0 = r0.length
            r1 = 0
            r2 = r1
        Le:
            if (r1 >= r0) goto L2d
            int[] r3 = r6.getDirectory$okio()
            int r4 = r0 + r1
            r3 = r3[r4]
            int[] r4 = r6.getDirectory$okio()
            r4 = r4[r1]
            byte[][] r5 = r6.getSegments$okio()
            r5 = r5[r1]
            int r2 = r4 - r2
            r7.write(r5, r3, r2)
            int r1 = r1 + 1
            r2 = r4
            goto Le
        L2d:
            return
    }

    @Override
    public void write$okio(okio.Buffer r12, int r13, int r14) {
            r11 = this;
            java.lang.String r0 = "buffer"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
            int r0 = r13 + r14
            int r1 = okio.internal._SegmentedByteStringKt.segment(r11, r13)
        Lb:
            if (r13 >= r0) goto L68
            if (r1 != 0) goto L11
            r2 = 0
            goto L19
        L11:
            int[] r2 = r11.getDirectory$okio()
            int r3 = r1 + (-1)
            r2 = r2[r3]
        L19:
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
            if (r4 != 0) goto L57
            r2.prev = r2
            okio.Segment r4 = r2.prev
            r2.next = r4
            okio.Segment r2 = r2.next
            r12.head = r2
            goto L64
        L57:
            okio.Segment r4 = r12.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r4)
            okio.Segment r4 = r4.prev
            kotlin.jvm.internal.Intrinsics.checkNotNull(r4)
            r4.push(r2)
        L64:
            int r13 = r13 + r3
            int r1 = r1 + 1
            goto Lb
        L68:
            long r0 = r12.size()
            long r13 = (long) r14
            long r0 = r0 + r13
            r12.setSize$okio(r0)
            return
    }
}
