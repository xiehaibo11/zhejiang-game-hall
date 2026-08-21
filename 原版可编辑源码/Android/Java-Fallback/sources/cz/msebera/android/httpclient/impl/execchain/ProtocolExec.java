package cz.msebera.android.httpclient.impl.execchain;

@cz.msebera.android.httpclient.annotation.Immutable
public class ProtocolExec implements cz.msebera.android.httpclient.impl.execchain.ClientExecChain {
    private final cz.msebera.android.httpclient.protocol.HttpProcessor httpProcessor;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final cz.msebera.android.httpclient.impl.execchain.ClientExecChain requestExecutor;

    public ProtocolExec(cz.msebera.android.httpclient.impl.execchain.ClientExecChain r3, cz.msebera.android.httpclient.protocol.HttpProcessor r4) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            java.lang.String r0 = "HTTP client request executor"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "HTTP protocol processor"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            r2.requestExecutor = r3
            r2.httpProcessor = r4
            return
    }

    @Override
    public cz.msebera.android.httpclient.client.methods.CloseableHttpResponse execute(cz.msebera.android.httpclient.conn.routing.HttpRoute r7, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r8, cz.msebera.android.httpclient.client.protocol.HttpClientContext r9, cz.msebera.android.httpclient.client.methods.HttpExecutionAware r10) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r6 = this;
            java.lang.String r0 = "HTTP route"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r0)
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)
            java.lang.String r0 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r9, r0)
            cz.msebera.android.httpclient.HttpRequest r0 = r8.getOriginal()
            boolean r1 = r0 instanceof cz.msebera.android.httpclient.client.methods.HttpUriRequest
            r2 = 0
            if (r1 == 0) goto L1f
            cz.msebera.android.httpclient.client.methods.HttpUriRequest r0 = (cz.msebera.android.httpclient.client.methods.HttpUriRequest) r0
            java.net.URI r0 = r0.getURI()
            goto L56
        L1f:
            cz.msebera.android.httpclient.RequestLine r0 = r0.getRequestLine()
            java.lang.String r0 = r0.getUri()
            java.net.URI r0 = java.net.URI.create(r0)     // Catch: java.lang.IllegalArgumentException -> L2c
            goto L56
        L2c:
            r1 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            boolean r3 = r3.isDebugEnabled()
            if (r3 == 0) goto L55
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Unable to parse '"
            r4.append(r5)
            r4.append(r0)
            java.lang.String r0 = "' as a valid URI; "
            r4.append(r0)
            java.lang.String r0 = "request URI and Host header may be inconsistent"
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            r3.debug(r0, r1)
        L55:
            r0 = r2
        L56:
            r8.setURI(r0)
            r6.rewriteRequestURI(r8, r7)
            cz.msebera.android.httpclient.params.HttpParams r1 = r8.getParams()
            java.lang.String r3 = "http.virtual-host"
            java.lang.Object r1 = r1.getParameter(r3)
            cz.msebera.android.httpclient.HttpHost r1 = (cz.msebera.android.httpclient.HttpHost) r1
            if (r1 == 0) goto La7
            int r3 = r1.getPort()
            r4 = -1
            if (r3 != r4) goto La7
            cz.msebera.android.httpclient.HttpHost r3 = r7.getTargetHost()
            int r3 = r3.getPort()
            if (r3 == r4) goto L89
            cz.msebera.android.httpclient.HttpHost r4 = new cz.msebera.android.httpclient.HttpHost
            java.lang.String r5 = r1.getHostName()
            java.lang.String r1 = r1.getSchemeName()
            r4.<init>(r5, r3, r1)
            r1 = r4
        L89:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            boolean r3 = r3.isDebugEnabled()
            if (r3 == 0) goto La7
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Using virtual host"
            r4.append(r5)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            r3.debug(r4)
        La7:
            if (r1 == 0) goto Lab
            r2 = r1
            goto Lca
        Lab:
            if (r0 == 0) goto Lca
            boolean r1 = r0.isAbsolute()
            if (r1 == 0) goto Lca
            java.lang.String r1 = r0.getHost()
            if (r1 == 0) goto Lca
            cz.msebera.android.httpclient.HttpHost r2 = new cz.msebera.android.httpclient.HttpHost
            java.lang.String r1 = r0.getHost()
            int r3 = r0.getPort()
            java.lang.String r4 = r0.getScheme()
            r2.<init>(r1, r3, r4)
        Lca:
            if (r2 != 0) goto Ld0
            cz.msebera.android.httpclient.HttpHost r2 = r8.getTarget()
        Ld0:
            if (r2 != 0) goto Ld6
            cz.msebera.android.httpclient.HttpHost r2 = r7.getTargetHost()
        Ld6:
            if (r0 == 0) goto Lf9
            java.lang.String r0 = r0.getUserInfo()
            if (r0 == 0) goto Lf9
            cz.msebera.android.httpclient.client.CredentialsProvider r1 = r9.getCredentialsProvider()
            if (r1 != 0) goto Lec
            cz.msebera.android.httpclient.impl.client.BasicCredentialsProvider r1 = new cz.msebera.android.httpclient.impl.client.BasicCredentialsProvider
            r1.<init>()
            r9.setCredentialsProvider(r1)
        Lec:
            cz.msebera.android.httpclient.auth.AuthScope r3 = new cz.msebera.android.httpclient.auth.AuthScope
            r3.<init>(r2)
            cz.msebera.android.httpclient.auth.UsernamePasswordCredentials r4 = new cz.msebera.android.httpclient.auth.UsernamePasswordCredentials
            r4.<init>(r0)
            r1.setCredentials(r3, r4)
        Lf9:
            java.lang.String r0 = "http.target_host"
            r9.setAttribute(r0, r2)
            java.lang.String r0 = "http.route"
            r9.setAttribute(r0, r7)
            java.lang.String r0 = "http.request"
            r9.setAttribute(r0, r8)
            cz.msebera.android.httpclient.protocol.HttpProcessor r0 = r6.httpProcessor
            r0.process(r8, r9)
            cz.msebera.android.httpclient.impl.execchain.ClientExecChain r0 = r6.requestExecutor
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r7 = r0.execute(r7, r8, r9, r10)
            java.lang.String r8 = "http.response"
            r9.setAttribute(r8, r7)     // Catch: cz.msebera.android.httpclient.HttpException -> L11e java.io.IOException -> L123 java.lang.RuntimeException -> L128
            cz.msebera.android.httpclient.protocol.HttpProcessor r8 = r6.httpProcessor     // Catch: cz.msebera.android.httpclient.HttpException -> L11e java.io.IOException -> L123 java.lang.RuntimeException -> L128
            r8.process(r7, r9)     // Catch: cz.msebera.android.httpclient.HttpException -> L11e java.io.IOException -> L123 java.lang.RuntimeException -> L128
            return r7
        L11e:
            r8 = move-exception
            r7.close()
            throw r8
        L123:
            r8 = move-exception
            r7.close()
            throw r8
        L128:
            r8 = move-exception
            r7.close()
            throw r8
    }

    void rewriteRequestURI(cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r4, cz.msebera.android.httpclient.conn.routing.HttpRoute r5) throws cz.msebera.android.httpclient.ProtocolException {
            r3 = this;
            java.net.URI r0 = r4.getURI()
            if (r0 == 0) goto L26
            java.net.URI r5 = cz.msebera.android.httpclient.client.utils.URIUtils.rewriteURIForRoute(r0, r5)     // Catch: java.net.URISyntaxException -> Le
            r4.setURI(r5)     // Catch: java.net.URISyntaxException -> Le
            goto L26
        Le:
            r4 = move-exception
            cz.msebera.android.httpclient.ProtocolException r5 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid URI: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r5.<init>(r0, r4)
            throw r5
        L26:
            return
    }
}
