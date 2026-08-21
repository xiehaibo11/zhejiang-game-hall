package org.cocos2dx.okio;

final class RealBufferedSink implements org.cocos2dx.okio.BufferedSink {
    public final org.cocos2dx.okio.Buffer buffer;
    boolean closed;
    public final org.cocos2dx.okio.Sink sink;


    RealBufferedSink(org.cocos2dx.okio.Sink r2) {
            r1 = this;
            r1.<init>()
            org.cocos2dx.okio.Buffer r0 = new org.cocos2dx.okio.Buffer
            r0.<init>()
            r1.buffer = r0
            if (r2 == 0) goto Lf
            r1.sink = r2
            return
        Lf:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "sink == null"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public org.cocos2dx.okio.Buffer buffer() {
            r1 = this;
            org.cocos2dx.okio.Buffer r0 = r1.buffer
            return r0
    }

    @Override
    public void close() throws java.io.IOException {
            r6 = this;
            boolean r0 = r6.closed
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 0
            org.cocos2dx.okio.Buffer r1 = r6.buffer     // Catch: java.lang.Throwable -> L1c
            long r1 = r1.size     // Catch: java.lang.Throwable -> L1c
            r3 = 0
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 <= 0) goto L1d
            org.cocos2dx.okio.Sink r1 = r6.sink     // Catch: java.lang.Throwable -> L1c
            org.cocos2dx.okio.Buffer r2 = r6.buffer     // Catch: java.lang.Throwable -> L1c
            org.cocos2dx.okio.Buffer r3 = r6.buffer     // Catch: java.lang.Throwable -> L1c
            long r3 = r3.size     // Catch: java.lang.Throwable -> L1c
            r1.write(r2, r3)     // Catch: java.lang.Throwable -> L1c
            goto L1d
        L1c:
            r0 = move-exception
        L1d:
            org.cocos2dx.okio.Sink r1 = r6.sink     // Catch: java.lang.Throwable -> L23
            r1.close()     // Catch: java.lang.Throwable -> L23
            goto L27
        L23:
            r1 = move-exception
            if (r0 != 0) goto L27
            r0 = r1
        L27:
            r1 = 1
            r6.closed = r1
            if (r0 == 0) goto L2f
            org.cocos2dx.okio.Util.sneakyRethrow(r0)
        L2f:
            return
    }

    @Override
    public org.cocos2dx.okio.BufferedSink emit() throws java.io.IOException {
            r5 = this;
            boolean r0 = r5.closed
            if (r0 != 0) goto L18
            org.cocos2dx.okio.Buffer r0 = r5.buffer
            long r0 = r0.size()
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L17
            org.cocos2dx.okio.Sink r2 = r5.sink
            org.cocos2dx.okio.Buffer r3 = r5.buffer
            r2.write(r3, r0)
        L17:
            return r5
        L18:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "closed"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public org.cocos2dx.okio.BufferedSink emitCompleteSegments() throws java.io.IOException {
            r5 = this;
            boolean r0 = r5.closed
            if (r0 != 0) goto L18
            org.cocos2dx.okio.Buffer r0 = r5.buffer
            long r0 = r0.completeSegmentByteCount()
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L17
            org.cocos2dx.okio.Sink r2 = r5.sink
            org.cocos2dx.okio.Buffer r3 = r5.buffer
            r2.write(r3, r0)
        L17:
            return r5
        L18:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "closed"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public void flush() throws java.io.IOException {
            r5 = this;
            boolean r0 = r5.closed
            if (r0 != 0) goto L1d
            org.cocos2dx.okio.Buffer r0 = r5.buffer
            long r0 = r0.size
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L17
            org.cocos2dx.okio.Sink r0 = r5.sink
            org.cocos2dx.okio.Buffer r1 = r5.buffer
            long r2 = r1.size
            r0.write(r1, r2)
        L17:
            org.cocos2dx.okio.Sink r0 = r5.sink
            r0.flush()
            return
        L1d:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "closed"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public boolean isOpen() {
            r1 = this;
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            return r0
    }

    @Override
    public java.io.OutputStream outputStream() {
            r1 = this;
            org.cocos2dx.okio.RealBufferedSink$1 r0 = new org.cocos2dx.okio.RealBufferedSink$1
            r0.<init>(r1)
            return r0
    }

    @Override
    public org.cocos2dx.okio.Timeout timeout() {
            r1 = this;
            org.cocos2dx.okio.Sink r0 = r1.sink
            org.cocos2dx.okio.Timeout r0 = r0.timeout()
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "buffer("
            r0.append(r1)
            org.cocos2dx.okio.Sink r1 = r2.sink
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public int write(java.nio.ByteBuffer r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Le
            org.cocos2dx.okio.Buffer r0 = r1.buffer
            int r2 = r0.write(r2)
            r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public org.cocos2dx.okio.BufferedSink write(org.cocos2dx.okio.ByteString r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Le
            org.cocos2dx.okio.Buffer r0 = r1.buffer
            r0.write(r2)
            org.cocos2dx.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public org.cocos2dx.okio.BufferedSink write(org.cocos2dx.okio.Source r6, long r7) throws java.io.IOException {
            r5 = this;
        L0:
            r0 = 0
            int r2 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r2 <= 0) goto L1d
            org.cocos2dx.okio.Buffer r0 = r5.buffer
            long r0 = r6.read(r0, r7)
            r2 = -1
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L17
            long r7 = r7 - r0
            r5.emitCompleteSegments()
            goto L0
        L17:
            java.io.EOFException r6 = new java.io.EOFException
            r6.<init>()
            throw r6
        L1d:
            return r5
    }

    @Override
    public org.cocos2dx.okio.BufferedSink write(byte[] r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Le
            org.cocos2dx.okio.Buffer r0 = r1.buffer
            r0.write(r2)
            org.cocos2dx.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public org.cocos2dx.okio.BufferedSink write(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Le
            org.cocos2dx.okio.Buffer r0 = r1.buffer
            r0.write(r2, r3, r4)
            org.cocos2dx.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public void write(org.cocos2dx.okio.Buffer r2, long r3) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Ld
            org.cocos2dx.okio.Buffer r0 = r1.buffer
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
    public long writeAll(org.cocos2dx.okio.Source r8) throws java.io.IOException {
            r7 = this;
            if (r8 == 0) goto L18
            r0 = 0
        L4:
            org.cocos2dx.okio.Buffer r2 = r7.buffer
            r3 = 8192(0x2000, double:4.0474E-320)
            long r2 = r8.read(r2, r3)
            r4 = -1
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 == 0) goto L17
            long r0 = r0 + r2
            r7.emitCompleteSegments()
            goto L4
        L17:
            return r0
        L18:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "source == null"
            r8.<init>(r0)
            throw r8
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeByte(int r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Le
            org.cocos2dx.okio.Buffer r0 = r1.buffer
            r0.writeByte(r2)
            org.cocos2dx.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeDecimalLong(long r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Le
            org.cocos2dx.okio.Buffer r0 = r1.buffer
            r0.writeDecimalLong(r2)
            org.cocos2dx.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeHexadecimalUnsignedLong(long r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Le
            org.cocos2dx.okio.Buffer r0 = r1.buffer
            r0.writeHexadecimalUnsignedLong(r2)
            org.cocos2dx.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeInt(int r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Le
            org.cocos2dx.okio.Buffer r0 = r1.buffer
            r0.writeInt(r2)
            org.cocos2dx.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeIntLe(int r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Le
            org.cocos2dx.okio.Buffer r0 = r1.buffer
            r0.writeIntLe(r2)
            org.cocos2dx.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeLong(long r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Le
            org.cocos2dx.okio.Buffer r0 = r1.buffer
            r0.writeLong(r2)
            org.cocos2dx.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeLongLe(long r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Le
            org.cocos2dx.okio.Buffer r0 = r1.buffer
            r0.writeLongLe(r2)
            org.cocos2dx.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeShort(int r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Le
            org.cocos2dx.okio.Buffer r0 = r1.buffer
            r0.writeShort(r2)
            org.cocos2dx.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeShortLe(int r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Le
            org.cocos2dx.okio.Buffer r0 = r1.buffer
            r0.writeShortLe(r2)
            org.cocos2dx.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeString(java.lang.String r2, int r3, int r4, java.nio.charset.Charset r5) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Le
            org.cocos2dx.okio.Buffer r0 = r1.buffer
            r0.writeString(r2, r3, r4, r5)
            org.cocos2dx.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeString(java.lang.String r2, java.nio.charset.Charset r3) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Le
            org.cocos2dx.okio.Buffer r0 = r1.buffer
            r0.writeString(r2, r3)
            org.cocos2dx.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeUtf8(java.lang.String r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Le
            org.cocos2dx.okio.Buffer r0 = r1.buffer
            r0.writeUtf8(r2)
            org.cocos2dx.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeUtf8(java.lang.String r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Le
            org.cocos2dx.okio.Buffer r0 = r1.buffer
            r0.writeUtf8(r2, r3, r4)
            org.cocos2dx.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public org.cocos2dx.okio.BufferedSink writeUtf8CodePoint(int r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Le
            org.cocos2dx.okio.Buffer r0 = r1.buffer
            r0.writeUtf8CodePoint(r2)
            org.cocos2dx.okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r2.<init>(r0)
            throw r2
    }
}
