package org.cocos2dx.okio;

import java.io.Closeable;
import java.io.Flushable;
import java.io.IOException;

public interface Sink extends Closeable, Flushable {
    @Override
    void close() throws IOException;

    void flush() throws IOException;

    Timeout timeout();

    void write(Buffer r1, long r2) throws IOException;
}
