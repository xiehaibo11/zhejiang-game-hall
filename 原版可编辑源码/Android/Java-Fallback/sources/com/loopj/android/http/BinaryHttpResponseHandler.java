package com.loopj.android.http;

public abstract class BinaryHttpResponseHandler extends com.loopj.android.http.AsyncHttpResponseHandler {
    private static final java.lang.String LOG_TAG = "BinaryHttpRH";
    private java.lang.String[] mAllowedContentTypes;

    public BinaryHttpResponseHandler() {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = "application/octet-stream"
            java.lang.String r1 = "image/jpeg"
            java.lang.String r2 = "image/png"
            java.lang.String r3 = "image/gif"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3}
            r4.mAllowedContentTypes = r0
            return
    }

    public BinaryHttpResponseHandler(java.lang.String[] r5) {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = "application/octet-stream"
            java.lang.String r1 = "image/jpeg"
            java.lang.String r2 = "image/png"
            java.lang.String r3 = "image/gif"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3}
            r4.mAllowedContentTypes = r0
            if (r5 == 0) goto L16
            r4.mAllowedContentTypes = r5
            goto L1f
        L16:
            com.loopj.android.http.LogInterface r5 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r0 = "BinaryHttpRH"
            java.lang.String r1 = "Constructor passed allowedContentTypes was null !"
            r5.e(r0, r1)
        L1f:
            return
    }

    public BinaryHttpResponseHandler(java.lang.String[] r4, android.os.Looper r5) {
            r3 = this;
            r3.<init>(r5)
            java.lang.String r5 = "application/octet-stream"
            java.lang.String r0 = "image/jpeg"
            java.lang.String r1 = "image/png"
            java.lang.String r2 = "image/gif"
            java.lang.String[] r5 = new java.lang.String[]{r5, r0, r1, r2}
            r3.mAllowedContentTypes = r5
            if (r4 == 0) goto L16
            r3.mAllowedContentTypes = r4
            goto L1f
        L16:
            com.loopj.android.http.LogInterface r4 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r5 = "BinaryHttpRH"
            java.lang.String r0 = "Constructor passed allowedContentTypes was null !"
            r4.e(r5, r0)
        L1f:
            return
    }

    public java.lang.String[] getAllowedContentTypes() {
            r1 = this;
            java.lang.String[] r0 = r1.mAllowedContentTypes
            return r0
    }

    @Override
    public abstract void onFailure(int r1, cz.msebera.android.httpclient.Header[] r2, byte[] r3, java.lang.Throwable r4);

    @Override
    public abstract void onSuccess(int r1, cz.msebera.android.httpclient.Header[] r2, byte[] r3);

    @Override
    public final void sendResponseMessage(cz.msebera.android.httpclient.HttpResponse r14) throws java.io.IOException {
            r13 = this;
            cz.msebera.android.httpclient.StatusLine r0 = r14.getStatusLine()
            java.lang.String r1 = "Content-Type"
            cz.msebera.android.httpclient.Header[] r1 = r14.getHeaders(r1)
            int r2 = r1.length
            r3 = 0
            r4 = 1
            if (r2 == r4) goto L26
            int r1 = r0.getStatusCode()
            cz.msebera.android.httpclient.Header[] r14 = r14.getAllHeaders()
            cz.msebera.android.httpclient.client.HttpResponseException r2 = new cz.msebera.android.httpclient.client.HttpResponseException
            int r0 = r0.getStatusCode()
            java.lang.String r4 = "None, or more than one, Content-Type Header found!"
            r2.<init>(r0, r4)
            r13.sendFailureMessage(r1, r14, r3, r2)
            return
        L26:
            r2 = 0
            r1 = r1[r2]
            java.lang.String[] r5 = r13.getAllowedContentTypes()
            int r6 = r5.length
            r7 = 0
        L2f:
            if (r2 >= r6) goto L5b
            r8 = r5[r2]
            java.lang.String r9 = r1.getValue()     // Catch: java.util.regex.PatternSyntaxException -> L3f
            boolean r8 = java.util.regex.Pattern.matches(r8, r9)     // Catch: java.util.regex.PatternSyntaxException -> L3f
            if (r8 == 0) goto L58
            r7 = 1
            goto L58
        L3f:
            r9 = move-exception
            com.loopj.android.http.LogInterface r10 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r12 = "Given pattern is not valid: "
            r11.append(r12)
            r11.append(r8)
            java.lang.String r8 = r11.toString()
            java.lang.String r11 = "BinaryHttpRH"
            r10.e(r11, r8, r9)
        L58:
            int r2 = r2 + 1
            goto L2f
        L5b:
            if (r7 != 0) goto L8c
            int r2 = r0.getStatusCode()
            cz.msebera.android.httpclient.Header[] r14 = r14.getAllHeaders()
            cz.msebera.android.httpclient.client.HttpResponseException r4 = new cz.msebera.android.httpclient.client.HttpResponseException
            int r0 = r0.getStatusCode()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Content-Type ("
            r5.append(r6)
            java.lang.String r1 = r1.getValue()
            r5.append(r1)
            java.lang.String r1 = ") not allowed!"
            r5.append(r1)
            java.lang.String r1 = r5.toString()
            r4.<init>(r0, r1)
            r13.sendFailureMessage(r2, r14, r3, r4)
            return
        L8c:
            super.sendResponseMessage(r14)
            return
    }
}
