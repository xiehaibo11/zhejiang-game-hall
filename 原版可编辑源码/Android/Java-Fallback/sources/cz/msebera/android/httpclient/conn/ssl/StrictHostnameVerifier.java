package cz.msebera.android.httpclient.conn.ssl;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class StrictHostnameVerifier extends cz.msebera.android.httpclient.conn.ssl.AbstractVerifier {
    public static final cz.msebera.android.httpclient.conn.ssl.StrictHostnameVerifier INSTANCE = null;

    static {
            cz.msebera.android.httpclient.conn.ssl.StrictHostnameVerifier r0 = new cz.msebera.android.httpclient.conn.ssl.StrictHostnameVerifier
            r0.<init>()
            cz.msebera.android.httpclient.conn.ssl.StrictHostnameVerifier.INSTANCE = r0
            return
    }

    public StrictHostnameVerifier() {
            r0 = this;
            r0.<init>()
            return
    }

    public final java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "STRICT"
            return r0
    }

    @Override
    public final void verify(java.lang.String r2, java.lang.String[] r3, java.lang.String[] r4) throws javax.net.ssl.SSLException {
            r1 = this;
            r0 = 1
            r1.verify(r2, r3, r4, r0)
            return
    }
}
