package com.czhj.wire.okio;

final class RealBufferedSink implements com.czhj.wire.okio.BufferedSink {
    boolean a;
    public final com.czhj.wire.okio.Buffer buffer;
    public final com.czhj.wire.okio.Sink sink;


    RealBufferedSink(com.czhj.wire.okio.Sink r2) {
            r1 = this;
            r1.<init>()
            com.czhj.wire.okio.Buffer r0 = new com.czhj.wire.okio.Buffer
            r0.<init>()
            r1.buffer = r0
            if (r2 == 0) goto Lf
            r1.sink = r2
            return
        Lf:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "sink == null"
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
            r5 = this;
            boolean r0 = r5.a
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 0
            com.czhj.wire.okio.Buffer r1 = r5.buffer     // Catch: java.lang.Throwable -> L1c
            long r1 = r1.c     // Catch: java.lang.Throwable -> L1c
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L1d
            com.czhj.wire.okio.Sink r1 = r5.sink     // Catch: java.lang.Throwable -> L1c
            com.czhj.wire.okio.Buffer r2 = r5.buffer     // Catch: java.lang.Throwable -> L1c
            com.czhj.wire.okio.Buffer r3 = r5.buffer     // Catch: java.lang.Throwable -> L1c
            long r3 = r3.c     // Catch: java.lang.Throwable -> L1c
            r1.write(r2, r3)     // Catch: java.lang.Throwable -> L1c
            goto L1d
        L1c:
            r0 = move-exception
        L1d:
            com.czhj.wire.okio.Sink r1 = r5.sink     // Catch: java.lang.Throwable -> L23
            r1.close()     // Catch: java.lang.Throwable -> L23
            goto L27
        L23:
            r1 = move-exception
            if (r0 != 0) goto L27
            r0 = r1
        L27:
            r1 = 1
            r5.a = r1
            if (r0 == 0) goto L2f
            com.czhj.wire.okio.Util.sneakyRethrow(r0)
        L2f:
            return
    }

    @Override
    public com.czhj.wire.okio.BufferedSink emit() throws java.io.IOException {
            r4 = this;
            boolean r0 = r4.a
            if (r0 != 0) goto L18
            com.czhj.wire.okio.Buffer r0 = r4.buffer
            long r0 = r0.size()
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L17
            com.czhj.wire.okio.Sink r2 = r4.sink
            com.czhj.wire.okio.Buffer r3 = r4.buffer
            r2.write(r3, r0)
        L17:
            return r4
        L18:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "closed"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public com.czhj.wire.okio.BufferedSink emitCompleteSegments() throws java.io.IOException {
            r4 = this;
            boolean r0 = r4.a
            if (r0 != 0) goto L18
            com.czhj.wire.okio.Buffer r0 = r4.buffer
            long r0 = r0.completeSegmentByteCount()
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L17
            com.czhj.wire.okio.Sink r2 = r4.sink
            com.czhj.wire.okio.Buffer r3 = r4.buffer
            r2.write(r3, r0)
        L17:
            return r4
        L18:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "closed"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public void flush() throws java.io.IOException {
            r4 = this;
            boolean r0 = r4.a
            if (r0 != 0) goto L1d
            com.czhj.wire.okio.Buffer r0 = r4.buffer
            long r0 = r0.c
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L17
            com.czhj.wire.okio.Sink r0 = r4.sink
            com.czhj.wire.okio.Buffer r1 = r4.buffer
            long r2 = r1.c
            r0.write(r1, r2)
        L17:
            com.czhj.wire.okio.Sink r0 = r4.sink
            r0.flush()
            return
        L1d:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "closed"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public java.io.OutputStream outputStream() {
            r1 = this;
            com.czhj.wire.okio.RealBufferedSink$1 r0 = new com.czhj.wire.okio.RealBufferedSink$1
            r0.<init>(r1)
            return r0
    }

    @Override
    public com.czhj.wire.okio.Timeout timeout() {
            r1 = this;
            com.czhj.wire.okio.Sink r0 = r1.sink
            com.czhj.wire.okio.Timeout r0 = r0.timeout()
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "buffer("
            r0.append(r1)
            com.czhj.wire.okio.Sink r1 = r2.sink
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public com.czhj.wire.okio.BufferedSink write(com.czhj.wire.okio.ByteString r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.a
            if (r0 != 0) goto Le
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            r0.write(r2)
            com.czhj.wire.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public com.czhj.wire.okio.BufferedSink write(com.czhj.wire.okio.Source r5, long r6) throws java.io.IOException {
            r4 = this;
        L0:
            r0 = 0
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 <= 0) goto L1d
            com.czhj.wire.okio.Buffer r0 = r4.buffer
            long r0 = r5.read(r0, r6)
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L17
            long r6 = r6 - r0
            r4.emitCompleteSegments()
            goto L0
        L17:
            java.io.EOFException r5 = new java.io.EOFException
            r5.<init>()
            throw r5
        L1d:
            return r4
    }

    @Override
    public com.czhj.wire.okio.BufferedSink write(byte[] r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.a
            if (r0 != 0) goto Le
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            r0.write(r2)
            com.czhj.wire.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public com.czhj.wire.okio.BufferedSink write(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.a
            if (r0 != 0) goto Le
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            r0.write(r2, r3, r4)
            com.czhj.wire.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public void write(com.czhj.wire.okio.Buffer r2, long r3) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.a
            if (r0 != 0) goto Ld
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            r0.write(r2, r3)
            r1.emitCompleteSegments()
            return
        Ld:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public long writeAll(com.czhj.wire.okio.Source r7) throws java.io.IOException {
            r6 = this;
            if (r7 == 0) goto L18
            r0 = 0
        L4:
            com.czhj.wire.okio.Buffer r2 = r6.buffer
            r3 = 8192(0x2000, double:4.0474E-320)
            long r2 = r7.read(r2, r3)
            r4 = -1
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 == 0) goto L17
            long r0 = r0 + r2
            r6.emitCompleteSegments()
            goto L4
        L17:
            return r0
        L18:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "source == null"
            r7.<init>(r0)
            throw r7
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeByte(int r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.a
            if (r0 != 0) goto Le
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            r0.writeByte(r2)
            com.czhj.wire.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeDecimalLong(long r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.a
            if (r0 != 0) goto Le
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            r0.writeDecimalLong(r2)
            com.czhj.wire.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeHexadecimalUnsignedLong(long r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.a
            if (r0 != 0) goto Le
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            r0.writeHexadecimalUnsignedLong(r2)
            com.czhj.wire.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeInt(int r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.a
            if (r0 != 0) goto Le
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            r0.writeInt(r2)
            com.czhj.wire.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeIntLe(int r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.a
            if (r0 != 0) goto Le
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            r0.writeIntLe(r2)
            com.czhj.wire.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeLong(long r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.a
            if (r0 != 0) goto Le
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            r0.writeLong(r2)
            com.czhj.wire.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeLongLe(long r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.a
            if (r0 != 0) goto Le
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            r0.writeLongLe(r2)
            com.czhj.wire.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeShort(int r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.a
            if (r0 != 0) goto Le
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            r0.writeShort(r2)
            com.czhj.wire.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeShortLe(int r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.a
            if (r0 != 0) goto Le
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            r0.writeShortLe(r2)
            com.czhj.wire.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeString(java.lang.String r2, int r3, int r4, java.nio.charset.Charset r5) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.a
            if (r0 != 0) goto Le
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            r0.writeString(r2, r3, r4, r5)
            com.czhj.wire.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeString(java.lang.String r2, java.nio.charset.Charset r3) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.a
            if (r0 != 0) goto Le
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            r0.writeString(r2, r3)
            com.czhj.wire.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeUtf8(java.lang.String r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.a
            if (r0 != 0) goto Le
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            r0.writeUtf8(r2)
            com.czhj.wire.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeUtf8(java.lang.String r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.a
            if (r0 != 0) goto Le
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            r0.writeUtf8(r2, r3, r4)
            com.czhj.wire.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeUtf8CodePoint(int r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.a
            if (r0 != 0) goto Le
            com.czhj.wire.okio.Buffer r0 = r1.buffer
            r0.writeUtf8CodePoint(r2)
            com.czhj.wire.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r2.<init>(r0)
            throw r2
    }
}
