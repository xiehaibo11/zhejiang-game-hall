package org.cocos2dx.okio;

public interface BufferedSink extends org.cocos2dx.okio.Sink, java.nio.channels.WritableByteChannel {
    org.cocos2dx.okio.Buffer buffer();

    org.cocos2dx.okio.BufferedSink emit() throws java.io.IOException;

    org.cocos2dx.okio.BufferedSink emitCompleteSegments() throws java.io.IOException;

    @Override
    void flush() throws java.io.IOException;

    java.io.OutputStream outputStream();

    org.cocos2dx.okio.BufferedSink write(org.cocos2dx.okio.ByteString r1) throws java.io.IOException;

    org.cocos2dx.okio.BufferedSink write(org.cocos2dx.okio.Source r1, long r2) throws java.io.IOException;

    org.cocos2dx.okio.BufferedSink write(byte[] r1) throws java.io.IOException;

    org.cocos2dx.okio.BufferedSink write(byte[] r1, int r2, int r3) throws java.io.IOException;

    long writeAll(org.cocos2dx.okio.Source r1) throws java.io.IOException;

    org.cocos2dx.okio.BufferedSink writeByte(int r1) throws java.io.IOException;

    org.cocos2dx.okio.BufferedSink writeDecimalLong(long r1) throws java.io.IOException;

    org.cocos2dx.okio.BufferedSink writeHexadecimalUnsignedLong(long r1) throws java.io.IOException;

    org.cocos2dx.okio.BufferedSink writeInt(int r1) throws java.io.IOException;

    org.cocos2dx.okio.BufferedSink writeIntLe(int r1) throws java.io.IOException;

    org.cocos2dx.okio.BufferedSink writeLong(long r1) throws java.io.IOException;

    org.cocos2dx.okio.BufferedSink writeLongLe(long r1) throws java.io.IOException;

    org.cocos2dx.okio.BufferedSink writeShort(int r1) throws java.io.IOException;

    org.cocos2dx.okio.BufferedSink writeShortLe(int r1) throws java.io.IOException;

    org.cocos2dx.okio.BufferedSink writeString(java.lang.String r1, int r2, int r3, java.nio.charset.Charset r4) throws java.io.IOException;

    org.cocos2dx.okio.BufferedSink writeString(java.lang.String r1, java.nio.charset.Charset r2) throws java.io.IOException;

    org.cocos2dx.okio.BufferedSink writeUtf8(java.lang.String r1) throws java.io.IOException;

    org.cocos2dx.okio.BufferedSink writeUtf8(java.lang.String r1, int r2, int r3) throws java.io.IOException;

    org.cocos2dx.okio.BufferedSink writeUtf8CodePoint(int r1) throws java.io.IOException;
}
