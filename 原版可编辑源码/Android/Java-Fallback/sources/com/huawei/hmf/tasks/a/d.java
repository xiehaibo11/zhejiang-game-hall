package com.huawei.hmf.tasks.a;

public final class d<TResult> implements com.huawei.hmf.tasks.ExecuteResult<TResult> {
    java.util.concurrent.Executor a;
    private com.huawei.hmf.tasks.OnCompleteListener<TResult> b;
    private final java.lang.Object c;


    d(java.util.concurrent.Executor r2, com.huawei.hmf.tasks.OnCompleteListener<TResult> r3) {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.c = r0
            r1.b = r3
            r1.a = r2
            return
    }

    static java.lang.Object a(com.huawei.hmf.tasks.a.d r0) {
            java.lang.Object r0 = r0.c
            return r0
    }

    static com.huawei.hmf.tasks.OnCompleteListener b(com.huawei.hmf.tasks.a.d r0) {
            com.huawei.hmf.tasks.OnCompleteListener<TResult> r0 = r0.b
            return r0
    }

    @Override
    public final void cancel() {
            r2 = this;
            java.lang.Object r0 = r2.c
            monitor-enter(r0)
            r1 = 0
            r2.b = r1     // Catch: java.lang.Throwable -> L8
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
            java.util.concurrent.Executor r0 = r2.a
            com.huawei.hmf.tasks.a.d$1 r1 = new com.huawei.hmf.tasks.a.d$1
            r1.<init>(r2, r3)
            r0.execute(r1)
            return
    }
}
