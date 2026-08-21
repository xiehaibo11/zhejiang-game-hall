package com.mbridge.msdk.foundation.same.net.e;

public final class b {
    private final int a;
    private final java.util.List<com.mbridge.msdk.foundation.same.net.c.b> b;
    private final java.io.InputStream c;

    public b(int r1, java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r2, java.io.InputStream r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            return
    }

    public final int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public final java.util.List<com.mbridge.msdk.foundation.same.net.c.b> b() {
            r1 = this;
            java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r0 = r1.b
            java.util.List r0 = java.util.Collections.unmodifiableList(r0)
            return r0
    }

    public final java.io.InputStream c() {
            r1 = this;
            java.io.InputStream r0 = r1.c
            return r0
    }
}
