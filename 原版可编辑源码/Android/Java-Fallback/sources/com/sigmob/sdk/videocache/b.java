package com.sigmob.sdk.videocache;

public class b implements com.sigmob.sdk.videocache.s {
    private final byte[] a;
    private java.io.ByteArrayInputStream b;

    public b(byte[] r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public int a(byte[] r4) throws com.sigmob.sdk.videocache.p {
            r3 = this;
            java.io.ByteArrayInputStream r0 = r3.b
            int r1 = r4.length
            r2 = 0
            int r4 = r0.read(r4, r2, r1)
            return r4
    }

    @Override
    public long a() throws com.sigmob.sdk.videocache.p {
            r2 = this;
            byte[] r0 = r2.a
            int r0 = r0.length
            long r0 = (long) r0
            return r0
    }

    @Override
    public void a(long r3) throws com.sigmob.sdk.videocache.p {
            r2 = this;
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            byte[] r1 = r2.a
            r0.<init>(r1)
            r2.b = r0
            r0.skip(r3)
            return
    }

    @Override
    public void b() throws com.sigmob.sdk.videocache.p {
            r0 = this;
            return
    }
}
