package cz.msebera.android.httpclient.client.protocol;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public class ClientContextConfigurer implements cz.msebera.android.httpclient.client.protocol.ClientContext {
    private final cz.msebera.android.httpclient.protocol.HttpContext context;

    public ClientContextConfigurer(cz.msebera.android.httpclient.protocol.HttpContext r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.context = r2
            return
    }

    public void setAuthSchemeRegistry(cz.msebera.android.httpclient.auth.AuthSchemeRegistry r3) {
            r2 = this;
            cz.msebera.android.httpclient.protocol.HttpContext r0 = r2.context
            java.lang.String r1 = "http.authscheme-registry"
            r0.setAttribute(r1, r3)
            return
    }

    public void setCookieSpecRegistry(cz.msebera.android.httpclient.cookie.CookieSpecRegistry r3) {
            r2 = this;
            cz.msebera.android.httpclient.protocol.HttpContext r0 = r2.context
            java.lang.String r1 = "http.cookiespec-registry"
            r0.setAttribute(r1, r3)
            return
    }

    public void setCookieStore(cz.msebera.android.httpclient.client.CookieStore r3) {
            r2 = this;
            cz.msebera.android.httpclient.protocol.HttpContext r0 = r2.context
            java.lang.String r1 = "http.cookie-store"
            r0.setAttribute(r1, r3)
            return
    }

    public void setCredentialsProvider(cz.msebera.android.httpclient.client.CredentialsProvider r3) {
            r2 = this;
            cz.msebera.android.httpclient.protocol.HttpContext r0 = r2.context
            java.lang.String r1 = "http.auth.credentials-provider"
            r0.setAttribute(r1, r3)
            return
    }
}
