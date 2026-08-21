package com.loopj.android.http;

public abstract class BaseJsonHttpResponseHandler<JSON_TYPE> extends com.loopj.android.http.TextHttpResponseHandler {
    private static final java.lang.String LOG_TAG = "BaseJsonHttpRH";



    public BaseJsonHttpResponseHandler() {
            r1 = this;
            java.lang.String r0 = "UTF-8"
            r1.<init>(r0)
            return
    }

    public BaseJsonHttpResponseHandler(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public final void onFailure(int r8, cz.msebera.android.httpclient.Header[] r9, java.lang.String r10, java.lang.Throwable r11) {
            r7 = this;
            if (r10 == 0) goto L26
            com.loopj.android.http.BaseJsonHttpResponseHandler$2 r6 = new com.loopj.android.http.BaseJsonHttpResponseHandler$2
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
            goto L2f
        L22:
            r6.run()
            goto L2f
        L26:
            r4 = 0
            r5 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r11
            r0.onFailure(r1, r2, r3, r4, r5)
        L2f:
            return
    }

    public abstract void onFailure(int r1, cz.msebera.android.httpclient.Header[] r2, java.lang.Throwable r3, java.lang.String r4, JSON_TYPE r5);

    @Override
    public final void onSuccess(int r2, cz.msebera.android.httpclient.Header[] r3, java.lang.String r4) {
            r1 = this;
            r0 = 204(0xcc, float:2.86E-43)
            if (r2 == r0) goto L22
            com.loopj.android.http.BaseJsonHttpResponseHandler$1 r0 = new com.loopj.android.http.BaseJsonHttpResponseHandler$1
            r0.<init>(r1, r4, r2, r3)
            boolean r2 = r1.getUseSynchronousMode()
            if (r2 != 0) goto L1e
            boolean r2 = r1.getUsePoolThread()
            if (r2 != 0) goto L1e
            java.lang.Thread r2 = new java.lang.Thread
            r2.<init>(r0)
            r2.start()
            goto L26
        L1e:
            r0.run()
            goto L26
        L22:
            r4 = 0
            r1.onSuccess(r2, r3, r4, r4)
        L26:
            return
    }

    public abstract void onSuccess(int r1, cz.msebera.android.httpclient.Header[] r2, java.lang.String r3, JSON_TYPE r4);

    protected abstract JSON_TYPE parseResponse(java.lang.String r1, boolean r2) throws java.lang.Throwable;
}
