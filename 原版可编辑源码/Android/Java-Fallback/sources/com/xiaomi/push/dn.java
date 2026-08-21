package com.xiaomi.push;

public class dn {
    private static volatile com.xiaomi.push.dn a;
    private com.xiaomi.push.dm a;

    public dn() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.xiaomi.push.dn a() {
            com.xiaomi.push.dn r0 = com.xiaomi.push.dn.a
            if (r0 != 0) goto L17
            java.lang.Class<com.xiaomi.push.dn> r0 = com.xiaomi.push.dn.class
            monitor-enter(r0)
            com.xiaomi.push.dn r1 = com.xiaomi.push.dn.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.xiaomi.push.dn r1 = new com.xiaomi.push.dn     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.xiaomi.push.dn.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.xiaomi.push.dn r0 = com.xiaomi.push.dn.a
            return r0
    }

    public com.xiaomi.push.dm a() {
            r1 = this;
            com.xiaomi.push.dm r0 = r1.a
            return r0
    }

    public void a(com.xiaomi.push.dm r1) {
            r0 = this;
            r0.a = r1
            return
    }
}
