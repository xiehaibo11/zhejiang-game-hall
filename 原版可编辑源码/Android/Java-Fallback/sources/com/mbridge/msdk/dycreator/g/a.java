package com.mbridge.msdk.dycreator.g;

public abstract class a extends com.mbridge.msdk.dycreator.c.a {
    protected java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Object> a;
    private java.util.List<java.lang.Object> b;

    public a() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.b = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.a = r0
            return
    }

    public final synchronized void a() {
            r1 = this;
            monitor-enter(r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Object> r0 = r1.a     // Catch: java.lang.Throwable -> L8
            r0.clear()     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized void a(java.lang.Object r2, int r3) {
            r1 = this;
            monitor-enter(r1)
            if (r2 == 0) goto L1c
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Object> r0 = r1.a     // Catch: java.lang.Throwable -> L19
            if (r0 == 0) goto L1c
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Object> r0 = r1.a     // Catch: java.lang.Throwable -> L19
            boolean r0 = r0.containsValue(r2)     // Catch: java.lang.Throwable -> L19
            if (r0 != 0) goto L1c
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Object> r0 = r1.a     // Catch: java.lang.Throwable -> L19
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L19
            r0.put(r3, r2)     // Catch: java.lang.Throwable -> L19
            goto L1c
        L19:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
        L1c:
            monitor-exit(r1)
            return
    }
}
