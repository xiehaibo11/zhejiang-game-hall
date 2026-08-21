package com.czhj.wire.okio;

public interface Sink extends java.io.Closeable, java.io.Flushable {
    @Override
    void close() throws java.io.IOException;

    void flush() throws java.io.IOException;

    com.czhj.wire.okio.Timeout timeout();

    void write(com.czhj.wire.okio.Buffer r1, long r2) throws java.io.IOException;
}
