package com.igexin.push.f.b;

public abstract class g extends com.igexin.b.a.d.e {
    long d;

    public g(long r3) {
            r2 = this;
            r0 = 0
            r2.<init>(r0, r3)
            return
    }

    public g(long r3, long r5) {
            r2 = this;
            r0 = 5
            r2.<init>(r0)
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 > 0) goto Lb
            goto L11
        Lb:
            long r0 = java.lang.System.currentTimeMillis()
            long r3 = r3 - r0
            long r5 = r5 + r3
        L11:
            r2.d = r5
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.MILLISECONDS
            r2.a(r5, r3)
            return
    }

    @Override
    public final void b() {
            r0 = this;
            super.b()
            r0.d_()
            return
    }

    protected abstract void d_();

    @Override
    protected void e() {
            r0 = this;
            return
    }
}
