package com.igexin.push.f.b;

public class b extends com.igexin.push.f.b.g {
    private static com.igexin.push.f.b.b a;

    public b() {
            r2 = this;
            com.igexin.push.core.h r0 = com.igexin.push.core.h.a()
            long r0 = r0.b()
            r2.<init>(r0)
            r0 = 1
            r2.o = r0
            return
    }

    public static com.igexin.push.f.b.b i() {
            com.igexin.push.f.b.b r0 = com.igexin.push.f.b.b.a
            if (r0 != 0) goto Lb
            com.igexin.push.f.b.b r0 = new com.igexin.push.f.b.b
            r0.<init>()
            com.igexin.push.f.b.b.a = r0
        Lb:
            com.igexin.push.f.b.b r0 = com.igexin.push.f.b.b.a
            return r0
    }

    @Override
    public final int b_() {
            r1 = this;
            r0 = -2147483642(0xffffffff80000006, float:-8.4E-45)
            return r0
    }

    @Override
    public void c() {
            r1 = this;
            super.c()
            boolean r0 = r1.k
            if (r0 != 0) goto La
            r1.j()
        La:
            return
    }

    @Override
    public void d() {
            r0 = this;
            return
    }

    @Override
    protected void d_() {
            r2 = this;
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            r0.l()
            long r0 = java.lang.System.currentTimeMillis()
            com.igexin.push.core.d.G = r0
            boolean r0 = com.igexin.push.core.d.n
            r1 = 0
            if (r0 == 0) goto L25
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.String r1 = "heartbeatReq"
            com.igexin.b.a.c.b.a(r1, r0)
            com.igexin.push.core.c r0 = com.igexin.push.core.c.a()
            com.igexin.push.core.a.e r0 = r0.j()
            r0.b()
            goto L2f
        L25:
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.String r1 = "HeartBeatTimerTask doTaskMethod isOnline = false, refresh wait time !!!!!!"
            com.igexin.b.a.c.b.a(r1, r0)
            r2.j()
        L2f:
            return
    }

    public void j() {
            r3 = this;
            com.igexin.push.core.h r0 = com.igexin.push.core.h.a()
            long r0 = r0.b()
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS
            r3.a(r0, r2)
            return
    }

    public void k() {
            r0 = this;
            return
    }
}
