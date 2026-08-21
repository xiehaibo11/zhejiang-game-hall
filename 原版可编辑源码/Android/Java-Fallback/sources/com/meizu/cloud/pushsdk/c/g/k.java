package com.meizu.cloud.pushsdk.c.g;

final class k {
    private static com.meizu.cloud.pushsdk.c.g.j a;
    private static long b;

    private k() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.meizu.cloud.pushsdk.c.g.j a() {
            java.lang.Class<com.meizu.cloud.pushsdk.c.g.k> r0 = com.meizu.cloud.pushsdk.c.g.k.class
            monitor-enter(r0)
            com.meizu.cloud.pushsdk.c.g.j r1 = com.meizu.cloud.pushsdk.c.g.k.a     // Catch: java.lang.Throwable -> L20
            if (r1 == 0) goto L19
            com.meizu.cloud.pushsdk.c.g.j r1 = com.meizu.cloud.pushsdk.c.g.k.a     // Catch: java.lang.Throwable -> L20
            com.meizu.cloud.pushsdk.c.g.j r2 = r1.f     // Catch: java.lang.Throwable -> L20
            com.meizu.cloud.pushsdk.c.g.k.a = r2     // Catch: java.lang.Throwable -> L20
            r2 = 0
            r1.f = r2     // Catch: java.lang.Throwable -> L20
            long r2 = com.meizu.cloud.pushsdk.c.g.k.b     // Catch: java.lang.Throwable -> L20
            r4 = 2048(0x800, double:1.012E-320)
            long r2 = r2 - r4
            com.meizu.cloud.pushsdk.c.g.k.b = r2     // Catch: java.lang.Throwable -> L20
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            return r1
        L19:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            com.meizu.cloud.pushsdk.c.g.j r0 = new com.meizu.cloud.pushsdk.c.g.j
            r0.<init>()
            return r0
        L20:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            throw r1
    }

    static void a(com.meizu.cloud.pushsdk.c.g.j r7) {
            com.meizu.cloud.pushsdk.c.g.j r0 = r7.f
            if (r0 != 0) goto L33
            com.meizu.cloud.pushsdk.c.g.j r0 = r7.g
            if (r0 != 0) goto L33
            boolean r0 = r7.d
            if (r0 == 0) goto Ld
            return
        Ld:
            java.lang.Class<com.meizu.cloud.pushsdk.c.g.k> r0 = com.meizu.cloud.pushsdk.c.g.k.class
            monitor-enter(r0)
            long r1 = com.meizu.cloud.pushsdk.c.g.k.b     // Catch: java.lang.Throwable -> L30
            r3 = 2048(0x800, double:1.012E-320)
            long r1 = r1 + r3
            r5 = 65536(0x10000, double:3.2379E-319)
            int r1 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r1 <= 0) goto L1e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            return
        L1e:
            long r1 = com.meizu.cloud.pushsdk.c.g.k.b     // Catch: java.lang.Throwable -> L30
            long r1 = r1 + r3
            com.meizu.cloud.pushsdk.c.g.k.b = r1     // Catch: java.lang.Throwable -> L30
            com.meizu.cloud.pushsdk.c.g.j r1 = com.meizu.cloud.pushsdk.c.g.k.a     // Catch: java.lang.Throwable -> L30
            r7.f = r1     // Catch: java.lang.Throwable -> L30
            r1 = 0
            r7.c = r1     // Catch: java.lang.Throwable -> L30
            r7.b = r1     // Catch: java.lang.Throwable -> L30
            com.meizu.cloud.pushsdk.c.g.k.a = r7     // Catch: java.lang.Throwable -> L30
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            return
        L30:
            r7 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            throw r7
        L33:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            r7.<init>()
            throw r7
    }
}
