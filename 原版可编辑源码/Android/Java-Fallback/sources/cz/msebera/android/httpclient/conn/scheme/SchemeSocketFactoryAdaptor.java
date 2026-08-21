package cz.msebera.android.httpclient.conn.scheme;

@java.lang.Deprecated
class SchemeSocketFactoryAdaptor implements cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory {
    private final cz.msebera.android.httpclient.conn.scheme.SocketFactory factory;

    SchemeSocketFactoryAdaptor(cz.msebera.android.httpclient.conn.scheme.SocketFactory r1) {
            r0 = this;
            r0.<init>()
            r0.factory = r1
            return
    }

    @Override
    public java.net.Socket connectSocket(java.net.Socket r8, java.net.InetSocketAddress r9, java.net.InetSocketAddress r10, cz.msebera.android.httpclient.params.HttpParams r11) throws java.io.IOException, java.net.UnknownHostException, cz.msebera.android.httpclient.conn.ConnectTimeoutException {
            r7 = this;
            java.lang.String r2 = r9.getHostName()
            int r3 = r9.getPort()
            if (r10 == 0) goto L15
            java.net.InetAddress r9 = r10.getAddress()
            int r10 = r10.getPort()
            r4 = r9
            r5 = r10
            goto L19
        L15:
            r9 = 0
            r10 = 0
            r4 = r9
            r5 = 0
        L19:
            cz.msebera.android.httpclient.conn.scheme.SocketFactory r0 = r7.factory
            r1 = r8
            r6 = r11
            java.net.Socket r8 = r0.connectSocket(r1, r2, r3, r4, r5, r6)
            return r8
    }

    @Override
    public java.net.Socket createSocket(cz.msebera.android.httpclient.params.HttpParams r1) throws java.io.IOException {
            r0 = this;
            cz.msebera.android.httpclient.conn.scheme.SocketFactory r1 = r0.factory
            java.net.Socket r1 = r1.createSocket()
            return r1
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            if (r1 != r2) goto L8
            r2 = 1
            return r2
        L8:
            boolean r0 = r2 instanceof cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactoryAdaptor
            if (r0 == 0) goto L17
            cz.msebera.android.httpclient.conn.scheme.SocketFactory r0 = r1.factory
            cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactoryAdaptor r2 = (cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactoryAdaptor) r2
            cz.msebera.android.httpclient.conn.scheme.SocketFactory r2 = r2.factory
            boolean r2 = r0.equals(r2)
            return r2
        L17:
            cz.msebera.android.httpclient.conn.scheme.SocketFactory r0 = r1.factory
            boolean r2 = r0.equals(r2)
            return r2
    }

    public cz.msebera.android.httpclient.conn.scheme.SocketFactory getFactory() {
            r1 = this;
            cz.msebera.android.httpclient.conn.scheme.SocketFactory r0 = r1.factory
            return r0
    }

    public int hashCode() {
            r1 = this;
            cz.msebera.android.httpclient.conn.scheme.SocketFactory r0 = r1.factory
            int r0 = r0.hashCode()
            return r0
    }

    @Override
    public boolean isSecure(java.net.Socket r2) throws java.lang.IllegalArgumentException {
            r1 = this;
            cz.msebera.android.httpclient.conn.scheme.SocketFactory r0 = r1.factory
            boolean r2 = r0.isSecure(r2)
            return r2
    }
}
