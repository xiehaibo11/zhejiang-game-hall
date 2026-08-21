package org.cocos2dx.okio;

import java.io.Closeable;
import java.io.IOException;

public interface Source extends Closeable {
    @Override
    void close() throws IOException;

    long read(Buffer r1, long r2) throws IOException;

    Timeout timeout();
}
