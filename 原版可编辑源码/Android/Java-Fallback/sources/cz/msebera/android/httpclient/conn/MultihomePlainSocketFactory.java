package cz.msebera.android.httpclient.conn;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public final class MultihomePlainSocketFactory implements cz.msebera.android.httpclient.conn.scheme.SocketFactory {
    private static final cz.msebera.android.httpclient.conn.MultihomePlainSocketFactory DEFAULT_FACTORY = null;

    static {
            cz.msebera.android.httpclient.conn.MultihomePlainSocketFactory r0 = new cz.msebera.android.httpclient.conn.MultihomePlainSocketFactory
            r0.<init>()
            cz.msebera.android.httpclient.conn.MultihomePlainSocketFactory.DEFAULT_FACTORY = r0
            return
    }

    private MultihomePlainSocketFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    public static cz.msebera.android.httpclient.conn.MultihomePlainSocketFactory getSocketFactory() {
            cz.msebera.android.httpclient.conn.MultihomePlainSocketFactory r0 = cz.msebera.android.httpclient.conn.MultihomePlainSocketFactory.DEFAULT_FACTORY
            return r0
    }

    @Override
    public java.net.Socket connectSocket(java.net.Socket r2, java.lang.String r3, int r4, java.net.InetAddress r5, int r6, cz.msebera.android.httpclient.params.HttpParams r7) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Target host"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r0)
            if (r2 != 0) goto L10
            java.net.Socket r2 = r1.createSocket()
        L10:
            if (r5 != 0) goto L14
            if (r6 <= 0) goto L20
        L14:
            java.net.InetSocketAddress r0 = new java.net.InetSocketAddress
            if (r6 <= 0) goto L19
            goto L1a
        L19:
            r6 = 0
        L1a:
            r0.<init>(r5, r6)
            r2.bind(r0)
        L20:
            int r5 = cz.msebera.android.httpclient.params.HttpConnectionParams.getConnectionTimeout(r7)
            java.net.InetAddress[] r3 = java.net.InetAddress.getAllByName(r3)
            java.util.ArrayList r6 = new java.util.ArrayList
            int r7 = r3.length
            r6.<init>(r7)
            java.util.List r3 = java.util.Arrays.asList(r3)
            r6.addAll(r3)
            java.util.Collections.shuffle(r6)
            r3 = 0
            java.util.Iterator r6 = r6.iterator()
        L3d:
            boolean r7 = r6.hasNext()
            if (r7 == 0) goto L76
            java.lang.Object r7 = r6.next()
            java.net.InetAddress r7 = (java.net.InetAddress) r7
            java.net.InetSocketAddress r0 = new java.net.InetSocketAddress     // Catch: java.io.IOException -> L52 java.net.SocketTimeoutException -> L5a
            r0.<init>(r7, r4)     // Catch: java.io.IOException -> L52 java.net.SocketTimeoutException -> L5a
            r2.connect(r0, r5)     // Catch: java.io.IOException -> L52 java.net.SocketTimeoutException -> L5a
            goto L76
        L52:
            r2 = move-exception
            r3 = r2
            java.net.Socket r2 = new java.net.Socket
            r2.<init>()
            goto L3d
        L5a:
            cz.msebera.android.httpclient.conn.ConnectTimeoutException r2 = new cz.msebera.android.httpclient.conn.ConnectTimeoutException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Connect to "
            r3.append(r4)
            r3.append(r7)
            java.lang.String r4 = " timed out"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
        L76:
            if (r3 != 0) goto L79
            return r2
        L79:
            throw r3
    }

    @Override
    public java.net.Socket createSocket() {
            r1 = this;
            java.net.Socket r0 = new java.net.Socket
            r0.<init>()
            return r0
    }

    @Override
    public final boolean isSecure(java.net.Socket r2) throws java.lang.IllegalArgumentException {
            r1 = this;
            java.lang.String r0 = "Socket"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            boolean r2 = r2.isClosed()
            r2 = r2 ^ 1
            java.lang.String r0 = "Socket is closed"
            cz.msebera.android.httpclient.util.Asserts.check(r2, r0)
            r2 = 0
            return r2
    }
}
