package com.igexin.push.a.a;

public class b implements com.igexin.push.f.b.c {
    public static final java.lang.String a = null;
    private long b;

    static {
            java.lang.Class<com.igexin.push.a.a.b> r0 = com.igexin.push.a.a.b.class
            java.lang.String r0 = r0.getName()
            com.igexin.push.a.a.b.a = r0
            return
    }

    public b() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.b = r0
            return
    }

    @Override
    public void a() {
            r2 = this;
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "start cron-keep task"
            com.igexin.b.a.c.b.a(r1, r0)
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            r0.j()
            com.igexin.push.core.w r0 = com.igexin.push.core.w.a()
            r0.c()
            com.igexin.push.core.w r0 = com.igexin.push.core.w.a()
            r0.e()
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            r0.h()
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            r0.k()
            return
    }

    @Override
    public void a(long r1) {
            r0 = this;
            r0.b = r1
            return
    }

    @Override
    public boolean b() {
            r4 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r4.b
            long r0 = r0 - r2
            r2 = 3600000(0x36ee80, double:1.7786363E-317)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }
}
