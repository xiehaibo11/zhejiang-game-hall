package com.meizu.cloud.pushsdk.c.g;

import java.io.Closeable;
import java.io.Flushable;

public interface l extends Closeable, Flushable {
    void a(b bVar, long j);

    @Override
    void close();

    void flush();
}
