package com.loopj.android.http;

public abstract class TextHttpResponseHandler extends com.loopj.android.http.AsyncHttpResponseHandler {
    private static final java.lang.String LOG_TAG = "TextHttpRH";

    public TextHttpResponseHandler() {
            r1 = this;
            java.lang.String r0 = "UTF-8"
            r1.<init>(r0)
            return
    }

    public TextHttpResponseHandler(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.setCharset(r1)
            return
    }

    public static java.lang.String getResponseString(byte[] r3, java.lang.String r4) {
            r0 = 0
            if (r3 != 0) goto L5
            r1 = r0
            goto La
        L5:
            java.lang.String r1 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L1b
            r1.<init>(r3, r4)     // Catch: java.io.UnsupportedEncodingException -> L1b
        La:
            if (r1 == 0) goto L1a
            java.lang.String r3 = "\ufeff"
            boolean r3 = r1.startsWith(r3)     // Catch: java.io.UnsupportedEncodingException -> L1b
            if (r3 == 0) goto L1a
            r3 = 1
            java.lang.String r3 = r1.substring(r3)     // Catch: java.io.UnsupportedEncodingException -> L1b
            return r3
        L1a:
            return r1
        L1b:
            r3 = move-exception
            com.loopj.android.http.LogInterface r4 = com.loopj.android.http.AsyncHttpClient.log
            java.lang.String r1 = "TextHttpRH"
            java.lang.String r2 = "Encoding response into string failed"
            r4.e(r1, r2, r3)
            return r0
    }

    public abstract void onFailure(int r1, cz.msebera.android.httpclient.Header[] r2, java.lang.String r3, java.lang.Throwable r4);

    @Override
    public void onFailure(int r2, cz.msebera.android.httpclient.Header[] r3, byte[] r4, java.lang.Throwable r5) {
            r1 = this;
            java.lang.String r0 = r1.getCharset()
            java.lang.String r4 = getResponseString(r4, r0)
            r1.onFailure(r2, r3, r4, r5)
            return
    }

    public abstract void onSuccess(int r1, cz.msebera.android.httpclient.Header[] r2, java.lang.String r3);

    @Override
    public void onSuccess(int r2, cz.msebera.android.httpclient.Header[] r3, byte[] r4) {
            r1 = this;
            java.lang.String r0 = r1.getCharset()
            java.lang.String r4 = getResponseString(r4, r0)
            r1.onSuccess(r2, r3, r4)
            return
    }
}
