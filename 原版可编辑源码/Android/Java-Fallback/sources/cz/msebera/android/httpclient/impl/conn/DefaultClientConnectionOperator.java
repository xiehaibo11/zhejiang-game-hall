package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.ThreadSafe
@java.lang.Deprecated
public class DefaultClientConnectionOperator implements cz.msebera.android.httpclient.conn.ClientConnectionOperator {
    protected final cz.msebera.android.httpclient.conn.DnsResolver dnsResolver;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    protected final cz.msebera.android.httpclient.conn.scheme.SchemeRegistry schemeRegistry;

    public DefaultClientConnectionOperator(cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r3) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            java.lang.String r0 = "Scheme registry"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            r2.schemeRegistry = r3
            cz.msebera.android.httpclient.impl.conn.SystemDefaultDnsResolver r3 = new cz.msebera.android.httpclient.impl.conn.SystemDefaultDnsResolver
            r3.<init>()
            r2.dnsResolver = r3
            return
    }

    public DefaultClientConnectionOperator(cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r3, cz.msebera.android.httpclient.conn.DnsResolver r4) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            java.lang.String r0 = "Scheme registry"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "DNS resolver"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            r2.schemeRegistry = r3
            r2.dnsResolver = r4
            return
    }

    private cz.msebera.android.httpclient.conn.scheme.SchemeRegistry getSchemeRegistry(cz.msebera.android.httpclient.protocol.HttpContext r2) {
            r1 = this;
            java.lang.String r0 = "http.scheme-registry"
            java.lang.Object r2 = r2.getAttribute(r0)
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r2 = (cz.msebera.android.httpclient.conn.scheme.SchemeRegistry) r2
            if (r2 != 0) goto Lc
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r2 = r1.schemeRegistry
        Lc:
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.conn.OperatedClientConnection createConnection() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.DefaultClientConnection r0 = new cz.msebera.android.httpclient.impl.conn.DefaultClientConnection
            r0.<init>()
            return r0
    }

    @Override
    public void openConnection(cz.msebera.android.httpclient.conn.OperatedClientConnection r17, cz.msebera.android.httpclient.HttpHost r18, java.net.InetAddress r19, cz.msebera.android.httpclient.protocol.HttpContext r20, cz.msebera.android.httpclient.params.HttpParams r21) throws java.io.IOException {
            r16 = this;
            r1 = r16
            r2 = r17
            r3 = r18
            r4 = r19
            r5 = r20
            r6 = r21
            java.lang.String r0 = "Connection"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Target host"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            boolean r0 = r17.isOpen()
            r7 = 1
            r0 = r0 ^ r7
            java.lang.String r8 = "Connection must not be open"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r8)
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r0 = r1.getSchemeRegistry(r5)
            java.lang.String r8 = r18.getSchemeName()
            cz.msebera.android.httpclient.conn.scheme.Scheme r0 = r0.getScheme(r8)
            cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory r8 = r0.getSchemeSocketFactory()
            java.lang.String r9 = r18.getHostName()
            java.net.InetAddress[] r9 = r1.resolveHostname(r9)
            int r10 = r18.getPort()
            int r10 = r0.resolvePort(r10)
            r11 = 0
            r12 = 0
        L48:
            int r0 = r9.length
            if (r12 >= r0) goto Ld4
            r0 = r9[r12]
            int r13 = r9.length
            int r13 = r13 - r7
            if (r12 != r13) goto L53
            r13 = 1
            goto L54
        L53:
            r13 = 0
        L54:
            java.net.Socket r14 = r8.createSocket(r6)
            r2.opening(r14, r3)
            cz.msebera.android.httpclient.conn.HttpInetSocketAddress r15 = new cz.msebera.android.httpclient.conn.HttpInetSocketAddress
            r15.<init>(r3, r0, r10)
            r0 = 0
            if (r4 == 0) goto L68
            java.net.InetSocketAddress r0 = new java.net.InetSocketAddress
            r0.<init>(r4, r11)
        L68:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r1.log
            boolean r7 = r7.isDebugEnabled()
            if (r7 == 0) goto L86
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r1.log
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r4 = "Connecting to "
            r11.append(r4)
            r11.append(r15)
            java.lang.String r4 = r11.toString()
            r7.debug(r4)
        L86:
            java.net.Socket r0 = r8.connectSocket(r14, r15, r0, r6)     // Catch: cz.msebera.android.httpclient.conn.ConnectTimeoutException -> L9b java.net.ConnectException -> La0
            if (r14 == r0) goto L90
            r2.opening(r0, r3)     // Catch: cz.msebera.android.httpclient.conn.ConnectTimeoutException -> L9b java.net.ConnectException -> La0
            r14 = r0
        L90:
            r1.prepareSocket(r14, r5, r6)     // Catch: cz.msebera.android.httpclient.conn.ConnectTimeoutException -> L9b java.net.ConnectException -> La0
            boolean r0 = r8.isSecure(r14)     // Catch: cz.msebera.android.httpclient.conn.ConnectTimeoutException -> L9b java.net.ConnectException -> La0
            r2.openCompleted(r0, r6)     // Catch: cz.msebera.android.httpclient.conn.ConnectTimeoutException -> L9b java.net.ConnectException -> La0
            return
        L9b:
            r0 = move-exception
            if (r13 != 0) goto L9f
            goto La3
        L9f:
            throw r0
        La0:
            r0 = move-exception
            if (r13 != 0) goto Ld3
        La3:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r1.log
            boolean r0 = r0.isDebugEnabled()
            if (r0 == 0) goto Lcb
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r1.log
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r7 = "Connect to "
            r4.append(r7)
            r4.append(r15)
            java.lang.String r7 = " timed out. "
            r4.append(r7)
            java.lang.String r7 = "Connection will be retried using another IP address"
            r4.append(r7)
            java.lang.String r4 = r4.toString()
            r0.debug(r4)
        Lcb:
            int r12 = r12 + 1
            r4 = r19
            r7 = 1
            r11 = 0
            goto L48
        Ld3:
            throw r0
        Ld4:
            return
    }

    protected void prepareSocket(java.net.Socket r1, cz.msebera.android.httpclient.protocol.HttpContext r2, cz.msebera.android.httpclient.params.HttpParams r3) throws java.io.IOException {
            r0 = this;
            boolean r2 = cz.msebera.android.httpclient.params.HttpConnectionParams.getTcpNoDelay(r3)
            r1.setTcpNoDelay(r2)
            int r2 = cz.msebera.android.httpclient.params.HttpConnectionParams.getSoTimeout(r3)
            r1.setSoTimeout(r2)
            int r2 = cz.msebera.android.httpclient.params.HttpConnectionParams.getLinger(r3)
            if (r2 < 0) goto L1c
            if (r2 <= 0) goto L18
            r3 = 1
            goto L19
        L18:
            r3 = 0
        L19:
            r1.setSoLinger(r3, r2)
        L1c:
            return
    }

    protected java.net.InetAddress[] resolveHostname(java.lang.String r2) throws java.net.UnknownHostException {
            r1 = this;
            cz.msebera.android.httpclient.conn.DnsResolver r0 = r1.dnsResolver
            java.net.InetAddress[] r2 = r0.resolve(r2)
            return r2
    }

    @Override
    public void updateSecureConnection(cz.msebera.android.httpclient.conn.OperatedClientConnection r6, cz.msebera.android.httpclient.HttpHost r7, cz.msebera.android.httpclient.protocol.HttpContext r8, cz.msebera.android.httpclient.params.HttpParams r9) throws java.io.IOException {
            r5 = this;
            java.lang.String r0 = "Connection"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            java.lang.String r0 = "Target host"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r0)
            java.lang.String r0 = "Parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r9, r0)
            boolean r0 = r6.isOpen()
            java.lang.String r1 = "Connection must be open"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r0 = r5.getSchemeRegistry(r8)
            java.lang.String r1 = r7.getSchemeName()
            cz.msebera.android.httpclient.conn.scheme.Scheme r0 = r0.getScheme(r1)
            cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory r1 = r0.getSchemeSocketFactory()
            boolean r1 = r1 instanceof cz.msebera.android.httpclient.conn.scheme.SchemeLayeredSocketFactory
            java.lang.String r2 = "Socket factory must implement SchemeLayeredSocketFactory"
            cz.msebera.android.httpclient.util.Asserts.check(r1, r2)
            cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory r1 = r0.getSchemeSocketFactory()
            cz.msebera.android.httpclient.conn.scheme.SchemeLayeredSocketFactory r1 = (cz.msebera.android.httpclient.conn.scheme.SchemeLayeredSocketFactory) r1
            java.net.Socket r2 = r6.getSocket()
            java.lang.String r3 = r7.getHostName()
            int r4 = r7.getPort()
            int r0 = r0.resolvePort(r4)
            java.net.Socket r0 = r1.createLayeredSocket(r2, r3, r0, r9)
            r5.prepareSocket(r0, r8, r9)
            boolean r8 = r1.isSecure(r0)
            r6.update(r0, r7, r8, r9)
            return
    }
}
