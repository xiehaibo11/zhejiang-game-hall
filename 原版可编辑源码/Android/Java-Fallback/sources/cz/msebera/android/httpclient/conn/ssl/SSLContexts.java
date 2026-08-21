package cz.msebera.android.httpclient.conn.ssl;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class SSLContexts {
    public SSLContexts() {
            r0 = this;
            r0.<init>()
            return
    }

    public static javax.net.ssl.SSLContext createDefault() throws cz.msebera.android.httpclient.conn.ssl.SSLInitializationException {
            java.lang.String r0 = "TLS"
            javax.net.ssl.SSLContext r0 = javax.net.ssl.SSLContext.getInstance(r0)     // Catch: java.security.KeyManagementException -> Lb java.security.NoSuchAlgorithmException -> L16
            r1 = 0
            r0.init(r1, r1, r1)     // Catch: java.security.KeyManagementException -> Lb java.security.NoSuchAlgorithmException -> L16
            return r0
        Lb:
            r0 = move-exception
            cz.msebera.android.httpclient.conn.ssl.SSLInitializationException r1 = new cz.msebera.android.httpclient.conn.ssl.SSLInitializationException
            java.lang.String r2 = r0.getMessage()
            r1.<init>(r2, r0)
            throw r1
        L16:
            r0 = move-exception
            cz.msebera.android.httpclient.conn.ssl.SSLInitializationException r1 = new cz.msebera.android.httpclient.conn.ssl.SSLInitializationException
            java.lang.String r2 = r0.getMessage()
            r1.<init>(r2, r0)
            throw r1
    }

    public static javax.net.ssl.SSLContext createSystemDefault() throws cz.msebera.android.httpclient.conn.ssl.SSLInitializationException {
            javax.net.ssl.SSLContext r0 = javax.net.ssl.SSLContext.getDefault()     // Catch: java.security.NoSuchAlgorithmException -> L5
            return r0
        L5:
            javax.net.ssl.SSLContext r0 = createDefault()
            return r0
    }

    public static cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder custom() {
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r0 = new cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder
            r0.<init>()
            return r0
    }
}
