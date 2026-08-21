package com.alipay.android.phone.mrpc.core;

public final class d extends org.apache.http.impl.client.DefaultHttpClient {
    public final com.alipay.android.phone.mrpc.core.b a;

    public d(com.alipay.android.phone.mrpc.core.b r1, org.apache.http.conn.ClientConnectionManager r2, org.apache.http.params.HttpParams r3) {
            r0 = this;
            r0.a = r1
            r0.<init>(r2, r3)
            return
    }

    @Override
    public final org.apache.http.conn.ConnectionKeepAliveStrategy createConnectionKeepAliveStrategy() {
            r1 = this;
            com.alipay.android.phone.mrpc.core.f r0 = new com.alipay.android.phone.mrpc.core.f
            r0.<init>(r1)
            return r0
    }

    @Override
    public final org.apache.http.protocol.HttpContext createHttpContext() {
            r3 = this;
            org.apache.http.protocol.BasicHttpContext r0 = new org.apache.http.protocol.BasicHttpContext
            r0.<init>()
            org.apache.http.auth.AuthSchemeRegistry r1 = r3.getAuthSchemes()
            java.lang.String r2 = "http.authscheme-registry"
            r0.setAttribute(r2, r1)
            org.apache.http.cookie.CookieSpecRegistry r1 = r3.getCookieSpecs()
            java.lang.String r2 = "http.cookiespec-registry"
            r0.setAttribute(r2, r1)
            org.apache.http.client.CredentialsProvider r1 = r3.getCredentialsProvider()
            java.lang.String r2 = "http.auth.credentials-provider"
            r0.setAttribute(r2, r1)
            return r0
    }

    @Override
    public final org.apache.http.protocol.BasicHttpProcessor createHttpProcessor() {
            r4 = this;
            org.apache.http.protocol.BasicHttpProcessor r0 = super.createHttpProcessor()
            org.apache.http.HttpRequestInterceptor r1 = com.alipay.android.phone.mrpc.core.b.a()
            r0.addRequestInterceptor(r1)
            com.alipay.android.phone.mrpc.core.b$a r1 = new com.alipay.android.phone.mrpc.core.b$a
            com.alipay.android.phone.mrpc.core.b r2 = r4.a
            r3 = 0
            r1.<init>(r2, r3)
            r0.addRequestInterceptor(r1)
            return r0
    }

    @Override
    public final org.apache.http.client.RedirectHandler createRedirectHandler() {
            r1 = this;
            com.alipay.android.phone.mrpc.core.e r0 = new com.alipay.android.phone.mrpc.core.e
            r0.<init>(r1)
            return r0
    }
}
