package com.huawei.hmf.tasks;

public class TaskCompletionSource<TResult> {
    private final com.huawei.hmf.tasks.a.i<TResult> task;


    public TaskCompletionSource() {
            r1 = this;
            r1.<init>()
            com.huawei.hmf.tasks.a.i r0 = new com.huawei.hmf.tasks.a.i
            r0.<init>()
            r1.task = r0
            return
    }

    public TaskCompletionSource(com.huawei.hmf.tasks.CancellationToken r2) {
            r1 = this;
            r1.<init>()
            com.huawei.hmf.tasks.a.i r0 = new com.huawei.hmf.tasks.a.i
            r0.<init>()
            r1.task = r0
            com.huawei.hmf.tasks.TaskCompletionSource$1 r0 = new com.huawei.hmf.tasks.TaskCompletionSource$1
            r0.<init>(r1)
            r2.register(r0)
            return
    }

    static com.huawei.hmf.tasks.a.i access$000(com.huawei.hmf.tasks.TaskCompletionSource r0) {
            com.huawei.hmf.tasks.a.i<TResult> r0 = r0.task
            return r0
    }

    public com.huawei.hmf.tasks.Task<TResult> getTask() {
            r1 = this;
            com.huawei.hmf.tasks.a.i<TResult> r0 = r1.task
            return r0
    }

    public void setException(java.lang.Exception r2) {
            r1 = this;
            com.huawei.hmf.tasks.a.i<TResult> r0 = r1.task
            r0.a(r2)
            return
    }

    public void setResult(TResult r2) {
            r1 = this;
            com.huawei.hmf.tasks.a.i<TResult> r0 = r1.task
            r0.a(r2)
            return
    }
}
