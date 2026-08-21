package com.loopj.android.http;

public class SyncHttpClient extends com.loopj.android.http.AsyncHttpClient {
    public SyncHttpClient() {
            r3 = this;
            r0 = 0
            r1 = 80
            r2 = 443(0x1bb, float:6.21E-43)
            r3.<init>(r0, r1, r2)
            return
    }

    public SyncHttpClient(int r3) {
            r2 = this;
            r0 = 0
            r1 = 443(0x1bb, float:6.21E-43)
            r2.<init>(r0, r3, r1)
            return
    }

    public SyncHttpClient(int r2, int r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r2, r3)
            return
    }

    public SyncHttpClient(cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public SyncHttpClient(boolean r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    protected com.loopj.android.http.RequestHandle sendRequest(cz.msebera.android.httpclient.impl.client.DefaultHttpClient r2, cz.msebera.android.httpclient.protocol.HttpContext r3, cz.msebera.android.httpclient.client.methods.HttpUriRequest r4, java.lang.String r5, com.loopj.android.http.ResponseHandlerInterface r6, android.content.Context r7) {
            r1 = this;
            if (r5 == 0) goto L7
            java.lang.String r0 = "Content-Type"
            r4.addHeader(r0, r5)
        L7:
            r0 = 1
            r6.setUseSynchronousMode(r0)
            com.loopj.android.http.AsyncHttpRequest r2 = r1.newAsyncHttpRequest(r2, r3, r4, r5, r6, r7)
            r2.run()
            com.loopj.android.http.RequestHandle r2 = new com.loopj.android.http.RequestHandle
            r3 = 0
            r2.<init>(r3)
            return r2
    }
}
