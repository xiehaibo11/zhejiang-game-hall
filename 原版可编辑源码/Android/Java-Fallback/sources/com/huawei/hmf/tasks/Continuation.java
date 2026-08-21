package com.huawei.hmf.tasks;

public interface Continuation<TResult, TContinuationResult> {
    TContinuationResult then(com.huawei.hmf.tasks.Task<TResult> r1) throws java.lang.Exception;
}
