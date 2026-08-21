package cz.msebera.android.httpclient.conn.scheme;

@java.lang.Deprecated
class SocketFactoryAdaptor implements cz.msebera.android.httpclient.conn.scheme.SocketFactory {
    private final cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory factory;

    SocketFactoryAdaptor(cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory r1) {
            r0 = this;
            r0.<init>()
            r0.factory = r1
            return
    }

    @Override
    public java.net.Socket connectSocket(java.net.Socket r2, java.lang.String r3, int r4, java.net.InetAddress r5, int r6, cz.msebera.android.httpclient.params.HttpParams r7) throws java.io.IOException, java.net.UnknownHostException, cz.msebera.android.httpclient.conn.ConnectTimeoutException {
            r1 = this;
            if (r5 != 0) goto L7
            if (r6 <= 0) goto L5
            goto L7
        L5:
            r5 = 0
            goto L11
        L7:
            java.net.InetSocketAddress r0 = new java.net.InetSocketAddress
            if (r6 <= 0) goto Lc
            goto Ld
        Lc:
            r6 = 0
        Ld:
            r0.<init>(r5, r6)
            r5 = r0
        L11:
            java.net.InetAddress r3 = java.net.InetAddress.getByName(r3)
            java.net.InetSocketAddress r6 = new java.net.InetSocketAddress
            r6.<init>(r3, r4)
            cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory r3 = r1.factory
            java.net.Socket r2 = r3.connectSocket(r2, r6, r5, r7)
            return r2
    }

    @Override
    public java.net.Socket createSocket() throws java.io.IOException {
            r2 = this;
            cz.msebera.android.httpclient.params.BasicHttpParams r0 = new cz.msebera.android.httpclient.params.BasicHttpParams
            r0.<init>()
            cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory r1 = r2.factory
            java.net.Socket r0 = r1.createSocket(r0)
            return r0
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
            boolean r0 = r2 instanceof cz.msebera.android.httpclient.conn.scheme.SocketFactoryAdaptor
            if (r0 == 0) goto L17
            cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory r0 = r1.factory
            cz.msebera.android.httpclient.conn.scheme.SocketFactoryAdaptor r2 = (cz.msebera.android.httpclient.conn.scheme.SocketFactoryAdaptor) r2
            cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory r2 = r2.factory
            boolean r2 = r0.equals(r2)
            return r2
        L17:
            cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory r0 = r1.factory
            boolean r2 = r0.equals(r2)
            return r2
    }

    public cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory getFactory() {
            r1 = this;
            cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory r0 = r1.factory
            return r0
    }

    public int hashCode() {
            r1 = this;
            cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory r0 = r1.factory
            int r0 = r0.hashCode()
            return r0
    }

    @Override
    public boolean isSecure(java.net.Socket r2) throws java.lang.IllegalArgumentException {
            r1 = this;
            cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory r0 = r1.factory
            boolean r2 = r0.isSecure(r2)
            return r2
    }
}
