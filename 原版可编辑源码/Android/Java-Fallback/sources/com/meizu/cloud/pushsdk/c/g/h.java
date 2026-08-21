package com.meizu.cloud.pushsdk.c.g;

final class h implements com.meizu.cloud.pushsdk.c.g.c {
    private final com.meizu.cloud.pushsdk.c.g.b a;
    private final com.meizu.cloud.pushsdk.c.g.l b;
    private boolean c;

    public h(com.meizu.cloud.pushsdk.c.g.l r2) {
            r1 = this;
            com.meizu.cloud.pushsdk.c.g.b r0 = new com.meizu.cloud.pushsdk.c.g.b
            r0.<init>()
            r1.<init>(r2, r0)
            return
    }

    public h(com.meizu.cloud.pushsdk.c.g.l r1, com.meizu.cloud.pushsdk.c.g.b r2) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto La
            r0.a = r2
            r0.b = r1
            return
        La:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "sink == null"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public long a(com.meizu.cloud.pushsdk.c.g.m r7) {
            r6 = this;
            if (r7 == 0) goto L18
            r0 = 0
        L4:
            com.meizu.cloud.pushsdk.c.g.b r2 = r6.a
            r3 = 2048(0x800, double:1.012E-320)
            long r2 = r7.b(r2, r3)
            r4 = -1
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 == 0) goto L17
            long r0 = r0 + r2
            r6.a()
            goto L4
        L17:
            return r0
        L18:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "source == null"
            r7.<init>(r0)
            throw r7
    }

    public com.meizu.cloud.pushsdk.c.g.c a() {
            r4 = this;
            boolean r0 = r4.c
            if (r0 != 0) goto L18
            com.meizu.cloud.pushsdk.c.g.b r0 = r4.a
            long r0 = r0.e()
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L17
            com.meizu.cloud.pushsdk.c.g.l r2 = r4.b
            com.meizu.cloud.pushsdk.c.g.b r3 = r4.a
            r2.a(r3, r0)
        L17:
            return r4
        L18:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "closed"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public void a(com.meizu.cloud.pushsdk.c.g.b r2, long r3) {
            r1 = this;
            boolean r0 = r1.c
            if (r0 != 0) goto Ld
            com.meizu.cloud.pushsdk.c.g.b r0 = r1.a
            r0.a(r2, r3)
            r1.a()
            return
        Ld:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public com.meizu.cloud.pushsdk.c.g.b b() {
            r1 = this;
            com.meizu.cloud.pushsdk.c.g.b r0 = r1.a
            return r0
    }

    @Override
    public com.meizu.cloud.pushsdk.c.g.c b(com.meizu.cloud.pushsdk.c.g.e r2) {
            r1 = this;
            boolean r0 = r1.c
            if (r0 != 0) goto Le
            com.meizu.cloud.pushsdk.c.g.b r0 = r1.a
            r0.a(r2)
            com.meizu.cloud.pushsdk.c.g.c r2 = r1.a()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public com.meizu.cloud.pushsdk.c.g.c b(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.c
            if (r0 != 0) goto Le
            com.meizu.cloud.pushsdk.c.g.b r0 = r1.a
            r0.a(r2)
            com.meizu.cloud.pushsdk.c.g.c r2 = r1.a()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public com.meizu.cloud.pushsdk.c.g.c c(byte[] r2) {
            r1 = this;
            boolean r0 = r1.c
            if (r0 != 0) goto Le
            com.meizu.cloud.pushsdk.c.g.b r0 = r1.a
            r0.b(r2)
            com.meizu.cloud.pushsdk.c.g.c r2 = r1.a()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public com.meizu.cloud.pushsdk.c.g.c c(byte[] r2, int r3, int r4) {
            r1 = this;
            boolean r0 = r1.c
            if (r0 != 0) goto Le
            com.meizu.cloud.pushsdk.c.g.b r0 = r1.a
            r0.b(r2, r3, r4)
            com.meizu.cloud.pushsdk.c.g.c r2 = r1.a()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public void close() {
            r5 = this;
            boolean r0 = r5.c
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 0
            com.meizu.cloud.pushsdk.c.g.b r1 = r5.a     // Catch: java.lang.Throwable -> L1c
            long r1 = r1.b     // Catch: java.lang.Throwable -> L1c
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L1d
            com.meizu.cloud.pushsdk.c.g.l r1 = r5.b     // Catch: java.lang.Throwable -> L1c
            com.meizu.cloud.pushsdk.c.g.b r2 = r5.a     // Catch: java.lang.Throwable -> L1c
            com.meizu.cloud.pushsdk.c.g.b r3 = r5.a     // Catch: java.lang.Throwable -> L1c
            long r3 = r3.b     // Catch: java.lang.Throwable -> L1c
            r1.a(r2, r3)     // Catch: java.lang.Throwable -> L1c
            goto L1d
        L1c:
            r0 = move-exception
        L1d:
            com.meizu.cloud.pushsdk.c.g.l r1 = r5.b     // Catch: java.lang.Throwable -> L23
            r1.close()     // Catch: java.lang.Throwable -> L23
            goto L27
        L23:
            r1 = move-exception
            if (r0 != 0) goto L27
            r0 = r1
        L27:
            r1 = 1
            r5.c = r1
            if (r0 == 0) goto L2f
            com.meizu.cloud.pushsdk.c.g.o.a(r0)
        L2f:
            return
    }

    @Override
    public com.meizu.cloud.pushsdk.c.g.c e(long r2) {
            r1 = this;
            boolean r0 = r1.c
            if (r0 != 0) goto Le
            com.meizu.cloud.pushsdk.c.g.b r0 = r1.a
            r0.c(r2)
            com.meizu.cloud.pushsdk.c.g.c r2 = r1.a()
            return r2
        Le:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public void flush() {
            r4 = this;
            boolean r0 = r4.c
            if (r0 != 0) goto L1d
            com.meizu.cloud.pushsdk.c.g.b r0 = r4.a
            long r0 = r0.b
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L17
            com.meizu.cloud.pushsdk.c.g.l r0 = r4.b
            com.meizu.cloud.pushsdk.c.g.b r1 = r4.a
            long r2 = r1.b
            r0.a(r1, r2)
        L17:
            com.meizu.cloud.pushsdk.c.g.l r0 = r4.b
            r0.flush()
            return
        L1d:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "closed"
            r0.<init>(r1)
            throw r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "buffer("
            r0.append(r1)
            com.meizu.cloud.pushsdk.c.g.l r1 = r2.b
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
