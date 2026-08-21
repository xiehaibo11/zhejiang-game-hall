package com.tkay.core.common;

public class v {
    private static volatile com.tkay.core.common.v a;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.ac> b;

    private v() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 4
            r0.<init>(r1)
            r2.b = r0
            return
    }

    public static com.tkay.core.common.v a() {
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.v> r0 = com.tkay.core.common.v.class
            monitor-enter(r0)
            com.tkay.core.common.v r1 = com.tkay.core.common.v.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.v r1 = new com.tkay.core.common.v     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.v.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a
            return r0
    }

    private synchronized void a(java.lang.String r1, java.lang.String r2, java.lang.Object r3) {
            r0 = this;
            monitor-enter(r0)
            com.tkay.core.common.f.ac r1 = r0.g(r1)     // Catch: java.lang.Throwable -> La
            r1.a(r2, r3)     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)
            return
        La:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private synchronized com.tkay.core.common.f.ac g(java.lang.String r3) {
            r2 = this;
            monitor-enter(r2)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.ac> r0 = r2.b     // Catch: java.lang.Throwable -> L17
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> L17
            com.tkay.core.common.f.ac r0 = (com.tkay.core.common.f.ac) r0     // Catch: java.lang.Throwable -> L17
            if (r0 != 0) goto L15
            com.tkay.core.common.f.ac r0 = new com.tkay.core.common.f.ac     // Catch: java.lang.Throwable -> L17
            r0.<init>()     // Catch: java.lang.Throwable -> L17
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.ac> r1 = r2.b     // Catch: java.lang.Throwable -> L17
            r1.put(r3, r0)     // Catch: java.lang.Throwable -> L17
        L15:
            monitor-exit(r2)
            return r0
        L17:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final com.tkay.core.common.f a(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            com.tkay.core.common.f.ac r1 = r0.g(r1)
            com.tkay.core.common.f r1 = r1.a(r2)
            return r1
    }

    public final java.lang.Object a(java.lang.String r1) {
            r0 = this;
            com.tkay.core.common.f.ac r1 = r0.g(r1)
            java.lang.Object r1 = r1.a()
            return r1
    }

    public final java.lang.String a(java.lang.String r1, int r2) {
            r0 = this;
            com.tkay.core.common.f.ac r1 = r0.g(r1)
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r1 = r1.c(r2)
            return r1
    }

    public final void a(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            com.tkay.core.common.f.ac r1 = r0.g(r1)
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r1.b(r2, r3)
            return
    }

    public final void a(java.lang.String r1, com.tkay.core.api.TYAdInfo r2) {
            r0 = this;
            com.tkay.core.common.f.ac r1 = r0.g(r1)
            r1.a(r2)
            return
    }

    public final void a(java.lang.String r1, java.lang.String r2, com.tkay.core.common.f r3) {
            r0 = this;
            com.tkay.core.common.f.ac r1 = r0.g(r1)
            r1.a(r2, r3)
            return
    }

    public final void a(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            com.tkay.core.common.f.ac r1 = r0.g(r1)
            r1.a(r2, r3)
            return
    }

    public final synchronized void a(java.lang.String r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            r2 = this;
            monitor-enter(r2)
            r0 = 0
            if (r4 == 0) goto La
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> La
            r1.<init>(r4)     // Catch: java.lang.Throwable -> La
            r0 = r1
        La:
            com.tkay.core.common.f.ac r3 = r2.g(r3)     // Catch: java.lang.Throwable -> L13
            r3.a(r0)     // Catch: java.lang.Throwable -> L13
            monitor-exit(r2)
            return
        L13:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final void a(java.lang.String r1, boolean r2) {
            r0 = this;
            com.tkay.core.common.f.ac r1 = r0.g(r1)
            r1.a(r2)
            return
    }

    public final void a(java.lang.String r1, java.lang.Object[] r2) {
            r0 = this;
            com.tkay.core.common.f.ac r1 = r0.g(r1)
            r1.a(r2)
            return
    }

    public final java.lang.String b(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            com.tkay.core.common.f.ac r1 = r0.g(r1)
            java.lang.String r1 = r1.b(r2)
            return r1
    }

    public final synchronized java.util.Map<java.lang.String, java.lang.Object> b(java.lang.String r3) {
            r2 = this;
            monitor-enter(r2)
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Throwable -> L16
            r1 = 2
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L16
            com.tkay.core.common.f.ac r3 = r2.g(r3)     // Catch: java.lang.Throwable -> L16
            java.util.Map r3 = r3.b()     // Catch: java.lang.Throwable -> L16
            if (r3 == 0) goto L14
            r0.putAll(r3)     // Catch: java.lang.Throwable -> L16
        L14:
            monitor-exit(r2)
            return r0
        L16:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final com.tkay.core.common.f.c c(java.lang.String r1) {
            r0 = this;
            com.tkay.core.common.f.ac r1 = r0.g(r1)
            com.tkay.core.common.f.c r1 = r1.c()
            return r1
    }

    public final void d(java.lang.String r2) {
            r1 = this;
            com.tkay.core.common.f.ac r2 = r1.g(r2)
            r0 = 0
            r2.a(r0)
            return
    }

    public final boolean e(java.lang.String r1) {
            r0 = this;
            com.tkay.core.common.f.ac r1 = r0.g(r1)
            boolean r1 = r1.d()
            return r1
    }

    public final java.lang.String f(java.lang.String r1) {
            r0 = this;
            com.tkay.core.common.f.ac r1 = r0.g(r1)
            java.lang.String r1 = r1.e()
            return r1
    }
}
