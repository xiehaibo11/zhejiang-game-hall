package com.loopj.android.http;

public abstract class AsyncHttpResponseHandler implements com.loopj.android.http.ResponseHandlerInterface {
    protected static final int BUFFER_SIZE = 4096;
    protected static final int CANCEL_MESSAGE = 6;
    public static final java.lang.String DEFAULT_CHARSET = "UTF-8";
    protected static final int FAILURE_MESSAGE = 1;
    protected static final int FINISH_MESSAGE = 3;
    private static final java.lang.String LOG_TAG = "AsyncHttpRH";
    protected static final int PROGRESS_MESSAGE = 4;
    protected static final int RETRY_MESSAGE = 5;
    protected static final int START_MESSAGE = 2;
    protected static final int SUCCESS_MESSAGE = 0;
    public static final java.lang.String UTF8_BOM = "\ufeff";
    private java.lang.ref.WeakReference<java.lang.Object> TAG;
    private android.os.Handler handler;
    private android.os.Looper looper;
    private cz.msebera.android.httpclient.Header[] requestHeaders;
    private java.net.URI requestURI;
    private java.lang.String responseCharset;
    private boolean usePoolThread;
    private boolean useSynchronousMode;

    private static class ResponderHandler extends android.os.Handler {
        private final com.loopj.android.http.AsyncHttpResponseHandler mResponder;

        ResponderHandler(com.loopj.android.http.AsyncHttpResponseHandler r1, android.os.Looper r2) {
                r0 = this;
                r0.<init>(r2)
                r0.mResponder = r1
                return
        }

        @Override
        public void handleMessage(android.os.Message r2) {
                r1 = this;
                com.loopj.android.http.AsyncHttpResponseHandler r0 = r1.mResponder
                r0.handleMessage(r2)
                return
        }
    }

    public AsyncHttpResponseHandler() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public AsyncHttpResponseHandler(android.os.Looper r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "UTF-8"
            r2.responseCharset = r0
            r0 = 0
            r2.requestURI = r0
            r2.requestHeaders = r0
            r2.looper = r0
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r0)
            r2.TAG = r1
            if (r3 != 0) goto L1b
            android.os.Looper r3 = android.os.Looper.myLooper()
        L1b:
            r2.looper = r3
            r3 = 0
            r2.setUseSynchronousMode(r3)
            r2.setUsePoolThread(r3)
            return
    }

    public AsyncHttpResponseHandler(boolean r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "UTF-8"
            r2.responseCharset = r0
            r0 = 0
            r2.requestURI = r0
            r2.requestHeaders = r0
            r2.looper = r0
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r0)
            r2.TAG = r1
            r2.setUsePoolThread(r3)
            boolean r3 = r2.getUsePoolThread()
            if (r3 != 0) goto L28
            android.os.Looper r3 = android.os.Looper.myLooper()
            r2.looper = r3
            r3 = 0
            r2.setUseSynchronousMode(r3)
        L28:
            return
    }

    public java.lang.String getCharset() {
            r1 = this;
            java.lang.String r0 = r1.responseCharset
            if (r0 != 0) goto L6
            java.lang.String r0 = "UTF-8"
        L6:
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.Header[] getRequestHeaders() {
            r1 = this;
            cz.msebera.android.httpclient.Header[] r0 = r1.requestHeaders
            return r0
    }

    @Override
    public java.net.URI getRequestURI() {
            r1 = this;
            java.net.URI r0 = r1.requestURI
            return r0
    }

    byte[] getResponseData(cz.msebera.android.httpclient.HttpEntity r12) throws java.io.IOException {
            r11 = this;
            if (r12 == 0) goto L6d
            java.io.InputStream r0 = r12.getContent()
            if (r0 == 0) goto L6d
            long r1 = r12.getContentLength()
            r3 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 > 0) goto L65
            r3 = 4096(0x1000, float:5.74E-42)
            r4 = 0
            int r6 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
            if (r6 > 0) goto L1e
            r7 = 4096(0x1000, float:5.74E-42)
            goto L1f
        L1e:
            int r7 = (int) r1
        L1f:
            cz.msebera.android.httpclient.util.ByteArrayBuffer r8 = new cz.msebera.android.httpclient.util.ByteArrayBuffer     // Catch: java.lang.OutOfMemoryError -> L5a
            r8.<init>(r7)     // Catch: java.lang.OutOfMemoryError -> L5a
            byte[] r3 = new byte[r3]     // Catch: java.lang.Throwable -> L52
        L26:
            int r7 = r0.read(r3)     // Catch: java.lang.Throwable -> L52
            r9 = -1
            if (r7 == r9) goto L47
            java.lang.Thread r9 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L52
            boolean r9 = r9.isInterrupted()     // Catch: java.lang.Throwable -> L52
            if (r9 != 0) goto L47
            long r9 = (long) r7     // Catch: java.lang.Throwable -> L52
            long r4 = r4 + r9
            r9 = 0
            r8.append(r3, r9, r7)     // Catch: java.lang.Throwable -> L52
            if (r6 > 0) goto L42
            r9 = 1
            goto L43
        L42:
            r9 = r1
        L43:
            r11.sendProgressMessage(r4, r9)     // Catch: java.lang.Throwable -> L52
            goto L26
        L47:
            com.loopj.android.http.AsyncHttpClient.silentCloseInputStream(r0)     // Catch: java.lang.OutOfMemoryError -> L5a
            com.loopj.android.http.AsyncHttpClient.endEntityViaReflection(r12)     // Catch: java.lang.OutOfMemoryError -> L5a
            byte[] r12 = r8.toByteArray()     // Catch: java.lang.OutOfMemoryError -> L5a
            goto L6e
        L52:
            r1 = move-exception
            com.loopj.android.http.AsyncHttpClient.silentCloseInputStream(r0)     // Catch: java.lang.OutOfMemoryError -> L5a
            com.loopj.android.http.AsyncHttpClient.endEntityViaReflection(r12)     // Catch: java.lang.OutOfMemoryError -> L5a
            throw r1     // Catch: java.lang.OutOfMemoryError -> L5a
        L5a:
            java.lang.System.gc()
            java.io.IOException r12 = new java.io.IOException
            java.lang.String r0 = "File too large to fit into available memory"
            r12.<init>(r0)
            throw r12
        L65:
            java.lang.IllegalArgumentException r12 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "HTTP entity too large to be buffered in memory"
            r12.<init>(r0)
            throw r12
        L6d:
            r12 = 0
        L6e:
            return r12
    }

    @Override
    public java.lang.Object getTag() {
            r1 = this;
            java.lang.ref.WeakReference<java.lang.Object> r0 = r1.TAG
            java.lang.Object r0 = r0.get()
            return r0
    }

    @Override
    public boolean getUsePoolThread() {
            r1 = this;
            boolean r0 = r1.usePoolThread
            return r0
    }

    @Override
    public boolean getUseSynchronousMode() {
            r1 = this;
            boolean r0 = r1.useSynchronousMode
            return r0
    }

    protected void handleMessage(android.os.Message r8) {
            r7 = this;
            int r0 = r8.what     // Catch: java.lang.Throwable -> Lc8
            r1 = 3
            r2 = 2
            r3 = 0
            r4 = 1
            java.lang.String r5 = "AsyncHttpRH"
            switch(r0) {
                case 0: goto L9d;
                case 1: goto L6d;
                case 2: goto L69;
                case 3: goto L65;
                case 4: goto L33;
                case 5: goto L12;
                case 6: goto Ld;
                default: goto Lb;
            }
        Lb:
            goto Lcc
        Ld:
            r7.onCancel()     // Catch: java.lang.Throwable -> Lc8
            goto Lcc
        L12:
            java.lang.Object r8 = r8.obj     // Catch: java.lang.Throwable -> Lc8
            java.lang.Object[] r8 = (java.lang.Object[]) r8     // Catch: java.lang.Throwable -> Lc8
            java.lang.Object[] r8 = (java.lang.Object[]) r8     // Catch: java.lang.Throwable -> Lc8
            if (r8 == 0) goto L2a
            int r0 = r8.length     // Catch: java.lang.Throwable -> Lc8
            if (r0 != r4) goto L2a
            r8 = r8[r3]     // Catch: java.lang.Throwable -> Lc8
            java.lang.Integer r8 = (java.lang.Integer) r8     // Catch: java.lang.Throwable -> Lc8
            int r8 = r8.intValue()     // Catch: java.lang.Throwable -> Lc8
            r7.onRetry(r8)     // Catch: java.lang.Throwable -> Lc8
            goto Lcc
        L2a:
            com.loopj.android.http.LogInterface r8 = com.loopj.android.http.AsyncHttpClient.log     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r0 = "RETRY_MESSAGE didn't get enough params"
            r8.e(r5, r0)     // Catch: java.lang.Throwable -> Lc8
            goto Lcc
        L33:
            java.lang.Object r8 = r8.obj     // Catch: java.lang.Throwable -> Lc8
            java.lang.Object[] r8 = (java.lang.Object[]) r8     // Catch: java.lang.Throwable -> Lc8
            java.lang.Object[] r8 = (java.lang.Object[]) r8     // Catch: java.lang.Throwable -> Lc8
            if (r8 == 0) goto L5d
            int r0 = r8.length     // Catch: java.lang.Throwable -> Lc8
            if (r0 < r2) goto L5d
            r0 = r8[r3]     // Catch: java.lang.Throwable -> L53
            java.lang.Long r0 = (java.lang.Long) r0     // Catch: java.lang.Throwable -> L53
            long r0 = r0.longValue()     // Catch: java.lang.Throwable -> L53
            r8 = r8[r4]     // Catch: java.lang.Throwable -> L53
            java.lang.Long r8 = (java.lang.Long) r8     // Catch: java.lang.Throwable -> L53
            long r2 = r8.longValue()     // Catch: java.lang.Throwable -> L53
            r7.onProgress(r0, r2)     // Catch: java.lang.Throwable -> L53
            goto Lcc
        L53:
            r8 = move-exception
            com.loopj.android.http.LogInterface r0 = com.loopj.android.http.AsyncHttpClient.log     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r1 = "custom onProgress contains an error"
            r0.e(r5, r1, r8)     // Catch: java.lang.Throwable -> Lc8
            goto Lcc
        L5d:
            com.loopj.android.http.LogInterface r8 = com.loopj.android.http.AsyncHttpClient.log     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r0 = "PROGRESS_MESSAGE didn't got enough params"
            r8.e(r5, r0)     // Catch: java.lang.Throwable -> Lc8
            goto Lcc
        L65:
            r7.onFinish()     // Catch: java.lang.Throwable -> Lc8
            goto Lcc
        L69:
            r7.onStart()     // Catch: java.lang.Throwable -> Lc8
            goto Lcc
        L6d:
            java.lang.Object r8 = r8.obj     // Catch: java.lang.Throwable -> Lc8
            java.lang.Object[] r8 = (java.lang.Object[]) r8     // Catch: java.lang.Throwable -> Lc8
            java.lang.Object[] r8 = (java.lang.Object[]) r8     // Catch: java.lang.Throwable -> Lc8
            if (r8 == 0) goto L95
            int r0 = r8.length     // Catch: java.lang.Throwable -> Lc8
            r6 = 4
            if (r0 < r6) goto L95
            r0 = r8[r3]     // Catch: java.lang.Throwable -> Lc8
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Throwable -> Lc8
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> Lc8
            r3 = r8[r4]     // Catch: java.lang.Throwable -> Lc8
            cz.msebera.android.httpclient.Header[] r3 = (cz.msebera.android.httpclient.Header[]) r3     // Catch: java.lang.Throwable -> Lc8
            cz.msebera.android.httpclient.Header[] r3 = (cz.msebera.android.httpclient.Header[]) r3     // Catch: java.lang.Throwable -> Lc8
            r2 = r8[r2]     // Catch: java.lang.Throwable -> Lc8
            byte[] r2 = (byte[]) r2     // Catch: java.lang.Throwable -> Lc8
            byte[] r2 = (byte[]) r2     // Catch: java.lang.Throwable -> Lc8
            r8 = r8[r1]     // Catch: java.lang.Throwable -> Lc8
            java.lang.Throwable r8 = (java.lang.Throwable) r8     // Catch: java.lang.Throwable -> Lc8
            r7.onFailure(r0, r3, r2, r8)     // Catch: java.lang.Throwable -> Lc8
            goto Lcc
        L95:
            com.loopj.android.http.LogInterface r8 = com.loopj.android.http.AsyncHttpClient.log     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r0 = "FAILURE_MESSAGE didn't got enough params"
            r8.e(r5, r0)     // Catch: java.lang.Throwable -> Lc8
            goto Lcc
        L9d:
            java.lang.Object r8 = r8.obj     // Catch: java.lang.Throwable -> Lc8
            java.lang.Object[] r8 = (java.lang.Object[]) r8     // Catch: java.lang.Throwable -> Lc8
            java.lang.Object[] r8 = (java.lang.Object[]) r8     // Catch: java.lang.Throwable -> Lc8
            if (r8 == 0) goto Lc0
            int r0 = r8.length     // Catch: java.lang.Throwable -> Lc8
            if (r0 < r1) goto Lc0
            r0 = r8[r3]     // Catch: java.lang.Throwable -> Lc8
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Throwable -> Lc8
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> Lc8
            r1 = r8[r4]     // Catch: java.lang.Throwable -> Lc8
            cz.msebera.android.httpclient.Header[] r1 = (cz.msebera.android.httpclient.Header[]) r1     // Catch: java.lang.Throwable -> Lc8
            cz.msebera.android.httpclient.Header[] r1 = (cz.msebera.android.httpclient.Header[]) r1     // Catch: java.lang.Throwable -> Lc8
            r8 = r8[r2]     // Catch: java.lang.Throwable -> Lc8
            byte[] r8 = (byte[]) r8     // Catch: java.lang.Throwable -> Lc8
            byte[] r8 = (byte[]) r8     // Catch: java.lang.Throwable -> Lc8
            r7.onSuccess(r0, r1, r8)     // Catch: java.lang.Throwable -> Lc8
            goto Lcc
        Lc0:
            com.loopj.android.http.LogInterface r8 = com.loopj.android.http.AsyncHttpClient.log     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r0 = "SUCCESS_MESSAGE didn't got enough params"
            r8.e(r5, r0)     // Catch: java.lang.Throwable -> Lc8
            goto Lcc
        Lc8:
            r8 = move-exception
            r7.onUserException(r8)
        Lcc:
            return
    }

    protected android.os.Message obtainMessage(int r2, java.lang.Object r3) {
            r1 = this;
            android.os.Handler r0 = r1.handler
            android.os.Message r2 = android.os.Message.obtain(r0, r2, r3)
            return r2
    }

    public void onCancel() {
            r3 = this;
            com.loopj.android.http.LogInterface r0 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r1 = "AsyncHttpRH"
            java.lang.String r2 = "Request got cancelled"
            r0.d(r1, r2)
            return
    }

    public abstract void onFailure(int r1, cz.msebera.android.httpclient.Header[] r2, byte[] r3, java.lang.Throwable r4);

    public void onFinish() {
            r0 = this;
            return
    }

    @Override
    public void onPostProcessResponse(com.loopj.android.http.ResponseHandlerInterface r1, cz.msebera.android.httpclient.HttpResponse r2) {
            r0 = this;
            return
    }

    @Override
    public void onPreProcessResponse(com.loopj.android.http.ResponseHandlerInterface r1, cz.msebera.android.httpclient.HttpResponse r2) {
            r0 = this;
            return
    }

    public void onProgress(long r6, long r8) {
            r5 = this;
            com.loopj.android.http.LogInterface r0 = com.loopj.android.http.AsyncHttpClient.log
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.Long r2 = java.lang.Long.valueOf(r6)
            r3 = 0
            r1[r3] = r2
            java.lang.Long r2 = java.lang.Long.valueOf(r8)
            r3 = 1
            r1[r3] = r2
            r2 = 0
            int r4 = (r8 > r2 ? 1 : (r8 == r2 ? 0 : -1))
            if (r4 <= 0) goto L25
            double r6 = (double) r6
            r2 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r6 = r6 * r2
            double r8 = (double) r8
            double r6 = r6 / r8
            r8 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r6 = r6 * r8
            goto L27
        L25:
            r6 = -4616189618054758400(0xbff0000000000000, double:-1.0)
        L27:
            java.lang.Double r6 = java.lang.Double.valueOf(r6)
            r7 = 2
            r1[r7] = r6
            java.lang.String r6 = "Progress %d from %d (%2.0f%%)"
            java.lang.String r6 = java.lang.String.format(r6, r1)
            java.lang.String r7 = "AsyncHttpRH"
            r0.v(r7, r6)
            return
    }

    public void onRetry(int r4) {
            r3 = this;
            com.loopj.android.http.LogInterface r0 = com.loopj.android.http.AsyncHttpClient.log
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r2 = 0
            r1[r2] = r4
            java.lang.String r4 = "Request retry no. %d"
            java.lang.String r4 = java.lang.String.format(r4, r1)
            java.lang.String r1 = "AsyncHttpRH"
            r0.d(r1, r4)
            return
    }

    public void onStart() {
            r0 = this;
            return
    }

    public abstract void onSuccess(int r1, cz.msebera.android.httpclient.Header[] r2, byte[] r3);

    public void onUserException(java.lang.Throwable r4) {
            r3 = this;
            com.loopj.android.http.LogInterface r0 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r1 = "AsyncHttpRH"
            java.lang.String r2 = "User-space exception detected!"
            r0.e(r1, r2, r4)
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>(r4)
            throw r0
    }

    protected void postRunnable(java.lang.Runnable r2) {
            r1 = this;
            if (r2 == 0) goto L14
            boolean r0 = r1.getUseSynchronousMode()
            if (r0 != 0) goto L11
            android.os.Handler r0 = r1.handler
            if (r0 != 0) goto Ld
            goto L11
        Ld:
            r0.post(r2)
            goto L14
        L11:
            r2.run()
        L14:
            return
    }

    @Override
    public final void sendCancelMessage() {
            r2 = this;
            r0 = 6
            r1 = 0
            android.os.Message r0 = r2.obtainMessage(r0, r1)
            r2.sendMessage(r0)
            return
    }

    @Override
    public final void sendFailureMessage(int r3, cz.msebera.android.httpclient.Header[] r4, byte[] r5, java.lang.Throwable r6) {
            r2 = this;
            r0 = 4
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1 = 0
            r0[r1] = r3
            r3 = 1
            r0[r3] = r4
            r4 = 2
            r0[r4] = r5
            r4 = 3
            r0[r4] = r6
            android.os.Message r3 = r2.obtainMessage(r3, r0)
            r2.sendMessage(r3)
            return
    }

    @Override
    public final void sendFinishMessage() {
            r2 = this;
            r0 = 3
            r1 = 0
            android.os.Message r0 = r2.obtainMessage(r0, r1)
            r2.sendMessage(r0)
            return
    }

    protected void sendMessage(android.os.Message r3) {
            r2 = this;
            boolean r0 = r2.getUseSynchronousMode()
            if (r0 != 0) goto L27
            android.os.Handler r0 = r2.handler
            if (r0 != 0) goto Lb
            goto L27
        Lb:
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            boolean r0 = r0.isInterrupted()
            if (r0 != 0) goto L2a
            android.os.Handler r0 = r2.handler
            if (r0 == 0) goto L1b
            r0 = 1
            goto L1c
        L1b:
            r0 = 0
        L1c:
            java.lang.String r1 = "handler should not be null!"
            com.loopj.android.http.Utils.asserts(r0, r1)
            android.os.Handler r0 = r2.handler
            r0.sendMessage(r3)
            goto L2a
        L27:
            r2.handleMessage(r3)
        L2a:
            return
    }

    @Override
    public final void sendProgressMessage(long r2, long r4) {
            r1 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            r3 = 0
            r0[r3] = r2
            java.lang.Long r2 = java.lang.Long.valueOf(r4)
            r3 = 1
            r0[r3] = r2
            r2 = 4
            android.os.Message r2 = r1.obtainMessage(r2, r0)
            r1.sendMessage(r2)
            return
    }

    @Override
    public void sendResponseMessage(cz.msebera.android.httpclient.HttpResponse r6) throws java.io.IOException {
            r5 = this;
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            boolean r0 = r0.isInterrupted()
            if (r0 != 0) goto L4c
            cz.msebera.android.httpclient.StatusLine r0 = r6.getStatusLine()
            cz.msebera.android.httpclient.HttpEntity r1 = r6.getEntity()
            byte[] r1 = r5.getResponseData(r1)
            java.lang.Thread r2 = java.lang.Thread.currentThread()
            boolean r2 = r2.isInterrupted()
            if (r2 != 0) goto L4c
            int r2 = r0.getStatusCode()
            r3 = 300(0x12c, float:4.2E-43)
            if (r2 < r3) goto L41
            int r2 = r0.getStatusCode()
            cz.msebera.android.httpclient.Header[] r6 = r6.getAllHeaders()
            cz.msebera.android.httpclient.client.HttpResponseException r3 = new cz.msebera.android.httpclient.client.HttpResponseException
            int r4 = r0.getStatusCode()
            java.lang.String r0 = r0.getReasonPhrase()
            r3.<init>(r4, r0)
            r5.sendFailureMessage(r2, r6, r1, r3)
            goto L4c
        L41:
            int r0 = r0.getStatusCode()
            cz.msebera.android.httpclient.Header[] r6 = r6.getAllHeaders()
            r5.sendSuccessMessage(r0, r6, r1)
        L4c:
            return
    }

    @Override
    public final void sendRetryMessage(int r3) {
            r2 = this;
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1 = 0
            r0[r1] = r3
            r3 = 5
            android.os.Message r3 = r2.obtainMessage(r3, r0)
            r2.sendMessage(r3)
            return
    }

    @Override
    public final void sendStartMessage() {
            r2 = this;
            r0 = 2
            r1 = 0
            android.os.Message r0 = r2.obtainMessage(r0, r1)
            r2.sendMessage(r0)
            return
    }

    @Override
    public final void sendSuccessMessage(int r3, cz.msebera.android.httpclient.Header[] r4, byte[] r5) {
            r2 = this;
            r0 = 3
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1 = 0
            r0[r1] = r3
            r3 = 1
            r0[r3] = r4
            r3 = 2
            r0[r3] = r5
            android.os.Message r3 = r2.obtainMessage(r1, r0)
            r2.sendMessage(r3)
            return
    }

    public void setCharset(java.lang.String r1) {
            r0 = this;
            r0.responseCharset = r1
            return
    }

    @Override
    public void setRequestHeaders(cz.msebera.android.httpclient.Header[] r1) {
            r0 = this;
            r0.requestHeaders = r1
            return
    }

    @Override
    public void setRequestURI(java.net.URI r1) {
            r0 = this;
            r0.requestURI = r1
            return
    }

    @Override
    public void setTag(java.lang.Object r2) {
            r1 = this;
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.TAG = r0
            return
    }

    @Override
    public void setUsePoolThread(boolean r2) {
            r1 = this;
            if (r2 == 0) goto L7
            r0 = 0
            r1.looper = r0
            r1.handler = r0
        L7:
            r1.usePoolThread = r2
            return
    }

    @Override
    public void setUseSynchronousMode(boolean r4) {
            r3 = this;
            if (r4 != 0) goto L10
            android.os.Looper r0 = r3.looper
            if (r0 != 0) goto L10
            r4 = 1
            com.loopj.android.http.LogInterface r0 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r1 = "AsyncHttpRH"
            java.lang.String r2 = "Current thread has not called Looper.prepare(). Forcing synchronous mode."
            r0.w(r1, r2)
        L10:
            if (r4 != 0) goto L20
            android.os.Handler r0 = r3.handler
            if (r0 != 0) goto L20
            com.loopj.android.http.AsyncHttpResponseHandler$ResponderHandler r0 = new com.loopj.android.http.AsyncHttpResponseHandler$ResponderHandler
            android.os.Looper r1 = r3.looper
            r0.<init>(r3, r1)
            r3.handler = r0
            goto L29
        L20:
            if (r4 == 0) goto L29
            android.os.Handler r0 = r3.handler
            if (r0 == 0) goto L29
            r0 = 0
            r3.handler = r0
        L29:
            r3.useSynchronousMode = r4
            return
    }
}
