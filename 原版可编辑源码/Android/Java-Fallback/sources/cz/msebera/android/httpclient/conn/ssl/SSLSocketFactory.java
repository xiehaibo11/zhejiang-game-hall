package cz.msebera.android.httpclient.conn.ssl;

@cz.msebera.android.httpclient.annotation.ThreadSafe
@java.lang.Deprecated
public class SSLSocketFactory implements cz.msebera.android.httpclient.conn.socket.LayeredConnectionSocketFactory, cz.msebera.android.httpclient.conn.scheme.SchemeLayeredSocketFactory, cz.msebera.android.httpclient.conn.scheme.LayeredSchemeSocketFactory, cz.msebera.android.httpclient.conn.scheme.LayeredSocketFactory {
    public static final cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier ALLOW_ALL_HOSTNAME_VERIFIER = null;
    public static final cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier BROWSER_COMPATIBLE_HOSTNAME_VERIFIER = null;
    public static final java.lang.String SSL = "SSL";
    public static final java.lang.String SSLV2 = "SSLv2";
    public static final cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier STRICT_HOSTNAME_VERIFIER = null;
    public static final java.lang.String TLS = "TLS";
    private volatile cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier hostnameVerifier;
    private final cz.msebera.android.httpclient.conn.scheme.HostNameResolver nameResolver;
    private final javax.net.ssl.SSLSocketFactory socketfactory;
    private final java.lang.String[] supportedCipherSuites;
    private final java.lang.String[] supportedProtocols;

    static {
            cz.msebera.android.httpclient.conn.ssl.AllowAllHostnameVerifier r0 = new cz.msebera.android.httpclient.conn.ssl.AllowAllHostnameVerifier
            r0.<init>()
            cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory.ALLOW_ALL_HOSTNAME_VERIFIER = r0
            cz.msebera.android.httpclient.conn.ssl.BrowserCompatHostnameVerifier r0 = new cz.msebera.android.httpclient.conn.ssl.BrowserCompatHostnameVerifier
            r0.<init>()
            cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory.BROWSER_COMPATIBLE_HOSTNAME_VERIFIER = r0
            cz.msebera.android.httpclient.conn.ssl.StrictHostnameVerifier r0 = new cz.msebera.android.httpclient.conn.ssl.StrictHostnameVerifier
            r0.<init>()
            cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory.STRICT_HOSTNAME_VERIFIER = r0
            return
    }

    public SSLSocketFactory(cz.msebera.android.httpclient.conn.ssl.TrustStrategy r3) throws java.security.NoSuchAlgorithmException, java.security.KeyManagementException, java.security.KeyStoreException, java.security.UnrecoverableKeyException {
            r2 = this;
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r0 = cz.msebera.android.httpclient.conn.ssl.SSLContexts.custom()
            r1 = 0
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r3 = r0.loadTrustMaterial(r1, r3)
            javax.net.ssl.SSLContext r3 = r3.build()
            cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r0 = cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory.BROWSER_COMPATIBLE_HOSTNAME_VERIFIER
            r2.<init>(r3, r0)
            return
    }

    public SSLSocketFactory(cz.msebera.android.httpclient.conn.ssl.TrustStrategy r3, cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r4) throws java.security.NoSuchAlgorithmException, java.security.KeyManagementException, java.security.KeyStoreException, java.security.UnrecoverableKeyException {
            r2 = this;
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r0 = cz.msebera.android.httpclient.conn.ssl.SSLContexts.custom()
            r1 = 0
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r3 = r0.loadTrustMaterial(r1, r3)
            javax.net.ssl.SSLContext r3 = r3.build()
            r2.<init>(r3, r4)
            return
    }

    public SSLSocketFactory(java.lang.String r2, java.security.KeyStore r3, java.lang.String r4, java.security.KeyStore r5, java.security.SecureRandom r6, cz.msebera.android.httpclient.conn.scheme.HostNameResolver r7) throws java.security.NoSuchAlgorithmException, java.security.KeyManagementException, java.security.KeyStoreException, java.security.UnrecoverableKeyException {
            r1 = this;
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r0 = cz.msebera.android.httpclient.conn.ssl.SSLContexts.custom()
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r2 = r0.useProtocol(r2)
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r2 = r2.setSecureRandom(r6)
            if (r4 == 0) goto L13
            char[] r4 = r4.toCharArray()
            goto L14
        L13:
            r4 = 0
        L14:
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r2 = r2.loadKeyMaterial(r3, r4)
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r2 = r2.loadTrustMaterial(r5)
            javax.net.ssl.SSLContext r2 = r2.build()
            r1.<init>(r2, r7)
            return
    }

    public SSLSocketFactory(java.lang.String r2, java.security.KeyStore r3, java.lang.String r4, java.security.KeyStore r5, java.security.SecureRandom r6, cz.msebera.android.httpclient.conn.ssl.TrustStrategy r7, cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r8) throws java.security.NoSuchAlgorithmException, java.security.KeyManagementException, java.security.KeyStoreException, java.security.UnrecoverableKeyException {
            r1 = this;
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r0 = cz.msebera.android.httpclient.conn.ssl.SSLContexts.custom()
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r2 = r0.useProtocol(r2)
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r2 = r2.setSecureRandom(r6)
            if (r4 == 0) goto L13
            char[] r4 = r4.toCharArray()
            goto L14
        L13:
            r4 = 0
        L14:
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r2 = r2.loadKeyMaterial(r3, r4)
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r2 = r2.loadTrustMaterial(r5, r7)
            javax.net.ssl.SSLContext r2 = r2.build()
            r1.<init>(r2, r8)
            return
    }

    public SSLSocketFactory(java.lang.String r2, java.security.KeyStore r3, java.lang.String r4, java.security.KeyStore r5, java.security.SecureRandom r6, cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r7) throws java.security.NoSuchAlgorithmException, java.security.KeyManagementException, java.security.KeyStoreException, java.security.UnrecoverableKeyException {
            r1 = this;
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r0 = cz.msebera.android.httpclient.conn.ssl.SSLContexts.custom()
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r2 = r0.useProtocol(r2)
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r2 = r2.setSecureRandom(r6)
            if (r4 == 0) goto L13
            char[] r4 = r4.toCharArray()
            goto L14
        L13:
            r4 = 0
        L14:
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r2 = r2.loadKeyMaterial(r3, r4)
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r2 = r2.loadTrustMaterial(r5)
            javax.net.ssl.SSLContext r2 = r2.build()
            r1.<init>(r2, r7)
            return
    }

    public SSLSocketFactory(java.security.KeyStore r2) throws java.security.NoSuchAlgorithmException, java.security.KeyManagementException, java.security.KeyStoreException, java.security.UnrecoverableKeyException {
            r1 = this;
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r0 = cz.msebera.android.httpclient.conn.ssl.SSLContexts.custom()
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r2 = r0.loadTrustMaterial(r2)
            javax.net.ssl.SSLContext r2 = r2.build()
            cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r0 = cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory.BROWSER_COMPATIBLE_HOSTNAME_VERIFIER
            r1.<init>(r2, r0)
            return
    }

    public SSLSocketFactory(java.security.KeyStore r2, java.lang.String r3) throws java.security.NoSuchAlgorithmException, java.security.KeyManagementException, java.security.KeyStoreException, java.security.UnrecoverableKeyException {
            r1 = this;
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r0 = cz.msebera.android.httpclient.conn.ssl.SSLContexts.custom()
            if (r3 == 0) goto Lb
            char[] r3 = r3.toCharArray()
            goto Lc
        Lb:
            r3 = 0
        Lc:
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r2 = r0.loadKeyMaterial(r2, r3)
            javax.net.ssl.SSLContext r2 = r2.build()
            cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r3 = cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory.BROWSER_COMPATIBLE_HOSTNAME_VERIFIER
            r1.<init>(r2, r3)
            return
    }

    public SSLSocketFactory(java.security.KeyStore r2, java.lang.String r3, java.security.KeyStore r4) throws java.security.NoSuchAlgorithmException, java.security.KeyManagementException, java.security.KeyStoreException, java.security.UnrecoverableKeyException {
            r1 = this;
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r0 = cz.msebera.android.httpclient.conn.ssl.SSLContexts.custom()
            if (r3 == 0) goto Lb
            char[] r3 = r3.toCharArray()
            goto Lc
        Lb:
            r3 = 0
        Lc:
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r2 = r0.loadKeyMaterial(r2, r3)
            cz.msebera.android.httpclient.conn.ssl.SSLContextBuilder r2 = r2.loadTrustMaterial(r4)
            javax.net.ssl.SSLContext r2 = r2.build()
            cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r3 = cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory.BROWSER_COMPATIBLE_HOSTNAME_VERIFIER
            r1.<init>(r2, r3)
            return
    }

    public SSLSocketFactory(javax.net.ssl.SSLContext r2) {
            r1 = this;
            cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r0 = cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory.BROWSER_COMPATIBLE_HOSTNAME_VERIFIER
            r1.<init>(r2, r0)
            return
    }

    public SSLSocketFactory(javax.net.ssl.SSLContext r1, cz.msebera.android.httpclient.conn.scheme.HostNameResolver r2) {
            r0 = this;
            r0.<init>()
            javax.net.ssl.SSLSocketFactory r1 = r1.getSocketFactory()
            r0.socketfactory = r1
            cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r1 = cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory.BROWSER_COMPATIBLE_HOSTNAME_VERIFIER
            r0.hostnameVerifier = r1
            r0.nameResolver = r2
            r1 = 0
            r0.supportedProtocols = r1
            r0.supportedCipherSuites = r1
            return
    }

    public SSLSocketFactory(javax.net.ssl.SSLContext r2, cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r3) {
            r1 = this;
            java.lang.String r0 = "SSL context"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            javax.net.ssl.SSLContext r2 = (javax.net.ssl.SSLContext) r2
            javax.net.ssl.SSLSocketFactory r2 = r2.getSocketFactory()
            r0 = 0
            r1.<init>(r2, r0, r0, r3)
            return
    }

    public SSLSocketFactory(javax.net.ssl.SSLContext r2, java.lang.String[] r3, java.lang.String[] r4, cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r5) {
            r1 = this;
            java.lang.String r0 = "SSL context"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            javax.net.ssl.SSLContext r2 = (javax.net.ssl.SSLContext) r2
            javax.net.ssl.SSLSocketFactory r2 = r2.getSocketFactory()
            r1.<init>(r2, r3, r4, r5)
            return
    }

    public SSLSocketFactory(javax.net.ssl.SSLSocketFactory r2, cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0, r0, r3)
            return
    }

    public SSLSocketFactory(javax.net.ssl.SSLSocketFactory r2, java.lang.String[] r3, java.lang.String[] r4, cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r5) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "SSL socket factory"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            javax.net.ssl.SSLSocketFactory r2 = (javax.net.ssl.SSLSocketFactory) r2
            r1.socketfactory = r2
            r1.supportedProtocols = r3
            r1.supportedCipherSuites = r4
            if (r5 == 0) goto L14
            goto L16
        L14:
            cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r5 = cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory.BROWSER_COMPATIBLE_HOSTNAME_VERIFIER
        L16:
            r1.hostnameVerifier = r5
            r2 = 0
            r1.nameResolver = r2
            return
    }

    public static cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory getSocketFactory() throws cz.msebera.android.httpclient.conn.ssl.SSLInitializationException {
            cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory r0 = new cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory
            javax.net.ssl.SSLContext r1 = cz.msebera.android.httpclient.conn.ssl.SSLContexts.createDefault()
            cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r2 = cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory.BROWSER_COMPATIBLE_HOSTNAME_VERIFIER
            r0.<init>(r1, r2)
            return r0
    }

    public static cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory getSystemSocketFactory() throws cz.msebera.android.httpclient.conn.ssl.SSLInitializationException {
            cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory r0 = new cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory
            javax.net.SocketFactory r1 = javax.net.ssl.SSLSocketFactory.getDefault()
            javax.net.ssl.SSLSocketFactory r1 = (javax.net.ssl.SSLSocketFactory) r1
            java.lang.String r2 = "https.protocols"
            java.lang.String r2 = java.lang.System.getProperty(r2)
            java.lang.String[] r2 = split(r2)
            java.lang.String r3 = "https.cipherSuites"
            java.lang.String r3 = java.lang.System.getProperty(r3)
            java.lang.String[] r3 = split(r3)
            cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r4 = cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory.BROWSER_COMPATIBLE_HOSTNAME_VERIFIER
            r0.<init>(r1, r2, r3, r4)
            return r0
    }

    private void internalPrepareSocket(javax.net.ssl.SSLSocket r2) throws java.io.IOException {
            r1 = this;
            java.lang.String[] r0 = r1.supportedProtocols
            if (r0 == 0) goto L7
            r2.setEnabledProtocols(r0)
        L7:
            java.lang.String[] r0 = r1.supportedCipherSuites
            if (r0 == 0) goto Le
            r2.setEnabledCipherSuites(r0)
        Le:
            r1.prepareSocket(r2)
            return
    }

    private static java.lang.String[] split(java.lang.String r1) {
            boolean r0 = cz.msebera.android.httpclient.util.TextUtils.isBlank(r1)
            if (r0 == 0) goto L8
            r1 = 0
            return r1
        L8:
            java.lang.String r0 = " *, *"
            java.lang.String[] r1 = r1.split(r0)
            return r1
    }

    private void verifyHostname(javax.net.ssl.SSLSocket r2, java.lang.String r3) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r0 = r1.hostnameVerifier     // Catch: java.io.IOException -> L6
            r0.verify(r3, r2)     // Catch: java.io.IOException -> L6
            return
        L6:
            r3 = move-exception
            r2.close()     // Catch: java.lang.Exception -> La
        La:
            throw r3
    }

    @Override
    public java.net.Socket connectSocket(int r2, java.net.Socket r3, cz.msebera.android.httpclient.HttpHost r4, java.net.InetSocketAddress r5, java.net.InetSocketAddress r6, cz.msebera.android.httpclient.protocol.HttpContext r7) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "HTTP host"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.lang.String r0 = "Remote address"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            if (r3 == 0) goto Ld
            goto L11
        Ld:
            java.net.Socket r3 = r1.createSocket(r7)
        L11:
            if (r6 == 0) goto L16
            r3.bind(r6)
        L16:
            r3.connect(r5, r2)     // Catch: java.io.IOException -> L38
            boolean r2 = r3 instanceof javax.net.ssl.SSLSocket
            if (r2 == 0) goto L2b
            r2 = r3
            javax.net.ssl.SSLSocket r2 = (javax.net.ssl.SSLSocket) r2
            r2.startHandshake()
            java.lang.String r4 = r4.getHostName()
            r1.verifyHostname(r2, r4)
            return r3
        L2b:
            java.lang.String r2 = r4.getHostName()
            int r4 = r5.getPort()
            java.net.Socket r2 = r1.createLayeredSocket(r3, r2, r4, r7)
            return r2
        L38:
            r2 = move-exception
            r3.close()     // Catch: java.io.IOException -> L3c
        L3c:
            throw r2
    }

    @Override
    public java.net.Socket connectSocket(java.net.Socket r3, java.lang.String r4, int r5, java.net.InetAddress r6, int r7, cz.msebera.android.httpclient.params.HttpParams r8) throws java.io.IOException, java.net.UnknownHostException, cz.msebera.android.httpclient.conn.ConnectTimeoutException {
            r2 = this;
            cz.msebera.android.httpclient.conn.scheme.HostNameResolver r0 = r2.nameResolver
            if (r0 == 0) goto L9
            java.net.InetAddress r0 = r0.resolve(r4)
            goto Ld
        L9:
            java.net.InetAddress r0 = java.net.InetAddress.getByName(r4)
        Ld:
            r1 = 0
            if (r6 != 0) goto L12
            if (r7 <= 0) goto L1b
        L12:
            java.net.InetSocketAddress r1 = new java.net.InetSocketAddress
            if (r7 <= 0) goto L17
            goto L18
        L17:
            r7 = 0
        L18:
            r1.<init>(r6, r7)
        L1b:
            cz.msebera.android.httpclient.conn.HttpInetSocketAddress r6 = new cz.msebera.android.httpclient.conn.HttpInetSocketAddress
            cz.msebera.android.httpclient.HttpHost r7 = new cz.msebera.android.httpclient.HttpHost
            r7.<init>(r4, r5)
            r6.<init>(r7, r0, r5)
            java.net.Socket r3 = r2.connectSocket(r3, r6, r1, r8)
            return r3
    }

    @Override
    public java.net.Socket connectSocket(java.net.Socket r12, java.net.InetSocketAddress r13, java.net.InetSocketAddress r14, cz.msebera.android.httpclient.params.HttpParams r15) throws java.io.IOException, java.net.UnknownHostException, cz.msebera.android.httpclient.conn.ConnectTimeoutException {
            r11 = this;
            java.lang.String r0 = "Remote address"
            cz.msebera.android.httpclient.util.Args.notNull(r13, r0)
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r15, r0)
            boolean r0 = r13 instanceof cz.msebera.android.httpclient.conn.HttpInetSocketAddress
            if (r0 == 0) goto L16
            r0 = r13
            cz.msebera.android.httpclient.conn.HttpInetSocketAddress r0 = (cz.msebera.android.httpclient.conn.HttpInetSocketAddress) r0
            cz.msebera.android.httpclient.HttpHost r0 = r0.getHttpHost()
            goto L25
        L16:
            cz.msebera.android.httpclient.HttpHost r0 = new cz.msebera.android.httpclient.HttpHost
            java.lang.String r1 = r13.getHostName()
            int r2 = r13.getPort()
            java.lang.String r3 = "https"
            r0.<init>(r1, r2, r3)
        L25:
            r7 = r0
            int r0 = cz.msebera.android.httpclient.params.HttpConnectionParams.getSoTimeout(r15)
            int r5 = cz.msebera.android.httpclient.params.HttpConnectionParams.getConnectionTimeout(r15)
            r12.setSoTimeout(r0)
            r10 = 0
            r4 = r11
            r6 = r12
            r8 = r13
            r9 = r14
            java.net.Socket r12 = r4.connectSocket(r5, r6, r7, r8, r9, r10)
            return r12
    }

    @Override
    public java.net.Socket createLayeredSocket(java.net.Socket r1, java.lang.String r2, int r3, cz.msebera.android.httpclient.params.HttpParams r4) throws java.io.IOException, java.net.UnknownHostException {
            r0 = this;
            r4 = 0
            cz.msebera.android.httpclient.protocol.HttpContext r4 = (cz.msebera.android.httpclient.protocol.HttpContext) r4
            java.net.Socket r1 = r0.createLayeredSocket(r1, r2, r3, r4)
            return r1
    }

    @Override
    public java.net.Socket createLayeredSocket(java.net.Socket r2, java.lang.String r3, int r4, cz.msebera.android.httpclient.protocol.HttpContext r5) throws java.io.IOException {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r5 = r1.socketfactory
            r0 = 1
            java.net.Socket r2 = r5.createSocket(r2, r3, r4, r0)
            javax.net.ssl.SSLSocket r2 = (javax.net.ssl.SSLSocket) r2
            r1.internalPrepareSocket(r2)
            r2.startHandshake()
            r1.verifyHostname(r2, r3)
            return r2
    }

    @Override
    public java.net.Socket createLayeredSocket(java.net.Socket r1, java.lang.String r2, int r3, boolean r4) throws java.io.IOException, java.net.UnknownHostException {
            r0 = this;
            r4 = 0
            cz.msebera.android.httpclient.protocol.HttpContext r4 = (cz.msebera.android.httpclient.protocol.HttpContext) r4
            java.net.Socket r1 = r0.createLayeredSocket(r1, r2, r3, r4)
            return r1
    }

    public java.net.Socket createSocket() throws java.io.IOException {
            r1 = this;
            r0 = 0
            cz.msebera.android.httpclient.protocol.HttpContext r0 = (cz.msebera.android.httpclient.protocol.HttpContext) r0
            java.net.Socket r0 = r1.createSocket(r0)
            return r0
    }

    @Override
    public java.net.Socket createSocket(cz.msebera.android.httpclient.params.HttpParams r1) throws java.io.IOException {
            r0 = this;
            r1 = 0
            cz.msebera.android.httpclient.protocol.HttpContext r1 = (cz.msebera.android.httpclient.protocol.HttpContext) r1
            java.net.Socket r1 = r0.createSocket(r1)
            return r1
    }

    @Override
    public java.net.Socket createSocket(cz.msebera.android.httpclient.protocol.HttpContext r1) throws java.io.IOException {
            r0 = this;
            javax.net.ssl.SSLSocketFactory r1 = r0.socketfactory
            java.net.Socket r1 = r1.createSocket()
            javax.net.ssl.SSLSocket r1 = (javax.net.ssl.SSLSocket) r1
            r0.internalPrepareSocket(r1)
            return r1
    }

    public java.net.Socket createSocket(java.net.Socket r1, java.lang.String r2, int r3, boolean r4) throws java.io.IOException, java.net.UnknownHostException {
            r0 = this;
            java.net.Socket r1 = r0.createLayeredSocket(r1, r2, r3, r4)
            return r1
    }

    public cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier getHostnameVerifier() {
            r1 = this;
            cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r0 = r1.hostnameVerifier
            return r0
    }

    @Override
    public boolean isSecure(java.net.Socket r3) throws java.lang.IllegalArgumentException {
            r2 = this;
            java.lang.String r0 = "Socket"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            boolean r0 = r3 instanceof javax.net.ssl.SSLSocket
            java.lang.String r1 = "Socket not created by this factory"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)
            boolean r3 = r3.isClosed()
            r0 = 1
            r3 = r3 ^ r0
            java.lang.String r1 = "Socket is closed"
            cz.msebera.android.httpclient.util.Asserts.check(r3, r1)
            return r0
    }

    protected void prepareSocket(javax.net.ssl.SSLSocket r1) throws java.io.IOException {
            r0 = this;
            return
    }

    public void setHostnameVerifier(cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r2) {
            r1 = this;
            java.lang.String r0 = "Hostname verifier"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.hostnameVerifier = r2
            return
    }
}
