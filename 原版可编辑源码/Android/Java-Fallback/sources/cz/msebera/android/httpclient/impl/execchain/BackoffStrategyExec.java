package cz.msebera.android.httpclient.impl.execchain;

@cz.msebera.android.httpclient.annotation.Immutable
public class BackoffStrategyExec implements cz.msebera.android.httpclient.impl.execchain.ClientExecChain {
    private final cz.msebera.android.httpclient.client.BackoffManager backoffManager;
    private final cz.msebera.android.httpclient.client.ConnectionBackoffStrategy connectionBackoffStrategy;
    private final cz.msebera.android.httpclient.impl.execchain.ClientExecChain requestExecutor;

    public BackoffStrategyExec(cz.msebera.android.httpclient.impl.execchain.ClientExecChain r2, cz.msebera.android.httpclient.client.ConnectionBackoffStrategy r3, cz.msebera.android.httpclient.client.BackoffManager r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "HTTP client request executor"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Connection backoff strategy"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "Backoff manager"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            r1.requestExecutor = r2
            r1.connectionBackoffStrategy = r3
            r1.backoffManager = r4
            return
    }

    @Override
    public cz.msebera.android.httpclient.client.methods.CloseableHttpResponse execute(cz.msebera.android.httpclient.conn.routing.HttpRoute r2, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r3, cz.msebera.android.httpclient.client.protocol.HttpClientContext r4, cz.msebera.android.httpclient.client.methods.HttpExecutionAware r5) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r1 = this;
            java.lang.String r0 = "HTTP route"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            cz.msebera.android.httpclient.impl.execchain.ClientExecChain r0 = r1.requestExecutor     // Catch: java.lang.Exception -> L29
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r3 = r0.execute(r2, r3, r4, r5)     // Catch: java.lang.Exception -> L29
            cz.msebera.android.httpclient.client.ConnectionBackoffStrategy r4 = r1.connectionBackoffStrategy
            boolean r4 = r4.shouldBackoff(r3)
            if (r4 == 0) goto L23
            cz.msebera.android.httpclient.client.BackoffManager r4 = r1.backoffManager
            r4.backOff(r2)
            goto L28
        L23:
            cz.msebera.android.httpclient.client.BackoffManager r4 = r1.backoffManager
            r4.probe(r2)
        L28:
            return r3
        L29:
            r3 = move-exception
            cz.msebera.android.httpclient.client.ConnectionBackoffStrategy r4 = r1.connectionBackoffStrategy
            boolean r4 = r4.shouldBackoff(r3)
            if (r4 == 0) goto L37
            cz.msebera.android.httpclient.client.BackoffManager r4 = r1.backoffManager
            r4.backOff(r2)
        L37:
            boolean r2 = r3 instanceof java.lang.RuntimeException
            if (r2 != 0) goto L4f
            boolean r2 = r3 instanceof cz.msebera.android.httpclient.HttpException
            if (r2 != 0) goto L4c
            boolean r2 = r3 instanceof java.io.IOException
            if (r2 == 0) goto L46
            java.io.IOException r3 = (java.io.IOException) r3
            throw r3
        L46:
            java.lang.reflect.UndeclaredThrowableException r2 = new java.lang.reflect.UndeclaredThrowableException
            r2.<init>(r3)
            throw r2
        L4c:
            cz.msebera.android.httpclient.HttpException r3 = (cz.msebera.android.httpclient.HttpException) r3
            throw r3
        L4f:
            java.lang.RuntimeException r3 = (java.lang.RuntimeException) r3
            throw r3
    }
}
