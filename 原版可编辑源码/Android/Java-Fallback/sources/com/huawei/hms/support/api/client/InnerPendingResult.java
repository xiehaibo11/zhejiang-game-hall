package com.huawei.hms.support.api.client;

import com.huawei.hms.support.api.client.Result;

public abstract class InnerPendingResult<R extends com.huawei.hms.support.api.client.Result> extends com.huawei.hms.support.api.client.PendingResult<R> {
    public InnerPendingResult() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract R awaitOnAnyThread();

    public abstract R awaitOnAnyThread(long r1, java.util.concurrent.TimeUnit r3);
}
