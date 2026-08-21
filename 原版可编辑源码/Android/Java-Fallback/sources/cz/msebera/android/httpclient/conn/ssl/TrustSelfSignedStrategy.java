package cz.msebera.android.httpclient.conn.ssl;

public class TrustSelfSignedStrategy implements cz.msebera.android.httpclient.conn.ssl.TrustStrategy {
    public static final cz.msebera.android.httpclient.conn.ssl.TrustSelfSignedStrategy INSTANCE = null;

    static {
            cz.msebera.android.httpclient.conn.ssl.TrustSelfSignedStrategy r0 = new cz.msebera.android.httpclient.conn.ssl.TrustSelfSignedStrategy
            r0.<init>()
            cz.msebera.android.httpclient.conn.ssl.TrustSelfSignedStrategy.INSTANCE = r0
            return
    }

    public TrustSelfSignedStrategy() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean isTrusted(java.security.cert.X509Certificate[] r1, java.lang.String r2) throws java.security.cert.CertificateException {
            r0 = this;
            int r1 = r1.length
            r2 = 1
            if (r1 != r2) goto L5
            goto L6
        L5:
            r2 = 0
        L6:
            return r2
    }
}
