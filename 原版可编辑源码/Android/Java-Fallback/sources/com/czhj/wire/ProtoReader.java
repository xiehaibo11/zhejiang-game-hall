package com.czhj.wire;

public final class ProtoReader {
    static final int a = 3;
    private static final int b = 65;
    private static final int c = 7;
    private static final int d = 0;
    private static final int e = 1;
    private static final int f = 2;
    private static final int g = 3;
    private static final int h = 4;
    private static final int i = 5;
    private static final int j = 6;
    private static final int k = 7;
    private final com.czhj.wire.okio.BufferedSource l;
    private long m;
    private long n;
    private int o;
    private int p;
    private int q;
    private long r;
    private com.czhj.wire.FieldEncoding s;

    public ProtoReader(com.czhj.wire.okio.BufferedSource r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.m = r0
            r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r2.n = r0
            r0 = 2
            r2.p = r0
            r0 = -1
            r2.q = r0
            r0 = -1
            r2.r = r0
            r2.l = r3
            return
    }

    private int a() throws java.io.IOException {
            r6 = this;
            com.czhj.wire.okio.BufferedSource r0 = r6.l
            r1 = 1
            r0.require(r1)
            long r3 = r6.m
            long r3 = r3 + r1
            r6.m = r3
            com.czhj.wire.okio.BufferedSource r0 = r6.l
            byte r0 = r0.readByte()
            if (r0 < 0) goto L15
            return r0
        L15:
            r0 = r0 & 127(0x7f, float:1.78E-43)
            com.czhj.wire.okio.BufferedSource r3 = r6.l
            r3.require(r1)
            long r3 = r6.m
            long r3 = r3 + r1
            r6.m = r3
            com.czhj.wire.okio.BufferedSource r3 = r6.l
            byte r3 = r3.readByte()
            if (r3 < 0) goto L2d
            int r1 = r3 << 7
        L2b:
            r0 = r0 | r1
            goto L9d
        L2d:
            r3 = r3 & 127(0x7f, float:1.78E-43)
            int r3 = r3 << 7
            r0 = r0 | r3
            com.czhj.wire.okio.BufferedSource r3 = r6.l
            r3.require(r1)
            long r3 = r6.m
            long r3 = r3 + r1
            r6.m = r3
            com.czhj.wire.okio.BufferedSource r3 = r6.l
            byte r3 = r3.readByte()
            if (r3 < 0) goto L47
            int r1 = r3 << 14
            goto L2b
        L47:
            r3 = r3 & 127(0x7f, float:1.78E-43)
            int r3 = r3 << 14
            r0 = r0 | r3
            com.czhj.wire.okio.BufferedSource r3 = r6.l
            r3.require(r1)
            long r3 = r6.m
            long r3 = r3 + r1
            r6.m = r3
            com.czhj.wire.okio.BufferedSource r3 = r6.l
            byte r3 = r3.readByte()
            if (r3 < 0) goto L61
            int r1 = r3 << 21
            goto L2b
        L61:
            r3 = r3 & 127(0x7f, float:1.78E-43)
            int r3 = r3 << 21
            r0 = r0 | r3
            com.czhj.wire.okio.BufferedSource r3 = r6.l
            r3.require(r1)
            long r3 = r6.m
            long r3 = r3 + r1
            r6.m = r3
            com.czhj.wire.okio.BufferedSource r3 = r6.l
            byte r3 = r3.readByte()
            int r4 = r3 << 28
            r0 = r0 | r4
            if (r3 >= 0) goto L9d
            r3 = 0
        L7c:
            r4 = 5
            if (r3 >= r4) goto L95
            com.czhj.wire.okio.BufferedSource r4 = r6.l
            r4.require(r1)
            long r4 = r6.m
            long r4 = r4 + r1
            r6.m = r4
            com.czhj.wire.okio.BufferedSource r4 = r6.l
            byte r4 = r4.readByte()
            if (r4 < 0) goto L92
            return r0
        L92:
            int r3 = r3 + 1
            goto L7c
        L95:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.String r1 = "Malformed VARINT"
            r0.<init>(r1)
            throw r0
        L9d:
            return r0
    }

    private void a(int r6) throws java.io.IOException {
            r5 = this;
        L0:
            long r0 = r5.m
            long r2 = r5.n
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L7c
            com.czhj.wire.okio.BufferedSource r0 = r5.l
            boolean r0 = r0.exhausted()
            if (r0 != 0) goto L7c
            int r0 = r5.a()
            if (r0 == 0) goto L74
            int r1 = r0 >> 3
            r0 = r0 & 7
            if (r0 == 0) goto L6d
            r2 = 1
            if (r0 == r2) goto L67
            r2 = 2
            if (r0 == r2) goto L57
            r2 = 3
            if (r0 == r2) goto L53
            r2 = 4
            if (r0 == r2) goto L48
            r1 = 5
            if (r0 != r1) goto L31
            r5.p = r1
            r5.readFixed32()
            goto L0
        L31:
            java.net.ProtocolException r6 = new java.net.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unexpected field encoding: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r6.<init>(r0)
            throw r6
        L48:
            if (r1 != r6) goto L4b
            return
        L4b:
            java.net.ProtocolException r6 = new java.net.ProtocolException
            java.lang.String r0 = "Unexpected end group"
            r6.<init>(r0)
            throw r6
        L53:
            r5.a(r1)
            goto L0
        L57:
            int r0 = r5.a()
            long r1 = r5.m
            long r3 = (long) r0
            long r1 = r1 + r3
            r5.m = r1
            com.czhj.wire.okio.BufferedSource r0 = r5.l
            r0.skip(r3)
            goto L0
        L67:
            r5.p = r2
            r5.readFixed64()
            goto L0
        L6d:
            r0 = 0
            r5.p = r0
            r5.readVarint64()
            goto L0
        L74:
            java.net.ProtocolException r6 = new java.net.ProtocolException
            java.lang.String r0 = "Unexpected tag 0"
            r6.<init>(r0)
            throw r6
        L7c:
            java.io.EOFException r6 = new java.io.EOFException
            r6.<init>()
            throw r6
    }

    private void a(com.czhj.wire.ProtoWriter r3, int r4) throws java.io.IOException {
            r2 = this;
            com.czhj.wire.FieldEncoding r0 = r2.peekFieldEncoding()
            com.czhj.wire.ProtoAdapter r0 = r0.rawProtoAdapter()
            java.lang.Object r1 = r0.decode(r2)
            r0.encodeWithTag(r3, r4, r1)     // Catch: java.io.IOException -> L10
            return
        L10:
            r3 = move-exception
            java.lang.AssertionError r4 = new java.lang.AssertionError
            r4.<init>(r3)
            throw r4
    }

    private long b() throws java.io.IOException {
            r4 = this;
            int r0 = r4.p
            r1 = 2
            if (r0 != r1) goto L1f
            long r0 = r4.n
            long r2 = r4.m
            long r0 = r0 - r2
            com.czhj.wire.okio.BufferedSource r2 = r4.l
            r2.require(r0)
            r2 = 6
            r4.p = r2
            long r2 = r4.n
            r4.m = r2
            long r2 = r4.r
            r4.n = r2
            r2 = -1
            r4.r = r2
            return r0
        L1f:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Expected LENGTH_DELIMITED but was "
            r1.append(r2)
            int r2 = r4.p
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    private void b(int r7) throws java.io.IOException {
            r6 = this;
            int r0 = r6.p
            r1 = 6
            if (r0 != r7) goto L8
        L5:
            r6.p = r1
            goto L20
        L8:
            long r2 = r6.m
            long r4 = r6.n
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 > 0) goto L21
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 != 0) goto L1d
            long r2 = r6.r
            r6.n = r2
            r2 = -1
            r6.r = r2
            goto L5
        L1d:
            r7 = 7
            r6.p = r7
        L20:
            return
        L21:
            java.io.IOException r7 = new java.io.IOException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Expected to end at "
            r0.append(r1)
            long r1 = r6.n
            r0.append(r1)
            java.lang.String r1 = " but was "
            r0.append(r1)
            long r1 = r6.m
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r7.<init>(r0)
            throw r7
    }

    public long beginMessage() throws java.io.IOException {
            r4 = this;
            int r0 = r4.p
            r1 = 2
            if (r0 != r1) goto L21
            int r0 = r4.o
            int r0 = r0 + 1
            r4.o = r0
            r1 = 65
            if (r0 > r1) goto L19
            long r0 = r4.r
            r2 = -1
            r4.r = r2
            r2 = 6
            r4.p = r2
            return r0
        L19:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "Wire recursion limit exceeded"
            r0.<init>(r1)
            throw r0
        L21:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Unexpected call to beginMessage()"
            r0.<init>(r1)
            throw r0
    }

    public void endMessage(long r6) throws java.io.IOException {
            r5 = this;
            int r0 = r5.p
            r1 = 6
            if (r0 != r1) goto L4e
            int r0 = r5.o
            int r0 = r0 + (-1)
            r5.o = r0
            if (r0 < 0) goto L46
            long r1 = r5.r
            r3 = -1
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L46
            long r1 = r5.m
            long r3 = r5.n
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 == 0) goto L43
            if (r0 != 0) goto L20
            goto L43
        L20:
            java.io.IOException r6 = new java.io.IOException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "Expected to end at "
            r7.append(r0)
            long r0 = r5.n
            r7.append(r0)
            java.lang.String r0 = " but was "
            r7.append(r0)
            long r0 = r5.m
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            r6.<init>(r7)
            throw r6
        L43:
            r5.n = r6
            return
        L46:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.String r7 = "No corresponding call to beginMessage()"
            r6.<init>(r7)
            throw r6
        L4e:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.String r7 = "Unexpected call to endMessage()"
            r6.<init>(r7)
            throw r6
    }

    public com.czhj.wire.okio.ByteString forEachTag(com.czhj.wire.TagHandler r8) throws java.io.IOException {
            r7 = this;
            long r0 = r7.beginMessage()
            r2 = 0
            r3 = r2
        L6:
            int r4 = r7.nextTag()
            r5 = -1
            if (r4 == r5) goto L26
            java.lang.Object r5 = r8.decodeMessage(r4)
            java.lang.Object r6 = com.czhj.wire.TagHandler.UNKNOWN_TAG
            if (r5 == r6) goto L16
            goto L6
        L16:
            if (r2 != 0) goto L22
            com.czhj.wire.okio.Buffer r2 = new com.czhj.wire.okio.Buffer
            r2.<init>()
            com.czhj.wire.ProtoWriter r3 = new com.czhj.wire.ProtoWriter
            r3.<init>(r2)
        L22:
            r7.a(r3, r4)
            goto L6
        L26:
            r7.endMessage(r0)
            if (r2 == 0) goto L30
            com.czhj.wire.okio.ByteString r8 = r2.readByteString()
            goto L32
        L30:
            com.czhj.wire.okio.ByteString r8 = com.czhj.wire.okio.ByteString.EMPTY
        L32:
            return r8
    }

    public int nextTag() throws java.io.IOException {
            r7 = this;
            int r0 = r7.p
            r1 = 7
            r2 = 2
            if (r0 != r1) goto Lb
            r7.p = r2
        L8:
            int r0 = r7.q
            return r0
        Lb:
            r1 = 6
            if (r0 != r1) goto Lc7
        Le:
            long r0 = r7.m
            long r3 = r7.n
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 >= 0) goto Lc5
            com.czhj.wire.okio.BufferedSource r0 = r7.l
            boolean r0 = r0.exhausted()
            if (r0 != 0) goto Lc5
            int r0 = r7.a()
            if (r0 == 0) goto Lbd
            int r1 = r0 >> 3
            r7.q = r1
            r0 = r0 & 7
            if (r0 == 0) goto Lb4
            r3 = 1
            if (r0 == r3) goto Lac
            if (r0 == r2) goto L64
            r3 = 3
            if (r0 == r3) goto L60
            r1 = 4
            if (r0 == r1) goto L58
            r1 = 5
            if (r0 != r1) goto L41
            com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.FIXED32
            r7.s = r0
            r7.p = r1
            goto L8
        L41:
            java.net.ProtocolException r1 = new java.net.ProtocolException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Unexpected field encoding: "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        L58:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.String r1 = "Unexpected end group"
            r0.<init>(r1)
            throw r0
        L60:
            r7.a(r1)
            goto Le
        L64:
            com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
            r7.s = r0
            r7.p = r2
            int r0 = r7.a()
            if (r0 < 0) goto L95
            long r1 = r7.r
            r3 = -1
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L8f
            long r1 = r7.n
            r7.r = r1
            long r3 = r7.m
            long r5 = (long) r0
            long r3 = r3 + r5
            r7.n = r3
            int r0 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r0 > 0) goto L89
            int r0 = r7.q
            return r0
        L89:
            java.io.EOFException r0 = new java.io.EOFException
            r0.<init>()
            throw r0
        L8f:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>()
            throw r0
        L95:
            java.net.ProtocolException r1 = new java.net.ProtocolException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Negative length: "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        Lac:
            com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.FIXED64
            r7.s = r0
            r7.p = r3
            goto L8
        Lb4:
            com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.VARINT
            r7.s = r0
            r0 = 0
            r7.p = r0
            goto L8
        Lbd:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.String r1 = "Unexpected tag 0"
            r0.<init>(r1)
            throw r0
        Lc5:
            r0 = -1
            return r0
        Lc7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Unexpected call to nextTag()"
            r0.<init>(r1)
            throw r0
    }

    public com.czhj.wire.FieldEncoding peekFieldEncoding() {
            r1 = this;
            com.czhj.wire.FieldEncoding r0 = r1.s
            return r0
    }

    public com.czhj.wire.okio.ByteString readBytes() throws java.io.IOException {
            r3 = this;
            long r0 = r3.b()
            com.czhj.wire.okio.BufferedSource r2 = r3.l
            r2.require(r0)
            com.czhj.wire.okio.BufferedSource r2 = r3.l
            com.czhj.wire.okio.ByteString r0 = r2.readByteString(r0)
            return r0
    }

    public int readFixed32() throws java.io.IOException {
            r6 = this;
            int r0 = r6.p
            r1 = 5
            if (r0 == r1) goto L22
            r2 = 2
            if (r0 != r2) goto L9
            goto L22
        L9:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Expected FIXED32 or LENGTH_DELIMITED but was "
            r1.append(r2)
            int r2 = r6.p
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L22:
            com.czhj.wire.okio.BufferedSource r0 = r6.l
            r2 = 4
            r0.require(r2)
            long r4 = r6.m
            long r4 = r4 + r2
            r6.m = r4
            com.czhj.wire.okio.BufferedSource r0 = r6.l
            int r0 = r0.readIntLe()
            r6.b(r1)
            return r0
    }

    public long readFixed64() throws java.io.IOException {
            r6 = this;
            int r0 = r6.p
            r1 = 1
            if (r0 == r1) goto L22
            r2 = 2
            if (r0 != r2) goto L9
            goto L22
        L9:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Expected FIXED64 or LENGTH_DELIMITED but was "
            r1.append(r2)
            int r2 = r6.p
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L22:
            com.czhj.wire.okio.BufferedSource r0 = r6.l
            r2 = 8
            r0.require(r2)
            long r4 = r6.m
            long r4 = r4 + r2
            r6.m = r4
            com.czhj.wire.okio.BufferedSource r0 = r6.l
            long r2 = r0.readLongLe()
            r6.b(r1)
            return r2
    }

    public java.lang.String readString() throws java.io.IOException {
            r3 = this;
            long r0 = r3.b()
            com.czhj.wire.okio.BufferedSource r2 = r3.l
            r2.require(r0)
            com.czhj.wire.okio.BufferedSource r2 = r3.l
            java.lang.String r0 = r2.readUtf8(r0)
            return r0
    }

    public int readVarint32() throws java.io.IOException {
            r3 = this;
            int r0 = r3.p
            if (r0 == 0) goto L21
            r1 = 2
            if (r0 != r1) goto L8
            goto L21
        L8:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Expected VARINT or LENGTH_DELIMITED but was "
            r1.append(r2)
            int r2 = r3.p
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L21:
            int r0 = r3.a()
            r1 = 0
            r3.b(r1)
            return r0
    }

    public long readVarint64() throws java.io.IOException {
            r9 = this;
            int r0 = r9.p
            if (r0 == 0) goto L21
            r1 = 2
            if (r0 != r1) goto L8
            goto L21
        L8:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Expected VARINT or LENGTH_DELIMITED but was "
            r1.append(r2)
            int r2 = r9.p
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L21:
            r0 = 0
            r2 = 0
            r3 = r2
        L25:
            r4 = 64
            if (r3 >= r4) goto L4b
            com.czhj.wire.okio.BufferedSource r4 = r9.l
            r5 = 1
            r4.require(r5)
            long r7 = r9.m
            long r7 = r7 + r5
            r9.m = r7
            com.czhj.wire.okio.BufferedSource r4 = r9.l
            byte r4 = r4.readByte()
            r5 = r4 & 127(0x7f, float:1.78E-43)
            long r5 = (long) r5
            long r5 = r5 << r3
            long r0 = r0 | r5
            r4 = r4 & 128(0x80, float:1.8E-43)
            if (r4 != 0) goto L48
            r9.b(r2)
            return r0
        L48:
            int r3 = r3 + 7
            goto L25
        L4b:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.String r1 = "WireInput encountered a malformed varint"
            r0.<init>(r1)
            throw r0
    }

    public void skip() throws java.io.IOException {
            r3 = this;
            int r0 = r3.p
            if (r0 == 0) goto L27
            r1 = 1
            if (r0 == r1) goto L23
            r1 = 2
            if (r0 == r1) goto L19
            r1 = 5
            if (r0 != r1) goto L11
            r3.readFixed32()
            goto L2a
        L11:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Unexpected call to skip()"
            r0.<init>(r1)
            throw r0
        L19:
            long r0 = r3.b()
            com.czhj.wire.okio.BufferedSource r2 = r3.l
            r2.skip(r0)
            goto L2a
        L23:
            r3.readFixed64()
            goto L2a
        L27:
            r3.readVarint64()
        L2a:
            return
    }
}
