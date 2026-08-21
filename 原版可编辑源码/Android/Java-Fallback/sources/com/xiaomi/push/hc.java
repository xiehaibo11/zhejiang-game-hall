package com.xiaomi.push;

final class hc extends com.xiaomi.push.ao.b {
    final android.content.Context a;

    hc(android.content.Context r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void b() {
            r3 = this;
            java.lang.Object r0 = com.xiaomi.push.hb.a()
            monitor-enter(r0)
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L1c
            java.util.List r2 = com.xiaomi.push.hb.a()     // Catch: java.lang.Throwable -> L1c
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1c
            java.util.List r2 = com.xiaomi.push.hb.a()     // Catch: java.lang.Throwable -> L1c
            r2.clear()     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1c
            android.content.Context r0 = r3.a
            com.xiaomi.push.hb.a(r0, r1)
            return
        L1c:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1c
            throw r1
    }
}
