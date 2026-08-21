package com.meizu.cloud.pushsdk.c.c;

public abstract class l implements java.io.Closeable {
    public l() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract com.meizu.cloud.pushsdk.c.g.d a();

    public final java.io.InputStream b() {
            r1 = this;
            com.meizu.cloud.pushsdk.c.g.d r0 = r1.a()
            java.io.InputStream r0 = r0.d()
            return r0
    }

    @Override
    public void close() {
            r1 = this;
            com.meizu.cloud.pushsdk.c.g.d r0 = r1.a()
            com.meizu.cloud.pushsdk.c.c.m.a(r0)
            return
    }
}
