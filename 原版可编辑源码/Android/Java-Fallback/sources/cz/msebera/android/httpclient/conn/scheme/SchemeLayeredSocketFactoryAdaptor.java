package cz.msebera.android.httpclient.conn.scheme;

@java.lang.Deprecated
class SchemeLayeredSocketFactoryAdaptor extends cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactoryAdaptor implements cz.msebera.android.httpclient.conn.scheme.SchemeLayeredSocketFactory {
    private final cz.msebera.android.httpclient.conn.scheme.LayeredSocketFactory factory;

    SchemeLayeredSocketFactoryAdaptor(cz.msebera.android.httpclient.conn.scheme.LayeredSocketFactory r1) {
            r0 = this;
            r0.<init>(r1)
            r0.factory = r1
            return
    }

    @Override
    public java.net.Socket createLayeredSocket(java.net.Socket r2, java.lang.String r3, int r4, cz.msebera.android.httpclient.params.HttpParams r5) throws java.io.IOException, java.net.UnknownHostException {
            r1 = this;
            cz.msebera.android.httpclient.conn.scheme.LayeredSocketFactory r5 = r1.factory
            r0 = 1
            java.net.Socket r2 = r5.createSocket(r2, r3, r4, r0)
            return r2
    }
}
