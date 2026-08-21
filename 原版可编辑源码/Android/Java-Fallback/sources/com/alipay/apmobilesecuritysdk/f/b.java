package com.alipay.apmobilesecuritysdk.f;

public final class b {
    public static com.alipay.apmobilesecuritysdk.f.b a;
    public java.lang.Thread b;
    public java.util.LinkedList<java.lang.Runnable> c;

    static {
            com.alipay.apmobilesecuritysdk.f.b r0 = new com.alipay.apmobilesecuritysdk.f.b
            r0.<init>()
            com.alipay.apmobilesecuritysdk.f.b.a = r0
            return
    }

    public b() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.b = r0
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1.c = r0
            return
    }

    public static com.alipay.apmobilesecuritysdk.f.b a() {
            com.alipay.apmobilesecuritysdk.f.b r0 = com.alipay.apmobilesecuritysdk.f.b.a
            return r0
    }

    public static java.util.LinkedList a(com.alipay.apmobilesecuritysdk.f.b r0) {
            java.util.LinkedList<java.lang.Runnable> r0 = r0.c
            return r0
    }

    public static java.lang.Thread b(com.alipay.apmobilesecuritysdk.f.b r1) {
            r0 = 0
            r1.b = r0
            return r0
    }

    public final synchronized void a(java.lang.Runnable r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.LinkedList<java.lang.Runnable> r0 = r1.c     // Catch: java.lang.Throwable -> L1b
            r0.add(r2)     // Catch: java.lang.Throwable -> L1b
            java.lang.Thread r2 = r1.b     // Catch: java.lang.Throwable -> L1b
            if (r2 != 0) goto L19
            java.lang.Thread r2 = new java.lang.Thread     // Catch: java.lang.Throwable -> L1b
            com.alipay.apmobilesecuritysdk.f.c r0 = new com.alipay.apmobilesecuritysdk.f.c     // Catch: java.lang.Throwable -> L1b
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L1b
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L1b
            r1.b = r2     // Catch: java.lang.Throwable -> L1b
            r2.start()     // Catch: java.lang.Throwable -> L1b
        L19:
            monitor-exit(r1)
            return
        L1b:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }
}
