package com.alipay.android.phone.mrpc.core;

public final class c implements org.apache.http.HttpRequestInterceptor {
    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void process(org.apache.http.HttpRequest r1, org.apache.http.protocol.HttpContext r2) {
            r0 = this;
            android.os.Looper r1 = android.os.Looper.myLooper()
            if (r1 == 0) goto L19
            android.os.Looper r1 = android.os.Looper.myLooper()
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            if (r1 == r2) goto L11
            goto L19
        L11:
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "This thread forbids HTTP requests"
            r1.<init>(r2)
            throw r1
        L19:
            return
    }
}
