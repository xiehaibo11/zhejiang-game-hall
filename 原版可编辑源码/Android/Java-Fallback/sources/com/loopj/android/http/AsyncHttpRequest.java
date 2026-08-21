package com.loopj.android.http;

public class AsyncHttpRequest implements java.lang.Runnable {
    private boolean cancelIsNotified;
    private final cz.msebera.android.httpclient.impl.client.AbstractHttpClient client;
    private final cz.msebera.android.httpclient.protocol.HttpContext context;
    private int executionCount;
    private final java.util.concurrent.atomic.AtomicBoolean isCancelled;
    private volatile boolean isFinished;
    private boolean isRequestPreProcessed;
    private final cz.msebera.android.httpclient.client.methods.HttpUriRequest request;
    private final com.loopj.android.http.ResponseHandlerInterface responseHandler;

    public AsyncHttpRequest(cz.msebera.android.httpclient.impl.client.AbstractHttpClient r2, cz.msebera.android.httpclient.protocol.HttpContext r3, cz.msebera.android.httpclient.client.methods.HttpUriRequest r4, com.loopj.android.http.ResponseHandlerInterface r5) {
            r1 = this;
            r1.<init>()
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>()
            r1.isCancelled = r0
            java.lang.String r0 = "client"
            java.lang.Object r2 = com.loopj.android.http.Utils.notNull(r2, r0)
            cz.msebera.android.httpclient.impl.client.AbstractHttpClient r2 = (cz.msebera.android.httpclient.impl.client.AbstractHttpClient) r2
            r1.client = r2
            java.lang.String r2 = "context"
            java.lang.Object r2 = com.loopj.android.http.Utils.notNull(r3, r2)
            cz.msebera.android.httpclient.protocol.HttpContext r2 = (cz.msebera.android.httpclient.protocol.HttpContext) r2
            r1.context = r2
            java.lang.String r2 = "request"
            java.lang.Object r2 = com.loopj.android.http.Utils.notNull(r4, r2)
            cz.msebera.android.httpclient.client.methods.HttpUriRequest r2 = (cz.msebera.android.httpclient.client.methods.HttpUriRequest) r2
            r1.request = r2
            java.lang.String r2 = "responseHandler"
            java.lang.Object r2 = com.loopj.android.http.Utils.notNull(r5, r2)
            com.loopj.android.http.ResponseHandlerInterface r2 = (com.loopj.android.http.ResponseHandlerInterface) r2
            r1.responseHandler = r2
            return
    }

    private void makeRequest() throws java.io.IOException {
            r3 = this;
            boolean r0 = r3.isCancelled()
            if (r0 == 0) goto L7
            return
        L7:
            cz.msebera.android.httpclient.client.methods.HttpUriRequest r0 = r3.request
            java.net.URI r0 = r0.getURI()
            java.lang.String r0 = r0.getScheme()
            if (r0 == 0) goto L4f
            com.loopj.android.http.ResponseHandlerInterface r0 = r3.responseHandler
            boolean r1 = r0 instanceof com.loopj.android.http.RangeFileAsyncHttpResponseHandler
            if (r1 == 0) goto L20
            com.loopj.android.http.RangeFileAsyncHttpResponseHandler r0 = (com.loopj.android.http.RangeFileAsyncHttpResponseHandler) r0
            cz.msebera.android.httpclient.client.methods.HttpUriRequest r1 = r3.request
            r0.updateRequestHeaders(r1)
        L20:
            cz.msebera.android.httpclient.impl.client.AbstractHttpClient r0 = r3.client
            cz.msebera.android.httpclient.client.methods.HttpUriRequest r1 = r3.request
            cz.msebera.android.httpclient.protocol.HttpContext r2 = r3.context
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r0 = r0.execute(r1, r2)
            boolean r1 = r3.isCancelled()
            if (r1 == 0) goto L31
            return
        L31:
            com.loopj.android.http.ResponseHandlerInterface r1 = r3.responseHandler
            r1.onPreProcessResponse(r1, r0)
            boolean r1 = r3.isCancelled()
            if (r1 == 0) goto L3d
            return
        L3d:
            com.loopj.android.http.ResponseHandlerInterface r1 = r3.responseHandler
            r1.sendResponseMessage(r0)
            boolean r1 = r3.isCancelled()
            if (r1 == 0) goto L49
            return
        L49:
            com.loopj.android.http.ResponseHandlerInterface r1 = r3.responseHandler
            r1.onPostProcessResponse(r1, r0)
            return
        L4f:
            java.net.MalformedURLException r0 = new java.net.MalformedURLException
            java.lang.String r1 = "No valid URI scheme was provided"
            r0.<init>(r1)
            throw r0
    }

    private void makeRequestWithRetries() throws java.io.IOException {
            r7 = this;
            cz.msebera.android.httpclient.impl.client.AbstractHttpClient r0 = r7.client
            cz.msebera.android.httpclient.client.HttpRequestRetryHandler r0 = r0.getHttpRequestRetryHandler()
            r1 = 1
            r2 = 0
            r3 = r2
            r2 = 1
        La:
            if (r2 == 0) goto Lad
            r7.makeRequest()     // Catch: java.lang.Exception -> L10 java.io.IOException -> L13 java.lang.NullPointerException -> L2a java.net.UnknownHostException -> L51
            return
        L10:
            r0 = move-exception
            goto L8a
        L13:
            r2 = move-exception
            boolean r3 = r7.isCancelled()     // Catch: java.lang.Exception -> L10
            if (r3 == 0) goto L1b
            return
        L1b:
            int r3 = r7.executionCount     // Catch: java.lang.Exception -> L10
            int r3 = r3 + r1
            r7.executionCount = r3     // Catch: java.lang.Exception -> L10
            cz.msebera.android.httpclient.protocol.HttpContext r4 = r7.context     // Catch: java.lang.Exception -> L10
            boolean r3 = r0.retryRequest(r2, r3, r4)     // Catch: java.lang.Exception -> L10
            r6 = r3
            r3 = r2
            r2 = r6
            goto L80
        L2a:
            r2 = move-exception
            java.io.IOException r3 = new java.io.IOException     // Catch: java.lang.Exception -> L10
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L10
            r4.<init>()     // Catch: java.lang.Exception -> L10
            java.lang.String r5 = "NPE in HttpClient: "
            r4.append(r5)     // Catch: java.lang.Exception -> L10
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Exception -> L10
            r4.append(r2)     // Catch: java.lang.Exception -> L10
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Exception -> L10
            r3.<init>(r2)     // Catch: java.lang.Exception -> L10
            int r2 = r7.executionCount     // Catch: java.lang.Exception -> L10
            int r2 = r2 + r1
            r7.executionCount = r2     // Catch: java.lang.Exception -> L10
            cz.msebera.android.httpclient.protocol.HttpContext r4 = r7.context     // Catch: java.lang.Exception -> L10
            boolean r2 = r0.retryRequest(r3, r2, r4)     // Catch: java.lang.Exception -> L10
            goto L80
        L51:
            r2 = move-exception
            java.io.IOException r3 = new java.io.IOException     // Catch: java.lang.Exception -> L10
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L10
            r4.<init>()     // Catch: java.lang.Exception -> L10
            java.lang.String r5 = "UnknownHostException exception: "
            r4.append(r5)     // Catch: java.lang.Exception -> L10
            java.lang.String r5 = r2.getMessage()     // Catch: java.lang.Exception -> L10
            r4.append(r5)     // Catch: java.lang.Exception -> L10
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L10
            r3.<init>(r4)     // Catch: java.lang.Exception -> L10
            int r4 = r7.executionCount     // Catch: java.lang.Exception -> L10
            if (r4 <= 0) goto L7f
            int r4 = r7.executionCount     // Catch: java.lang.Exception -> L10
            int r4 = r4 + r1
            r7.executionCount = r4     // Catch: java.lang.Exception -> L10
            cz.msebera.android.httpclient.protocol.HttpContext r5 = r7.context     // Catch: java.lang.Exception -> L10
            boolean r2 = r0.retryRequest(r2, r4, r5)     // Catch: java.lang.Exception -> L10
            if (r2 == 0) goto L7f
            r2 = 1
            goto L80
        L7f:
            r2 = 0
        L80:
            if (r2 == 0) goto La
            com.loopj.android.http.ResponseHandlerInterface r4 = r7.responseHandler     // Catch: java.lang.Exception -> L10
            int r5 = r7.executionCount     // Catch: java.lang.Exception -> L10
            r4.sendRetryMessage(r5)     // Catch: java.lang.Exception -> L10
            goto La
        L8a:
            com.loopj.android.http.LogInterface r1 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r2 = "AsyncHttpRequest"
            java.lang.String r3 = "Unhandled exception origin cause"
            r1.e(r2, r3, r0)
            java.io.IOException r3 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unhandled exception: "
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r3.<init>(r0)
        Lad:
            throw r3
    }

    private synchronized void sendCancelNotification() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.isFinished     // Catch: java.lang.Throwable -> L1b
            if (r0 != 0) goto L19
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.isCancelled     // Catch: java.lang.Throwable -> L1b
            boolean r0 = r0.get()     // Catch: java.lang.Throwable -> L1b
            if (r0 == 0) goto L19
            boolean r0 = r1.cancelIsNotified     // Catch: java.lang.Throwable -> L1b
            if (r0 != 0) goto L19
            r0 = 1
            r1.cancelIsNotified = r0     // Catch: java.lang.Throwable -> L1b
            com.loopj.android.http.ResponseHandlerInterface r0 = r1.responseHandler     // Catch: java.lang.Throwable -> L1b
            r0.sendCancelMessage()     // Catch: java.lang.Throwable -> L1b
        L19:
            monitor-exit(r1)
            return
        L1b:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public boolean cancel(boolean r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r2 = r1.isCancelled
            r0 = 1
            r2.set(r0)
            cz.msebera.android.httpclient.client.methods.HttpUriRequest r2 = r1.request
            r2.abort()
            boolean r2 = r1.isCancelled()
            return r2
    }

    public java.lang.Object getTag() {
            r1 = this;
            com.loopj.android.http.ResponseHandlerInterface r0 = r1.responseHandler
            java.lang.Object r0 = r0.getTag()
            return r0
    }

    public boolean isCancelled() {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.isCancelled
            boolean r0 = r0.get()
            if (r0 == 0) goto Lb
            r1.sendCancelNotification()
        Lb:
            return r0
    }

    public boolean isDone() {
            r1 = this;
            boolean r0 = r1.isCancelled()
            if (r0 != 0) goto Ld
            boolean r0 = r1.isFinished
            if (r0 == 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            goto Le
        Ld:
            r0 = 1
        Le:
            return r0
    }

    public void onPostProcessRequest(com.loopj.android.http.AsyncHttpRequest r1) {
            r0 = this;
            return
    }

    public void onPreProcessRequest(com.loopj.android.http.AsyncHttpRequest r1) {
            r0 = this;
            return
    }

    @Override
    public void run() {
            r5 = this;
            boolean r0 = r5.isCancelled()
            if (r0 == 0) goto L7
            return
        L7:
            boolean r0 = r5.isRequestPreProcessed
            r1 = 1
            if (r0 != 0) goto L11
            r5.isRequestPreProcessed = r1
            r5.onPreProcessRequest(r5)
        L11:
            boolean r0 = r5.isCancelled()
            if (r0 == 0) goto L18
            return
        L18:
            com.loopj.android.http.ResponseHandlerInterface r0 = r5.responseHandler
            r0.sendStartMessage()
            boolean r0 = r5.isCancelled()
            if (r0 == 0) goto L24
            return
        L24:
            r5.makeRequestWithRetries()     // Catch: java.io.IOException -> L28
            goto L40
        L28:
            r0 = move-exception
            boolean r2 = r5.isCancelled()
            if (r2 != 0) goto L37
            com.loopj.android.http.ResponseHandlerInterface r2 = r5.responseHandler
            r3 = 0
            r4 = 0
            r2.sendFailureMessage(r3, r4, r4, r0)
            goto L40
        L37:
            com.loopj.android.http.LogInterface r2 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r3 = "AsyncHttpRequest"
            java.lang.String r4 = "makeRequestWithRetries returned error"
            r2.e(r3, r4, r0)
        L40:
            boolean r0 = r5.isCancelled()
            if (r0 == 0) goto L47
            return
        L47:
            com.loopj.android.http.ResponseHandlerInterface r0 = r5.responseHandler
            r0.sendFinishMessage()
            boolean r0 = r5.isCancelled()
            if (r0 == 0) goto L53
            return
        L53:
            r5.onPostProcessRequest(r5)
            r5.isFinished = r1
            return
    }

    public com.loopj.android.http.AsyncHttpRequest setRequestTag(java.lang.Object r2) {
            r1 = this;
            com.loopj.android.http.ResponseHandlerInterface r0 = r1.responseHandler
            r0.setTag(r2)
            return r1
    }
}
