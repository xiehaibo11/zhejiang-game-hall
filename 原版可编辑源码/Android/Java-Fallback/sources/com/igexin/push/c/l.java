package com.igexin.push.c;

public class l extends com.igexin.push.c.m implements com.igexin.push.c.p {
    private static com.igexin.push.c.l e;

    private l() {
            r2 = this;
            java.lang.String r0 = com.igexin.push.core.d.af
            java.lang.String r1 = com.igexin.push.core.d.ah
            r2.<init>(r0, r1)
            com.igexin.push.c.a r0 = r2.d
            r1 = 0
            r0.a(r1)
            return
    }

    public static synchronized com.igexin.push.c.l a() {
            java.lang.Class<com.igexin.push.c.l> r0 = com.igexin.push.c.l.class
            monitor-enter(r0)
            com.igexin.push.c.l r1 = com.igexin.push.c.l.e     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.igexin.push.c.l r1 = new com.igexin.push.c.l     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.igexin.push.c.l.e = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.igexin.push.c.l r1 = com.igexin.push.c.l.e     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public void a(com.igexin.push.c.g r2, com.igexin.push.c.j r3) {
            r1 = this;
            if (r3 == 0) goto L28
            java.lang.String r0 = r3.a()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Ld
            goto L28
        Ld:
            java.lang.String r0 = r3.a()
            com.igexin.push.c.q r0 = r1.a(r0)
            if (r0 != 0) goto L18
            return
        L18:
            r1.b(r3)
            r0.d()
            r1.m()
            com.igexin.push.c.g r3 = com.igexin.push.c.g.a
            if (r2 != r3) goto L28
            r1.l()
        L28:
            return
    }

    @Override
    public void a(com.igexin.push.c.j r1) {
            r0 = this;
            return
    }

    @Override
    public com.igexin.push.c.h b() {
            r1 = this;
            com.igexin.push.c.h r0 = com.igexin.push.c.h.b
            return r0
    }

    @Override
    public com.igexin.push.c.p c() {
            r0 = this;
            return r0
    }
}
