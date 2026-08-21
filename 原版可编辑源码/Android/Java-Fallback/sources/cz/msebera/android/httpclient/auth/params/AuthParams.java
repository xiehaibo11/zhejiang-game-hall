package cz.msebera.android.httpclient.auth.params;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public final class AuthParams {
    private AuthParams() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getCredentialCharset(cz.msebera.android.httpclient.params.HttpParams r1) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.auth.credential-charset"
            java.lang.Object r1 = r1.getParameter(r0)
            java.lang.String r1 = (java.lang.String) r1
            if (r1 != 0) goto L15
            java.nio.charset.Charset r1 = cz.msebera.android.httpclient.protocol.HTTP.DEF_PROTOCOL_CHARSET
            java.lang.String r1 = r1.name()
        L15:
            return r1
    }

    public static void setCredentialCharset(cz.msebera.android.httpclient.params.HttpParams r1, java.lang.String r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.auth.credential-charset"
            r1.setParameter(r0, r2)
            return
    }
}
