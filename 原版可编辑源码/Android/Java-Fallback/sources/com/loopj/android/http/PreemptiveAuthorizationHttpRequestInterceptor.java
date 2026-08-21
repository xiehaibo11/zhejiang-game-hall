package com.loopj.android.http;

public class PreemptiveAuthorizationHttpRequestInterceptor implements cz.msebera.android.httpclient.HttpRequestInterceptor {
    public PreemptiveAuthorizationHttpRequestInterceptor() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpRequest r4, cz.msebera.android.httpclient.protocol.HttpContext r5) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r3 = this;
            java.lang.String r4 = "http.auth.target-scope"
            java.lang.Object r4 = r5.getAttribute(r4)
            cz.msebera.android.httpclient.auth.AuthState r4 = (cz.msebera.android.httpclient.auth.AuthState) r4
            java.lang.String r0 = "http.auth.credentials-provider"
            java.lang.Object r0 = r5.getAttribute(r0)
            cz.msebera.android.httpclient.client.CredentialsProvider r0 = (cz.msebera.android.httpclient.client.CredentialsProvider) r0
            java.lang.String r1 = "http.target_host"
            java.lang.Object r5 = r5.getAttribute(r1)
            cz.msebera.android.httpclient.HttpHost r5 = (cz.msebera.android.httpclient.HttpHost) r5
            cz.msebera.android.httpclient.auth.AuthScheme r1 = r4.getAuthScheme()
            if (r1 != 0) goto L3c
            cz.msebera.android.httpclient.auth.AuthScope r1 = new cz.msebera.android.httpclient.auth.AuthScope
            java.lang.String r2 = r5.getHostName()
            int r5 = r5.getPort()
            r1.<init>(r2, r5)
            cz.msebera.android.httpclient.auth.Credentials r5 = r0.getCredentials(r1)
            if (r5 == 0) goto L3c
            cz.msebera.android.httpclient.impl.auth.BasicScheme r0 = new cz.msebera.android.httpclient.impl.auth.BasicScheme
            r0.<init>()
            r4.setAuthScheme(r0)
            r4.setCredentials(r5)
        L3c:
            return
    }
}
