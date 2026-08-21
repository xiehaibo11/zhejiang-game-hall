package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.ThreadSafe
class InternalHttpClient extends cz.msebera.android.httpclient.impl.client.CloseableHttpClient implements cz.msebera.android.httpclient.client.methods.Configurable {
    private final cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.auth.AuthSchemeProvider> authSchemeRegistry;
    private final java.util.List<java.io.Closeable> closeables;
    private final cz.msebera.android.httpclient.conn.HttpClientConnectionManager connManager;
    private final cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.cookie.CookieSpecProvider> cookieSpecRegistry;
    private final cz.msebera.android.httpclient.client.CookieStore cookieStore;
    private final cz.msebera.android.httpclient.client.CredentialsProvider credentialsProvider;
    private final cz.msebera.android.httpclient.client.config.RequestConfig defaultConfig;
    private final cz.msebera.android.httpclient.impl.execchain.ClientExecChain execChain;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner routePlanner;


    public InternalHttpClient(cz.msebera.android.httpclient.impl.execchain.ClientExecChain r3, cz.msebera.android.httpclient.conn.HttpClientConnectionManager r4, cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner r5, cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.cookie.CookieSpecProvider> r6, cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.auth.AuthSchemeProvider> r7, cz.msebera.android.httpclient.client.CookieStore r8, cz.msebera.android.httpclient.client.CredentialsProvider r9, cz.msebera.android.httpclient.client.config.RequestConfig r10, java.util.List<java.io.Closeable> r11) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            java.lang.String r0 = "HTTP client exec chain"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "HTTP connection manager"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.lang.String r0 = "HTTP route planner"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            r2.execChain = r3
            r2.connManager = r4
            r2.routePlanner = r5
            r2.cookieSpecRegistry = r6
            r2.authSchemeRegistry = r7
            r2.cookieStore = r8
            r2.credentialsProvider = r9
            r2.defaultConfig = r10
            r2.closeables = r11
            return
    }

    static cz.msebera.android.httpclient.conn.HttpClientConnectionManager access$000(cz.msebera.android.httpclient.impl.client.InternalHttpClient r0) {
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r0 = r0.connManager
            return r0
    }

    private cz.msebera.android.httpclient.conn.routing.HttpRoute determineRoute(cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.HttpRequest r3, cz.msebera.android.httpclient.protocol.HttpContext r4) throws cz.msebera.android.httpclient.HttpException {
            r1 = this;
            if (r2 != 0) goto Le
            cz.msebera.android.httpclient.params.HttpParams r2 = r3.getParams()
            java.lang.String r0 = "http.default-host"
            java.lang.Object r2 = r2.getParameter(r0)
            cz.msebera.android.httpclient.HttpHost r2 = (cz.msebera.android.httpclient.HttpHost) r2
        Le:
            cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner r0 = r1.routePlanner
            cz.msebera.android.httpclient.conn.routing.HttpRoute r2 = r0.determineRoute(r2, r3, r4)
            return r2
    }

    private void setupContext(cz.msebera.android.httpclient.client.protocol.HttpClientContext r3) {
            r2 = this;
            java.lang.String r0 = "http.auth.target-scope"
            java.lang.Object r1 = r3.getAttribute(r0)
            if (r1 != 0) goto L10
            cz.msebera.android.httpclient.auth.AuthState r1 = new cz.msebera.android.httpclient.auth.AuthState
            r1.<init>()
            r3.setAttribute(r0, r1)
        L10:
            java.lang.String r0 = "http.auth.proxy-scope"
            java.lang.Object r1 = r3.getAttribute(r0)
            if (r1 != 0) goto L20
            cz.msebera.android.httpclient.auth.AuthState r1 = new cz.msebera.android.httpclient.auth.AuthState
            r1.<init>()
            r3.setAttribute(r0, r1)
        L20:
            java.lang.String r0 = "http.authscheme-registry"
            java.lang.Object r1 = r3.getAttribute(r0)
            if (r1 != 0) goto L2d
            cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.auth.AuthSchemeProvider> r1 = r2.authSchemeRegistry
            r3.setAttribute(r0, r1)
        L2d:
            java.lang.String r0 = "http.cookiespec-registry"
            java.lang.Object r1 = r3.getAttribute(r0)
            if (r1 != 0) goto L3a
            cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.cookie.CookieSpecProvider> r1 = r2.cookieSpecRegistry
            r3.setAttribute(r0, r1)
        L3a:
            java.lang.String r0 = "http.cookie-store"
            java.lang.Object r1 = r3.getAttribute(r0)
            if (r1 != 0) goto L47
            cz.msebera.android.httpclient.client.CookieStore r1 = r2.cookieStore
            r3.setAttribute(r0, r1)
        L47:
            java.lang.String r0 = "http.auth.credentials-provider"
            java.lang.Object r1 = r3.getAttribute(r0)
            if (r1 != 0) goto L54
            cz.msebera.android.httpclient.client.CredentialsProvider r1 = r2.credentialsProvider
            r3.setAttribute(r0, r1)
        L54:
            java.lang.String r0 = "http.request-config"
            java.lang.Object r1 = r3.getAttribute(r0)
            if (r1 != 0) goto L61
            cz.msebera.android.httpclient.client.config.RequestConfig r1 = r2.defaultConfig
            r3.setAttribute(r0, r1)
        L61:
            return
    }

    @Override
    public void close() {
            r4 = this;
            java.util.List<java.io.Closeable> r0 = r4.closeables
            if (r0 == 0) goto L23
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r1 = r0.next()
            java.io.Closeable r1 = (java.io.Closeable) r1
            r1.close()     // Catch: java.io.IOException -> L18
            goto L8
        L18:
            r1 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r4.log
            java.lang.String r3 = r1.getMessage()
            r2.error(r3, r1)
            goto L8
        L23:
            return
    }

    @Override
    protected cz.msebera.android.httpclient.client.methods.CloseableHttpResponse doExecute(cz.msebera.android.httpclient.HttpHost r5, cz.msebera.android.httpclient.HttpRequest r6, cz.msebera.android.httpclient.protocol.HttpContext r7) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException {
            r4 = this;
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            boolean r0 = r6 instanceof cz.msebera.android.httpclient.client.methods.HttpExecutionAware
            r1 = 0
            if (r0 == 0) goto Le
            r0 = r6
            cz.msebera.android.httpclient.client.methods.HttpExecutionAware r0 = (cz.msebera.android.httpclient.client.methods.HttpExecutionAware) r0
            goto Lf
        Le:
            r0 = r1
        Lf:
            cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r2 = cz.msebera.android.httpclient.client.methods.HttpRequestWrapper.wrap(r6, r5)     // Catch: cz.msebera.android.httpclient.HttpException -> L5d
            if (r7 == 0) goto L16
            goto L1b
        L16:
            cz.msebera.android.httpclient.protocol.BasicHttpContext r7 = new cz.msebera.android.httpclient.protocol.BasicHttpContext     // Catch: cz.msebera.android.httpclient.HttpException -> L5d
            r7.<init>()     // Catch: cz.msebera.android.httpclient.HttpException -> L5d
        L1b:
            cz.msebera.android.httpclient.client.protocol.HttpClientContext r7 = cz.msebera.android.httpclient.client.protocol.HttpClientContext.adapt(r7)     // Catch: cz.msebera.android.httpclient.HttpException -> L5d
            boolean r3 = r6 instanceof cz.msebera.android.httpclient.client.methods.Configurable     // Catch: cz.msebera.android.httpclient.HttpException -> L5d
            if (r3 == 0) goto L2a
            r1 = r6
            cz.msebera.android.httpclient.client.methods.Configurable r1 = (cz.msebera.android.httpclient.client.methods.Configurable) r1     // Catch: cz.msebera.android.httpclient.HttpException -> L5d
            cz.msebera.android.httpclient.client.config.RequestConfig r1 = r1.getConfig()     // Catch: cz.msebera.android.httpclient.HttpException -> L5d
        L2a:
            if (r1 != 0) goto L4a
            cz.msebera.android.httpclient.params.HttpParams r6 = r6.getParams()     // Catch: cz.msebera.android.httpclient.HttpException -> L5d
            boolean r3 = r6 instanceof cz.msebera.android.httpclient.params.HttpParamsNames     // Catch: cz.msebera.android.httpclient.HttpException -> L5d
            if (r3 == 0) goto L46
            r3 = r6
            cz.msebera.android.httpclient.params.HttpParamsNames r3 = (cz.msebera.android.httpclient.params.HttpParamsNames) r3     // Catch: cz.msebera.android.httpclient.HttpException -> L5d
            java.util.Set r3 = r3.getNames()     // Catch: cz.msebera.android.httpclient.HttpException -> L5d
            boolean r3 = r3.isEmpty()     // Catch: cz.msebera.android.httpclient.HttpException -> L5d
            if (r3 != 0) goto L4a
            cz.msebera.android.httpclient.client.config.RequestConfig r1 = cz.msebera.android.httpclient.client.params.HttpClientParamConfig.getRequestConfig(r6)     // Catch: cz.msebera.android.httpclient.HttpException -> L5d
            goto L4a
        L46:
            cz.msebera.android.httpclient.client.config.RequestConfig r1 = cz.msebera.android.httpclient.client.params.HttpClientParamConfig.getRequestConfig(r6)     // Catch: cz.msebera.android.httpclient.HttpException -> L5d
        L4a:
            if (r1 == 0) goto L4f
            r7.setRequestConfig(r1)     // Catch: cz.msebera.android.httpclient.HttpException -> L5d
        L4f:
            r4.setupContext(r7)     // Catch: cz.msebera.android.httpclient.HttpException -> L5d
            cz.msebera.android.httpclient.conn.routing.HttpRoute r5 = r4.determineRoute(r5, r2, r7)     // Catch: cz.msebera.android.httpclient.HttpException -> L5d
            cz.msebera.android.httpclient.impl.execchain.ClientExecChain r6 = r4.execChain     // Catch: cz.msebera.android.httpclient.HttpException -> L5d
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r5 = r6.execute(r5, r2, r7, r0)     // Catch: cz.msebera.android.httpclient.HttpException -> L5d
            return r5
        L5d:
            r5 = move-exception
            cz.msebera.android.httpclient.client.ClientProtocolException r6 = new cz.msebera.android.httpclient.client.ClientProtocolException
            r6.<init>(r5)
            throw r6
    }

    @Override
    public cz.msebera.android.httpclient.client.config.RequestConfig getConfig() {
            r1 = this;
            cz.msebera.android.httpclient.client.config.RequestConfig r0 = r1.defaultConfig
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.conn.ClientConnectionManager getConnectionManager() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.InternalHttpClient$1 r0 = new cz.msebera.android.httpclient.impl.client.InternalHttpClient$1
            r0.<init>(r1)
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.params.HttpParams getParams() {
            r1 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            r0.<init>()
            throw r0
    }
}
