package com.alipay.android.phone.mrpc.core;

public final class e extends org.apache.http.impl.client.DefaultRedirectHandler {
    public int a;
    public final com.alipay.android.phone.mrpc.core.d b;

    public e(com.alipay.android.phone.mrpc.core.d r1) {
            r0 = this;
            r0.b = r1
            r0.<init>()
            return
    }

    @Override
    public final boolean isRedirectRequested(org.apache.http.HttpResponse r4, org.apache.http.protocol.HttpContext r5) {
            r3 = this;
            int r0 = r3.a
            r1 = 1
            int r0 = r0 + r1
            r3.a = r0
            boolean r5 = super.isRedirectRequested(r4, r5)
            if (r5 != 0) goto L22
            int r0 = r3.a
            r2 = 5
            if (r0 >= r2) goto L22
            org.apache.http.StatusLine r4 = r4.getStatusLine()
            int r4 = r4.getStatusCode()
            r0 = 301(0x12d, float:4.22E-43)
            if (r4 == r0) goto L21
            r0 = 302(0x12e, float:4.23E-43)
            if (r4 != r0) goto L22
        L21:
            return r1
        L22:
            return r5
    }
}
