package com.huawei.hmf.tasks.a;

public final class i<TResult> extends com.huawei.hmf.tasks.Task<TResult> {
    private final java.lang.Object a;
    private boolean b;
    private volatile boolean c;
    private TResult d;
    private java.lang.Exception e;
    private java.util.List<com.huawei.hmf.tasks.ExecuteResult<TResult>> f;






    public i() {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.f = r0
            return
    }

    private com.huawei.hmf.tasks.Task<TResult> a(com.huawei.hmf.tasks.ExecuteResult<TResult> r4) {
            r3 = this;
            java.lang.Object r0 = r3.a
            monitor-enter(r0)
            boolean r1 = r3.isComplete()     // Catch: java.lang.Throwable -> L15
            if (r1 != 0) goto Le
            java.util.List<com.huawei.hmf.tasks.ExecuteResult<TResult>> r2 = r3.f     // Catch: java.lang.Throwable -> L15
            r2.add(r4)     // Catch: java.lang.Throwable -> L15
        Le:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            if (r1 == 0) goto L14
            r4.onComplete(r3)
        L14:
            return r3
        L15:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            throw r4
    }

    private void b() {
            r3 = this;
            java.lang.Object r0 = r3.a
            monitor-enter(r0)
            java.util.List<com.huawei.hmf.tasks.ExecuteResult<TResult>> r1 = r3.f     // Catch: java.lang.Throwable -> L27
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L27
        L9:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L27
            if (r2 == 0) goto L22
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L27
            com.huawei.hmf.tasks.ExecuteResult r2 = (com.huawei.hmf.tasks.ExecuteResult) r2     // Catch: java.lang.Throwable -> L27
            r2.onComplete(r3)     // Catch: java.lang.Exception -> L19 java.lang.RuntimeException -> L20 java.lang.Throwable -> L27
            goto L9
        L19:
            r1 = move-exception
            java.lang.RuntimeException r2 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> L27
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L27
            throw r2     // Catch: java.lang.Throwable -> L27
        L20:
            r1 = move-exception
            throw r1     // Catch: java.lang.Throwable -> L27
        L22:
            r1 = 0
            r3.f = r1     // Catch: java.lang.Throwable -> L27
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L27
            return
        L27:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L27
            throw r1
    }

    public final void a(java.lang.Exception r3) {
            r2 = this;
            java.lang.Object r0 = r2.a
            monitor-enter(r0)
            boolean r1 = r2.b     // Catch: java.lang.Throwable -> L18
            if (r1 == 0) goto L9
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            return
        L9:
            r1 = 1
            r2.b = r1     // Catch: java.lang.Throwable -> L18
            r2.e = r3     // Catch: java.lang.Throwable -> L18
            java.lang.Object r3 = r2.a     // Catch: java.lang.Throwable -> L18
            r3.notifyAll()     // Catch: java.lang.Throwable -> L18
            r2.b()     // Catch: java.lang.Throwable -> L18
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            return
        L18:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            throw r3
    }

    public final void a(TResult r3) {
            r2 = this;
            java.lang.Object r0 = r2.a
            monitor-enter(r0)
            boolean r1 = r2.b     // Catch: java.lang.Throwable -> L18
            if (r1 == 0) goto L9
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            return
        L9:
            r1 = 1
            r2.b = r1     // Catch: java.lang.Throwable -> L18
            r2.d = r3     // Catch: java.lang.Throwable -> L18
            java.lang.Object r3 = r2.a     // Catch: java.lang.Throwable -> L18
            r3.notifyAll()     // Catch: java.lang.Throwable -> L18
            r2.b()     // Catch: java.lang.Throwable -> L18
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            return
        L18:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            throw r3
    }

    public final boolean a() {
            r3 = this;
            java.lang.Object r0 = r3.a
            monitor-enter(r0)
            boolean r1 = r3.b     // Catch: java.lang.Throwable -> L19
            if (r1 == 0) goto La
            r1 = 0
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            return r1
        La:
            r1 = 1
            r3.b = r1     // Catch: java.lang.Throwable -> L19
            r3.c = r1     // Catch: java.lang.Throwable -> L19
            java.lang.Object r2 = r3.a     // Catch: java.lang.Throwable -> L19
            r2.notifyAll()     // Catch: java.lang.Throwable -> L19
            r3.b()     // Catch: java.lang.Throwable -> L19
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            return r1
        L19:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            throw r1
    }

    @Override
    public final com.huawei.hmf.tasks.Task<TResult> addOnCanceledListener(android.app.Activity r3, com.huawei.hmf.tasks.OnCanceledListener r4) {
            r2 = this;
            com.huawei.hmf.tasks.a.b r0 = new com.huawei.hmf.tasks.a.b
            java.util.concurrent.Executor r1 = com.huawei.hmf.tasks.TaskExecutors.uiThread()
            r0.<init>(r1, r4)
            com.huawei.hmf.tasks.a.g.a(r3, r0)
            com.huawei.hmf.tasks.Task r3 = r2.a(r0)
            return r3
    }

    @Override
    public final com.huawei.hmf.tasks.Task<TResult> addOnCanceledListener(com.huawei.hmf.tasks.OnCanceledListener r2) {
            r1 = this;
            java.util.concurrent.Executor r0 = com.huawei.hmf.tasks.TaskExecutors.uiThread()
            com.huawei.hmf.tasks.Task r2 = r1.addOnCanceledListener(r0, r2)
            return r2
    }

    @Override
    public final com.huawei.hmf.tasks.Task<TResult> addOnCanceledListener(java.util.concurrent.Executor r2, com.huawei.hmf.tasks.OnCanceledListener r3) {
            r1 = this;
            com.huawei.hmf.tasks.a.b r0 = new com.huawei.hmf.tasks.a.b
            r0.<init>(r2, r3)
            com.huawei.hmf.tasks.Task r2 = r1.a(r0)
            return r2
    }

    @Override
    public final com.huawei.hmf.tasks.Task<TResult> addOnCompleteListener(android.app.Activity r3, com.huawei.hmf.tasks.OnCompleteListener<TResult> r4) {
            r2 = this;
            com.huawei.hmf.tasks.a.d r0 = new com.huawei.hmf.tasks.a.d
            java.util.concurrent.Executor r1 = com.huawei.hmf.tasks.TaskExecutors.uiThread()
            r0.<init>(r1, r4)
            com.huawei.hmf.tasks.a.g.a(r3, r0)
            com.huawei.hmf.tasks.Task r3 = r2.a(r0)
            return r3
    }

    @Override
    public final com.huawei.hmf.tasks.Task<TResult> addOnCompleteListener(com.huawei.hmf.tasks.OnCompleteListener<TResult> r2) {
            r1 = this;
            java.util.concurrent.Executor r0 = com.huawei.hmf.tasks.TaskExecutors.uiThread()
            com.huawei.hmf.tasks.Task r2 = r1.addOnCompleteListener(r0, r2)
            return r2
    }

    @Override
    public final com.huawei.hmf.tasks.Task<TResult> addOnCompleteListener(java.util.concurrent.Executor r2, com.huawei.hmf.tasks.OnCompleteListener<TResult> r3) {
            r1 = this;
            com.huawei.hmf.tasks.a.d r0 = new com.huawei.hmf.tasks.a.d
            r0.<init>(r2, r3)
            com.huawei.hmf.tasks.Task r2 = r1.a(r0)
            return r2
    }

    @Override
    public final com.huawei.hmf.tasks.Task<TResult> addOnFailureListener(android.app.Activity r3, com.huawei.hmf.tasks.OnFailureListener r4) {
            r2 = this;
            com.huawei.hmf.tasks.a.f r0 = new com.huawei.hmf.tasks.a.f
            java.util.concurrent.Executor r1 = com.huawei.hmf.tasks.TaskExecutors.uiThread()
            r0.<init>(r1, r4)
            com.huawei.hmf.tasks.a.g.a(r3, r0)
            com.huawei.hmf.tasks.Task r3 = r2.a(r0)
            return r3
    }

    @Override
    public final com.huawei.hmf.tasks.Task<TResult> addOnFailureListener(com.huawei.hmf.tasks.OnFailureListener r2) {
            r1 = this;
            java.util.concurrent.Executor r0 = com.huawei.hmf.tasks.TaskExecutors.uiThread()
            com.huawei.hmf.tasks.Task r2 = r1.addOnFailureListener(r0, r2)
            return r2
    }

    @Override
    public final com.huawei.hmf.tasks.Task<TResult> addOnFailureListener(java.util.concurrent.Executor r2, com.huawei.hmf.tasks.OnFailureListener r3) {
            r1 = this;
            com.huawei.hmf.tasks.a.f r0 = new com.huawei.hmf.tasks.a.f
            r0.<init>(r2, r3)
            com.huawei.hmf.tasks.Task r2 = r1.a(r0)
            return r2
    }

    @Override
    public final com.huawei.hmf.tasks.Task<TResult> addOnSuccessListener(android.app.Activity r3, com.huawei.hmf.tasks.OnSuccessListener<TResult> r4) {
            r2 = this;
            com.huawei.hmf.tasks.a.h r0 = new com.huawei.hmf.tasks.a.h
            java.util.concurrent.Executor r1 = com.huawei.hmf.tasks.TaskExecutors.uiThread()
            r0.<init>(r1, r4)
            com.huawei.hmf.tasks.a.g.a(r3, r0)
            com.huawei.hmf.tasks.Task r3 = r2.a(r0)
            return r3
    }

    @Override
    public final com.huawei.hmf.tasks.Task<TResult> addOnSuccessListener(com.huawei.hmf.tasks.OnSuccessListener<TResult> r2) {
            r1 = this;
            java.util.concurrent.Executor r0 = com.huawei.hmf.tasks.TaskExecutors.uiThread()
            com.huawei.hmf.tasks.Task r2 = r1.addOnSuccessListener(r0, r2)
            return r2
    }

    @Override
    public final com.huawei.hmf.tasks.Task<TResult> addOnSuccessListener(java.util.concurrent.Executor r2, com.huawei.hmf.tasks.OnSuccessListener<TResult> r3) {
            r1 = this;
            com.huawei.hmf.tasks.a.h r0 = new com.huawei.hmf.tasks.a.h
            r0.<init>(r2, r3)
            com.huawei.hmf.tasks.Task r2 = r1.a(r0)
            return r2
    }

    @Override
    public final <TContinuationResult> com.huawei.hmf.tasks.Task<TContinuationResult> continueWith(com.huawei.hmf.tasks.Continuation<TResult, TContinuationResult> r2) {
            r1 = this;
            java.util.concurrent.Executor r0 = com.huawei.hmf.tasks.TaskExecutors.uiThread()
            com.huawei.hmf.tasks.Task r2 = r1.continueWith(r0, r2)
            return r2
    }

    @Override
    public final <TContinuationResult> com.huawei.hmf.tasks.Task<TContinuationResult> continueWith(java.util.concurrent.Executor r3, com.huawei.hmf.tasks.Continuation<TResult, TContinuationResult> r4) {
            r2 = this;
            com.huawei.hmf.tasks.a.i r0 = new com.huawei.hmf.tasks.a.i
            r0.<init>()
            com.huawei.hmf.tasks.a.i$5 r1 = new com.huawei.hmf.tasks.a.i$5
            r1.<init>(r2, r0, r4)
            r2.addOnCompleteListener(r3, r1)
            return r0
    }

    @Override
    public final <TContinuationResult> com.huawei.hmf.tasks.Task<TContinuationResult> continueWithTask(com.huawei.hmf.tasks.Continuation<TResult, com.huawei.hmf.tasks.Task<TContinuationResult>> r2) {
            r1 = this;
            java.util.concurrent.Executor r0 = com.huawei.hmf.tasks.TaskExecutors.uiThread()
            com.huawei.hmf.tasks.Task r2 = r1.continueWithTask(r0, r2)
            return r2
    }

    @Override
    public final <TContinuationResult> com.huawei.hmf.tasks.Task<TContinuationResult> continueWithTask(java.util.concurrent.Executor r3, com.huawei.hmf.tasks.Continuation<TResult, com.huawei.hmf.tasks.Task<TContinuationResult>> r4) {
            r2 = this;
            com.huawei.hmf.tasks.a.i r0 = new com.huawei.hmf.tasks.a.i
            r0.<init>()
            com.huawei.hmf.tasks.a.i$4 r1 = new com.huawei.hmf.tasks.a.i$4
            r1.<init>(r2, r4, r0)
            r2.addOnCompleteListener(r3, r1)
            return r0
    }

    @Override
    public final java.lang.Exception getException() {
            r2 = this;
            java.lang.Object r0 = r2.a
            monitor-enter(r0)
            java.lang.Exception r1 = r2.e     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r1
    }

    @Override
    public final TResult getResult() {
            r3 = this;
            java.lang.Object r0 = r3.a
            monitor-enter(r0)
            java.lang.Exception r1 = r3.e     // Catch: java.lang.Throwable -> L13
            if (r1 != 0) goto Lb
            TResult r1 = r3.d     // Catch: java.lang.Throwable -> L13
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
            return r1
        Lb:
            java.lang.RuntimeException r1 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> L13
            java.lang.Exception r2 = r3.e     // Catch: java.lang.Throwable -> L13
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L13
            throw r1     // Catch: java.lang.Throwable -> L13
        L13:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
            throw r1
    }

    @Override
    public final <E extends java.lang.Throwable> TResult getResultThrowException(java.lang.Class<E> r3) throws java.lang.Throwable {
            r2 = this;
            java.lang.Object r0 = r2.a
            monitor-enter(r0)
            if (r3 == 0) goto L17
            java.lang.Exception r1 = r2.e     // Catch: java.lang.Throwable -> L27
            boolean r1 = r3.isInstance(r1)     // Catch: java.lang.Throwable -> L27
            if (r1 != 0) goto Le
            goto L17
        Le:
            java.lang.Exception r1 = r2.e     // Catch: java.lang.Throwable -> L27
            java.lang.Object r3 = r3.cast(r1)     // Catch: java.lang.Throwable -> L27
            java.lang.Throwable r3 = (java.lang.Throwable) r3     // Catch: java.lang.Throwable -> L27
            throw r3     // Catch: java.lang.Throwable -> L27
        L17:
            java.lang.Exception r3 = r2.e     // Catch: java.lang.Throwable -> L27
            if (r3 != 0) goto L1f
            TResult r3 = r2.d     // Catch: java.lang.Throwable -> L27
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L27
            return r3
        L1f:
            java.lang.RuntimeException r3 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> L27
            java.lang.Exception r1 = r2.e     // Catch: java.lang.Throwable -> L27
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L27
            throw r3     // Catch: java.lang.Throwable -> L27
        L27:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L27
            throw r3
    }

    @Override
    public final boolean isCanceled() {
            r1 = this;
            boolean r0 = r1.c
            return r0
    }

    @Override
    public final boolean isComplete() {
            r2 = this;
            java.lang.Object r0 = r2.a
            monitor-enter(r0)
            boolean r1 = r2.b     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r1
    }

    @Override
    public final boolean isSuccessful() {
            r2 = this;
            java.lang.Object r0 = r2.a
            monitor-enter(r0)
            boolean r1 = r2.b     // Catch: java.lang.Throwable -> L16
            if (r1 == 0) goto L13
            boolean r1 = r2.isCanceled()     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L13
            java.lang.Exception r1 = r2.e     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L13
            r1 = 1
            goto L14
        L13:
            r1 = 0
        L14:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            return r1
        L16:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            throw r1
    }

    @Override
    public final <TContinuationResult> com.huawei.hmf.tasks.Task<TContinuationResult> onSuccessTask(com.huawei.hmf.tasks.SuccessContinuation<TResult, TContinuationResult> r2) {
            r1 = this;
            java.util.concurrent.Executor r0 = com.huawei.hmf.tasks.TaskExecutors.uiThread()
            com.huawei.hmf.tasks.Task r2 = r1.onSuccessTask(r0, r2)
            return r2
    }

    @Override
    public final <TContinuationResult> com.huawei.hmf.tasks.Task<TContinuationResult> onSuccessTask(java.util.concurrent.Executor r3, com.huawei.hmf.tasks.SuccessContinuation<TResult, TContinuationResult> r4) {
            r2 = this;
            com.huawei.hmf.tasks.a.i r0 = new com.huawei.hmf.tasks.a.i
            r0.<init>()
            com.huawei.hmf.tasks.a.i$1 r1 = new com.huawei.hmf.tasks.a.i$1
            r1.<init>(r2, r4, r0)
            r2.addOnSuccessListener(r3, r1)
            com.huawei.hmf.tasks.a.i$2 r3 = new com.huawei.hmf.tasks.a.i$2
            r3.<init>(r2, r0)
            r2.addOnFailureListener(r3)
            com.huawei.hmf.tasks.a.i$3 r3 = new com.huawei.hmf.tasks.a.i$3
            r3.<init>(r2, r0)
            r2.addOnCanceledListener(r3)
            return r0
    }
}
