package cz.msebera.android.httpclient.conn.ssl;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class SSLConnectionSocketFactory implements cz.msebera.android.httpclient.conn.socket.LayeredConnectionSocketFactory {

    @java.lang.Deprecated
    public static final cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier ALLOW_ALL_HOSTNAME_VERIFIER = null;

    @java.lang.Deprecated
    public static final cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier BROWSER_COMPATIBLE_HOSTNAME_VERIFIER = null;
    public static final java.lang.String SSL = "SSL";
    public static final java.lang.String SSLV2 = "SSLv2";

    @java.lang.Deprecated
    public static final cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier STRICT_HOSTNAME_VERIFIER = null;
    public static final java.lang.String TLS = "TLS";
    private final javax.net.ssl.HostnameVerifier hostnameVerifier;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final javax.net.ssl.SSLSocketFactory socketfactory;
    private final java.lang.String[] supportedCipherSuites;
    private final java.lang.String[] supportedProtocols;

    static {
            cz.msebera.android.httpclient.conn.ssl.AllowAllHostnameVerifier r0 = cz.msebera.android.httpclient.conn.ssl.AllowAllHostnameVerifier.INSTANCE
            cz.msebera.android.httpclient.conn.ssl.SSLConnectionSocketFactory.ALLOW_ALL_HOSTNAME_VERIFIER = r0
            cz.msebera.android.httpclient.conn.ssl.BrowserCompatHostnameVerifier r0 = cz.msebera.android.httpclient.conn.ssl.BrowserCompatHostnameVerifier.INSTANCE
            cz.msebera.android.httpclient.conn.ssl.SSLConnectionSocketFactory.BROWSER_COMPATIBLE_HOSTNAME_VERIFIER = r0
            cz.msebera.android.httpclient.conn.ssl.StrictHostnameVerifier r0 = cz.msebera.android.httpclient.conn.ssl.StrictHostnameVerifier.INSTANCE
            cz.msebera.android.httpclient.conn.ssl.SSLConnectionSocketFactory.STRICT_HOSTNAME_VERIFIER = r0
            return
    }

    public SSLConnectionSocketFactory(javax.net.ssl.SSLContext r2) {
            r1 = this;
            javax.net.ssl.HostnameVerifier r0 = getDefaultHostnameVerifier()
            r1.<init>(r2, r0)
            return
    }

    @java.lang.Deprecated
    public SSLConnectionSocketFactory(javax.net.ssl.SSLContext r2, cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r3) {
            r1 = this;
            java.lang.String r0 = "SSL context"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            javax.net.ssl.SSLContext r2 = (javax.net.ssl.SSLContext) r2
            javax.net.ssl.SSLSocketFactory r2 = r2.getSocketFactory()
            r0 = 0
            r1.<init>(r2, r0, r0, r3)
            return
    }

    public SSLConnectionSocketFactory(javax.net.ssl.SSLContext r2, javax.net.ssl.HostnameVerifier r3) {
            r1 = this;
            java.lang.String r0 = "SSL context"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            javax.net.ssl.SSLContext r2 = (javax.net.ssl.SSLContext) r2
            javax.net.ssl.SSLSocketFactory r2 = r2.getSocketFactory()
            r0 = 0
            r1.<init>(r2, r0, r0, r3)
            return
    }

    @java.lang.Deprecated
    public SSLConnectionSocketFactory(javax.net.ssl.SSLContext r2, java.lang.String[] r3, java.lang.String[] r4, cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r5) {
            r1 = this;
            java.lang.String r0 = "SSL context"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            javax.net.ssl.SSLContext r2 = (javax.net.ssl.SSLContext) r2
            javax.net.ssl.SSLSocketFactory r2 = r2.getSocketFactory()
            r1.<init>(r2, r3, r4, r5)
            return
    }

    public SSLConnectionSocketFactory(javax.net.ssl.SSLContext r2, java.lang.String[] r3, java.lang.String[] r4, javax.net.ssl.HostnameVerifier r5) {
            r1 = this;
            java.lang.String r0 = "SSL context"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            javax.net.ssl.SSLContext r2 = (javax.net.ssl.SSLContext) r2
            javax.net.ssl.SSLSocketFactory r2 = r2.getSocketFactory()
            r1.<init>(r2, r3, r4, r5)
            return
    }

    @java.lang.Deprecated
    public SSLConnectionSocketFactory(javax.net.ssl.SSLSocketFactory r2, cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0, r0, r3)
            return
    }

    public SSLConnectionSocketFactory(javax.net.ssl.SSLSocketFactory r2, javax.net.ssl.HostnameVerifier r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0, r0, r3)
            return
    }

    @java.lang.Deprecated
    public SSLConnectionSocketFactory(javax.net.ssl.SSLSocketFactory r1, java.lang.String[] r2, java.lang.String[] r3, cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    public SSLConnectionSocketFactory(javax.net.ssl.SSLSocketFactory r3, java.lang.String[] r4, java.lang.String[] r5, javax.net.ssl.HostnameVerifier r6) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            java.lang.String r0 = "SSL socket factory"
            java.lang.Object r3 = cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            javax.net.ssl.SSLSocketFactory r3 = (javax.net.ssl.SSLSocketFactory) r3
            r2.socketfactory = r3
            r2.supportedProtocols = r4
            r2.supportedCipherSuites = r5
            if (r6 == 0) goto L1f
            goto L23
        L1f:
            javax.net.ssl.HostnameVerifier r6 = getDefaultHostnameVerifier()
        L23:
            r2.hostnameVerifier = r6
            return
    }

    public static javax.net.ssl.HostnameVerifier getDefaultHostnameVerifier() {
            cz.msebera.android.httpclient.conn.ssl.DefaultHostnameVerifier r0 = new cz.msebera.android.httpclient.conn.ssl.DefaultHostnameVerifier
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r1 = cz.msebera.android.httpclient.conn.util.PublicSuffixMatcherLoader.getDefault()
            r0.<init>(r1)
            return r0
    }

    public static cz.msebera.android.httpclient.conn.ssl.SSLConnectionSocketFactory getSocketFactory() throws cz.msebera.android.httpclient.conn.ssl.SSLInitializationException {
            cz.msebera.android.httpclient.conn.ssl.SSLConnectionSocketFactory r0 = new cz.msebera.android.httpclient.conn.ssl.SSLConnectionSocketFactory
            javax.net.ssl.SSLContext r1 = cz.msebera.android.httpclient.ssl.SSLContexts.createDefault()
            javax.net.ssl.HostnameVerifier r2 = getDefaultHostnameVerifier()
            r0.<init>(r1, r2)
            return r0
    }

    public static cz.msebera.android.httpclient.conn.ssl.SSLConnectionSocketFactory getSystemSocketFactory() throws cz.msebera.android.httpclient.conn.ssl.SSLInitializationException {
            cz.msebera.android.httpclient.conn.ssl.SSLConnectionSocketFactory r0 = new cz.msebera.android.httpclient.conn.ssl.SSLConnectionSocketFactory
            javax.net.SocketFactory r1 = javax.net.ssl.SSLSocketFactory.getDefault()
            javax.net.ssl.SSLSocketFactory r1 = (javax.net.ssl.SSLSocketFactory) r1
            java.lang.String r2 = "https.protocols"
            java.lang.String r2 = java.lang.System.getProperty(r2)
            java.lang.String[] r2 = split(r2)
            java.lang.String r3 = "https.cipherSuites"
            java.lang.String r3 = java.lang.System.getProperty(r3)
            java.lang.String[] r3 = split(r3)
            javax.net.ssl.HostnameVerifier r4 = getDefaultHostnameVerifier()
            r0.<init>(r1, r2, r3, r4)
            return r0
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

    private void verifyHostname(javax.net.ssl.SSLSocket r9, java.lang.String r10) throws java.io.IOException {
            r8 = this;
            javax.net.ssl.SSLSession r0 = r9.getSession()     // Catch: java.io.IOException -> L171
            if (r0 != 0) goto L1a
            java.io.InputStream r0 = r9.getInputStream()     // Catch: java.io.IOException -> L171
            r0.available()     // Catch: java.io.IOException -> L171
            javax.net.ssl.SSLSession r0 = r9.getSession()     // Catch: java.io.IOException -> L171
            if (r0 != 0) goto L1a
            r9.startHandshake()     // Catch: java.io.IOException -> L171
            javax.net.ssl.SSLSession r0 = r9.getSession()     // Catch: java.io.IOException -> L171
        L1a:
            if (r0 == 0) goto L169
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r8.log     // Catch: java.io.IOException -> L171
            boolean r1 = r1.isDebugEnabled()     // Catch: java.io.IOException -> L171
            r2 = 0
            if (r1 == 0) goto L127
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r8.log     // Catch: java.io.IOException -> L171
            java.lang.String r3 = "Secure session established"
            r1.debug(r3)     // Catch: java.io.IOException -> L171
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r8.log     // Catch: java.io.IOException -> L171
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L171
            r3.<init>()     // Catch: java.io.IOException -> L171
            java.lang.String r4 = " negotiated protocol: "
            r3.append(r4)     // Catch: java.io.IOException -> L171
            java.lang.String r4 = r0.getProtocol()     // Catch: java.io.IOException -> L171
            r3.append(r4)     // Catch: java.io.IOException -> L171
            java.lang.String r3 = r3.toString()     // Catch: java.io.IOException -> L171
            r1.debug(r3)     // Catch: java.io.IOException -> L171
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r8.log     // Catch: java.io.IOException -> L171
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L171
            r3.<init>()     // Catch: java.io.IOException -> L171
            java.lang.String r4 = " negotiated cipher suite: "
            r3.append(r4)     // Catch: java.io.IOException -> L171
            java.lang.String r4 = r0.getCipherSuite()     // Catch: java.io.IOException -> L171
            r3.append(r4)     // Catch: java.io.IOException -> L171
            java.lang.String r3 = r3.toString()     // Catch: java.io.IOException -> L171
            r1.debug(r3)     // Catch: java.io.IOException -> L171
            java.security.cert.Certificate[] r1 = r0.getPeerCertificates()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            r1 = r1[r2]     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.security.cert.X509Certificate r1 = (java.security.cert.X509Certificate) r1     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            javax.security.auth.x500.X500Principal r3 = r1.getSubjectX500Principal()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r8.log     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            r5.<init>()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.lang.String r6 = " peer principal: "
            r5.append(r6)     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            r5.append(r3)     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            r4.debug(r3)     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.util.Collection r3 = r1.getSubjectAlternativeNames()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            r4 = 1
            if (r3 == 0) goto Lc8
            java.util.ArrayList r5 = new java.util.ArrayList     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            r5.<init>()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
        L96:
            boolean r6 = r3.hasNext()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            if (r6 == 0) goto Lb2
            java.lang.Object r6 = r3.next()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.util.List r6 = (java.util.List) r6     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            boolean r7 = r6.isEmpty()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            if (r7 != 0) goto L96
            java.lang.Object r6 = r6.get(r4)     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            r5.add(r6)     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            goto L96
        Lb2:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r8.log     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            r6.<init>()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.lang.String r7 = " peer alternative names: "
            r6.append(r7)     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            r6.append(r5)     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.lang.String r5 = r6.toString()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            r3.debug(r5)     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
        Lc8:
            javax.security.auth.x500.X500Principal r3 = r1.getIssuerX500Principal()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r8.log     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            r6.<init>()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.lang.String r7 = " issuer principal: "
            r6.append(r7)     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            r6.append(r3)     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.lang.String r3 = r6.toString()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            r5.debug(r3)     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.util.Collection r1 = r1.getIssuerAlternativeNames()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            if (r1 == 0) goto L127
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            r3.<init>()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
        Lf5:
            boolean r5 = r1.hasNext()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            if (r5 == 0) goto L111
            java.lang.Object r5 = r1.next()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.util.List r5 = (java.util.List) r5     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            boolean r6 = r5.isEmpty()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            if (r6 != 0) goto Lf5
            java.lang.Object r5 = r5.get(r4)     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            r3.add(r5)     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            goto Lf5
        L111:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r8.log     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            r4.<init>()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.lang.String r5 = " issuer alternative names: "
            r4.append(r5)     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            r4.append(r3)     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
            r1.debug(r3)     // Catch: java.lang.Exception -> L127 java.io.IOException -> L171
        L127:
            javax.net.ssl.HostnameVerifier r1 = r8.hostnameVerifier     // Catch: java.io.IOException -> L171
            boolean r1 = r1.verify(r10, r0)     // Catch: java.io.IOException -> L171
            if (r1 == 0) goto L130
            return
        L130:
            java.security.cert.Certificate[] r0 = r0.getPeerCertificates()     // Catch: java.io.IOException -> L171
            r0 = r0[r2]     // Catch: java.io.IOException -> L171
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0     // Catch: java.io.IOException -> L171
            javax.security.auth.x500.X500Principal r0 = r0.getSubjectX500Principal()     // Catch: java.io.IOException -> L171
            javax.net.ssl.SSLPeerUnverifiedException r1 = new javax.net.ssl.SSLPeerUnverifiedException     // Catch: java.io.IOException -> L171
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L171
            r2.<init>()     // Catch: java.io.IOException -> L171
            java.lang.String r3 = "Host name '"
            r2.append(r3)     // Catch: java.io.IOException -> L171
            r2.append(r10)     // Catch: java.io.IOException -> L171
            java.lang.String r10 = "' does not match "
            r2.append(r10)     // Catch: java.io.IOException -> L171
            java.lang.String r10 = "the certificate subject provided by the peer ("
            r2.append(r10)     // Catch: java.io.IOException -> L171
            java.lang.String r10 = r0.toString()     // Catch: java.io.IOException -> L171
            r2.append(r10)     // Catch: java.io.IOException -> L171
            java.lang.String r10 = ")"
            r2.append(r10)     // Catch: java.io.IOException -> L171
            java.lang.String r10 = r2.toString()     // Catch: java.io.IOException -> L171
            r1.<init>(r10)     // Catch: java.io.IOException -> L171
            throw r1     // Catch: java.io.IOException -> L171
        L169:
            javax.net.ssl.SSLHandshakeException r10 = new javax.net.ssl.SSLHandshakeException     // Catch: java.io.IOException -> L171
            java.lang.String r0 = "SSL session not available"
            r10.<init>(r0)     // Catch: java.io.IOException -> L171
            throw r10     // Catch: java.io.IOException -> L171
        L171:
            r10 = move-exception
            r9.close()     // Catch: java.lang.Exception -> L175
        L175:
            throw r10
    }

    @Override
    public java.net.Socket connectSocket(int r3, java.net.Socket r4, cz.msebera.android.httpclient.HttpHost r5, java.net.InetSocketAddress r6, java.net.InetSocketAddress r7, cz.msebera.android.httpclient.protocol.HttpContext r8) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = "HTTP host"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            java.lang.String r0 = "Remote address"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            if (r4 == 0) goto Ld
            goto L11
        Ld:
            java.net.Socket r4 = r2.createSocket(r8)
        L11:
            if (r7 == 0) goto L16
            r4.bind(r7)
        L16:
            if (r3 <= 0) goto L21
            int r7 = r4.getSoTimeout()     // Catch: java.io.IOException -> L70
            if (r7 != 0) goto L21
            r4.setSoTimeout(r3)     // Catch: java.io.IOException -> L70
        L21:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r2.log     // Catch: java.io.IOException -> L70
            boolean r7 = r7.isDebugEnabled()     // Catch: java.io.IOException -> L70
            if (r7 == 0) goto L47
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r2.log     // Catch: java.io.IOException -> L70
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L70
            r0.<init>()     // Catch: java.io.IOException -> L70
            java.lang.String r1 = "Connecting socket to "
            r0.append(r1)     // Catch: java.io.IOException -> L70
            r0.append(r6)     // Catch: java.io.IOException -> L70
            java.lang.String r1 = " with timeout "
            r0.append(r1)     // Catch: java.io.IOException -> L70
            r0.append(r3)     // Catch: java.io.IOException -> L70
            java.lang.String r0 = r0.toString()     // Catch: java.io.IOException -> L70
            r7.debug(r0)     // Catch: java.io.IOException -> L70
        L47:
            r4.connect(r6, r3)     // Catch: java.io.IOException -> L70
            boolean r3 = r4 instanceof javax.net.ssl.SSLSocket
            if (r3 == 0) goto L63
            r3 = r4
            javax.net.ssl.SSLSocket r3 = (javax.net.ssl.SSLSocket) r3
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r2.log
            java.lang.String r7 = "Starting handshake"
            r6.debug(r7)
            r3.startHandshake()
            java.lang.String r5 = r5.getHostName()
            r2.verifyHostname(r3, r5)
            return r4
        L63:
            java.lang.String r3 = r5.getHostName()
            int r5 = r6.getPort()
            java.net.Socket r3 = r2.createLayeredSocket(r4, r3, r5, r8)
            return r3
        L70:
            r3 = move-exception
            r4.close()     // Catch: java.io.IOException -> L74
        L74:
            throw r3
    }

    @Override
    public java.net.Socket createLayeredSocket(java.net.Socket r5, java.lang.String r6, int r7, cz.msebera.android.httpclient.protocol.HttpContext r8) throws java.io.IOException {
            r4 = this;
            javax.net.ssl.SSLSocketFactory r8 = r4.socketfactory
            r0 = 1
            java.net.Socket r5 = r8.createSocket(r5, r6, r7, r0)
            javax.net.ssl.SSLSocket r5 = (javax.net.ssl.SSLSocket) r5
            java.lang.String[] r7 = r4.supportedProtocols
            if (r7 == 0) goto L11
            r5.setEnabledProtocols(r7)
            goto L44
        L11:
            java.lang.String[] r7 = r5.getEnabledProtocols()
            java.util.ArrayList r8 = new java.util.ArrayList
            int r0 = r7.length
            r8.<init>(r0)
            int r0 = r7.length
            r1 = 0
        L1d:
            if (r1 >= r0) goto L2f
            r2 = r7[r1]
            java.lang.String r3 = "SSL"
            boolean r3 = r2.startsWith(r3)
            if (r3 != 0) goto L2c
            r8.add(r2)
        L2c:
            int r1 = r1 + 1
            goto L1d
        L2f:
            boolean r7 = r8.isEmpty()
            if (r7 != 0) goto L44
            int r7 = r8.size()
            java.lang.String[] r7 = new java.lang.String[r7]
            java.lang.Object[] r7 = r8.toArray(r7)
            java.lang.String[] r7 = (java.lang.String[]) r7
            r5.setEnabledProtocols(r7)
        L44:
            java.lang.String[] r7 = r4.supportedCipherSuites
            if (r7 == 0) goto L4b
            r5.setEnabledCipherSuites(r7)
        L4b:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r4.log
            boolean r7 = r7.isDebugEnabled()
            if (r7 == 0) goto L8f
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r4.log
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "Enabled protocols: "
            r8.append(r0)
            java.lang.String[] r0 = r5.getEnabledProtocols()
            java.util.List r0 = java.util.Arrays.asList(r0)
            r8.append(r0)
            java.lang.String r8 = r8.toString()
            r7.debug(r8)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r4.log
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "Enabled cipher suites:"
            r8.append(r0)
            java.lang.String[] r0 = r5.getEnabledCipherSuites()
            java.util.List r0 = java.util.Arrays.asList(r0)
            r8.append(r0)
            java.lang.String r8 = r8.toString()
            r7.debug(r8)
        L8f:
            r4.prepareSocket(r5)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r4.log
            java.lang.String r8 = "Starting handshake"
            r7.debug(r8)
            r5.startHandshake()
            r4.verifyHostname(r5, r6)
            return r5
    }

    @Override
    public java.net.Socket createSocket(cz.msebera.android.httpclient.protocol.HttpContext r1) throws java.io.IOException {
            r0 = this;
            javax.net.SocketFactory r1 = javax.net.SocketFactory.getDefault()
            java.net.Socket r1 = r1.createSocket()
            return r1
    }

    protected void prepareSocket(javax.net.ssl.SSLSocket r1) throws java.io.IOException {
            r0 = this;
            return
    }
}
