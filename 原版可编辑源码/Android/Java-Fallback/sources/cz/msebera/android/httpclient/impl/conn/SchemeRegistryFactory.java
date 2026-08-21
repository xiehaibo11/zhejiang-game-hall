package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.ThreadSafe
@java.lang.Deprecated
public final class SchemeRegistryFactory {
    public SchemeRegistryFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    public static cz.msebera.android.httpclient.conn.scheme.SchemeRegistry createDefault() {
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r0 = new cz.msebera.android.httpclient.conn.scheme.SchemeRegistry
            r0.<init>()
            cz.msebera.android.httpclient.conn.scheme.Scheme r1 = new cz.msebera.android.httpclient.conn.scheme.Scheme
            cz.msebera.android.httpclient.conn.scheme.PlainSocketFactory r2 = cz.msebera.android.httpclient.conn.scheme.PlainSocketFactory.getSocketFactory()
            java.lang.String r3 = "http"
            r4 = 80
            r1.<init>(r3, r4, r2)
            r0.register(r1)
            cz.msebera.android.httpclient.conn.scheme.Scheme r1 = new cz.msebera.android.httpclient.conn.scheme.Scheme
            cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory r2 = cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory.getSocketFactory()
            java.lang.String r3 = "https"
            r4 = 443(0x1bb, float:6.21E-43)
            r1.<init>(r3, r4, r2)
            r0.register(r1)
            return r0
    }

    public static cz.msebera.android.httpclient.conn.scheme.SchemeRegistry createSystemDefault() {
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r0 = new cz.msebera.android.httpclient.conn.scheme.SchemeRegistry
            r0.<init>()
            cz.msebera.android.httpclient.conn.scheme.Scheme r1 = new cz.msebera.android.httpclient.conn.scheme.Scheme
            cz.msebera.android.httpclient.conn.scheme.PlainSocketFactory r2 = cz.msebera.android.httpclient.conn.scheme.PlainSocketFactory.getSocketFactory()
            java.lang.String r3 = "http"
            r4 = 80
            r1.<init>(r3, r4, r2)
            r0.register(r1)
            cz.msebera.android.httpclient.conn.scheme.Scheme r1 = new cz.msebera.android.httpclient.conn.scheme.Scheme
            cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory r2 = cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory.getSystemSocketFactory()
            java.lang.String r3 = "https"
            r4 = 443(0x1bb, float:6.21E-43)
            r1.<init>(r3, r4, r2)
            r0.register(r1)
            return r0
    }
}
