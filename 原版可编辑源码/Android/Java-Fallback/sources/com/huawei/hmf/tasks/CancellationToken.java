package com.huawei.hmf.tasks;

public abstract class CancellationToken {
    public CancellationToken() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract boolean isCancellationRequested();

    public abstract com.huawei.hmf.tasks.CancellationToken register(java.lang.Runnable r1);
}
