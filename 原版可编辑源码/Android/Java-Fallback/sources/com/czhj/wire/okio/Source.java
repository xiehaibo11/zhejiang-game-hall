package com.czhj.wire.okio;

public interface Source extends java.io.Closeable {
    @Override
    void close() throws java.io.IOException;

    long read(com.czhj.wire.okio.Buffer r1, long r2) throws java.io.IOException;

    com.czhj.wire.okio.Timeout timeout();
}
