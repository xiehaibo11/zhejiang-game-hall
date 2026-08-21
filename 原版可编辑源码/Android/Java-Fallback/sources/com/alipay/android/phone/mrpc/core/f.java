package com.alipay.android.phone.mrpc.core;

public final class f implements org.apache.http.conn.ConnectionKeepAliveStrategy {
    public final com.alipay.android.phone.mrpc.core.d a;

    public f(com.alipay.android.phone.mrpc.core.d r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public final long getKeepAliveDuration(org.apache.http.HttpResponse r1, org.apache.http.protocol.HttpContext r2) {
            r0 = this;
            r1 = 180000(0x2bf20, double:8.8932E-319)
            return r1
    }
}
