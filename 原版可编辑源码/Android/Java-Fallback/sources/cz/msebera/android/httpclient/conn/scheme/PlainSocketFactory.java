package cz.msebera.android.httpclient.conn.scheme;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class PlainSocketFactory implements cz.msebera.android.httpclient.conn.scheme.SocketFactory, cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory {
    private final cz.msebera.android.httpclient.conn.scheme.HostNameResolver nameResolver;

    public PlainSocketFactory() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.nameResolver = r0
            return
    }

    @java.lang.Deprecated
    public PlainSocketFactory(cz.msebera.android.httpclient.conn.scheme.HostNameResolver r1) {
            r0 = this;
            r0.<init>()
            r0.nameResolver = r1
            return
    }

    public static cz.msebera.android.httpclient.conn.scheme.PlainSocketFactory getSocketFactory() {
            cz.msebera.android.httpclient.conn.scheme.PlainSocketFactory r0 = new cz.msebera.android.httpclient.conn.scheme.PlainSocketFactory
            r0.<init>()
            return r0
    }

    @Override
    @java.lang.Deprecated
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
            cz.msebera.android.httpclient.conn.scheme.HostNameResolver r6 = r1.nameResolver
            if (r6 == 0) goto L1a
            java.net.InetAddress r3 = r6.resolve(r3)
            goto L1e
        L1a:
            java.net.InetAddress r3 = java.net.InetAddress.getByName(r3)
        L1e:
            java.net.InetSocketAddress r6 = new java.net.InetSocketAddress
            r6.<init>(r3, r4)
            java.net.Socket r2 = r1.connectSocket(r2, r6, r5, r7)
            return r2
    }

    @Override
    public java.net.Socket connectSocket(java.net.Socket r2, java.net.InetSocketAddress r3, java.net.InetSocketAddress r4, cz.msebera.android.httpclient.params.HttpParams r5) throws java.io.IOException, cz.msebera.android.httpclient.conn.ConnectTimeoutException {
            r1 = this;
            java.lang.String r0 = "Remote address"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            if (r2 != 0) goto L10
            java.net.Socket r2 = r1.createSocket()
        L10:
            if (r4 == 0) goto L1c
            boolean r0 = cz.msebera.android.httpclient.params.HttpConnectionParams.getSoReuseaddr(r5)
            r2.setReuseAddress(r0)
            r2.bind(r4)
        L1c:
            int r4 = cz.msebera.android.httpclient.params.HttpConnectionParams.getConnectionTimeout(r5)
            int r5 = cz.msebera.android.httpclient.params.HttpConnectionParams.getSoTimeout(r5)
            r2.setSoTimeout(r5)     // Catch: java.net.SocketTimeoutException -> L2b
            r2.connect(r3, r4)     // Catch: java.net.SocketTimeoutException -> L2b
            return r2
        L2b:
            cz.msebera.android.httpclient.conn.ConnectTimeoutException r2 = new cz.msebera.android.httpclient.conn.ConnectTimeoutException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Connect to "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r3 = " timed out"
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            r2.<init>(r3)
            throw r2
    }

    @Override
    public java.net.Socket createSocket() {
            r1 = this;
            java.net.Socket r0 = new java.net.Socket
            r0.<init>()
            return r0
    }

    @Override
    public java.net.Socket createSocket(cz.msebera.android.httpclient.params.HttpParams r1) {
            r0 = this;
            java.net.Socket r1 = new java.net.Socket
            r1.<init>()
            return r1
    }

    @Override
    public final boolean isSecure(java.net.Socket r1) {
            r0 = this;
            r1 = 0
            return r1
    }
}
