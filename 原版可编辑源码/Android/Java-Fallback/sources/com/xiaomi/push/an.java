package com.xiaomi.push;

class an extends com.xiaomi.push.al.b {
    final com.xiaomi.push.al a;

    an(com.xiaomi.push.al r1, com.xiaomi.push.al.a r2) {
            r0 = this;
            r0.a = r1
            r0.<init>(r2)
            return
    }

    @Override
    void b() {
            r3 = this;
            com.xiaomi.push.al r0 = r3.a
            java.lang.Object r0 = com.xiaomi.push.al.a(r0)
            monitor-enter(r0)
            com.xiaomi.push.al r1 = r3.a     // Catch: java.lang.Throwable -> L18
            java.util.Map r1 = com.xiaomi.push.al.a(r1)     // Catch: java.lang.Throwable -> L18
            com.xiaomi.push.al$a r2 = r3.a     // Catch: java.lang.Throwable -> L18
            java.lang.String r2 = r2.a()     // Catch: java.lang.Throwable -> L18
            r1.remove(r2)     // Catch: java.lang.Throwable -> L18
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            return
        L18:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            throw r1
    }
}
