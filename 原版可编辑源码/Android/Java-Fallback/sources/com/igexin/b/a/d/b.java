package com.igexin.b.a.d;

public abstract class b implements com.igexin.b.a.d.a.f {
    protected boolean a;

    public b() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.a = r0
            return
    }

    public void a() {
            r1 = this;
            r0 = 0
            r1.a = r0
            return
    }

    @Override
    public boolean a(long r5, com.igexin.b.a.d.e r7) {
            r4 = this;
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.SECONDS
            int r1 = r7.y
            long r1 = (long) r1
            long r0 = r0.toMillis(r1)
            long r2 = r7.w
            long r5 = r5 - r2
            int r5 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r5 >= 0) goto L12
            r5 = 1
            goto L13
        L12:
            r5 = 0
        L13:
            return r5
    }

    @Override
    public long b(long r5, com.igexin.b.a.d.e r7) {
            r4 = this;
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.SECONDS
            int r1 = r7.y
            long r1 = (long) r1
            long r0 = r0.toMillis(r1)
            long r2 = r7.w
            long r0 = r0 + r2
            long r0 = r0 - r5
            return r0
    }
}
