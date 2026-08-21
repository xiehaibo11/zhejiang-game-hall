package com.czhj.wire.okio;

final class SegmentedByteString extends com.czhj.wire.okio.ByteString {
    final transient byte[][] e;
    final transient int[] f;

    SegmentedByteString(com.czhj.wire.okio.Buffer r8, int r9) {
            r7 = this;
            r0 = 0
            r7.<init>(r0)
            long r1 = r8.c
            long r5 = (long) r9
            r3 = 0
            com.czhj.wire.okio.Util.checkOffsetAndCount(r1, r3, r5)
            com.czhj.wire.okio.Segment r0 = r8.b
            r1 = 0
            r2 = r1
            r3 = r2
        L11:
            if (r2 >= r9) goto L2c
            int r4 = r0.e
            int r5 = r0.d
            if (r4 == r5) goto L24
            int r4 = r0.e
            int r5 = r0.d
            int r4 = r4 - r5
            int r2 = r2 + r4
            int r3 = r3 + 1
            com.czhj.wire.okio.Segment r0 = r0.h
            goto L11
        L24:
            java.lang.AssertionError r8 = new java.lang.AssertionError
            java.lang.String r9 = "s.limit == s.pos"
            r8.<init>(r9)
            throw r8
        L2c:
            byte[][] r0 = new byte[r3][]
            r7.e = r0
            int r3 = r3 * 2
            int[] r0 = new int[r3]
            r7.f = r0
            com.czhj.wire.okio.Segment r8 = r8.b
            r0 = r1
        L39:
            if (r1 >= r9) goto L5e
            byte[][] r2 = r7.e
            byte[] r3 = r8.c
            r2[r0] = r3
            int r2 = r8.e
            int r3 = r8.d
            int r2 = r2 - r3
            int r1 = r1 + r2
            if (r1 <= r9) goto L4a
            r1 = r9
        L4a:
            int[] r2 = r7.f
            r2[r0] = r1
            byte[][] r3 = r7.e
            int r3 = r3.length
            int r3 = r3 + r0
            int r4 = r8.d
            r2[r3] = r4
            r2 = 1
            r8.f = r2
            int r0 = r0 + 1
            com.czhj.wire.okio.Segment r8 = r8.h
            goto L39
        L5e:
            return
    }

    private int a(int r4) {
            r3 = this;
            int[] r0 = r3.f
            byte[][] r1 = r3.e
            int r1 = r1.length
            int r4 = r4 + 1
            r2 = 0
            int r4 = java.util.Arrays.binarySearch(r0, r2, r1, r4)
            if (r4 < 0) goto Lf
            goto L10
        Lf:
            int r4 = ~r4
        L10:
            return r4
    }

    private com.czhj.wire.okio.ByteString b() {
            r2 = this;
            com.czhj.wire.okio.ByteString r0 = new com.czhj.wire.okio.ByteString
            byte[] r1 = r2.toByteArray()
            r0.<init>(r1)
            return r0
    }

    private java.lang.Object writeReplace() {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = r1.b()
            return r0
    }

    @Override
    void a(com.czhj.wire.okio.Buffer r9) {
            r8 = this;
            byte[][] r0 = r8.e
            int r0 = r0.length
            r1 = 0
            r2 = r1
        L5:
            if (r1 >= r0) goto L31
            int[] r3 = r8.f
            int r4 = r0 + r1
            r4 = r3[r4]
            r3 = r3[r1]
            com.czhj.wire.okio.Segment r5 = new com.czhj.wire.okio.Segment
            byte[][] r6 = r8.e
            r6 = r6[r1]
            int r7 = r4 + r3
            int r7 = r7 - r2
            r5.<init>(r6, r4, r7)
            com.czhj.wire.okio.Segment r2 = r9.b
            if (r2 != 0) goto L26
            r5.i = r5
            r5.h = r5
            r9.b = r5
            goto L2d
        L26:
            com.czhj.wire.okio.Segment r2 = r9.b
            com.czhj.wire.okio.Segment r2 = r2.i
            r2.push(r5)
        L2d:
            int r1 = r1 + 1
            r2 = r3
            goto L5
        L31:
            long r0 = r9.c
            long r2 = (long) r2
            long r0 = r0 + r2
            r9.c = r0
            return
    }

    @Override
    byte[] a() {
            r1 = this;
            byte[] r0 = r1.toByteArray()
            return r0
    }

    @Override
    public java.nio.ByteBuffer asByteBuffer() {
            r1 = this;
            byte[] r0 = r1.toByteArray()
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.wrap(r0)
            java.nio.ByteBuffer r0 = r0.asReadOnlyBuffer()
            return r0
    }

    @Override
    public java.lang.String base64() {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = r1.b()
            java.lang.String r0 = r0.base64()
            return r0
    }

    @Override
    public java.lang.String base64Url() {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = r1.b()
            java.lang.String r0 = r0.base64Url()
            return r0
    }

    @Override
    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.wire.okio.ByteString
            r2 = 0
            if (r1 == 0) goto L20
            com.czhj.wire.okio.ByteString r5 = (com.czhj.wire.okio.ByteString) r5
            int r1 = r5.size()
            int r3 = r4.size()
            if (r1 != r3) goto L20
            int r1 = r4.size()
            boolean r5 = r4.rangeEquals(r2, r5, r2, r1)
            if (r5 == 0) goto L20
            goto L21
        L20:
            r0 = r2
        L21:
            return r0
    }

    @Override
    public byte getByte(int r8) {
            r7 = this;
            int[] r0 = r7.f
            byte[][] r1 = r7.e
            int r1 = r1.length
            int r1 = r1 + (-1)
            r0 = r0[r1]
            long r1 = (long) r0
            long r3 = (long) r8
            r5 = 1
            com.czhj.wire.okio.Util.checkOffsetAndCount(r1, r3, r5)
            int r0 = r7.a(r8)
            if (r0 != 0) goto L18
            r1 = 0
            goto L1e
        L18:
            int[] r1 = r7.f
            int r2 = r0 + (-1)
            r1 = r1[r2]
        L1e:
            int[] r2 = r7.f
            byte[][] r3 = r7.e
            int r4 = r3.length
            int r4 = r4 + r0
            r2 = r2[r4]
            r0 = r3[r0]
            int r8 = r8 - r1
            int r8 = r8 + r2
            r8 = r0[r8]
            return r8
    }

    @Override
    public int hashCode() {
            r8 = this;
            int r0 = r8.c
            if (r0 == 0) goto L5
            return r0
        L5:
            byte[][] r0 = r8.e
            int r0 = r0.length
            r1 = 0
            r2 = 1
            r3 = r2
            r2 = r1
        Lc:
            if (r1 >= r0) goto L2b
            byte[][] r4 = r8.e
            r4 = r4[r1]
            int[] r5 = r8.f
            int r6 = r0 + r1
            r6 = r5[r6]
            r5 = r5[r1]
            int r2 = r5 - r2
            int r2 = r2 + r6
        L1d:
            if (r6 >= r2) goto L27
            int r3 = r3 * 31
            r7 = r4[r6]
            int r3 = r3 + r7
            int r6 = r6 + 1
            goto L1d
        L27:
            int r1 = r1 + 1
            r2 = r5
            goto Lc
        L2b:
            r8.c = r3
            return r3
    }

    @Override
    public java.lang.String hex() {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = r1.b()
            java.lang.String r0 = r0.hex()
            return r0
    }

    @Override
    public int indexOf(byte[] r2, int r3) {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = r1.b()
            int r2 = r0.indexOf(r2, r3)
            return r2
    }

    @Override
    public int lastIndexOf(byte[] r2, int r3) {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = r1.b()
            int r2 = r0.lastIndexOf(r2, r3)
            return r2
    }

    @Override
    public com.czhj.wire.okio.ByteString md5() {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = r1.b()
            com.czhj.wire.okio.ByteString r0 = r0.md5()
            return r0
    }

    @Override
    public boolean rangeEquals(int r8, com.czhj.wire.okio.ByteString r9, int r10, int r11) {
            r7 = this;
            r0 = 0
            if (r8 < 0) goto L42
            int r1 = r7.size()
            int r1 = r1 - r11
            if (r8 <= r1) goto Lb
            goto L42
        Lb:
            int r1 = r7.a(r8)
        Lf:
            if (r11 <= 0) goto L40
            if (r1 != 0) goto L15
            r2 = r0
            goto L1b
        L15:
            int[] r2 = r7.f
            int r3 = r1 + (-1)
            r2 = r2[r3]
        L1b:
            int[] r3 = r7.f
            r3 = r3[r1]
            int r3 = r3 - r2
            int r3 = r3 + r2
            int r3 = r3 - r8
            int r3 = java.lang.Math.min(r11, r3)
            int[] r4 = r7.f
            byte[][] r5 = r7.e
            int r6 = r5.length
            int r6 = r6 + r1
            r4 = r4[r6]
            int r2 = r8 - r2
            int r2 = r2 + r4
            r4 = r5[r1]
            boolean r2 = r9.rangeEquals(r10, r4, r2, r3)
            if (r2 != 0) goto L3a
            return r0
        L3a:
            int r8 = r8 + r3
            int r10 = r10 + r3
            int r11 = r11 - r3
            int r1 = r1 + 1
            goto Lf
        L40:
            r8 = 1
            return r8
        L42:
            return r0
    }

    @Override
    public boolean rangeEquals(int r8, byte[] r9, int r10, int r11) {
            r7 = this;
            r0 = 0
            if (r8 < 0) goto L48
            int r1 = r7.size()
            int r1 = r1 - r11
            if (r8 > r1) goto L48
            if (r10 < 0) goto L48
            int r1 = r9.length
            int r1 = r1 - r11
            if (r10 <= r1) goto L11
            goto L48
        L11:
            int r1 = r7.a(r8)
        L15:
            if (r11 <= 0) goto L46
            if (r1 != 0) goto L1b
            r2 = r0
            goto L21
        L1b:
            int[] r2 = r7.f
            int r3 = r1 + (-1)
            r2 = r2[r3]
        L21:
            int[] r3 = r7.f
            r3 = r3[r1]
            int r3 = r3 - r2
            int r3 = r3 + r2
            int r3 = r3 - r8
            int r3 = java.lang.Math.min(r11, r3)
            int[] r4 = r7.f
            byte[][] r5 = r7.e
            int r6 = r5.length
            int r6 = r6 + r1
            r4 = r4[r6]
            int r2 = r8 - r2
            int r2 = r2 + r4
            r4 = r5[r1]
            boolean r2 = com.czhj.wire.okio.Util.arrayRangeEquals(r4, r2, r9, r10, r3)
            if (r2 != 0) goto L40
            return r0
        L40:
            int r8 = r8 + r3
            int r10 = r10 + r3
            int r11 = r11 - r3
            int r1 = r1 + 1
            goto L15
        L46:
            r8 = 1
            return r8
        L48:
            return r0
    }

    @Override
    public com.czhj.wire.okio.ByteString sha256() {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = r1.b()
            com.czhj.wire.okio.ByteString r0 = r0.sha256()
            return r0
    }

    @Override
    public int size() {
            r2 = this;
            int[] r0 = r2.f
            byte[][] r1 = r2.e
            int r1 = r1.length
            int r1 = r1 + (-1)
            r0 = r0[r1]
            return r0
    }

    @Override
    public com.czhj.wire.okio.ByteString substring(int r2) {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = r1.b()
            com.czhj.wire.okio.ByteString r2 = r0.substring(r2)
            return r2
    }

    @Override
    public com.czhj.wire.okio.ByteString substring(int r2, int r3) {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = r1.b()
            com.czhj.wire.okio.ByteString r2 = r0.substring(r2, r3)
            return r2
    }

    @Override
    public com.czhj.wire.okio.ByteString toAsciiLowercase() {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = r1.b()
            com.czhj.wire.okio.ByteString r0 = r0.toAsciiLowercase()
            return r0
    }

    @Override
    public com.czhj.wire.okio.ByteString toAsciiUppercase() {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = r1.b()
            com.czhj.wire.okio.ByteString r0 = r0.toAsciiUppercase()
            return r0
    }

    @Override
    public byte[] toByteArray() {
            r8 = this;
            int[] r0 = r8.f
            byte[][] r1 = r8.e
            int r2 = r1.length
            int r2 = r2 + (-1)
            r0 = r0[r2]
            byte[] r0 = new byte[r0]
            int r1 = r1.length
            r2 = 0
            r3 = r2
        Le:
            if (r2 >= r1) goto L25
            int[] r4 = r8.f
            int r5 = r1 + r2
            r5 = r4[r5]
            r4 = r4[r2]
            byte[][] r6 = r8.e
            r6 = r6[r2]
            int r7 = r4 - r3
            java.lang.System.arraycopy(r6, r5, r0, r3, r7)
            int r2 = r2 + 1
            r3 = r4
            goto Le
        L25:
            return r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = r1.b()
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public java.lang.String utf8() {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = r1.b()
            java.lang.String r0 = r0.utf8()
            return r0
    }

    @Override
    public void write(java.io.OutputStream r7) throws java.io.IOException {
            r6 = this;
            if (r7 == 0) goto L1f
            byte[][] r0 = r6.e
            int r0 = r0.length
            r1 = 0
            r2 = r1
        L7:
            if (r1 >= r0) goto L1e
            int[] r3 = r6.f
            int r4 = r0 + r1
            r4 = r3[r4]
            r3 = r3[r1]
            byte[][] r5 = r6.e
            r5 = r5[r1]
            int r2 = r3 - r2
            r7.write(r5, r4, r2)
            int r1 = r1 + 1
            r2 = r3
            goto L7
        L1e:
            return
        L1f:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "out == null"
            r7.<init>(r0)
            throw r7
    }
}
