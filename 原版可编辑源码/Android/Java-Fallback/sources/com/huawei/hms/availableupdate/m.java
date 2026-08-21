package com.huawei.hms.availableupdate;

public class m {
    public static final com.huawei.hms.availableupdate.m c = null;
    public static final java.lang.Object d = null;
    public final java.util.concurrent.atomic.AtomicBoolean a;
    public java.util.List<android.app.Activity> b;

    static {
            com.huawei.hms.availableupdate.m r0 = new com.huawei.hms.availableupdate.m
            r0.<init>()
            com.huawei.hms.availableupdate.m.c = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.availableupdate.m.d = r0
            return
    }

    public m() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r2.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 1
            r0.<init>(r1)
            r2.b = r0
            return
    }

    public java.util.concurrent.atomic.AtomicBoolean a() {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.a
            return r0
    }

    public void a(android.app.Activity r5) {
            r4 = this;
            java.lang.Object r0 = com.huawei.hms.availableupdate.m.d
            monitor-enter(r0)
            java.util.List<android.app.Activity> r1 = r4.b     // Catch: java.lang.Throwable -> L2a
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L2a
        L9:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L2a
            if (r2 == 0) goto L23
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L2a
            android.app.Activity r2 = (android.app.Activity) r2     // Catch: java.lang.Throwable -> L2a
            if (r2 == 0) goto L9
            if (r2 == r5) goto L9
            boolean r3 = r2.isFinishing()     // Catch: java.lang.Throwable -> L2a
            if (r3 != 0) goto L9
            r2.finish()     // Catch: java.lang.Throwable -> L2a
            goto L9
        L23:
            java.util.List<android.app.Activity> r1 = r4.b     // Catch: java.lang.Throwable -> L2a
            r1.add(r5)     // Catch: java.lang.Throwable -> L2a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2a
            return
        L2a:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2a
            throw r5
    }

    public void a(boolean r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.a
            r0.set(r2)
            return
    }

    public void b(android.app.Activity r3) {
            r2 = this;
            java.lang.Object r0 = com.huawei.hms.availableupdate.m.d
            monitor-enter(r0)
            java.util.List<android.app.Activity> r1 = r2.b     // Catch: java.lang.Throwable -> La
            r1.remove(r3)     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return
        La:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r3
    }
}
