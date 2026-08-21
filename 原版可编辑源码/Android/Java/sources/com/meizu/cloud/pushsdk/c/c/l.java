package com.meizu.cloud.pushsdk.c.c;

import java.io.Closeable;
import java.io.InputStream;

public abstract class l implements Closeable {
    public abstract com.meizu.cloud.pushsdk.c.g.d a();

    public final InputStream b() {
        return a().d();
    }

    @Override
    public void close() {
        m.a(a());
    }
}
