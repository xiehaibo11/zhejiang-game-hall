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

public abstract class ErrorResultImpl<R extends Result> extends PendingResult<R> {
    private R a = null;
    private int b;

    class a implements Runnable {
        final ResultCallback a;

        a(ResultCallback resultCallback) {
            this.a = resultCallback;
        }

        @Override
        public void run() {
            ResultCallback resultCallback = this.a;
            ErrorResultImpl errorResultImpl = ErrorResultImpl.this;
            resultCallback.onResult(errorResultImpl.a(errorResultImpl.b));
        }
    }

    public ErrorResultImpl(int i) {
        this.b = i;
    }

    @Override
    public final R await() {
        return (R) await(0L, null);
    }

    @Override
    @Deprecated
    public void cancel() {
    }

    @Override
    @Deprecated
    public boolean isCanceled() {
        return false;
    }

    @Override
    public final void setResultCallback(ResultCallback<R> resultCallback) {
        setResultCallback(Looper.getMainLooper(), resultCallback);
    }

    @Override
    public R await(long j, TimeUnit timeUnit) {
        if (Looper.myLooper() != Looper.getMainLooper()) {
            return (R) a(this.b);
        }
        throw new IllegalStateException("await must not be called on the UI thread");
    }

    private R a(int i) {
        Type genericSuperclass = ErrorResultImpl.class.getGenericSuperclass();
        if (genericSuperclass == null) {
            return null;
        }
        try {
            R r = (R) GenericTypeReflector.getType(((ParameterizedType) genericSuperclass).getActualTypeArguments()[0]).newInstance();
            this.a = r;
            r.setStatus(new Status(i));
        } catch (IllegalAccessException unused) {
            HMSLog.e("ErrorResultImpl", "IllegalAccessException");
        } catch (InstantiationException unused2) {
            HMSLog.e("ErrorResultImpl", "InstantiationException");
        }
        return this.a;
    }

    @Override
    @Deprecated
    public void setResultCallback(ResultCallback<R> resultCallback, long j, TimeUnit timeUnit) {
        setResultCallback(resultCallback);
    }

    @Override
    public final void setResultCallback(Looper looper, ResultCallback<R> resultCallback) {
        if (looper == null) {
            looper = Looper.myLooper();
        }
        new Handler(looper).post(new a(resultCallback));
    }
}
