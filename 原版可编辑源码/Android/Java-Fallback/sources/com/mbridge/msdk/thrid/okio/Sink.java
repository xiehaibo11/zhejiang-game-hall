package com.mbridge.msdk.thrid.okio;

public interface Sink extends java.io.Closeable, java.io.Flushable {
    @Override
    void close() throws java.io.IOException;

    void flush() throws java.io.IOException;

    com.mbridge.msdk.thrid.okio.Timeout timeout();

    void write(com.mbridge.msdk.thrid.okio.Buffer r1, long r2) throws java.io.IOException;
}
