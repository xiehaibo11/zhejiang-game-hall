package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.ThreadSafe
@java.lang.Deprecated
public abstract class AbstractHttpClient extends cz.msebera.android.httpclient.impl.client.CloseableHttpClient {

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.client.BackoffManager backoffManager;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.conn.ClientConnectionManager connManager;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.client.ConnectionBackoffStrategy connectionBackoffStrategy;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.client.CookieStore cookieStore;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.client.CredentialsProvider credsProvider;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.params.HttpParams defaultParams;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy keepAliveStrategy;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.protocol.BasicHttpProcessor mutableProcessor;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.protocol.ImmutableHttpProcessor protocolProcessor;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.client.AuthenticationStrategy proxyAuthStrategy;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.client.RedirectStrategy redirectStrategy;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.protocol.HttpRequestExecutor requestExec;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.client.HttpRequestRetryHandler retryHandler;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.ConnectionReuseStrategy reuseStrategy;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner routePlanner;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.auth.AuthSchemeRegistry supportedAuthSchemes;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.cookie.CookieSpecRegistry supportedCookieSpecs;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.client.AuthenticationStrategy targetAuthStrategy;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.client.UserTokenHandler userTokenHandler;

    protected AbstractHttpClient(cz.msebera.android.httpclient.conn.ClientConnectionManager r3, cz.msebera.android.httpclient.params.HttpParams r4) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            r2.defaultParams = r4
            r2.connManager = r3
            return
    }

    private synchronized cz.msebera.android.httpclient.protocol.HttpProcessor getProtocolProcessor() {
            r6 = this;
            monitor-enter(r6)
            cz.msebera.android.httpclient.protocol.ImmutableHttpProcessor r0 = r6.protocolProcessor     // Catch: java.lang.Throwable -> L38
            if (r0 != 0) goto L34
            cz.msebera.android.httpclient.protocol.BasicHttpProcessor r0 = r6.getHttpProcessor()     // Catch: java.lang.Throwable -> L38
            int r1 = r0.getRequestInterceptorCount()     // Catch: java.lang.Throwable -> L38
            cz.msebera.android.httpclient.HttpRequestInterceptor[] r2 = new cz.msebera.android.httpclient.HttpRequestInterceptor[r1]     // Catch: java.lang.Throwable -> L38
            r3 = 0
            r4 = 0
        L11:
            if (r4 >= r1) goto L1c
            cz.msebera.android.httpclient.HttpRequestInterceptor r5 = r0.getRequestInterceptor(r4)     // Catch: java.lang.Throwable -> L38
            r2[r4] = r5     // Catch: java.lang.Throwable -> L38
            int r4 = r4 + 1
            goto L11
        L1c:
            int r1 = r0.getResponseInterceptorCount()     // Catch: java.lang.Throwable -> L38
            cz.msebera.android.httpclient.HttpResponseInterceptor[] r4 = new cz.msebera.android.httpclient.HttpResponseInterceptor[r1]     // Catch: java.lang.Throwable -> L38
        L22:
            if (r3 >= r1) goto L2d
            cz.msebera.android.httpclient.HttpResponseInterceptor r5 = r0.getResponseInterceptor(r3)     // Catch: java.lang.Throwable -> L38
            r4[r3] = r5     // Catch: java.lang.Throwable -> L38
            int r3 = r3 + 1
            goto L22
        L2d:
            cz.msebera.android.httpclient.protocol.ImmutableHttpProcessor r0 = new cz.msebera.android.httpclient.protocol.ImmutableHttpProcessor     // Catch: java.lang.Throwable -> L38
            r0.<init>(r2, r4)     // Catch: java.lang.Throwable -> L38
            r6.protocolProcessor = r0     // Catch: java.lang.Throwable -> L38
        L34:
            cz.msebera.android.httpclient.protocol.ImmutableHttpProcessor r0 = r6.protocolProcessor     // Catch: java.lang.Throwable -> L38
            monitor-exit(r6)
            return r0
        L38:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }

    public synchronized void addRequestInterceptor(cz.msebera.android.httpclient.HttpRequestInterceptor r2) {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.protocol.BasicHttpProcessor r0 = r1.getHttpProcessor()     // Catch: java.lang.Throwable -> Ld
            r0.addInterceptor(r2)     // Catch: java.lang.Throwable -> Ld
            r2 = 0
            r1.protocolProcessor = r2     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r1)
            return
        Ld:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized void addRequestInterceptor(cz.msebera.android.httpclient.HttpRequestInterceptor r2, int r3) {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.protocol.BasicHttpProcessor r0 = r1.getHttpProcessor()     // Catch: java.lang.Throwable -> Ld
            r0.addInterceptor(r2, r3)     // Catch: java.lang.Throwable -> Ld
            r2 = 0
            r1.protocolProcessor = r2     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r1)
            return
        Ld:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized void addResponseInterceptor(cz.msebera.android.httpclient.HttpResponseInterceptor r2) {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.protocol.BasicHttpProcessor r0 = r1.getHttpProcessor()     // Catch: java.lang.Throwable -> Ld
            r0.addInterceptor(r2)     // Catch: java.lang.Throwable -> Ld
            r2 = 0
            r1.protocolProcessor = r2     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r1)
            return
        Ld:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized void addResponseInterceptor(cz.msebera.android.httpclient.HttpResponseInterceptor r2, int r3) {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.protocol.BasicHttpProcessor r0 = r1.getHttpProcessor()     // Catch: java.lang.Throwable -> Ld
            r0.addInterceptor(r2, r3)     // Catch: java.lang.Throwable -> Ld
            r2 = 0
            r1.protocolProcessor = r2     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r1)
            return
        Ld:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized void clearRequestInterceptors() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.protocol.BasicHttpProcessor r0 = r1.getHttpProcessor()     // Catch: java.lang.Throwable -> Ld
            r0.clearRequestInterceptors()     // Catch: java.lang.Throwable -> Ld
            r0 = 0
            r1.protocolProcessor = r0     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r1)
            return
        Ld:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized void clearResponseInterceptors() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.protocol.BasicHttpProcessor r0 = r1.getHttpProcessor()     // Catch: java.lang.Throwable -> Ld
            r0.clearResponseInterceptors()     // Catch: java.lang.Throwable -> Ld
            r0 = 0
            r1.protocolProcessor = r0     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r1)
            return
        Ld:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public void close() {
            r1 = this;
            cz.msebera.android.httpclient.conn.ClientConnectionManager r0 = r1.getConnectionManager()
            r0.shutdown()
            return
    }

    protected cz.msebera.android.httpclient.auth.AuthSchemeRegistry createAuthSchemeRegistry() {
            r3 = this;
            cz.msebera.android.httpclient.auth.AuthSchemeRegistry r0 = new cz.msebera.android.httpclient.auth.AuthSchemeRegistry
            r0.<init>()
            cz.msebera.android.httpclient.impl.auth.BasicSchemeFactory r1 = new cz.msebera.android.httpclient.impl.auth.BasicSchemeFactory
            r1.<init>()
            java.lang.String r2 = "Basic"
            r0.register(r2, r1)
            cz.msebera.android.httpclient.impl.auth.DigestSchemeFactory r1 = new cz.msebera.android.httpclient.impl.auth.DigestSchemeFactory
            r1.<init>()
            java.lang.String r2 = "Digest"
            r0.register(r2, r1)
            cz.msebera.android.httpclient.impl.auth.NTLMSchemeFactory r1 = new cz.msebera.android.httpclient.impl.auth.NTLMSchemeFactory
            r1.<init>()
            java.lang.String r2 = "NTLM"
            r0.register(r2, r1)
            return r0
    }

    protected cz.msebera.android.httpclient.conn.ClientConnectionManager createClientConnectionManager() {
            r4 = this;
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r0 = cz.msebera.android.httpclient.impl.conn.SchemeRegistryFactory.createDefault()
            cz.msebera.android.httpclient.params.HttpParams r1 = r4.getParams()
            java.lang.String r2 = "http.connection-manager.factory-class-name"
            java.lang.Object r2 = r1.getParameter(r2)
            java.lang.String r2 = (java.lang.String) r2
            if (r2 == 0) goto L4a
            java.lang.Class r3 = java.lang.Class.forName(r2)     // Catch: java.lang.InstantiationException -> L1d java.lang.IllegalAccessException -> L28 java.lang.ClassNotFoundException -> L33
            java.lang.Object r3 = r3.newInstance()     // Catch: java.lang.InstantiationException -> L1d java.lang.IllegalAccessException -> L28 java.lang.ClassNotFoundException -> L33
            cz.msebera.android.httpclient.conn.ClientConnectionManagerFactory r3 = (cz.msebera.android.httpclient.conn.ClientConnectionManagerFactory) r3     // Catch: java.lang.InstantiationException -> L1d java.lang.IllegalAccessException -> L28 java.lang.ClassNotFoundException -> L33
            goto L4b
        L1d:
            r0 = move-exception
            java.lang.InstantiationError r1 = new java.lang.InstantiationError
            java.lang.String r0 = r0.getMessage()
            r1.<init>(r0)
            throw r1
        L28:
            r0 = move-exception
            java.lang.IllegalAccessError r1 = new java.lang.IllegalAccessError
            java.lang.String r0 = r0.getMessage()
            r1.<init>(r0)
            throw r1
        L33:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "Invalid class name: "
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L4a:
            r3 = 0
        L4b:
            if (r3 == 0) goto L52
            cz.msebera.android.httpclient.conn.ClientConnectionManager r0 = r3.newInstance(r1, r0)
            goto L58
        L52:
            cz.msebera.android.httpclient.impl.conn.BasicClientConnectionManager r1 = new cz.msebera.android.httpclient.impl.conn.BasicClientConnectionManager
            r1.<init>(r0)
            r0 = r1
        L58:
            return r0
    }

    @java.lang.Deprecated
    protected cz.msebera.android.httpclient.client.RequestDirector createClientRequestDirector(cz.msebera.android.httpclient.protocol.HttpRequestExecutor r15, cz.msebera.android.httpclient.conn.ClientConnectionManager r16, cz.msebera.android.httpclient.ConnectionReuseStrategy r17, cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy r18, cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner r19, cz.msebera.android.httpclient.protocol.HttpProcessor r20, cz.msebera.android.httpclient.client.HttpRequestRetryHandler r21, cz.msebera.android.httpclient.client.RedirectHandler r22, cz.msebera.android.httpclient.client.AuthenticationHandler r23, cz.msebera.android.httpclient.client.AuthenticationHandler r24, cz.msebera.android.httpclient.client.UserTokenHandler r25, cz.msebera.android.httpclient.params.HttpParams r26) {
            r14 = this;
            cz.msebera.android.httpclient.impl.client.DefaultRequestDirector r13 = new cz.msebera.android.httpclient.impl.client.DefaultRequestDirector
            r0 = r13
            r1 = r15
            r2 = r16
            r3 = r17
            r4 = r18
            r5 = r19
            r6 = r20
            r7 = r21
            r8 = r22
            r9 = r23
            r10 = r24
            r11 = r25
            r12 = r26
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
            return r13
    }

    @java.lang.Deprecated
    protected cz.msebera.android.httpclient.client.RequestDirector createClientRequestDirector(cz.msebera.android.httpclient.protocol.HttpRequestExecutor r17, cz.msebera.android.httpclient.conn.ClientConnectionManager r18, cz.msebera.android.httpclient.ConnectionReuseStrategy r19, cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy r20, cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner r21, cz.msebera.android.httpclient.protocol.HttpProcessor r22, cz.msebera.android.httpclient.client.HttpRequestRetryHandler r23, cz.msebera.android.httpclient.client.RedirectStrategy r24, cz.msebera.android.httpclient.client.AuthenticationHandler r25, cz.msebera.android.httpclient.client.AuthenticationHandler r26, cz.msebera.android.httpclient.client.UserTokenHandler r27, cz.msebera.android.httpclient.params.HttpParams r28) {
            r16 = this;
            cz.msebera.android.httpclient.impl.client.DefaultRequestDirector r14 = new cz.msebera.android.httpclient.impl.client.DefaultRequestDirector
            r15 = r16
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r15.log
            r0 = r14
            r2 = r17
            r3 = r18
            r4 = r19
            r5 = r20
            r6 = r21
            r7 = r22
            r8 = r23
            r9 = r24
            r10 = r25
            r11 = r26
            r12 = r27
            r13 = r28
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
            return r14
    }

    protected cz.msebera.android.httpclient.client.RequestDirector createClientRequestDirector(cz.msebera.android.httpclient.protocol.HttpRequestExecutor r17, cz.msebera.android.httpclient.conn.ClientConnectionManager r18, cz.msebera.android.httpclient.ConnectionReuseStrategy r19, cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy r20, cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner r21, cz.msebera.android.httpclient.protocol.HttpProcessor r22, cz.msebera.android.httpclient.client.HttpRequestRetryHandler r23, cz.msebera.android.httpclient.client.RedirectStrategy r24, cz.msebera.android.httpclient.client.AuthenticationStrategy r25, cz.msebera.android.httpclient.client.AuthenticationStrategy r26, cz.msebera.android.httpclient.client.UserTokenHandler r27, cz.msebera.android.httpclient.params.HttpParams r28) {
            r16 = this;
            cz.msebera.android.httpclient.impl.client.DefaultRequestDirector r14 = new cz.msebera.android.httpclient.impl.client.DefaultRequestDirector
            r15 = r16
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r15.log
            r0 = r14
            r2 = r17
            r3 = r18
            r4 = r19
            r5 = r20
            r6 = r21
            r7 = r22
            r8 = r23
            r9 = r24
            r10 = r25
            r11 = r26
            r12 = r27
            r13 = r28
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
            return r14
    }

    protected cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy createConnectionKeepAliveStrategy() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.DefaultConnectionKeepAliveStrategy r0 = new cz.msebera.android.httpclient.impl.client.DefaultConnectionKeepAliveStrategy
            r0.<init>()
            return r0
    }

    protected cz.msebera.android.httpclient.ConnectionReuseStrategy createConnectionReuseStrategy() {
            r1 = this;
            cz.msebera.android.httpclient.impl.DefaultConnectionReuseStrategy r0 = new cz.msebera.android.httpclient.impl.DefaultConnectionReuseStrategy
            r0.<init>()
            return r0
    }

    protected cz.msebera.android.httpclient.cookie.CookieSpecRegistry createCookieSpecRegistry() {
            r3 = this;
            cz.msebera.android.httpclient.cookie.CookieSpecRegistry r0 = new cz.msebera.android.httpclient.cookie.CookieSpecRegistry
            r0.<init>()
            cz.msebera.android.httpclient.impl.cookie.BestMatchSpecFactory r1 = new cz.msebera.android.httpclient.impl.cookie.BestMatchSpecFactory
            r1.<init>()
            java.lang.String r2 = "default"
            r0.register(r2, r1)
            cz.msebera.android.httpclient.impl.cookie.BestMatchSpecFactory r1 = new cz.msebera.android.httpclient.impl.cookie.BestMatchSpecFactory
            r1.<init>()
            java.lang.String r2 = "best-match"
            r0.register(r2, r1)
            cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory r1 = new cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory
            r1.<init>()
            java.lang.String r2 = "compatibility"
            r0.register(r2, r1)
            cz.msebera.android.httpclient.impl.cookie.NetscapeDraftSpecFactory r1 = new cz.msebera.android.httpclient.impl.cookie.NetscapeDraftSpecFactory
            r1.<init>()
            java.lang.String r2 = "netscape"
            r0.register(r2, r1)
            cz.msebera.android.httpclient.impl.cookie.RFC2109SpecFactory r1 = new cz.msebera.android.httpclient.impl.cookie.RFC2109SpecFactory
            r1.<init>()
            java.lang.String r2 = "rfc2109"
            r0.register(r2, r1)
            cz.msebera.android.httpclient.impl.cookie.RFC2965SpecFactory r1 = new cz.msebera.android.httpclient.impl.cookie.RFC2965SpecFactory
            r1.<init>()
            java.lang.String r2 = "rfc2965"
            r0.register(r2, r1)
            cz.msebera.android.httpclient.impl.cookie.IgnoreSpecFactory r1 = new cz.msebera.android.httpclient.impl.cookie.IgnoreSpecFactory
            r1.<init>()
            java.lang.String r2 = "ignoreCookies"
            r0.register(r2, r1)
            return r0
    }

    protected cz.msebera.android.httpclient.client.CookieStore createCookieStore() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.BasicCookieStore r0 = new cz.msebera.android.httpclient.impl.client.BasicCookieStore
            r0.<init>()
            return r0
    }

    protected cz.msebera.android.httpclient.client.CredentialsProvider createCredentialsProvider() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.BasicCredentialsProvider r0 = new cz.msebera.android.httpclient.impl.client.BasicCredentialsProvider
            r0.<init>()
            return r0
    }

    protected cz.msebera.android.httpclient.protocol.HttpContext createHttpContext() {
            r3 = this;
            cz.msebera.android.httpclient.protocol.BasicHttpContext r0 = new cz.msebera.android.httpclient.protocol.BasicHttpContext
            r0.<init>()
            cz.msebera.android.httpclient.conn.ClientConnectionManager r1 = r3.getConnectionManager()
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r1 = r1.getSchemeRegistry()
            java.lang.String r2 = "http.scheme-registry"
            r0.setAttribute(r2, r1)
            cz.msebera.android.httpclient.auth.AuthSchemeRegistry r1 = r3.getAuthSchemes()
            java.lang.String r2 = "http.authscheme-registry"
            r0.setAttribute(r2, r1)
            cz.msebera.android.httpclient.cookie.CookieSpecRegistry r1 = r3.getCookieSpecs()
            java.lang.String r2 = "http.cookiespec-registry"
            r0.setAttribute(r2, r1)
            cz.msebera.android.httpclient.client.CookieStore r1 = r3.getCookieStore()
            java.lang.String r2 = "http.cookie-store"
            r0.setAttribute(r2, r1)
            cz.msebera.android.httpclient.client.CredentialsProvider r1 = r3.getCredentialsProvider()
            java.lang.String r2 = "http.auth.credentials-provider"
            r0.setAttribute(r2, r1)
            return r0
    }

    protected abstract cz.msebera.android.httpclient.params.HttpParams createHttpParams();

    protected abstract cz.msebera.android.httpclient.protocol.BasicHttpProcessor createHttpProcessor();

    protected cz.msebera.android.httpclient.client.HttpRequestRetryHandler createHttpRequestRetryHandler() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.DefaultHttpRequestRetryHandler r0 = new cz.msebera.android.httpclient.impl.client.DefaultHttpRequestRetryHandler
            r0.<init>()
            return r0
    }

    protected cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner createHttpRoutePlanner() {
            r2 = this;
            cz.msebera.android.httpclient.impl.conn.DefaultHttpRoutePlanner r0 = new cz.msebera.android.httpclient.impl.conn.DefaultHttpRoutePlanner
            cz.msebera.android.httpclient.conn.ClientConnectionManager r1 = r2.getConnectionManager()
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r1 = r1.getSchemeRegistry()
            r0.<init>(r1)
            return r0
    }

    @java.lang.Deprecated
    protected cz.msebera.android.httpclient.client.AuthenticationHandler createProxyAuthenticationHandler() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.DefaultProxyAuthenticationHandler r0 = new cz.msebera.android.httpclient.impl.client.DefaultProxyAuthenticationHandler
            r0.<init>()
            return r0
    }

    protected cz.msebera.android.httpclient.client.AuthenticationStrategy createProxyAuthenticationStrategy() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.ProxyAuthenticationStrategy r0 = new cz.msebera.android.httpclient.impl.client.ProxyAuthenticationStrategy
            r0.<init>()
            return r0
    }

    @java.lang.Deprecated
    protected cz.msebera.android.httpclient.client.RedirectHandler createRedirectHandler() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.DefaultRedirectHandler r0 = new cz.msebera.android.httpclient.impl.client.DefaultRedirectHandler
            r0.<init>()
            return r0
    }

    protected cz.msebera.android.httpclient.protocol.HttpRequestExecutor createRequestExecutor() {
            r1 = this;
            cz.msebera.android.httpclient.protocol.HttpRequestExecutor r0 = new cz.msebera.android.httpclient.protocol.HttpRequestExecutor
            r0.<init>()
            return r0
    }

    @java.lang.Deprecated
    protected cz.msebera.android.httpclient.client.AuthenticationHandler createTargetAuthenticationHandler() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.DefaultTargetAuthenticationHandler r0 = new cz.msebera.android.httpclient.impl.client.DefaultTargetAuthenticationHandler
            r0.<init>()
            return r0
    }

    protected cz.msebera.android.httpclient.client.AuthenticationStrategy createTargetAuthenticationStrategy() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.TargetAuthenticationStrategy r0 = new cz.msebera.android.httpclient.impl.client.TargetAuthenticationStrategy
            r0.<init>()
            return r0
    }

    protected cz.msebera.android.httpclient.client.UserTokenHandler createUserTokenHandler() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.DefaultUserTokenHandler r0 = new cz.msebera.android.httpclient.impl.client.DefaultUserTokenHandler
            r0.<init>()
            return r0
    }

    protected cz.msebera.android.httpclient.params.HttpParams determineParams(cz.msebera.android.httpclient.HttpRequest r4) {
            r3 = this;
            cz.msebera.android.httpclient.impl.client.ClientParamsStack r0 = new cz.msebera.android.httpclient.impl.client.ClientParamsStack
            cz.msebera.android.httpclient.params.HttpParams r1 = r3.getParams()
            cz.msebera.android.httpclient.params.HttpParams r4 = r4.getParams()
            r2 = 0
            r0.<init>(r2, r1, r4, r2)
            return r0
    }

    @Override
    protected final cz.msebera.android.httpclient.client.methods.CloseableHttpResponse doExecute(cz.msebera.android.httpclient.HttpHost r19, cz.msebera.android.httpclient.HttpRequest r20, cz.msebera.android.httpclient.protocol.HttpContext r21) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException {
            r18 = this;
            r14 = r18
            r0 = r19
            r15 = r20
            r1 = r21
            java.lang.String r2 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r15, r2)
            monitor-enter(r18)
            cz.msebera.android.httpclient.protocol.HttpContext r2 = r18.createHttpContext()     // Catch: java.lang.Throwable -> Ld9
            if (r1 != 0) goto L16
            r13 = r2
            goto L1c
        L16:
            cz.msebera.android.httpclient.protocol.DefaultedHttpContext r3 = new cz.msebera.android.httpclient.protocol.DefaultedHttpContext     // Catch: java.lang.Throwable -> Ld9
            r3.<init>(r1, r2)     // Catch: java.lang.Throwable -> Ld9
            r13 = r3
        L1c:
            cz.msebera.android.httpclient.params.HttpParams r16 = r14.determineParams(r15)     // Catch: java.lang.Throwable -> Ld9
            cz.msebera.android.httpclient.client.config.RequestConfig r1 = cz.msebera.android.httpclient.client.params.HttpClientParamConfig.getRequestConfig(r16)     // Catch: java.lang.Throwable -> Ld9
            java.lang.String r2 = "http.request-config"
            r13.setAttribute(r2, r1)     // Catch: java.lang.Throwable -> Ld9
            cz.msebera.android.httpclient.protocol.HttpRequestExecutor r2 = r18.getRequestExecutor()     // Catch: java.lang.Throwable -> Ld9
            cz.msebera.android.httpclient.conn.ClientConnectionManager r3 = r18.getConnectionManager()     // Catch: java.lang.Throwable -> Ld9
            cz.msebera.android.httpclient.ConnectionReuseStrategy r4 = r18.getConnectionReuseStrategy()     // Catch: java.lang.Throwable -> Ld9
            cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy r5 = r18.getConnectionKeepAliveStrategy()     // Catch: java.lang.Throwable -> Ld9
            cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner r6 = r18.getRoutePlanner()     // Catch: java.lang.Throwable -> Ld9
            cz.msebera.android.httpclient.protocol.HttpProcessor r7 = r18.getProtocolProcessor()     // Catch: java.lang.Throwable -> Ld9
            cz.msebera.android.httpclient.client.HttpRequestRetryHandler r8 = r18.getHttpRequestRetryHandler()     // Catch: java.lang.Throwable -> Ld9
            cz.msebera.android.httpclient.client.RedirectStrategy r9 = r18.getRedirectStrategy()     // Catch: java.lang.Throwable -> Ld9
            cz.msebera.android.httpclient.client.AuthenticationStrategy r10 = r18.getTargetAuthenticationStrategy()     // Catch: java.lang.Throwable -> Ld9
            cz.msebera.android.httpclient.client.AuthenticationStrategy r11 = r18.getProxyAuthenticationStrategy()     // Catch: java.lang.Throwable -> Ld9
            cz.msebera.android.httpclient.client.UserTokenHandler r12 = r18.getUserTokenHandler()     // Catch: java.lang.Throwable -> Ld9
            r1 = r18
            r17 = r13
            r13 = r16
            cz.msebera.android.httpclient.client.RequestDirector r1 = r1.createClientRequestDirector(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)     // Catch: java.lang.Throwable -> Ld9
            cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner r2 = r18.getRoutePlanner()     // Catch: java.lang.Throwable -> Ld9
            cz.msebera.android.httpclient.client.ConnectionBackoffStrategy r3 = r18.getConnectionBackoffStrategy()     // Catch: java.lang.Throwable -> Ld9
            cz.msebera.android.httpclient.client.BackoffManager r4 = r18.getBackoffManager()     // Catch: java.lang.Throwable -> Ld9
            monitor-exit(r18)     // Catch: java.lang.Throwable -> Ld9
            if (r3 == 0) goto Lc7
            if (r4 == 0) goto Lc7
            if (r0 == 0) goto L76
            r6 = r0
        L73:
            r5 = r17
            goto L84
        L76:
            cz.msebera.android.httpclient.params.HttpParams r5 = r14.determineParams(r15)     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
            java.lang.String r6 = "http.default-host"
            java.lang.Object r5 = r5.getParameter(r6)     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
            cz.msebera.android.httpclient.HttpHost r5 = (cz.msebera.android.httpclient.HttpHost) r5     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
            r6 = r5
            goto L73
        L84:
            cz.msebera.android.httpclient.conn.routing.HttpRoute r2 = r2.determineRoute(r6, r15, r5)     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
            cz.msebera.android.httpclient.HttpResponse r0 = r1.execute(r0, r15, r5)     // Catch: java.lang.Exception -> L9e java.lang.RuntimeException -> Lbc cz.msebera.android.httpclient.HttpException -> Ld2
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r0 = cz.msebera.android.httpclient.impl.client.CloseableHttpResponseProxy.newProxy(r0)     // Catch: java.lang.Exception -> L9e java.lang.RuntimeException -> Lbc cz.msebera.android.httpclient.HttpException -> Ld2
            boolean r1 = r3.shouldBackoff(r0)     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
            if (r1 == 0) goto L9a
            r4.backOff(r2)     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
            goto L9d
        L9a:
            r4.probe(r2)     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
        L9d:
            return r0
        L9e:
            r0 = move-exception
            boolean r1 = r3.shouldBackoff(r0)     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
            if (r1 == 0) goto La8
            r4.backOff(r2)     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
        La8:
            boolean r1 = r0 instanceof cz.msebera.android.httpclient.HttpException     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
            if (r1 != 0) goto Lb9
            boolean r1 = r0 instanceof java.io.IOException     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
            if (r1 == 0) goto Lb3
            java.io.IOException r0 = (java.io.IOException) r0     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
            throw r0     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
        Lb3:
            java.lang.reflect.UndeclaredThrowableException r1 = new java.lang.reflect.UndeclaredThrowableException     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
            r1.<init>(r0)     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
            throw r1     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
        Lb9:
            cz.msebera.android.httpclient.HttpException r0 = (cz.msebera.android.httpclient.HttpException) r0     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
            throw r0     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
        Lbc:
            r0 = move-exception
            boolean r1 = r3.shouldBackoff(r0)     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
            if (r1 == 0) goto Lc6
            r4.backOff(r2)     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
        Lc6:
            throw r0     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
        Lc7:
            r5 = r17
            cz.msebera.android.httpclient.HttpResponse r0 = r1.execute(r0, r15, r5)     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r0 = cz.msebera.android.httpclient.impl.client.CloseableHttpResponseProxy.newProxy(r0)     // Catch: cz.msebera.android.httpclient.HttpException -> Ld2
            return r0
        Ld2:
            r0 = move-exception
            cz.msebera.android.httpclient.client.ClientProtocolException r1 = new cz.msebera.android.httpclient.client.ClientProtocolException
            r1.<init>(r0)
            throw r1
        Ld9:
            r0 = move-exception
            monitor-exit(r18)     // Catch: java.lang.Throwable -> Ld9
            throw r0
    }

    public final synchronized cz.msebera.android.httpclient.auth.AuthSchemeRegistry getAuthSchemes() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.auth.AuthSchemeRegistry r0 = r1.supportedAuthSchemes     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.auth.AuthSchemeRegistry r0 = r1.createAuthSchemeRegistry()     // Catch: java.lang.Throwable -> Lf
            r1.supportedAuthSchemes = r0     // Catch: java.lang.Throwable -> Lf
        Lb:
            cz.msebera.android.httpclient.auth.AuthSchemeRegistry r0 = r1.supportedAuthSchemes     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return r0
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized cz.msebera.android.httpclient.client.BackoffManager getBackoffManager() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.client.BackoffManager r0 = r1.backoffManager     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized cz.msebera.android.httpclient.client.ConnectionBackoffStrategy getConnectionBackoffStrategy() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.client.ConnectionBackoffStrategy r0 = r1.connectionBackoffStrategy     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy getConnectionKeepAliveStrategy() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy r0 = r1.keepAliveStrategy     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy r0 = r1.createConnectionKeepAliveStrategy()     // Catch: java.lang.Throwable -> Lf
            r1.keepAliveStrategy = r0     // Catch: java.lang.Throwable -> Lf
        Lb:
            cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy r0 = r1.keepAliveStrategy     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return r0
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public final synchronized cz.msebera.android.httpclient.conn.ClientConnectionManager getConnectionManager() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.conn.ClientConnectionManager r0 = r1.connManager     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.conn.ClientConnectionManager r0 = r1.createClientConnectionManager()     // Catch: java.lang.Throwable -> Lf
            r1.connManager = r0     // Catch: java.lang.Throwable -> Lf
        Lb:
            cz.msebera.android.httpclient.conn.ClientConnectionManager r0 = r1.connManager     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return r0
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized cz.msebera.android.httpclient.ConnectionReuseStrategy getConnectionReuseStrategy() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.ConnectionReuseStrategy r0 = r1.reuseStrategy     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.ConnectionReuseStrategy r0 = r1.createConnectionReuseStrategy()     // Catch: java.lang.Throwable -> Lf
            r1.reuseStrategy = r0     // Catch: java.lang.Throwable -> Lf
        Lb:
            cz.msebera.android.httpclient.ConnectionReuseStrategy r0 = r1.reuseStrategy     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return r0
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized cz.msebera.android.httpclient.cookie.CookieSpecRegistry getCookieSpecs() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.cookie.CookieSpecRegistry r0 = r1.supportedCookieSpecs     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.cookie.CookieSpecRegistry r0 = r1.createCookieSpecRegistry()     // Catch: java.lang.Throwable -> Lf
            r1.supportedCookieSpecs = r0     // Catch: java.lang.Throwable -> Lf
        Lb:
            cz.msebera.android.httpclient.cookie.CookieSpecRegistry r0 = r1.supportedCookieSpecs     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return r0
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized cz.msebera.android.httpclient.client.CookieStore getCookieStore() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.client.CookieStore r0 = r1.cookieStore     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.client.CookieStore r0 = r1.createCookieStore()     // Catch: java.lang.Throwable -> Lf
            r1.cookieStore = r0     // Catch: java.lang.Throwable -> Lf
        Lb:
            cz.msebera.android.httpclient.client.CookieStore r0 = r1.cookieStore     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return r0
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized cz.msebera.android.httpclient.client.CredentialsProvider getCredentialsProvider() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.client.CredentialsProvider r0 = r1.credsProvider     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.client.CredentialsProvider r0 = r1.createCredentialsProvider()     // Catch: java.lang.Throwable -> Lf
            r1.credsProvider = r0     // Catch: java.lang.Throwable -> Lf
        Lb:
            cz.msebera.android.httpclient.client.CredentialsProvider r0 = r1.credsProvider     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return r0
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    protected final synchronized cz.msebera.android.httpclient.protocol.BasicHttpProcessor getHttpProcessor() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.protocol.BasicHttpProcessor r0 = r1.mutableProcessor     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.protocol.BasicHttpProcessor r0 = r1.createHttpProcessor()     // Catch: java.lang.Throwable -> Lf
            r1.mutableProcessor = r0     // Catch: java.lang.Throwable -> Lf
        Lb:
            cz.msebera.android.httpclient.protocol.BasicHttpProcessor r0 = r1.mutableProcessor     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return r0
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized cz.msebera.android.httpclient.client.HttpRequestRetryHandler getHttpRequestRetryHandler() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.client.HttpRequestRetryHandler r0 = r1.retryHandler     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.client.HttpRequestRetryHandler r0 = r1.createHttpRequestRetryHandler()     // Catch: java.lang.Throwable -> Lf
            r1.retryHandler = r0     // Catch: java.lang.Throwable -> Lf
        Lb:
            cz.msebera.android.httpclient.client.HttpRequestRetryHandler r0 = r1.retryHandler     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return r0
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public final synchronized cz.msebera.android.httpclient.params.HttpParams getParams() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.defaultParams     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.createHttpParams()     // Catch: java.lang.Throwable -> Lf
            r1.defaultParams = r0     // Catch: java.lang.Throwable -> Lf
        Lb:
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.defaultParams     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return r0
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @java.lang.Deprecated
    public final synchronized cz.msebera.android.httpclient.client.AuthenticationHandler getProxyAuthenticationHandler() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.client.AuthenticationHandler r0 = r1.createProxyAuthenticationHandler()     // Catch: java.lang.Throwable -> L7
            monitor-exit(r1)
            return r0
        L7:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized cz.msebera.android.httpclient.client.AuthenticationStrategy getProxyAuthenticationStrategy() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.client.AuthenticationStrategy r0 = r1.proxyAuthStrategy     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.client.AuthenticationStrategy r0 = r1.createProxyAuthenticationStrategy()     // Catch: java.lang.Throwable -> Lf
            r1.proxyAuthStrategy = r0     // Catch: java.lang.Throwable -> Lf
        Lb:
            cz.msebera.android.httpclient.client.AuthenticationStrategy r0 = r1.proxyAuthStrategy     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return r0
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @java.lang.Deprecated
    public final synchronized cz.msebera.android.httpclient.client.RedirectHandler getRedirectHandler() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.client.RedirectHandler r0 = r1.createRedirectHandler()     // Catch: java.lang.Throwable -> L7
            monitor-exit(r1)
            return r0
        L7:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized cz.msebera.android.httpclient.client.RedirectStrategy getRedirectStrategy() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.client.RedirectStrategy r0 = r1.redirectStrategy     // Catch: java.lang.Throwable -> L10
            if (r0 != 0) goto Lc
            cz.msebera.android.httpclient.impl.client.DefaultRedirectStrategy r0 = new cz.msebera.android.httpclient.impl.client.DefaultRedirectStrategy     // Catch: java.lang.Throwable -> L10
            r0.<init>()     // Catch: java.lang.Throwable -> L10
            r1.redirectStrategy = r0     // Catch: java.lang.Throwable -> L10
        Lc:
            cz.msebera.android.httpclient.client.RedirectStrategy r0 = r1.redirectStrategy     // Catch: java.lang.Throwable -> L10
            monitor-exit(r1)
            return r0
        L10:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized cz.msebera.android.httpclient.protocol.HttpRequestExecutor getRequestExecutor() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.protocol.HttpRequestExecutor r0 = r1.requestExec     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.protocol.HttpRequestExecutor r0 = r1.createRequestExecutor()     // Catch: java.lang.Throwable -> Lf
            r1.requestExec = r0     // Catch: java.lang.Throwable -> Lf
        Lb:
            cz.msebera.android.httpclient.protocol.HttpRequestExecutor r0 = r1.requestExec     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return r0
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized cz.msebera.android.httpclient.HttpRequestInterceptor getRequestInterceptor(int r2) {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.protocol.BasicHttpProcessor r0 = r1.getHttpProcessor()     // Catch: java.lang.Throwable -> Lb
            cz.msebera.android.httpclient.HttpRequestInterceptor r2 = r0.getRequestInterceptor(r2)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r1)
            return r2
        Lb:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized int getRequestInterceptorCount() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.protocol.BasicHttpProcessor r0 = r1.getHttpProcessor()     // Catch: java.lang.Throwable -> Lb
            int r0 = r0.getRequestInterceptorCount()     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r1)
            return r0
        Lb:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized cz.msebera.android.httpclient.HttpResponseInterceptor getResponseInterceptor(int r2) {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.protocol.BasicHttpProcessor r0 = r1.getHttpProcessor()     // Catch: java.lang.Throwable -> Lb
            cz.msebera.android.httpclient.HttpResponseInterceptor r2 = r0.getResponseInterceptor(r2)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r1)
            return r2
        Lb:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized int getResponseInterceptorCount() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.protocol.BasicHttpProcessor r0 = r1.getHttpProcessor()     // Catch: java.lang.Throwable -> Lb
            int r0 = r0.getResponseInterceptorCount()     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r1)
            return r0
        Lb:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner getRoutePlanner() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner r0 = r1.routePlanner     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner r0 = r1.createHttpRoutePlanner()     // Catch: java.lang.Throwable -> Lf
            r1.routePlanner = r0     // Catch: java.lang.Throwable -> Lf
        Lb:
            cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner r0 = r1.routePlanner     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return r0
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @java.lang.Deprecated
    public final synchronized cz.msebera.android.httpclient.client.AuthenticationHandler getTargetAuthenticationHandler() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.client.AuthenticationHandler r0 = r1.createTargetAuthenticationHandler()     // Catch: java.lang.Throwable -> L7
            monitor-exit(r1)
            return r0
        L7:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized cz.msebera.android.httpclient.client.AuthenticationStrategy getTargetAuthenticationStrategy() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.client.AuthenticationStrategy r0 = r1.targetAuthStrategy     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.client.AuthenticationStrategy r0 = r1.createTargetAuthenticationStrategy()     // Catch: java.lang.Throwable -> Lf
            r1.targetAuthStrategy = r0     // Catch: java.lang.Throwable -> Lf
        Lb:
            cz.msebera.android.httpclient.client.AuthenticationStrategy r0 = r1.targetAuthStrategy     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return r0
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized cz.msebera.android.httpclient.client.UserTokenHandler getUserTokenHandler() {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.client.UserTokenHandler r0 = r1.userTokenHandler     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.client.UserTokenHandler r0 = r1.createUserTokenHandler()     // Catch: java.lang.Throwable -> Lf
            r1.userTokenHandler = r0     // Catch: java.lang.Throwable -> Lf
        Lb:
            cz.msebera.android.httpclient.client.UserTokenHandler r0 = r1.userTokenHandler     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return r0
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized void removeRequestInterceptorByClass(java.lang.Class<? extends cz.msebera.android.httpclient.HttpRequestInterceptor> r2) {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.protocol.BasicHttpProcessor r0 = r1.getHttpProcessor()     // Catch: java.lang.Throwable -> Ld
            r0.removeRequestInterceptorByClass(r2)     // Catch: java.lang.Throwable -> Ld
            r2 = 0
            r1.protocolProcessor = r2     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r1)
            return
        Ld:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized void removeResponseInterceptorByClass(java.lang.Class<? extends cz.msebera.android.httpclient.HttpResponseInterceptor> r2) {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.protocol.BasicHttpProcessor r0 = r1.getHttpProcessor()     // Catch: java.lang.Throwable -> Ld
            r0.removeResponseInterceptorByClass(r2)     // Catch: java.lang.Throwable -> Ld
            r2 = 0
            r1.protocolProcessor = r2     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r1)
            return
        Ld:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized void setAuthSchemes(cz.msebera.android.httpclient.auth.AuthSchemeRegistry r1) {
            r0 = this;
            monitor-enter(r0)
            r0.supportedAuthSchemes = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized void setBackoffManager(cz.msebera.android.httpclient.client.BackoffManager r1) {
            r0 = this;
            monitor-enter(r0)
            r0.backoffManager = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized void setConnectionBackoffStrategy(cz.msebera.android.httpclient.client.ConnectionBackoffStrategy r1) {
            r0 = this;
            monitor-enter(r0)
            r0.connectionBackoffStrategy = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized void setCookieSpecs(cz.msebera.android.httpclient.cookie.CookieSpecRegistry r1) {
            r0 = this;
            monitor-enter(r0)
            r0.supportedCookieSpecs = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized void setCookieStore(cz.msebera.android.httpclient.client.CookieStore r1) {
            r0 = this;
            monitor-enter(r0)
            r0.cookieStore = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized void setCredentialsProvider(cz.msebera.android.httpclient.client.CredentialsProvider r1) {
            r0 = this;
            monitor-enter(r0)
            r0.credsProvider = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized void setHttpRequestRetryHandler(cz.msebera.android.httpclient.client.HttpRequestRetryHandler r1) {
            r0 = this;
            monitor-enter(r0)
            r0.retryHandler = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized void setKeepAliveStrategy(cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy r1) {
            r0 = this;
            monitor-enter(r0)
            r0.keepAliveStrategy = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized void setParams(cz.msebera.android.httpclient.params.HttpParams r1) {
            r0 = this;
            monitor-enter(r0)
            r0.defaultParams = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @java.lang.Deprecated
    public synchronized void setProxyAuthenticationHandler(cz.msebera.android.httpclient.client.AuthenticationHandler r2) {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.impl.client.AuthenticationStrategyAdaptor r0 = new cz.msebera.android.httpclient.impl.client.AuthenticationStrategyAdaptor     // Catch: java.lang.Throwable -> La
            r0.<init>(r2)     // Catch: java.lang.Throwable -> La
            r1.proxyAuthStrategy = r0     // Catch: java.lang.Throwable -> La
            monitor-exit(r1)
            return
        La:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized void setProxyAuthenticationStrategy(cz.msebera.android.httpclient.client.AuthenticationStrategy r1) {
            r0 = this;
            monitor-enter(r0)
            r0.proxyAuthStrategy = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @java.lang.Deprecated
    public synchronized void setRedirectHandler(cz.msebera.android.httpclient.client.RedirectHandler r2) {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.impl.client.DefaultRedirectStrategyAdaptor r0 = new cz.msebera.android.httpclient.impl.client.DefaultRedirectStrategyAdaptor     // Catch: java.lang.Throwable -> La
            r0.<init>(r2)     // Catch: java.lang.Throwable -> La
            r1.redirectStrategy = r0     // Catch: java.lang.Throwable -> La
            monitor-exit(r1)
            return
        La:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized void setRedirectStrategy(cz.msebera.android.httpclient.client.RedirectStrategy r1) {
            r0 = this;
            monitor-enter(r0)
            r0.redirectStrategy = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized void setReuseStrategy(cz.msebera.android.httpclient.ConnectionReuseStrategy r1) {
            r0 = this;
            monitor-enter(r0)
            r0.reuseStrategy = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized void setRoutePlanner(cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner r1) {
            r0 = this;
            monitor-enter(r0)
            r0.routePlanner = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @java.lang.Deprecated
    public synchronized void setTargetAuthenticationHandler(cz.msebera.android.httpclient.client.AuthenticationHandler r2) {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.impl.client.AuthenticationStrategyAdaptor r0 = new cz.msebera.android.httpclient.impl.client.AuthenticationStrategyAdaptor     // Catch: java.lang.Throwable -> La
            r0.<init>(r2)     // Catch: java.lang.Throwable -> La
            r1.targetAuthStrategy = r0     // Catch: java.lang.Throwable -> La
            monitor-exit(r1)
            return
        La:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized void setTargetAuthenticationStrategy(cz.msebera.android.httpclient.client.AuthenticationStrategy r1) {
            r0 = this;
            monitor-enter(r0)
            r0.targetAuthStrategy = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public synchronized void setUserTokenHandler(cz.msebera.android.httpclient.client.UserTokenHandler r1) {
            r0 = this;
            monitor-enter(r0)
            r0.userTokenHandler = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }
}
