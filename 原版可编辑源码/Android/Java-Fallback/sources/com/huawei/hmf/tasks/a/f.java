package com.huawei.hmf.tasks.a;

public final class f<TResult> implements com.huawei.hmf.tasks.ExecuteResult<TResult> {
    private com.huawei.hmf.tasks.OnFailureListener a;
    private java.util.concurrent.Executor b;
    private final java.lang.Object c;


    f(java.util.concurrent.Executor r2, com.huawei.hmf.tasks.OnFailureListener r3) {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.c = r0
            r1.a = r3
            r1.b = r2
            return
    }

    static java.lang.Object a(com.huawei.hmf.tasks.a.f r0) {
            java.lang.Object r0 = r0.c
            return r0
    }

    static com.huawei.hmf.tasks.OnFailureListener b(com.huawei.hmf.tasks.a.f r0) {
            com.huawei.hmf.tasks.OnFailureListener r0 = r0.a
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
    public final void onComplete(com.huawei.hmf.tasks.Task<TResult> r3) {
            r2 = this;
            boolean r0 = r3.isSuccessful()
            if (r0 != 0) goto L16
            boolean r0 = r3.isCanceled()
            if (r0 != 0) goto L16
            java.util.concurrent.Executor r0 = r2.b
            com.huawei.hmf.tasks.a.f$1 r1 = new com.huawei.hmf.tasks.a.f$1
            r1.<init>(r2, r3)
            r0.execute(r1)
        L16:
            return
    }
}
