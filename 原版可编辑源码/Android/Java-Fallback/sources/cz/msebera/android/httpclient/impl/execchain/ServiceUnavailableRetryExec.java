package cz.msebera.android.httpclient.impl.execchain;

@cz.msebera.android.httpclient.annotation.Immutable
public class ServiceUnavailableRetryExec implements cz.msebera.android.httpclient.impl.execchain.ClientExecChain {
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final cz.msebera.android.httpclient.impl.execchain.ClientExecChain requestExecutor;
    private final cz.msebera.android.httpclient.client.ServiceUnavailableRetryStrategy retryStrategy;

    public ServiceUnavailableRetryExec(cz.msebera.android.httpclient.impl.execchain.ClientExecChain r3, cz.msebera.android.httpclient.client.ServiceUnavailableRetryStrategy r4) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            java.lang.String r0 = "HTTP request executor"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "Retry strategy"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            r2.requestExecutor = r3
            r2.retryStrategy = r4
            return
    }

    @Override
    public cz.msebera.android.httpclient.client.methods.CloseableHttpResponse execute(cz.msebera.android.httpclient.conn.routing.HttpRoute r9, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r10, cz.msebera.android.httpclient.client.protocol.HttpClientContext r11, cz.msebera.android.httpclient.client.methods.HttpExecutionAware r12) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r8 = this;
            cz.msebera.android.httpclient.Header[] r0 = r10.getAllHeaders()
            r1 = 1
        L5:
            cz.msebera.android.httpclient.impl.execchain.ClientExecChain r2 = r8.requestExecutor
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r2 = r2.execute(r9, r10, r11, r12)
            cz.msebera.android.httpclient.client.ServiceUnavailableRetryStrategy r3 = r8.retryStrategy     // Catch: java.lang.RuntimeException -> L50
            boolean r3 = r3.retryRequest(r2, r1, r11)     // Catch: java.lang.RuntimeException -> L50
            if (r3 == 0) goto L4f
            r2.close()     // Catch: java.lang.RuntimeException -> L50
            cz.msebera.android.httpclient.client.ServiceUnavailableRetryStrategy r3 = r8.retryStrategy     // Catch: java.lang.RuntimeException -> L50
            long r3 = r3.getRetryInterval()     // Catch: java.lang.RuntimeException -> L50
            r5 = 0
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 <= 0) goto L49
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r8.log     // Catch: java.lang.InterruptedException -> L3c java.lang.RuntimeException -> L50
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.InterruptedException -> L3c java.lang.RuntimeException -> L50
            r6.<init>()     // Catch: java.lang.InterruptedException -> L3c java.lang.RuntimeException -> L50
            java.lang.String r7 = "Wait for "
            r6.append(r7)     // Catch: java.lang.InterruptedException -> L3c java.lang.RuntimeException -> L50
            r6.append(r3)     // Catch: java.lang.InterruptedException -> L3c java.lang.RuntimeException -> L50
            java.lang.String r6 = r6.toString()     // Catch: java.lang.InterruptedException -> L3c java.lang.RuntimeException -> L50
            r5.trace(r6)     // Catch: java.lang.InterruptedException -> L3c java.lang.RuntimeException -> L50
            java.lang.Thread.sleep(r3)     // Catch: java.lang.InterruptedException -> L3c java.lang.RuntimeException -> L50
            goto L49
        L3c:
            java.lang.Thread r9 = java.lang.Thread.currentThread()     // Catch: java.lang.RuntimeException -> L50
            r9.interrupt()     // Catch: java.lang.RuntimeException -> L50
            java.io.InterruptedIOException r9 = new java.io.InterruptedIOException     // Catch: java.lang.RuntimeException -> L50
            r9.<init>()     // Catch: java.lang.RuntimeException -> L50
            throw r9     // Catch: java.lang.RuntimeException -> L50
        L49:
            r10.setHeaders(r0)     // Catch: java.lang.RuntimeException -> L50
            int r1 = r1 + 1
            goto L5
        L4f:
            return r2
        L50:
            r9 = move-exception
            r2.close()
            throw r9
    }
}
