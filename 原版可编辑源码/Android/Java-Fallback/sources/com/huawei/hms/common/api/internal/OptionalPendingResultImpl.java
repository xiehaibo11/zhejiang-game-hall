package com.huawei.hms.common.api.internal;

import com.huawei.hms.support.api.client.Result;

@java.lang.Deprecated
public final class OptionalPendingResultImpl<R extends com.huawei.hms.support.api.client.Result> extends com.huawei.hms.common.api.OptionalPendingResult<R> {
    private final com.huawei.hms.support.api.client.PendingResult<R> pendingResult;

    public OptionalPendingResultImpl(com.huawei.hms.support.api.client.PendingResult<R> r1) {
            r0 = this;
            r0.<init>()
            r0.pendingResult = r1
            return
    }

    public final void addStatusListener() {
            r0 = this;
            return
    }

    @Override
    public final R await() {
            r1 = this;
            com.huawei.hms.support.api.client.PendingResult<R extends com.huawei.hms.support.api.client.Result> r0 = r1.pendingResult
            com.huawei.hms.support.api.client.Result r0 = r0.await()
            return r0
    }

    @Override
    public final R await(long r2, java.util.concurrent.TimeUnit r4) {
            r1 = this;
            com.huawei.hms.support.api.client.PendingResult<R extends com.huawei.hms.support.api.client.Result> r0 = r1.pendingResult
            com.huawei.hms.support.api.client.Result r2 = r0.await(r2, r4)
            return r2
    }

    @Override
    public final void cancel() {
            r0 = this;
            return
    }

    @Override
    public final R get() {
            r2 = this;
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Result is not available. Check that isDone() returns true before calling get()."
            r0.<init>(r1)
            throw r0
    }

    @Override
    public final boolean isCanceled() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final boolean isDone() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void setResultCallback(android.os.Looper r2, com.huawei.hms.support.api.client.ResultCallback<R> r3) {
            r1 = this;
            com.huawei.hms.support.api.client.PendingResult<R extends com.huawei.hms.support.api.client.Result> r0 = r1.pendingResult
            r0.setResultCallback(r2, r3)
            return
    }

    @Override
    public final void setResultCallback(com.huawei.hms.support.api.client.ResultCallback<R> r2) {
            r1 = this;
            com.huawei.hms.support.api.client.PendingResult<R extends com.huawei.hms.support.api.client.Result> r0 = r1.pendingResult
            r0.setResultCallback(r2)
            return
    }

    @Override
    public final void setResultCallback(com.huawei.hms.support.api.client.ResultCallback<R> r1, long r2, java.util.concurrent.TimeUnit r4) {
            r0 = this;
            r0.setResultCallback(r1)
            return
    }
}
