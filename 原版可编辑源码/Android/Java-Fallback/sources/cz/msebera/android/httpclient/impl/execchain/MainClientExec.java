package cz.msebera.android.httpclient.impl.execchain;

@cz.msebera.android.httpclient.annotation.Immutable
public class MainClientExec implements cz.msebera.android.httpclient.impl.execchain.ClientExecChain {
    private final cz.msebera.android.httpclient.impl.auth.HttpAuthenticator authenticator;
    private final cz.msebera.android.httpclient.conn.HttpClientConnectionManager connManager;
    private final cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy keepAliveStrategy;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final cz.msebera.android.httpclient.client.AuthenticationStrategy proxyAuthStrategy;
    private final cz.msebera.android.httpclient.protocol.HttpProcessor proxyHttpProcessor;
    private final cz.msebera.android.httpclient.protocol.HttpRequestExecutor requestExecutor;
    private final cz.msebera.android.httpclient.ConnectionReuseStrategy reuseStrategy;
    private final cz.msebera.android.httpclient.conn.routing.HttpRouteDirector routeDirector;
    private final cz.msebera.android.httpclient.client.AuthenticationStrategy targetAuthStrategy;
    private final cz.msebera.android.httpclient.client.UserTokenHandler userTokenHandler;

    public MainClientExec(cz.msebera.android.httpclient.protocol.HttpRequestExecutor r10, cz.msebera.android.httpclient.conn.HttpClientConnectionManager r11, cz.msebera.android.httpclient.ConnectionReuseStrategy r12, cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy r13, cz.msebera.android.httpclient.client.AuthenticationStrategy r14, cz.msebera.android.httpclient.client.AuthenticationStrategy r15, cz.msebera.android.httpclient.client.UserTokenHandler r16) {
            r9 = this;
            cz.msebera.android.httpclient.protocol.ImmutableHttpProcessor r5 = new cz.msebera.android.httpclient.protocol.ImmutableHttpProcessor
            r0 = 1
            cz.msebera.android.httpclient.HttpRequestInterceptor[] r0 = new cz.msebera.android.httpclient.HttpRequestInterceptor[r0]
            cz.msebera.android.httpclient.protocol.RequestTargetHost r1 = new cz.msebera.android.httpclient.protocol.RequestTargetHost
            r1.<init>()
            r2 = 0
            r0[r2] = r1
            r5.<init>(r0)
            r0 = r9
            r1 = r10
            r2 = r11
            r3 = r12
            r4 = r13
            r6 = r14
            r7 = r15
            r8 = r16
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public MainClientExec(cz.msebera.android.httpclient.protocol.HttpRequestExecutor r3, cz.msebera.android.httpclient.conn.HttpClientConnectionManager r4, cz.msebera.android.httpclient.ConnectionReuseStrategy r5, cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy r6, cz.msebera.android.httpclient.protocol.HttpProcessor r7, cz.msebera.android.httpclient.client.AuthenticationStrategy r8, cz.msebera.android.httpclient.client.AuthenticationStrategy r9, cz.msebera.android.httpclient.client.UserTokenHandler r10) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            java.lang.String r0 = "HTTP request executor"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "Client connection manager"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.lang.String r0 = "Connection reuse strategy"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            java.lang.String r0 = "Connection keep alive strategy"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            java.lang.String r0 = "Proxy HTTP processor"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r0)
            java.lang.String r0 = "Target authentication strategy"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)
            java.lang.String r0 = "Proxy authentication strategy"
            cz.msebera.android.httpclient.util.Args.notNull(r9, r0)
            java.lang.String r0 = "User token handler"
            cz.msebera.android.httpclient.util.Args.notNull(r10, r0)
            cz.msebera.android.httpclient.impl.auth.HttpAuthenticator r0 = new cz.msebera.android.httpclient.impl.auth.HttpAuthenticator
            r0.<init>()
            r2.authenticator = r0
            cz.msebera.android.httpclient.conn.routing.BasicRouteDirector r0 = new cz.msebera.android.httpclient.conn.routing.BasicRouteDirector
            r0.<init>()
            r2.routeDirector = r0
            r2.requestExecutor = r3
            r2.connManager = r4
            r2.reuseStrategy = r5
            r2.keepAliveStrategy = r6
            r2.proxyHttpProcessor = r7
            r2.targetAuthStrategy = r8
            r2.proxyAuthStrategy = r9
            r2.userTokenHandler = r10
            return
    }

    private boolean createTunnelToProxy(cz.msebera.android.httpclient.conn.routing.HttpRoute r1, int r2, cz.msebera.android.httpclient.client.protocol.HttpClientContext r3) throws cz.msebera.android.httpclient.HttpException {
            r0 = this;
            cz.msebera.android.httpclient.HttpException r1 = new cz.msebera.android.httpclient.HttpException
            java.lang.String r2 = "Proxy chains are not supported."
            r1.<init>(r2)
            throw r1
    }

    private boolean createTunnelToTarget(cz.msebera.android.httpclient.auth.AuthState r17, cz.msebera.android.httpclient.HttpClientConnection r18, cz.msebera.android.httpclient.conn.routing.HttpRoute r19, cz.msebera.android.httpclient.HttpRequest r20, cz.msebera.android.httpclient.client.protocol.HttpClientContext r21) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r16 = this;
            r0 = r16
            r1 = r18
            r8 = r21
            cz.msebera.android.httpclient.client.config.RequestConfig r9 = r21.getRequestConfig()
            int r10 = r9.getConnectTimeout()
            cz.msebera.android.httpclient.HttpHost r2 = r19.getTargetHost()
            cz.msebera.android.httpclient.HttpHost r11 = r19.getProxyHost()
            java.lang.String r2 = r2.toHostString()
            cz.msebera.android.httpclient.message.BasicHttpRequest r12 = new cz.msebera.android.httpclient.message.BasicHttpRequest
            cz.msebera.android.httpclient.ProtocolVersion r3 = r20.getProtocolVersion()
            java.lang.String r4 = "CONNECT"
            r12.<init>(r4, r2, r3)
            cz.msebera.android.httpclient.protocol.HttpRequestExecutor r2 = r0.requestExecutor
            cz.msebera.android.httpclient.protocol.HttpProcessor r3 = r0.proxyHttpProcessor
            r2.preProcess(r12, r3, r8)
            r13 = 0
        L2d:
            r2 = r13
        L2e:
            r3 = 0
            if (r2 != 0) goto Lce
            boolean r2 = r18.isOpen()
            if (r2 != 0) goto L45
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r2 = r0.connManager
            if (r10 <= 0) goto L3f
            r14 = r19
            r3 = r10
            goto L41
        L3f:
            r14 = r19
        L41:
            r2.connect(r1, r14, r3, r8)
            goto L47
        L45:
            r14 = r19
        L47:
            java.lang.String r2 = "Proxy-Authorization"
            r12.removeHeaders(r2)
            cz.msebera.android.httpclient.impl.auth.HttpAuthenticator r2 = r0.authenticator
            r15 = r17
            r2.generateAuthResponse(r12, r15, r8)
            cz.msebera.android.httpclient.protocol.HttpRequestExecutor r2 = r0.requestExecutor
            cz.msebera.android.httpclient.HttpResponse r7 = r2.execute(r12, r1, r8)
            cz.msebera.android.httpclient.StatusLine r2 = r7.getStatusLine()
            int r2 = r2.getStatusCode()
            r3 = 200(0xc8, float:2.8E-43)
            if (r2 < r3) goto Lb2
            boolean r2 = r9.isAuthenticationEnabled()
            if (r2 == 0) goto Lae
            cz.msebera.android.httpclient.impl.auth.HttpAuthenticator r2 = r0.authenticator
            cz.msebera.android.httpclient.client.AuthenticationStrategy r5 = r0.proxyAuthStrategy
            r3 = r11
            r4 = r7
            r6 = r17
            r20 = r7
            r7 = r21
            boolean r2 = r2.isAuthenticationRequested(r3, r4, r5, r6, r7)
            if (r2 == 0) goto Lab
            cz.msebera.android.httpclient.impl.auth.HttpAuthenticator r2 = r0.authenticator
            cz.msebera.android.httpclient.client.AuthenticationStrategy r5 = r0.proxyAuthStrategy
            r3 = r11
            r4 = r20
            r6 = r17
            r7 = r21
            boolean r2 = r2.handleAuthChallenge(r3, r4, r5, r6, r7)
            if (r2 == 0) goto Lab
            cz.msebera.android.httpclient.ConnectionReuseStrategy r2 = r0.reuseStrategy
            r3 = r20
            boolean r2 = r2.keepAlive(r3, r8)
            if (r2 == 0) goto La7
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r0.log
            java.lang.String r4 = "Connection kept alive"
            r2.debug(r4)
            cz.msebera.android.httpclient.HttpEntity r2 = r3.getEntity()
            cz.msebera.android.httpclient.util.EntityUtils.consume(r2)
            goto L2d
        La7:
            r18.close()
            goto L2d
        Lab:
            r3 = r20
            goto Laf
        Lae:
            r3 = r7
        Laf:
            r2 = r3
            goto L2e
        Lb2:
            r3 = r7
            cz.msebera.android.httpclient.HttpException r1 = new cz.msebera.android.httpclient.HttpException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "Unexpected response to CONNECT request: "
            r2.append(r4)
            cz.msebera.android.httpclient.StatusLine r3 = r3.getStatusLine()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        Lce:
            cz.msebera.android.httpclient.StatusLine r4 = r2.getStatusLine()
            int r4 = r4.getStatusCode()
            r5 = 299(0x12b, float:4.19E-43)
            if (r4 <= r5) goto L106
            cz.msebera.android.httpclient.HttpEntity r3 = r2.getEntity()
            if (r3 == 0) goto Le8
            cz.msebera.android.httpclient.entity.BufferedHttpEntity r4 = new cz.msebera.android.httpclient.entity.BufferedHttpEntity
            r4.<init>(r3)
            r2.setEntity(r4)
        Le8:
            r18.close()
            cz.msebera.android.httpclient.impl.execchain.TunnelRefusedException r1 = new cz.msebera.android.httpclient.impl.execchain.TunnelRefusedException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "CONNECT refused by proxy: "
            r3.append(r4)
            cz.msebera.android.httpclient.StatusLine r4 = r2.getStatusLine()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r1.<init>(r3, r2)
            throw r1
        L106:
            return r3
    }

    private boolean needAuthentication(cz.msebera.android.httpclient.auth.AuthState r11, cz.msebera.android.httpclient.auth.AuthState r12, cz.msebera.android.httpclient.conn.routing.HttpRoute r13, cz.msebera.android.httpclient.HttpResponse r14, cz.msebera.android.httpclient.client.protocol.HttpClientContext r15) {
            r10 = this;
            cz.msebera.android.httpclient.client.config.RequestConfig r0 = r15.getRequestConfig()
            boolean r0 = r0.isAuthenticationEnabled()
            if (r0 == 0) goto L70
            cz.msebera.android.httpclient.HttpHost r0 = r15.getTargetHost()
            if (r0 != 0) goto L14
            cz.msebera.android.httpclient.HttpHost r0 = r13.getTargetHost()
        L14:
            int r1 = r0.getPort()
            if (r1 >= 0) goto L30
            cz.msebera.android.httpclient.HttpHost r1 = new cz.msebera.android.httpclient.HttpHost
            java.lang.String r2 = r0.getHostName()
            cz.msebera.android.httpclient.HttpHost r3 = r13.getTargetHost()
            int r3 = r3.getPort()
            java.lang.String r0 = r0.getSchemeName()
            r1.<init>(r2, r3, r0)
            r0 = r1
        L30:
            cz.msebera.android.httpclient.impl.auth.HttpAuthenticator r4 = r10.authenticator
            cz.msebera.android.httpclient.client.AuthenticationStrategy r7 = r10.targetAuthStrategy
            r5 = r0
            r6 = r14
            r8 = r11
            r9 = r15
            boolean r1 = r4.isAuthenticationRequested(r5, r6, r7, r8, r9)
            cz.msebera.android.httpclient.HttpHost r2 = r13.getProxyHost()
            if (r2 != 0) goto L46
            cz.msebera.android.httpclient.HttpHost r2 = r13.getTargetHost()
        L46:
            cz.msebera.android.httpclient.impl.auth.HttpAuthenticator r3 = r10.authenticator
            cz.msebera.android.httpclient.client.AuthenticationStrategy r6 = r10.proxyAuthStrategy
            r4 = r2
            r5 = r14
            r7 = r12
            r8 = r15
            boolean r13 = r3.isAuthenticationRequested(r4, r5, r6, r7, r8)
            if (r1 == 0) goto L61
            cz.msebera.android.httpclient.impl.auth.HttpAuthenticator r4 = r10.authenticator
            cz.msebera.android.httpclient.client.AuthenticationStrategy r7 = r10.targetAuthStrategy
            r5 = r0
            r6 = r14
            r8 = r11
            r9 = r15
            boolean r11 = r4.handleAuthChallenge(r5, r6, r7, r8, r9)
            return r11
        L61:
            if (r13 == 0) goto L70
            cz.msebera.android.httpclient.impl.auth.HttpAuthenticator r3 = r10.authenticator
            cz.msebera.android.httpclient.client.AuthenticationStrategy r6 = r10.proxyAuthStrategy
            r4 = r2
            r5 = r14
            r7 = r12
            r8 = r15
            boolean r11 = r3.handleAuthChallenge(r4, r5, r6, r7, r8)
            return r11
        L70:
            r11 = 0
            return r11
    }

    void establishRoute(cz.msebera.android.httpclient.auth.AuthState r8, cz.msebera.android.httpclient.HttpClientConnection r9, cz.msebera.android.httpclient.conn.routing.HttpRoute r10, cz.msebera.android.httpclient.HttpRequest r11, cz.msebera.android.httpclient.client.protocol.HttpClientContext r12) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r7 = this;
            cz.msebera.android.httpclient.client.config.RequestConfig r0 = r12.getRequestConfig()
            int r0 = r0.getConnectTimeout()
            cz.msebera.android.httpclient.conn.routing.RouteTracker r1 = new cz.msebera.android.httpclient.conn.routing.RouteTracker
            r1.<init>(r10)
        Ld:
            cz.msebera.android.httpclient.conn.routing.HttpRoute r2 = r1.toRoute()
            cz.msebera.android.httpclient.conn.routing.HttpRouteDirector r3 = r7.routeDirector
            int r3 = r3.nextStep(r10, r2)
            r4 = 0
            switch(r3) {
                case -1: goto L96;
                case 0: goto L8e;
                case 1: goto L7e;
                case 2: goto L6c;
                case 3: goto L5d;
                case 4: goto L44;
                case 5: goto L37;
                default: goto L1b;
            }
        L1b:
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "Unknown step indicator "
            r9.append(r10)
            r9.append(r3)
            java.lang.String r10 = " from RouteDirector."
            r9.append(r10)
            java.lang.String r9 = r9.toString()
            r8.<init>(r9)
            throw r8
        L37:
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r2 = r7.connManager
            r2.upgrade(r9, r10, r12)
            boolean r2 = r10.isSecure()
            r1.layerProtocol(r2)
            goto L93
        L44:
            int r2 = r2.getHopCount()
            int r2 = r2 + (-1)
            boolean r4 = r7.createTunnelToProxy(r10, r2, r12)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r7.log
            java.lang.String r6 = "Tunnel to proxy created."
            r5.debug(r6)
            cz.msebera.android.httpclient.HttpHost r2 = r10.getHopTarget(r2)
            r1.tunnelProxy(r2, r4)
            goto L93
        L5d:
            boolean r2 = r7.createTunnelToTarget(r8, r9, r10, r11, r12)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r7.log
            java.lang.String r5 = "Tunnel to target created."
            r4.debug(r5)
            r1.tunnelTarget(r2)
            goto L93
        L6c:
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r2 = r7.connManager
            if (r0 <= 0) goto L72
            r5 = r0
            goto L73
        L72:
            r5 = 0
        L73:
            r2.connect(r9, r10, r5, r12)
            cz.msebera.android.httpclient.HttpHost r2 = r10.getProxyHost()
            r1.connectProxy(r2, r4)
            goto L93
        L7e:
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r2 = r7.connManager
            if (r0 <= 0) goto L83
            r4 = r0
        L83:
            r2.connect(r9, r10, r4, r12)
            boolean r2 = r10.isSecure()
            r1.connectTarget(r2)
            goto L93
        L8e:
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r2 = r7.connManager
            r2.routeComplete(r9, r10, r12)
        L93:
            if (r3 > 0) goto Ld
            return
        L96:
            cz.msebera.android.httpclient.HttpException r8 = new cz.msebera.android.httpclient.HttpException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r11 = "Unable to establish route: planned = "
            r9.append(r11)
            r9.append(r10)
            java.lang.String r10 = "; current = "
            r9.append(r10)
            r9.append(r2)
            java.lang.String r9 = r9.toString()
            r8.<init>(r9)
            throw r8
    }

    @Override
    public cz.msebera.android.httpclient.client.methods.CloseableHttpResponse execute(cz.msebera.android.httpclient.conn.routing.HttpRoute r25, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r26, cz.msebera.android.httpclient.client.protocol.HttpClientContext r27, cz.msebera.android.httpclient.client.methods.HttpExecutionAware r28) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r24 = this;
            r7 = r24
            r8 = r25
            r9 = r26
            r10 = r27
            r11 = r28
            java.lang.String r12 = "Proxy-Authorization"
            java.lang.String r13 = "Authorization"
            java.lang.String r1 = "HTTP route"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r1)
            java.lang.String r1 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r9, r1)
            java.lang.String r1 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r10, r1)
            cz.msebera.android.httpclient.auth.AuthState r1 = r27.getTargetAuthState()
            if (r1 != 0) goto L2d
            cz.msebera.android.httpclient.auth.AuthState r1 = new cz.msebera.android.httpclient.auth.AuthState
            r1.<init>()
            java.lang.String r2 = "http.auth.target-scope"
            r10.setAttribute(r2, r1)
        L2d:
            r14 = r1
            cz.msebera.android.httpclient.auth.AuthState r1 = r27.getProxyAuthState()
            if (r1 != 0) goto L3e
            cz.msebera.android.httpclient.auth.AuthState r1 = new cz.msebera.android.httpclient.auth.AuthState
            r1.<init>()
            java.lang.String r2 = "http.auth.proxy-scope"
            r10.setAttribute(r2, r1)
        L3e:
            r15 = r1
            boolean r1 = r9 instanceof cz.msebera.android.httpclient.HttpEntityEnclosingRequest
            if (r1 == 0) goto L49
            r1 = r9
            cz.msebera.android.httpclient.HttpEntityEnclosingRequest r1 = (cz.msebera.android.httpclient.HttpEntityEnclosingRequest) r1
            cz.msebera.android.httpclient.impl.execchain.RequestEntityProxy.enhance(r1)
        L49:
            java.lang.Object r6 = r27.getUserToken()
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r1 = r7.connManager
            cz.msebera.android.httpclient.conn.ConnectionRequest r1 = r1.requestConnection(r8, r6)
            java.lang.String r5 = "Request aborted"
            if (r11 == 0) goto L6a
            boolean r2 = r28.isAborted()
            if (r2 != 0) goto L61
            r11.setCancellable(r1)
            goto L6a
        L61:
            r1.cancel()
            cz.msebera.android.httpclient.impl.execchain.RequestAbortedException r1 = new cz.msebera.android.httpclient.impl.execchain.RequestAbortedException
            r1.<init>(r5)
            throw r1
        L6a:
            cz.msebera.android.httpclient.client.config.RequestConfig r16 = r27.getRequestConfig()
            int r2 = r16.getConnectionRequestTimeout()     // Catch: java.util.concurrent.ExecutionException -> L35d java.lang.InterruptedException -> L36f
            r17 = 0
            if (r2 <= 0) goto L78
            long r2 = (long) r2     // Catch: java.util.concurrent.ExecutionException -> L35d java.lang.InterruptedException -> L36f
            goto L7a
        L78:
            r2 = r17
        L7a:
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.util.concurrent.ExecutionException -> L35d java.lang.InterruptedException -> L36f
            cz.msebera.android.httpclient.HttpClientConnection r4 = r1.get(r2, r4)     // Catch: java.util.concurrent.ExecutionException -> L35d java.lang.InterruptedException -> L36f
            java.lang.String r1 = "http.connection"
            r10.setAttribute(r1, r4)
            boolean r1 = r16.isStaleConnectionCheckEnabled()
            if (r1 == 0) goto La8
            boolean r1 = r4.isOpen()
            if (r1 == 0) goto La8
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r7.log
            java.lang.String r2 = "Stale connection check"
            r1.debug(r2)
            boolean r1 = r4.isStale()
            if (r1 == 0) goto La8
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r7.log
            java.lang.String r2 = "Stale connection detected"
            r1.debug(r2)
            r4.close()
        La8:
            cz.msebera.android.httpclient.impl.execchain.ConnectionHolder r3 = new cz.msebera.android.httpclient.impl.execchain.ConnectionHolder
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r7.log
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r2 = r7.connManager
            r3.<init>(r1, r2, r4)
            if (r11 == 0) goto Lca
            r11.setCancellable(r3)     // Catch: java.lang.RuntimeException -> Lb7 java.io.IOException -> Lbc cz.msebera.android.httpclient.HttpException -> Lc1 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6
            goto Lca
        Lb7:
            r0 = move-exception
            r1 = r0
            r11 = r3
            goto L340
        Lbc:
            r0 = move-exception
            r1 = r0
            r11 = r3
            goto L347
        Lc1:
            r0 = move-exception
            r1 = r0
            r11 = r3
            goto L34e
        Lc6:
            r0 = move-exception
            r1 = r0
            goto L352
        Lca:
            r2 = 1
            r1 = 1
        Lcc:
            if (r1 <= r2) goto Ldd
            boolean r19 = cz.msebera.android.httpclient.impl.execchain.RequestEntityProxy.isRepeatable(r26)     // Catch: java.lang.RuntimeException -> Lb7 java.io.IOException -> Lbc cz.msebera.android.httpclient.HttpException -> Lc1 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6
            if (r19 == 0) goto Ld5
            goto Ldd
        Ld5:
            cz.msebera.android.httpclient.client.NonRepeatableRequestException r1 = new cz.msebera.android.httpclient.client.NonRepeatableRequestException     // Catch: java.lang.RuntimeException -> Lb7 java.io.IOException -> Lbc cz.msebera.android.httpclient.HttpException -> Lc1 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6
            java.lang.String r2 = "Cannot retry request with a non-repeatable request entity."
            r1.<init>(r2)     // Catch: java.lang.RuntimeException -> Lb7 java.io.IOException -> Lbc cz.msebera.android.httpclient.HttpException -> Lc1 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6
            throw r1     // Catch: java.lang.RuntimeException -> Lb7 java.io.IOException -> Lbc cz.msebera.android.httpclient.HttpException -> Lc1 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6
        Ldd:
            if (r11 == 0) goto Lec
            boolean r19 = r28.isAborted()     // Catch: java.lang.RuntimeException -> Lb7 java.io.IOException -> Lbc cz.msebera.android.httpclient.HttpException -> Lc1 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6
            if (r19 != 0) goto Le6
            goto Lec
        Le6:
            cz.msebera.android.httpclient.impl.execchain.RequestAbortedException r1 = new cz.msebera.android.httpclient.impl.execchain.RequestAbortedException     // Catch: java.lang.RuntimeException -> Lb7 java.io.IOException -> Lbc cz.msebera.android.httpclient.HttpException -> Lc1 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6
            r1.<init>(r5)     // Catch: java.lang.RuntimeException -> Lb7 java.io.IOException -> Lbc cz.msebera.android.httpclient.HttpException -> Lc1 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6
            throw r1     // Catch: java.lang.RuntimeException -> Lb7 java.io.IOException -> Lbc cz.msebera.android.httpclient.HttpException -> Lc1 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6
        Lec:
            boolean r19 = r4.isOpen()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L33d java.io.IOException -> L344 cz.msebera.android.httpclient.HttpException -> L34b
            if (r19 != 0) goto L13f
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r7.log     // Catch: java.lang.RuntimeException -> Lb7 java.io.IOException -> Lbc cz.msebera.android.httpclient.HttpException -> Lc1 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6
            r20 = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.RuntimeException -> Lb7 java.io.IOException -> Lbc cz.msebera.android.httpclient.HttpException -> Lc1 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6
            r1.<init>()     // Catch: java.lang.RuntimeException -> Lb7 java.io.IOException -> Lbc cz.msebera.android.httpclient.HttpException -> Lc1 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6
            r21 = r3
            java.lang.String r3 = "Opening connection "
            r1.append(r3)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r1.append(r8)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            java.lang.String r1 = r1.toString()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r2.debug(r1)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r1 = r24
            r19 = 1
            r2 = r15
            r8 = r21
            r3 = r4
            r8 = r4
            r4 = r25
            r22 = r15
            r15 = r5
            r5 = r26
            r23 = r6
            r6 = r27
            r1.establishRoute(r2, r3, r4, r5, r6)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 cz.msebera.android.httpclient.impl.execchain.TunnelRefusedException -> L124 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            goto L14b
        L124:
            r0 = move-exception
            r1 = r0
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r7.log     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            boolean r2 = r2.isDebugEnabled()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            if (r2 == 0) goto L137
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r7.log     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            java.lang.String r3 = r1.getMessage()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r2.debug(r3)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
        L137:
            cz.msebera.android.httpclient.HttpResponse r1 = r1.getResponse()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r11 = r21
            goto L2f9
        L13f:
            r20 = r1
            r21 = r3
            r8 = r4
            r23 = r6
            r22 = r15
            r19 = 1
            r15 = r5
        L14b:
            int r1 = r16.getSocketTimeout()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L331 java.io.IOException -> L335 cz.msebera.android.httpclient.HttpException -> L339
            if (r1 < 0) goto L167
            r8.setSocketTimeout(r1)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            goto L167
        L155:
            r0 = move-exception
            r1 = r0
            r11 = r21
            goto L340
        L15b:
            r0 = move-exception
            r1 = r0
            r11 = r21
            goto L347
        L161:
            r0 = move-exception
            r1 = r0
            r11 = r21
            goto L34e
        L167:
            if (r11 == 0) goto L176
            boolean r1 = r28.isAborted()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            if (r1 != 0) goto L170
            goto L176
        L170:
            cz.msebera.android.httpclient.impl.execchain.RequestAbortedException r1 = new cz.msebera.android.httpclient.impl.execchain.RequestAbortedException     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r1.<init>(r15)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            throw r1     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
        L176:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r7.log     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L331 java.io.IOException -> L335 cz.msebera.android.httpclient.HttpException -> L339
            boolean r1 = r1.isDebugEnabled()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L331 java.io.IOException -> L335 cz.msebera.android.httpclient.HttpException -> L339
            if (r1 == 0) goto L198
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r7.log     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r2.<init>()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            java.lang.String r3 = "Executing request "
            r2.append(r3)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            cz.msebera.android.httpclient.RequestLine r3 = r26.getRequestLine()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r2.append(r3)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            java.lang.String r2 = r2.toString()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r1.debug(r2)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
        L198:
            boolean r1 = r9.containsHeader(r13)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L331 java.io.IOException -> L335 cz.msebera.android.httpclient.HttpException -> L339
            if (r1 != 0) goto L1c5
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r7.log     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            boolean r1 = r1.isDebugEnabled()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            if (r1 == 0) goto L1c0
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r7.log     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r2.<init>()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            java.lang.String r3 = "Target auth state: "
            r2.append(r3)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            cz.msebera.android.httpclient.auth.AuthProtocolState r3 = r14.getState()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r2.append(r3)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            java.lang.String r2 = r2.toString()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r1.debug(r2)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
        L1c0:
            cz.msebera.android.httpclient.impl.auth.HttpAuthenticator r1 = r7.authenticator     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r1.generateAuthResponse(r9, r14, r10)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
        L1c5:
            boolean r1 = r9.containsHeader(r12)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L331 java.io.IOException -> L335 cz.msebera.android.httpclient.HttpException -> L339
            if (r1 != 0) goto L1fb
            boolean r1 = r25.isTunnelled()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            if (r1 != 0) goto L1fb
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r7.log     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            boolean r1 = r1.isDebugEnabled()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            if (r1 == 0) goto L1f3
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r7.log     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r2.<init>()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            java.lang.String r3 = "Proxy auth state: "
            r2.append(r3)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            cz.msebera.android.httpclient.auth.AuthProtocolState r3 = r22.getState()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r2.append(r3)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            java.lang.String r2 = r2.toString()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r1.debug(r2)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
        L1f3:
            cz.msebera.android.httpclient.impl.auth.HttpAuthenticator r1 = r7.authenticator     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r6 = r22
            r1.generateAuthResponse(r9, r6, r10)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            goto L1fd
        L1fb:
            r6 = r22
        L1fd:
            cz.msebera.android.httpclient.protocol.HttpRequestExecutor r1 = r7.requestExecutor     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L331 java.io.IOException -> L335 cz.msebera.android.httpclient.HttpException -> L339
            cz.msebera.android.httpclient.HttpResponse r5 = r1.execute(r9, r8, r10)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L331 java.io.IOException -> L335 cz.msebera.android.httpclient.HttpException -> L339
            cz.msebera.android.httpclient.ConnectionReuseStrategy r1 = r7.reuseStrategy     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L331 java.io.IOException -> L335 cz.msebera.android.httpclient.HttpException -> L339
            boolean r1 = r1.keepAlive(r5, r10)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L331 java.io.IOException -> L335 cz.msebera.android.httpclient.HttpException -> L339
            if (r1 == 0) goto L261
            cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy r1 = r7.keepAliveStrategy     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L331 java.io.IOException -> L335 cz.msebera.android.httpclient.HttpException -> L339
            long r1 = r1.getKeepAliveDuration(r5, r10)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L331 java.io.IOException -> L335 cz.msebera.android.httpclient.HttpException -> L339
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r7.log     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L331 java.io.IOException -> L335 cz.msebera.android.httpclient.HttpException -> L339
            boolean r3 = r3.isDebugEnabled()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L331 java.io.IOException -> L335 cz.msebera.android.httpclient.HttpException -> L339
            if (r3 == 0) goto L254
            int r3 = (r1 > r17 ? 1 : (r1 == r17 ? 0 : -1))
            if (r3 <= 0) goto L239
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r3.<init>()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            java.lang.String r4 = "for "
            r3.append(r4)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r3.append(r1)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            java.lang.String r4 = " "
            r3.append(r4)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r3.append(r4)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            java.lang.String r3 = r3.toString()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            goto L23b
        L239:
            java.lang.String r3 = "indefinitely"
        L23b:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r7.log     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r22 = r5
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r5.<init>()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            java.lang.String r11 = "Connection can be kept alive "
            r5.append(r11)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r5.append(r3)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            java.lang.String r3 = r5.toString()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            r4.debug(r3)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L155 java.io.IOException -> L15b cz.msebera.android.httpclient.HttpException -> L161
            goto L256
        L254:
            r22 = r5
        L256:
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L331 java.io.IOException -> L335 cz.msebera.android.httpclient.HttpException -> L339
            r11 = r21
            r11.setValidFor(r1, r3)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            r11.markReusable()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            goto L268
        L261:
            r22 = r5
            r11 = r21
            r11.markNonReusable()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
        L268:
            r1 = r24
            r2 = r14
            r3 = r6
            r4 = r25
            r21 = r22
            r5 = r21
            r22 = r6
            r6 = r27
            boolean r1 = r1.needAuthentication(r2, r3, r4, r5, r6)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            if (r1 == 0) goto L2f7
            cz.msebera.android.httpclient.HttpEntity r1 = r21.getEntity()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            boolean r2 = r11.isReusable()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            if (r2 == 0) goto L28a
            cz.msebera.android.httpclient.util.EntityUtils.consume(r1)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            goto L2d1
        L28a:
            r8.close()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            cz.msebera.android.httpclient.auth.AuthProtocolState r1 = r22.getState()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            cz.msebera.android.httpclient.auth.AuthProtocolState r2 = cz.msebera.android.httpclient.auth.AuthProtocolState.SUCCESS     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            if (r1 != r2) goto L2af
            cz.msebera.android.httpclient.auth.AuthScheme r1 = r22.getAuthScheme()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            if (r1 == 0) goto L2af
            cz.msebera.android.httpclient.auth.AuthScheme r1 = r22.getAuthScheme()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            boolean r1 = r1.isConnectionBased()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            if (r1 == 0) goto L2af
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r7.log     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            java.lang.String r2 = "Resetting proxy auth state"
            r1.debug(r2)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            r22.reset()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
        L2af:
            cz.msebera.android.httpclient.auth.AuthProtocolState r1 = r14.getState()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            cz.msebera.android.httpclient.auth.AuthProtocolState r2 = cz.msebera.android.httpclient.auth.AuthProtocolState.SUCCESS     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            if (r1 != r2) goto L2d1
            cz.msebera.android.httpclient.auth.AuthScheme r1 = r14.getAuthScheme()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            if (r1 == 0) goto L2d1
            cz.msebera.android.httpclient.auth.AuthScheme r1 = r14.getAuthScheme()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            boolean r1 = r1.isConnectionBased()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            if (r1 == 0) goto L2d1
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r7.log     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            java.lang.String r2 = "Resetting target auth state"
            r1.debug(r2)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            r14.reset()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
        L2d1:
            cz.msebera.android.httpclient.HttpRequest r1 = r26.getOriginal()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            boolean r2 = r1.containsHeader(r13)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            if (r2 != 0) goto L2de
            r9.removeHeaders(r13)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
        L2de:
            boolean r1 = r1.containsHeader(r12)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            if (r1 != 0) goto L2e7
            r9.removeHeaders(r12)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
        L2e7:
            int r1 = r20 + 1
            r4 = r8
            r3 = r11
            r5 = r15
            r15 = r22
            r6 = r23
            r2 = 1
            r8 = r25
            r11 = r28
            goto Lcc
        L2f7:
            r1 = r21
        L2f9:
            if (r23 != 0) goto L30d
            cz.msebera.android.httpclient.client.UserTokenHandler r2 = r7.userTokenHandler     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            java.lang.Object r6 = r2.getUserToken(r10)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            java.lang.String r2 = "http.user-token"
            r10.setAttribute(r2, r6)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            goto L30f
        L307:
            r0 = move-exception
            goto L33f
        L309:
            r0 = move-exception
            goto L346
        L30b:
            r0 = move-exception
            goto L34d
        L30d:
            r6 = r23
        L30f:
            if (r6 == 0) goto L314
            r11.setState(r6)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
        L314:
            cz.msebera.android.httpclient.HttpEntity r2 = r1.getEntity()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            if (r2 == 0) goto L327
            boolean r2 = r2.isStreaming()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            if (r2 != 0) goto L321
            goto L327
        L321:
            cz.msebera.android.httpclient.impl.execchain.HttpResponseProxy r2 = new cz.msebera.android.httpclient.impl.execchain.HttpResponseProxy     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            r2.<init>(r1, r11)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            return r2
        L327:
            r11.releaseConnection()     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            cz.msebera.android.httpclient.impl.execchain.HttpResponseProxy r2 = new cz.msebera.android.httpclient.impl.execchain.HttpResponseProxy     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            r3 = 0
            r2.<init>(r1, r3)     // Catch: cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> Lc6 java.lang.RuntimeException -> L307 java.io.IOException -> L309 cz.msebera.android.httpclient.HttpException -> L30b
            return r2
        L331:
            r0 = move-exception
            r11 = r21
            goto L33f
        L335:
            r0 = move-exception
            r11 = r21
            goto L346
        L339:
            r0 = move-exception
            r11 = r21
            goto L34d
        L33d:
            r0 = move-exception
            r11 = r3
        L33f:
            r1 = r0
        L340:
            r11.abortConnection()
            throw r1
        L344:
            r0 = move-exception
            r11 = r3
        L346:
            r1 = r0
        L347:
            r11.abortConnection()
            throw r1
        L34b:
            r0 = move-exception
            r11 = r3
        L34d:
            r1 = r0
        L34e:
            r11.abortConnection()
            throw r1
        L352:
            java.io.InterruptedIOException r2 = new java.io.InterruptedIOException
            java.lang.String r3 = "Connection has been shut down"
            r2.<init>(r3)
            r2.initCause(r1)
            throw r2
        L35d:
            r0 = move-exception
            r1 = r0
            java.lang.Throwable r2 = r1.getCause()
            if (r2 != 0) goto L366
            goto L367
        L366:
            r1 = r2
        L367:
            cz.msebera.android.httpclient.impl.execchain.RequestAbortedException r2 = new cz.msebera.android.httpclient.impl.execchain.RequestAbortedException
            java.lang.String r3 = "Request execution failed"
            r2.<init>(r3, r1)
            throw r2
        L36f:
            r0 = move-exception
            r15 = r5
            r1 = r0
            java.lang.Thread r2 = java.lang.Thread.currentThread()
            r2.interrupt()
            cz.msebera.android.httpclient.impl.execchain.RequestAbortedException r2 = new cz.msebera.android.httpclient.impl.execchain.RequestAbortedException
            r2.<init>(r15, r1)
            throw r2
    }
}
