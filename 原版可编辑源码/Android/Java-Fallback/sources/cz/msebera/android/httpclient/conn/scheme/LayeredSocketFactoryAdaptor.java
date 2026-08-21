package cz.msebera.android.httpclient.conn.scheme;

@java.lang.Deprecated
class LayeredSocketFactoryAdaptor extends cz.msebera.android.httpclient.conn.scheme.SocketFactoryAdaptor implements cz.msebera.android.httpclient.conn.scheme.LayeredSocketFactory {
    private final cz.msebera.android.httpclient.conn.scheme.LayeredSchemeSocketFactory factory;

    LayeredSocketFactoryAdaptor(cz.msebera.android.httpclient.conn.scheme.LayeredSchemeSocketFactory r1) {
            r0 = this;
            r0.<init>(r1)
            r0.factory = r1
            return
    }

    @Override
    public java.net.Socket createSocket(java.net.Socket r2, java.lang.String r3, int r4, boolean r5) throws java.io.IOException, java.net.UnknownHostException {
            r1 = this;
            cz.msebera.android.httpclient.conn.scheme.LayeredSchemeSocketFactory r0 = r1.factory
            java.net.Socket r2 = r0.createLayeredSocket(r2, r3, r4, r5)
            return r2
    }
}
