package org.cocos2dx.okio;

public interface Sink extends java.io.Closeable, java.io.Flushable {
    @Override
    void close() throws java.io.IOException;

    void flush() throws java.io.IOException;

    org.cocos2dx.okio.Timeout timeout();

    void write(org.cocos2dx.okio.Buffer r1, long r2) throws java.io.IOException;
}
