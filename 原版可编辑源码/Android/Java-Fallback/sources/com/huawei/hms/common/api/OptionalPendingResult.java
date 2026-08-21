package com.huawei.hms.common.api;

import com.huawei.hms.support.api.client.Result;

@java.lang.Deprecated
public abstract class OptionalPendingResult<R extends com.huawei.hms.support.api.client.Result> extends com.huawei.hms.support.api.client.PendingResult<R> {
    public OptionalPendingResult() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract R get();

    public abstract boolean isDone();
}
