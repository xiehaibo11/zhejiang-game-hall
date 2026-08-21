package com.alibaba.sdk.android.oss.network;

import com.alibaba.sdk.android.oss.model.OSSRequest;
import com.alibaba.sdk.android.oss.model.OSSResult;

public class ExecutionContext<Request extends com.alibaba.sdk.android.oss.model.OSSRequest, Result extends com.alibaba.sdk.android.oss.model.OSSResult> {
    private android.content.Context applicationContext;
    private com.alibaba.sdk.android.oss.network.CancellationHandler cancellationHandler;
    private okhttp3.OkHttpClient client;
    private com.alibaba.sdk.android.oss.callback.OSSCompletedCallback completedCallback;
    private com.alibaba.sdk.android.oss.callback.OSSProgressCallback progressCallback;
    private Request request;
    private com.alibaba.sdk.android.oss.callback.OSSRetryCallback retryCallback;

    public ExecutionContext(okhttp3.OkHttpClient r2, Request r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public ExecutionContext(okhttp3.OkHttpClient r2, Request r3, android.content.Context r4) {
            r1 = this;
            r1.<init>()
            com.alibaba.sdk.android.oss.network.CancellationHandler r0 = new com.alibaba.sdk.android.oss.network.CancellationHandler
            r0.<init>()
            r1.cancellationHandler = r0
            r1.setClient(r2)
            r1.setRequest(r3)
            r1.applicationContext = r4
            return
    }

    public android.content.Context getApplicationContext() {
            r1 = this;
            android.content.Context r0 = r1.applicationContext
            return r0
    }

    public com.alibaba.sdk.android.oss.network.CancellationHandler getCancellationHandler() {
            r1 = this;
            com.alibaba.sdk.android.oss.network.CancellationHandler r0 = r1.cancellationHandler
            return r0
    }

    public okhttp3.OkHttpClient getClient() {
            r1 = this;
            okhttp3.OkHttpClient r0 = r1.client
            return r0
    }

    public com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<Request, Result> getCompletedCallback() {
            r1 = this;
            com.alibaba.sdk.android.oss.callback.OSSCompletedCallback r0 = r1.completedCallback
            return r0
    }

    public com.alibaba.sdk.android.oss.callback.OSSProgressCallback getProgressCallback() {
            r1 = this;
            com.alibaba.sdk.android.oss.callback.OSSProgressCallback r0 = r1.progressCallback
            return r0
    }

    public Request getRequest() {
            r1 = this;
            Request extends com.alibaba.sdk.android.oss.model.OSSRequest r0 = r1.request
            return r0
    }

    public com.alibaba.sdk.android.oss.callback.OSSRetryCallback getRetryCallback() {
            r1 = this;
            com.alibaba.sdk.android.oss.callback.OSSRetryCallback r0 = r1.retryCallback
            return r0
    }

    public void setClient(okhttp3.OkHttpClient r1) {
            r0 = this;
            r0.client = r1
            return
    }

    public void setCompletedCallback(com.alibaba.sdk.android.oss.callback.OSSCompletedCallback<Request, Result> r1) {
            r0 = this;
            r0.completedCallback = r1
            return
    }

    public void setProgressCallback(com.alibaba.sdk.android.oss.callback.OSSProgressCallback r1) {
            r0 = this;
            r0.progressCallback = r1
            return
    }

    public void setRequest(Request r1) {
            r0 = this;
            r0.request = r1
            return
    }

    public void setRetryCallback(com.alibaba.sdk.android.oss.callback.OSSRetryCallback r1) {
            r0 = this;
            r0.retryCallback = r1
            return
    }
}
