package com.huawei.hms.common.internal;

public class TaskApiCallWrapper<TResult> extends com.huawei.hms.common.internal.BaseContentWrapper {
    private final com.huawei.hms.common.internal.TaskApiCall<? extends com.huawei.hms.common.internal.AnyClient, TResult> mTaskApiCall;
    private final com.huawei.hmf.tasks.TaskCompletionSource<TResult> mTaskCompletionSource;

    public TaskApiCallWrapper(com.huawei.hms.common.internal.TaskApiCall<? extends com.huawei.hms.common.internal.AnyClient, TResult> r2, com.huawei.hmf.tasks.TaskCompletionSource<TResult> r3) {
            r1 = this;
            r0 = 1
            r1.<init>(r0)
            r1.mTaskApiCall = r2
            r1.mTaskCompletionSource = r3
            return
    }

    public com.huawei.hms.common.internal.TaskApiCall<? extends com.huawei.hms.common.internal.AnyClient, TResult> getTaskApiCall() {
            r1 = this;
            com.huawei.hms.common.internal.TaskApiCall<? extends com.huawei.hms.common.internal.AnyClient, TResult> r0 = r1.mTaskApiCall
            return r0
    }

    public com.huawei.hmf.tasks.TaskCompletionSource<TResult> getTaskCompletionSource() {
            r1 = this;
            com.huawei.hmf.tasks.TaskCompletionSource<TResult> r0 = r1.mTaskCompletionSource
            return r0
    }
}
