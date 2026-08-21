package com.huawei.hmf.tasks.a;

public final class b<TResult> implements com.huawei.hmf.tasks.ExecuteResult<TResult> {
    private com.huawei.hmf.tasks.OnCanceledListener a;
    private java.util.concurrent.Executor b;
    private final java.lang.Object c;


    b(java.util.concurrent.Executor r2, com.huawei.hmf.tasks.OnCanceledListener r3) {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.c = r0
            r1.a = r3
            r1.b = r2
            return
    }

    static java.lang.Object a(com.huawei.hmf.tasks.a.b r0) {
            java.lang.Object r0 = r0.c
            return r0
    }

    static com.huawei.hmf.tasks.OnCanceledListener b(com.huawei.hmf.tasks.a.b r0) {
            com.huawei.hmf.tasks.OnCanceledListener r0 = r0.a
            return r0
    }

    @Override
    public final void cancel() {
            r2 = this;
            java.lang.Object r0 = r2.c
            monitor-enter(r0)
            r1 = 0
            r2.a = r1     // Catch: java.lang.Throwable -> L8
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L8
            return
        L8:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L8
            throw r1
    }

    @Override
    public final void onComplete(com.huawei.hmf.tasks.Task<TResult> r2) {
            r1 = this;
            boolean r2 = r2.isCanceled()
            if (r2 == 0) goto L10
            java.util.concurrent.Executor r2 = r1.b
            com.huawei.hmf.tasks.a.b$1 r0 = new com.huawei.hmf.tasks.a.b$1
            r0.<init>(r1)
            r2.execute(r0)
        L10:
            return
    }
}
