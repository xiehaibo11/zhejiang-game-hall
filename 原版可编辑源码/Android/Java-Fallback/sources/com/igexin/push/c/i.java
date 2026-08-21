package com.igexin.push.c;

public class i {
    private static final java.lang.String a = null;
    private static com.igexin.push.c.i b;
    private static com.igexin.push.c.h c;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "DT_"
            r0.append(r1)
            java.lang.Class<com.igexin.push.c.i> r1 = com.igexin.push.c.i.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.igexin.push.c.i.a = r0
            return
    }

    private i() {
            r1 = this;
            r1.<init>()
            boolean r0 = com.igexin.push.util.a.b()
            if (r0 == 0) goto Lc
            com.igexin.push.c.h r0 = com.igexin.push.c.h.a
            goto Le
        Lc:
            com.igexin.push.c.h r0 = com.igexin.push.c.h.b
        Le:
            com.igexin.push.c.i.c = r0
            return
    }

    public static synchronized com.igexin.push.c.i a() {
            java.lang.Class<com.igexin.push.c.i> r0 = com.igexin.push.c.i.class
            monitor-enter(r0)
            com.igexin.push.c.i r1 = com.igexin.push.c.i.b     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.igexin.push.c.i r1 = new com.igexin.push.c.i     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.igexin.push.c.i.b = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.igexin.push.c.i r1 = com.igexin.push.c.i.b     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public void b() {
            r4 = this;
            boolean r0 = com.igexin.push.config.SDKUrlConfig.hasMultipleXfr()
            r1 = 0
            if (r0 != 0) goto L20
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = com.igexin.push.c.i.a
            r0.append(r2)
            java.lang.String r2 = "|xfr len = 1, detect = false"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            goto L2c
        L20:
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            com.igexin.push.c.k r2 = com.igexin.push.c.k.c_()
            r3 = 1
            r0.a(r2, r1, r3)
        L2c:
            return
    }

    public void c() {
            r3 = this;
            boolean r0 = com.igexin.push.config.SDKUrlConfig.hasMultipleXfr()
            if (r0 != 0) goto L7
            return
        L7:
            com.igexin.push.c.m r0 = r3.f()     // Catch: java.lang.Throwable -> Lf
            r0.d()     // Catch: java.lang.Throwable -> Lf
            goto L30
        Lf:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.igexin.push.c.i.a
            r1.append(r2)
            java.lang.String r2 = "|"
            r1.append(r2)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
        L30:
            return
    }

    public com.igexin.push.c.a d() {
            r1 = this;
            com.igexin.push.c.m r0 = r1.f()
            com.igexin.push.c.a r0 = r0.d
            return r0
    }

    public void e() {
            r5 = this;
            boolean r0 = com.igexin.push.config.SDKUrlConfig.hasMultipleXfr()
            r1 = 0
            java.lang.String r2 = "|"
            if (r0 != 0) goto L5b
            com.igexin.push.c.q.a()
            com.igexin.push.c.k r0 = com.igexin.push.c.k.c_()
            r0.h()
            com.igexin.push.c.l r0 = com.igexin.push.c.l.a()     // Catch: java.lang.Throwable -> L3c
            com.igexin.push.c.a r0 = r0.d     // Catch: java.lang.Throwable -> L3c
            r3 = 0
            r0.a(r3)     // Catch: java.lang.Throwable -> L3c
            com.igexin.push.c.s r0 = com.igexin.push.c.s.a()     // Catch: java.lang.Throwable -> L3c
            com.igexin.push.c.a r0 = r0.d     // Catch: java.lang.Throwable -> L3c
            r0.a(r3)     // Catch: java.lang.Throwable -> L3c
            com.igexin.push.c.s r0 = com.igexin.push.c.s.a()     // Catch: java.lang.Throwable -> L3c
            r0.g()     // Catch: java.lang.Throwable -> L3c
            com.igexin.push.c.l r0 = com.igexin.push.c.l.a()     // Catch: java.lang.Throwable -> L3c
            r0.g()     // Catch: java.lang.Throwable -> L3c
            com.igexin.push.c.s r0 = com.igexin.push.c.s.a()     // Catch: java.lang.Throwable -> L3c
            r0.j()     // Catch: java.lang.Throwable -> L3c
            goto L98
        L3c:
            r0 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = com.igexin.push.c.i.a
            r3.append(r4)
            r3.append(r2)
            java.lang.String r0 = r0.toString()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            goto L98
        L5b:
            com.igexin.push.c.s r0 = com.igexin.push.c.s.a()     // Catch: java.lang.Throwable -> L7a
            r0.j()     // Catch: java.lang.Throwable -> L7a
            com.igexin.push.c.s r0 = com.igexin.push.c.s.a()     // Catch: java.lang.Throwable -> L7a
            r0.f()     // Catch: java.lang.Throwable -> L7a
            com.igexin.push.c.l r0 = com.igexin.push.c.l.a()     // Catch: java.lang.Throwable -> L7a
            r0.f()     // Catch: java.lang.Throwable -> L7a
            com.igexin.push.c.m r0 = r5.f()     // Catch: java.lang.Throwable -> L7a
            if (r0 == 0) goto L98
            r0.h()     // Catch: java.lang.Throwable -> L7a
            goto L98
        L7a:
            r0 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = com.igexin.push.c.i.a
            r3.append(r4)
            r3.append(r2)
            java.lang.String r0 = r0.toString()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
        L98:
            return
    }

    public synchronized com.igexin.push.c.m f() {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = com.igexin.push.util.a.b()     // Catch: java.lang.Throwable -> L33
            if (r0 == 0) goto Lc
            com.igexin.push.c.s r0 = com.igexin.push.c.s.a()     // Catch: java.lang.Throwable -> L33
            goto L10
        Lc:
            com.igexin.push.c.l r0 = com.igexin.push.c.l.a()     // Catch: java.lang.Throwable -> L33
        L10:
            com.igexin.push.c.h r1 = r0.b()     // Catch: java.lang.Throwable -> L33
            com.igexin.push.c.h r2 = com.igexin.push.c.i.c     // Catch: java.lang.Throwable -> L33
            if (r1 == r2) goto L2f
            com.igexin.push.c.h r2 = com.igexin.push.c.h.a     // Catch: java.lang.Throwable -> L33
            if (r1 != r2) goto L24
            com.igexin.push.c.l r2 = com.igexin.push.c.l.a()     // Catch: java.lang.Throwable -> L33
            r2.e()     // Catch: java.lang.Throwable -> L33
            goto L2f
        L24:
            com.igexin.push.c.h r2 = com.igexin.push.c.h.b     // Catch: java.lang.Throwable -> L33
            if (r1 != r2) goto L2f
            com.igexin.push.c.s r2 = com.igexin.push.c.s.a()     // Catch: java.lang.Throwable -> L33
            r2.e()     // Catch: java.lang.Throwable -> L33
        L2f:
            com.igexin.push.c.i.c = r1     // Catch: java.lang.Throwable -> L33
            monitor-exit(r3)
            return r0
        L33:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }
}
