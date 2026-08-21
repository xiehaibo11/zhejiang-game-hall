package com.sigmob.sdk.archives;

public abstract class c extends java.io.InputStream {
    private static final int b = 255;
    private byte[] a;
    private long c;

    public c() {
            r2 = this;
            r2.<init>()
            r0 = 1
            byte[] r0 = new byte[r0]
            r2.a = r0
            r0 = 0
            r2.c = r0
            return
    }

    private void b(long r3) {
            r2 = this;
            r0 = -1
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 == 0) goto Lb
            long r0 = r2.c
            long r0 = r0 + r3
            r2.c = r0
        Lb:
            return
    }

    public abstract com.sigmob.sdk.archives.a a() throws java.io.IOException;

    protected void a(int r3) {
            r2 = this;
            long r0 = (long) r3
            r2.b(r0)
            return
    }

    protected void a(long r3) {
            r2 = this;
            long r0 = r2.c
            long r0 = r0 - r3
            r2.c = r0
            return
    }

    public boolean a(com.sigmob.sdk.archives.a r1) {
            r0 = this;
            r1 = 1
            return r1
    }

    @java.lang.Deprecated
    public int b() {
            r2 = this;
            long r0 = r2.c
            int r0 = (int) r0
            return r0
    }

    protected long c() {
            r2 = this;
            long r0 = r2.c
            return r0
    }

    @Override
    public int read() throws java.io.IOException {
            r3 = this;
            byte[] r0 = r3.a
            r1 = 0
            r2 = 1
            int r0 = r3.read(r0, r1, r2)
            r2 = -1
            if (r0 != r2) goto Lc
            goto L12
        Lc:
            byte[] r0 = r3.a
            r0 = r0[r1]
            r2 = r0 & 255(0xff, float:3.57E-43)
        L12:
            return r2
    }
}
