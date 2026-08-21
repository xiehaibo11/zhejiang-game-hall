package com.czhj.wire.okio;

public interface BufferedSource extends com.czhj.wire.okio.Source {
    com.czhj.wire.okio.Buffer buffer();

    boolean exhausted() throws java.io.IOException;

    long indexOf(byte r1) throws java.io.IOException;

    long indexOf(byte r1, long r2) throws java.io.IOException;

    long indexOf(com.czhj.wire.okio.ByteString r1) throws java.io.IOException;

    long indexOf(com.czhj.wire.okio.ByteString r1, long r2) throws java.io.IOException;

    long indexOfElement(com.czhj.wire.okio.ByteString r1) throws java.io.IOException;

    long indexOfElement(com.czhj.wire.okio.ByteString r1, long r2) throws java.io.IOException;

    java.io.InputStream inputStream();

    int read(byte[] r1) throws java.io.IOException;

    int read(byte[] r1, int r2, int r3) throws java.io.IOException;

    long readAll(com.czhj.wire.okio.Sink r1) throws java.io.IOException;

    byte readByte() throws java.io.IOException;

    byte[] readByteArray() throws java.io.IOException;

    byte[] readByteArray(long r1) throws java.io.IOException;

    com.czhj.wire.okio.ByteString readByteString() throws java.io.IOException;

    com.czhj.wire.okio.ByteString readByteString(long r1) throws java.io.IOException;

    long readDecimalLong() throws java.io.IOException;

    void readFully(com.czhj.wire.okio.Buffer r1, long r2) throws java.io.IOException;

    void readFully(byte[] r1) throws java.io.IOException;

    long readHexadecimalUnsignedLong() throws java.io.IOException;

    int readInt() throws java.io.IOException;

    int readIntLe() throws java.io.IOException;

    long readLong() throws java.io.IOException;

    long readLongLe() throws java.io.IOException;

    short readShort() throws java.io.IOException;

    short readShortLe() throws java.io.IOException;

    java.lang.String readString(long r1, java.nio.charset.Charset r3) throws java.io.IOException;

    java.lang.String readString(java.nio.charset.Charset r1) throws java.io.IOException;

    java.lang.String readUtf8() throws java.io.IOException;

    java.lang.String readUtf8(long r1) throws java.io.IOException;

    int readUtf8CodePoint() throws java.io.IOException;

    java.lang.String readUtf8Line() throws java.io.IOException;

    java.lang.String readUtf8LineStrict() throws java.io.IOException;

    boolean request(long r1) throws java.io.IOException;

    void require(long r1) throws java.io.IOException;

    int select(com.czhj.wire.okio.Options r1) throws java.io.IOException;

    void skip(long r1) throws java.io.IOException;
}
