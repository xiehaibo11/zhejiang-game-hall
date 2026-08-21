package com.huawei.hms.support.api.client;

import android.os.Looper;
import com.huawei.hms.support.api.client.Result;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes.dex */
public class EmptyPendingResult<R extends Result> extends PendingResult<R> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private R f2180a;

    @Override // com.huawei.hms.support.api.client.PendingResult
    public R await() {
        return this.f2180a;
    }

    @Override // com.huawei.hms.support.api.client.PendingResult
    public void cancel() {
    }

    public R getResult() {
        return this.f2180a;
    }

    @Override // com.huawei.hms.support.api.client.PendingResult
    public boolean isCanceled() {
        return false;
    }

    public void setResult(R r) {
        this.f2180a = r;
    }

    @Override // com.huawei.hms.support.api.client.PendingResult
    public void setResultCallback(Looper looper, ResultCallback<R> resultCallback) {
    }

    @Override // com.huawei.hms.support.api.client.PendingResult
    public void setResultCallback(ResultCallback<R> resultCallback) {
    }

    @Override // com.huawei.hms.support.api.client.PendingResult
    public void setResultCallback(ResultCallback<R> resultCallback, long j, TimeUnit timeUnit) {
    }

    @Override // com.huawei.hms.support.api.client.PendingResult
    public R await(long j, TimeUnit timeUnit) {
        return this.f2180a;
    }
}
