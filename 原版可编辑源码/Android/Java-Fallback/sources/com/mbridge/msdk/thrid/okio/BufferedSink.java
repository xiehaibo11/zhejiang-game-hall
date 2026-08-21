package com.mbridge.msdk.thrid.okio;

public interface BufferedSink extends com.mbridge.msdk.thrid.okio.Sink, java.nio.channels.WritableByteChannel {
    com.mbridge.msdk.thrid.okio.Buffer buffer();

    com.mbridge.msdk.thrid.okio.BufferedSink emit() throws java.io.IOException;

    com.mbridge.msdk.thrid.okio.BufferedSink emitCompleteSegments() throws java.io.IOException;

    @Override
    void flush() throws java.io.IOException;

    java.io.OutputStream outputStream();

    com.mbridge.msdk.thrid.okio.BufferedSink write(com.mbridge.msdk.thrid.okio.ByteString r1) throws java.io.IOException;

    com.mbridge.msdk.thrid.okio.BufferedSink write(com.mbridge.msdk.thrid.okio.Source r1, long r2) throws java.io.IOException;

    com.mbridge.msdk.thrid.okio.BufferedSink write(byte[] r1) throws java.io.IOException;

    com.mbridge.msdk.thrid.okio.BufferedSink write(byte[] r1, int r2, int r3) throws java.io.IOException;

    long writeAll(com.mbridge.msdk.thrid.okio.Source r1) throws java.io.IOException;

    com.mbridge.msdk.thrid.okio.BufferedSink writeByte(int r1) throws java.io.IOException;

    com.mbridge.msdk.thrid.okio.BufferedSink writeDecimalLong(long r1) throws java.io.IOException;

    com.mbridge.msdk.thrid.okio.BufferedSink writeHexadecimalUnsignedLong(long r1) throws java.io.IOException;

    com.mbridge.msdk.thrid.okio.BufferedSink writeInt(int r1) throws java.io.IOException;

    com.mbridge.msdk.thrid.okio.BufferedSink writeIntLe(int r1) throws java.io.IOException;

    com.mbridge.msdk.thrid.okio.BufferedSink writeLong(long r1) throws java.io.IOException;

    com.mbridge.msdk.thrid.okio.BufferedSink writeLongLe(long r1) throws java.io.IOException;

    com.mbridge.msdk.thrid.okio.BufferedSink writeShort(int r1) throws java.io.IOException;

    com.mbridge.msdk.thrid.okio.BufferedSink writeShortLe(int r1) throws java.io.IOException;

    com.mbridge.msdk.thrid.okio.BufferedSink writeString(java.lang.String r1, int r2, int r3, java.nio.charset.Charset r4) throws java.io.IOException;

    com.mbridge.msdk.thrid.okio.BufferedSink writeString(java.lang.String r1, java.nio.charset.Charset r2) throws java.io.IOException;

    com.mbridge.msdk.thrid.okio.BufferedSink writeUtf8(java.lang.String r1) throws java.io.IOException;

    com.mbridge.msdk.thrid.okio.BufferedSink writeUtf8(java.lang.String r1, int r2, int r3) throws java.io.IOException;

    com.mbridge.msdk.thrid.okio.BufferedSink writeUtf8CodePoint(int r1) throws java.io.IOException;
}
