package cz.msebera.android.httpclient.conn.ssl;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class BrowserCompatHostnameVerifier extends cz.msebera.android.httpclient.conn.ssl.AbstractVerifier {
    public static final cz.msebera.android.httpclient.conn.ssl.BrowserCompatHostnameVerifier INSTANCE = null;

    static {
            cz.msebera.android.httpclient.conn.ssl.BrowserCompatHostnameVerifier r0 = new cz.msebera.android.httpclient.conn.ssl.BrowserCompatHostnameVerifier
            r0.<init>()
            cz.msebera.android.httpclient.conn.ssl.BrowserCompatHostnameVerifier.INSTANCE = r0
            return
    }

    public BrowserCompatHostnameVerifier() {
            r0 = this;
            r0.<init>()
            return
    }

    public final java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "BROWSER_COMPATIBLE"
            return r0
    }

    @Override
    public final void verify(java.lang.String r2, java.lang.String[] r3, java.lang.String[] r4) throws javax.net.ssl.SSLException {
            r1 = this;
            r0 = 0
            r1.verify(r2, r3, r4, r0)
            return
    }
}
