package com.huawei.hmf.tasks;

public class Tasks {
    private static com.huawei.hmf.tasks.a.j IMPL;

    static {
            com.huawei.hmf.tasks.a.j r0 = new com.huawei.hmf.tasks.a.j
            r0.<init>()
            com.huawei.hmf.tasks.Tasks.IMPL = r0
            return
    }

    public Tasks() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.huawei.hmf.tasks.Task<java.util.List<com.huawei.hmf.tasks.Task<?>>> allOf(java.util.Collection<? extends com.huawei.hmf.tasks.Task<?>> r0) {
            com.huawei.hmf.tasks.Task r0 = com.huawei.hmf.tasks.a.j.a(r0)
            return r0
    }

    public static com.huawei.hmf.tasks.Task<java.util.List<com.huawei.hmf.tasks.Task<?>>> allOf(com.huawei.hmf.tasks.Task<?>... r0) {
            java.util.List r0 = java.util.Arrays.asList(r0)
            com.huawei.hmf.tasks.Task r0 = com.huawei.hmf.tasks.a.j.a(r0)
            return r0
    }

    public static <TResult> TResult await(com.huawei.hmf.tasks.Task<TResult> r2) throws java.util.concurrent.ExecutionException, java.lang.InterruptedException {
            java.lang.String r0 = "await must not be called on the UI thread"
            com.huawei.hmf.tasks.a.j.a(r0)
            boolean r0 = r2.isComplete()
            if (r0 == 0) goto L10
            java.lang.Object r2 = com.huawei.hmf.tasks.a.j.a(r2)
            return r2
        L10:
            com.huawei.hmf.tasks.a.j$a r0 = new com.huawei.hmf.tasks.a.j$a
            r0.<init>()
            com.huawei.hmf.tasks.Task r1 = r2.addOnSuccessListener(r0)
            r1.addOnFailureListener(r0)
            java.util.concurrent.CountDownLatch r0 = r0.a
            r0.await()
            java.lang.Object r2 = com.huawei.hmf.tasks.a.j.a(r2)
            return r2
    }

    public static <TResult> TResult await(com.huawei.hmf.tasks.Task<TResult> r2, long r3, java.util.concurrent.TimeUnit r5) throws java.util.concurrent.ExecutionException, java.lang.InterruptedException, java.util.concurrent.TimeoutException {
            java.lang.String r0 = "await must not be called on the UI thread"
            com.huawei.hmf.tasks.a.j.a(r0)
            boolean r0 = r2.isComplete()
            if (r0 != 0) goto L28
            com.huawei.hmf.tasks.a.j$a r0 = new com.huawei.hmf.tasks.a.j$a
            r0.<init>()
            com.huawei.hmf.tasks.Task r1 = r2.addOnSuccessListener(r0)
            r1.addOnFailureListener(r0)
            java.util.concurrent.CountDownLatch r0 = r0.a
            boolean r3 = r0.await(r3, r5)
            if (r3 == 0) goto L20
            goto L28
        L20:
            java.util.concurrent.TimeoutException r2 = new java.util.concurrent.TimeoutException
            java.lang.String r3 = "Timed out waiting for Task"
            r2.<init>(r3)
            throw r2
        L28:
            java.lang.Object r2 = com.huawei.hmf.tasks.a.j.a(r2)
            return r2
    }

    public static <TResult> com.huawei.hmf.tasks.Task<TResult> call(java.util.concurrent.Callable<TResult> r2) {
            com.huawei.hmf.tasks.a.j r0 = com.huawei.hmf.tasks.Tasks.IMPL
            java.util.concurrent.Executor r1 = com.huawei.hmf.tasks.TaskExecutors.immediate()
            com.huawei.hmf.tasks.Task r2 = r0.a(r1, r2)
            return r2
    }

    public static <TResult> com.huawei.hmf.tasks.Task<TResult> callInBackground(java.util.concurrent.Callable<TResult> r2) {
            com.huawei.hmf.tasks.a.j r0 = com.huawei.hmf.tasks.Tasks.IMPL
            java.util.concurrent.ExecutorService r1 = com.huawei.hmf.tasks.TaskExecutors.background()
            com.huawei.hmf.tasks.Task r2 = r0.a(r1, r2)
            return r2
    }

    public static <TResult> com.huawei.hmf.tasks.Task<TResult> callInBackground(java.util.concurrent.Executor r1, java.util.concurrent.Callable<TResult> r2) {
            com.huawei.hmf.tasks.a.j r0 = com.huawei.hmf.tasks.Tasks.IMPL
            com.huawei.hmf.tasks.Task r1 = r0.a(r1, r2)
            return r1
    }

    public static <TResult> com.huawei.hmf.tasks.Task<TResult> fromCanceled() {
            com.huawei.hmf.tasks.a.i r0 = new com.huawei.hmf.tasks.a.i
            r0.<init>()
            r0.a()
            return r0
    }

    public static <TResult> com.huawei.hmf.tasks.Task<TResult> fromException(java.lang.Exception r1) {
            com.huawei.hmf.tasks.TaskCompletionSource r0 = new com.huawei.hmf.tasks.TaskCompletionSource
            r0.<init>()
            r0.setException(r1)
            com.huawei.hmf.tasks.Task r1 = r0.getTask()
            return r1
    }

    public static <TResult> com.huawei.hmf.tasks.Task<TResult> fromResult(TResult r0) {
            com.huawei.hmf.tasks.Task r0 = com.huawei.hmf.tasks.a.j.a(r0)
            return r0
    }

    public static com.huawei.hmf.tasks.Task<java.lang.Void> join(java.util.Collection<? extends com.huawei.hmf.tasks.Task<?>> r0) {
            com.huawei.hmf.tasks.Task r0 = com.huawei.hmf.tasks.a.j.c(r0)
            return r0
    }

    public static com.huawei.hmf.tasks.Task<java.lang.Void> join(com.huawei.hmf.tasks.Task<?>... r0) {
            java.util.List r0 = java.util.Arrays.asList(r0)
            com.huawei.hmf.tasks.Task r0 = com.huawei.hmf.tasks.a.j.c(r0)
            return r0
    }

    public static <TResult> com.huawei.hmf.tasks.Task<java.util.List<TResult>> successOf(java.util.Collection<? extends com.huawei.hmf.tasks.Task<TResult>> r0) {
            com.huawei.hmf.tasks.Task r0 = com.huawei.hmf.tasks.a.j.b(r0)
            return r0
    }

    public static <TResult> com.huawei.hmf.tasks.Task<java.util.List<TResult>> successOf(com.huawei.hmf.tasks.Task<?>... r0) {
            java.util.List r0 = java.util.Arrays.asList(r0)
            com.huawei.hmf.tasks.Task r0 = com.huawei.hmf.tasks.a.j.b(r0)
            return r0
    }
}
