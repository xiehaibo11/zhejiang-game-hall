package com.czhj.wire;

public final class ProtoWriter {
    private final com.czhj.wire.okio.BufferedSink a;

    public ProtoWriter(com.czhj.wire.okio.BufferedSink r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    static int a(int r1) {
            com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.VARINT
            int r1 = a(r1, r0)
            int r1 = c(r1)
            return r1
    }

    private static int a(int r0, com.czhj.wire.FieldEncoding r1) {
            int r0 = r0 << 3
            int r1 = r1.value
            r0 = r0 | r1
            return r0
    }

    static int a(long r4) {
            r0 = -128(0xffffffffffffff80, double:NaN)
            long r0 = r0 & r4
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto Lb
            r4 = 1
            return r4
        Lb:
            r0 = -16384(0xffffffffffffc000, double:NaN)
            long r0 = r0 & r4
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L14
            r4 = 2
            return r4
        L14:
            r0 = -2097152(0xffffffffffe00000, double:NaN)
            long r0 = r0 & r4
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L1e
            r4 = 3
            return r4
        L1e:
            r0 = -268435456(0xfffffffff0000000, double:NaN)
            long r0 = r0 & r4
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L28
            r4 = 4
            return r4
        L28:
            r0 = -34359738368(0xfffffff800000000, double:NaN)
            long r0 = r0 & r4
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L34
            r4 = 5
            return r4
        L34:
            r0 = -4398046511104(0xfffffc0000000000, double:NaN)
            long r0 = r0 & r4
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L40
            r4 = 6
            return r4
        L40:
            r0 = -562949953421312(0xfffe000000000000, double:NaN)
            long r0 = r0 & r4
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L49
            r4 = 7
            return r4
        L49:
            r0 = -72057594037927936(0xff00000000000000, double:-5.486124068793689E303)
            long r0 = r0 & r4
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L53
            r4 = 8
            return r4
        L53:
            r0 = -9223372036854775808
            long r4 = r4 & r0
            int r4 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r4 != 0) goto L5d
            r4 = 9
            return r4
        L5d:
            r4 = 10
            return r4
    }

    static int b(int r0) {
            if (r0 < 0) goto L7
            int r0 = c(r0)
            return r0
        L7:
            r0 = 10
            return r0
    }

    static long b(long r3) {
            r0 = 1
            long r0 = r3 << r0
            r2 = 63
            long r3 = r3 >> r2
            long r3 = r3 ^ r0
            return r3
    }

    static int c(int r1) {
            r0 = r1 & (-128(0xffffffffffffff80, float:NaN))
            if (r0 != 0) goto L6
            r1 = 1
            return r1
        L6:
            r0 = r1 & (-16384(0xffffffffffffc000, float:NaN))
            if (r0 != 0) goto Lc
            r1 = 2
            return r1
        Lc:
            r0 = -2097152(0xffffffffffe00000, float:NaN)
            r0 = r0 & r1
            if (r0 != 0) goto L13
            r1 = 3
            return r1
        L13:
            r0 = -268435456(0xfffffffff0000000, float:-1.5845633E29)
            r1 = r1 & r0
            if (r1 != 0) goto L1a
            r1 = 4
            return r1
        L1a:
            r1 = 5
            return r1
    }

    static long c(long r4) {
            r0 = 1
            long r0 = r4 >>> r0
            r2 = 1
            long r4 = r4 & r2
            long r4 = -r4
            long r4 = r4 ^ r0
            return r4
    }

    static int d(int r1) {
            int r0 = r1 << 1
            int r1 = r1 >> 31
            r1 = r1 ^ r0
            return r1
    }

    static int e(int r1) {
            int r0 = r1 >>> 1
            r1 = r1 & 1
            int r1 = -r1
            r1 = r1 ^ r0
            return r1
    }

    void f(int r3) throws java.io.IOException {
            r2 = this;
            if (r3 < 0) goto L6
            r2.writeVarint32(r3)
            goto La
        L6:
            long r0 = (long) r3
            r2.writeVarint64(r0)
        La:
            return
    }

    public void writeBytes(com.czhj.wire.okio.ByteString r2) throws java.io.IOException {
            r1 = this;
            com.czhj.wire.okio.BufferedSink r0 = r1.a
            r0.write(r2)
            return
    }

    public void writeFixed32(int r2) throws java.io.IOException {
            r1 = this;
            com.czhj.wire.okio.BufferedSink r0 = r1.a
            r0.writeIntLe(r2)
            return
    }

    public void writeFixed64(long r2) throws java.io.IOException {
            r1 = this;
            com.czhj.wire.okio.BufferedSink r0 = r1.a
            r0.writeLongLe(r2)
            return
    }

    public void writeString(java.lang.String r2) throws java.io.IOException {
            r1 = this;
            com.czhj.wire.okio.BufferedSink r0 = r1.a
            r0.writeUtf8(r2)
            return
    }

    public void writeTag(int r1, com.czhj.wire.FieldEncoding r2) throws java.io.IOException {
            r0 = this;
            int r1 = a(r1, r2)
            r0.writeVarint32(r1)
            return
    }

    public void writeVarint32(int r3) throws java.io.IOException {
            r2 = this;
        L0:
            r0 = r3 & (-128(0xffffffffffffff80, float:NaN))
            if (r0 == 0) goto L10
            com.czhj.wire.okio.BufferedSink r0 = r2.a
            r1 = r3 & 127(0x7f, float:1.78E-43)
            r1 = r1 | 128(0x80, float:1.8E-43)
            r0.writeByte(r1)
            int r3 = r3 >>> 7
            goto L0
        L10:
            com.czhj.wire.okio.BufferedSink r0 = r2.a
            r0.writeByte(r3)
            return
    }

    public void writeVarint64(long r5) throws java.io.IOException {
            r4 = this;
        L0:
            r0 = -128(0xffffffffffffff80, double:NaN)
            long r0 = r0 & r5
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            com.czhj.wire.okio.BufferedSink r0 = r4.a
            int r1 = (int) r5
            r1 = r1 & 127(0x7f, float:1.78E-43)
            r1 = r1 | 128(0x80, float:1.8E-43)
            r0.writeByte(r1)
            r0 = 7
            long r5 = r5 >>> r0
            goto L0
        L16:
            com.czhj.wire.okio.BufferedSink r0 = r4.a
            int r5 = (int) r5
            r0.writeByte(r5)
            return
    }
}
