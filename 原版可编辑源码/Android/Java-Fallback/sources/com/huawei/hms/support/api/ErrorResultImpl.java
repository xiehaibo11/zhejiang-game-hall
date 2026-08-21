package com.huawei.hms.support.api;

import com.huawei.hms.support.api.client.Result;

public abstract class ErrorResultImpl<R extends com.huawei.hms.support.api.client.Result> extends com.huawei.hms.support.api.client.PendingResult<R> {
    private R a;
    private int b;

    class a implements java.lang.Runnable {
        final com.huawei.hms.support.api.client.ResultCallback a;
        final com.huawei.hms.support.api.ErrorResultImpl b;

        a(com.huawei.hms.support.api.ErrorResultImpl r1, com.huawei.hms.support.api.client.ResultCallback r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r3 = this;
                com.huawei.hms.support.api.client.ResultCallback r0 = r3.a
                com.huawei.hms.support.api.ErrorResultImpl r1 = r3.b
                int r2 = com.huawei.hms.support.api.ErrorResultImpl.a(r1)
                com.huawei.hms.support.api.client.Result r1 = com.huawei.hms.support.api.ErrorResultImpl.a(r1, r2)
                r0.onResult(r1)
                return
        }
    }

    public ErrorResultImpl(int r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.b = r2
            return
    }

    static int a(com.huawei.hms.support.api.ErrorResultImpl r0) {
            int r0 = r0.b
            return r0
    }

    private R a(int r4) {
            r3 = this;
            java.lang.String r0 = "ErrorResultImpl"
            java.lang.Class<com.huawei.hms.support.api.ErrorResultImpl> r1 = com.huawei.hms.support.api.ErrorResultImpl.class
            java.lang.reflect.Type r1 = r1.getGenericSuperclass()
            if (r1 == 0) goto L36
            java.lang.reflect.ParameterizedType r1 = (java.lang.reflect.ParameterizedType) r1
            java.lang.reflect.Type[] r1 = r1.getActualTypeArguments()
            r2 = 0
            r1 = r1[r2]
            java.lang.Class r1 = com.huawei.hms.support.gentyref.GenericTypeReflector.getType(r1)
            java.lang.Object r1 = r1.newInstance()     // Catch: java.lang.IllegalAccessException -> L28 java.lang.InstantiationException -> L2e
            com.huawei.hms.support.api.client.Result r1 = (com.huawei.hms.support.api.client.Result) r1     // Catch: java.lang.IllegalAccessException -> L28 java.lang.InstantiationException -> L2e
            r3.a = r1     // Catch: java.lang.IllegalAccessException -> L28 java.lang.InstantiationException -> L2e
            com.huawei.hms.support.api.client.Status r2 = new com.huawei.hms.support.api.client.Status     // Catch: java.lang.IllegalAccessException -> L28 java.lang.InstantiationException -> L2e
            r2.<init>(r4)     // Catch: java.lang.IllegalAccessException -> L28 java.lang.InstantiationException -> L2e
            r1.setStatus(r2)     // Catch: java.lang.IllegalAccessException -> L28 java.lang.InstantiationException -> L2e
            goto L33
        L28:
            java.lang.String r4 = "IllegalAccessException"
            com.huawei.hms.support.log.HMSLog.e(r0, r4)
            goto L33
        L2e:
            java.lang.String r4 = "InstantiationException"
            com.huawei.hms.support.log.HMSLog.e(r0, r4)
        L33:
            R extends com.huawei.hms.support.api.client.Result r4 = r3.a
            return r4
        L36:
            r4 = 0
            return r4
    }

    static com.huawei.hms.support.api.client.Result a(com.huawei.hms.support.api.ErrorResultImpl r0, int r1) {
            com.huawei.hms.support.api.client.Result r0 = r0.a(r1)
            return r0
    }

    @Override
    public final R await() {
            r3 = this;
            r0 = 0
            r2 = 0
            com.huawei.hms.support.api.client.Result r0 = r3.await(r0, r2)
            return r0
    }

    @Override
    public R await(long r1, java.util.concurrent.TimeUnit r3) {
            r0 = this;
            android.os.Looper r1 = android.os.Looper.myLooper()
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            if (r1 == r2) goto L11
            int r1 = r0.b
            com.huawei.hms.support.api.client.Result r1 = r0.a(r1)
            return r1
        L11:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "await must not be called on the UI thread"
            r1.<init>(r2)
            throw r1
    }

    @Override
    @java.lang.Deprecated
    public void cancel() {
            r0 = this;
            return
    }

    @Override
    @java.lang.Deprecated
    public boolean isCanceled() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final void setResultCallback(android.os.Looper r2, com.huawei.hms.support.api.client.ResultCallback<R> r3) {
            r1 = this;
            android.os.Handler r0 = new android.os.Handler
            if (r2 != 0) goto L8
            android.os.Looper r2 = android.os.Looper.myLooper()
        L8:
            r0.<init>(r2)
            com.huawei.hms.support.api.ErrorResultImpl$a r2 = new com.huawei.hms.support.api.ErrorResultImpl$a
            r2.<init>(r1, r3)
            r0.post(r2)
            return
    }

    @Override
    public final void setResultCallback(com.huawei.hms.support.api.client.ResultCallback<R> r2) {
            r1 = this;
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r1.setResultCallback(r0, r2)
            return
    }

    @Override
    @java.lang.Deprecated
    public void setResultCallback(com.huawei.hms.support.api.client.ResultCallback<R> r1, long r2, java.util.concurrent.TimeUnit r4) {
            r0 = this;
            r0.setResultCallback(r1)
            return
    }
}
