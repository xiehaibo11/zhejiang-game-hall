package com.huawei.hmf.tasks;

public interface ExecuteResult<TResult> {
    void cancel();

    void onComplete(com.huawei.hmf.tasks.Task<TResult> r1);
}
