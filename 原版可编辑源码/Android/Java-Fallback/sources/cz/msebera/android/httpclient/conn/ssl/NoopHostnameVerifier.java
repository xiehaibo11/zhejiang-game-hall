package cz.msebera.android.httpclient.conn.ssl;

@cz.msebera.android.httpclient.annotation.Immutable
public class NoopHostnameVerifier implements javax.net.ssl.HostnameVerifier {
    public static final cz.msebera.android.httpclient.conn.ssl.NoopHostnameVerifier INSTANCE = null;

    static {
            cz.msebera.android.httpclient.conn.ssl.NoopHostnameVerifier r0 = new cz.msebera.android.httpclient.conn.ssl.NoopHostnameVerifier
            r0.<init>()
            cz.msebera.android.httpclient.conn.ssl.NoopHostnameVerifier.INSTANCE = r0
            return
    }

    public NoopHostnameVerifier() {
            r0 = this;
            r0.<init>()
            return
    }

    public final java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "NO_OP"
            return r0
    }

    @Override
    public boolean verify(java.lang.String r1, javax.net.ssl.SSLSession r2) {
            r0 = this;
            r1 = 1
            return r1
    }
}
