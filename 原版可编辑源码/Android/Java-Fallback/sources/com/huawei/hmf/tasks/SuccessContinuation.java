package com.huawei.hmf.tasks;

public interface SuccessContinuation<TResult, TContinuationResult> {
    com.huawei.hmf.tasks.Task<TContinuationResult> then(TResult r1) throws java.lang.Exception;
}
