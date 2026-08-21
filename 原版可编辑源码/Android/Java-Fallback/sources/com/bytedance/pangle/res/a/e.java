package com.bytedance.pangle.res.a;

public final class e extends com.bytedance.pangle.res.a.j {
    private long a;

    public e(java.io.InputStream r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public final int a() {
            r5 = this;
            long r0 = r5.b()
            r2 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 > 0) goto Ld
            int r0 = (int) r0
            return r0
        Ld:
            java.lang.ArithmeticException r2 = new java.lang.ArithmeticException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "The byte count "
            r3.<init>(r4)
            r3.append(r0)
            java.lang.String r0 = " is too large to be converted to an int"
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.<init>(r0)
            throw r2
    }

    @Override
    protected final synchronized void a(int r5) {
            r4 = this;
            monitor-enter(r4)
            r0 = -1
            if (r5 == r0) goto Le
            long r0 = r4.a     // Catch: java.lang.Throwable -> Lb
            long r2 = (long) r5     // Catch: java.lang.Throwable -> Lb
            long r0 = r0 + r2
            r4.a = r0     // Catch: java.lang.Throwable -> Lb
            goto Le
        Lb:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
        Le:
            monitor-exit(r4)
            return
    }

    public final synchronized long b() {
            r2 = this;
            monitor-enter(r2)
            long r0 = r2.a     // Catch: java.lang.Throwable -> L5
            monitor-exit(r2)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    @Override
    public final synchronized long skip(long r3) {
            r2 = this;
            monitor-enter(r2)
            long r3 = super.skip(r3)     // Catch: java.lang.Throwable -> Lc
            long r0 = r2.a     // Catch: java.lang.Throwable -> Lc
            long r0 = r0 + r3
            r2.a = r0     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r2)
            return r3
        Lc:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }
}
