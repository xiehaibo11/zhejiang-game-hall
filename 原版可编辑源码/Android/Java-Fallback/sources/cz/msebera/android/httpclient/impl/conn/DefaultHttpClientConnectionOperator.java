package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.Immutable
public class DefaultHttpClientConnectionOperator implements cz.msebera.android.httpclient.conn.HttpClientConnectionOperator {
    static final java.lang.String SOCKET_FACTORY_REGISTRY = "http.socket-factory-registry";
    private final cz.msebera.android.httpclient.conn.DnsResolver dnsResolver;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final cz.msebera.android.httpclient.conn.SchemePortResolver schemePortResolver;
    private final cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.conn.socket.ConnectionSocketFactory> socketFactoryRegistry;

    public DefaultHttpClientConnectionOperator(cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.conn.socket.ConnectionSocketFactory> r3, cz.msebera.android.httpclient.conn.SchemePortResolver r4, cz.msebera.android.httpclient.conn.DnsResolver r5) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            java.lang.String r0 = "Socket factory registry"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            r2.socketFactoryRegistry = r3
            if (r4 == 0) goto L18
            goto L1a
        L18:
            cz.msebera.android.httpclient.impl.conn.DefaultSchemePortResolver r4 = cz.msebera.android.httpclient.impl.conn.DefaultSchemePortResolver.INSTANCE
        L1a:
            r2.schemePortResolver = r4
            if (r5 == 0) goto L1f
            goto L21
        L1f:
            cz.msebera.android.httpclient.impl.conn.SystemDefaultDnsResolver r5 = cz.msebera.android.httpclient.impl.conn.SystemDefaultDnsResolver.INSTANCE
        L21:
            r2.dnsResolver = r5
            return
    }

    private cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.conn.socket.ConnectionSocketFactory> getSocketFactoryRegistry(cz.msebera.android.httpclient.protocol.HttpContext r2) {
            r1 = this;
            java.lang.String r0 = "http.socket-factory-registry"
            java.lang.Object r2 = r2.getAttribute(r0)
            cz.msebera.android.httpclient.config.Lookup r2 = (cz.msebera.android.httpclient.config.Lookup) r2
            if (r2 != 0) goto Lc
            cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.conn.socket.ConnectionSocketFactory> r2 = r1.socketFactoryRegistry
        Lc:
            return r2
    }

    @Override
    public void connect(cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r21, cz.msebera.android.httpclient.HttpHost r22, java.net.InetSocketAddress r23, int r24, cz.msebera.android.httpclient.config.SocketConfig r25, cz.msebera.android.httpclient.protocol.HttpContext r26) throws java.io.IOException {
            r20 = this;
            r1 = r20
            r2 = r21
            r10 = r22
            r11 = r26
            cz.msebera.android.httpclient.config.Lookup r0 = r1.getSocketFactoryRegistry(r11)
            java.lang.String r3 = r22.getSchemeName()
            java.lang.Object r0 = r0.lookup(r3)
            r12 = r0
            cz.msebera.android.httpclient.conn.socket.ConnectionSocketFactory r12 = (cz.msebera.android.httpclient.conn.socket.ConnectionSocketFactory) r12
            if (r12 == 0) goto L128
            java.net.InetAddress r0 = r22.getAddress()
            r13 = 0
            r14 = 1
            if (r0 == 0) goto L2a
            java.net.InetAddress[] r0 = new java.net.InetAddress[r14]
            java.net.InetAddress r3 = r22.getAddress()
            r0[r13] = r3
            goto L34
        L2a:
            cz.msebera.android.httpclient.conn.DnsResolver r0 = r1.dnsResolver
            java.lang.String r3 = r22.getHostName()
            java.net.InetAddress[] r0 = r0.resolve(r3)
        L34:
            r15 = r0
            cz.msebera.android.httpclient.conn.SchemePortResolver r0 = r1.schemePortResolver
            int r9 = r0.resolve(r10)
            r8 = 0
        L3c:
            int r0 = r15.length
            if (r8 >= r0) goto L127
            r0 = r15[r8]
            int r3 = r15.length
            int r3 = r3 - r14
            if (r8 != r3) goto L48
            r16 = 1
            goto L4a
        L48:
            r16 = 0
        L4a:
            java.net.Socket r5 = r12.createSocket(r11)
            int r3 = r25.getSoTimeout()
            r5.setSoTimeout(r3)
            boolean r3 = r25.isSoReuseAddress()
            r5.setReuseAddress(r3)
            boolean r3 = r25.isTcpNoDelay()
            r5.setTcpNoDelay(r3)
            boolean r3 = r25.isSoKeepAlive()
            r5.setKeepAlive(r3)
            int r3 = r25.getSoLinger()
            if (r3 < 0) goto L73
            r5.setSoLinger(r14, r3)
        L73:
            r2.bind(r5)
            java.net.InetSocketAddress r7 = new java.net.InetSocketAddress
            r7.<init>(r0, r9)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r1.log
            boolean r0 = r0.isDebugEnabled()
            if (r0 == 0) goto L99
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r1.log
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Connecting to "
            r3.append(r4)
            r3.append(r7)
            java.lang.String r3 = r3.toString()
            r0.debug(r3)
        L99:
            r3 = r12
            r4 = r24
            r6 = r22
            r17 = r7
            r18 = r8
            r8 = r23
            r19 = r9
            r9 = r26
            java.net.Socket r0 = r3.connectSocket(r4, r5, r6, r7, r8, r9)     // Catch: java.net.NoRouteToHostException -> Lce java.net.ConnectException -> Ld3 java.net.SocketTimeoutException -> Lee
            r2.bind(r0)     // Catch: java.net.NoRouteToHostException -> Lce java.net.ConnectException -> Ld3 java.net.SocketTimeoutException -> Lee
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r1.log     // Catch: java.net.NoRouteToHostException -> Lce java.net.ConnectException -> Ld3 java.net.SocketTimeoutException -> Lee
            boolean r0 = r0.isDebugEnabled()     // Catch: java.net.NoRouteToHostException -> Lce java.net.ConnectException -> Ld3 java.net.SocketTimeoutException -> Lee
            if (r0 == 0) goto Lcd
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r1.log     // Catch: java.net.NoRouteToHostException -> Lce java.net.ConnectException -> Ld3 java.net.SocketTimeoutException -> Lee
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.net.NoRouteToHostException -> Lce java.net.ConnectException -> Ld3 java.net.SocketTimeoutException -> Lee
            r3.<init>()     // Catch: java.net.NoRouteToHostException -> Lce java.net.ConnectException -> Ld3 java.net.SocketTimeoutException -> Lee
            java.lang.String r4 = "Connection established "
            r3.append(r4)     // Catch: java.net.NoRouteToHostException -> Lce java.net.ConnectException -> Ld3 java.net.SocketTimeoutException -> Lee
            r3.append(r2)     // Catch: java.net.NoRouteToHostException -> Lce java.net.ConnectException -> Ld3 java.net.SocketTimeoutException -> Lee
            java.lang.String r3 = r3.toString()     // Catch: java.net.NoRouteToHostException -> Lce java.net.ConnectException -> Ld3 java.net.SocketTimeoutException -> Lee
            r0.debug(r3)     // Catch: java.net.NoRouteToHostException -> Lce java.net.ConnectException -> Ld3 java.net.SocketTimeoutException -> Lee
        Lcd:
            return
        Lce:
            r0 = move-exception
            if (r16 != 0) goto Ld2
            goto Lf1
        Ld2:
            throw r0
        Ld3:
            r0 = move-exception
            if (r16 == 0) goto Lf1
            java.lang.String r2 = r0.getMessage()
            java.lang.String r3 = "Connection timed out"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto Le8
            cz.msebera.android.httpclient.conn.ConnectTimeoutException r2 = new cz.msebera.android.httpclient.conn.ConnectTimeoutException
            r2.<init>(r0, r10, r15)
            throw r2
        Le8:
            cz.msebera.android.httpclient.conn.HttpHostConnectException r2 = new cz.msebera.android.httpclient.conn.HttpHostConnectException
            r2.<init>(r0, r10, r15)
            throw r2
        Lee:
            r0 = move-exception
            if (r16 != 0) goto L121
        Lf1:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r1.log
            boolean r0 = r0.isDebugEnabled()
            if (r0 == 0) goto L11b
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r1.log
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Connect to "
            r3.append(r4)
            r4 = r17
            r3.append(r4)
            java.lang.String r4 = " timed out. "
            r3.append(r4)
            java.lang.String r4 = "Connection will be retried using another IP address"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r0.debug(r3)
        L11b:
            int r8 = r18 + 1
            r9 = r19
            goto L3c
        L121:
            cz.msebera.android.httpclient.conn.ConnectTimeoutException r2 = new cz.msebera.android.httpclient.conn.ConnectTimeoutException
            r2.<init>(r0, r10, r15)
            throw r2
        L127:
            return
        L128:
            cz.msebera.android.httpclient.conn.UnsupportedSchemeException r0 = new cz.msebera.android.httpclient.conn.UnsupportedSchemeException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r22.getSchemeName()
            r2.append(r3)
            java.lang.String r3 = " protocol is not supported"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.<init>(r2)
            throw r0
    }

    @Override
    public void upgrade(cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r4, cz.msebera.android.httpclient.HttpHost r5, cz.msebera.android.httpclient.protocol.HttpContext r6) throws java.io.IOException {
            r3 = this;
            cz.msebera.android.httpclient.client.protocol.HttpClientContext r0 = cz.msebera.android.httpclient.client.protocol.HttpClientContext.adapt(r6)
            cz.msebera.android.httpclient.config.Lookup r0 = r3.getSocketFactoryRegistry(r0)
            java.lang.String r1 = r5.getSchemeName()
            java.lang.Object r0 = r0.lookup(r1)
            cz.msebera.android.httpclient.conn.socket.ConnectionSocketFactory r0 = (cz.msebera.android.httpclient.conn.socket.ConnectionSocketFactory) r0
            if (r0 == 0) goto L4b
            boolean r1 = r0 instanceof cz.msebera.android.httpclient.conn.socket.LayeredConnectionSocketFactory
            if (r1 == 0) goto L30
            cz.msebera.android.httpclient.conn.socket.LayeredConnectionSocketFactory r0 = (cz.msebera.android.httpclient.conn.socket.LayeredConnectionSocketFactory) r0
            java.net.Socket r1 = r4.getSocket()
            cz.msebera.android.httpclient.conn.SchemePortResolver r2 = r3.schemePortResolver
            int r2 = r2.resolve(r5)
            java.lang.String r5 = r5.getHostName()
            java.net.Socket r5 = r0.createLayeredSocket(r1, r5, r2, r6)
            r4.bind(r5)
            return
        L30:
            cz.msebera.android.httpclient.conn.UnsupportedSchemeException r4 = new cz.msebera.android.httpclient.conn.UnsupportedSchemeException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r5 = r5.getSchemeName()
            r6.append(r5)
            java.lang.String r5 = " protocol does not support connection upgrade"
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            r4.<init>(r5)
            throw r4
        L4b:
            cz.msebera.android.httpclient.conn.UnsupportedSchemeException r4 = new cz.msebera.android.httpclient.conn.UnsupportedSchemeException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r5 = r5.getSchemeName()
            r6.append(r5)
            java.lang.String r5 = " protocol is not supported"
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            r4.<init>(r5)
            throw r4
    }
}
