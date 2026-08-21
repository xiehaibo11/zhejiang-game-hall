package cz.msebera.android.httpclient.impl.execchain;

@cz.msebera.android.httpclient.annotation.Immutable
public class MinimalClientExec implements cz.msebera.android.httpclient.impl.execchain.ClientExecChain {
    private final cz.msebera.android.httpclient.conn.HttpClientConnectionManager connManager;
    private final cz.msebera.android.httpclient.protocol.HttpProcessor httpProcessor;
    private final cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy keepAliveStrategy;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final cz.msebera.android.httpclient.protocol.HttpRequestExecutor requestExecutor;
    private final cz.msebera.android.httpclient.ConnectionReuseStrategy reuseStrategy;

    public MinimalClientExec(cz.msebera.android.httpclient.protocol.HttpRequestExecutor r7, cz.msebera.android.httpclient.conn.HttpClientConnectionManager r8, cz.msebera.android.httpclient.ConnectionReuseStrategy r9, cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy r10) {
            r6 = this;
            r6.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r6.getClass()
            r0.<init>(r1)
            r6.log = r0
            java.lang.String r0 = "HTTP request executor"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r0)
            java.lang.String r0 = "Client connection manager"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)
            java.lang.String r0 = "Connection reuse strategy"
            cz.msebera.android.httpclient.util.Args.notNull(r9, r0)
            java.lang.String r0 = "Connection keep alive strategy"
            cz.msebera.android.httpclient.util.Args.notNull(r10, r0)
            cz.msebera.android.httpclient.protocol.ImmutableHttpProcessor r0 = new cz.msebera.android.httpclient.protocol.ImmutableHttpProcessor
            r1 = 4
            cz.msebera.android.httpclient.HttpRequestInterceptor[] r1 = new cz.msebera.android.httpclient.HttpRequestInterceptor[r1]
            cz.msebera.android.httpclient.protocol.RequestContent r2 = new cz.msebera.android.httpclient.protocol.RequestContent
            r2.<init>()
            r3 = 0
            r1[r3] = r2
            cz.msebera.android.httpclient.protocol.RequestTargetHost r2 = new cz.msebera.android.httpclient.protocol.RequestTargetHost
            r2.<init>()
            r3 = 1
            r1[r3] = r2
            cz.msebera.android.httpclient.client.protocol.RequestClientConnControl r2 = new cz.msebera.android.httpclient.client.protocol.RequestClientConnControl
            r2.<init>()
            r3 = 2
            r1[r3] = r2
            cz.msebera.android.httpclient.protocol.RequestUserAgent r2 = new cz.msebera.android.httpclient.protocol.RequestUserAgent
            java.lang.Class r3 = r6.getClass()
            java.lang.String r4 = "Apache-HttpClient"
            java.lang.String r5 = "cz.msebera.android.httpclient.client"
            java.lang.String r3 = cz.msebera.android.httpclient.util.VersionInfo.getUserAgent(r4, r5, r3)
            r2.<init>(r3)
            r3 = 3
            r1[r3] = r2
            r0.<init>(r1)
            r6.httpProcessor = r0
            r6.requestExecutor = r7
            r6.connManager = r8
            r6.reuseStrategy = r9
            r6.keepAliveStrategy = r10
            return
    }

    static void rewriteRequestURI(cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r3, cz.msebera.android.httpclient.conn.routing.HttpRoute r4) throws cz.msebera.android.httpclient.ProtocolException {
            java.net.URI r4 = r3.getURI()     // Catch: java.net.URISyntaxException -> L1b
            if (r4 == 0) goto L1a
            boolean r0 = r4.isAbsolute()     // Catch: java.net.URISyntaxException -> L1b
            if (r0 == 0) goto L13
            r0 = 0
            r1 = 1
            java.net.URI r4 = cz.msebera.android.httpclient.client.utils.URIUtils.rewriteURI(r4, r0, r1)     // Catch: java.net.URISyntaxException -> L1b
            goto L17
        L13:
            java.net.URI r4 = cz.msebera.android.httpclient.client.utils.URIUtils.rewriteURI(r4)     // Catch: java.net.URISyntaxException -> L1b
        L17:
            r3.setURI(r4)     // Catch: java.net.URISyntaxException -> L1b
        L1a:
            return
        L1b:
            r4 = move-exception
            cz.msebera.android.httpclient.ProtocolException r0 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid URI: "
            r1.append(r2)
            cz.msebera.android.httpclient.RequestLine r3 = r3.getRequestLine()
            java.lang.String r3 = r3.getUri()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3, r4)
            throw r0
    }

    @Override
    public cz.msebera.android.httpclient.client.methods.CloseableHttpResponse execute(cz.msebera.android.httpclient.conn.routing.HttpRoute r8, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r9, cz.msebera.android.httpclient.client.protocol.HttpClientContext r10, cz.msebera.android.httpclient.client.methods.HttpExecutionAware r11) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r7 = this;
            java.lang.String r0 = "HTTP route"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r9, r0)
            java.lang.String r0 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r10, r0)
            rewriteRequestURI(r9, r8)
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r0 = r7.connManager
            r1 = 0
            cz.msebera.android.httpclient.conn.ConnectionRequest r0 = r0.requestConnection(r8, r1)
            java.lang.String r2 = "Request aborted"
            if (r11 == 0) goto L30
            boolean r3 = r11.isAborted()
            if (r3 != 0) goto L27
            r11.setCancellable(r0)
            goto L30
        L27:
            r0.cancel()
            cz.msebera.android.httpclient.impl.execchain.RequestAbortedException r8 = new cz.msebera.android.httpclient.impl.execchain.RequestAbortedException
            r8.<init>(r2)
            throw r8
        L30:
            cz.msebera.android.httpclient.client.config.RequestConfig r3 = r10.getRequestConfig()
            int r4 = r3.getConnectionRequestTimeout()     // Catch: java.util.concurrent.ExecutionException -> L125 java.lang.InterruptedException -> L136
            if (r4 <= 0) goto L3c
            long r4 = (long) r4     // Catch: java.util.concurrent.ExecutionException -> L125 java.lang.InterruptedException -> L136
            goto L3e
        L3c:
            r4 = 0
        L3e:
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.util.concurrent.ExecutionException -> L125 java.lang.InterruptedException -> L136
            cz.msebera.android.httpclient.HttpClientConnection r0 = r0.get(r4, r6)     // Catch: java.util.concurrent.ExecutionException -> L125 java.lang.InterruptedException -> L136
            cz.msebera.android.httpclient.impl.execchain.ConnectionHolder r4 = new cz.msebera.android.httpclient.impl.execchain.ConnectionHolder
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r7.log
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r6 = r7.connManager
            r4.<init>(r5, r6, r0)
            if (r11 == 0) goto L62
            boolean r5 = r11.isAborted()     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            if (r5 != 0) goto L59
            r11.setCancellable(r4)     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            goto L62
        L59:
            r4.close()     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            cz.msebera.android.httpclient.impl.execchain.RequestAbortedException r8 = new cz.msebera.android.httpclient.impl.execchain.RequestAbortedException     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            r8.<init>(r2)     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            throw r8     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
        L62:
            boolean r11 = r0.isOpen()     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            if (r11 != 0) goto L7a
            int r11 = r3.getConnectTimeout()     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r2 = r7.connManager     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            if (r11 <= 0) goto L71
            goto L72
        L71:
            r11 = 0
        L72:
            r2.connect(r0, r8, r11, r10)     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r11 = r7.connManager     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            r11.routeComplete(r0, r8, r10)     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
        L7a:
            int r11 = r3.getSocketTimeout()     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            if (r11 < 0) goto L83
            r0.setSocketTimeout(r11)     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
        L83:
            cz.msebera.android.httpclient.HttpRequest r11 = r9.getOriginal()     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            boolean r2 = r11 instanceof cz.msebera.android.httpclient.client.methods.HttpUriRequest     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            if (r2 == 0) goto La9
            cz.msebera.android.httpclient.client.methods.HttpUriRequest r11 = (cz.msebera.android.httpclient.client.methods.HttpUriRequest) r11     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            java.net.URI r11 = r11.getURI()     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            boolean r2 = r11.isAbsolute()     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            if (r2 == 0) goto La9
            cz.msebera.android.httpclient.HttpHost r2 = new cz.msebera.android.httpclient.HttpHost     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            java.lang.String r3 = r11.getHost()     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            int r5 = r11.getPort()     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            java.lang.String r11 = r11.getScheme()     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            r2.<init>(r3, r5, r11)     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            goto Laa
        La9:
            r2 = r1
        Laa:
            if (r2 != 0) goto Lb0
            cz.msebera.android.httpclient.HttpHost r2 = r8.getTargetHost()     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
        Lb0:
            java.lang.String r11 = "http.target_host"
            r10.setAttribute(r11, r2)     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            java.lang.String r11 = "http.request"
            r10.setAttribute(r11, r9)     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            java.lang.String r11 = "http.connection"
            r10.setAttribute(r11, r0)     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            java.lang.String r11 = "http.route"
            r10.setAttribute(r11, r8)     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            cz.msebera.android.httpclient.protocol.HttpProcessor r8 = r7.httpProcessor     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            r8.process(r9, r10)     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            cz.msebera.android.httpclient.protocol.HttpRequestExecutor r8 = r7.requestExecutor     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            cz.msebera.android.httpclient.HttpResponse r8 = r8.execute(r9, r0, r10)     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            cz.msebera.android.httpclient.protocol.HttpProcessor r9 = r7.httpProcessor     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            r9.process(r8, r10)     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            cz.msebera.android.httpclient.ConnectionReuseStrategy r9 = r7.reuseStrategy     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            boolean r9 = r9.keepAlive(r8, r10)     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            if (r9 == 0) goto Leb
            cz.msebera.android.httpclient.conn.ConnectionKeepAliveStrategy r9 = r7.keepAliveStrategy     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            long r9 = r9.getKeepAliveDuration(r8, r10)     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            java.util.concurrent.TimeUnit r11 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            r4.setValidFor(r9, r11)     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            r4.markReusable()     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            goto Lee
        Leb:
            r4.markNonReusable()     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
        Lee:
            cz.msebera.android.httpclient.HttpEntity r9 = r8.getEntity()     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            if (r9 == 0) goto L101
            boolean r9 = r9.isStreaming()     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            if (r9 != 0) goto Lfb
            goto L101
        Lfb:
            cz.msebera.android.httpclient.impl.execchain.HttpResponseProxy r9 = new cz.msebera.android.httpclient.impl.execchain.HttpResponseProxy     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            r9.<init>(r8, r4)     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            return r9
        L101:
            r4.releaseConnection()     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            cz.msebera.android.httpclient.impl.execchain.HttpResponseProxy r9 = new cz.msebera.android.httpclient.impl.execchain.HttpResponseProxy     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            r9.<init>(r8, r1)     // Catch: java.lang.RuntimeException -> L10a java.io.IOException -> L10f cz.msebera.android.httpclient.HttpException -> L114 cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException -> L119
            return r9
        L10a:
            r8 = move-exception
            r4.abortConnection()
            throw r8
        L10f:
            r8 = move-exception
            r4.abortConnection()
            throw r8
        L114:
            r8 = move-exception
            r4.abortConnection()
            throw r8
        L119:
            r8 = move-exception
            java.io.InterruptedIOException r9 = new java.io.InterruptedIOException
            java.lang.String r10 = "Connection has been shut down"
            r9.<init>(r10)
            r9.initCause(r8)
            throw r9
        L125:
            r8 = move-exception
            java.lang.Throwable r9 = r8.getCause()
            if (r9 != 0) goto L12d
            goto L12e
        L12d:
            r8 = r9
        L12e:
            cz.msebera.android.httpclient.impl.execchain.RequestAbortedException r9 = new cz.msebera.android.httpclient.impl.execchain.RequestAbortedException
            java.lang.String r10 = "Request execution failed"
            r9.<init>(r10, r8)
            throw r9
        L136:
            r8 = move-exception
            java.lang.Thread r9 = java.lang.Thread.currentThread()
            r9.interrupt()
            cz.msebera.android.httpclient.impl.execchain.RequestAbortedException r9 = new cz.msebera.android.httpclient.impl.execchain.RequestAbortedException
            r9.<init>(r2, r8)
            throw r9
    }
}
