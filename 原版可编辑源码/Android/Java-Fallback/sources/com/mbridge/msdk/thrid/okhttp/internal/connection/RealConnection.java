package com.mbridge.msdk.thrid.okhttp.internal.connection;

public final class RealConnection extends com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection.Listener implements com.mbridge.msdk.thrid.okhttp.Connection {
    private static final int MAX_TUNNEL_ATTEMPTS = 21;
    private static final java.lang.String NPE_THROW_WITH_NULL = "throw with null exception";
    public int allocationLimit;
    public final java.util.List<java.lang.ref.Reference<com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation>> allocations;
    private final com.mbridge.msdk.thrid.okhttp.ConnectionPool connectionPool;
    private com.mbridge.msdk.thrid.okhttp.Handshake handshake;
    private com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection http2Connection;
    public long idleAtNanos;
    public boolean noNewStreams;
    private com.mbridge.msdk.thrid.okhttp.Protocol protocol;
    private java.net.Socket rawSocket;
    private final com.mbridge.msdk.thrid.okhttp.Route route;
    private com.mbridge.msdk.thrid.okio.BufferedSink sink;
    private java.net.Socket socket;
    private com.mbridge.msdk.thrid.okio.BufferedSource source;
    public int successCount;


    public RealConnection(com.mbridge.msdk.thrid.okhttp.ConnectionPool r3, com.mbridge.msdk.thrid.okhttp.Route r4) {
            r2 = this;
            r2.<init>()
            r0 = 1
            r2.allocationLimit = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.allocations = r0
            r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r2.idleAtNanos = r0
            r2.connectionPool = r3
            r2.route = r4
            return
    }

    private void connectSocket(int r5, int r6, com.mbridge.msdk.thrid.okhttp.Call r7, com.mbridge.msdk.thrid.okhttp.EventListener r8) throws java.io.IOException {
            r4 = this;
            com.mbridge.msdk.thrid.okhttp.Route r0 = r4.route
            java.net.Proxy r0 = r0.proxy()
            com.mbridge.msdk.thrid.okhttp.Route r1 = r4.route
            com.mbridge.msdk.thrid.okhttp.Address r1 = r1.address()
            java.net.Proxy$Type r2 = r0.type()
            java.net.Proxy$Type r3 = java.net.Proxy.Type.DIRECT
            if (r2 == r3) goto L23
            java.net.Proxy$Type r2 = r0.type()
            java.net.Proxy$Type r3 = java.net.Proxy.Type.HTTP
            if (r2 != r3) goto L1d
            goto L23
        L1d:
            java.net.Socket r1 = new java.net.Socket
            r1.<init>(r0)
            goto L2b
        L23:
            javax.net.SocketFactory r1 = r1.socketFactory()
            java.net.Socket r1 = r1.createSocket()
        L2b:
            r4.rawSocket = r1
            com.mbridge.msdk.thrid.okhttp.Route r1 = r4.route
            java.net.InetSocketAddress r1 = r1.socketAddress()
            r8.connectStart(r7, r1, r0)
            java.net.Socket r7 = r4.rawSocket
            r7.setSoTimeout(r6)
            com.mbridge.msdk.thrid.okhttp.internal.platform.Platform r6 = com.mbridge.msdk.thrid.okhttp.internal.platform.Platform.get()     // Catch: java.net.ConnectException -> L77
            java.net.Socket r7 = r4.rawSocket     // Catch: java.net.ConnectException -> L77
            com.mbridge.msdk.thrid.okhttp.Route r8 = r4.route     // Catch: java.net.ConnectException -> L77
            java.net.InetSocketAddress r8 = r8.socketAddress()     // Catch: java.net.ConnectException -> L77
            r6.connectSocket(r7, r8, r5)     // Catch: java.net.ConnectException -> L77
            java.net.Socket r5 = r4.rawSocket     // Catch: java.lang.NullPointerException -> L63
            com.mbridge.msdk.thrid.okio.Source r5 = com.mbridge.msdk.thrid.okio.Okio.source(r5)     // Catch: java.lang.NullPointerException -> L63
            com.mbridge.msdk.thrid.okio.BufferedSource r5 = com.mbridge.msdk.thrid.okio.Okio.buffer(r5)     // Catch: java.lang.NullPointerException -> L63
            r4.source = r5     // Catch: java.lang.NullPointerException -> L63
            java.net.Socket r5 = r4.rawSocket     // Catch: java.lang.NullPointerException -> L63
            com.mbridge.msdk.thrid.okio.Sink r5 = com.mbridge.msdk.thrid.okio.Okio.sink(r5)     // Catch: java.lang.NullPointerException -> L63
            com.mbridge.msdk.thrid.okio.BufferedSink r5 = com.mbridge.msdk.thrid.okio.Okio.buffer(r5)     // Catch: java.lang.NullPointerException -> L63
            r4.sink = r5     // Catch: java.lang.NullPointerException -> L63
            goto L70
        L63:
            r5 = move-exception
            java.lang.String r6 = r5.getMessage()
            java.lang.String r7 = "throw with null exception"
            boolean r6 = r7.equals(r6)
            if (r6 != 0) goto L71
        L70:
            return
        L71:
            java.io.IOException r6 = new java.io.IOException
            r6.<init>(r5)
            throw r6
        L77:
            r5 = move-exception
            java.net.ConnectException r6 = new java.net.ConnectException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "Failed to connect to "
            r7.append(r8)
            com.mbridge.msdk.thrid.okhttp.Route r8 = r4.route
            java.net.InetSocketAddress r8 = r8.socketAddress()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            r6.<init>(r7)
            r6.initCause(r5)
            throw r6
    }

    private void connectTls(com.mbridge.msdk.thrid.okhttp.internal.connection.ConnectionSpecSelector r8) throws java.io.IOException {
            r7 = this;
            com.mbridge.msdk.thrid.okhttp.Route r0 = r7.route
            com.mbridge.msdk.thrid.okhttp.Address r0 = r0.address()
            javax.net.ssl.SSLSocketFactory r1 = r0.sslSocketFactory()
            r2 = 0
            java.net.Socket r3 = r7.rawSocket     // Catch: java.lang.Throwable -> L12e java.lang.AssertionError -> L130
            com.mbridge.msdk.thrid.okhttp.HttpUrl r4 = r0.url()     // Catch: java.lang.Throwable -> L12e java.lang.AssertionError -> L130
            java.lang.String r4 = r4.host()     // Catch: java.lang.Throwable -> L12e java.lang.AssertionError -> L130
            com.mbridge.msdk.thrid.okhttp.HttpUrl r5 = r0.url()     // Catch: java.lang.Throwable -> L12e java.lang.AssertionError -> L130
            int r5 = r5.port()     // Catch: java.lang.Throwable -> L12e java.lang.AssertionError -> L130
            r6 = 1
            java.net.Socket r1 = r1.createSocket(r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L12e java.lang.AssertionError -> L130
            javax.net.ssl.SSLSocket r1 = (javax.net.ssl.SSLSocket) r1     // Catch: java.lang.Throwable -> L12e java.lang.AssertionError -> L130
            com.mbridge.msdk.thrid.okhttp.ConnectionSpec r8 = r8.configureSecureSocket(r1)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            boolean r3 = r8.supportsTlsExtensions()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            if (r3 == 0) goto L41
            com.mbridge.msdk.thrid.okhttp.internal.platform.Platform r3 = com.mbridge.msdk.thrid.okhttp.internal.platform.Platform.get()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            com.mbridge.msdk.thrid.okhttp.HttpUrl r4 = r0.url()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.lang.String r4 = r4.host()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.util.List r5 = r0.protocols()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            r3.configureTlsExtensions(r1, r4, r5)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
        L41:
            r1.startHandshake()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            javax.net.ssl.SSLSession r3 = r1.getSession()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            com.mbridge.msdk.thrid.okhttp.Handshake r4 = com.mbridge.msdk.thrid.okhttp.Handshake.get(r3)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            javax.net.ssl.HostnameVerifier r5 = r0.hostnameVerifier()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            com.mbridge.msdk.thrid.okhttp.HttpUrl r6 = r0.url()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.lang.String r6 = r6.host()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            boolean r3 = r5.verify(r6, r3)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            if (r3 != 0) goto Ld8
            java.util.List r8 = r4.peerCertificates()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            boolean r2 = r8.isEmpty()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.lang.String r3 = "Hostname "
            if (r2 != 0) goto Lb6
            r2 = 0
            java.lang.Object r8 = r8.get(r2)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.security.cert.X509Certificate r8 = (java.security.cert.X509Certificate) r8     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            javax.net.ssl.SSLPeerUnverifiedException r2 = new javax.net.ssl.SSLPeerUnverifiedException     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            r4.<init>()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            r4.append(r3)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            com.mbridge.msdk.thrid.okhttp.HttpUrl r0 = r0.url()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.lang.String r0 = r0.host()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            r4.append(r0)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.lang.String r0 = " not verified:\n    certificate: "
            r4.append(r0)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.lang.String r0 = com.mbridge.msdk.thrid.okhttp.CertificatePinner.pin(r8)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            r4.append(r0)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.lang.String r0 = "\n    DN: "
            r4.append(r0)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.security.Principal r0 = r8.getSubjectDN()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.lang.String r0 = r0.getName()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            r4.append(r0)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.lang.String r0 = "\n    subjectAltNames: "
            r4.append(r0)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.util.List r8 = com.mbridge.msdk.thrid.okhttp.internal.tls.OkHostnameVerifier.allSubjectAltNames(r8)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            r4.append(r8)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.lang.String r8 = r4.toString()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            r2.<init>(r8)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            throw r2     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
        Lb6:
            javax.net.ssl.SSLPeerUnverifiedException r8 = new javax.net.ssl.SSLPeerUnverifiedException     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            r2.<init>()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            r2.append(r3)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            com.mbridge.msdk.thrid.okhttp.HttpUrl r0 = r0.url()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.lang.String r0 = r0.host()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            r2.append(r0)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.lang.String r0 = " not verified (no certificates)"
            r2.append(r0)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            r8.<init>(r0)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            throw r8     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
        Ld8:
            com.mbridge.msdk.thrid.okhttp.CertificatePinner r3 = r0.certificatePinner()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            com.mbridge.msdk.thrid.okhttp.HttpUrl r0 = r0.url()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.lang.String r0 = r0.host()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.util.List r5 = r4.peerCertificates()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            r3.check(r0, r5)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            boolean r8 = r8.supportsTlsExtensions()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            if (r8 == 0) goto Lf9
            com.mbridge.msdk.thrid.okhttp.internal.platform.Platform r8 = com.mbridge.msdk.thrid.okhttp.internal.platform.Platform.get()     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.lang.String r2 = r8.getSelectedProtocol(r1)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
        Lf9:
            r7.socket = r1     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            com.mbridge.msdk.thrid.okio.Source r8 = com.mbridge.msdk.thrid.okio.Okio.source(r1)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            com.mbridge.msdk.thrid.okio.BufferedSource r8 = com.mbridge.msdk.thrid.okio.Okio.buffer(r8)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            r7.source = r8     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            java.net.Socket r8 = r7.socket     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            com.mbridge.msdk.thrid.okio.Sink r8 = com.mbridge.msdk.thrid.okio.Okio.sink(r8)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            com.mbridge.msdk.thrid.okio.BufferedSink r8 = com.mbridge.msdk.thrid.okio.Okio.buffer(r8)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            r7.sink = r8     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            r7.handshake = r4     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            if (r2 == 0) goto L11a
            com.mbridge.msdk.thrid.okhttp.Protocol r8 = com.mbridge.msdk.thrid.okhttp.Protocol.get(r2)     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            goto L11c
        L11a:
            com.mbridge.msdk.thrid.okhttp.Protocol r8 = com.mbridge.msdk.thrid.okhttp.Protocol.HTTP_1_1     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
        L11c:
            r7.protocol = r8     // Catch: java.lang.Throwable -> L128 java.lang.AssertionError -> L12b
            if (r1 == 0) goto L127
            com.mbridge.msdk.thrid.okhttp.internal.platform.Platform r8 = com.mbridge.msdk.thrid.okhttp.internal.platform.Platform.get()
            r8.afterHandshake(r1)
        L127:
            return
        L128:
            r8 = move-exception
            r2 = r1
            goto L13e
        L12b:
            r8 = move-exception
            r2 = r1
            goto L131
        L12e:
            r8 = move-exception
            goto L13e
        L130:
            r8 = move-exception
        L131:
            boolean r0 = com.mbridge.msdk.thrid.okhttp.internal.Util.isAndroidGetsocknameError(r8)     // Catch: java.lang.Throwable -> L12e
            if (r0 == 0) goto L13d
            java.io.IOException r0 = new java.io.IOException     // Catch: java.lang.Throwable -> L12e
            r0.<init>(r8)     // Catch: java.lang.Throwable -> L12e
            throw r0     // Catch: java.lang.Throwable -> L12e
        L13d:
            throw r8     // Catch: java.lang.Throwable -> L12e
        L13e:
            if (r2 == 0) goto L147
            com.mbridge.msdk.thrid.okhttp.internal.platform.Platform r0 = com.mbridge.msdk.thrid.okhttp.internal.platform.Platform.get()
            r0.afterHandshake(r2)
        L147:
            com.mbridge.msdk.thrid.okhttp.internal.Util.closeQuietly(r2)
            throw r8
    }

    private void connectTunnel(int r7, int r8, int r9, com.mbridge.msdk.thrid.okhttp.Call r10, com.mbridge.msdk.thrid.okhttp.EventListener r11) throws java.io.IOException {
            r6 = this;
            com.mbridge.msdk.thrid.okhttp.Request r0 = r6.createTunnelRequest()
            com.mbridge.msdk.thrid.okhttp.HttpUrl r1 = r0.url()
            r2 = 0
        L9:
            r3 = 21
            if (r2 >= r3) goto L35
            r6.connectSocket(r7, r8, r10, r11)
            com.mbridge.msdk.thrid.okhttp.Request r0 = r6.createTunnel(r8, r9, r0, r1)
            if (r0 != 0) goto L17
            goto L35
        L17:
            java.net.Socket r3 = r6.rawSocket
            com.mbridge.msdk.thrid.okhttp.internal.Util.closeQuietly(r3)
            r3 = 0
            r6.rawSocket = r3
            r6.sink = r3
            r6.source = r3
            com.mbridge.msdk.thrid.okhttp.Route r4 = r6.route
            java.net.InetSocketAddress r4 = r4.socketAddress()
            com.mbridge.msdk.thrid.okhttp.Route r5 = r6.route
            java.net.Proxy r5 = r5.proxy()
            r11.connectEnd(r10, r4, r5, r3)
            int r2 = r2 + 1
            goto L9
        L35:
            return
    }

    private com.mbridge.msdk.thrid.okhttp.Request createTunnel(int r7, int r8, com.mbridge.msdk.thrid.okhttp.Request r9, com.mbridge.msdk.thrid.okhttp.HttpUrl r10) throws java.io.IOException {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "CONNECT "
            r0.append(r1)
            r1 = 1
            java.lang.String r10 = com.mbridge.msdk.thrid.okhttp.internal.Util.hostHeader(r10, r1)
            r0.append(r10)
            java.lang.String r10 = " HTTP/1.1"
            r0.append(r10)
            java.lang.String r10 = r0.toString()
        L1b:
            com.mbridge.msdk.thrid.okhttp.internal.http1.Http1Codec r0 = new com.mbridge.msdk.thrid.okhttp.internal.http1.Http1Codec
            com.mbridge.msdk.thrid.okio.BufferedSource r1 = r6.source
            com.mbridge.msdk.thrid.okio.BufferedSink r2 = r6.sink
            r3 = 0
            r0.<init>(r3, r3, r1, r2)
            com.mbridge.msdk.thrid.okio.BufferedSource r1 = r6.source
            com.mbridge.msdk.thrid.okio.Timeout r1 = r1.timeout()
            long r4 = (long) r7
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS
            r1.timeout(r4, r2)
            com.mbridge.msdk.thrid.okio.BufferedSink r1 = r6.sink
            com.mbridge.msdk.thrid.okio.Timeout r1 = r1.timeout()
            long r4 = (long) r8
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS
            r1.timeout(r4, r2)
            com.mbridge.msdk.thrid.okhttp.Headers r1 = r9.headers()
            r0.writeRequest(r1, r10)
            r0.finishRequest()
            r1 = 0
            com.mbridge.msdk.thrid.okhttp.Response$Builder r1 = r0.readResponseHeaders(r1)
            com.mbridge.msdk.thrid.okhttp.Response$Builder r9 = r1.request(r9)
            com.mbridge.msdk.thrid.okhttp.Response r9 = r9.build()
            long r1 = com.mbridge.msdk.thrid.okhttp.internal.http.HttpHeaders.contentLength(r9)
            r4 = -1
            int r4 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
            if (r4 != 0) goto L60
            r1 = 0
        L60:
            com.mbridge.msdk.thrid.okio.Source r0 = r0.newFixedLengthSource(r1)
            r1 = 2147483647(0x7fffffff, float:NaN)
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS
            com.mbridge.msdk.thrid.okhttp.internal.Util.skipAll(r0, r1, r2)
            r0.close()
            int r0 = r9.code()
            r1 = 200(0xc8, float:2.8E-43)
            if (r0 == r1) goto Lc2
            r1 = 407(0x197, float:5.7E-43)
            if (r0 != r1) goto La7
            com.mbridge.msdk.thrid.okhttp.Route r0 = r6.route
            com.mbridge.msdk.thrid.okhttp.Address r0 = r0.address()
            com.mbridge.msdk.thrid.okhttp.Authenticator r0 = r0.proxyAuthenticator()
            com.mbridge.msdk.thrid.okhttp.Route r1 = r6.route
            com.mbridge.msdk.thrid.okhttp.Request r0 = r0.authenticate(r1, r9)
            if (r0 == 0) goto L9f
            java.lang.String r1 = "Connection"
            java.lang.String r9 = r9.header(r1)
            java.lang.String r1 = "close"
            boolean r9 = r1.equalsIgnoreCase(r9)
            if (r9 == 0) goto L9c
            return r0
        L9c:
            r9 = r0
            goto L1b
        L9f:
            java.io.IOException r7 = new java.io.IOException
            java.lang.String r8 = "Failed to authenticate with proxy"
            r7.<init>(r8)
            throw r7
        La7:
            java.io.IOException r7 = new java.io.IOException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r10 = "Unexpected response code for CONNECT: "
            r8.append(r10)
            int r9 = r9.code()
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
        Lc2:
            com.mbridge.msdk.thrid.okio.BufferedSource r7 = r6.source
            com.mbridge.msdk.thrid.okio.Buffer r7 = r7.buffer()
            boolean r7 = r7.exhausted()
            if (r7 == 0) goto Ldb
            com.mbridge.msdk.thrid.okio.BufferedSink r7 = r6.sink
            com.mbridge.msdk.thrid.okio.Buffer r7 = r7.buffer()
            boolean r7 = r7.exhausted()
            if (r7 == 0) goto Ldb
            return r3
        Ldb:
            java.io.IOException r7 = new java.io.IOException
            java.lang.String r8 = "TLS tunnel buffered too many bytes!"
            r7.<init>(r8)
            throw r7
    }

    private com.mbridge.msdk.thrid.okhttp.Request createTunnelRequest() throws java.io.IOException {
            r4 = this;
            com.mbridge.msdk.thrid.okhttp.Request$Builder r0 = new com.mbridge.msdk.thrid.okhttp.Request$Builder
            r0.<init>()
            com.mbridge.msdk.thrid.okhttp.Route r1 = r4.route
            com.mbridge.msdk.thrid.okhttp.Address r1 = r1.address()
            com.mbridge.msdk.thrid.okhttp.HttpUrl r1 = r1.url()
            com.mbridge.msdk.thrid.okhttp.Request$Builder r0 = r0.url(r1)
            java.lang.String r1 = "CONNECT"
            r2 = 0
            com.mbridge.msdk.thrid.okhttp.Request$Builder r0 = r0.method(r1, r2)
            com.mbridge.msdk.thrid.okhttp.Route r1 = r4.route
            com.mbridge.msdk.thrid.okhttp.Address r1 = r1.address()
            com.mbridge.msdk.thrid.okhttp.HttpUrl r1 = r1.url()
            r2 = 1
            java.lang.String r1 = com.mbridge.msdk.thrid.okhttp.internal.Util.hostHeader(r1, r2)
            java.lang.String r2 = "Host"
            com.mbridge.msdk.thrid.okhttp.Request$Builder r0 = r0.header(r2, r1)
            java.lang.String r1 = "Proxy-Connection"
            java.lang.String r2 = "Keep-Alive"
            com.mbridge.msdk.thrid.okhttp.Request$Builder r0 = r0.header(r1, r2)
            java.lang.String r1 = com.mbridge.msdk.thrid.okhttp.internal.Version.userAgent()
            java.lang.String r2 = "User-Agent"
            com.mbridge.msdk.thrid.okhttp.Request$Builder r0 = r0.header(r2, r1)
            com.mbridge.msdk.thrid.okhttp.Request r0 = r0.build()
            com.mbridge.msdk.thrid.okhttp.Response$Builder r1 = new com.mbridge.msdk.thrid.okhttp.Response$Builder
            r1.<init>()
            com.mbridge.msdk.thrid.okhttp.Response$Builder r1 = r1.request(r0)
            com.mbridge.msdk.thrid.okhttp.Protocol r2 = com.mbridge.msdk.thrid.okhttp.Protocol.HTTP_1_1
            com.mbridge.msdk.thrid.okhttp.Response$Builder r1 = r1.protocol(r2)
            r2 = 407(0x197, float:5.7E-43)
            com.mbridge.msdk.thrid.okhttp.Response$Builder r1 = r1.code(r2)
            java.lang.String r2 = "Preemptive Authenticate"
            com.mbridge.msdk.thrid.okhttp.Response$Builder r1 = r1.message(r2)
            com.mbridge.msdk.thrid.okhttp.ResponseBody r2 = com.mbridge.msdk.thrid.okhttp.internal.Util.EMPTY_RESPONSE
            com.mbridge.msdk.thrid.okhttp.Response$Builder r1 = r1.body(r2)
            r2 = -1
            com.mbridge.msdk.thrid.okhttp.Response$Builder r1 = r1.sentRequestAtMillis(r2)
            com.mbridge.msdk.thrid.okhttp.Response$Builder r1 = r1.receivedResponseAtMillis(r2)
            java.lang.String r2 = "Proxy-Authenticate"
            java.lang.String r3 = "OkHttp-Preemptive"
            com.mbridge.msdk.thrid.okhttp.Response$Builder r1 = r1.header(r2, r3)
            com.mbridge.msdk.thrid.okhttp.Response r1 = r1.build()
            com.mbridge.msdk.thrid.okhttp.Route r2 = r4.route
            com.mbridge.msdk.thrid.okhttp.Address r2 = r2.address()
            com.mbridge.msdk.thrid.okhttp.Authenticator r2 = r2.proxyAuthenticator()
            com.mbridge.msdk.thrid.okhttp.Route r3 = r4.route
            com.mbridge.msdk.thrid.okhttp.Request r1 = r2.authenticate(r3, r1)
            if (r1 == 0) goto L8f
            r0 = r1
        L8f:
            return r0
    }

    private void establishProtocol(com.mbridge.msdk.thrid.okhttp.internal.connection.ConnectionSpecSelector r2, int r3, com.mbridge.msdk.thrid.okhttp.Call r4, com.mbridge.msdk.thrid.okhttp.EventListener r5) throws java.io.IOException {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.Route r0 = r1.route
            com.mbridge.msdk.thrid.okhttp.Address r0 = r0.address()
            javax.net.ssl.SSLSocketFactory r0 = r0.sslSocketFactory()
            if (r0 != 0) goto L33
            com.mbridge.msdk.thrid.okhttp.Route r2 = r1.route
            com.mbridge.msdk.thrid.okhttp.Address r2 = r2.address()
            java.util.List r2 = r2.protocols()
            com.mbridge.msdk.thrid.okhttp.Protocol r4 = com.mbridge.msdk.thrid.okhttp.Protocol.H2_PRIOR_KNOWLEDGE
            boolean r2 = r2.contains(r4)
            if (r2 == 0) goto L2a
            java.net.Socket r2 = r1.rawSocket
            r1.socket = r2
            com.mbridge.msdk.thrid.okhttp.Protocol r2 = com.mbridge.msdk.thrid.okhttp.Protocol.H2_PRIOR_KNOWLEDGE
            r1.protocol = r2
            r1.startHttp2(r3)
            return
        L2a:
            java.net.Socket r2 = r1.rawSocket
            r1.socket = r2
            com.mbridge.msdk.thrid.okhttp.Protocol r2 = com.mbridge.msdk.thrid.okhttp.Protocol.HTTP_1_1
            r1.protocol = r2
            return
        L33:
            r5.secureConnectStart(r4)
            r1.connectTls(r2)
            com.mbridge.msdk.thrid.okhttp.Handshake r2 = r1.handshake
            r5.secureConnectEnd(r4, r2)
            com.mbridge.msdk.thrid.okhttp.Protocol r2 = r1.protocol
            com.mbridge.msdk.thrid.okhttp.Protocol r4 = com.mbridge.msdk.thrid.okhttp.Protocol.HTTP_2
            if (r2 != r4) goto L47
            r1.startHttp2(r3)
        L47:
            return
    }

    private void startHttp2(int r6) throws java.io.IOException {
            r5 = this;
            java.net.Socket r0 = r5.socket
            r1 = 0
            r0.setSoTimeout(r1)
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection$Builder r0 = new com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection$Builder
            r1 = 1
            r0.<init>(r1)
            java.net.Socket r1 = r5.socket
            com.mbridge.msdk.thrid.okhttp.Route r2 = r5.route
            com.mbridge.msdk.thrid.okhttp.Address r2 = r2.address()
            com.mbridge.msdk.thrid.okhttp.HttpUrl r2 = r2.url()
            java.lang.String r2 = r2.host()
            com.mbridge.msdk.thrid.okio.BufferedSource r3 = r5.source
            com.mbridge.msdk.thrid.okio.BufferedSink r4 = r5.sink
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection$Builder r0 = r0.socket(r1, r2, r3, r4)
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection$Builder r0 = r0.listener(r5)
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection$Builder r6 = r0.pingIntervalMillis(r6)
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r6 = r6.build()
            r5.http2Connection = r6
            r6.start()
            return
    }

    public static com.mbridge.msdk.thrid.okhttp.internal.connection.RealConnection testConnection(com.mbridge.msdk.thrid.okhttp.ConnectionPool r1, com.mbridge.msdk.thrid.okhttp.Route r2, java.net.Socket r3, long r4) {
            com.mbridge.msdk.thrid.okhttp.internal.connection.RealConnection r0 = new com.mbridge.msdk.thrid.okhttp.internal.connection.RealConnection
            r0.<init>(r1, r2)
            r0.socket = r3
            r0.idleAtNanos = r4
            return r0
    }

    public void cancel() {
            r1 = this;
            java.net.Socket r0 = r1.rawSocket
            com.mbridge.msdk.thrid.okhttp.internal.Util.closeQuietly(r0)
            return
    }

    public void connect(int r17, int r18, int r19, int r20, boolean r21, com.mbridge.msdk.thrid.okhttp.Call r22, com.mbridge.msdk.thrid.okhttp.EventListener r23) {
            r16 = this;
            r7 = r16
            r8 = r22
            r9 = r23
            com.mbridge.msdk.thrid.okhttp.Protocol r0 = r7.protocol
            if (r0 != 0) goto L150
            com.mbridge.msdk.thrid.okhttp.Route r0 = r7.route
            com.mbridge.msdk.thrid.okhttp.Address r0 = r0.address()
            java.util.List r0 = r0.connectionSpecs()
            com.mbridge.msdk.thrid.okhttp.internal.connection.ConnectionSpecSelector r10 = new com.mbridge.msdk.thrid.okhttp.internal.connection.ConnectionSpecSelector
            r10.<init>(r0)
            com.mbridge.msdk.thrid.okhttp.Route r1 = r7.route
            com.mbridge.msdk.thrid.okhttp.Address r1 = r1.address()
            javax.net.ssl.SSLSocketFactory r1 = r1.sslSocketFactory()
            if (r1 != 0) goto L74
            com.mbridge.msdk.thrid.okhttp.ConnectionSpec r1 = com.mbridge.msdk.thrid.okhttp.ConnectionSpec.CLEARTEXT
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L67
            com.mbridge.msdk.thrid.okhttp.Route r0 = r7.route
            com.mbridge.msdk.thrid.okhttp.Address r0 = r0.address()
            com.mbridge.msdk.thrid.okhttp.HttpUrl r0 = r0.url()
            java.lang.String r0 = r0.host()
            com.mbridge.msdk.thrid.okhttp.internal.platform.Platform r1 = com.mbridge.msdk.thrid.okhttp.internal.platform.Platform.get()
            boolean r1 = r1.isCleartextTrafficPermitted(r0)
            if (r1 == 0) goto L46
            goto L86
        L46:
            com.mbridge.msdk.thrid.okhttp.internal.connection.RouteException r1 = new com.mbridge.msdk.thrid.okhttp.internal.connection.RouteException
            java.net.UnknownServiceException r2 = new java.net.UnknownServiceException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "CLEARTEXT communication to "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = " not permitted by network security policy"
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.<init>(r0)
            r1.<init>(r2)
            throw r1
        L67:
            com.mbridge.msdk.thrid.okhttp.internal.connection.RouteException r0 = new com.mbridge.msdk.thrid.okhttp.internal.connection.RouteException
            java.net.UnknownServiceException r1 = new java.net.UnknownServiceException
            java.lang.String r2 = "CLEARTEXT communication not enabled for client"
            r1.<init>(r2)
            r0.<init>(r1)
            throw r0
        L74:
            com.mbridge.msdk.thrid.okhttp.Route r0 = r7.route
            com.mbridge.msdk.thrid.okhttp.Address r0 = r0.address()
            java.util.List r0 = r0.protocols()
            com.mbridge.msdk.thrid.okhttp.Protocol r1 = com.mbridge.msdk.thrid.okhttp.Protocol.H2_PRIOR_KNOWLEDGE
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto L143
        L86:
            r11 = 0
            r12 = r11
        L88:
            com.mbridge.msdk.thrid.okhttp.Route r0 = r7.route     // Catch: java.io.IOException -> Lf9
            boolean r0 = r0.requiresTunnel()     // Catch: java.io.IOException -> Lf9
            if (r0 == 0) goto La9
            r1 = r16
            r2 = r17
            r3 = r18
            r4 = r19
            r5 = r22
            r6 = r23
            r1.connectTunnel(r2, r3, r4, r5, r6)     // Catch: java.io.IOException -> Lf9
            java.net.Socket r0 = r7.rawSocket     // Catch: java.io.IOException -> Lf9
            if (r0 != 0) goto La4
            goto Lc6
        La4:
            r13 = r17
            r14 = r18
            goto Lb0
        La9:
            r13 = r17
            r14 = r18
            r7.connectSocket(r13, r14, r8, r9)     // Catch: java.io.IOException -> Lf7
        Lb0:
            r15 = r20
            r7.establishProtocol(r10, r15, r8, r9)     // Catch: java.io.IOException -> Lf5
            com.mbridge.msdk.thrid.okhttp.Route r0 = r7.route     // Catch: java.io.IOException -> Lf5
            java.net.InetSocketAddress r0 = r0.socketAddress()     // Catch: java.io.IOException -> Lf5
            com.mbridge.msdk.thrid.okhttp.Route r1 = r7.route     // Catch: java.io.IOException -> Lf5
            java.net.Proxy r1 = r1.proxy()     // Catch: java.io.IOException -> Lf5
            com.mbridge.msdk.thrid.okhttp.Protocol r2 = r7.protocol     // Catch: java.io.IOException -> Lf5
            r9.connectEnd(r8, r0, r1, r2)     // Catch: java.io.IOException -> Lf5
        Lc6:
            com.mbridge.msdk.thrid.okhttp.Route r0 = r7.route
            boolean r0 = r0.requiresTunnel()
            if (r0 == 0) goto Le0
            java.net.Socket r0 = r7.rawSocket
            if (r0 == 0) goto Ld3
            goto Le0
        Ld3:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.String r1 = "Too many tunnel connections attempted: 21"
            r0.<init>(r1)
            com.mbridge.msdk.thrid.okhttp.internal.connection.RouteException r1 = new com.mbridge.msdk.thrid.okhttp.internal.connection.RouteException
            r1.<init>(r0)
            throw r1
        Le0:
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r0 = r7.http2Connection
            if (r0 == 0) goto Lf4
            com.mbridge.msdk.thrid.okhttp.ConnectionPool r1 = r7.connectionPool
            monitor-enter(r1)
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r0 = r7.http2Connection     // Catch: java.lang.Throwable -> Lf1
            int r0 = r0.maxConcurrentStreams()     // Catch: java.lang.Throwable -> Lf1
            r7.allocationLimit = r0     // Catch: java.lang.Throwable -> Lf1
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lf1
            goto Lf4
        Lf1:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lf1
            throw r0
        Lf4:
            return
        Lf5:
            r0 = move-exception
            goto L100
        Lf7:
            r0 = move-exception
            goto Lfe
        Lf9:
            r0 = move-exception
            r13 = r17
            r14 = r18
        Lfe:
            r15 = r20
        L100:
            java.net.Socket r1 = r7.socket
            com.mbridge.msdk.thrid.okhttp.internal.Util.closeQuietly(r1)
            java.net.Socket r1 = r7.rawSocket
            com.mbridge.msdk.thrid.okhttp.internal.Util.closeQuietly(r1)
            r7.socket = r11
            r7.rawSocket = r11
            r7.source = r11
            r7.sink = r11
            r7.handshake = r11
            r7.protocol = r11
            r7.http2Connection = r11
            com.mbridge.msdk.thrid.okhttp.Route r1 = r7.route
            java.net.InetSocketAddress r3 = r1.socketAddress()
            com.mbridge.msdk.thrid.okhttp.Route r1 = r7.route
            java.net.Proxy r4 = r1.proxy()
            r5 = 0
            r1 = r23
            r2 = r22
            r6 = r0
            r1.connectFailed(r2, r3, r4, r5, r6)
            if (r12 != 0) goto L135
            com.mbridge.msdk.thrid.okhttp.internal.connection.RouteException r12 = new com.mbridge.msdk.thrid.okhttp.internal.connection.RouteException
            r12.<init>(r0)
            goto L138
        L135:
            r12.addConnectException(r0)
        L138:
            if (r21 == 0) goto L142
            boolean r0 = r10.connectionFailed(r0)
            if (r0 == 0) goto L142
            goto L88
        L142:
            throw r12
        L143:
            com.mbridge.msdk.thrid.okhttp.internal.connection.RouteException r0 = new com.mbridge.msdk.thrid.okhttp.internal.connection.RouteException
            java.net.UnknownServiceException r1 = new java.net.UnknownServiceException
            java.lang.String r2 = "H2_PRIOR_KNOWLEDGE cannot be used with HTTPS"
            r1.<init>(r2)
            r0.<init>(r1)
            throw r0
        L150:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "already connected"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public com.mbridge.msdk.thrid.okhttp.Handshake handshake() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.Handshake r0 = r1.handshake
            return r0
    }

    public boolean isEligible(com.mbridge.msdk.thrid.okhttp.Address r5, @javax.annotation.Nullable com.mbridge.msdk.thrid.okhttp.Route r6) {
            r4 = this;
            java.util.List<java.lang.ref.Reference<com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation>> r0 = r4.allocations
            int r0 = r0.size()
            int r1 = r4.allocationLimit
            r2 = 0
            if (r0 >= r1) goto La5
            boolean r0 = r4.noNewStreams
            if (r0 == 0) goto L11
            goto La5
        L11:
            com.mbridge.msdk.thrid.okhttp.internal.Internal r0 = com.mbridge.msdk.thrid.okhttp.internal.Internal.instance
            com.mbridge.msdk.thrid.okhttp.Route r1 = r4.route
            com.mbridge.msdk.thrid.okhttp.Address r1 = r1.address()
            boolean r0 = r0.equalsNonHost(r1, r5)
            if (r0 != 0) goto L20
            return r2
        L20:
            com.mbridge.msdk.thrid.okhttp.HttpUrl r0 = r5.url()
            java.lang.String r0 = r0.host()
            com.mbridge.msdk.thrid.okhttp.Route r1 = r4.route()
            com.mbridge.msdk.thrid.okhttp.Address r1 = r1.address()
            com.mbridge.msdk.thrid.okhttp.HttpUrl r1 = r1.url()
            java.lang.String r1 = r1.host()
            boolean r0 = r0.equals(r1)
            r1 = 1
            if (r0 == 0) goto L40
            return r1
        L40:
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r0 = r4.http2Connection
            if (r0 != 0) goto L45
            return r2
        L45:
            if (r6 != 0) goto L48
            return r2
        L48:
            java.net.Proxy r0 = r6.proxy()
            java.net.Proxy$Type r0 = r0.type()
            java.net.Proxy$Type r3 = java.net.Proxy.Type.DIRECT
            if (r0 == r3) goto L55
            return r2
        L55:
            com.mbridge.msdk.thrid.okhttp.Route r0 = r4.route
            java.net.Proxy r0 = r0.proxy()
            java.net.Proxy$Type r0 = r0.type()
            java.net.Proxy$Type r3 = java.net.Proxy.Type.DIRECT
            if (r0 == r3) goto L64
            return r2
        L64:
            com.mbridge.msdk.thrid.okhttp.Route r0 = r4.route
            java.net.InetSocketAddress r0 = r0.socketAddress()
            java.net.InetSocketAddress r3 = r6.socketAddress()
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto L75
            return r2
        L75:
            com.mbridge.msdk.thrid.okhttp.Address r6 = r6.address()
            javax.net.ssl.HostnameVerifier r6 = r6.hostnameVerifier()
            com.mbridge.msdk.thrid.okhttp.internal.tls.OkHostnameVerifier r0 = com.mbridge.msdk.thrid.okhttp.internal.tls.OkHostnameVerifier.INSTANCE
            if (r6 == r0) goto L82
            return r2
        L82:
            com.mbridge.msdk.thrid.okhttp.HttpUrl r6 = r5.url()
            boolean r6 = r4.supportsUrl(r6)
            if (r6 != 0) goto L8d
            return r2
        L8d:
            com.mbridge.msdk.thrid.okhttp.CertificatePinner r6 = r5.certificatePinner()     // Catch: javax.net.ssl.SSLPeerUnverifiedException -> La5
            com.mbridge.msdk.thrid.okhttp.HttpUrl r5 = r5.url()     // Catch: javax.net.ssl.SSLPeerUnverifiedException -> La5
            java.lang.String r5 = r5.host()     // Catch: javax.net.ssl.SSLPeerUnverifiedException -> La5
            com.mbridge.msdk.thrid.okhttp.Handshake r0 = r4.handshake()     // Catch: javax.net.ssl.SSLPeerUnverifiedException -> La5
            java.util.List r0 = r0.peerCertificates()     // Catch: javax.net.ssl.SSLPeerUnverifiedException -> La5
            r6.check(r5, r0)     // Catch: javax.net.ssl.SSLPeerUnverifiedException -> La5
            return r1
        La5:
            return r2
    }

    public boolean isHealthy(boolean r5) {
            r4 = this;
            java.net.Socket r0 = r4.socket
            boolean r0 = r0.isClosed()
            r1 = 0
            if (r0 != 0) goto L52
            java.net.Socket r0 = r4.socket
            boolean r0 = r0.isInputShutdown()
            if (r0 != 0) goto L52
            java.net.Socket r0 = r4.socket
            boolean r0 = r0.isOutputShutdown()
            if (r0 == 0) goto L1a
            goto L52
        L1a:
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r0 = r4.http2Connection
            if (r0 == 0) goto L27
            long r1 = java.lang.System.nanoTime()
            boolean r5 = r0.isHealthy(r1)
            return r5
        L27:
            r0 = 1
            if (r5 == 0) goto L51
            java.net.Socket r5 = r4.socket     // Catch: java.io.IOException -> L50 java.net.SocketTimeoutException -> L51
            int r5 = r5.getSoTimeout()     // Catch: java.io.IOException -> L50 java.net.SocketTimeoutException -> L51
            java.net.Socket r2 = r4.socket     // Catch: java.lang.Throwable -> L49
            r2.setSoTimeout(r0)     // Catch: java.lang.Throwable -> L49
            com.mbridge.msdk.thrid.okio.BufferedSource r2 = r4.source     // Catch: java.lang.Throwable -> L49
            boolean r2 = r2.exhausted()     // Catch: java.lang.Throwable -> L49
            if (r2 == 0) goto L43
            java.net.Socket r2 = r4.socket     // Catch: java.io.IOException -> L50 java.net.SocketTimeoutException -> L51
            r2.setSoTimeout(r5)     // Catch: java.io.IOException -> L50 java.net.SocketTimeoutException -> L51
            return r1
        L43:
            java.net.Socket r2 = r4.socket     // Catch: java.io.IOException -> L50 java.net.SocketTimeoutException -> L51
            r2.setSoTimeout(r5)     // Catch: java.io.IOException -> L50 java.net.SocketTimeoutException -> L51
            return r0
        L49:
            r2 = move-exception
            java.net.Socket r3 = r4.socket     // Catch: java.io.IOException -> L50 java.net.SocketTimeoutException -> L51
            r3.setSoTimeout(r5)     // Catch: java.io.IOException -> L50 java.net.SocketTimeoutException -> L51
            throw r2     // Catch: java.io.IOException -> L50 java.net.SocketTimeoutException -> L51
        L50:
            return r1
        L51:
            return r0
        L52:
            return r1
    }

    public boolean isMultiplexed() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r0 = r1.http2Connection
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public com.mbridge.msdk.thrid.okhttp.internal.http.HttpCodec newCodec(com.mbridge.msdk.thrid.okhttp.OkHttpClient r5, com.mbridge.msdk.thrid.okhttp.Interceptor.Chain r6, com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation r7) throws java.net.SocketException {
            r4 = this;
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r0 = r4.http2Connection
            if (r0 == 0) goto Lc
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Codec r0 = new com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Codec
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r1 = r4.http2Connection
            r0.<init>(r5, r6, r7, r1)
            return r0
        Lc:
            java.net.Socket r0 = r4.socket
            int r1 = r6.readTimeoutMillis()
            r0.setSoTimeout(r1)
            com.mbridge.msdk.thrid.okio.BufferedSource r0 = r4.source
            com.mbridge.msdk.thrid.okio.Timeout r0 = r0.timeout()
            int r1 = r6.readTimeoutMillis()
            long r1 = (long) r1
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.MILLISECONDS
            r0.timeout(r1, r3)
            com.mbridge.msdk.thrid.okio.BufferedSink r0 = r4.sink
            com.mbridge.msdk.thrid.okio.Timeout r0 = r0.timeout()
            int r6 = r6.writeTimeoutMillis()
            long r1 = (long) r6
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.MILLISECONDS
            r0.timeout(r1, r6)
            com.mbridge.msdk.thrid.okhttp.internal.http1.Http1Codec r6 = new com.mbridge.msdk.thrid.okhttp.internal.http1.Http1Codec
            com.mbridge.msdk.thrid.okio.BufferedSource r0 = r4.source
            com.mbridge.msdk.thrid.okio.BufferedSink r1 = r4.sink
            r6.<init>(r5, r7, r0, r1)
            return r6
    }

    public com.mbridge.msdk.thrid.okhttp.internal.ws.RealWebSocket.Streams newWebSocketStreams(com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation r8) {
            r7 = this;
            com.mbridge.msdk.thrid.okhttp.internal.connection.RealConnection$1 r6 = new com.mbridge.msdk.thrid.okhttp.internal.connection.RealConnection$1
            com.mbridge.msdk.thrid.okio.BufferedSource r3 = r7.source
            com.mbridge.msdk.thrid.okio.BufferedSink r4 = r7.sink
            r2 = 1
            r0 = r6
            r1 = r7
            r5 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            return r6
    }

    @Override
    public void onSettings(com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r2) {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.ConnectionPool r0 = r1.connectionPool
            monitor-enter(r0)
            int r2 = r2.maxConcurrentStreams()     // Catch: java.lang.Throwable -> Lb
            r1.allocationLimit = r2     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            return
        Lb:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            throw r2
    }

    @Override
    public void onStream(com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r2) throws java.io.IOException {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r0 = com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.REFUSED_STREAM
            r2.close(r0)
            return
    }

    @Override
    public com.mbridge.msdk.thrid.okhttp.Protocol protocol() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.Protocol r0 = r1.protocol
            return r0
    }

    @Override
    public com.mbridge.msdk.thrid.okhttp.Route route() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.Route r0 = r1.route
            return r0
    }

    @Override
    public java.net.Socket socket() {
            r1 = this;
            java.net.Socket r0 = r1.socket
            return r0
    }

    public boolean supportsUrl(com.mbridge.msdk.thrid.okhttp.HttpUrl r5) {
            r4 = this;
            int r0 = r5.port()
            com.mbridge.msdk.thrid.okhttp.Route r1 = r4.route
            com.mbridge.msdk.thrid.okhttp.Address r1 = r1.address()
            com.mbridge.msdk.thrid.okhttp.HttpUrl r1 = r1.url()
            int r1 = r1.port()
            r2 = 0
            if (r0 == r1) goto L16
            return r2
        L16:
            java.lang.String r0 = r5.host()
            com.mbridge.msdk.thrid.okhttp.Route r1 = r4.route
            com.mbridge.msdk.thrid.okhttp.Address r1 = r1.address()
            com.mbridge.msdk.thrid.okhttp.HttpUrl r1 = r1.url()
            java.lang.String r1 = r1.host()
            boolean r0 = r0.equals(r1)
            r1 = 1
            if (r0 != 0) goto L4d
            com.mbridge.msdk.thrid.okhttp.Handshake r0 = r4.handshake
            if (r0 == 0) goto L4c
            com.mbridge.msdk.thrid.okhttp.internal.tls.OkHostnameVerifier r0 = com.mbridge.msdk.thrid.okhttp.internal.tls.OkHostnameVerifier.INSTANCE
            java.lang.String r5 = r5.host()
            com.mbridge.msdk.thrid.okhttp.Handshake r3 = r4.handshake
            java.util.List r3 = r3.peerCertificates()
            java.lang.Object r3 = r3.get(r2)
            java.security.cert.X509Certificate r3 = (java.security.cert.X509Certificate) r3
            boolean r5 = r0.verify(r5, r3)
            if (r5 == 0) goto L4c
            r2 = r1
        L4c:
            return r2
        L4d:
            return r1
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Connection{"
            r0.append(r1)
            com.mbridge.msdk.thrid.okhttp.Route r1 = r2.route
            com.mbridge.msdk.thrid.okhttp.Address r1 = r1.address()
            com.mbridge.msdk.thrid.okhttp.HttpUrl r1 = r1.url()
            java.lang.String r1 = r1.host()
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
            com.mbridge.msdk.thrid.okhttp.Route r1 = r2.route
            com.mbridge.msdk.thrid.okhttp.Address r1 = r1.address()
            com.mbridge.msdk.thrid.okhttp.HttpUrl r1 = r1.url()
            int r1 = r1.port()
            r0.append(r1)
            java.lang.String r1 = ", proxy="
            r0.append(r1)
            com.mbridge.msdk.thrid.okhttp.Route r1 = r2.route
            java.net.Proxy r1 = r1.proxy()
            r0.append(r1)
            java.lang.String r1 = " hostAddress="
            r0.append(r1)
            com.mbridge.msdk.thrid.okhttp.Route r1 = r2.route
            java.net.InetSocketAddress r1 = r1.socketAddress()
            r0.append(r1)
            java.lang.String r1 = " cipherSuite="
            r0.append(r1)
            com.mbridge.msdk.thrid.okhttp.Handshake r1 = r2.handshake
            if (r1 == 0) goto L5b
            com.mbridge.msdk.thrid.okhttp.CipherSuite r1 = r1.cipherSuite()
            goto L5d
        L5b:
            java.lang.String r1 = "none"
        L5d:
            r0.append(r1)
            java.lang.String r1 = " protocol="
            r0.append(r1)
            com.mbridge.msdk.thrid.okhttp.Protocol r1 = r2.protocol
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
