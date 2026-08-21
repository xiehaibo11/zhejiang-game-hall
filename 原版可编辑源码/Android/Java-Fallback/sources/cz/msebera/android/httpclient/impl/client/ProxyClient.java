package cz.msebera.android.httpclient.impl.client;

public class ProxyClient {
    private final cz.msebera.android.httpclient.auth.AuthSchemeRegistry authSchemeRegistry;
    private final cz.msebera.android.httpclient.impl.auth.HttpAuthenticator authenticator;
    private final cz.msebera.android.httpclient.conn.HttpConnectionFactory<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection> connFactory;
    private final cz.msebera.android.httpclient.config.ConnectionConfig connectionConfig;
    private final cz.msebera.android.httpclient.protocol.HttpProcessor httpProcessor;
    private final cz.msebera.android.httpclient.auth.AuthState proxyAuthState;
    private final cz.msebera.android.httpclient.impl.client.ProxyAuthenticationStrategy proxyAuthStrategy;
    private final cz.msebera.android.httpclient.client.config.RequestConfig requestConfig;
    private final cz.msebera.android.httpclient.protocol.HttpRequestExecutor requestExec;
    private final cz.msebera.android.httpclient.ConnectionReuseStrategy reuseStrategy;

    public ProxyClient() {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r0, r0)
            return
    }

    public ProxyClient(cz.msebera.android.httpclient.client.config.RequestConfig r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r0, r2)
            return
    }

    public ProxyClient(cz.msebera.android.httpclient.conn.HttpConnectionFactory<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection> r2, cz.msebera.android.httpclient.config.ConnectionConfig r3, cz.msebera.android.httpclient.client.config.RequestConfig r4) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L6
            goto L8
        L6:
            cz.msebera.android.httpclient.impl.conn.ManagedHttpClientConnectionFactory r2 = cz.msebera.android.httpclient.impl.conn.ManagedHttpClientConnectionFactory.INSTANCE
        L8:
            r1.connFactory = r2
            if (r3 == 0) goto Ld
            goto Lf
        Ld:
            cz.msebera.android.httpclient.config.ConnectionConfig r3 = cz.msebera.android.httpclient.config.ConnectionConfig.DEFAULT
        Lf:
            r1.connectionConfig = r3
            if (r4 == 0) goto L14
            goto L16
        L14:
            cz.msebera.android.httpclient.client.config.RequestConfig r4 = cz.msebera.android.httpclient.client.config.RequestConfig.DEFAULT
        L16:
            r1.requestConfig = r4
            cz.msebera.android.httpclient.protocol.ImmutableHttpProcessor r2 = new cz.msebera.android.httpclient.protocol.ImmutableHttpProcessor
            r3 = 3
            cz.msebera.android.httpclient.HttpRequestInterceptor[] r3 = new cz.msebera.android.httpclient.HttpRequestInterceptor[r3]
            r4 = 0
            cz.msebera.android.httpclient.protocol.RequestTargetHost r0 = new cz.msebera.android.httpclient.protocol.RequestTargetHost
            r0.<init>()
            r3[r4] = r0
            r4 = 1
            cz.msebera.android.httpclient.client.protocol.RequestClientConnControl r0 = new cz.msebera.android.httpclient.client.protocol.RequestClientConnControl
            r0.<init>()
            r3[r4] = r0
            r4 = 2
            cz.msebera.android.httpclient.protocol.RequestUserAgent r0 = new cz.msebera.android.httpclient.protocol.RequestUserAgent
            r0.<init>()
            r3[r4] = r0
            r2.<init>(r3)
            r1.httpProcessor = r2
            cz.msebera.android.httpclient.protocol.HttpRequestExecutor r2 = new cz.msebera.android.httpclient.protocol.HttpRequestExecutor
            r2.<init>()
            r1.requestExec = r2
            cz.msebera.android.httpclient.impl.client.ProxyAuthenticationStrategy r2 = new cz.msebera.android.httpclient.impl.client.ProxyAuthenticationStrategy
            r2.<init>()
            r1.proxyAuthStrategy = r2
            cz.msebera.android.httpclient.impl.auth.HttpAuthenticator r2 = new cz.msebera.android.httpclient.impl.auth.HttpAuthenticator
            r2.<init>()
            r1.authenticator = r2
            cz.msebera.android.httpclient.auth.AuthState r2 = new cz.msebera.android.httpclient.auth.AuthState
            r2.<init>()
            r1.proxyAuthState = r2
            cz.msebera.android.httpclient.auth.AuthSchemeRegistry r2 = new cz.msebera.android.httpclient.auth.AuthSchemeRegistry
            r2.<init>()
            r1.authSchemeRegistry = r2
            cz.msebera.android.httpclient.auth.AuthSchemeRegistry r2 = r1.authSchemeRegistry
            cz.msebera.android.httpclient.impl.auth.BasicSchemeFactory r3 = new cz.msebera.android.httpclient.impl.auth.BasicSchemeFactory
            r3.<init>()
            java.lang.String r4 = "Basic"
            r2.register(r4, r3)
            cz.msebera.android.httpclient.auth.AuthSchemeRegistry r2 = r1.authSchemeRegistry
            cz.msebera.android.httpclient.impl.auth.DigestSchemeFactory r3 = new cz.msebera.android.httpclient.impl.auth.DigestSchemeFactory
            r3.<init>()
            java.lang.String r4 = "Digest"
            r2.register(r4, r3)
            cz.msebera.android.httpclient.auth.AuthSchemeRegistry r2 = r1.authSchemeRegistry
            cz.msebera.android.httpclient.impl.auth.NTLMSchemeFactory r3 = new cz.msebera.android.httpclient.impl.auth.NTLMSchemeFactory
            r3.<init>()
            java.lang.String r4 = "NTLM"
            r2.register(r4, r3)
            cz.msebera.android.httpclient.impl.DefaultConnectionReuseStrategy r2 = new cz.msebera.android.httpclient.impl.DefaultConnectionReuseStrategy
            r2.<init>()
            r1.reuseStrategy = r2
            return
    }

    @java.lang.Deprecated
    public ProxyClient(cz.msebera.android.httpclient.params.HttpParams r3) {
            r2 = this;
            cz.msebera.android.httpclient.config.ConnectionConfig r0 = cz.msebera.android.httpclient.params.HttpParamConfig.getConnectionConfig(r3)
            cz.msebera.android.httpclient.client.config.RequestConfig r3 = cz.msebera.android.httpclient.client.params.HttpClientParamConfig.getRequestConfig(r3)
            r1 = 0
            r2.<init>(r1, r0, r3)
            return
    }

    @java.lang.Deprecated
    public cz.msebera.android.httpclient.auth.AuthSchemeRegistry getAuthSchemeRegistry() {
            r1 = this;
            cz.msebera.android.httpclient.auth.AuthSchemeRegistry r0 = r1.authSchemeRegistry
            return r0
    }

    @java.lang.Deprecated
    public cz.msebera.android.httpclient.params.HttpParams getParams() {
            r1 = this;
            cz.msebera.android.httpclient.params.BasicHttpParams r0 = new cz.msebera.android.httpclient.params.BasicHttpParams
            r0.<init>()
            return r0
    }

    public java.net.Socket tunnel(cz.msebera.android.httpclient.HttpHost r12, cz.msebera.android.httpclient.HttpHost r13, cz.msebera.android.httpclient.auth.Credentials r14) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r11 = this;
            java.lang.String r0 = "Proxy host"
            cz.msebera.android.httpclient.util.Args.notNull(r12, r0)
            java.lang.String r0 = "Target host"
            cz.msebera.android.httpclient.util.Args.notNull(r13, r0)
            java.lang.String r0 = "Credentials"
            cz.msebera.android.httpclient.util.Args.notNull(r14, r0)
            int r0 = r13.getPort()
            if (r0 > 0) goto L25
            cz.msebera.android.httpclient.HttpHost r0 = new cz.msebera.android.httpclient.HttpHost
            java.lang.String r1 = r13.getHostName()
            r2 = 80
            java.lang.String r3 = r13.getSchemeName()
            r0.<init>(r1, r2, r3)
            goto L26
        L25:
            r0 = r13
        L26:
            cz.msebera.android.httpclient.conn.routing.HttpRoute r1 = new cz.msebera.android.httpclient.conn.routing.HttpRoute
            cz.msebera.android.httpclient.client.config.RequestConfig r2 = r11.requestConfig
            java.net.InetAddress r6 = r2.getLocalAddress()
            r8 = 0
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r9 = cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType.TUNNELLED
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r10 = cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType.PLAIN
            r4 = r1
            r5 = r0
            r7 = r12
            r4.<init>(r5, r6, r7, r8, r9, r10)
            cz.msebera.android.httpclient.conn.HttpConnectionFactory<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection> r2 = r11.connFactory
            cz.msebera.android.httpclient.config.ConnectionConfig r3 = r11.connectionConfig
            cz.msebera.android.httpclient.HttpConnection r2 = r2.create(r1, r3)
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r2 = (cz.msebera.android.httpclient.conn.ManagedHttpClientConnection) r2
            cz.msebera.android.httpclient.protocol.BasicHttpContext r9 = new cz.msebera.android.httpclient.protocol.BasicHttpContext
            r9.<init>()
            cz.msebera.android.httpclient.message.BasicHttpRequest r10 = new cz.msebera.android.httpclient.message.BasicHttpRequest
            java.lang.String r0 = r0.toHostString()
            cz.msebera.android.httpclient.HttpVersion r3 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            java.lang.String r4 = "CONNECT"
            r10.<init>(r4, r0, r3)
            cz.msebera.android.httpclient.impl.client.BasicCredentialsProvider r0 = new cz.msebera.android.httpclient.impl.client.BasicCredentialsProvider
            r0.<init>()
            cz.msebera.android.httpclient.auth.AuthScope r3 = new cz.msebera.android.httpclient.auth.AuthScope
            r3.<init>(r12)
            r0.setCredentials(r3, r14)
            java.lang.String r14 = "http.target_host"
            r9.setAttribute(r14, r13)
            java.lang.String r13 = "http.connection"
            r9.setAttribute(r13, r2)
            java.lang.String r13 = "http.request"
            r9.setAttribute(r13, r10)
            java.lang.String r13 = "http.route"
            r9.setAttribute(r13, r1)
            cz.msebera.android.httpclient.auth.AuthState r13 = r11.proxyAuthState
            java.lang.String r14 = "http.auth.proxy-scope"
            r9.setAttribute(r14, r13)
            java.lang.String r13 = "http.auth.credentials-provider"
            r9.setAttribute(r13, r0)
            cz.msebera.android.httpclient.auth.AuthSchemeRegistry r13 = r11.authSchemeRegistry
            java.lang.String r14 = "http.authscheme-registry"
            r9.setAttribute(r14, r13)
            cz.msebera.android.httpclient.client.config.RequestConfig r13 = r11.requestConfig
            java.lang.String r14 = "http.request-config"
            r9.setAttribute(r14, r13)
            cz.msebera.android.httpclient.protocol.HttpRequestExecutor r13 = r11.requestExec
            cz.msebera.android.httpclient.protocol.HttpProcessor r14 = r11.httpProcessor
            r13.preProcess(r10, r14, r9)
        L97:
            boolean r13 = r2.isOpen()
            if (r13 != 0) goto Lad
            java.net.Socket r13 = new java.net.Socket
            java.lang.String r14 = r12.getHostName()
            int r0 = r12.getPort()
            r13.<init>(r14, r0)
            r2.bind(r13)
        Lad:
            cz.msebera.android.httpclient.impl.auth.HttpAuthenticator r13 = r11.authenticator
            cz.msebera.android.httpclient.auth.AuthState r14 = r11.proxyAuthState
            r13.generateAuthResponse(r10, r14, r9)
            cz.msebera.android.httpclient.protocol.HttpRequestExecutor r13 = r11.requestExec
            cz.msebera.android.httpclient.HttpResponse r13 = r13.execute(r10, r2, r9)
            cz.msebera.android.httpclient.StatusLine r14 = r13.getStatusLine()
            int r14 = r14.getStatusCode()
            r0 = 200(0xc8, float:2.8E-43)
            if (r14 < r0) goto L13a
            cz.msebera.android.httpclient.impl.auth.HttpAuthenticator r3 = r11.authenticator
            cz.msebera.android.httpclient.impl.client.ProxyAuthenticationStrategy r6 = r11.proxyAuthStrategy
            cz.msebera.android.httpclient.auth.AuthState r7 = r11.proxyAuthState
            r4 = r12
            r5 = r13
            r8 = r9
            boolean r14 = r3.isAuthenticationRequested(r4, r5, r6, r7, r8)
            if (r14 == 0) goto Lfd
            cz.msebera.android.httpclient.impl.auth.HttpAuthenticator r3 = r11.authenticator
            cz.msebera.android.httpclient.impl.client.ProxyAuthenticationStrategy r6 = r11.proxyAuthStrategy
            cz.msebera.android.httpclient.auth.AuthState r7 = r11.proxyAuthState
            r4 = r12
            r5 = r13
            r8 = r9
            boolean r14 = r3.handleAuthChallenge(r4, r5, r6, r7, r8)
            if (r14 == 0) goto Lfd
            cz.msebera.android.httpclient.ConnectionReuseStrategy r14 = r11.reuseStrategy
            boolean r14 = r14.keepAlive(r13, r9)
            if (r14 == 0) goto Lf4
            cz.msebera.android.httpclient.HttpEntity r13 = r13.getEntity()
            cz.msebera.android.httpclient.util.EntityUtils.consume(r13)
            goto Lf7
        Lf4:
            r2.close()
        Lf7:
            java.lang.String r13 = "Proxy-Authorization"
            r10.removeHeaders(r13)
            goto L97
        Lfd:
            cz.msebera.android.httpclient.StatusLine r12 = r13.getStatusLine()
            int r12 = r12.getStatusCode()
            r14 = 299(0x12b, float:4.19E-43)
            if (r12 <= r14) goto L135
            cz.msebera.android.httpclient.HttpEntity r12 = r13.getEntity()
            if (r12 == 0) goto L117
            cz.msebera.android.httpclient.entity.BufferedHttpEntity r14 = new cz.msebera.android.httpclient.entity.BufferedHttpEntity
            r14.<init>(r12)
            r13.setEntity(r14)
        L117:
            r2.close()
            cz.msebera.android.httpclient.impl.execchain.TunnelRefusedException r12 = new cz.msebera.android.httpclient.impl.execchain.TunnelRefusedException
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            java.lang.String r0 = "CONNECT refused by proxy: "
            r14.append(r0)
            cz.msebera.android.httpclient.StatusLine r0 = r13.getStatusLine()
            r14.append(r0)
            java.lang.String r14 = r14.toString()
            r12.<init>(r14, r13)
            throw r12
        L135:
            java.net.Socket r12 = r2.getSocket()
            return r12
        L13a:
            cz.msebera.android.httpclient.HttpException r12 = new cz.msebera.android.httpclient.HttpException
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            java.lang.String r0 = "Unexpected response to CONNECT request: "
            r14.append(r0)
            cz.msebera.android.httpclient.StatusLine r13 = r13.getStatusLine()
            r14.append(r13)
            java.lang.String r13 = r14.toString()
            r12.<init>(r13)
            throw r12
    }
}
