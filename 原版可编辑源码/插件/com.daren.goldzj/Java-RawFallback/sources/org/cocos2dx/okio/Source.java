package org.cocos2dx.okio;

public interface Source extends java.io.Closeable {
    @Override
    void close() throws java.io.IOException;

    long read(org.cocos2dx.okio.Buffer r1, long r2) throws java.io.IOException;

    org.cocos2dx.okio.Timeout timeout();
}
