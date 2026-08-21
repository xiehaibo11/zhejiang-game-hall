package com.huawei.hmf.tasks.a;

final class e<TResult> implements com.huawei.hmf.tasks.OnCanceledListener, com.huawei.hmf.tasks.OnFailureListener, com.huawei.hmf.tasks.OnSuccessListener<TResult> {
    private final java.lang.Object a;
    private final int b;
    private final com.huawei.hmf.tasks.a.i<java.lang.Void> c;
    private int d;
    private java.lang.Exception e;
    private boolean f;

    e(int r2, com.huawei.hmf.tasks.a.i<java.lang.Void> r3) {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.a = r0
            r1.b = r2
            r1.c = r3
            return
    }

    private void a() {
            r4 = this;
            int r0 = r4.d
            int r1 = r4.b
            if (r0 < r1) goto L29
            java.lang.Exception r0 = r4.e
            if (r0 == 0) goto L19
            com.huawei.hmf.tasks.a.i<java.lang.Void> r0 = r4.c
            java.util.concurrent.ExecutionException r1 = new java.util.concurrent.ExecutionException
            java.lang.Exception r2 = r4.e
            java.lang.String r3 = "a task failed"
            r1.<init>(r3, r2)
            r0.a(r1)
            return
        L19:
            boolean r0 = r4.f
            if (r0 == 0) goto L23
            com.huawei.hmf.tasks.a.i<java.lang.Void> r0 = r4.c
            r0.a()
            return
        L23:
            com.huawei.hmf.tasks.a.i<java.lang.Void> r0 = r4.c
            r1 = 0
            r0.a(r1)
        L29:
            return
    }

    @Override
    public final void onCanceled() {
            r3 = this;
            java.lang.Object r0 = r3.a
            monitor-enter(r0)
            int r1 = r3.d     // Catch: java.lang.Throwable -> L10
            r2 = 1
            int r1 = r1 + r2
            r3.d = r1     // Catch: java.lang.Throwable -> L10
            r3.f = r2     // Catch: java.lang.Throwable -> L10
            r3.a()     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            throw r1
    }

    @Override
    public final void onFailure(java.lang.Exception r3) {
            r2 = this;
            java.lang.Object r0 = r2.a
            monitor-enter(r0)
            int r1 = r2.d     // Catch: java.lang.Throwable -> L10
            int r1 = r1 + 1
            r2.d = r1     // Catch: java.lang.Throwable -> L10
            r2.e = r3     // Catch: java.lang.Throwable -> L10
            r2.a()     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            throw r3
    }

    @Override
    public final void onSuccess(TResult r2) {
            r1 = this;
            java.lang.Object r2 = r1.a
            monitor-enter(r2)
            int r0 = r1.d     // Catch: java.lang.Throwable -> Le
            int r0 = r0 + 1
            r1.d = r0     // Catch: java.lang.Throwable -> Le
            r1.a()     // Catch: java.lang.Throwable -> Le
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Le
            return
        Le:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Le
            throw r0
    }
}
