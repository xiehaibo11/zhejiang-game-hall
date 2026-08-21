package com.igexin.push.config;

public class h {
    private static com.igexin.push.config.h a;

    private h() {
            r0 = this;
            r0.<init>()
            return
    }

    public static synchronized com.igexin.push.config.h a() {
            java.lang.Class<com.igexin.push.config.h> r0 = com.igexin.push.config.h.class
            monitor-enter(r0)
            com.igexin.push.config.h r1 = com.igexin.push.config.h.a     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.igexin.push.config.h r1 = new com.igexin.push.config.h     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.igexin.push.config.h.a = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.igexin.push.config.h r1 = com.igexin.push.config.h.a     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public boolean b() {
            r1 = this;
            com.igexin.push.config.m.a()
            com.igexin.push.config.k.a()
            r0 = 1
            return r0
    }
}
