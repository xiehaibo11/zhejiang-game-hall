package com.tkay.expressad.exoplayer.k;

public final class ac {
    public static final long a = Long.MAX_VALUE;
    private static final long b = 8589934592L;
    private long c;
    private long d;
    private volatile long e;

    public ac(long r3) {
            r2 = this;
            r2.<init>()
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r2.e = r0
            r2.c(r3)
            return
    }

    private long b() {
            r2 = this;
            long r0 = r2.c
            return r0
    }

    private long c() {
            r6 = this;
            long r0 = r6.e
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L11
            long r0 = r6.e
            long r2 = r6.d
            long r0 = r0 + r2
            return r0
        L11:
            long r0 = r6.c
            r4 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r4 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r4 == 0) goto L1d
            return r0
        L1d:
            return r2
    }

    private synchronized void c(long r5) {
            r4 = this;
            monitor-enter(r4)
            long r0 = r4.e     // Catch: java.lang.Throwable -> L16
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            com.tkay.expressad.exoplayer.k.a.b(r0)     // Catch: java.lang.Throwable -> L16
            r4.c = r5     // Catch: java.lang.Throwable -> L16
            monitor-exit(r4)
            return
        L16:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    private static long d(long r2) {
            r0 = 1000000(0xf4240, double:4.940656E-318)
            long r2 = r2 * r0
            r0 = 90000(0x15f90, double:4.4466E-319)
            long r2 = r2 / r0
            return r2
    }

    private void d() {
            r2 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r2.e = r0
            return
    }

    private static long e(long r2) {
            r0 = 90000(0x15f90, double:4.4466E-319)
            long r2 = r2 * r0
            r0 = 1000000(0xf4240, double:4.940656E-318)
            long r2 = r2 / r0
            return r2
    }

    private synchronized void e() {
            r4 = this;
            monitor-enter(r4)
        L1:
            long r0 = r4.e     // Catch: java.lang.Throwable -> L12
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L10
            r4.wait()     // Catch: java.lang.Throwable -> L12
            goto L1
        L10:
            monitor-exit(r4)
            return
        L12:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public final long a() {
            r4 = this;
            long r0 = r4.c
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto Le
            r0 = 0
            return r0
        Le:
            long r0 = r4.e
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L1a
            return r2
        L1a:
            long r0 = r4.d
            return r0
    }

    public final long a(long r14) {
            r13 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r2 = (r14 > r0 ? 1 : (r14 == r0 ? 0 : -1))
            if (r2 != 0) goto La
            return r0
        La:
            long r2 = r13.e
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            r1 = 90000(0x15f90, double:4.4466E-319)
            r3 = 1000000(0xf4240, double:4.940656E-318)
            if (r0 == 0) goto L3f
            long r5 = r13.e
            long r5 = r5 * r1
            long r5 = r5 / r3
            r7 = 4294967296(0x100000000, double:2.121995791E-314)
            long r7 = r7 + r5
            r9 = 8589934592(0x200000000, double:4.243991582E-314)
            long r7 = r7 / r9
            r11 = 1
            long r11 = r7 - r11
            long r11 = r11 * r9
            long r11 = r11 + r14
            long r7 = r7 * r9
            long r14 = r14 + r7
            long r7 = r11 - r5
            long r7 = java.lang.Math.abs(r7)
            long r5 = r14 - r5
            long r5 = java.lang.Math.abs(r5)
            int r0 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r0 >= 0) goto L3f
            r14 = r11
        L3f:
            long r14 = r14 * r3
            long r14 = r14 / r1
            long r14 = r13.b(r14)
            return r14
    }

    public final long b(long r5) {
            r4 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 != 0) goto La
            return r0
        La:
            long r2 = r4.e
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 == 0) goto L13
            r4.e = r5
            goto L28
        L13:
            long r0 = r4.c
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L21
            long r0 = r0 - r5
            r4.d = r0
        L21:
            monitor-enter(r4)
            r4.e = r5     // Catch: java.lang.Throwable -> L2c
            r4.notifyAll()     // Catch: java.lang.Throwable -> L2c
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L2c
        L28:
            long r0 = r4.d
            long r5 = r5 + r0
            return r5
        L2c:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }
}
