package cz.msebera.android.httpclient.conn.ssl;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class AllowAllHostnameVerifier extends cz.msebera.android.httpclient.conn.ssl.AbstractVerifier {
    public static final cz.msebera.android.httpclient.conn.ssl.AllowAllHostnameVerifier INSTANCE = null;

    static {
            cz.msebera.android.httpclient.conn.ssl.AllowAllHostnameVerifier r0 = new cz.msebera.android.httpclient.conn.ssl.AllowAllHostnameVerifier
            r0.<init>()
            cz.msebera.android.httpclient.conn.ssl.AllowAllHostnameVerifier.INSTANCE = r0
            return
    }

    public AllowAllHostnameVerifier() {
            r0 = this;
            r0.<init>()
            return
    }

    public final java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "ALLOW_ALL"
            return r0
    }

    @Override
    public final void verify(java.lang.String r1, java.lang.String[] r2, java.lang.String[] r3) {
            r0 = this;
            return
    }
}
