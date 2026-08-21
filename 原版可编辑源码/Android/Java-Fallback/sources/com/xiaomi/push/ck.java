package com.xiaomi.push;

class ck extends com.xiaomi.push.al.a {
    final com.xiaomi.push.cj a;

    ck(com.xiaomi.push.cj r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "100957"
            return r0
    }

    @Override
    public void run() {
            r4 = this;
            com.xiaomi.push.cj r0 = r4.a
            java.util.ArrayList r0 = com.xiaomi.push.cj.a(r0)
            monitor-enter(r0)
            com.xiaomi.push.cj r1 = r4.a     // Catch: java.lang.Throwable -> L4c
            java.util.ArrayList r1 = com.xiaomi.push.cj.a(r1)     // Catch: java.lang.Throwable -> L4c
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L4c
            if (r1 <= 0) goto L4a
            com.xiaomi.push.cj r1 = r4.a     // Catch: java.lang.Throwable -> L4c
            java.util.ArrayList r1 = com.xiaomi.push.cj.a(r1)     // Catch: java.lang.Throwable -> L4c
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L4c
            r2 = 1
            if (r1 <= r2) goto L2c
            com.xiaomi.push.cj r1 = r4.a     // Catch: java.lang.Throwable -> L4c
            com.xiaomi.push.cj r2 = r4.a     // Catch: java.lang.Throwable -> L4c
            java.util.ArrayList r2 = com.xiaomi.push.cj.a(r2)     // Catch: java.lang.Throwable -> L4c
            r1.a(r2)     // Catch: java.lang.Throwable -> L4c
            goto L3e
        L2c:
            com.xiaomi.push.cj r1 = r4.a     // Catch: java.lang.Throwable -> L4c
            com.xiaomi.push.cj r2 = r4.a     // Catch: java.lang.Throwable -> L4c
            java.util.ArrayList r2 = com.xiaomi.push.cj.a(r2)     // Catch: java.lang.Throwable -> L4c
            r3 = 0
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L4c
            com.xiaomi.push.cj$a r2 = (com.xiaomi.push.cj.a) r2     // Catch: java.lang.Throwable -> L4c
            r1.b(r2)     // Catch: java.lang.Throwable -> L4c
        L3e:
            com.xiaomi.push.cj r1 = r4.a     // Catch: java.lang.Throwable -> L4c
            java.util.ArrayList r1 = com.xiaomi.push.cj.a(r1)     // Catch: java.lang.Throwable -> L4c
            r1.clear()     // Catch: java.lang.Throwable -> L4c
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L4c
        L4a:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4c
            return
        L4c:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4c
            throw r1
    }
}
