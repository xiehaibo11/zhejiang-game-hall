package cz.msebera.android.httpclient.impl.client;

@java.lang.Deprecated
public class HttpAuthenticator extends cz.msebera.android.httpclient.impl.auth.HttpAuthenticator {
    public HttpAuthenticator() {
            r0 = this;
            r0.<init>()
            return
    }

    public HttpAuthenticator(cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public boolean authenticate(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpResponse r2, cz.msebera.android.httpclient.client.AuthenticationStrategy r3, cz.msebera.android.httpclient.auth.AuthState r4, cz.msebera.android.httpclient.protocol.HttpContext r5) {
            r0 = this;
            boolean r1 = r0.handleAuthChallenge(r1, r2, r3, r4, r5)
            return r1
    }
}
