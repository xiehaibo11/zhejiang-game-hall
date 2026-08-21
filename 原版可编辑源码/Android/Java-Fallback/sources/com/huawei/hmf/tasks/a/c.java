package com.huawei.hmf.tasks.a;

public final class c extends com.huawei.hmf.tasks.CancellationToken {
    public final java.util.List<java.lang.Runnable> a;
    public final java.lang.Object b;
    public boolean c;

    public c() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.a = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.b = r0
            r0 = 0
            r1.c = r0
            return
    }

    @Override
    public final boolean isCancellationRequested() {
            r1 = this;
            boolean r0 = r1.c
            return r0
    }

    @Override
    public final com.huawei.hmf.tasks.CancellationToken register(java.lang.Runnable r3) {
            r2 = this;
            java.lang.Object r0 = r2.b
            monitor-enter(r0)
            boolean r1 = r2.c     // Catch: java.lang.Throwable -> L12
            if (r1 == 0) goto Lb
            r3.run()     // Catch: java.lang.Throwable -> L12
            goto L10
        Lb:
            java.util.List<java.lang.Runnable> r1 = r2.a     // Catch: java.lang.Throwable -> L12
            r1.add(r3)     // Catch: java.lang.Throwable -> L12
        L10:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            return r2
        L12:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r3
    }
}
