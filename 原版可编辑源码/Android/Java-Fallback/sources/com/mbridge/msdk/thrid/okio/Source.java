package com.mbridge.msdk.thrid.okio;

public interface Source extends java.io.Closeable {
    @Override
    void close() throws java.io.IOException;

    long read(com.mbridge.msdk.thrid.okio.Buffer r1, long r2) throws java.io.IOException;

    com.mbridge.msdk.thrid.okio.Timeout timeout();
}
