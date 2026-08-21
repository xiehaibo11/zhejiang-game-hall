package com.alipay.android.phone.mrpc.core;

public class ad implements org.apache.http.client.HttpRequestRetryHandler {
    public static final java.lang.String a = null;

    static {
            java.lang.Class<com.alipay.android.phone.mrpc.core.ad> r0 = com.alipay.android.phone.mrpc.core.ad.class
            java.lang.String r0 = r0.getSimpleName()
            com.alipay.android.phone.mrpc.core.ad.a = r0
            return
    }

    public ad() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean retryRequest(java.io.IOException r2, int r3, org.apache.http.protocol.HttpContext r4) {
            r1 = this;
            r4 = 0
            r0 = 3
            if (r3 < r0) goto L5
            return r4
        L5:
            boolean r3 = r2 instanceof org.apache.http.NoHttpResponseException
            r0 = 1
            if (r3 == 0) goto Lb
            return r0
        Lb:
            boolean r3 = r2 instanceof java.net.SocketException
            if (r3 != 0) goto L13
            boolean r3 = r2 instanceof javax.net.ssl.SSLException
            if (r3 == 0) goto L26
        L13:
            java.lang.String r3 = r2.getMessage()
            if (r3 == 0) goto L26
            java.lang.String r2 = r2.getMessage()
            java.lang.String r3 = "Broken pipe"
            boolean r2 = r2.contains(r3)
            if (r2 == 0) goto L26
            return r0
        L26:
            return r4
    }
}
