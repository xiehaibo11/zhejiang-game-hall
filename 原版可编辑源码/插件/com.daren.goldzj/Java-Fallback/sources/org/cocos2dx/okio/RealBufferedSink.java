package org.cocos2dx.okio;

import java.io.EOFException;
import java.io.IOException;
import java.io.OutputStream;
import java.nio.ByteBuffer;
import java.nio.charset.Charset;

final class RealBufferedSink implements BufferedSink {
    public final Buffer buffer;
    boolean closed;
    public final Sink sink;

    RealBufferedSink(Sink r2) {
        this.buffer = new Buffer();
        if (r2 == null) goto L7;
        this.sink = r2;
        return;
    L7:
        throw new NullPointerException("sink == null");
    }

    @Override
    public Buffer buffer() {
        return this.buffer;
    }

    @Override
    public void write(Buffer r2, long r3) throws IOException {
        if (this.closed == true) goto L7;
        this.buffer.write(r2, r3);
        emitCompleteSegments();
        return;
    L7:
        throw new IllegalStateException("closed");
    }

    @Override
    public BufferedSink write(ByteString r2) throws IOException {
        if (this.closed == true) goto L7;
        this.buffer.write(r2);
        return emitCompleteSegments();
    L7:
        throw new IllegalStateException("closed");
    }

    @Override
    public BufferedSink writeUtf8(String r2) throws IOException {
        if (this.closed == true) goto L7;
        this.buffer.writeUtf8(r2);
        return emitCompleteSegments();
    L7:
        throw new IllegalStateException("closed");
    }

    @Override
    public BufferedSink writeUtf8(String r2, int r3, int r4) throws IOException {
        if (this.closed == true) goto L7;
        this.buffer.writeUtf8(r2, r3, r4);
        return emitCompleteSegments();
    L7:
        throw new IllegalStateException("closed");
    }

    @Override
    public BufferedSink writeUtf8CodePoint(int r2) throws IOException {
        if (this.closed == true) goto L7;
        this.buffer.writeUtf8CodePoint(r2);
        return emitCompleteSegments();
    L7:
        throw new IllegalStateException("closed");
    }

    @Override
    public BufferedSink writeString(String r2, Charset r3) throws IOException {
        if (this.closed == true) goto L7;
        this.buffer.writeString(r2, r3);
        return emitCompleteSegments();
    L7:
        throw new IllegalStateException("closed");
    }

    @Override
    public BufferedSink writeString(String r2, int r3, int r4, Charset r5) throws IOException {
        if (this.closed == true) goto L7;
        this.buffer.writeString(r2, r3, r4, r5);
        return emitCompleteSegments();
    L7:
        throw new IllegalStateException("closed");
    }

    @Override
    public BufferedSink write(byte[] r2) throws IOException {
        if (this.closed == true) goto L7;
        this.buffer.write(r2);
        return emitCompleteSegments();
    L7:
        throw new IllegalStateException("closed");
    }

    @Override
    public BufferedSink write(byte[] r2, int r3, int r4) throws IOException {
        if (this.closed == true) goto L7;
        this.buffer.write(r2, r3, r4);
        return emitCompleteSegments();
    L7:
        throw new IllegalStateException("closed");
    }

    @Override
    public int write(ByteBuffer r2) throws IOException {
        if (this.closed == true) goto L7;
        int r22 = this.buffer.write(r2);
        emitCompleteSegments();
        return r22;
    L7:
        throw new IllegalStateException("closed");
    }

    @Override
    public long writeAll(Source r8) throws IOException {
        if (r8 == null) goto L9;
        long r0 = 0;
    L4:
        long r2 = r8.read(this.buffer, 8192);
        if (r2 == (-1)) goto L7;
        r0 = r0 + r2;
        emitCompleteSegments();
        goto L4
    L7:
        return r0;
    L9:
        throw new IllegalArgumentException("source == null");
    }

    @Override
    public BufferedSink write(Source r6, long r7) throws IOException {
    L3:
        if (r7 <= 0) goto L9;
        long r0 = r6.read(this.buffer, r7);
        if (r0 == (-1)) goto L8;
        r7 = r7 - r0;
        emitCompleteSegments();
        goto L3
    L8:
        throw new EOFException();
    L9:
        return this;
    }

    @Override
    public BufferedSink writeByte(int r2) throws IOException {
        if (this.closed == true) goto L7;
        this.buffer.writeByte(r2);
        return emitCompleteSegments();
    L7:
        throw new IllegalStateException("closed");
    }

    @Override
    public BufferedSink writeShort(int r2) throws IOException {
        if (this.closed == true) goto L7;
        this.buffer.writeShort(r2);
        return emitCompleteSegments();
    L7:
        throw new IllegalStateException("closed");
    }

    @Override
    public BufferedSink writeShortLe(int r2) throws IOException {
        if (this.closed == true) goto L7;
        this.buffer.writeShortLe(r2);
        return emitCompleteSegments();
    L7:
        throw new IllegalStateException("closed");
    }

    @Override
    public BufferedSink writeInt(int r2) throws IOException {
        if (this.closed == true) goto L7;
        this.buffer.writeInt(r2);
        return emitCompleteSegments();
    L7:
        throw new IllegalStateException("closed");
    }

    @Override
    public BufferedSink writeIntLe(int r2) throws IOException {
        if (this.closed == true) goto L7;
        this.buffer.writeIntLe(r2);
        return emitCompleteSegments();
    L7:
        throw new IllegalStateException("closed");
    }

    @Override
    public BufferedSink writeLong(long r2) throws IOException {
        if (this.closed == true) goto L7;
        this.buffer.writeLong(r2);
        return emitCompleteSegments();
    L7:
        throw new IllegalStateException("closed");
    }

    @Override
    public BufferedSink writeLongLe(long r2) throws IOException {
        if (this.closed == true) goto L7;
        this.buffer.writeLongLe(r2);
        return emitCompleteSegments();
    L7:
        throw new IllegalStateException("closed");
    }

    @Override
    public BufferedSink writeDecimalLong(long r2) throws IOException {
        if (this.closed == true) goto L7;
        this.buffer.writeDecimalLong(r2);
        return emitCompleteSegments();
    L7:
        throw new IllegalStateException("closed");
    }

    @Override
    public BufferedSink writeHexadecimalUnsignedLong(long r2) throws IOException {
        if (this.closed == true) goto L7;
        this.buffer.writeHexadecimalUnsignedLong(r2);
        return emitCompleteSegments();
    L7:
        throw new IllegalStateException("closed");
    }

    @Override
    public BufferedSink emitCompleteSegments() throws IOException {
        if (this.closed == true) goto L9;
        long r0 = this.buffer.completeSegmentByteCount();
        if (r0 <= 0) goto L7;
        this.sink.write(this.buffer, r0);
    L7:
        return this;
    L9:
        throw new IllegalStateException("closed");
    }

    @Override
    public BufferedSink emit() throws IOException {
        if (this.closed == true) goto L9;
        long r0 = this.buffer.size();
        if (r0 <= 0) goto L7;
        this.sink.write(this.buffer, r0);
    L7:
        return this;
    L9:
        throw new IllegalStateException("closed");
    }

    @Override
    public OutputStream outputStream() {
        return new 1(this);
    }

    @Override
    public void flush() throws IOException {
        if (this.closed == true) goto L10;
        if (this.buffer.size <= 0) goto L7;
        Sink r0 = this.sink;
        Buffer r1 = this.buffer;
        r0.write(r1, r1.size);
    L7:
        this.sink.flush();
        return;
    L10:
        throw new IllegalStateException("closed");
    }

    @Override
    public boolean isOpen() {
        return !this.closed;
    }

    @Override
    public void close() throws IOException {
        if (this.closed == false) goto L5;
        return;
    L5:
        Throwable th = null;
    L10:
        th = th;
    L22:
        this.sink.close();     // Catch: Throwable -> L13
    L16:
        this.closed = true;
        if (th == null) goto L24;
        Util.sneakyRethrow(th);
        return;
    L24:
        return;
    L13:
        th = move-exception;
        if (th != null) goto L16;
        th = th;
        goto L16
    L7:
        if (this.buffer.size <= 0) goto L22;
        this.sink.write(this.buffer, this.buffer.size);     // Catch: Throwable -> L10
        goto L22
    }

    @Override
    public Timeout timeout() {
        return this.sink.timeout();
    }

    public String toString() {
        return "buffer(" + this.sink + ")";
    }
}
