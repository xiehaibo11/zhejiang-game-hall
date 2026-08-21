package com.meizu.cloud.pushsdk.c.g;

final class i implements com.meizu.cloud.pushsdk.c.g.d {
    private final com.meizu.cloud.pushsdk.c.g.b a;
    private final com.meizu.cloud.pushsdk.c.g.m b;
    private boolean c;


    public i(com.meizu.cloud.pushsdk.c.g.m r2) {
            r1 = this;
            com.meizu.cloud.pushsdk.c.g.b r0 = new com.meizu.cloud.pushsdk.c.g.b
            r0.<init>()
            r1.<init>(r2, r0)
            return
    }

    public i(com.meizu.cloud.pushsdk.c.g.m r1, com.meizu.cloud.pushsdk.c.g.b r2) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto La
            r0.a = r2
            r0.b = r1
            return
        La:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "source == null"
            r1.<init>(r2)
            throw r1
    }

    static boolean a(com.meizu.cloud.pushsdk.c.g.i r0) {
            boolean r0 = r0.c
            return r0
    }

    static com.meizu.cloud.pushsdk.c.g.b b(com.meizu.cloud.pushsdk.c.g.i r0) {
            com.meizu.cloud.pushsdk.c.g.b r0 = r0.a
            return r0
    }

    static com.meizu.cloud.pushsdk.c.g.m c(com.meizu.cloud.pushsdk.c.g.i r0) {
            com.meizu.cloud.pushsdk.c.g.m r0 = r0.b
            return r0
    }

    @Override
    public long b(com.meizu.cloud.pushsdk.c.g.b r5, long r6) {
            r4 = this;
            if (r5 == 0) goto L53
            r0 = 0
            int r2 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r2 < 0) goto L3c
            boolean r2 = r4.c
            if (r2 != 0) goto L34
            com.meizu.cloud.pushsdk.c.g.b r2 = r4.a
            long r2 = r2.b
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 != 0) goto L25
            com.meizu.cloud.pushsdk.c.g.m r0 = r4.b
            com.meizu.cloud.pushsdk.c.g.b r1 = r4.a
            r2 = 2048(0x800, double:1.012E-320)
            long r0 = r0.b(r1, r2)
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L25
            return r2
        L25:
            com.meizu.cloud.pushsdk.c.g.b r0 = r4.a
            long r0 = r0.b
            long r6 = java.lang.Math.min(r6, r0)
            com.meizu.cloud.pushsdk.c.g.b r0 = r4.a
            long r5 = r0.b(r5, r6)
            return r5
        L34:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r6 = "closed"
            r5.<init>(r6)
            throw r5
        L3c:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "byteCount < 0: "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            r5.<init>(r6)
            throw r5
        L53:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "sink == null"
            r5.<init>(r6)
            throw r5
    }

    @Override
    public void close() {
            r1 = this;
            boolean r0 = r1.c
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r1.c = r0
            com.meizu.cloud.pushsdk.c.g.m r0 = r1.b
            r0.close()
            com.meizu.cloud.pushsdk.c.g.b r0 = r1.a
            r0.j()
            return
    }

    @Override
    public java.io.InputStream d() {
            r1 = this;
            com.meizu.cloud.pushsdk.c.g.i$1 r0 = new com.meizu.cloud.pushsdk.c.g.i$1
            r0.<init>(r1)
            return r0
    }

    @Override
    public java.lang.String h() {
            r2 = this;
            com.meizu.cloud.pushsdk.c.g.b r0 = r2.a
            com.meizu.cloud.pushsdk.c.g.m r1 = r2.b
            r0.a(r1)
            com.meizu.cloud.pushsdk.c.g.b r0 = r2.a
            java.lang.String r0 = r0.h()
            return r0
    }

    @Override
    public byte[] i() {
            r2 = this;
            com.meizu.cloud.pushsdk.c.g.b r0 = r2.a
            com.meizu.cloud.pushsdk.c.g.m r1 = r2.b
            r0.a(r1)
            com.meizu.cloud.pushsdk.c.g.b r0 = r2.a
            byte[] r0 = r0.i()
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "buffer("
            r0.append(r1)
            com.meizu.cloud.pushsdk.c.g.m r1 = r2.b
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
