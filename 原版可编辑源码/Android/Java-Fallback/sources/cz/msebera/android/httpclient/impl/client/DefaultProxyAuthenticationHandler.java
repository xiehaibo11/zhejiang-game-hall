package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class DefaultProxyAuthenticationHandler extends cz.msebera.android.httpclient.impl.client.AbstractAuthenticationHandler {
    public DefaultProxyAuthenticationHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected java.util.List<java.lang.String> getAuthPreferences(cz.msebera.android.httpclient.HttpResponse r3, cz.msebera.android.httpclient.protocol.HttpContext r4) {
            r2 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r3.getParams()
            java.lang.String r1 = "http.auth.proxy-scheme-pref"
            java.lang.Object r0 = r0.getParameter(r1)
            java.util.List r0 = (java.util.List) r0
            if (r0 == 0) goto Lf
            return r0
        Lf:
            java.util.List r3 = super.getAuthPreferences(r3, r4)
            return r3
    }

    @Override
    public java.util.Map<java.lang.String, cz.msebera.android.httpclient.Header> getChallenges(cz.msebera.android.httpclient.HttpResponse r1, cz.msebera.android.httpclient.protocol.HttpContext r2) throws cz.msebera.android.httpclient.auth.MalformedChallengeException {
            r0 = this;
            java.lang.String r2 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r2)
            java.lang.String r2 = "Proxy-Authenticate"
            cz.msebera.android.httpclient.Header[] r1 = r1.getHeaders(r2)
            java.util.Map r1 = r0.parseChallenges(r1)
            return r1
    }

    @Override
    public boolean isAuthenticationRequested(cz.msebera.android.httpclient.HttpResponse r1, cz.msebera.android.httpclient.protocol.HttpContext r2) {
            r0 = this;
            java.lang.String r2 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r2)
            cz.msebera.android.httpclient.StatusLine r1 = r1.getStatusLine()
            int r1 = r1.getStatusCode()
            r2 = 407(0x197, float:5.7E-43)
            if (r1 != r2) goto L13
            r1 = 1
            goto L14
        L13:
            r1 = 0
        L14:
            return r1
    }
}
