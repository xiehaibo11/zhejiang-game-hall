package cz.msebera.android.httpclient.impl.execchain;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class RedirectExec implements cz.msebera.android.httpclient.impl.execchain.ClientExecChain {
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final cz.msebera.android.httpclient.client.RedirectStrategy redirectStrategy;
    private final cz.msebera.android.httpclient.impl.execchain.ClientExecChain requestExecutor;
    private final cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner routePlanner;

    public RedirectExec(cz.msebera.android.httpclient.impl.execchain.ClientExecChain r3, cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner r4, cz.msebera.android.httpclient.client.RedirectStrategy r5) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            java.lang.String r0 = "HTTP client request executor"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "HTTP route planner"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.lang.String r0 = "HTTP redirect strategy"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            r2.requestExecutor = r3
            r2.routePlanner = r4
            r2.redirectStrategy = r5
            return
    }

    @Override
    public cz.msebera.android.httpclient.client.methods.CloseableHttpResponse execute(cz.msebera.android.httpclient.conn.routing.HttpRoute r10, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r11, cz.msebera.android.httpclient.client.protocol.HttpClientContext r12, cz.msebera.android.httpclient.client.methods.HttpExecutionAware r13) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r9 = this;
            java.lang.String r0 = "HTTP route"
            cz.msebera.android.httpclient.util.Args.notNull(r10, r0)
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r11, r0)
            java.lang.String r0 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r12, r0)
            java.util.List r0 = r12.getRedirectLocations()
            if (r0 == 0) goto L18
            r0.clear()
        L18:
            cz.msebera.android.httpclient.client.config.RequestConfig r0 = r12.getRequestConfig()
            int r1 = r0.getMaxRedirects()
            if (r1 <= 0) goto L27
            int r1 = r0.getMaxRedirects()
            goto L29
        L27:
            r1 = 50
        L29:
            r2 = 0
            r2 = r11
            r3 = 0
        L2c:
            cz.msebera.android.httpclient.impl.execchain.ClientExecChain r4 = r9.requestExecutor
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r4 = r4.execute(r10, r2, r12, r13)
            boolean r5 = r0.isRedirectsEnabled()     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            if (r5 == 0) goto L118
            cz.msebera.android.httpclient.client.RedirectStrategy r5 = r9.redirectStrategy     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            boolean r5 = r5.isRedirected(r2, r4, r12)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            if (r5 == 0) goto L118
            if (r3 >= r1) goto Lfc
            int r3 = r3 + 1
            cz.msebera.android.httpclient.client.RedirectStrategy r5 = r9.redirectStrategy     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            cz.msebera.android.httpclient.client.methods.HttpUriRequest r2 = r5.getRedirect(r2, r4, r12)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            cz.msebera.android.httpclient.HeaderIterator r5 = r2.headerIterator()     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            boolean r5 = r5.hasNext()     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            if (r5 != 0) goto L5f
            cz.msebera.android.httpclient.HttpRequest r5 = r11.getOriginal()     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            cz.msebera.android.httpclient.Header[] r5 = r5.getAllHeaders()     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            r2.setHeaders(r5)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
        L5f:
            cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r2 = cz.msebera.android.httpclient.client.methods.HttpRequestWrapper.wrap(r2)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            boolean r5 = r2 instanceof cz.msebera.android.httpclient.HttpEntityEnclosingRequest     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            if (r5 == 0) goto L6d
            r5 = r2
            cz.msebera.android.httpclient.HttpEntityEnclosingRequest r5 = (cz.msebera.android.httpclient.HttpEntityEnclosingRequest) r5     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            cz.msebera.android.httpclient.impl.execchain.RequestEntityProxy.enhance(r5)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
        L6d:
            java.net.URI r5 = r2.getURI()     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            cz.msebera.android.httpclient.HttpHost r6 = cz.msebera.android.httpclient.client.utils.URIUtils.extractHost(r5)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            if (r6 == 0) goto Le5
            cz.msebera.android.httpclient.HttpHost r10 = r10.getTargetHost()     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            boolean r10 = r10.equals(r6)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            if (r10 != 0) goto Lad
            cz.msebera.android.httpclient.auth.AuthState r10 = r12.getTargetAuthState()     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            if (r10 == 0) goto L91
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r9.log     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            java.lang.String r8 = "Resetting target auth state"
            r7.debug(r8)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            r10.reset()     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
        L91:
            cz.msebera.android.httpclient.auth.AuthState r10 = r12.getProxyAuthState()     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            if (r10 == 0) goto Lad
            cz.msebera.android.httpclient.auth.AuthScheme r7 = r10.getAuthScheme()     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            if (r7 == 0) goto Lad
            boolean r7 = r7.isConnectionBased()     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            if (r7 == 0) goto Lad
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r9.log     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            java.lang.String r8 = "Resetting proxy auth state"
            r7.debug(r8)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            r10.reset()     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
        Lad:
            cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner r10 = r9.routePlanner     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            cz.msebera.android.httpclient.conn.routing.HttpRoute r10 = r10.determineRoute(r6, r2, r12)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r9.log     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            boolean r6 = r6.isDebugEnabled()     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            if (r6 == 0) goto Ld9
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r9.log     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            r7.<init>()     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            java.lang.String r8 = "Redirecting to '"
            r7.append(r8)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            r7.append(r5)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            java.lang.String r5 = "' via "
            r7.append(r5)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            r7.append(r10)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            java.lang.String r5 = r7.toString()     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            r6.debug(r5)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
        Ld9:
            cz.msebera.android.httpclient.HttpEntity r5 = r4.getEntity()     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            cz.msebera.android.httpclient.util.EntityUtils.consume(r5)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            r4.close()     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            goto L2c
        Le5:
            cz.msebera.android.httpclient.ProtocolException r10 = new cz.msebera.android.httpclient.ProtocolException     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            r11.<init>()     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            java.lang.String r12 = "Redirect URI does not specify a valid host name: "
            r11.append(r12)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            r11.append(r5)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            java.lang.String r11 = r11.toString()     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            r10.<init>(r11)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            throw r10     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
        Lfc:
            cz.msebera.android.httpclient.client.RedirectException r10 = new cz.msebera.android.httpclient.client.RedirectException     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            r11.<init>()     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            java.lang.String r12 = "Maximum redirects ("
            r11.append(r12)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            r11.append(r1)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            java.lang.String r12 = ") exceeded"
            r11.append(r12)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            java.lang.String r11 = r11.toString()     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            r10.<init>(r11)     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
            throw r10     // Catch: cz.msebera.android.httpclient.HttpException -> L119 java.io.IOException -> L135 java.lang.RuntimeException -> L13a
        L118:
            return r4
        L119:
            r10 = move-exception
            cz.msebera.android.httpclient.HttpEntity r11 = r4.getEntity()     // Catch: java.lang.Throwable -> L125 java.io.IOException -> L127
            cz.msebera.android.httpclient.util.EntityUtils.consume(r11)     // Catch: java.lang.Throwable -> L125 java.io.IOException -> L127
        L121:
            r4.close()
            goto L130
        L125:
            r10 = move-exception
            goto L131
        L127:
            r11 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r12 = r9.log     // Catch: java.lang.Throwable -> L125
            java.lang.String r13 = "I/O error while releasing connection"
            r12.debug(r13, r11)     // Catch: java.lang.Throwable -> L125
            goto L121
        L130:
            throw r10
        L131:
            r4.close()
            throw r10
        L135:
            r10 = move-exception
            r4.close()
            throw r10
        L13a:
            r10 = move-exception
            r4.close()
            throw r10
    }
}
