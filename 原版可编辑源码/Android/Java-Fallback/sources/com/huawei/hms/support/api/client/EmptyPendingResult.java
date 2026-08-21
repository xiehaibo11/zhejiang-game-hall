package com.huawei.hms.support.api.client;

import com.huawei.hms.support.api.client.Result;

public class EmptyPendingResult<R extends com.huawei.hms.support.api.client.Result> extends com.huawei.hms.support.api.client.PendingResult<R> {
    private R a;

    public EmptyPendingResult() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public R await() {
            r1 = this;
            R extends com.huawei.hms.support.api.client.Result r0 = r1.a
            return r0
    }

    @Override
    public R await(long r1, java.util.concurrent.TimeUnit r3) {
            r0 = this;
            R extends com.huawei.hms.support.api.client.Result r1 = r0.a
            return r1
    }

    @Override
    public void cancel() {
            r0 = this;
            return
    }

    public R getResult() {
            r1 = this;
            R extends com.huawei.hms.support.api.client.Result r0 = r1.a
            return r0
    }

    @Override
    public boolean isCanceled() {
            r1 = this;
            r0 = 0
            return r0
    }

    public void setResult(R r1) {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    public void setResultCallback(android.os.Looper r1, com.huawei.hms.support.api.client.ResultCallback<R> r2) {
            r0 = this;
            return
    }

    @Override
    public void setResultCallback(com.huawei.hms.support.api.client.ResultCallback<R> r1) {
            r0 = this;
            return
    }

    @Override
    public void setResultCallback(com.huawei.hms.support.api.client.ResultCallback<R> r1, long r2, java.util.concurrent.TimeUnit r4) {
            r0 = this;
            return
    }
}
