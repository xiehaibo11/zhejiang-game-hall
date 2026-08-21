package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class HttpClientBuilder {
    private boolean authCachingDisabled;
    private cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.auth.AuthSchemeProvider> authSchemeRegistry;
    private boolean automaticRetriesDisabled;
    private cz.msebera.android.httpclient.client.BackoffManager backoffManager;
    private java.util.List<java.io.Closeable> closeables;
    private cz.msebera.android.httpclient.conn.HttpClientConnectionManager connManager;
    private boolean connManagerShared;
    private long connTimeToLive;
    private java.util.concurrent.TimeUnit connTimeToLiveTimeUnit;
    private cz.msebera.android.httpclient.client.ConnectionBackoffStrategy connectionBackoffStrategy;
    private boolean connectionStateDisabled;
    private boolean contentCompressionDisabled;
    private java.util.Map<java.lang.String, cz.msebera.android.httpclient.client.entity.InputStreamFactory> contentDecoderMap;
    private boolean cookieManagementDisabled;
    private cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.cookie.CookieSpecProvider> cookieSpecRegistry;
    private cz.msebera.android.httpclient.client.CookieStore cookieStore;
    private cz.msebera.android.httpclient.client.CredentialsProvider credentialsProvider;
    private cz.msebera.android.httpclient.config.ConnectionConfig defaultConnectionConfig;
    private java.util.Collection<? extends cz.msebera.android.httpclient.Header> defaultHeaders;
    private cz.msebera.android.httpclient.client.config.RequestConfig defaultRequestConfig;
    private cz.msebera.android.httpclient.config.SocketConfig defaultSocketConfig;
    private boolean evictExpiredConnections;
    private boolean evictIdleConnections;
    private javax.net.ssl.HostnameVerifier hostnameVerifier;
    private cz.msebera.android.httpclient.protocol.HttpProcessor httpprocessor;
    private cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy keepAliveStrategy;
    private int maxConnPerRoute;
    private int maxConnTotal;
    private long maxIdleTime;
    private java.util.concurrent.TimeUnit maxIdleTimeUnit;
    private cz.msebera.android.httpclient.HttpHost proxy;
    private cz.msebera.android.httpclient.client.AuthenticationStrategy proxyAuthStrategy;
    private cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher publicSuffixMatcher;
    private boolean redirectHandlingDisabled;
    private cz.msebera.android.httpclient.client.RedirectStrategy redirectStrategy;
    private cz.msebera.android.httpclient.protocol.HttpRequestExecutor requestExec;
    private java.util.LinkedList<cz.msebera.android.httpclient.HttpRequestInterceptor> requestFirst;
    private java.util.LinkedList<cz.msebera.android.httpclient.HttpRequestInterceptor> requestLast;
    private java.util.LinkedList<cz.msebera.android.httpclient.HttpResponseInterceptor> responseFirst;
    private java.util.LinkedList<cz.msebera.android.httpclient.HttpResponseInterceptor> responseLast;
    private cz.msebera.android.httpclient.client.HttpRequestRetryHandler retryHandler;
    private cz.msebera.android.httpclient.ConnectionReuseStrategy reuseStrategy;
    private cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner routePlanner;
    private cz.msebera.android.httpclient.conn.SchemePortResolver schemePortResolver;
    private cz.msebera.android.httpclient.client.ServiceUnavailableRetryStrategy serviceUnavailStrategy;
    private cz.msebera.android.httpclient.conn.socket.LayeredConnectionSocketFactory sslSocketFactory;
    private javax.net.ssl.SSLContext sslcontext;
    private boolean systemProperties;
    private cz.msebera.android.httpclient.client.AuthenticationStrategy targetAuthStrategy;
    private java.lang.String userAgent;
    private cz.msebera.android.httpclient.client.UserTokenHandler userTokenHandler;



    protected HttpClientBuilder() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.maxConnTotal = r0
            r2.maxConnPerRoute = r0
            r0 = -1
            r2.connTimeToLive = r0
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.MILLISECONDS
            r2.connTimeToLiveTimeUnit = r0
            return
    }

    public static cz.msebera.android.httpclient.impl.client.HttpClientBuilder create() {
            cz.msebera.android.httpclient.impl.client.HttpClientBuilder r0 = new cz.msebera.android.httpclient.impl.client.HttpClientBuilder
            r0.<init>()
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

    protected void addCloseable(java.io.Closeable r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.List<java.io.Closeable> r0 = r1.closeables
            if (r0 != 0) goto Le
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.closeables = r0
        Le:
            java.util.List<java.io.Closeable> r0 = r1.closeables
            r0.add(r2)
            return
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder addInterceptorFirst(cz.msebera.android.httpclient.HttpRequestInterceptor r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            java.util.LinkedList<cz.msebera.android.httpclient.HttpRequestInterceptor> r0 = r1.requestFirst
            if (r0 != 0) goto Le
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1.requestFirst = r0
        Le:
            java.util.LinkedList<cz.msebera.android.httpclient.HttpRequestInterceptor> r0 = r1.requestFirst
            r0.addFirst(r2)
            return r1
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder addInterceptorFirst(cz.msebera.android.httpclient.HttpResponseInterceptor r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            java.util.LinkedList<cz.msebera.android.httpclient.HttpResponseInterceptor> r0 = r1.responseFirst
            if (r0 != 0) goto Le
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1.responseFirst = r0
        Le:
            java.util.LinkedList<cz.msebera.android.httpclient.HttpResponseInterceptor> r0 = r1.responseFirst
            r0.addFirst(r2)
            return r1
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder addInterceptorLast(cz.msebera.android.httpclient.HttpRequestInterceptor r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            java.util.LinkedList<cz.msebera.android.httpclient.HttpRequestInterceptor> r0 = r1.requestLast
            if (r0 != 0) goto Le
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1.requestLast = r0
        Le:
            java.util.LinkedList<cz.msebera.android.httpclient.HttpRequestInterceptor> r0 = r1.requestLast
            r0.addLast(r2)
            return r1
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder addInterceptorLast(cz.msebera.android.httpclient.HttpResponseInterceptor r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            java.util.LinkedList<cz.msebera.android.httpclient.HttpResponseInterceptor> r0 = r1.responseLast
            if (r0 != 0) goto Le
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1.responseLast = r0
        Le:
            java.util.LinkedList<cz.msebera.android.httpclient.HttpResponseInterceptor> r0 = r1.responseLast
            r0.addLast(r2)
            return r1
    }

    public cz.msebera.android.httpclient.impl.client.CloseableHttpClient build() {
            r23 = this;
            r9 = r23
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r0 = r9.publicSuffixMatcher
            if (r0 != 0) goto La
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r0 = cz.msebera.android.httpclient.conn.util.PublicSuffixMatcherLoader.getDefault()
        La:
            r10 = r0
            cz.msebera.android.httpclient.protocol.HttpRequestExecutor r0 = r9.requestExec
            if (r0 != 0) goto L14
            cz.msebera.android.httpclient.protocol.HttpRequestExecutor r0 = new cz.msebera.android.httpclient.protocol.HttpRequestExecutor
            r0.<init>()
        L14:
            r1 = r0
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r0 = r9.connManager
            java.lang.String r2 = "http.keepAlive"
            r11 = 2
            java.lang.String r3 = "true"
            if (r0 != 0) goto Le0
            cz.msebera.android.httpclient.conn.socket.LayeredConnectionSocketFactory r0 = r9.sslSocketFactory
            if (r0 != 0) goto L70
            boolean r0 = r9.systemProperties
            if (r0 == 0) goto L31
            java.lang.String r0 = "https.protocols"
            java.lang.String r0 = java.lang.System.getProperty(r0)
            java.lang.String[] r0 = split(r0)
            goto L32
        L31:
            r0 = 0
        L32:
            boolean r4 = r9.systemProperties
            if (r4 == 0) goto L41
            java.lang.String r4 = "https.cipherSuites"
            java.lang.String r4 = java.lang.System.getProperty(r4)
            java.lang.String[] r4 = split(r4)
            goto L42
        L41:
            r4 = 0
        L42:
            javax.net.ssl.HostnameVerifier r5 = r9.hostnameVerifier
            if (r5 != 0) goto L4b
            cz.msebera.android.httpclient.conn.ssl.DefaultHostnameVerifier r5 = new cz.msebera.android.httpclient.conn.ssl.DefaultHostnameVerifier
            r5.<init>(r10)
        L4b:
            javax.net.ssl.SSLContext r6 = r9.sslcontext
            if (r6 == 0) goto L56
            cz.msebera.android.httpclient.conn.ssl.SSLConnectionSocketFactory r7 = new cz.msebera.android.httpclient.conn.ssl.SSLConnectionSocketFactory
            r7.<init>(r6, r0, r4, r5)
            r0 = r7
            goto L70
        L56:
            boolean r6 = r9.systemProperties
            if (r6 == 0) goto L67
            cz.msebera.android.httpclient.conn.ssl.SSLConnectionSocketFactory r6 = new cz.msebera.android.httpclient.conn.ssl.SSLConnectionSocketFactory
            javax.net.SocketFactory r7 = javax.net.ssl.SSLSocketFactory.getDefault()
            javax.net.ssl.SSLSocketFactory r7 = (javax.net.ssl.SSLSocketFactory) r7
            r6.<init>(r7, r0, r4, r5)
            r0 = r6
            goto L70
        L67:
            cz.msebera.android.httpclient.conn.ssl.SSLConnectionSocketFactory r0 = new cz.msebera.android.httpclient.conn.ssl.SSLConnectionSocketFactory
            javax.net.ssl.SSLContext r4 = cz.msebera.android.httpclient.ssl.SSLContexts.createDefault()
            r0.<init>(r4, r5)
        L70:
            cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager r4 = new cz.msebera.android.httpclient.impl.conn.PoolingHttpClientConnectionManager
            cz.msebera.android.httpclient.config.RegistryBuilder r5 = cz.msebera.android.httpclient.config.RegistryBuilder.create()
            cz.msebera.android.httpclient.conn.socket.PlainConnectionSocketFactory r6 = cz.msebera.android.httpclient.conn.socket.PlainConnectionSocketFactory.getSocketFactory()
            java.lang.String r7 = "http"
            cz.msebera.android.httpclient.config.RegistryBuilder r5 = r5.register(r7, r6)
            java.lang.String r6 = "https"
            cz.msebera.android.httpclient.config.RegistryBuilder r0 = r5.register(r6, r0)
            cz.msebera.android.httpclient.config.Registry r14 = r0.build()
            r15 = 0
            r16 = 0
            r17 = 0
            long r5 = r9.connTimeToLive
            java.util.concurrent.TimeUnit r0 = r9.connTimeToLiveTimeUnit
            if (r0 == 0) goto L96
            goto L98
        L96:
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.MILLISECONDS
        L98:
            r20 = r0
            r13 = r4
            r18 = r5
            r13.<init>(r14, r15, r16, r17, r18, r20)
            cz.msebera.android.httpclient.config.SocketConfig r0 = r9.defaultSocketConfig
            if (r0 == 0) goto La7
            r4.setDefaultSocketConfig(r0)
        La7:
            cz.msebera.android.httpclient.config.ConnectionConfig r0 = r9.defaultConnectionConfig
            if (r0 == 0) goto Lae
            r4.setDefaultConnectionConfig(r0)
        Lae:
            boolean r0 = r9.systemProperties
            if (r0 == 0) goto Ld0
            java.lang.String r0 = java.lang.System.getProperty(r2, r3)
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 == 0) goto Ld0
            java.lang.String r0 = "http.maxConnections"
            java.lang.String r5 = "5"
            java.lang.String r0 = java.lang.System.getProperty(r0, r5)
            int r0 = java.lang.Integer.parseInt(r0)
            r4.setDefaultMaxPerRoute(r0)
            int r0 = r0 * 2
            r4.setMaxTotal(r0)
        Ld0:
            int r0 = r9.maxConnTotal
            if (r0 <= 0) goto Ld7
            r4.setMaxTotal(r0)
        Ld7:
            int r0 = r9.maxConnPerRoute
            if (r0 <= 0) goto Lde
            r4.setDefaultMaxPerRoute(r0)
        Lde:
            r15 = r4
            goto Le1
        Le0:
            r15 = r0
        Le1:
            cz.msebera.android.httpclient.ConnectionReuseStrategy r0 = r9.reuseStrategy
            if (r0 != 0) goto Lfb
            boolean r0 = r9.systemProperties
            if (r0 == 0) goto Lf9
            java.lang.String r0 = java.lang.System.getProperty(r2, r3)
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 == 0) goto Lf6
            cz.msebera.android.httpclient.impl.DefaultConnectionReuseStrategy r0 = cz.msebera.android.httpclient.impl.DefaultConnectionReuseStrategy.INSTANCE
            goto Lfb
        Lf6:
            cz.msebera.android.httpclient.impl.NoConnectionReuseStrategy r0 = cz.msebera.android.httpclient.impl.NoConnectionReuseStrategy.INSTANCE
            goto Lfb
        Lf9:
            cz.msebera.android.httpclient.impl.DefaultConnectionReuseStrategy r0 = cz.msebera.android.httpclient.impl.DefaultConnectionReuseStrategy.INSTANCE
        Lfb:
            r3 = r0
            cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy r0 = r9.keepAliveStrategy
            if (r0 != 0) goto L102
            cz.msebera.android.httpclient.impl.client.DefaultConnectionKeepAliveStrategy r0 = cz.msebera.android.httpclient.impl.client.DefaultConnectionKeepAliveStrategy.INSTANCE
        L102:
            r4 = r0
            cz.msebera.android.httpclient.client.AuthenticationStrategy r0 = r9.targetAuthStrategy
            if (r0 != 0) goto L109
            cz.msebera.android.httpclient.impl.client.TargetAuthenticationStrategy r0 = cz.msebera.android.httpclient.impl.client.TargetAuthenticationStrategy.INSTANCE
        L109:
            r6 = r0
            cz.msebera.android.httpclient.client.AuthenticationStrategy r0 = r9.proxyAuthStrategy
            if (r0 != 0) goto L110
            cz.msebera.android.httpclient.impl.client.ProxyAuthenticationStrategy r0 = cz.msebera.android.httpclient.impl.client.ProxyAuthenticationStrategy.INSTANCE
        L110:
            r7 = r0
            cz.msebera.android.httpclient.client.UserTokenHandler r0 = r9.userTokenHandler
            if (r0 != 0) goto L11e
            boolean r0 = r9.connectionStateDisabled
            if (r0 != 0) goto L11c
            cz.msebera.android.httpclient.impl.client.DefaultUserTokenHandler r0 = cz.msebera.android.httpclient.impl.client.DefaultUserTokenHandler.INSTANCE
            goto L11e
        L11c:
            cz.msebera.android.httpclient.impl.client.NoopUserTokenHandler r0 = cz.msebera.android.httpclient.impl.client.NoopUserTokenHandler.INSTANCE
        L11e:
            r8 = r0
            java.lang.String r0 = r9.userAgent
            if (r0 != 0) goto L13b
            boolean r2 = r9.systemProperties
            if (r2 == 0) goto L12d
            java.lang.String r0 = "http.agent"
            java.lang.String r0 = java.lang.System.getProperty(r0)
        L12d:
            if (r0 != 0) goto L13b
            java.lang.Class r0 = r23.getClass()
            java.lang.String r2 = "Apache-HttpClient"
            java.lang.String r5 = "cz.msebera.android.httpclient.client"
            java.lang.String r0 = cz.msebera.android.httpclient.util.VersionInfo.getUserAgent(r2, r5, r0)
        L13b:
            r13 = r0
            cz.msebera.android.httpclient.protocol.ImmutableHttpProcessor r5 = new cz.msebera.android.httpclient.protocol.ImmutableHttpProcessor
            cz.msebera.android.httpclient.HttpRequestInterceptor[] r0 = new cz.msebera.android.httpclient.HttpRequestInterceptor[r11]
            cz.msebera.android.httpclient.protocol.RequestTargetHost r2 = new cz.msebera.android.httpclient.protocol.RequestTargetHost
            r2.<init>()
            r14 = 0
            r0[r14] = r2
            cz.msebera.android.httpclient.protocol.RequestUserAgent r2 = new cz.msebera.android.httpclient.protocol.RequestUserAgent
            r2.<init>(r13)
            r12 = 1
            r0[r12] = r2
            r5.<init>(r0)
            r0 = r23
            r2 = r15
            cz.msebera.android.httpclient.impl.execchain.ClientExecChain r0 = r0.createMainExec(r1, r2, r3, r4, r5, r6, r7, r8)
            cz.msebera.android.httpclient.impl.execchain.ClientExecChain r0 = r9.decorateMainExec(r0)
            cz.msebera.android.httpclient.protocol.HttpProcessor r1 = r9.httpprocessor
            if (r1 != 0) goto L28d
            cz.msebera.android.httpclient.protocol.HttpProcessorBuilder r1 = cz.msebera.android.httpclient.protocol.HttpProcessorBuilder.create()
            java.util.LinkedList<cz.msebera.android.httpclient.HttpRequestInterceptor> r2 = r9.requestFirst
            if (r2 == 0) goto L17e
            java.util.Iterator r2 = r2.iterator()
        L16e:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L17e
            java.lang.Object r3 = r2.next()
            cz.msebera.android.httpclient.HttpRequestInterceptor r3 = (cz.msebera.android.httpclient.HttpRequestInterceptor) r3
            r1.addFirst(r3)
            goto L16e
        L17e:
            java.util.LinkedList<cz.msebera.android.httpclient.HttpResponseInterceptor> r2 = r9.responseFirst
            if (r2 == 0) goto L196
            java.util.Iterator r2 = r2.iterator()
        L186:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L196
            java.lang.Object r3 = r2.next()
            cz.msebera.android.httpclient.HttpResponseInterceptor r3 = (cz.msebera.android.httpclient.HttpResponseInterceptor) r3
            r1.addFirst(r3)
            goto L186
        L196:
            r2 = 6
            cz.msebera.android.httpclient.HttpRequestInterceptor[] r2 = new cz.msebera.android.httpclient.HttpRequestInterceptor[r2]
            cz.msebera.android.httpclient.client.protocol.RequestDefaultHeaders r3 = new cz.msebera.android.httpclient.client.protocol.RequestDefaultHeaders
            java.util.Collection<? extends cz.msebera.android.httpclient.Header> r4 = r9.defaultHeaders
            r3.<init>(r4)
            r2[r14] = r3
            cz.msebera.android.httpclient.protocol.RequestContent r3 = new cz.msebera.android.httpclient.protocol.RequestContent
            r3.<init>()
            r2[r12] = r3
            cz.msebera.android.httpclient.protocol.RequestTargetHost r3 = new cz.msebera.android.httpclient.protocol.RequestTargetHost
            r3.<init>()
            r2[r11] = r3
            r3 = 3
            cz.msebera.android.httpclient.client.protocol.RequestClientConnControl r4 = new cz.msebera.android.httpclient.client.protocol.RequestClientConnControl
            r4.<init>()
            r2[r3] = r4
            r3 = 4
            cz.msebera.android.httpclient.protocol.RequestUserAgent r4 = new cz.msebera.android.httpclient.protocol.RequestUserAgent
            r4.<init>(r13)
            r2[r3] = r4
            r3 = 5
            cz.msebera.android.httpclient.client.protocol.RequestExpectContinue r4 = new cz.msebera.android.httpclient.client.protocol.RequestExpectContinue
            r4.<init>()
            r2[r3] = r4
            r1.addAll(r2)
            boolean r2 = r9.cookieManagementDisabled
            if (r2 != 0) goto L1d7
            cz.msebera.android.httpclient.client.protocol.RequestAddCookies r2 = new cz.msebera.android.httpclient.client.protocol.RequestAddCookies
            r2.<init>()
            r1.add(r2)
        L1d7:
            boolean r2 = r9.contentCompressionDisabled
            if (r2 != 0) goto L1fc
            java.util.Map<java.lang.String, cz.msebera.android.httpclient.client.entity.InputStreamFactory> r2 = r9.contentDecoderMap
            if (r2 == 0) goto L1f4
            java.util.ArrayList r3 = new java.util.ArrayList
            java.util.Set r2 = r2.keySet()
            r3.<init>(r2)
            java.util.Collections.sort(r3)
            cz.msebera.android.httpclient.client.protocol.RequestAcceptEncoding r2 = new cz.msebera.android.httpclient.client.protocol.RequestAcceptEncoding
            r2.<init>(r3)
            r1.add(r2)
            goto L1fc
        L1f4:
            cz.msebera.android.httpclient.client.protocol.RequestAcceptEncoding r2 = new cz.msebera.android.httpclient.client.protocol.RequestAcceptEncoding
            r2.<init>()
            r1.add(r2)
        L1fc:
            boolean r2 = r9.authCachingDisabled
            if (r2 != 0) goto L208
            cz.msebera.android.httpclient.client.protocol.RequestAuthCache r2 = new cz.msebera.android.httpclient.client.protocol.RequestAuthCache
            r2.<init>()
            r1.add(r2)
        L208:
            boolean r2 = r9.cookieManagementDisabled
            if (r2 != 0) goto L214
            cz.msebera.android.httpclient.client.protocol.ResponseProcessCookies r2 = new cz.msebera.android.httpclient.client.protocol.ResponseProcessCookies
            r2.<init>()
            r1.add(r2)
        L214:
            boolean r2 = r9.contentCompressionDisabled
            if (r2 != 0) goto L259
            java.util.Map<java.lang.String, cz.msebera.android.httpclient.client.entity.InputStreamFactory> r2 = r9.contentDecoderMap
            if (r2 == 0) goto L251
            cz.msebera.android.httpclient.config.RegistryBuilder r2 = cz.msebera.android.httpclient.config.RegistryBuilder.create()
            java.util.Map<java.lang.String, cz.msebera.android.httpclient.client.entity.InputStreamFactory> r3 = r9.contentDecoderMap
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
        L22a:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L244
            java.lang.Object r4 = r3.next()
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4
            java.lang.Object r5 = r4.getKey()
            java.lang.String r5 = (java.lang.String) r5
            java.lang.Object r4 = r4.getValue()
            r2.register(r5, r4)
            goto L22a
        L244:
            cz.msebera.android.httpclient.client.protocol.ResponseContentEncoding r3 = new cz.msebera.android.httpclient.client.protocol.ResponseContentEncoding
            cz.msebera.android.httpclient.config.Registry r2 = r2.build()
            r3.<init>(r2)
            r1.add(r3)
            goto L259
        L251:
            cz.msebera.android.httpclient.client.protocol.ResponseContentEncoding r2 = new cz.msebera.android.httpclient.client.protocol.ResponseContentEncoding
            r2.<init>()
            r1.add(r2)
        L259:
            java.util.LinkedList<cz.msebera.android.httpclient.HttpRequestInterceptor> r2 = r9.requestLast
            if (r2 == 0) goto L271
            java.util.Iterator r2 = r2.iterator()
        L261:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L271
            java.lang.Object r3 = r2.next()
            cz.msebera.android.httpclient.HttpRequestInterceptor r3 = (cz.msebera.android.httpclient.HttpRequestInterceptor) r3
            r1.addLast(r3)
            goto L261
        L271:
            java.util.LinkedList<cz.msebera.android.httpclient.HttpResponseInterceptor> r2 = r9.responseLast
            if (r2 == 0) goto L289
            java.util.Iterator r2 = r2.iterator()
        L279:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L289
            java.lang.Object r3 = r2.next()
            cz.msebera.android.httpclient.HttpResponseInterceptor r3 = (cz.msebera.android.httpclient.HttpResponseInterceptor) r3
            r1.addLast(r3)
            goto L279
        L289:
            cz.msebera.android.httpclient.protocol.HttpProcessor r1 = r1.build()
        L28d:
            cz.msebera.android.httpclient.impl.execchain.ProtocolExec r2 = new cz.msebera.android.httpclient.impl.execchain.ProtocolExec
            r2.<init>(r0, r1)
            cz.msebera.android.httpclient.impl.execchain.ClientExecChain r0 = r9.decorateProtocolExec(r2)
            boolean r1 = r9.automaticRetriesDisabled
            if (r1 != 0) goto L2a6
            cz.msebera.android.httpclient.client.HttpRequestRetryHandler r1 = r9.retryHandler
            if (r1 != 0) goto L2a0
            cz.msebera.android.httpclient.impl.client.DefaultHttpRequestRetryHandler r1 = cz.msebera.android.httpclient.impl.client.DefaultHttpRequestRetryHandler.INSTANCE
        L2a0:
            cz.msebera.android.httpclient.impl.execchain.RetryExec r2 = new cz.msebera.android.httpclient.impl.execchain.RetryExec
            r2.<init>(r0, r1)
            r0 = r2
        L2a6:
            cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner r1 = r9.routePlanner
            if (r1 != 0) goto L2cf
            cz.msebera.android.httpclient.conn.SchemePortResolver r1 = r9.schemePortResolver
            if (r1 != 0) goto L2b0
            cz.msebera.android.httpclient.impl.conn.DefaultSchemePortResolver r1 = cz.msebera.android.httpclient.impl.conn.DefaultSchemePortResolver.INSTANCE
        L2b0:
            cz.msebera.android.httpclient.HttpHost r2 = r9.proxy
            if (r2 == 0) goto L2bb
            cz.msebera.android.httpclient.impl.conn.DefaultProxyRoutePlanner r3 = new cz.msebera.android.httpclient.impl.conn.DefaultProxyRoutePlanner
            r3.<init>(r2, r1)
            r2 = r3
            goto L2d0
        L2bb:
            boolean r2 = r9.systemProperties
            if (r2 == 0) goto L2c9
            cz.msebera.android.httpclient.impl.conn.SystemDefaultRoutePlanner r2 = new cz.msebera.android.httpclient.impl.conn.SystemDefaultRoutePlanner
            java.net.ProxySelector r3 = java.net.ProxySelector.getDefault()
            r2.<init>(r1, r3)
            goto L2d0
        L2c9:
            cz.msebera.android.httpclient.impl.conn.DefaultRoutePlanner r2 = new cz.msebera.android.httpclient.impl.conn.DefaultRoutePlanner
            r2.<init>(r1)
            goto L2d0
        L2cf:
            r2 = r1
        L2d0:
            boolean r1 = r9.redirectHandlingDisabled
            if (r1 != 0) goto L2e0
            cz.msebera.android.httpclient.client.RedirectStrategy r1 = r9.redirectStrategy
            if (r1 != 0) goto L2da
            cz.msebera.android.httpclient.impl.client.DefaultRedirectStrategy r1 = cz.msebera.android.httpclient.impl.client.DefaultRedirectStrategy.INSTANCE
        L2da:
            cz.msebera.android.httpclient.impl.execchain.RedirectExec r3 = new cz.msebera.android.httpclient.impl.execchain.RedirectExec
            r3.<init>(r0, r2, r1)
            r0 = r3
        L2e0:
            cz.msebera.android.httpclient.client.ServiceUnavailableRetryStrategy r1 = r9.serviceUnavailStrategy
            if (r1 == 0) goto L2ea
            cz.msebera.android.httpclient.impl.execchain.ServiceUnavailableRetryExec r3 = new cz.msebera.android.httpclient.impl.execchain.ServiceUnavailableRetryExec
            r3.<init>(r0, r1)
            r0 = r3
        L2ea:
            cz.msebera.android.httpclient.client.BackoffManager r1 = r9.backoffManager
            if (r1 == 0) goto L2f9
            cz.msebera.android.httpclient.client.ConnectionBackoffStrategy r3 = r9.connectionBackoffStrategy
            if (r3 == 0) goto L2f9
            cz.msebera.android.httpclient.impl.execchain.BackoffStrategyExec r4 = new cz.msebera.android.httpclient.impl.execchain.BackoffStrategyExec
            r4.<init>(r0, r3, r1)
            r14 = r4
            goto L2fa
        L2f9:
            r14 = r0
        L2fa:
            cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.auth.AuthSchemeProvider> r0 = r9.authSchemeRegistry
            if (r0 != 0) goto L327
            cz.msebera.android.httpclient.config.RegistryBuilder r0 = cz.msebera.android.httpclient.config.RegistryBuilder.create()
            cz.msebera.android.httpclient.impl.auth.BasicSchemeFactory r1 = new cz.msebera.android.httpclient.impl.auth.BasicSchemeFactory
            r1.<init>()
            java.lang.String r3 = "Basic"
            cz.msebera.android.httpclient.config.RegistryBuilder r0 = r0.register(r3, r1)
            cz.msebera.android.httpclient.impl.auth.DigestSchemeFactory r1 = new cz.msebera.android.httpclient.impl.auth.DigestSchemeFactory
            r1.<init>()
            java.lang.String r3 = "Digest"
            cz.msebera.android.httpclient.config.RegistryBuilder r0 = r0.register(r3, r1)
            cz.msebera.android.httpclient.impl.auth.NTLMSchemeFactory r1 = new cz.msebera.android.httpclient.impl.auth.NTLMSchemeFactory
            r1.<init>()
            java.lang.String r3 = "NTLM"
            cz.msebera.android.httpclient.config.RegistryBuilder r0 = r0.register(r3, r1)
            cz.msebera.android.httpclient.config.Registry r0 = r0.build()
        L327:
            r18 = r0
            cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.cookie.CookieSpecProvider> r0 = r9.cookieSpecRegistry
            if (r0 != 0) goto L37c
            cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider r0 = new cz.msebera.android.httpclient.impl.cookie.DefaultCookieSpecProvider
            r0.<init>(r10)
            cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider r1 = new cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider
            cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel r3 = cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel.RELAXED
            r1.<init>(r3, r10)
            cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider r3 = new cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider
            cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider$CompatibilityLevel r4 = cz.msebera.android.httpclient.impl.cookie.RFC6265CookieSpecProvider.CompatibilityLevel.STRICT
            r3.<init>(r4, r10)
            cz.msebera.android.httpclient.config.RegistryBuilder r4 = cz.msebera.android.httpclient.config.RegistryBuilder.create()
            java.lang.String r5 = "default"
            cz.msebera.android.httpclient.config.RegistryBuilder r4 = r4.register(r5, r0)
            java.lang.String r5 = "best-match"
            cz.msebera.android.httpclient.config.RegistryBuilder r4 = r4.register(r5, r0)
            java.lang.String r5 = "compatibility"
            cz.msebera.android.httpclient.config.RegistryBuilder r0 = r4.register(r5, r0)
            java.lang.String r4 = "standard"
            cz.msebera.android.httpclient.config.RegistryBuilder r0 = r0.register(r4, r1)
            java.lang.String r1 = "standard-strict"
            cz.msebera.android.httpclient.config.RegistryBuilder r0 = r0.register(r1, r3)
            cz.msebera.android.httpclient.impl.cookie.NetscapeDraftSpecProvider r1 = new cz.msebera.android.httpclient.impl.cookie.NetscapeDraftSpecProvider
            r1.<init>()
            java.lang.String r3 = "netscape"
            cz.msebera.android.httpclient.config.RegistryBuilder r0 = r0.register(r3, r1)
            cz.msebera.android.httpclient.impl.cookie.IgnoreSpecProvider r1 = new cz.msebera.android.httpclient.impl.cookie.IgnoreSpecProvider
            r1.<init>()
            java.lang.String r3 = "ignoreCookies"
            cz.msebera.android.httpclient.config.RegistryBuilder r0 = r0.register(r3, r1)
            cz.msebera.android.httpclient.config.Registry r0 = r0.build()
        L37c:
            r17 = r0
            cz.msebera.android.httpclient.client.CookieStore r0 = r9.cookieStore
            if (r0 != 0) goto L387
            cz.msebera.android.httpclient.impl.client.BasicCookieStore r0 = new cz.msebera.android.httpclient.impl.client.BasicCookieStore
            r0.<init>()
        L387:
            r19 = r0
            cz.msebera.android.httpclient.client.CredentialsProvider r0 = r9.credentialsProvider
            if (r0 != 0) goto L39c
            boolean r0 = r9.systemProperties
            if (r0 == 0) goto L397
            cz.msebera.android.httpclient.impl.client.SystemDefaultCredentialsProvider r0 = new cz.msebera.android.httpclient.impl.client.SystemDefaultCredentialsProvider
            r0.<init>()
            goto L39c
        L397:
            cz.msebera.android.httpclient.impl.client.BasicCredentialsProvider r0 = new cz.msebera.android.httpclient.impl.client.BasicCredentialsProvider
            r0.<init>()
        L39c:
            r20 = r0
            java.util.List<java.io.Closeable> r0 = r9.closeables
            if (r0 == 0) goto L3aa
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>(r0)
            r16 = r1
            goto L3ac
        L3aa:
            r16 = 0
        L3ac:
            boolean r0 = r9.connManagerShared
            if (r0 != 0) goto L3ef
            if (r16 != 0) goto L3b8
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>(r12)
            goto L3ba
        L3b8:
            r0 = r16
        L3ba:
            boolean r1 = r9.evictExpiredConnections
            if (r1 != 0) goto L3c2
            boolean r1 = r9.evictIdleConnections
            if (r1 == 0) goto L3e4
        L3c2:
            cz.msebera.android.httpclient.impl.client.IdleConnectionEvictor r1 = new cz.msebera.android.httpclient.impl.client.IdleConnectionEvictor
            long r3 = r9.maxIdleTime
            r5 = 0
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 <= 0) goto L3cd
            goto L3cf
        L3cd:
            r3 = 10
        L3cf:
            java.util.concurrent.TimeUnit r5 = r9.maxIdleTimeUnit
            if (r5 == 0) goto L3d4
            goto L3d6
        L3d4:
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
        L3d6:
            r1.<init>(r15, r3, r5)
            cz.msebera.android.httpclient.impl.client.HttpClientBuilder$1 r3 = new cz.msebera.android.httpclient.impl.client.HttpClientBuilder$1
            r3.<init>(r9, r1)
            r0.add(r3)
            r1.start()
        L3e4:
            cz.msebera.android.httpclient.impl.client.HttpClientBuilder$2 r1 = new cz.msebera.android.httpclient.impl.client.HttpClientBuilder$2
            r1.<init>(r9, r15)
            r0.add(r1)
            r22 = r0
            goto L3f1
        L3ef:
            r22 = r16
        L3f1:
            cz.msebera.android.httpclient.impl.client.InternalHttpClient r0 = new cz.msebera.android.httpclient.impl.client.InternalHttpClient
            cz.msebera.android.httpclient.client.config.RequestConfig r1 = r9.defaultRequestConfig
            if (r1 == 0) goto L3f8
            goto L3fa
        L3f8:
            cz.msebera.android.httpclient.client.config.RequestConfig r1 = cz.msebera.android.httpclient.client.config.RequestConfig.DEFAULT
        L3fa:
            r21 = r1
            r13 = r0
            r16 = r2
            r13.<init>(r14, r15, r16, r17, r18, r19, r20, r21, r22)
            return r0
    }

    protected cz.msebera.android.httpclient.impl.execchain.ClientExecChain createMainExec(cz.msebera.android.httpclient.protocol.HttpRequestExecutor r11, cz.msebera.android.httpclient.conn.HttpClientConnectionManager r12, cz.msebera.android.httpclient.ConnectionReuseStrategy r13, cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy r14, cz.msebera.android.httpclient.protocol.HttpProcessor r15, cz.msebera.android.httpclient.client.AuthenticationStrategy r16, cz.msebera.android.httpclient.client.AuthenticationStrategy r17, cz.msebera.android.httpclient.client.UserTokenHandler r18) {
            r10 = this;
            cz.msebera.android.httpclient.impl.execchain.MainClientExec r9 = new cz.msebera.android.httpclient.impl.execchain.MainClientExec
            r0 = r9
            r1 = r11
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            r7 = r17
            r8 = r18
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            return r9
    }

    protected cz.msebera.android.httpclient.impl.execchain.ClientExecChain decorateMainExec(cz.msebera.android.httpclient.impl.execchain.ClientExecChain r1) {
            r0 = this;
            return r1
    }

    protected cz.msebera.android.httpclient.impl.execchain.ClientExecChain decorateProtocolExec(cz.msebera.android.httpclient.impl.execchain.ClientExecChain r1) {
            r0 = this;
            return r1
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder disableAuthCaching() {
            r1 = this;
            r0 = 1
            r1.authCachingDisabled = r0
            return r1
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder disableAutomaticRetries() {
            r1 = this;
            r0 = 1
            r1.automaticRetriesDisabled = r0
            return r1
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder disableConnectionState() {
            r1 = this;
            r0 = 1
            r1.connectionStateDisabled = r0
            return r1
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder disableContentCompression() {
            r1 = this;
            r0 = 1
            r1.contentCompressionDisabled = r0
            return r1
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder disableCookieManagement() {
            r1 = this;
            r0 = 1
            r1.cookieManagementDisabled = r0
            return r1
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder disableRedirectHandling() {
            r1 = this;
            r0 = 1
            r1.redirectHandlingDisabled = r0
            return r1
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder evictExpiredConnections() {
            r1 = this;
            r0 = 1
            r1.evictExpiredConnections = r0
            return r1
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder evictIdleConnections(java.lang.Long r3, java.util.concurrent.TimeUnit r4) {
            r2 = this;
            r0 = 1
            r2.evictIdleConnections = r0
            long r0 = r3.longValue()
            r2.maxIdleTime = r0
            r2.maxIdleTimeUnit = r4
            return r2
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setBackoffManager(cz.msebera.android.httpclient.client.BackoffManager r1) {
            r0 = this;
            r0.backoffManager = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setConnectionBackoffStrategy(cz.msebera.android.httpclient.client.ConnectionBackoffStrategy r1) {
            r0 = this;
            r0.connectionBackoffStrategy = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setConnectionManager(cz.msebera.android.httpclient.conn.HttpClientConnectionManager r1) {
            r0 = this;
            r0.connManager = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setConnectionManagerShared(boolean r1) {
            r0 = this;
            r0.connManagerShared = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setConnectionReuseStrategy(cz.msebera.android.httpclient.ConnectionReuseStrategy r1) {
            r0 = this;
            r0.reuseStrategy = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setConnectionTimeToLive(long r1, java.util.concurrent.TimeUnit r3) {
            r0 = this;
            r0.connTimeToLive = r1
            r0.connTimeToLiveTimeUnit = r3
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setContentDecoderRegistry(java.util.Map<java.lang.String, cz.msebera.android.httpclient.client.entity.InputStreamFactory> r1) {
            r0 = this;
            r0.contentDecoderMap = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setDefaultAuthSchemeRegistry(cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.auth.AuthSchemeProvider> r1) {
            r0 = this;
            r0.authSchemeRegistry = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setDefaultConnectionConfig(cz.msebera.android.httpclient.config.ConnectionConfig r1) {
            r0 = this;
            r0.defaultConnectionConfig = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setDefaultCookieSpecRegistry(cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.cookie.CookieSpecProvider> r1) {
            r0 = this;
            r0.cookieSpecRegistry = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setDefaultCookieStore(cz.msebera.android.httpclient.client.CookieStore r1) {
            r0 = this;
            r0.cookieStore = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setDefaultCredentialsProvider(cz.msebera.android.httpclient.client.CredentialsProvider r1) {
            r0 = this;
            r0.credentialsProvider = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setDefaultHeaders(java.util.Collection<? extends cz.msebera.android.httpclient.Header> r1) {
            r0 = this;
            r0.defaultHeaders = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setDefaultRequestConfig(cz.msebera.android.httpclient.client.config.RequestConfig r1) {
            r0 = this;
            r0.defaultRequestConfig = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setDefaultSocketConfig(cz.msebera.android.httpclient.config.SocketConfig r1) {
            r0 = this;
            r0.defaultSocketConfig = r1
            return r0
    }

    @java.lang.Deprecated
    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setHostnameVerifier(cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r1) {
            r0 = this;
            r0.hostnameVerifier = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setHttpProcessor(cz.msebera.android.httpclient.protocol.HttpProcessor r1) {
            r0 = this;
            r0.httpprocessor = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setKeepAliveStrategy(cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy r1) {
            r0 = this;
            r0.keepAliveStrategy = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setMaxConnPerRoute(int r1) {
            r0 = this;
            r0.maxConnPerRoute = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setMaxConnTotal(int r1) {
            r0 = this;
            r0.maxConnTotal = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setProxy(cz.msebera.android.httpclient.HttpHost r1) {
            r0 = this;
            r0.proxy = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setProxyAuthenticationStrategy(cz.msebera.android.httpclient.client.AuthenticationStrategy r1) {
            r0 = this;
            r0.proxyAuthStrategy = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setPublicSuffixMatcher(cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r1) {
            r0 = this;
            r0.publicSuffixMatcher = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setRedirectStrategy(cz.msebera.android.httpclient.client.RedirectStrategy r1) {
            r0 = this;
            r0.redirectStrategy = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setRequestExecutor(cz.msebera.android.httpclient.protocol.HttpRequestExecutor r1) {
            r0 = this;
            r0.requestExec = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setRetryHandler(cz.msebera.android.httpclient.client.HttpRequestRetryHandler r1) {
            r0 = this;
            r0.retryHandler = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setRoutePlanner(cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner r1) {
            r0 = this;
            r0.routePlanner = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setSSLHostnameVerifier(javax.net.ssl.HostnameVerifier r1) {
            r0 = this;
            r0.hostnameVerifier = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setSSLSocketFactory(cz.msebera.android.httpclient.conn.socket.LayeredConnectionSocketFactory r1) {
            r0 = this;
            r0.sslSocketFactory = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setSchemePortResolver(cz.msebera.android.httpclient.conn.SchemePortResolver r1) {
            r0 = this;
            r0.schemePortResolver = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setServiceUnavailableRetryStrategy(cz.msebera.android.httpclient.client.ServiceUnavailableRetryStrategy r1) {
            r0 = this;
            r0.serviceUnavailStrategy = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setSslcontext(javax.net.ssl.SSLContext r1) {
            r0 = this;
            r0.sslcontext = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setTargetAuthenticationStrategy(cz.msebera.android.httpclient.client.AuthenticationStrategy r1) {
            r0 = this;
            r0.targetAuthStrategy = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setUserAgent(java.lang.String r1) {
            r0 = this;
            r0.userAgent = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder setUserTokenHandler(cz.msebera.android.httpclient.client.UserTokenHandler r1) {
            r0 = this;
            r0.userTokenHandler = r1
            return r0
    }

    public final cz.msebera.android.httpclient.impl.client.HttpClientBuilder useSystemProperties() {
            r1 = this;
            r0 = 1
            r1.systemProperties = r0
            return r1
    }
}
