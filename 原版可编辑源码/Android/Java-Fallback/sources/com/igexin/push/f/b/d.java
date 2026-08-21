package com.igexin.push.f.b;

public class d extends com.igexin.push.f.b.g {
    private long a;
    private java.util.concurrent.atomic.AtomicBoolean b;

    public d() {
            r2 = this;
            r0 = 604800000(0x240c8400, double:2.988109026E-315)
            r2.<init>(r0)
            long r0 = com.igexin.push.config.j.m
            r2.a = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r2.b = r0
            r0 = 1
            r2.o = r0
            return
    }

    private void a(long r2) {
            r1 = this;
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.MILLISECONDS
            r1.a(r2, r0)
            return
    }

    public static com.igexin.push.f.b.d i() {
            com.igexin.push.f.b.d r0 = com.igexin.push.f.b.e.a()
            return r0
    }

    @Override
    public int b_() {
            r1 = this;
            r0 = 20160629(0x133a075, float:3.299223E-38)
            return r0
    }

    @Override
    protected void d_() {
            r3 = this;
            long r0 = r3.a
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS
            r3.a(r0, r2)
            long r0 = java.lang.System.currentTimeMillis()
            boolean r0 = com.igexin.push.util.a.a(r0)
            boolean r1 = com.igexin.push.core.d.n
            if (r1 != 0) goto L3e
            boolean r1 = com.igexin.push.core.d.i
            if (r1 == 0) goto L3e
            boolean r1 = com.igexin.push.core.d.k
            if (r1 == 0) goto L3e
            if (r0 != 0) goto L3e
            boolean r0 = com.igexin.push.util.a.a()
            if (r0 != 0) goto L24
            goto L3e
        L24:
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "PollingTimerTask|run = true"
            com.igexin.b.a.c.b.a(r1, r0)
            com.igexin.push.d.b r0 = com.igexin.push.d.b.a()
            r0.g()
            r0 = 100
            com.igexin.push.core.d.F = r0
            com.igexin.push.f.b.f r0 = com.igexin.push.f.b.f.i()
            r0.j()
        L3e:
            return
    }

    public void j() {
            r3 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r3.b
            boolean r0 = r0.get()
            if (r0 != 0) goto L16
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            r1 = 0
            r2 = 1
            r0.a(r3, r1, r2)
            java.util.concurrent.atomic.AtomicBoolean r0 = r3.b
            r0.set(r2)
        L16:
            long r0 = r3.a
            r3.a(r0)
            return
    }

    public void k() {
            r3 = this;
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.MILLISECONDS
            r1 = 604800000(0x240c8400, double:2.988109026E-315)
            r3.a(r1, r0)
            return
    }
}
