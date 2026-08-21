package cz.msebera.android.httpclient.impl.pool;

@cz.msebera.android.httpclient.annotation.Immutable
public class BasicConnFactory implements cz.msebera.android.httpclient.pool.ConnFactory<cz.msebera.android.httpclient.HttpHost, cz.msebera.android.httpclient.HttpClientConnection> {
    private final cz.msebera.android.httpclient.HttpConnectionFactory<? extends cz.msebera.android.httpclient.HttpClientConnection> connFactory;
    private final int connectTimeout;
    private final javax.net.SocketFactory plainfactory;
    private final cz.msebera.android.httpclient.config.SocketConfig sconfig;
    private final javax.net.ssl.SSLSocketFactory sslfactory;

    public BasicConnFactory() {
            r6 = this;
            cz.msebera.android.httpclient.config.SocketConfig r4 = cz.msebera.android.httpclient.config.SocketConfig.DEFAULT
            cz.msebera.android.httpclient.config.ConnectionConfig r5 = cz.msebera.android.httpclient.config.ConnectionConfig.DEFAULT
            r1 = 0
            r2 = 0
            r3 = 0
            r0 = r6
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public BasicConnFactory(int r7, cz.msebera.android.httpclient.config.SocketConfig r8, cz.msebera.android.httpclient.config.ConnectionConfig r9) {
            r6 = this;
            r1 = 0
            r2 = 0
            r0 = r6
            r3 = r7
            r4 = r8
            r5 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public BasicConnFactory(cz.msebera.android.httpclient.config.SocketConfig r7, cz.msebera.android.httpclient.config.ConnectionConfig r8) {
            r6 = this;
            r1 = 0
            r2 = 0
            r3 = 0
            r0 = r6
            r4 = r7
            r5 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    @java.lang.Deprecated
    public BasicConnFactory(cz.msebera.android.httpclient.params.HttpParams r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r2)
            return
    }

    public BasicConnFactory(javax.net.SocketFactory r1, javax.net.ssl.SSLSocketFactory r2, int r3, cz.msebera.android.httpclient.config.SocketConfig r4, cz.msebera.android.httpclient.config.ConnectionConfig r5) {
            r0 = this;
            r0.<init>()
            r0.plainfactory = r1
            r0.sslfactory = r2
            r0.connectTimeout = r3
            if (r4 == 0) goto Lc
            goto Le
        Lc:
            cz.msebera.android.httpclient.config.SocketConfig r4 = cz.msebera.android.httpclient.config.SocketConfig.DEFAULT
        Le:
            r0.sconfig = r4
            cz.msebera.android.httpclient.impl.DefaultBHttpClientConnectionFactory r1 = new cz.msebera.android.httpclient.impl.DefaultBHttpClientConnectionFactory
            if (r5 == 0) goto L15
            goto L17
        L15:
            cz.msebera.android.httpclient.config.ConnectionConfig r5 = cz.msebera.android.httpclient.config.ConnectionConfig.DEFAULT
        L17:
            r1.<init>(r5)
            r0.connFactory = r1
            return
    }

    @java.lang.Deprecated
    public BasicConnFactory(javax.net.ssl.SSLSocketFactory r2, cz.msebera.android.httpclient.params.HttpParams r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "HTTP params"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            r0 = 0
            r1.plainfactory = r0
            r1.sslfactory = r2
            java.lang.String r2 = "http.connection.timeout"
            r0 = 0
            int r2 = r3.getIntParameter(r2, r0)
            r1.connectTimeout = r2
            cz.msebera.android.httpclient.config.SocketConfig r2 = cz.msebera.android.httpclient.params.HttpParamConfig.getSocketConfig(r3)
            r1.sconfig = r2
            cz.msebera.android.httpclient.impl.DefaultBHttpClientConnectionFactory r2 = new cz.msebera.android.httpclient.impl.DefaultBHttpClientConnectionFactory
            cz.msebera.android.httpclient.config.ConnectionConfig r3 = cz.msebera.android.httpclient.params.HttpParamConfig.getConnectionConfig(r3)
            r2.<init>(r3)
            r1.connFactory = r2
            return
    }

    public cz.msebera.android.httpclient.HttpClientConnection create(cz.msebera.android.httpclient.HttpHost r7) throws java.io.IOException {
            r6 = this;
            java.lang.String r0 = r7.getSchemeName()
            java.lang.String r1 = "http"
            boolean r2 = r1.equalsIgnoreCase(r0)
            if (r2 == 0) goto L1b
            javax.net.SocketFactory r2 = r6.plainfactory
            if (r2 == 0) goto L15
            java.net.Socket r2 = r2.createSocket()
            goto L1c
        L15:
            java.net.Socket r2 = new java.net.Socket
            r2.<init>()
            goto L1c
        L1b:
            r2 = 0
        L1c:
            java.lang.String r3 = "https"
            boolean r4 = r3.equalsIgnoreCase(r0)
            if (r4 == 0) goto L31
            javax.net.ssl.SSLSocketFactory r2 = r6.sslfactory
            if (r2 == 0) goto L29
            goto L2d
        L29:
            javax.net.SocketFactory r2 = javax.net.ssl.SSLSocketFactory.getDefault()
        L2d:
            java.net.Socket r2 = r2.createSocket()
        L31:
            if (r2 == 0) goto Lb3
            java.lang.String r0 = r7.getHostName()
            int r4 = r7.getPort()
            r5 = -1
            if (r4 != r5) goto L57
            java.lang.String r5 = r7.getSchemeName()
            boolean r1 = r5.equalsIgnoreCase(r1)
            if (r1 == 0) goto L4b
            r4 = 80
            goto L57
        L4b:
            java.lang.String r7 = r7.getSchemeName()
            boolean r7 = r7.equalsIgnoreCase(r3)
            if (r7 == 0) goto L57
            r4 = 443(0x1bb, float:6.21E-43)
        L57:
            cz.msebera.android.httpclient.config.SocketConfig r7 = r6.sconfig
            int r7 = r7.getSoTimeout()
            r2.setSoTimeout(r7)
            cz.msebera.android.httpclient.config.SocketConfig r7 = r6.sconfig
            int r7 = r7.getSndBufSize()
            if (r7 <= 0) goto L71
            cz.msebera.android.httpclient.config.SocketConfig r7 = r6.sconfig
            int r7 = r7.getSndBufSize()
            r2.setSendBufferSize(r7)
        L71:
            cz.msebera.android.httpclient.config.SocketConfig r7 = r6.sconfig
            int r7 = r7.getRcvBufSize()
            if (r7 <= 0) goto L82
            cz.msebera.android.httpclient.config.SocketConfig r7 = r6.sconfig
            int r7 = r7.getRcvBufSize()
            r2.setReceiveBufferSize(r7)
        L82:
            cz.msebera.android.httpclient.config.SocketConfig r7 = r6.sconfig
            boolean r7 = r7.isTcpNoDelay()
            r2.setTcpNoDelay(r7)
            cz.msebera.android.httpclient.config.SocketConfig r7 = r6.sconfig
            int r7 = r7.getSoLinger()
            if (r7 < 0) goto L97
            r1 = 1
            r2.setSoLinger(r1, r7)
        L97:
            cz.msebera.android.httpclient.config.SocketConfig r7 = r6.sconfig
            boolean r7 = r7.isSoKeepAlive()
            r2.setKeepAlive(r7)
            java.net.InetSocketAddress r7 = new java.net.InetSocketAddress
            r7.<init>(r0, r4)
            int r0 = r6.connectTimeout
            r2.connect(r7, r0)
            cz.msebera.android.httpclient.HttpConnectionFactory<? extends cz.msebera.android.httpclient.HttpClientConnection> r7 = r6.connFactory
            cz.msebera.android.httpclient.HttpConnection r7 = r7.createConnection(r2)
            cz.msebera.android.httpclient.HttpClientConnection r7 = (cz.msebera.android.httpclient.HttpClientConnection) r7
            return r7
        Lb3:
            java.io.IOException r7 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = " scheme is not supported"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r7.<init>(r0)
            throw r7
    }

    @java.lang.Deprecated
    protected cz.msebera.android.httpclient.HttpClientConnection create(java.net.Socket r3, cz.msebera.android.httpclient.params.HttpParams r4) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = "http.socket.buffer-size"
            r1 = 8192(0x2000, float:1.148E-41)
            int r4 = r4.getIntParameter(r0, r1)
            cz.msebera.android.httpclient.impl.DefaultBHttpClientConnection r0 = new cz.msebera.android.httpclient.impl.DefaultBHttpClientConnection
            r0.<init>(r4)
            r0.bind(r3)
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.HttpClientConnection create(cz.msebera.android.httpclient.HttpHost r1) throws java.io.IOException {
            r0 = this;
            cz.msebera.android.httpclient.HttpHost r1 = (cz.msebera.android.httpclient.HttpHost) r1
            cz.msebera.android.httpclient.HttpClientConnection r1 = r0.create(r1)
            return r1
    }
}
