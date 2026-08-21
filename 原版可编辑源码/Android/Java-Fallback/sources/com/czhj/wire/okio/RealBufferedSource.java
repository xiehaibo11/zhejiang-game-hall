package com.czhj.wire.okio;

final class RealBufferedSource implements com.czhj.wire.okio.BufferedSource {
    boolean a;
    public final com.czhj.wire.okio.Buffer buffer;
    public final com.czhj.wire.okio.Source source;


    RealBufferedSource(com.czhj.wire.okio.Source r2) {
            r1 = this;
            r1.<init>()
            com.czhj.wire.okio.Buffer r0 = new com.czhj.wire.okio.Buffer
            r0.<init>()
            r1.buffer = r0
            if (r2 == 0) goto Lf
            r1.source = r2
            return
        Lf:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "source == null"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public com.czhj.wire.okio.Buffer buffer() {
            r1 = this;
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            return r0
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.a
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r1.a = r0
            com.czhj.wire.okio.Source r0 = r1.source
            r0.close()
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            r0.clear()
            return
    }

    @Override
    public boolean exhausted() throws java.io.IOException {
            r4 = this;
            boolean r0 = r4.a
            if (r0 != 0) goto L20
            com.czhj.wire.okio.Buffer r0 = r4.buffer
            boolean r0 = r0.exhausted()
            if (r0 == 0) goto L1e
            com.czhj.wire.okio.Source r0 = r4.source
            com.czhj.wire.okio.Buffer r1 = r4.buffer
            r2 = 8192(0x2000, double:4.0474E-320)
            long r0 = r0.read(r1, r2)
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L1e
            r0 = 1
            goto L1f
        L1e:
            r0 = 0
        L1f:
            return r0
        L20:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "closed"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public long indexOf(byte r3) throws java.io.IOException {
            r2 = this;
            r0 = 0
            long r0 = r2.indexOf(r3, r0)
            return r0
    }

    @Override
    public long indexOf(byte r9, long r10) throws java.io.IOException {
            r8 = this;
            boolean r0 = r8.a
            if (r0 != 0) goto L29
        L4:
            com.czhj.wire.okio.Buffer r0 = r8.buffer
            long r0 = r0.indexOf(r9, r10)
            r2 = -1
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L11
            return r0
        L11:
            com.czhj.wire.okio.Buffer r0 = r8.buffer
            long r0 = r0.c
            com.czhj.wire.okio.Source r4 = r8.source
            com.czhj.wire.okio.Buffer r5 = r8.buffer
            r6 = 8192(0x2000, double:4.0474E-320)
            long r4 = r4.read(r5, r6)
            int r4 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r4 != 0) goto L24
            return r2
        L24:
            long r10 = java.lang.Math.max(r10, r0)
            goto L4
        L29:
            java.lang.IllegalStateException r9 = new java.lang.IllegalStateException
            java.lang.String r10 = "closed"
            r9.<init>(r10)
            throw r9
    }

    @Override
    public long indexOf(com.czhj.wire.okio.ByteString r3) throws java.io.IOException {
            r2 = this;
            r0 = 0
            long r0 = r2.indexOf(r3, r0)
            return r0
    }

    @Override
    public long indexOf(com.czhj.wire.okio.ByteString r9, long r10) throws java.io.IOException {
            r8 = this;
            boolean r0 = r8.a
            if (r0 != 0) goto L32
        L4:
            com.czhj.wire.okio.Buffer r0 = r8.buffer
            long r0 = r0.indexOf(r9, r10)
            r2 = -1
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L11
            return r0
        L11:
            com.czhj.wire.okio.Buffer r0 = r8.buffer
            long r0 = r0.c
            com.czhj.wire.okio.Source r4 = r8.source
            com.czhj.wire.okio.Buffer r5 = r8.buffer
            r6 = 8192(0x2000, double:4.0474E-320)
            long r4 = r4.read(r5, r6)
            int r4 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r4 != 0) goto L24
            return r2
        L24:
            int r2 = r9.size()
            long r2 = (long) r2
            long r0 = r0 - r2
            r2 = 1
            long r0 = r0 + r2
            long r10 = java.lang.Math.max(r10, r0)
            goto L4
        L32:
            java.lang.IllegalStateException r9 = new java.lang.IllegalStateException
            java.lang.String r10 = "closed"
            r9.<init>(r10)
            throw r9
    }

    @Override
    public long indexOfElement(com.czhj.wire.okio.ByteString r3) throws java.io.IOException {
            r2 = this;
            r0 = 0
            long r0 = r2.indexOfElement(r3, r0)
            return r0
    }

    @Override
    public long indexOfElement(com.czhj.wire.okio.ByteString r9, long r10) throws java.io.IOException {
            r8 = this;
            boolean r0 = r8.a
            if (r0 != 0) goto L29
        L4:
            com.czhj.wire.okio.Buffer r0 = r8.buffer
            long r0 = r0.indexOfElement(r9, r10)
            r2 = -1
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L11
            return r0
        L11:
            com.czhj.wire.okio.Buffer r0 = r8.buffer
            long r0 = r0.c
            com.czhj.wire.okio.Source r4 = r8.source
            com.czhj.wire.okio.Buffer r5 = r8.buffer
            r6 = 8192(0x2000, double:4.0474E-320)
            long r4 = r4.read(r5, r6)
            int r4 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r4 != 0) goto L24
            return r2
        L24:
            long r10 = java.lang.Math.max(r10, r0)
            goto L4
        L29:
            java.lang.IllegalStateException r9 = new java.lang.IllegalStateException
            java.lang.String r10 = "closed"
            r9.<init>(r10)
            throw r9
    }

    @Override
    public java.io.InputStream inputStream() {
            r1 = this;
            com.czhj.wire.okio.RealBufferedSource$1 r0 = new com.czhj.wire.okio.RealBufferedSource$1
            r0.<init>(r1)
            return r0
    }

    @Override
    public int read(byte[] r3) throws java.io.IOException {
            r2 = this;
            int r0 = r3.length
            r1 = 0
            int r3 = r2.read(r3, r1, r0)
            return r3
    }

    @Override
    public int read(byte[] r10, int r11, int r12) throws java.io.IOException {
            r9 = this;
            int r0 = r10.length
            long r1 = (long) r0
            long r3 = (long) r11
            long r7 = (long) r12
            r5 = r7
            com.czhj.wire.okio.Util.checkOffsetAndCount(r1, r3, r5)
            com.czhj.wire.okio.Buffer r12 = r9.buffer
            long r0 = r12.c
            r2 = 0
            int r12 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r12 != 0) goto L24
            com.czhj.wire.okio.Source r12 = r9.source
            com.czhj.wire.okio.Buffer r0 = r9.buffer
            r1 = 8192(0x2000, double:4.0474E-320)
            long r0 = r12.read(r0, r1)
            r2 = -1
            int r12 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r12 != 0) goto L24
            r10 = -1
            return r10
        L24:
            com.czhj.wire.okio.Buffer r12 = r9.buffer
            long r0 = r12.c
            long r0 = java.lang.Math.min(r7, r0)
            int r12 = (int) r0
            com.czhj.wire.okio.Buffer r0 = r9.buffer
            int r10 = r0.read(r10, r11, r12)
            return r10
    }

    @Override
    public long read(com.czhj.wire.okio.Buffer r5, long r6) throws java.io.IOException {
            r4 = this;
            if (r5 == 0) goto L53
            r0 = 0
            int r2 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r2 < 0) goto L3c
            boolean r2 = r4.a
            if (r2 != 0) goto L34
            com.czhj.wire.okio.Buffer r2 = r4.buffer
            long r2 = r2.c
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 != 0) goto L25
            com.czhj.wire.okio.Source r0 = r4.source
            com.czhj.wire.okio.Buffer r1 = r4.buffer
            r2 = 8192(0x2000, double:4.0474E-320)
            long r0 = r0.read(r1, r2)
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L25
            return r2
        L25:
            com.czhj.wire.okio.Buffer r0 = r4.buffer
            long r0 = r0.c
            long r6 = java.lang.Math.min(r6, r0)
            com.czhj.wire.okio.Buffer r0 = r4.buffer
            long r5 = r0.read(r5, r6)
            return r5
        L34:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r6 = "closed"
            r5.<init>(r6)
            throw r5
        L3c:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "byteCount < 0: "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            r5.<init>(r6)
            throw r5
        L53:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "sink == null"
            r5.<init>(r6)
            throw r5
    }

    @Override
    public long readAll(com.czhj.wire.okio.Sink r9) throws java.io.IOException {
            r8 = this;
            if (r9 == 0) goto L41
            r0 = 0
            r2 = r0
        L5:
            com.czhj.wire.okio.Source r4 = r8.source
            com.czhj.wire.okio.Buffer r5 = r8.buffer
            r6 = 8192(0x2000, double:4.0474E-320)
            long r4 = r4.read(r5, r6)
            r6 = -1
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 == 0) goto L26
            com.czhj.wire.okio.Buffer r4 = r8.buffer
            long r4 = r4.completeSegmentByteCount()
            int r6 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r6 <= 0) goto L5
            long r2 = r2 + r4
            com.czhj.wire.okio.Buffer r6 = r8.buffer
            r9.write(r6, r4)
            goto L5
        L26:
            com.czhj.wire.okio.Buffer r4 = r8.buffer
            long r4 = r4.size()
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 <= 0) goto L40
            com.czhj.wire.okio.Buffer r0 = r8.buffer
            long r0 = r0.size()
            long r2 = r2 + r0
            com.czhj.wire.okio.Buffer r0 = r8.buffer
            long r4 = r0.size()
            r9.write(r0, r4)
        L40:
            return r2
        L41:
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "sink == null"
            r9.<init>(r0)
            throw r9
    }

    @Override
    public byte readByte() throws java.io.IOException {
            r2 = this;
            r0 = 1
            r2.require(r0)
            com.czhj.wire.okio.Buffer r0 = r2.buffer
            byte r0 = r0.readByte()
            return r0
    }

    @Override
    public byte[] readByteArray() throws java.io.IOException {
            r2 = this;
            com.czhj.wire.okio.Buffer r0 = r2.buffer
            com.czhj.wire.okio.Source r1 = r2.source
            r0.writeAll(r1)
            com.czhj.wire.okio.Buffer r0 = r2.buffer
            byte[] r0 = r0.readByteArray()
            return r0
    }

    @Override
    public byte[] readByteArray(long r2) throws java.io.IOException {
            r1 = this;
            r1.require(r2)
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            byte[] r2 = r0.readByteArray(r2)
            return r2
    }

    @Override
    public com.czhj.wire.okio.ByteString readByteString() throws java.io.IOException {
            r2 = this;
            com.czhj.wire.okio.Buffer r0 = r2.buffer
            com.czhj.wire.okio.Source r1 = r2.source
            r0.writeAll(r1)
            com.czhj.wire.okio.Buffer r0 = r2.buffer
            com.czhj.wire.okio.ByteString r0 = r0.readByteString()
            return r0
    }

    @Override
    public com.czhj.wire.okio.ByteString readByteString(long r2) throws java.io.IOException {
            r1 = this;
            r1.require(r2)
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            com.czhj.wire.okio.ByteString r2 = r0.readByteString(r2)
            return r2
    }

    @Override
    public long readDecimalLong() throws java.io.IOException {
            r6 = this;
            r0 = 1
            r6.require(r0)
            r0 = 0
            r1 = r0
        L7:
            int r2 = r1 + 1
            long r3 = (long) r2
            boolean r3 = r6.request(r3)
            if (r3 == 0) goto L40
            com.czhj.wire.okio.Buffer r3 = r6.buffer
            long r4 = (long) r1
            byte r3 = r3.getByte(r4)
            r4 = 48
            if (r3 < r4) goto L1f
            r4 = 57
            if (r3 <= r4) goto L26
        L1f:
            if (r1 != 0) goto L28
            r4 = 45
            if (r3 == r4) goto L26
            goto L28
        L26:
            r1 = r2
            goto L7
        L28:
            if (r1 == 0) goto L2b
            goto L40
        L2b:
            java.lang.NumberFormatException r1 = new java.lang.NumberFormatException
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.Byte r3 = java.lang.Byte.valueOf(r3)
            r2[r0] = r3
            java.lang.String r0 = "Expected leading [0-9] or '-' character but was %#x"
            java.lang.String r0 = java.lang.String.format(r0, r2)
            r1.<init>(r0)
            throw r1
        L40:
            com.czhj.wire.okio.Buffer r0 = r6.buffer
            long r0 = r0.readDecimalLong()
            return r0
    }

    @Override
    public void readFully(com.czhj.wire.okio.Buffer r2, long r3) throws java.io.IOException {
            r1 = this;
            r1.require(r3)     // Catch: java.io.EOFException -> L9
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            r0.readFully(r2, r3)
            return
        L9:
            r3 = move-exception
            com.czhj.wire.okio.Buffer r4 = r1.buffer
            r2.writeAll(r4)
            throw r3
    }

    @Override
    public void readFully(byte[] r7) throws java.io.IOException {
            r6 = this;
            int r0 = r7.length     // Catch: java.lang.Throwable -> Lb
            long r0 = (long) r0     // Catch: java.lang.Throwable -> Lb
            r6.require(r0)     // Catch: java.lang.Throwable -> Lb
            com.czhj.wire.okio.Buffer r0 = r6.buffer
            r0.readFully(r7)
            return
        Lb:
            r0 = move-exception
            r1 = 0
        Ld:
            com.czhj.wire.okio.Buffer r2 = r6.buffer
            long r2 = r2.c
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L2b
            com.czhj.wire.okio.Buffer r2 = r6.buffer
            long r3 = r2.c
            int r3 = (int) r3
            int r2 = r2.read(r7, r1, r3)
            r3 = -1
            if (r2 == r3) goto L25
            int r1 = r1 + r2
            goto Ld
        L25:
            java.lang.AssertionError r7 = new java.lang.AssertionError
            r7.<init>()
            throw r7
        L2b:
            throw r0
    }

    @Override
    public long readHexadecimalUnsignedLong() throws java.io.IOException {
            r6 = this;
            r0 = 1
            r6.require(r0)
            r0 = 0
            r1 = r0
        L7:
            int r2 = r1 + 1
            long r3 = (long) r2
            boolean r3 = r6.request(r3)
            if (r3 == 0) goto L4a
            com.czhj.wire.okio.Buffer r3 = r6.buffer
            long r4 = (long) r1
            byte r3 = r3.getByte(r4)
            r4 = 48
            if (r3 < r4) goto L1f
            r4 = 57
            if (r3 <= r4) goto L30
        L1f:
            r4 = 97
            if (r3 < r4) goto L27
            r4 = 102(0x66, float:1.43E-43)
            if (r3 <= r4) goto L30
        L27:
            r4 = 65
            if (r3 < r4) goto L32
            r4 = 70
            if (r3 <= r4) goto L30
            goto L32
        L30:
            r1 = r2
            goto L7
        L32:
            if (r1 == 0) goto L35
            goto L4a
        L35:
            java.lang.NumberFormatException r1 = new java.lang.NumberFormatException
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.Byte r3 = java.lang.Byte.valueOf(r3)
            r2[r0] = r3
            java.lang.String r0 = "Expected leading [0-9a-fA-F] character but was %#x"
            java.lang.String r0 = java.lang.String.format(r0, r2)
            r1.<init>(r0)
            throw r1
        L4a:
            com.czhj.wire.okio.Buffer r0 = r6.buffer
            long r0 = r0.readHexadecimalUnsignedLong()
            return r0
    }

    @Override
    public int readInt() throws java.io.IOException {
            r2 = this;
            r0 = 4
            r2.require(r0)
            com.czhj.wire.okio.Buffer r0 = r2.buffer
            int r0 = r0.readInt()
            return r0
    }

    @Override
    public int readIntLe() throws java.io.IOException {
            r2 = this;
            r0 = 4
            r2.require(r0)
            com.czhj.wire.okio.Buffer r0 = r2.buffer
            int r0 = r0.readIntLe()
            return r0
    }

    @Override
    public long readLong() throws java.io.IOException {
            r2 = this;
            r0 = 8
            r2.require(r0)
            com.czhj.wire.okio.Buffer r0 = r2.buffer
            long r0 = r0.readLong()
            return r0
    }

    @Override
    public long readLongLe() throws java.io.IOException {
            r2 = this;
            r0 = 8
            r2.require(r0)
            com.czhj.wire.okio.Buffer r0 = r2.buffer
            long r0 = r0.readLongLe()
            return r0
    }

    @Override
    public short readShort() throws java.io.IOException {
            r2 = this;
            r0 = 2
            r2.require(r0)
            com.czhj.wire.okio.Buffer r0 = r2.buffer
            short r0 = r0.readShort()
            return r0
    }

    @Override
    public short readShortLe() throws java.io.IOException {
            r2 = this;
            r0 = 2
            r2.require(r0)
            com.czhj.wire.okio.Buffer r0 = r2.buffer
            short r0 = r0.readShortLe()
            return r0
    }

    @Override
    public java.lang.String readString(long r2, java.nio.charset.Charset r4) throws java.io.IOException {
            r1 = this;
            r1.require(r2)
            if (r4 == 0) goto Lc
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            java.lang.String r2 = r0.readString(r2, r4)
            return r2
        Lc:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "charset == null"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public java.lang.String readString(java.nio.charset.Charset r3) throws java.io.IOException {
            r2 = this;
            if (r3 == 0) goto L10
            com.czhj.wire.okio.Buffer r0 = r2.buffer
            com.czhj.wire.okio.Source r1 = r2.source
            r0.writeAll(r1)
            com.czhj.wire.okio.Buffer r0 = r2.buffer
            java.lang.String r3 = r0.readString(r3)
            return r3
        L10:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "charset == null"
            r3.<init>(r0)
            throw r3
    }

    @Override
    public java.lang.String readUtf8() throws java.io.IOException {
            r2 = this;
            com.czhj.wire.okio.Buffer r0 = r2.buffer
            com.czhj.wire.okio.Source r1 = r2.source
            r0.writeAll(r1)
            com.czhj.wire.okio.Buffer r0 = r2.buffer
            java.lang.String r0 = r0.readUtf8()
            return r0
    }

    @Override
    public java.lang.String readUtf8(long r2) throws java.io.IOException {
            r1 = this;
            r1.require(r2)
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            java.lang.String r2 = r0.readUtf8(r2)
            return r2
    }

    @Override
    public int readUtf8CodePoint() throws java.io.IOException {
            r3 = this;
            r0 = 1
            r3.require(r0)
            com.czhj.wire.okio.Buffer r0 = r3.buffer
            r1 = 0
            byte r0 = r0.getByte(r1)
            r1 = r0 & 224(0xe0, float:3.14E-43)
            r2 = 192(0xc0, float:2.69E-43)
            if (r1 != r2) goto L19
            r0 = 2
        L15:
            r3.require(r0)
            goto L2b
        L19:
            r1 = r0 & 240(0xf0, float:3.36E-43)
            r2 = 224(0xe0, float:3.14E-43)
            if (r1 != r2) goto L22
            r0 = 3
            goto L15
        L22:
            r0 = r0 & 248(0xf8, float:3.48E-43)
            r1 = 240(0xf0, float:3.36E-43)
            if (r0 != r1) goto L2b
            r0 = 4
            goto L15
        L2b:
            com.czhj.wire.okio.Buffer r0 = r3.buffer
            int r0 = r0.readUtf8CodePoint()
            return r0
    }

    @Override
    public java.lang.String readUtf8Line() throws java.io.IOException {
            r4 = this;
            r0 = 10
            long r0 = r4.indexOf(r0)
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L21
            com.czhj.wire.okio.Buffer r0 = r4.buffer
            long r0 = r0.c
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L1f
            com.czhj.wire.okio.Buffer r0 = r4.buffer
            long r0 = r0.c
            java.lang.String r0 = r4.readUtf8(r0)
            goto L20
        L1f:
            r0 = 0
        L20:
            return r0
        L21:
            com.czhj.wire.okio.Buffer r2 = r4.buffer
            java.lang.String r0 = r2.a(r0)
            return r0
    }

    @Override
    public java.lang.String readUtf8LineStrict() throws java.io.IOException {
            r9 = this;
            r0 = 10
            long r0 = r9.indexOf(r0)
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L13
            com.czhj.wire.okio.Buffer r2 = r9.buffer
            java.lang.String r0 = r2.a(r0)
            return r0
        L13:
            com.czhj.wire.okio.Buffer r0 = new com.czhj.wire.okio.Buffer
            r0.<init>()
            com.czhj.wire.okio.Buffer r1 = r9.buffer
            r3 = 0
            r5 = 32
            long r7 = r1.size()
            long r5 = java.lang.Math.min(r5, r7)
            r2 = r0
            r1.copyTo(r2, r3, r5)
            java.io.EOFException r1 = new java.io.EOFException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "\\n not found: size="
            r2.append(r3)
            com.czhj.wire.okio.Buffer r3 = r9.buffer
            long r3 = r3.size()
            r2.append(r3)
            java.lang.String r3 = " content="
            r2.append(r3)
            com.czhj.wire.okio.ByteString r0 = r0.readByteString()
            java.lang.String r0 = r0.hex()
            r2.append(r0)
            java.lang.String r0 = "…"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
    }

    @Override
    public boolean request(long r5) throws java.io.IOException {
            r4 = this;
            r0 = 0
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 < 0) goto L2e
            boolean r0 = r4.a
            if (r0 != 0) goto L26
        La:
            com.czhj.wire.okio.Buffer r0 = r4.buffer
            long r0 = r0.c
            int r0 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r0 >= 0) goto L24
            com.czhj.wire.okio.Source r0 = r4.source
            com.czhj.wire.okio.Buffer r1 = r4.buffer
            r2 = 8192(0x2000, double:4.0474E-320)
            long r0 = r0.read(r1, r2)
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto La
            r5 = 0
            return r5
        L24:
            r5 = 1
            return r5
        L26:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r6 = "closed"
            r5.<init>(r6)
            throw r5
        L2e:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "byteCount < 0: "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
    }

    @Override
    public void require(long r1) throws java.io.IOException {
            r0 = this;
            boolean r1 = r0.request(r1)
            if (r1 == 0) goto L7
            return
        L7:
            java.io.EOFException r1 = new java.io.EOFException
            r1.<init>()
            throw r1
    }

    @Override
    public int select(com.czhj.wire.okio.Options r7) throws java.io.IOException {
            r6 = this;
            boolean r0 = r6.a
            if (r0 != 0) goto L36
        L4:
            com.czhj.wire.okio.Buffer r0 = r6.buffer
            int r0 = r0.a(r7)
            r1 = -1
            if (r0 != r1) goto Le
            return r1
        Le:
            com.czhj.wire.okio.ByteString[] r2 = r7.a
            r2 = r2[r0]
            int r2 = r2.size()
            long r2 = (long) r2
            com.czhj.wire.okio.Buffer r4 = r6.buffer
            long r4 = r4.c
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 > 0) goto L25
            com.czhj.wire.okio.Buffer r7 = r6.buffer
            r7.skip(r2)
            return r0
        L25:
            com.czhj.wire.okio.Source r0 = r6.source
            com.czhj.wire.okio.Buffer r2 = r6.buffer
            r3 = 8192(0x2000, double:4.0474E-320)
            long r2 = r0.read(r2, r3)
            r4 = -1
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 != 0) goto L4
            return r1
        L36:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r7.<init>(r0)
            throw r7
    }

    @Override
    public void skip(long r5) throws java.io.IOException {
            r4 = this;
            boolean r0 = r4.a
            if (r0 != 0) goto L3b
        L4:
            r0 = 0
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 <= 0) goto L3a
            com.czhj.wire.okio.Buffer r2 = r4.buffer
            long r2 = r2.c
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 != 0) goto L29
            com.czhj.wire.okio.Source r0 = r4.source
            com.czhj.wire.okio.Buffer r1 = r4.buffer
            r2 = 8192(0x2000, double:4.0474E-320)
            long r0 = r0.read(r1, r2)
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L23
            goto L29
        L23:
            java.io.EOFException r5 = new java.io.EOFException
            r5.<init>()
            throw r5
        L29:
            com.czhj.wire.okio.Buffer r0 = r4.buffer
            long r0 = r0.size()
            long r0 = java.lang.Math.min(r5, r0)
            com.czhj.wire.okio.Buffer r2 = r4.buffer
            r2.skip(r0)
            long r5 = r5 - r0
            goto L4
        L3a:
            return
        L3b:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r6 = "closed"
            r5.<init>(r6)
            throw r5
    }

    @Override
    public com.czhj.wire.okio.Timeout timeout() {
            r1 = this;
            com.czhj.wire.okio.Source r0 = r1.source
            com.czhj.wire.okio.Timeout r0 = r0.timeout()
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "buffer("
            r0.append(r1)
            com.czhj.wire.okio.Source r1 = r2.source
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
