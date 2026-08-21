package com.huawei.hms.support.api;

import android.os.Handler;
import android.os.Looper;
import com.huawei.hms.support.api.client.PendingResult;
import com.huawei.hms.support.api.client.Result;
import com.huawei.hms.support.api.client.ResultCallback;
import com.huawei.hms.support.api.client.Status;
import com.huawei.hms.support.gentyref.GenericTypeReflector;
import com.huawei.hms.support.log.HMSLog;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes.dex */
public abstract class ErrorResultImpl<R extends Result> extends PendingResult<R> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private R f2174a = null;
    private int b;

    class a implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ ResultCallback f2175a;

        a(ResultCallback resultCallback) {
            this.f2175a = resultCallback;
        }

        @Override // java.lang.Runnable
        public void run() {
            ResultCallback resultCallback = this.f2175a;
            ErrorResultImpl errorResultImpl = ErrorResultImpl.this;
            resultCallback.onResult(errorResultImpl.a(errorResultImpl.b));
        }
    }

    public ErrorResultImpl(int i) {
        this.b = i;
    }

    @Override // com.huawei.hms.support.api.client.PendingResult
    public final R await() {
        return (R) await(0L, null);
    }

    @Override // com.huawei.hms.support.api.client.PendingResult
    @Deprecated
    public void cancel() {
    }

    @Override // com.huawei.hms.support.api.client.PendingResult
    @Deprecated
    public boolean isCanceled() {
        return false;
    }

    @Override // com.huawei.hms.support.api.client.PendingResult
    public final void setResultCallback(ResultCallback<R> resultCallback) {
        setResultCallback(Looper.getMainLooper(), resultCallback);
    }

    @Override // com.huawei.hms.support.api.client.PendingResult
    public R await(long j, TimeUnit timeUnit) {
        if (Looper.myLooper() != Looper.getMainLooper()) {
            return (R) a(this.b);
        }
        throw new IllegalStateException("await must not be called on the UI thread");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public R a(int i) {
        Type genericSuperclass = ErrorResultImpl.class.getGenericSuperclass();
        if (genericSuperclass == null) {
            return null;
        }
        try {
            R r = (R) GenericTypeReflector.getType(((ParameterizedType) genericSuperclass).getActualTypeArguments()[0]).newInstance();
            this.f2174a = r;
            r.setStatus(new Status(i));
        } catch (IllegalAccessException unused) {
            HMSLog.e("ErrorResultImpl", "IllegalAccessException");
        } catch (InstantiationException unused2) {
            HMSLog.e("ErrorResultImpl", "InstantiationException");
        }
        return this.f2174a;
    }

    @Override // com.huawei.hms.support.api.client.PendingResult
    @Deprecated
    public void setResultCallback(ResultCallback<R> resultCallback, long j, TimeUnit timeUnit) {
        setResultCallback(resultCallback);
    }

    @Override // com.huawei.hms.support.api.client.PendingResult
    public final void setResultCallback(Looper looper, ResultCallback<R> resultCallback) {
        if (looper == null) {
            looper = Looper.myLooper();
        }
        new Handler(looper).post(new a(resultCallback));
    }
}
