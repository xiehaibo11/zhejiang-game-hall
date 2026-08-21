package com.loopj.android.http;

public class JsonHttpResponseHandler extends com.loopj.android.http.TextHttpResponseHandler {
    private static final java.lang.String LOG_TAG = "JsonHttpRH";
    private boolean useRFC5179CompatibilityMode;



    public JsonHttpResponseHandler() {
            r1 = this;
            java.lang.String r0 = "UTF-8"
            r1.<init>(r0)
            r0 = 1
            r1.useRFC5179CompatibilityMode = r0
            return
    }

    public JsonHttpResponseHandler(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 1
            r0.useRFC5179CompatibilityMode = r1
            return
    }

    public JsonHttpResponseHandler(java.lang.String r1, boolean r2) {
            r0 = this;
            r0.<init>(r1)
            r1 = 1
            r0.useRFC5179CompatibilityMode = r1
            r0.useRFC5179CompatibilityMode = r2
            return
    }

    public JsonHttpResponseHandler(boolean r2) {
            r1 = this;
            java.lang.String r0 = "UTF-8"
            r1.<init>(r0)
            r0 = 1
            r1.useRFC5179CompatibilityMode = r0
            r1.useRFC5179CompatibilityMode = r2
            return
    }

    static boolean access$000(com.loopj.android.http.JsonHttpResponseHandler r0) {
            boolean r0 = r0.useRFC5179CompatibilityMode
            return r0
    }

    public boolean isUseRFC5179CompatibilityMode() {
            r1 = this;
            boolean r0 = r1.useRFC5179CompatibilityMode
            return r0
    }

    @Override
    public void onFailure(int r1, cz.msebera.android.httpclient.Header[] r2, java.lang.String r3, java.lang.Throwable r4) {
            r0 = this;
            com.loopj.android.http.LogInterface r1 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r2 = "JsonHttpRH"
            java.lang.String r3 = "onFailure(int, Header[], String, Throwable) was not overriden, but callback was received"
            r1.w(r2, r3, r4)
            return
    }

    public void onFailure(int r1, cz.msebera.android.httpclient.Header[] r2, java.lang.Throwable r3, org.json.JSONArray r4) {
            r0 = this;
            com.loopj.android.http.LogInterface r1 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r2 = "JsonHttpRH"
            java.lang.String r4 = "onFailure(int, Header[], Throwable, JSONArray) was not overriden, but callback was received"
            r1.w(r2, r4, r3)
            return
    }

    public void onFailure(int r1, cz.msebera.android.httpclient.Header[] r2, java.lang.Throwable r3, org.json.JSONObject r4) {
            r0 = this;
            com.loopj.android.http.LogInterface r1 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r2 = "JsonHttpRH"
            java.lang.String r4 = "onFailure(int, Header[], Throwable, JSONObject) was not overriden, but callback was received"
            r1.w(r2, r4, r3)
            return
    }

    @Override
    public final void onFailure(int r8, cz.msebera.android.httpclient.Header[] r9, byte[] r10, java.lang.Throwable r11) {
            r7 = this;
            if (r10 == 0) goto L26
            com.loopj.android.http.JsonHttpResponseHandler$2 r6 = new com.loopj.android.http.JsonHttpResponseHandler$2
            r0 = r6
            r1 = r7
            r2 = r10
            r3 = r8
            r4 = r9
            r5 = r11
            r0.<init>(r1, r2, r3, r4, r5)
            boolean r8 = r7.getUseSynchronousMode()
            if (r8 != 0) goto L22
            boolean r8 = r7.getUsePoolThread()
            if (r8 != 0) goto L22
            java.lang.Thread r8 = new java.lang.Thread
            r8.<init>(r6)
            r8.start()
            goto L35
        L22:
            r6.run()
            goto L35
        L26:
            com.loopj.android.http.LogInterface r10 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r0 = "JsonHttpRH"
            java.lang.String r1 = "response body is null, calling onFailure(Throwable, JSONObject)"
            r10.v(r0, r1)
            r10 = 0
            org.json.JSONObject r10 = (org.json.JSONObject) r10
            r7.onFailure(r8, r9, r11, r10)
        L35:
            return
    }

    @Override
    public void onSuccess(int r1, cz.msebera.android.httpclient.Header[] r2, java.lang.String r3) {
            r0 = this;
            com.loopj.android.http.LogInterface r1 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r2 = "JsonHttpRH"
            java.lang.String r3 = "onSuccess(int, Header[], String) was not overriden, but callback was received"
            r1.w(r2, r3)
            return
    }

    public void onSuccess(int r1, cz.msebera.android.httpclient.Header[] r2, org.json.JSONArray r3) {
            r0 = this;
            com.loopj.android.http.LogInterface r1 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r2 = "JsonHttpRH"
            java.lang.String r3 = "onSuccess(int, Header[], JSONArray) was not overriden, but callback was received"
            r1.w(r2, r3)
            return
    }

    public void onSuccess(int r1, cz.msebera.android.httpclient.Header[] r2, org.json.JSONObject r3) {
            r0 = this;
            com.loopj.android.http.LogInterface r1 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r2 = "JsonHttpRH"
            java.lang.String r3 = "onSuccess(int, Header[], JSONObject) was not overriden, but callback was received"
            r1.w(r2, r3)
            return
    }

    @Override
    public final void onSuccess(int r2, cz.msebera.android.httpclient.Header[] r3, byte[] r4) {
            r1 = this;
            r0 = 204(0xcc, float:2.86E-43)
            if (r2 == r0) goto L22
            com.loopj.android.http.JsonHttpResponseHandler$1 r0 = new com.loopj.android.http.JsonHttpResponseHandler$1
            r0.<init>(r1, r4, r2, r3)
            boolean r2 = r1.getUseSynchronousMode()
            if (r2 != 0) goto L1e
            boolean r2 = r1.getUsePoolThread()
            if (r2 != 0) goto L1e
            java.lang.Thread r2 = new java.lang.Thread
            r2.<init>(r0)
            r2.start()
            goto L2a
        L1e:
            r0.run()
            goto L2a
        L22:
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
            r1.onSuccess(r2, r3, r4)
        L2a:
            return
    }

    protected java.lang.Object parseResponse(byte[] r5) throws org.json.JSONException {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = r4.getCharset()
            java.lang.String r5 = getResponseString(r5, r1)
            if (r5 == 0) goto L6e
            java.lang.String r5 = r5.trim()
            boolean r1 = r4.useRFC5179CompatibilityMode
            java.lang.String r2 = "["
            java.lang.String r3 = "{"
            if (r1 == 0) goto L30
            boolean r1 = r5.startsWith(r3)
            if (r1 != 0) goto L26
            boolean r1 = r5.startsWith(r2)
            if (r1 == 0) goto L6e
        L26:
            org.json.JSONTokener r0 = new org.json.JSONTokener
            r0.<init>(r5)
            java.lang.Object r0 = r0.nextValue()
            goto L6e
        L30:
            boolean r1 = r5.startsWith(r3)
            if (r1 == 0) goto L3e
            java.lang.String r1 = "}"
            boolean r1 = r5.endsWith(r1)
            if (r1 != 0) goto L4c
        L3e:
            boolean r1 = r5.startsWith(r2)
            if (r1 == 0) goto L56
            java.lang.String r1 = "]"
            boolean r1 = r5.endsWith(r1)
            if (r1 == 0) goto L56
        L4c:
            org.json.JSONTokener r0 = new org.json.JSONTokener
            r0.<init>(r5)
            java.lang.Object r0 = r0.nextValue()
            goto L6e
        L56:
            java.lang.String r1 = "\""
            boolean r2 = r5.startsWith(r1)
            if (r2 == 0) goto L6e
            boolean r1 = r5.endsWith(r1)
            if (r1 == 0) goto L6e
            int r0 = r5.length()
            r1 = 1
            int r0 = r0 - r1
            java.lang.String r0 = r5.substring(r1, r0)
        L6e:
            if (r0 != 0) goto L71
            goto L72
        L71:
            r5 = r0
        L72:
            return r5
    }

    public void setUseRFC5179CompatibilityMode(boolean r1) {
            r0 = this;
            r0.useRFC5179CompatibilityMode = r1
            return
    }
}
