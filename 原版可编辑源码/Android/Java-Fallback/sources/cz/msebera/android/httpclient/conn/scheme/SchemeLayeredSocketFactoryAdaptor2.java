package cz.msebera.android.httpclient.conn.scheme;

@java.lang.Deprecated
class SchemeLayeredSocketFactoryAdaptor2 implements cz.msebera.android.httpclient.conn.scheme.SchemeLayeredSocketFactory {
    private final cz.msebera.android.httpclient.conn.scheme.LayeredSchemeSocketFactory factory;

    SchemeLayeredSocketFactoryAdaptor2(cz.msebera.android.httpclient.conn.scheme.LayeredSchemeSocketFactory r1) {
            r0 = this;
            r0.<init>()
            r0.factory = r1
            return
    }

    @Override
    public java.net.Socket connectSocket(java.net.Socket r2, java.net.InetSocketAddress r3, java.net.InetSocketAddress r4, cz.msebera.android.httpclient.params.HttpParams r5) throws java.io.IOException, java.net.UnknownHostException, cz.msebera.android.httpclient.conn.ConnectTimeoutException {
            r1 = this;
            cz.msebera.android.httpclient.conn.scheme.LayeredSchemeSocketFactory r0 = r1.factory
            java.net.Socket r2 = r0.connectSocket(r2, r3, r4, r5)
            return r2
    }

    @Override
    public java.net.Socket createLayeredSocket(java.net.Socket r2, java.lang.String r3, int r4, cz.msebera.android.httpclient.params.HttpParams r5) throws java.io.IOException, java.net.UnknownHostException {
            r1 = this;
            cz.msebera.android.httpclient.conn.scheme.LayeredSchemeSocketFactory r5 = r1.factory
            r0 = 1
            java.net.Socket r2 = r5.createLayeredSocket(r2, r3, r4, r0)
            return r2
    }

    @Override
    public java.net.Socket createSocket(cz.msebera.android.httpclient.params.HttpParams r2) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.conn.scheme.LayeredSchemeSocketFactory r0 = r1.factory
            java.net.Socket r2 = r0.createSocket(r2)
            return r2
    }

    @Override
    public boolean isSecure(java.net.Socket r2) throws java.lang.IllegalArgumentException {
            r1 = this;
            cz.msebera.android.httpclient.conn.scheme.LayeredSchemeSocketFactory r0 = r1.factory
            boolean r2 = r0.isSecure(r2)
            return r2
    }
}
