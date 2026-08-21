package com.tkay.expressad.exoplayer.j;

public final class j extends java.io.InputStream {
    private final com.tkay.expressad.exoplayer.j.h a;
    private final com.tkay.expressad.exoplayer.j.k b;
    private final byte[] c;
    private boolean d;
    private boolean e;
    private long f;

    public j(com.tkay.expressad.exoplayer.j.h r2, com.tkay.expressad.exoplayer.j.k r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.d = r0
            r1.e = r0
            r1.a = r2
            r1.b = r3
            r2 = 1
            byte[] r2 = new byte[r2]
            r1.c = r2
            return
    }

    private void c() {
            r2 = this;
            boolean r0 = r2.d
            if (r0 != 0) goto Le
            com.tkay.expressad.exoplayer.j.h r0 = r2.a
            com.tkay.expressad.exoplayer.j.k r1 = r2.b
            r0.a(r1)
            r0 = 1
            r2.d = r0
        Le:
            return
    }

    public final long a() {
            r2 = this;
            long r0 = r2.f
            return r0
    }

    public final void b() {
            r0 = this;
            r0.c()
            return
    }

    @Override
    public final void close() {
            r1 = this;
            boolean r0 = r1.e
            if (r0 != 0) goto Lc
            com.tkay.expressad.exoplayer.j.h r0 = r1.a
            r0.b()
            r0 = 1
            r1.e = r0
        Lc:
            return
    }

    @Override
    public final int read() {
            r2 = this;
            byte[] r0 = r2.c
            int r0 = r2.read(r0)
            r1 = -1
            if (r0 != r1) goto La
            return r1
        La:
            byte[] r0 = r2.c
            r1 = 0
            r0 = r0[r1]
            r0 = r0 & 255(0xff, float:3.57E-43)
            return r0
    }

    @Override
    public final int read(byte[] r3) {
            r2 = this;
            int r0 = r3.length
            r1 = 0
            int r3 = r2.read(r3, r1, r0)
            return r3
    }

    @Override
    public final int read(byte[] r3, int r4, int r5) {
            r2 = this;
            boolean r0 = r2.e
            r0 = r0 ^ 1
            com.tkay.expressad.exoplayer.k.a.b(r0)
            r2.c()
            com.tkay.expressad.exoplayer.j.h r0 = r2.a
            int r3 = r0.a(r3, r4, r5)
            r4 = -1
            if (r3 != r4) goto L14
            return r4
        L14:
            long r4 = r2.f
            long r0 = (long) r3
            long r4 = r4 + r0
            r2.f = r4
            return r3
    }
}
