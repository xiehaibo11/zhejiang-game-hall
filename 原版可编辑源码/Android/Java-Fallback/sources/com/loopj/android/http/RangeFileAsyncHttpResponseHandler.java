package com.loopj.android.http;

public abstract class RangeFileAsyncHttpResponseHandler extends com.loopj.android.http.FileAsyncHttpResponseHandler {
    private static final java.lang.String LOG_TAG = "RangeFileAsyncHttpRH";
    private boolean append;
    private long current;

    public RangeFileAsyncHttpResponseHandler(java.io.File r3) {
            r2 = this;
            r2.<init>(r3)
            r0 = 0
            r2.current = r0
            r3 = 0
            r2.append = r3
            return
    }

    @Override
    protected byte[] getResponseData(cz.msebera.android.httpclient.HttpEntity r10) throws java.io.IOException {
            r9 = this;
            if (r10 == 0) goto L5a
            java.io.InputStream r0 = r10.getContent()
            long r1 = r10.getContentLength()
            long r3 = r9.current
            long r1 = r1 + r3
            java.io.FileOutputStream r10 = new java.io.FileOutputStream
            java.io.File r3 = r9.getTargetFile()
            boolean r4 = r9.append
            r10.<init>(r3, r4)
            if (r0 == 0) goto L5a
            r3 = 4096(0x1000, float:5.74E-42)
            byte[] r3 = new byte[r3]     // Catch: java.lang.Throwable -> L4f
        L1e:
            long r4 = r9.current     // Catch: java.lang.Throwable -> L4f
            int r6 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r6 >= 0) goto L45
            int r4 = r0.read(r3)     // Catch: java.lang.Throwable -> L4f
            r5 = -1
            if (r4 == r5) goto L45
            java.lang.Thread r5 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L4f
            boolean r5 = r5.isInterrupted()     // Catch: java.lang.Throwable -> L4f
            if (r5 != 0) goto L45
            long r5 = r9.current     // Catch: java.lang.Throwable -> L4f
            long r7 = (long) r4     // Catch: java.lang.Throwable -> L4f
            long r5 = r5 + r7
            r9.current = r5     // Catch: java.lang.Throwable -> L4f
            r5 = 0
            r10.write(r3, r5, r4)     // Catch: java.lang.Throwable -> L4f
            long r4 = r9.current     // Catch: java.lang.Throwable -> L4f
            r9.sendProgressMessage(r4, r1)     // Catch: java.lang.Throwable -> L4f
            goto L1e
        L45:
            r0.close()
            r10.flush()
            r10.close()
            goto L5a
        L4f:
            r1 = move-exception
            r0.close()
            r10.flush()
            r10.close()
            throw r1
        L5a:
            r10 = 0
            return r10
    }

    @Override
    public void sendResponseMessage(cz.msebera.android.httpclient.HttpResponse r6) throws java.io.IOException {
            r5 = this;
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            boolean r0 = r0.isInterrupted()
            if (r0 != 0) goto La1
            cz.msebera.android.httpclient.StatusLine r0 = r6.getStatusLine()
            int r1 = r0.getStatusCode()
            r2 = 416(0x1a0, float:5.83E-43)
            r3 = 0
            if (r1 != r2) goto L2d
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            boolean r1 = r1.isInterrupted()
            if (r1 != 0) goto La1
            int r0 = r0.getStatusCode()
            cz.msebera.android.httpclient.Header[] r6 = r6.getAllHeaders()
            r5.sendSuccessMessage(r0, r6, r3)
            goto La1
        L2d:
            int r1 = r0.getStatusCode()
            r2 = 300(0x12c, float:4.2E-43)
            if (r1 < r2) goto L58
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            boolean r1 = r1.isInterrupted()
            if (r1 != 0) goto La1
            int r1 = r0.getStatusCode()
            cz.msebera.android.httpclient.Header[] r6 = r6.getAllHeaders()
            cz.msebera.android.httpclient.client.HttpResponseException r2 = new cz.msebera.android.httpclient.client.HttpResponseException
            int r4 = r0.getStatusCode()
            java.lang.String r0 = r0.getReasonPhrase()
            r2.<init>(r4, r0)
            r5.sendFailureMessage(r1, r6, r3, r2)
            goto La1
        L58:
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            boolean r1 = r1.isInterrupted()
            if (r1 != 0) goto La1
            java.lang.String r1 = "Content-Range"
            cz.msebera.android.httpclient.Header r1 = r6.getFirstHeader(r1)
            if (r1 != 0) goto L72
            r1 = 0
            r5.append = r1
            r1 = 0
            r5.current = r1
            goto L8e
        L72:
            com.loopj.android.http.LogInterface r2 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Content-Range: "
            r3.append(r4)
            java.lang.String r1 = r1.getValue()
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            java.lang.String r3 = "RangeFileAsyncHttpRH"
            r2.v(r3, r1)
        L8e:
            int r0 = r0.getStatusCode()
            cz.msebera.android.httpclient.Header[] r1 = r6.getAllHeaders()
            cz.msebera.android.httpclient.HttpEntity r6 = r6.getEntity()
            byte[] r6 = r5.getResponseData(r6)
            r5.sendSuccessMessage(r0, r1, r6)
        La1:
            return
    }

    public void updateRequestHeaders(cz.msebera.android.httpclient.client.methods.HttpUriRequest r6) {
            r5 = this;
            java.io.File r0 = r5.file
            boolean r0 = r0.exists()
            if (r0 == 0) goto L18
            java.io.File r0 = r5.file
            boolean r0 = r0.canWrite()
            if (r0 == 0) goto L18
            java.io.File r0 = r5.file
            long r0 = r0.length()
            r5.current = r0
        L18:
            long r0 = r5.current
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L40
            r0 = 1
            r5.append = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "bytes="
            r0.append(r1)
            long r1 = r5.current
            r0.append(r1)
            java.lang.String r1 = "-"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "Range"
            r6.setHeader(r1, r0)
        L40:
            return
    }
}
