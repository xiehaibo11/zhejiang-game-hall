package com.sigmob.sdk.archives.utils;

public class b extends java.io.FilterInputStream {
    private long a;

    public b(java.io.InputStream r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public long a() {
            r2 = this;
            long r0 = r2.a
            return r0
    }

    protected final void a(long r3) {
            r2 = this;
            r0 = -1
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 == 0) goto Lb
            long r0 = r2.a
            long r0 = r0 + r3
            r2.a = r0
        Lb:
            return
    }

    @Override
    public int read() throws java.io.IOException {
            r3 = this;
            java.io.InputStream r0 = r3.in
            int r0 = r0.read()
            if (r0 < 0) goto Ld
            r1 = 1
            r3.a(r1)
        Ld:
            return r0
    }

    @Override
    public int read(byte[] r3) throws java.io.IOException {
            r2 = this;
            int r0 = r3.length
            r1 = 0
            int r3 = r2.read(r3, r1, r0)
            return r3
    }

    @Override
    public int read(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            java.io.InputStream r0 = r1.in
            int r2 = r0.read(r2, r3, r4)
            if (r2 < 0) goto Lc
            long r3 = (long) r2
            r1.a(r3)
        Lc:
            return r2
    }
}
