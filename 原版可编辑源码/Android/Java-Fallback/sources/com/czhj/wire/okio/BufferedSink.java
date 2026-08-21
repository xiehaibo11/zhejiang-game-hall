package com.czhj.wire.okio;

public interface BufferedSink extends com.czhj.wire.okio.Sink {
    com.czhj.wire.okio.Buffer buffer();

    com.czhj.wire.okio.BufferedSink emit() throws java.io.IOException;

    com.czhj.wire.okio.BufferedSink emitCompleteSegments() throws java.io.IOException;

    @Override
    void flush() throws java.io.IOException;

    java.io.OutputStream outputStream();

    com.czhj.wire.okio.BufferedSink write(com.czhj.wire.okio.ByteString r1) throws java.io.IOException;

    com.czhj.wire.okio.BufferedSink write(com.czhj.wire.okio.Source r1, long r2) throws java.io.IOException;

    com.czhj.wire.okio.BufferedSink write(byte[] r1) throws java.io.IOException;

    com.czhj.wire.okio.BufferedSink write(byte[] r1, int r2, int r3) throws java.io.IOException;

    long writeAll(com.czhj.wire.okio.Source r1) throws java.io.IOException;

    com.czhj.wire.okio.BufferedSink writeByte(int r1) throws java.io.IOException;

    com.czhj.wire.okio.BufferedSink writeDecimalLong(long r1) throws java.io.IOException;

    com.czhj.wire.okio.BufferedSink writeHexadecimalUnsignedLong(long r1) throws java.io.IOException;

    com.czhj.wire.okio.BufferedSink writeInt(int r1) throws java.io.IOException;

    com.czhj.wire.okio.BufferedSink writeIntLe(int r1) throws java.io.IOException;

    com.czhj.wire.okio.BufferedSink writeLong(long r1) throws java.io.IOException;

    com.czhj.wire.okio.BufferedSink writeLongLe(long r1) throws java.io.IOException;

    com.czhj.wire.okio.BufferedSink writeShort(int r1) throws java.io.IOException;

    com.czhj.wire.okio.BufferedSink writeShortLe(int r1) throws java.io.IOException;

    com.czhj.wire.okio.BufferedSink writeString(java.lang.String r1, int r2, int r3, java.nio.charset.Charset r4) throws java.io.IOException;

    com.czhj.wire.okio.BufferedSink writeString(java.lang.String r1, java.nio.charset.Charset r2) throws java.io.IOException;

    com.czhj.wire.okio.BufferedSink writeUtf8(java.lang.String r1) throws java.io.IOException;

    com.czhj.wire.okio.BufferedSink writeUtf8(java.lang.String r1, int r2, int r3) throws java.io.IOException;

    com.czhj.wire.okio.BufferedSink writeUtf8CodePoint(int r1) throws java.io.IOException;
}
