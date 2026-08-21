package com.alibaba.sdk.android.oss.internal;

import com.alibaba.sdk.android.oss.model.OSSResult;

public class OSSAsyncTask<T extends com.alibaba.sdk.android.oss.model.OSSResult> {
    private volatile boolean canceled;
    private com.alibaba.sdk.android.oss.network.ExecutionContext context;
    private java.util.concurrent.Future<T> future;

    public OSSAsyncTask() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.alibaba.sdk.android.oss.internal.OSSAsyncTask wrapRequestTask(java.util.concurrent.Future r1, com.alibaba.sdk.android.oss.network.ExecutionContext r2) {
            com.alibaba.sdk.android.oss.internal.OSSAsyncTask r0 = new com.alibaba.sdk.android.oss.internal.OSSAsyncTask
            r0.<init>()
            r0.future = r1
            r0.context = r2
            return r0
    }

    public void cancel() {
            r1 = this;
            r0 = 1
            r1.canceled = r0
            com.alibaba.sdk.android.oss.network.ExecutionContext r0 = r1.context
            if (r0 == 0) goto Le
            com.alibaba.sdk.android.oss.network.CancellationHandler r0 = r0.getCancellationHandler()
            r0.cancel()
        Le:
            return
    }

    public T getResult() throws com.alibaba.sdk.android.oss.ClientException, com.alibaba.sdk.android.oss.ServiceException {
            r4 = this;
            java.util.concurrent.Future<T extends com.alibaba.sdk.android.oss.model.OSSResult> r0 = r4.future     // Catch: java.util.concurrent.ExecutionException -> L9 java.lang.InterruptedException -> L3a
            java.lang.Object r0 = r0.get()     // Catch: java.util.concurrent.ExecutionException -> L9 java.lang.InterruptedException -> L3a
            com.alibaba.sdk.android.oss.model.OSSResult r0 = (com.alibaba.sdk.android.oss.model.OSSResult) r0     // Catch: java.util.concurrent.ExecutionException -> L9 java.lang.InterruptedException -> L3a
            return r0
        L9:
            r0 = move-exception
            java.lang.Throwable r0 = r0.getCause()
            boolean r1 = r0 instanceof com.alibaba.sdk.android.oss.ClientException
            if (r1 != 0) goto L37
            boolean r1 = r0 instanceof com.alibaba.sdk.android.oss.ServiceException
            if (r1 == 0) goto L19
            com.alibaba.sdk.android.oss.ServiceException r0 = (com.alibaba.sdk.android.oss.ServiceException) r0
            throw r0
        L19:
            r0.printStackTrace()
            com.alibaba.sdk.android.oss.ClientException r1 = new com.alibaba.sdk.android.oss.ClientException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Unexpected exception!"
            r2.append(r3)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        L37:
            com.alibaba.sdk.android.oss.ClientException r0 = (com.alibaba.sdk.android.oss.ClientException) r0
            throw r0
        L3a:
            r0 = move-exception
            com.alibaba.sdk.android.oss.ClientException r1 = new com.alibaba.sdk.android.oss.ClientException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = " InterruptedException and message : "
            r2.append(r3)
            java.lang.String r3 = r0.getMessage()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2, r0)
            throw r1
    }

    public boolean isCanceled() {
            r1 = this;
            boolean r0 = r1.canceled
            return r0
    }

    public boolean isCompleted() {
            r1 = this;
            java.util.concurrent.Future<T extends com.alibaba.sdk.android.oss.model.OSSResult> r0 = r1.future
            boolean r0 = r0.isDone()
            return r0
    }

    public void waitUntilFinished() {
            r1 = this;
            java.util.concurrent.Future<T extends com.alibaba.sdk.android.oss.model.OSSResult> r0 = r1.future     // Catch: java.lang.Exception -> L5
            r0.get()     // Catch: java.lang.Exception -> L5
        L5:
            return
    }
}
