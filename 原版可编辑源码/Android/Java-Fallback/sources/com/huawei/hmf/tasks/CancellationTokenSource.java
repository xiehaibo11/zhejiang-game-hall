package com.huawei.hmf.tasks;

public class CancellationTokenSource {
    private com.huawei.hmf.tasks.a.c impl;

    public CancellationTokenSource() {
            r1 = this;
            r1.<init>()
            com.huawei.hmf.tasks.a.c r0 = new com.huawei.hmf.tasks.a.c
            r0.<init>()
            r1.impl = r0
            return
    }

    public void cancel() {
            r3 = this;
            com.huawei.hmf.tasks.a.c r0 = r3.impl
            boolean r1 = r0.c
            if (r1 != 0) goto L27
            java.lang.Object r1 = r0.b
            monitor-enter(r1)
            r2 = 1
            r0.c = r2     // Catch: java.lang.Throwable -> L24
            java.util.List<java.lang.Runnable> r0 = r0.a     // Catch: java.lang.Throwable -> L24
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L24
        L12:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Throwable -> L24
            if (r2 == 0) goto L22
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Throwable -> L24
            java.lang.Runnable r2 = (java.lang.Runnable) r2     // Catch: java.lang.Throwable -> L24
            r2.run()     // Catch: java.lang.Throwable -> L24
            goto L12
        L22:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L24
            return
        L24:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L24
            throw r0
        L27:
            return
    }

    public com.huawei.hmf.tasks.CancellationToken getToken() {
            r1 = this;
            com.huawei.hmf.tasks.a.c r0 = r1.impl
            return r0
    }
}
