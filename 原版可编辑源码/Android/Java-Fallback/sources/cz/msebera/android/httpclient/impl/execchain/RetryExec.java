package cz.msebera.android.httpclient.impl.execchain;

@cz.msebera.android.httpclient.annotation.Immutable
public class RetryExec implements cz.msebera.android.httpclient.impl.execchain.ClientExecChain {
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final cz.msebera.android.httpclient.impl.execchain.ClientExecChain requestExecutor;
    private final cz.msebera.android.httpclient.client.HttpRequestRetryHandler retryHandler;

    public RetryExec(cz.msebera.android.httpclient.impl.execchain.ClientExecChain r3, cz.msebera.android.httpclient.client.HttpRequestRetryHandler r4) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            java.lang.String r0 = "HTTP request executor"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "HTTP request retry handler"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            r2.requestExecutor = r3
            r2.retryHandler = r4
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
            cz.msebera.android.httpclient.Header[] r0 = r8.getAllHeaders()
            r1 = 1
        L14:
            cz.msebera.android.httpclient.impl.execchain.ClientExecChain r2 = r6.requestExecutor     // Catch: java.io.IOException -> L1b
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r7 = r2.execute(r7, r8, r9, r10)     // Catch: java.io.IOException -> L1b
            return r7
        L1b:
            r2 = move-exception
            if (r10 == 0) goto L2d
            boolean r3 = r10.isAborted()
            if (r3 != 0) goto L25
            goto L2d
        L25:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r6.log
            java.lang.String r8 = "Request has been aborted"
            r7.debug(r8)
            throw r2
        L2d:
            cz.msebera.android.httpclient.client.HttpRequestRetryHandler r3 = r6.retryHandler
            boolean r3 = r3.retryRequest(r2, r1, r9)
            if (r3 == 0) goto Lba
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            boolean r3 = r3.isInfoEnabled()
            if (r3 == 0) goto L6f
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
        L6f:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            boolean r3 = r3.isDebugEnabled()
            if (r3 == 0) goto L80
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            java.lang.String r4 = r2.getMessage()
            r3.debug(r4, r2)
        L80:
            boolean r3 = cz.msebera.android.httpclient.impl.execchain.RequestEntityProxy.isRepeatable(r8)
            if (r3 == 0) goto Lab
            r8.setHeaders(r0)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r6.log
            boolean r2 = r2.isInfoEnabled()
            if (r2 == 0) goto La7
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r6.log
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Retrying request to "
            r3.append(r4)
            r3.append(r7)
            java.lang.String r3 = r3.toString()
            r2.info(r3)
        La7:
            int r1 = r1 + 1
            goto L14
        Lab:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r6.log
            java.lang.String r8 = "Cannot retry non-repeatable request"
            r7.debug(r8)
            cz.msebera.android.httpclient.client.NonRepeatableRequestException r7 = new cz.msebera.android.httpclient.client.NonRepeatableRequestException
            java.lang.String r8 = "Cannot retry request with a non-repeatable request entity"
            r7.<init>(r8, r2)
            throw r7
        Lba:
            boolean r8 = r2 instanceof cz.msebera.android.httpclient.NoHttpResponseException
            if (r8 == 0) goto Le4
            cz.msebera.android.httpclient.NoHttpResponseException r8 = new cz.msebera.android.httpclient.NoHttpResponseException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            cz.msebera.android.httpclient.HttpHost r7 = r7.getTargetHost()
            java.lang.String r7 = r7.toHostString()
            r9.append(r7)
            java.lang.String r7 = " failed to respond"
            r9.append(r7)
            java.lang.String r7 = r9.toString()
            r8.<init>(r7)
            java.lang.StackTraceElement[] r7 = r2.getStackTrace()
            r8.setStackTrace(r7)
            throw r8
        Le4:
            throw r2
    }
}
