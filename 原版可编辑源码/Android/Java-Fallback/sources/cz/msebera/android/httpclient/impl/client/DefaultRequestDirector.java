package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public class DefaultRequestDirector implements cz.msebera.android.httpclient.client.RequestDirector {
    private final cz.msebera.android.httpclient.impl.client.HttpAuthenticator authenticator;
    protected final cz.msebera.android.httpclient.conn.ClientConnectionManager connManager;
    private int execCount;
    protected final cz.msebera.android.httpclient.protocol.HttpProcessor httpProcessor;
    protected final cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy keepAliveStrategy;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    protected cz.msebera.android.httpclient.conn.ManagedClientConnection managedConn;
    private final int maxRedirects;
    protected final cz.msebera.android.httpclient.params.HttpParams params;

    @java.lang.Deprecated
    protected final cz.msebera.android.httpclient.client.AuthenticationHandler proxyAuthHandler;
    protected final cz.msebera.android.httpclient.auth.AuthState proxyAuthState;
    protected final cz.msebera.android.httpclient.client.AuthenticationStrategy proxyAuthStrategy;
    private int redirectCount;

    @java.lang.Deprecated
    protected final cz.msebera.android.httpclient.client.RedirectHandler redirectHandler;
    protected final cz.msebera.android.httpclient.client.RedirectStrategy redirectStrategy;
    protected final cz.msebera.android.httpclient.protocol.HttpRequestExecutor requestExec;
    protected final cz.msebera.android.httpclient.client.HttpRequestRetryHandler retryHandler;
    protected final cz.msebera.android.httpclient.ConnectionReuseStrategy reuseStrategy;
    protected final cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner routePlanner;

    @java.lang.Deprecated
    protected final cz.msebera.android.httpclient.client.AuthenticationHandler targetAuthHandler;
    protected final cz.msebera.android.httpclient.auth.AuthState targetAuthState;
    protected final cz.msebera.android.httpclient.client.AuthenticationStrategy targetAuthStrategy;
    protected final cz.msebera.android.httpclient.client.UserTokenHandler userTokenHandler;
    private cz.msebera.android.httpclient.HttpHost virtualHost;

    @java.lang.Deprecated
    public DefaultRequestDirector(cz.msebera.android.httpclient.extras.HttpClientAndroidLog r15, cz.msebera.android.httpclient.protocol.HttpRequestExecutor r16, cz.msebera.android.httpclient.conn.ClientConnectionManager r17, cz.msebera.android.httpclient.ConnectionReuseStrategy r18, cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy r19, cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner r20, cz.msebera.android.httpclient.protocol.HttpProcessor r21, cz.msebera.android.httpclient.client.HttpRequestRetryHandler r22, cz.msebera.android.httpclient.client.RedirectStrategy r23, cz.msebera.android.httpclient.client.AuthenticationHandler r24, cz.msebera.android.httpclient.client.AuthenticationHandler r25, cz.msebera.android.httpclient.client.UserTokenHandler r26, cz.msebera.android.httpclient.params.HttpParams r27) {
            r14 = this;
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class<cz.msebera.android.httpclient.impl.client.DefaultRequestDirector> r0 = cz.msebera.android.httpclient.impl.client.DefaultRequestDirector.class
            r1.<init>(r0)
            cz.msebera.android.httpclient.impl.client.AuthenticationStrategyAdaptor r10 = new cz.msebera.android.httpclient.impl.client.AuthenticationStrategyAdaptor
            r0 = r24
            r10.<init>(r0)
            cz.msebera.android.httpclient.impl.client.AuthenticationStrategyAdaptor r11 = new cz.msebera.android.httpclient.impl.client.AuthenticationStrategyAdaptor
            r0 = r25
            r11.<init>(r0)
            r0 = r14
            r2 = r16
            r3 = r17
            r4 = r18
            r5 = r19
            r6 = r20
            r7 = r21
            r8 = r22
            r9 = r23
            r12 = r26
            r13 = r27
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
            return
    }

    public DefaultRequestDirector(cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2, cz.msebera.android.httpclient.protocol.HttpRequestExecutor r3, cz.msebera.android.httpclient.conn.ClientConnectionManager r4, cz.msebera.android.httpclient.ConnectionReuseStrategy r5, cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy r6, cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner r7, cz.msebera.android.httpclient.protocol.HttpProcessor r8, cz.msebera.android.httpclient.client.HttpRequestRetryHandler r9, cz.msebera.android.httpclient.client.RedirectStrategy r10, cz.msebera.android.httpclient.client.AuthenticationStrategy r11, cz.msebera.android.httpclient.client.AuthenticationStrategy r12, cz.msebera.android.httpclient.client.UserTokenHandler r13, cz.msebera.android.httpclient.params.HttpParams r14) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Log"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Request executor"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "Client connection manager"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.lang.String r0 = "Connection reuse strategy"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            java.lang.String r0 = "Connection keep alive strategy"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            java.lang.String r0 = "Route planner"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r0)
            java.lang.String r0 = "HTTP protocol processor"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)
            java.lang.String r0 = "HTTP request retry handler"
            cz.msebera.android.httpclient.util.Args.notNull(r9, r0)
            java.lang.String r0 = "Redirect strategy"
            cz.msebera.android.httpclient.util.Args.notNull(r10, r0)
            java.lang.String r0 = "Target authentication strategy"
            cz.msebera.android.httpclient.util.Args.notNull(r11, r0)
            java.lang.String r0 = "Proxy authentication strategy"
            cz.msebera.android.httpclient.util.Args.notNull(r12, r0)
            java.lang.String r0 = "User token handler"
            cz.msebera.android.httpclient.util.Args.notNull(r13, r0)
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r14, r0)
            r1.log = r2
            cz.msebera.android.httpclient.impl.client.HttpAuthenticator r0 = new cz.msebera.android.httpclient.impl.client.HttpAuthenticator
            r0.<init>(r2)
            r1.authenticator = r0
            r1.requestExec = r3
            r1.connManager = r4
            r1.reuseStrategy = r5
            r1.keepAliveStrategy = r6
            r1.routePlanner = r7
            r1.httpProcessor = r8
            r1.retryHandler = r9
            r1.redirectStrategy = r10
            r1.targetAuthStrategy = r11
            r1.proxyAuthStrategy = r12
            r1.userTokenHandler = r13
            r1.params = r14
            boolean r2 = r10 instanceof cz.msebera.android.httpclient.impl.client.DefaultRedirectStrategyAdaptor
            r3 = 0
            if (r2 == 0) goto L73
            cz.msebera.android.httpclient.impl.client.DefaultRedirectStrategyAdaptor r10 = (cz.msebera.android.httpclient.impl.client.DefaultRedirectStrategyAdaptor) r10
            cz.msebera.android.httpclient.client.RedirectHandler r2 = r10.getHandler()
            r1.redirectHandler = r2
            goto L75
        L73:
            r1.redirectHandler = r3
        L75:
            boolean r2 = r11 instanceof cz.msebera.android.httpclient.impl.client.AuthenticationStrategyAdaptor
            if (r2 == 0) goto L82
            cz.msebera.android.httpclient.impl.client.AuthenticationStrategyAdaptor r11 = (cz.msebera.android.httpclient.impl.client.AuthenticationStrategyAdaptor) r11
            cz.msebera.android.httpclient.client.AuthenticationHandler r2 = r11.getHandler()
            r1.targetAuthHandler = r2
            goto L84
        L82:
            r1.targetAuthHandler = r3
        L84:
            boolean r2 = r12 instanceof cz.msebera.android.httpclient.impl.client.AuthenticationStrategyAdaptor
            if (r2 == 0) goto L91
            cz.msebera.android.httpclient.impl.client.AuthenticationStrategyAdaptor r12 = (cz.msebera.android.httpclient.impl.client.AuthenticationStrategyAdaptor) r12
            cz.msebera.android.httpclient.client.AuthenticationHandler r2 = r12.getHandler()
            r1.proxyAuthHandler = r2
            goto L93
        L91:
            r1.proxyAuthHandler = r3
        L93:
            r1.managedConn = r3
            r2 = 0
            r1.execCount = r2
            r1.redirectCount = r2
            cz.msebera.android.httpclient.auth.AuthState r2 = new cz.msebera.android.httpclient.auth.AuthState
            r2.<init>()
            r1.targetAuthState = r2
            cz.msebera.android.httpclient.auth.AuthState r2 = new cz.msebera.android.httpclient.auth.AuthState
            r2.<init>()
            r1.proxyAuthState = r2
            cz.msebera.android.httpclient.params.HttpParams r2 = r1.params
            r3 = 100
            java.lang.String r4 = "http.protocol.max-redirects"
            int r2 = r2.getIntParameter(r4, r3)
            r1.maxRedirects = r2
            return
    }

    @java.lang.Deprecated
    public DefaultRequestDirector(cz.msebera.android.httpclient.protocol.HttpRequestExecutor r15, cz.msebera.android.httpclient.conn.ClientConnectionManager r16, cz.msebera.android.httpclient.ConnectionReuseStrategy r17, cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy r18, cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner r19, cz.msebera.android.httpclient.protocol.HttpProcessor r20, cz.msebera.android.httpclient.client.HttpRequestRetryHandler r21, cz.msebera.android.httpclient.client.RedirectHandler r22, cz.msebera.android.httpclient.client.AuthenticationHandler r23, cz.msebera.android.httpclient.client.AuthenticationHandler r24, cz.msebera.android.httpclient.client.UserTokenHandler r25, cz.msebera.android.httpclient.params.HttpParams r26) {
            r14 = this;
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class<cz.msebera.android.httpclient.impl.client.DefaultRequestDirector> r0 = cz.msebera.android.httpclient.impl.client.DefaultRequestDirector.class
            r1.<init>(r0)
            cz.msebera.android.httpclient.impl.client.DefaultRedirectStrategyAdaptor r9 = new cz.msebera.android.httpclient.impl.client.DefaultRedirectStrategyAdaptor
            r0 = r22
            r9.<init>(r0)
            cz.msebera.android.httpclient.impl.client.AuthenticationStrategyAdaptor r10 = new cz.msebera.android.httpclient.impl.client.AuthenticationStrategyAdaptor
            r0 = r23
            r10.<init>(r0)
            cz.msebera.android.httpclient.impl.client.AuthenticationStrategyAdaptor r11 = new cz.msebera.android.httpclient.impl.client.AuthenticationStrategyAdaptor
            r0 = r24
            r11.<init>(r0)
            r0 = r14
            r2 = r15
            r3 = r16
            r4 = r17
            r5 = r18
            r6 = r19
            r7 = r20
            r8 = r21
            r12 = r25
            r13 = r26
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
            return
    }

    private void abortConnection() {
            r4 = this;
            cz.msebera.android.httpclient.conn.ManagedClientConnection r0 = r4.managedConn
            if (r0 == 0) goto L29
            r1 = 0
            r4.managedConn = r1
            r0.abortConnection()     // Catch: java.io.IOException -> Lb
            goto L1d
        Lb:
            r1 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r4.log
            boolean r2 = r2.isDebugEnabled()
            if (r2 == 0) goto L1d
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r4.log
            java.lang.String r3 = r1.getMessage()
            r2.debug(r3, r1)
        L1d:
            r0.releaseConnection()     // Catch: java.io.IOException -> L21
            goto L29
        L21:
            r0 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r4.log
            java.lang.String r2 = "Error releasing connection"
            r1.debug(r2, r0)
        L29:
            return
    }

    private void tryConnect(cz.msebera.android.httpclient.impl.client.RoutedRequest r7, cz.msebera.android.httpclient.protocol.HttpContext r8) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r6 = this;
            cz.msebera.android.httpclient.conn.routing.HttpRoute r0 = r7.getRoute()
            cz.msebera.android.httpclient.impl.client.RequestWrapper r7 = r7.getRequest()
            r1 = 0
        L9:
            java.lang.String r2 = "http.request"
            r8.setAttribute(r2, r7)
            int r1 = r1 + 1
            cz.msebera.android.httpclient.conn.ManagedClientConnection r2 = r6.managedConn     // Catch: java.io.IOException -> L2f
            boolean r2 = r2.isOpen()     // Catch: java.io.IOException -> L2f
            if (r2 != 0) goto L20
            cz.msebera.android.httpclient.conn.ManagedClientConnection r2 = r6.managedConn     // Catch: java.io.IOException -> L2f
            cz.msebera.android.httpclient.params.HttpParams r3 = r6.params     // Catch: java.io.IOException -> L2f
            r2.open(r0, r8, r3)     // Catch: java.io.IOException -> L2f
            goto L2b
        L20:
            cz.msebera.android.httpclient.conn.ManagedClientConnection r2 = r6.managedConn     // Catch: java.io.IOException -> L2f
            cz.msebera.android.httpclient.params.HttpParams r3 = r6.params     // Catch: java.io.IOException -> L2f
            int r3 = cz.msebera.android.httpclient.params.HttpConnectionParams.getSoTimeout(r3)     // Catch: java.io.IOException -> L2f
            r2.setSocketTimeout(r3)     // Catch: java.io.IOException -> L2f
        L2b:
            r6.establishRoute(r0, r8)     // Catch: java.io.IOException -> L2f
            return
        L2f:
            r2 = move-exception
            cz.msebera.android.httpclient.conn.ManagedClientConnection r3 = r6.managedConn     // Catch: java.io.IOException -> L35
            r3.close()     // Catch: java.io.IOException -> L35
        L35:
            cz.msebera.android.httpclient.client.HttpRequestRetryHandler r3 = r6.retryHandler
            boolean r3 = r3.retryRequest(r2, r1, r8)
            if (r3 == 0) goto La0
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            boolean r3 = r3.isInfoEnabled()
            if (r3 == 0) goto L9
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "I/O exception ("
            r4.append(r5)
            java.lang.Class r5 = r2.getClass()
            java.lang.String r5 = r5.getName()
            r4.append(r5)
            java.lang.String r5 = ") caught when connecting to "
            r4.append(r5)
            r4.append(r0)
            java.lang.String r5 = ": "
            r4.append(r5)
            java.lang.String r5 = r2.getMessage()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.info(r4)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            boolean r3 = r3.isDebugEnabled()
            if (r3 == 0) goto L88
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            java.lang.String r4 = r2.getMessage()
            r3.debug(r4, r2)
        L88:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r6.log
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Retrying connect to "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            r2.info(r3)
            goto L9
        La0:
            throw r2
    }

    private cz.msebera.android.httpclient.HttpResponse tryExecute(cz.msebera.android.httpclient.impl.client.RoutedRequest r7, cz.msebera.android.httpclient.protocol.HttpContext r8) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r6 = this;
            cz.msebera.android.httpclient.impl.client.RequestWrapper r0 = r7.getRequest()
            cz.msebera.android.httpclient.conn.routing.HttpRoute r7 = r7.getRoute()
            r1 = 0
            r2 = r1
        La:
            int r3 = r6.execCount
            int r3 = r3 + 1
            r6.execCount = r3
            r0.incrementExecCount()
            boolean r3 = r0.isRepeatable()
            if (r3 != 0) goto L32
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r6.log
            java.lang.String r8 = "Cannot retry non-repeatable request"
            r7.debug(r8)
            if (r2 == 0) goto L2a
            cz.msebera.android.httpclient.client.NonRepeatableRequestException r7 = new cz.msebera.android.httpclient.client.NonRepeatableRequestException
            java.lang.String r8 = "Cannot retry request with a non-repeatable request entity.  The cause lists the reason the original request failed."
            r7.<init>(r8, r2)
            throw r7
        L2a:
            cz.msebera.android.httpclient.client.NonRepeatableRequestException r7 = new cz.msebera.android.httpclient.client.NonRepeatableRequestException
            java.lang.String r8 = "Cannot retry request with a non-repeatable request entity."
            r7.<init>(r8)
            throw r7
        L32:
            cz.msebera.android.httpclient.conn.ManagedClientConnection r2 = r6.managedConn     // Catch: java.io.IOException -> L85
            boolean r2 = r2.isOpen()     // Catch: java.io.IOException -> L85
            if (r2 != 0) goto L57
            boolean r2 = r7.isTunnelled()     // Catch: java.io.IOException -> L85
            if (r2 != 0) goto L4f
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r6.log     // Catch: java.io.IOException -> L85
            java.lang.String r3 = "Reopening the direct connection."
            r2.debug(r3)     // Catch: java.io.IOException -> L85
            cz.msebera.android.httpclient.conn.ManagedClientConnection r2 = r6.managedConn     // Catch: java.io.IOException -> L85
            cz.msebera.android.httpclient.params.HttpParams r3 = r6.params     // Catch: java.io.IOException -> L85
            r2.open(r7, r8, r3)     // Catch: java.io.IOException -> L85
            goto L57
        L4f:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r6.log     // Catch: java.io.IOException -> L85
            java.lang.String r3 = "Proxied connection. Need to start over."
            r2.debug(r3)     // Catch: java.io.IOException -> L85
            goto L84
        L57:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r6.log     // Catch: java.io.IOException -> L85
            boolean r2 = r2.isDebugEnabled()     // Catch: java.io.IOException -> L85
            if (r2 == 0) goto L7c
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r6.log     // Catch: java.io.IOException -> L85
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L85
            r3.<init>()     // Catch: java.io.IOException -> L85
            java.lang.String r4 = "Attempt "
            r3.append(r4)     // Catch: java.io.IOException -> L85
            int r4 = r6.execCount     // Catch: java.io.IOException -> L85
            r3.append(r4)     // Catch: java.io.IOException -> L85
            java.lang.String r4 = " to execute request"
            r3.append(r4)     // Catch: java.io.IOException -> L85
            java.lang.String r3 = r3.toString()     // Catch: java.io.IOException -> L85
            r2.debug(r3)     // Catch: java.io.IOException -> L85
        L7c:
            cz.msebera.android.httpclient.protocol.HttpRequestExecutor r2 = r6.requestExec     // Catch: java.io.IOException -> L85
            cz.msebera.android.httpclient.conn.ManagedClientConnection r3 = r6.managedConn     // Catch: java.io.IOException -> L85
            cz.msebera.android.httpclient.HttpResponse r1 = r2.execute(r0, r3, r8)     // Catch: java.io.IOException -> L85
        L84:
            return r1
        L85:
            r2 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            java.lang.String r4 = "Closing the connection."
            r3.debug(r4)
            cz.msebera.android.httpclient.conn.ManagedClientConnection r3 = r6.managedConn     // Catch: java.io.IOException -> L92
            r3.close()     // Catch: java.io.IOException -> L92
        L92:
            cz.msebera.android.httpclient.client.HttpRequestRetryHandler r3 = r6.retryHandler
            int r4 = r0.getExecCount()
            boolean r3 = r3.retryRequest(r2, r4, r8)
            if (r3 == 0) goto L109
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            boolean r3 = r3.isInfoEnabled()
            if (r3 == 0) goto Ld8
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "I/O exception ("
            r4.append(r5)
            java.lang.Class r5 = r2.getClass()
            java.lang.String r5 = r5.getName()
            r4.append(r5)
            java.lang.String r5 = ") caught when processing request to "
            r4.append(r5)
            r4.append(r7)
            java.lang.String r5 = ": "
            r4.append(r5)
            java.lang.String r5 = r2.getMessage()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.info(r4)
        Ld8:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            boolean r3 = r3.isDebugEnabled()
            if (r3 == 0) goto Le9
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            java.lang.String r4 = r2.getMessage()
            r3.debug(r4, r2)
        Le9:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            boolean r3 = r3.isInfoEnabled()
            if (r3 == 0) goto La
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Retrying request to "
            r4.append(r5)
            r4.append(r7)
            java.lang.String r4 = r4.toString()
            r3.info(r4)
            goto La
        L109:
            boolean r8 = r2 instanceof cz.msebera.android.httpclient.NoHttpResponseException
            if (r8 == 0) goto L133
            cz.msebera.android.httpclient.NoHttpResponseException r8 = new cz.msebera.android.httpclient.NoHttpResponseException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            cz.msebera.android.httpclient.HttpHost r7 = r7.getTargetHost()
            java.lang.String r7 = r7.toHostString()
            r0.append(r7)
            java.lang.String r7 = " failed to respond"
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            r8.<init>(r7)
            java.lang.StackTraceElement[] r7 = r2.getStackTrace()
            r8.setStackTrace(r7)
            throw r8
        L133:
            throw r2
    }

    private cz.msebera.android.httpclient.impl.client.RequestWrapper wrapRequest(cz.msebera.android.httpclient.HttpRequest r2) throws cz.msebera.android.httpclient.ProtocolException {
            r1 = this;
            boolean r0 = r2 instanceof cz.msebera.android.httpclient.HttpEntityEnclosingRequest
            if (r0 == 0) goto Lc
            cz.msebera.android.httpclient.impl.client.EntityEnclosingRequestWrapper r0 = new cz.msebera.android.httpclient.impl.client.EntityEnclosingRequestWrapper
            cz.msebera.android.httpclient.HttpEntityEnclosingRequest r2 = (cz.msebera.android.httpclient.HttpEntityEnclosingRequest) r2
            r0.<init>(r2)
            return r0
        Lc:
            cz.msebera.android.httpclient.impl.client.RequestWrapper r0 = new cz.msebera.android.httpclient.impl.client.RequestWrapper
            r0.<init>(r2)
            return r0
    }

    protected cz.msebera.android.httpclient.HttpRequest createConnectRequest(cz.msebera.android.httpclient.conn.routing.HttpRoute r3, cz.msebera.android.httpclient.protocol.HttpContext r4) {
            r2 = this;
            cz.msebera.android.httpclient.HttpHost r3 = r3.getTargetHost()
            java.lang.String r4 = r3.getHostName()
            int r0 = r3.getPort()
            if (r0 >= 0) goto L20
            cz.msebera.android.httpclient.conn.ClientConnectionManager r0 = r2.connManager
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r0 = r0.getSchemeRegistry()
            java.lang.String r3 = r3.getSchemeName()
            cz.msebera.android.httpclient.conn.scheme.Scheme r3 = r0.getScheme(r3)
            int r0 = r3.getDefaultPort()
        L20:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            int r1 = r4.length()
            int r1 = r1 + 6
            r3.<init>(r1)
            r3.append(r4)
            r4 = 58
            r3.append(r4)
            java.lang.String r4 = java.lang.Integer.toString(r0)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            cz.msebera.android.httpclient.params.HttpParams r4 = r2.params
            cz.msebera.android.httpclient.ProtocolVersion r4 = cz.msebera.android.httpclient.params.HttpProtocolParams.getVersion(r4)
            cz.msebera.android.httpclient.message.BasicHttpRequest r0 = new cz.msebera.android.httpclient.message.BasicHttpRequest
            java.lang.String r1 = "CONNECT"
            r0.<init>(r1, r3, r4)
            return r0
    }

    protected boolean createTunnelToProxy(cz.msebera.android.httpclient.conn.routing.HttpRoute r1, int r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r0 = this;
            cz.msebera.android.httpclient.HttpException r1 = new cz.msebera.android.httpclient.HttpException
            java.lang.String r2 = "Proxy chains are not supported."
            r1.<init>(r2)
            throw r1
    }

    protected boolean createTunnelToTarget(cz.msebera.android.httpclient.conn.routing.HttpRoute r10, cz.msebera.android.httpclient.protocol.HttpContext r11) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r9 = this;
            cz.msebera.android.httpclient.HttpHost r6 = r10.getProxyHost()
            cz.msebera.android.httpclient.HttpHost r7 = r10.getTargetHost()
        L8:
            cz.msebera.android.httpclient.conn.ManagedClientConnection r0 = r9.managedConn
            boolean r0 = r0.isOpen()
            if (r0 != 0) goto L17
            cz.msebera.android.httpclient.conn.ManagedClientConnection r0 = r9.managedConn
            cz.msebera.android.httpclient.params.HttpParams r1 = r9.params
            r0.open(r10, r11, r1)
        L17:
            cz.msebera.android.httpclient.HttpRequest r0 = r9.createConnectRequest(r10, r11)
            cz.msebera.android.httpclient.params.HttpParams r1 = r9.params
            r0.setParams(r1)
            java.lang.String r1 = "http.target_host"
            r11.setAttribute(r1, r7)
            java.lang.String r1 = "http.route"
            r11.setAttribute(r1, r10)
            java.lang.String r1 = "http.proxy_host"
            r11.setAttribute(r1, r6)
            cz.msebera.android.httpclient.conn.ManagedClientConnection r1 = r9.managedConn
            java.lang.String r2 = "http.connection"
            r11.setAttribute(r2, r1)
            java.lang.String r1 = "http.request"
            r11.setAttribute(r1, r0)
            cz.msebera.android.httpclient.protocol.HttpRequestExecutor r1 = r9.requestExec
            cz.msebera.android.httpclient.protocol.HttpProcessor r2 = r9.httpProcessor
            r1.preProcess(r0, r2, r11)
            cz.msebera.android.httpclient.protocol.HttpRequestExecutor r1 = r9.requestExec
            cz.msebera.android.httpclient.conn.ManagedClientConnection r2 = r9.managedConn
            cz.msebera.android.httpclient.HttpResponse r8 = r1.execute(r0, r2, r11)
            cz.msebera.android.httpclient.params.HttpParams r0 = r9.params
            r8.setParams(r0)
            cz.msebera.android.httpclient.protocol.HttpRequestExecutor r0 = r9.requestExec
            cz.msebera.android.httpclient.protocol.HttpProcessor r1 = r9.httpProcessor
            r0.postProcess(r8, r1, r11)
            cz.msebera.android.httpclient.StatusLine r0 = r8.getStatusLine()
            int r0 = r0.getStatusCode()
            r1 = 200(0xc8, float:2.8E-43)
            if (r0 < r1) goto Le8
            cz.msebera.android.httpclient.params.HttpParams r0 = r9.params
            boolean r0 = cz.msebera.android.httpclient.client.params.HttpClientParams.isAuthenticating(r0)
            if (r0 == 0) goto L8
            cz.msebera.android.httpclient.impl.client.HttpAuthenticator r0 = r9.authenticator
            cz.msebera.android.httpclient.client.AuthenticationStrategy r3 = r9.proxyAuthStrategy
            cz.msebera.android.httpclient.auth.AuthState r4 = r9.proxyAuthState
            r1 = r6
            r2 = r8
            r5 = r11
            boolean r0 = r0.isAuthenticationRequested(r1, r2, r3, r4, r5)
            if (r0 == 0) goto La7
            cz.msebera.android.httpclient.impl.client.HttpAuthenticator r0 = r9.authenticator
            cz.msebera.android.httpclient.client.AuthenticationStrategy r3 = r9.proxyAuthStrategy
            cz.msebera.android.httpclient.auth.AuthState r4 = r9.proxyAuthState
            r1 = r6
            r2 = r8
            r5 = r11
            boolean r0 = r0.authenticate(r1, r2, r3, r4, r5)
            if (r0 == 0) goto La7
            cz.msebera.android.httpclient.ConnectionReuseStrategy r0 = r9.reuseStrategy
            boolean r0 = r0.keepAlive(r8, r11)
            if (r0 == 0) goto La0
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r9.log
            java.lang.String r1 = "Connection kept alive"
            r0.debug(r1)
            cz.msebera.android.httpclient.HttpEntity r0 = r8.getEntity()
            cz.msebera.android.httpclient.util.EntityUtils.consume(r0)
            goto L8
        La0:
            cz.msebera.android.httpclient.conn.ManagedClientConnection r0 = r9.managedConn
            r0.close()
            goto L8
        La7:
            cz.msebera.android.httpclient.StatusLine r10 = r8.getStatusLine()
            int r10 = r10.getStatusCode()
            r11 = 299(0x12b, float:4.19E-43)
            if (r10 <= r11) goto Le1
            cz.msebera.android.httpclient.HttpEntity r10 = r8.getEntity()
            if (r10 == 0) goto Lc1
            cz.msebera.android.httpclient.entity.BufferedHttpEntity r11 = new cz.msebera.android.httpclient.entity.BufferedHttpEntity
            r11.<init>(r10)
            r8.setEntity(r11)
        Lc1:
            cz.msebera.android.httpclient.conn.ManagedClientConnection r10 = r9.managedConn
            r10.close()
            cz.msebera.android.httpclient.impl.client.TunnelRefusedException r10 = new cz.msebera.android.httpclient.impl.client.TunnelRefusedException
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r0 = "CONNECT refused by proxy: "
            r11.append(r0)
            cz.msebera.android.httpclient.StatusLine r0 = r8.getStatusLine()
            r11.append(r0)
            java.lang.String r11 = r11.toString()
            r10.<init>(r11, r8)
            throw r10
        Le1:
            cz.msebera.android.httpclient.conn.ManagedClientConnection r10 = r9.managedConn
            r10.markReusable()
            r10 = 0
            return r10
        Le8:
            cz.msebera.android.httpclient.HttpException r10 = new cz.msebera.android.httpclient.HttpException
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r0 = "Unexpected response to CONNECT request: "
            r11.append(r0)
            cz.msebera.android.httpclient.StatusLine r0 = r8.getStatusLine()
            r11.append(r0)
            java.lang.String r11 = r11.toString()
            r10.<init>(r11)
            throw r10
    }

    protected cz.msebera.android.httpclient.conn.routing.HttpRoute determineRoute(cz.msebera.android.httpclient.HttpHost r3, cz.msebera.android.httpclient.HttpRequest r4, cz.msebera.android.httpclient.protocol.HttpContext r5) throws cz.msebera.android.httpclient.HttpException {
            r2 = this;
            cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner r0 = r2.routePlanner
            if (r3 == 0) goto L5
            goto L11
        L5:
            cz.msebera.android.httpclient.params.HttpParams r3 = r4.getParams()
            java.lang.String r1 = "http.default-host"
            java.lang.Object r3 = r3.getParameter(r1)
            cz.msebera.android.httpclient.HttpHost r3 = (cz.msebera.android.httpclient.HttpHost) r3
        L11:
            cz.msebera.android.httpclient.conn.routing.HttpRoute r3 = r0.determineRoute(r3, r4, r5)
            return r3
    }

    protected void establishRoute(cz.msebera.android.httpclient.conn.routing.HttpRoute r7, cz.msebera.android.httpclient.protocol.HttpContext r8) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r6 = this;
            cz.msebera.android.httpclient.conn.routing.BasicRouteDirector r0 = new cz.msebera.android.httpclient.conn.routing.BasicRouteDirector
            r0.<init>()
        L5:
            cz.msebera.android.httpclient.conn.ManagedClientConnection r1 = r6.managedConn
            cz.msebera.android.httpclient.conn.routing.HttpRoute r1 = r1.getRoute()
            int r2 = r0.nextStep(r7, r1)
            switch(r2) {
                case -1: goto L70;
                case 0: goto L6d;
                case 1: goto L66;
                case 2: goto L66;
                case 3: goto L53;
                case 4: goto L36;
                case 5: goto L2e;
                default: goto L12;
            }
        L12:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "Unknown step indicator "
            r8.append(r0)
            r8.append(r2)
            java.lang.String r0 = " from RouteDirector."
            r8.append(r0)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
        L2e:
            cz.msebera.android.httpclient.conn.ManagedClientConnection r1 = r6.managedConn
            cz.msebera.android.httpclient.params.HttpParams r3 = r6.params
            r1.layerProtocol(r8, r3)
            goto L6d
        L36:
            int r1 = r1.getHopCount()
            int r1 = r1 + (-1)
            boolean r3 = r6.createTunnelToProxy(r7, r1, r8)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r6.log
            java.lang.String r5 = "Tunnel to proxy created."
            r4.debug(r5)
            cz.msebera.android.httpclient.conn.ManagedClientConnection r4 = r6.managedConn
            cz.msebera.android.httpclient.HttpHost r1 = r7.getHopTarget(r1)
            cz.msebera.android.httpclient.params.HttpParams r5 = r6.params
            r4.tunnelProxy(r1, r3, r5)
            goto L6d
        L53:
            boolean r1 = r6.createTunnelToTarget(r7, r8)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            java.lang.String r4 = "Tunnel to target created."
            r3.debug(r4)
            cz.msebera.android.httpclient.conn.ManagedClientConnection r3 = r6.managedConn
            cz.msebera.android.httpclient.params.HttpParams r4 = r6.params
            r3.tunnelTarget(r1, r4)
            goto L6d
        L66:
            cz.msebera.android.httpclient.conn.ManagedClientConnection r1 = r6.managedConn
            cz.msebera.android.httpclient.params.HttpParams r3 = r6.params
            r1.open(r7, r8, r3)
        L6d:
            if (r2 > 0) goto L5
            return
        L70:
            cz.msebera.android.httpclient.HttpException r8 = new cz.msebera.android.httpclient.HttpException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Unable to establish route: planned = "
            r0.append(r2)
            r0.append(r7)
            java.lang.String r7 = "; current = "
            r0.append(r7)
            r0.append(r1)
            java.lang.String r7 = r0.toString()
            r8.<init>(r7)
            throw r8
    }

    @Override
    public cz.msebera.android.httpclient.HttpResponse execute(cz.msebera.android.httpclient.HttpHost r13, cz.msebera.android.httpclient.HttpRequest r14, cz.msebera.android.httpclient.protocol.HttpContext r15) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r12 = this;
            java.lang.String r0 = "http.user-token"
            cz.msebera.android.httpclient.auth.AuthState r1 = r12.targetAuthState
            java.lang.String r2 = "http.auth.target-scope"
            r15.setAttribute(r2, r1)
            cz.msebera.android.httpclient.auth.AuthState r1 = r12.proxyAuthState
            java.lang.String r2 = "http.auth.proxy-scope"
            r15.setAttribute(r2, r1)
            cz.msebera.android.httpclient.impl.client.RequestWrapper r1 = r12.wrapRequest(r14)
            cz.msebera.android.httpclient.params.HttpParams r2 = r12.params
            r1.setParams(r2)
            cz.msebera.android.httpclient.conn.routing.HttpRoute r2 = r12.determineRoute(r13, r1, r15)
            cz.msebera.android.httpclient.params.HttpParams r3 = r1.getParams()
            java.lang.String r4 = "http.virtual-host"
            java.lang.Object r3 = r3.getParameter(r4)
            cz.msebera.android.httpclient.HttpHost r3 = (cz.msebera.android.httpclient.HttpHost) r3
            r12.virtualHost = r3
            cz.msebera.android.httpclient.HttpHost r3 = r12.virtualHost
            if (r3 == 0) goto L57
            int r3 = r3.getPort()
            r4 = -1
            if (r3 != r4) goto L57
            if (r13 == 0) goto L3a
            r3 = r13
            goto L3e
        L3a:
            cz.msebera.android.httpclient.HttpHost r3 = r2.getTargetHost()
        L3e:
            int r3 = r3.getPort()
            if (r3 == r4) goto L57
            cz.msebera.android.httpclient.HttpHost r4 = new cz.msebera.android.httpclient.HttpHost
            cz.msebera.android.httpclient.HttpHost r5 = r12.virtualHost
            java.lang.String r5 = r5.getHostName()
            cz.msebera.android.httpclient.HttpHost r6 = r12.virtualHost
            java.lang.String r6 = r6.getSchemeName()
            r4.<init>(r5, r3, r6)
            r12.virtualHost = r4
        L57:
            cz.msebera.android.httpclient.impl.client.RoutedRequest r3 = new cz.msebera.android.httpclient.impl.client.RoutedRequest
            r3.<init>(r1, r2)
            r1 = 0
            r2 = 0
            r4 = r13
            r13 = 0
        L60:
            if (r2 != 0) goto L257
            cz.msebera.android.httpclient.impl.client.RequestWrapper r1 = r3.getRequest()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.conn.routing.HttpRoute r5 = r3.getRoute()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            java.lang.Object r6 = r15.getAttribute(r0)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.conn.ManagedClientConnection r7 = r12.managedConn     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r7 != 0) goto Lc9
            cz.msebera.android.httpclient.conn.ClientConnectionManager r7 = r12.connManager     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.conn.ClientConnectionRequest r7 = r7.requestConnection(r5, r6)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            boolean r8 = r14 instanceof cz.msebera.android.httpclient.client.methods.AbortableHttpRequest     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r8 == 0) goto L82
            r8 = r14
            cz.msebera.android.httpclient.client.methods.AbortableHttpRequest r8 = (cz.msebera.android.httpclient.client.methods.AbortableHttpRequest) r8     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r8.setConnectionRequest(r7)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
        L82:
            cz.msebera.android.httpclient.params.HttpParams r8 = r12.params     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            long r8 = cz.msebera.android.httpclient.client.params.HttpClientParams.getConnectionManagerTimeout(r8)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            java.util.concurrent.TimeUnit r10 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.InterruptedException -> Lbc java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.conn.ManagedClientConnection r7 = r7.getConnection(r8, r10)     // Catch: java.lang.InterruptedException -> Lbc java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r12.managedConn = r7     // Catch: java.lang.InterruptedException -> Lbc java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.params.HttpParams r7 = r12.params     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            boolean r7 = cz.msebera.android.httpclient.params.HttpConnectionParams.isStaleCheckingEnabled(r7)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r7 == 0) goto Lc9
            cz.msebera.android.httpclient.conn.ManagedClientConnection r7 = r12.managedConn     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            boolean r7 = r7.isOpen()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r7 == 0) goto Lc9
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r12.log     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            java.lang.String r8 = "Stale connection check"
            r7.debug(r8)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.conn.ManagedClientConnection r7 = r12.managedConn     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            boolean r7 = r7.isStale()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r7 == 0) goto Lc9
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r12.log     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            java.lang.String r8 = "Stale connection detected"
            r7.debug(r8)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.conn.ManagedClientConnection r7 = r12.managedConn     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r7.close()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            goto Lc9
        Lbc:
            java.lang.Thread r13 = java.lang.Thread.currentThread()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r13.interrupt()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            java.io.InterruptedIOException r13 = new java.io.InterruptedIOException     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r13.<init>()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            throw r13     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
        Lc9:
            boolean r7 = r14 instanceof cz.msebera.android.httpclient.client.methods.AbortableHttpRequest     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r7 == 0) goto Ld5
            r7 = r14
            cz.msebera.android.httpclient.client.methods.AbortableHttpRequest r7 = (cz.msebera.android.httpclient.client.methods.AbortableHttpRequest) r7     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.conn.ManagedClientConnection r8 = r12.managedConn     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r7.setReleaseTrigger(r8)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
        Ld5:
            r12.tryConnect(r3, r15)     // Catch: cz.msebera.android.httpclient.impl.client.TunnelRefusedException -> L238 java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            java.net.URI r7 = r1.getURI()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            java.lang.String r7 = r7.getUserInfo()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r7 == 0) goto Lf1
            cz.msebera.android.httpclient.auth.AuthState r8 = r12.targetAuthState     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.impl.auth.BasicScheme r9 = new cz.msebera.android.httpclient.impl.auth.BasicScheme     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r9.<init>()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.auth.UsernamePasswordCredentials r10 = new cz.msebera.android.httpclient.auth.UsernamePasswordCredentials     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r10.<init>(r7)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r8.update(r9, r10)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
        Lf1:
            cz.msebera.android.httpclient.HttpHost r7 = r12.virtualHost     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r7 == 0) goto Lf8
            cz.msebera.android.httpclient.HttpHost r4 = r12.virtualHost     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            goto L106
        Lf8:
            java.net.URI r7 = r1.getURI()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            boolean r8 = r7.isAbsolute()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r8 == 0) goto L106
            cz.msebera.android.httpclient.HttpHost r4 = cz.msebera.android.httpclient.client.utils.URIUtils.extractHost(r7)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
        L106:
            if (r4 != 0) goto L10c
            cz.msebera.android.httpclient.HttpHost r4 = r5.getTargetHost()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
        L10c:
            r1.resetHeaders()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r12.rewriteRequestURI(r1, r5)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            java.lang.String r7 = "http.target_host"
            r15.setAttribute(r7, r4)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            java.lang.String r7 = "http.route"
            r15.setAttribute(r7, r5)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            java.lang.String r5 = "http.connection"
            cz.msebera.android.httpclient.conn.ManagedClientConnection r7 = r12.managedConn     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r15.setAttribute(r5, r7)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.protocol.HttpRequestExecutor r5 = r12.requestExec     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.protocol.HttpProcessor r7 = r12.httpProcessor     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r5.preProcess(r1, r7, r15)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.HttpResponse r1 = r12.tryExecute(r3, r15)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r1 != 0) goto L132
            goto L60
        L132:
            cz.msebera.android.httpclient.params.HttpParams r13 = r12.params     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r1.setParams(r13)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.protocol.HttpRequestExecutor r13 = r12.requestExec     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.protocol.HttpProcessor r5 = r12.httpProcessor     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r13.postProcess(r1, r5, r15)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.ConnectionReuseStrategy r13 = r12.reuseStrategy     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            boolean r13 = r13.keepAlive(r1, r15)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r13 == 0) goto L195
            cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy r5 = r12.keepAliveStrategy     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            long r7 = r5.getKeepAliveDuration(r1, r15)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r12.log     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            boolean r5 = r5.isDebugEnabled()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r5 == 0) goto L18e
            r9 = 0
            int r5 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r5 <= 0) goto L176
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r5.<init>()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            java.lang.String r9 = "for "
            r5.append(r9)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r5.append(r7)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            java.lang.String r9 = " "
            r5.append(r9)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            java.util.concurrent.TimeUnit r9 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r5.append(r9)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            java.lang.String r5 = r5.toString()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            goto L178
        L176:
            java.lang.String r5 = "indefinitely"
        L178:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r9 = r12.log     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r10.<init>()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            java.lang.String r11 = "Connection can be kept alive "
            r10.append(r11)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r10.append(r5)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            java.lang.String r5 = r10.toString()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r9.debug(r5)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
        L18e:
            cz.msebera.android.httpclient.conn.ManagedClientConnection r5 = r12.managedConn     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            java.util.concurrent.TimeUnit r9 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r5.setIdleDuration(r7, r9)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
        L195:
            cz.msebera.android.httpclient.impl.client.RoutedRequest r5 = r12.handleResponse(r3, r1, r15)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r5 != 0) goto L19e
            r2 = 1
            goto L220
        L19e:
            if (r13 == 0) goto L1ad
            cz.msebera.android.httpclient.HttpEntity r7 = r1.getEntity()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.util.EntityUtils.consume(r7)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.conn.ManagedClientConnection r7 = r12.managedConn     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r7.markReusable()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            goto L20e
        L1ad:
            cz.msebera.android.httpclient.conn.ManagedClientConnection r7 = r12.managedConn     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r7.close()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.auth.AuthState r7 = r12.proxyAuthState     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.auth.AuthProtocolState r7 = r7.getState()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.auth.AuthProtocolState r8 = cz.msebera.android.httpclient.auth.AuthProtocolState.CHALLENGED     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            int r7 = r7.compareTo(r8)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r7 <= 0) goto L1e0
            cz.msebera.android.httpclient.auth.AuthState r7 = r12.proxyAuthState     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.auth.AuthScheme r7 = r7.getAuthScheme()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r7 == 0) goto L1e0
            cz.msebera.android.httpclient.auth.AuthState r7 = r12.proxyAuthState     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.auth.AuthScheme r7 = r7.getAuthScheme()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            boolean r7 = r7.isConnectionBased()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r7 == 0) goto L1e0
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r12.log     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            java.lang.String r8 = "Resetting proxy auth state"
            r7.debug(r8)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.auth.AuthState r7 = r12.proxyAuthState     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r7.reset()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
        L1e0:
            cz.msebera.android.httpclient.auth.AuthState r7 = r12.targetAuthState     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.auth.AuthProtocolState r7 = r7.getState()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.auth.AuthProtocolState r8 = cz.msebera.android.httpclient.auth.AuthProtocolState.CHALLENGED     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            int r7 = r7.compareTo(r8)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r7 <= 0) goto L20e
            cz.msebera.android.httpclient.auth.AuthState r7 = r12.targetAuthState     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.auth.AuthScheme r7 = r7.getAuthScheme()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r7 == 0) goto L20e
            cz.msebera.android.httpclient.auth.AuthState r7 = r12.targetAuthState     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.auth.AuthScheme r7 = r7.getAuthScheme()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            boolean r7 = r7.isConnectionBased()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r7 == 0) goto L20e
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r12.log     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            java.lang.String r8 = "Resetting target auth state"
            r7.debug(r8)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.auth.AuthState r7 = r12.targetAuthState     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r7.reset()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
        L20e:
            cz.msebera.android.httpclient.conn.routing.HttpRoute r7 = r5.getRoute()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.conn.routing.HttpRoute r3 = r3.getRoute()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            boolean r3 = r7.equals(r3)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r3 != 0) goto L21f
            r12.releaseConnection()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
        L21f:
            r3 = r5
        L220:
            cz.msebera.android.httpclient.conn.ManagedClientConnection r5 = r12.managedConn     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r5 == 0) goto L60
            if (r6 != 0) goto L22f
            cz.msebera.android.httpclient.client.UserTokenHandler r5 = r12.userTokenHandler     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            java.lang.Object r6 = r5.getUserToken(r15)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r15.setAttribute(r0, r6)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
        L22f:
            if (r6 == 0) goto L60
            cz.msebera.android.httpclient.conn.ManagedClientConnection r5 = r12.managedConn     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r5.setState(r6)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            goto L60
        L238:
            r14 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r15 = r12.log     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            boolean r15 = r15.isDebugEnabled()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r15 == 0) goto L24a
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r15 = r12.log     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            java.lang.String r0 = r14.getMessage()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r15.debug(r0)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
        L24a:
            cz.msebera.android.httpclient.HttpResponse r1 = r14.getResponse()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            goto L257
        L24f:
            r13 = move-exception
            goto L284
        L251:
            r13 = move-exception
            goto L288
        L253:
            r13 = move-exception
            goto L28c
        L255:
            r13 = move-exception
            goto L290
        L257:
            if (r1 == 0) goto L279
            cz.msebera.android.httpclient.HttpEntity r14 = r1.getEntity()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r14 == 0) goto L279
            cz.msebera.android.httpclient.HttpEntity r14 = r1.getEntity()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            boolean r14 = r14.isStreaming()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            if (r14 != 0) goto L26a
            goto L279
        L26a:
            cz.msebera.android.httpclient.HttpEntity r14 = r1.getEntity()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.conn.BasicManagedEntity r15 = new cz.msebera.android.httpclient.conn.BasicManagedEntity     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            cz.msebera.android.httpclient.conn.ManagedClientConnection r0 = r12.managedConn     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r15.<init>(r14, r0, r13)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r1.setEntity(r15)     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            goto L283
        L279:
            if (r13 == 0) goto L280
            cz.msebera.android.httpclient.conn.ManagedClientConnection r13 = r12.managedConn     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
            r13.markReusable()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
        L280:
            r12.releaseConnection()     // Catch: java.lang.RuntimeException -> L24f java.io.IOException -> L251 cz.msebera.android.httpclient.HttpException -> L253 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L255
        L283:
            return r1
        L284:
            r12.abortConnection()
            throw r13
        L288:
            r12.abortConnection()
            throw r13
        L28c:
            r12.abortConnection()
            throw r13
        L290:
            java.io.InterruptedIOException r14 = new java.io.InterruptedIOException
            java.lang.String r15 = "Connection has been shut down"
            r14.<init>(r15)
            r14.initCause(r13)
            throw r14
    }

    protected cz.msebera.android.httpclient.impl.client.RoutedRequest handleResponse(cz.msebera.android.httpclient.impl.client.RoutedRequest r17, cz.msebera.android.httpclient.HttpResponse r18, cz.msebera.android.httpclient.protocol.HttpContext r19) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r16 = this;
            r0 = r16
            r7 = r18
            r8 = r19
            cz.msebera.android.httpclient.conn.routing.HttpRoute r9 = r17.getRoute()
            cz.msebera.android.httpclient.impl.client.RequestWrapper r10 = r17.getRequest()
            cz.msebera.android.httpclient.params.HttpParams r11 = r10.getParams()
            boolean r1 = cz.msebera.android.httpclient.client.params.HttpClientParams.isAuthenticating(r11)
            if (r1 == 0) goto L9b
            java.lang.String r1 = "http.target_host"
            java.lang.Object r1 = r8.getAttribute(r1)
            cz.msebera.android.httpclient.HttpHost r1 = (cz.msebera.android.httpclient.HttpHost) r1
            if (r1 != 0) goto L26
            cz.msebera.android.httpclient.HttpHost r1 = r9.getTargetHost()
        L26:
            int r2 = r1.getPort()
            if (r2 >= 0) goto L49
            cz.msebera.android.httpclient.conn.ClientConnectionManager r2 = r0.connManager
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r2 = r2.getSchemeRegistry()
            cz.msebera.android.httpclient.conn.scheme.Scheme r2 = r2.getScheme(r1)
            cz.msebera.android.httpclient.HttpHost r3 = new cz.msebera.android.httpclient.HttpHost
            java.lang.String r4 = r1.getHostName()
            int r2 = r2.getDefaultPort()
            java.lang.String r1 = r1.getSchemeName()
            r3.<init>(r4, r2, r1)
            r12 = r3
            goto L4a
        L49:
            r12 = r1
        L4a:
            cz.msebera.android.httpclient.impl.client.HttpAuthenticator r1 = r0.authenticator
            cz.msebera.android.httpclient.client.AuthenticationStrategy r4 = r0.targetAuthStrategy
            cz.msebera.android.httpclient.auth.AuthState r5 = r0.targetAuthState
            r2 = r12
            r3 = r18
            r6 = r19
            boolean r13 = r1.isAuthenticationRequested(r2, r3, r4, r5, r6)
            cz.msebera.android.httpclient.HttpHost r1 = r9.getProxyHost()
            if (r1 != 0) goto L63
            cz.msebera.android.httpclient.HttpHost r1 = r9.getTargetHost()
        L63:
            r14 = r1
            cz.msebera.android.httpclient.impl.client.HttpAuthenticator r1 = r0.authenticator
            cz.msebera.android.httpclient.client.AuthenticationStrategy r4 = r0.proxyAuthStrategy
            cz.msebera.android.httpclient.auth.AuthState r5 = r0.proxyAuthState
            r2 = r14
            r3 = r18
            r6 = r19
            boolean r15 = r1.isAuthenticationRequested(r2, r3, r4, r5, r6)
            if (r13 == 0) goto L87
            cz.msebera.android.httpclient.impl.client.HttpAuthenticator r1 = r0.authenticator
            cz.msebera.android.httpclient.client.AuthenticationStrategy r4 = r0.targetAuthStrategy
            cz.msebera.android.httpclient.auth.AuthState r5 = r0.targetAuthState
            r2 = r12
            r3 = r18
            r6 = r19
            boolean r1 = r1.authenticate(r2, r3, r4, r5, r6)
            if (r1 == 0) goto L87
            return r17
        L87:
            if (r15 == 0) goto L9b
            cz.msebera.android.httpclient.impl.client.HttpAuthenticator r1 = r0.authenticator
            cz.msebera.android.httpclient.client.AuthenticationStrategy r4 = r0.proxyAuthStrategy
            cz.msebera.android.httpclient.auth.AuthState r5 = r0.proxyAuthState
            r2 = r14
            r3 = r18
            r6 = r19
            boolean r1 = r1.authenticate(r2, r3, r4, r5, r6)
            if (r1 == 0) goto L9b
            return r17
        L9b:
            boolean r1 = cz.msebera.android.httpclient.client.params.HttpClientParams.isRedirecting(r11)
            r2 = 0
            if (r1 == 0) goto L16d
            cz.msebera.android.httpclient.client.RedirectStrategy r1 = r0.redirectStrategy
            boolean r1 = r1.isRedirected(r10, r7, r8)
            if (r1 == 0) goto L16d
            int r1 = r0.redirectCount
            int r3 = r0.maxRedirects
            if (r1 >= r3) goto L14f
            int r1 = r1 + 1
            r0.redirectCount = r1
            r0.virtualHost = r2
            cz.msebera.android.httpclient.client.RedirectStrategy r1 = r0.redirectStrategy
            cz.msebera.android.httpclient.client.methods.HttpUriRequest r1 = r1.getRedirect(r10, r7, r8)
            cz.msebera.android.httpclient.HttpRequest r2 = r10.getOriginal()
            cz.msebera.android.httpclient.Header[] r2 = r2.getAllHeaders()
            r1.setHeaders(r2)
            java.net.URI r2 = r1.getURI()
            cz.msebera.android.httpclient.HttpHost r3 = cz.msebera.android.httpclient.client.utils.URIUtils.extractHost(r2)
            if (r3 == 0) goto L138
            cz.msebera.android.httpclient.HttpHost r4 = r9.getTargetHost()
            boolean r4 = r4.equals(r3)
            if (r4 != 0) goto L101
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r0.log
            java.lang.String r5 = "Resetting target auth state"
            r4.debug(r5)
            cz.msebera.android.httpclient.auth.AuthState r4 = r0.targetAuthState
            r4.reset()
            cz.msebera.android.httpclient.auth.AuthState r4 = r0.proxyAuthState
            cz.msebera.android.httpclient.auth.AuthScheme r4 = r4.getAuthScheme()
            if (r4 == 0) goto L101
            boolean r4 = r4.isConnectionBased()
            if (r4 == 0) goto L101
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r0.log
            java.lang.String r5 = "Resetting proxy auth state"
            r4.debug(r5)
            cz.msebera.android.httpclient.auth.AuthState r4 = r0.proxyAuthState
            r4.reset()
        L101:
            cz.msebera.android.httpclient.impl.client.RequestWrapper r1 = r0.wrapRequest(r1)
            r1.setParams(r11)
            cz.msebera.android.httpclient.conn.routing.HttpRoute r3 = r0.determineRoute(r3, r1, r8)
            cz.msebera.android.httpclient.impl.client.RoutedRequest r4 = new cz.msebera.android.httpclient.impl.client.RoutedRequest
            r4.<init>(r1, r3)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r0.log
            boolean r1 = r1.isDebugEnabled()
            if (r1 == 0) goto L137
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r0.log
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Redirecting to '"
            r5.append(r6)
            r5.append(r2)
            java.lang.String r2 = "' via "
            r5.append(r2)
            r5.append(r3)
            java.lang.String r2 = r5.toString()
            r1.debug(r2)
        L137:
            return r4
        L138:
            cz.msebera.android.httpclient.ProtocolException r1 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Redirect URI does not specify a valid host name: "
            r3.append(r4)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            r1.<init>(r2)
            throw r1
        L14f:
            cz.msebera.android.httpclient.client.RedirectException r1 = new cz.msebera.android.httpclient.client.RedirectException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Maximum redirects ("
            r2.append(r3)
            int r3 = r0.maxRedirects
            r2.append(r3)
            java.lang.String r3 = ") exceeded"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        L16d:
            return r2
    }

    protected void releaseConnection() {
            r3 = this;
            cz.msebera.android.httpclient.conn.ManagedClientConnection r0 = r3.managedConn     // Catch: java.io.IOException -> L6
            r0.releaseConnection()     // Catch: java.io.IOException -> L6
            goto Le
        L6:
            r0 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r3.log
            java.lang.String r2 = "IOException releasing connection"
            r1.debug(r2, r0)
        Le:
            r0 = 0
            r3.managedConn = r0
            return
    }

    protected void rewriteRequestURI(cz.msebera.android.httpclient.impl.client.RequestWrapper r4, cz.msebera.android.httpclient.conn.routing.HttpRoute r5) throws cz.msebera.android.httpclient.ProtocolException {
            r3 = this;
            java.net.URI r0 = r4.getURI()     // Catch: java.net.URISyntaxException -> L39
            cz.msebera.android.httpclient.HttpHost r1 = r5.getProxyHost()     // Catch: java.net.URISyntaxException -> L39
            r2 = 1
            if (r1 == 0) goto L25
            boolean r1 = r5.isTunnelled()     // Catch: java.net.URISyntaxException -> L39
            if (r1 != 0) goto L25
            boolean r1 = r0.isAbsolute()     // Catch: java.net.URISyntaxException -> L39
            if (r1 != 0) goto L20
            cz.msebera.android.httpclient.HttpHost r5 = r5.getTargetHost()     // Catch: java.net.URISyntaxException -> L39
            java.net.URI r5 = cz.msebera.android.httpclient.client.utils.URIUtils.rewriteURI(r0, r5, r2)     // Catch: java.net.URISyntaxException -> L39
            goto L35
        L20:
            java.net.URI r5 = cz.msebera.android.httpclient.client.utils.URIUtils.rewriteURI(r0)     // Catch: java.net.URISyntaxException -> L39
            goto L35
        L25:
            boolean r5 = r0.isAbsolute()     // Catch: java.net.URISyntaxException -> L39
            if (r5 == 0) goto L31
            r5 = 0
            java.net.URI r5 = cz.msebera.android.httpclient.client.utils.URIUtils.rewriteURI(r0, r5, r2)     // Catch: java.net.URISyntaxException -> L39
            goto L35
        L31:
            java.net.URI r5 = cz.msebera.android.httpclient.client.utils.URIUtils.rewriteURI(r0)     // Catch: java.net.URISyntaxException -> L39
        L35:
            r4.setURI(r5)     // Catch: java.net.URISyntaxException -> L39
            return
        L39:
            r5 = move-exception
            cz.msebera.android.httpclient.ProtocolException r0 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid URI: "
            r1.append(r2)
            cz.msebera.android.httpclient.RequestLine r4 = r4.getRequestLine()
            java.lang.String r4 = r4.getUri()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4, r5)
            throw r0
    }
}
