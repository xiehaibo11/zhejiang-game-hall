package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.Immutable
public class DefaultUserTokenHandler implements cz.msebera.android.httpclient.client.UserTokenHandler {
    public static final cz.msebera.android.httpclient.impl.client.DefaultUserTokenHandler INSTANCE = null;

    static {
            cz.msebera.android.httpclient.impl.client.DefaultUserTokenHandler r0 = new cz.msebera.android.httpclient.impl.client.DefaultUserTokenHandler
            r0.<init>()
            cz.msebera.android.httpclient.impl.client.DefaultUserTokenHandler.INSTANCE = r0
            return
    }

    public DefaultUserTokenHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.security.Principal getAuthPrincipal(cz.msebera.android.httpclient.auth.AuthState r2) {
            cz.msebera.android.httpclient.auth.AuthScheme r0 = r2.getAuthScheme()
            if (r0 == 0) goto L1d
            boolean r1 = r0.isComplete()
            if (r1 == 0) goto L1d
            boolean r0 = r0.isConnectionBased()
            if (r0 == 0) goto L1d
            cz.msebera.android.httpclient.auth.Credentials r2 = r2.getCredentials()
            if (r2 == 0) goto L1d
            java.security.Principal r2 = r2.getUserPrincipal()
            return r2
        L1d:
            r2 = 0
            return r2
    }

    @Override
    public java.lang.Object getUserToken(cz.msebera.android.httpclient.protocol.HttpContext r3) {
            r2 = this;
            cz.msebera.android.httpclient.client.protocol.HttpClientContext r3 = cz.msebera.android.httpclient.client.protocol.HttpClientContext.adapt(r3)
            cz.msebera.android.httpclient.auth.AuthState r0 = r3.getTargetAuthState()
            if (r0 == 0) goto L19
            java.security.Principal r0 = getAuthPrincipal(r0)
            if (r0 != 0) goto L1a
            cz.msebera.android.httpclient.auth.AuthState r0 = r3.getProxyAuthState()
            java.security.Principal r0 = getAuthPrincipal(r0)
            goto L1a
        L19:
            r0 = 0
        L1a:
            if (r0 != 0) goto L36
            cz.msebera.android.httpclient.HttpConnection r3 = r3.getConnection()
            boolean r1 = r3.isOpen()
            if (r1 == 0) goto L36
            boolean r1 = r3 instanceof cz.msebera.android.httpclient.conn.ManagedHttpClientConnection
            if (r1 == 0) goto L36
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r3 = (cz.msebera.android.httpclient.conn.ManagedHttpClientConnection) r3
            javax.net.ssl.SSLSession r3 = r3.getSSLSession()
            if (r3 == 0) goto L36
            java.security.Principal r0 = r3.getLocalPrincipal()
        L36:
            return r0
    }
}
