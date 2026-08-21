package com.igexin.push.c;

public class k extends com.igexin.push.f.b.g {
    public static final java.util.concurrent.atomic.AtomicBoolean a = null;
    private static final java.lang.String b = null;
    private static com.igexin.push.c.k c;
    private boolean e;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "DT_"
            r0.append(r1)
            java.lang.Class<com.igexin.push.c.k> r1 = com.igexin.push.c.k.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.igexin.push.c.k.b = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            com.igexin.push.c.k.a = r0
            return
    }

    private k() {
            r2 = this;
            r0 = 10
            r2.<init>(r0)
            r0 = 1
            r2.o = r0
            return
    }

    public static synchronized com.igexin.push.c.k c_() {
            java.lang.Class<com.igexin.push.c.k> r0 = com.igexin.push.c.k.class
            monitor-enter(r0)
            com.igexin.push.c.k r1 = com.igexin.push.c.k.c     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.igexin.push.c.k r1 = new com.igexin.push.c.k     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.igexin.push.c.k.c = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.igexin.push.c.k r1 = com.igexin.push.c.k.c     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public void a(long r2) {
            r1 = this;
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.MILLISECONDS
            r1.a(r2, r0)
            return
    }

    @Override
    public int b_() {
            r1 = this;
            r0 = 20150607(0x133794f, float:3.2964142E-38)
            return r0
    }

    @Override
    protected void d_() {
            r7 = this;
            long r0 = com.igexin.push.c.f.a
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS
            r7.a(r0, r2)
            boolean r0 = r7.e
            r1 = 0
            if (r0 == 0) goto L25
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = com.igexin.push.c.k.b
            r0.append(r2)
            java.lang.String r2 = "|detect task already stop"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            return
        L25:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = com.igexin.push.c.k.b
            r0.append(r2)
            java.lang.String r2 = "|"
            r0.append(r2)
            long r3 = com.igexin.push.c.f.a
            r5 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 / r5
            r0.append(r3)
            java.lang.String r3 = "s passed, do task method, start redect ~~~~"
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r3 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r3)
            boolean r0 = com.igexin.push.util.a.f()
            com.igexin.push.core.d.i = r0
            boolean r0 = com.igexin.push.core.d.i
            if (r0 == 0) goto L5c
            com.igexin.push.c.i r0 = com.igexin.push.c.i.a()
            r0.c()
            goto L7d
        L5c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = com.igexin.push.c.k.b
            r0.append(r3)
            r0.append(r2)
            long r2 = com.igexin.push.c.f.a
            long r2 = r2 / r5
            r0.append(r2)
            java.lang.String r2 = "s passed, network is unavailable, stop ###"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
        L7d:
            return
    }

    public void h() {
            r1 = this;
            r0 = 0
            r1.o = r0
            r0 = 1
            r1.e = r0
            r1.p()
            return
    }
}
