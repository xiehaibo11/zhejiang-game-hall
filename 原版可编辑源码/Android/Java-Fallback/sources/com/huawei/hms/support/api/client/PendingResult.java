package com.huawei.hms.support.api.client;

import com.huawei.hms.support.api.client.Result;

public abstract class PendingResult<R extends com.huawei.hms.support.api.client.Result> {
    public PendingResult() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract R await();

    public abstract R await(long r1, java.util.concurrent.TimeUnit r3);

    @java.lang.Deprecated
    public abstract void cancel();

    public <S extends com.huawei.hms.support.api.client.Result> com.huawei.hms.support.api.client.ConvertedResult<S> convertResult(com.huawei.hms.support.api.client.ResultConvert<? super R, ? extends S> r1) {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            r1.<init>()
            throw r1
    }

    @java.lang.Deprecated
    public abstract boolean isCanceled();

    public abstract void setResultCallback(android.os.Looper r1, com.huawei.hms.support.api.client.ResultCallback<R> r2);

    public abstract void setResultCallback(com.huawei.hms.support.api.client.ResultCallback<R> r1);

    @java.lang.Deprecated
    public abstract void setResultCallback(com.huawei.hms.support.api.client.ResultCallback<R> r1, long r2, java.util.concurrent.TimeUnit r4);
}
