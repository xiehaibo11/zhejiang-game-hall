package com.tkay.expressad.exoplayer.j;

public final class m implements com.tkay.expressad.exoplayer.j.aa<java.lang.Object>, com.tkay.expressad.exoplayer.j.d {
    public static final long a = 1000000;
    public static final int b = 2000;
    private static final int c = 2000;
    private static final int d = 524288;
    private final android.os.Handler e;
    private final com.tkay.expressad.exoplayer.j.d.a f;
    private final com.tkay.expressad.exoplayer.k.y g;
    private final com.tkay.expressad.exoplayer.k.c h;
    private int i;
    private long j;
    private long k;
    private long l;
    private long m;
    private long n;

    final class 1 implements java.lang.Runnable {
        final int a;
        final long b;
        final long c;
        final com.tkay.expressad.exoplayer.j.m d;

        1(com.tkay.expressad.exoplayer.j.m r1, int r2, long r3, long r5) {
                r0 = this;
                r0.d = r1
                r0.a = r2
                r0.b = r3
                r0.c = r5
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r1 = this;
                com.tkay.expressad.exoplayer.j.m r0 = r1.d
                com.tkay.expressad.exoplayer.j.d$a r0 = com.tkay.expressad.exoplayer.j.m.a(r0)
                r0.c()
                return
        }
    }

    public static final class a {
        private android.os.Handler a;
        private com.tkay.expressad.exoplayer.j.d.a b;
        private long c;
        private int d;
        private com.tkay.expressad.exoplayer.k.c e;

        public a() {
                r2 = this;
                r2.<init>()
                r0 = 1000000(0xf4240, double:4.940656E-318)
                r2.c = r0
                r0 = 2000(0x7d0, float:2.803E-42)
                r2.d = r0
                com.tkay.expressad.exoplayer.k.c r0 = com.tkay.expressad.exoplayer.k.c.a
                r2.e = r0
                return
        }

        private com.tkay.expressad.exoplayer.j.m.a a(int r1) {
                r0 = this;
                r0.d = r1
                return r0
        }

        private com.tkay.expressad.exoplayer.j.m.a a(long r1) {
                r0 = this;
                r0.c = r1
                return r0
        }

        private com.tkay.expressad.exoplayer.j.m.a a(android.os.Handler r2, com.tkay.expressad.exoplayer.j.d.a r3) {
                r1 = this;
                if (r2 == 0) goto L6
                if (r3 == 0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                com.tkay.expressad.exoplayer.k.a.a(r0)
                r1.a = r2
                r1.b = r3
                return r1
        }

        private com.tkay.expressad.exoplayer.j.m.a a(com.tkay.expressad.exoplayer.k.c r1) {
                r0 = this;
                r0.e = r1
                return r0
        }

        private com.tkay.expressad.exoplayer.j.m a() {
                r9 = this;
                com.tkay.expressad.exoplayer.j.m r8 = new com.tkay.expressad.exoplayer.j.m
                android.os.Handler r1 = r9.a
                com.tkay.expressad.exoplayer.j.d$a r2 = r9.b
                long r3 = r9.c
                int r5 = r9.d
                com.tkay.expressad.exoplayer.k.c r6 = r9.e
                r7 = 0
                r0 = r8
                r0.<init>(r1, r2, r3, r5, r6, r7)
                return r8
        }
    }

    public m() {
            r7 = this;
            com.tkay.expressad.exoplayer.k.c r6 = com.tkay.expressad.exoplayer.k.c.a
            r1 = 0
            r2 = 0
            r3 = 1000000(0xf4240, double:4.940656E-318)
            r5 = 2000(0x7d0, float:2.803E-42)
            r0 = r7
            r0.<init>(r1, r2, r3, r5, r6)
            return
    }

    @java.lang.Deprecated
    private m(android.os.Handler r8, com.tkay.expressad.exoplayer.j.d.a r9) {
            r7 = this;
            com.tkay.expressad.exoplayer.k.c r6 = com.tkay.expressad.exoplayer.k.c.a
            r3 = 1000000(0xf4240, double:4.940656E-318)
            r5 = 2000(0x7d0, float:2.803E-42)
            r0 = r7
            r1 = r8
            r2 = r9
            r0.<init>(r1, r2, r3, r5, r6)
            return
    }

    @java.lang.Deprecated
    private m(android.os.Handler r8, com.tkay.expressad.exoplayer.j.d.a r9, int r10) {
            r7 = this;
            com.tkay.expressad.exoplayer.k.c r6 = com.tkay.expressad.exoplayer.k.c.a
            r3 = 1000000(0xf4240, double:4.940656E-318)
            r0 = r7
            r1 = r8
            r2 = r9
            r5 = r10
            r0.<init>(r1, r2, r3, r5, r6)
            return
    }

    private m(android.os.Handler r1, com.tkay.expressad.exoplayer.j.d.a r2, long r3, int r5, com.tkay.expressad.exoplayer.k.c r6) {
            r0 = this;
            r0.<init>()
            r0.e = r1
            r0.f = r2
            com.tkay.expressad.exoplayer.k.y r1 = new com.tkay.expressad.exoplayer.k.y
            r1.<init>(r5)
            r0.g = r1
            r0.h = r6
            r0.n = r3
            return
    }

    m(android.os.Handler r1, com.tkay.expressad.exoplayer.j.d.a r2, long r3, int r5, com.tkay.expressad.exoplayer.k.c r6, byte r7) {
            r0 = this;
            r0.<init>(r1, r2, r3, r5, r6)
            return
    }

    static com.tkay.expressad.exoplayer.j.d.a a(com.tkay.expressad.exoplayer.j.m r0) {
            com.tkay.expressad.exoplayer.j.d$a r0 = r0.f
            return r0
    }

    private void a(int r10, long r11, long r13) {
            r9 = this;
            android.os.Handler r0 = r9.e
            if (r0 == 0) goto L15
            com.tkay.expressad.exoplayer.j.d$a r1 = r9.f
            if (r1 == 0) goto L15
            com.tkay.expressad.exoplayer.j.m$1 r1 = new com.tkay.expressad.exoplayer.j.m$1
            r2 = r1
            r3 = r9
            r4 = r10
            r5 = r11
            r7 = r13
            r2.<init>(r3, r4, r5, r7)
            r0.post(r1)
        L15:
            return
    }

    @Override
    public final synchronized long a() {
            r2 = this;
            monitor-enter(r2)
            long r0 = r2.n     // Catch: java.lang.Throwable -> L5
            monitor-exit(r2)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    @Override
    public final synchronized void a(int r5) {
            r4 = this;
            monitor-enter(r4)
            long r0 = r4.k     // Catch: java.lang.Throwable -> L9
            long r2 = (long) r5     // Catch: java.lang.Throwable -> L9
            long r0 = r0 + r2
            r4.k = r0     // Catch: java.lang.Throwable -> L9
            monitor-exit(r4)
            return
        L9:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    @Override
    public final synchronized void b() {
            r2 = this;
            monitor-enter(r2)
            int r0 = r2.i     // Catch: java.lang.Throwable -> L15
            if (r0 != 0) goto Ld
            com.tkay.expressad.exoplayer.k.c r0 = r2.h     // Catch: java.lang.Throwable -> L15
            long r0 = r0.a()     // Catch: java.lang.Throwable -> L15
            r2.j = r0     // Catch: java.lang.Throwable -> L15
        Ld:
            int r0 = r2.i     // Catch: java.lang.Throwable -> L15
            int r0 = r0 + 1
            r2.i = r0     // Catch: java.lang.Throwable -> L15
            monitor-exit(r2)
            return
        L15:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    @Override
    public final synchronized void c() {
            r13 = this;
            monitor-enter(r13)
            int r0 = r13.i     // Catch: java.lang.Throwable -> L7b
            r1 = 1
            if (r0 <= 0) goto L8
            r0 = r1
            goto L9
        L8:
            r0 = 0
        L9:
            com.tkay.expressad.exoplayer.k.a.b(r0)     // Catch: java.lang.Throwable -> L7b
            com.tkay.expressad.exoplayer.k.c r0 = r13.h     // Catch: java.lang.Throwable -> L7b
            long r2 = r0.a()     // Catch: java.lang.Throwable -> L7b
            long r4 = r13.j     // Catch: java.lang.Throwable -> L7b
            long r4 = r2 - r4
            int r8 = (int) r4     // Catch: java.lang.Throwable -> L7b
            long r4 = r13.l     // Catch: java.lang.Throwable -> L7b
            long r6 = (long) r8     // Catch: java.lang.Throwable -> L7b
            long r4 = r4 + r6
            r13.l = r4     // Catch: java.lang.Throwable -> L7b
            long r4 = r13.m     // Catch: java.lang.Throwable -> L7b
            long r9 = r13.k     // Catch: java.lang.Throwable -> L7b
            long r4 = r4 + r9
            r13.m = r4     // Catch: java.lang.Throwable -> L7b
            if (r8 <= 0) goto L54
            long r4 = r13.k     // Catch: java.lang.Throwable -> L7b
            r9 = 8000(0x1f40, double:3.9525E-320)
            long r4 = r4 * r9
            long r4 = r4 / r6
            float r0 = (float) r4     // Catch: java.lang.Throwable -> L7b
            com.tkay.expressad.exoplayer.k.y r4 = r13.g     // Catch: java.lang.Throwable -> L7b
            long r5 = r13.k     // Catch: java.lang.Throwable -> L7b
            double r5 = (double) r5     // Catch: java.lang.Throwable -> L7b
            double r5 = java.lang.Math.sqrt(r5)     // Catch: java.lang.Throwable -> L7b
            int r5 = (int) r5     // Catch: java.lang.Throwable -> L7b
            r4.a(r5, r0)     // Catch: java.lang.Throwable -> L7b
            long r4 = r13.l     // Catch: java.lang.Throwable -> L7b
            r6 = 2000(0x7d0, double:9.88E-321)
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 >= 0) goto L4b
            long r4 = r13.m     // Catch: java.lang.Throwable -> L7b
            r6 = 524288(0x80000, double:2.590327E-318)
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 < 0) goto L54
        L4b:
            com.tkay.expressad.exoplayer.k.y r0 = r13.g     // Catch: java.lang.Throwable -> L7b
            float r0 = r0.a()     // Catch: java.lang.Throwable -> L7b
            long r4 = (long) r0     // Catch: java.lang.Throwable -> L7b
            r13.n = r4     // Catch: java.lang.Throwable -> L7b
        L54:
            long r9 = r13.k     // Catch: java.lang.Throwable -> L7b
            long r11 = r13.n     // Catch: java.lang.Throwable -> L7b
            android.os.Handler r0 = r13.e     // Catch: java.lang.Throwable -> L7b
            if (r0 == 0) goto L6c
            com.tkay.expressad.exoplayer.j.d$a r0 = r13.f     // Catch: java.lang.Throwable -> L7b
            if (r0 == 0) goto L6c
            android.os.Handler r0 = r13.e     // Catch: java.lang.Throwable -> L7b
            com.tkay.expressad.exoplayer.j.m$1 r4 = new com.tkay.expressad.exoplayer.j.m$1     // Catch: java.lang.Throwable -> L7b
            r6 = r4
            r7 = r13
            r6.<init>(r7, r8, r9, r11)     // Catch: java.lang.Throwable -> L7b
            r0.post(r4)     // Catch: java.lang.Throwable -> L7b
        L6c:
            int r0 = r13.i     // Catch: java.lang.Throwable -> L7b
            int r0 = r0 - r1
            r13.i = r0     // Catch: java.lang.Throwable -> L7b
            if (r0 <= 0) goto L75
            r13.j = r2     // Catch: java.lang.Throwable -> L7b
        L75:
            r0 = 0
            r13.k = r0     // Catch: java.lang.Throwable -> L7b
            monitor-exit(r13)
            return
        L7b:
            r0 = move-exception
            monitor-exit(r13)
            throw r0
    }
}
