package com.sigmob.sdk.videocache;

public class a implements com.sigmob.sdk.videocache.c {
    private volatile byte[] a;
    private volatile boolean b;

    public a() {
            r1 = this;
            r0 = 0
            byte[] r0 = new byte[r0]
            r1.<init>(r0)
            return
    }

    public a(byte[] r1) {
            r0 = this;
            r0.<init>()
            java.lang.Object r1 = com.sigmob.sdk.videocache.n.a(r1)
            byte[] r1 = (byte[]) r1
            r0.a = r1
            return
    }

    @Override
    public int a(byte[] r3, long r4, int r6) throws com.sigmob.sdk.videocache.p {
            r2 = this;
            byte[] r0 = r2.a
            int r0 = r0.length
            long r0 = (long) r0
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 < 0) goto La
            r3 = -1
            return r3
        La:
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 > 0) goto L1e
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            byte[] r1 = r2.a
            r0.<init>(r1)
            int r4 = (int) r4
            int r3 = r0.read(r3, r4, r6)
            return r3
        L1e:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "Too long offset for memory cache "
            r6.append(r0)
            r6.append(r4)
            java.lang.String r4 = r6.toString()
            r3.<init>(r4)
            throw r3
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
    public void a(byte[] r4, int r5) throws com.sigmob.sdk.videocache.p {
            r3 = this;
            byte[] r0 = r3.a
            com.sigmob.sdk.videocache.n.a(r0)
            r0 = 0
            if (r5 < 0) goto Ld
            int r1 = r4.length
            if (r5 > r1) goto Ld
            r1 = 1
            goto Le
        Ld:
            r1 = r0
        Le:
            com.sigmob.sdk.videocache.n.a(r1)
            byte[] r1 = r3.a
            byte[] r2 = r3.a
            int r2 = r2.length
            int r2 = r2 + r5
            byte[] r1 = java.util.Arrays.copyOf(r1, r2)
            byte[] r2 = r3.a
            int r2 = r2.length
            java.lang.System.arraycopy(r4, r0, r1, r2, r5)
            r3.a = r1
            return
    }

    @Override
    public void b() throws com.sigmob.sdk.videocache.p {
            r0 = this;
            return
    }

    @Override
    public void c() {
            r1 = this;
            r0 = 1
            r1.b = r0
            return
    }

    @Override
    public boolean d() {
            r1 = this;
            boolean r0 = r1.b
            return r0
    }
}
