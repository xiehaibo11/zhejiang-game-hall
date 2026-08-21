package cz.msebera.android.httpclient.impl.client.cache;

public class AsynchronousValidationRequest implements java.lang.Runnable {
    private final cz.msebera.android.httpclient.client.cache.HttpCacheEntry cacheEntry;
    private final cz.msebera.android.httpclient.impl.client.cache.CachingExec cachingExec;
    private final int consecutiveFailedAttempts;
    private final cz.msebera.android.httpclient.client.protocol.HttpClientContext context;
    private final cz.msebera.android.httpclient.client.methods.HttpExecutionAware execAware;
    private final java.lang.String identifier;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final cz.msebera.android.httpclient.impl.client.cache.AsynchronousValidator parent;
    private final cz.msebera.android.httpclient.client.methods.HttpRequestWrapper request;
    private final cz.msebera.android.httpclient.conn.routing.HttpRoute route;

    AsynchronousValidationRequest(cz.msebera.android.httpclient.impl.client.cache.AsynchronousValidator r3, cz.msebera.android.httpclient.impl.client.cache.CachingExec r4, cz.msebera.android.httpclient.conn.routing.HttpRoute r5, cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r6, cz.msebera.android.httpclient.client.protocol.HttpClientContext r7, cz.msebera.android.httpclient.client.methods.HttpExecutionAware r8, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r9, java.lang.String r10, int r11) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            r2.parent = r3
            r2.cachingExec = r4
            r2.route = r5
            r2.request = r6
            r2.context = r7
            r2.execAware = r8
            r2.cacheEntry = r9
            r2.identifier = r10
            r2.consecutiveFailedAttempts = r11
            return
    }

    private boolean isNotServerError(int r2) {
            r1 = this;
            r0 = 500(0x1f4, float:7.0E-43)
            if (r2 >= r0) goto L6
            r2 = 1
            goto L7
        L6:
            r2 = 0
        L7:
            return r2
    }

    private boolean isNotStale(cz.msebera.android.httpclient.HttpResponse r6) {
            r5 = this;
            java.lang.String r0 = "Warning"
            cz.msebera.android.httpclient.Header[] r6 = r6.getHeaders(r0)
            if (r6 == 0) goto L28
            int r0 = r6.length
            r1 = 0
            r2 = 0
        Lb:
            if (r2 >= r0) goto L28
            r3 = r6[r2]
            java.lang.String r3 = r3.getValue()
            java.lang.String r4 = "110"
            boolean r4 = r3.startsWith(r4)
            if (r4 != 0) goto L27
            java.lang.String r4 = "111"
            boolean r3 = r3.startsWith(r4)
            if (r3 == 0) goto L24
            goto L27
        L24:
            int r2 = r2 + 1
            goto Lb
        L27:
            return r1
        L28:
            r6 = 1
            return r6
    }

    private boolean revalidateCacheEntry() {
            r7 = this;
            r0 = 0
            cz.msebera.android.httpclient.impl.client.cache.CachingExec r1 = r7.cachingExec     // Catch: java.lang.RuntimeException -> L31 cz.msebera.android.httpclient.HttpException -> L49 java.io.IOException -> L52
            cz.msebera.android.httpclient.conn.routing.HttpRoute r2 = r7.route     // Catch: java.lang.RuntimeException -> L31 cz.msebera.android.httpclient.HttpException -> L49 java.io.IOException -> L52
            cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r3 = r7.request     // Catch: java.lang.RuntimeException -> L31 cz.msebera.android.httpclient.HttpException -> L49 java.io.IOException -> L52
            cz.msebera.android.httpclient.client.protocol.HttpClientContext r4 = r7.context     // Catch: java.lang.RuntimeException -> L31 cz.msebera.android.httpclient.HttpException -> L49 java.io.IOException -> L52
            cz.msebera.android.httpclient.client.methods.HttpExecutionAware r5 = r7.execAware     // Catch: java.lang.RuntimeException -> L31 cz.msebera.android.httpclient.HttpException -> L49 java.io.IOException -> L52
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r6 = r7.cacheEntry     // Catch: java.lang.RuntimeException -> L31 cz.msebera.android.httpclient.HttpException -> L49 java.io.IOException -> L52
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r1 = r1.revalidateCacheEntry(r2, r3, r4, r5, r6)     // Catch: java.lang.RuntimeException -> L31 cz.msebera.android.httpclient.HttpException -> L49 java.io.IOException -> L52
            cz.msebera.android.httpclient.StatusLine r2 = r1.getStatusLine()     // Catch: java.lang.Throwable -> L2c
            int r2 = r2.getStatusCode()     // Catch: java.lang.Throwable -> L2c
            boolean r2 = r7.isNotServerError(r2)     // Catch: java.lang.Throwable -> L2c
            if (r2 == 0) goto L27
            boolean r2 = r7.isNotStale(r1)     // Catch: java.lang.Throwable -> L2c
            if (r2 == 0) goto L27
            r2 = 1
            goto L28
        L27:
            r2 = 0
        L28:
            r1.close()     // Catch: java.lang.RuntimeException -> L31 cz.msebera.android.httpclient.HttpException -> L49 java.io.IOException -> L52
            return r2
        L2c:
            r2 = move-exception
            r1.close()     // Catch: java.lang.RuntimeException -> L31 cz.msebera.android.httpclient.HttpException -> L49 java.io.IOException -> L52
            throw r2     // Catch: java.lang.RuntimeException -> L31 cz.msebera.android.httpclient.HttpException -> L49 java.io.IOException -> L52
        L31:
            r1 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r7.log
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "RuntimeException thrown during asynchronous revalidation: "
            r3.append(r4)
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r2.error(r1)
            return r0
        L49:
            r1 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r7.log
            java.lang.String r3 = "HTTP protocol exception during asynchronous revalidation"
            r2.error(r3, r1)
            return r0
        L52:
            r1 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r7.log
            java.lang.String r3 = "Asynchronous revalidation failed due to I/O error"
            r2.debug(r3, r1)
            return r0
    }

    public int getConsecutiveFailedAttempts() {
            r1 = this;
            int r0 = r1.consecutiveFailedAttempts
            return r0
    }

    public java.lang.String getIdentifier() {
            r1 = this;
            java.lang.String r0 = r1.identifier
            return r0
    }

    @Override
    public void run() {
            r3 = this;
            boolean r0 = r3.revalidateCacheEntry()     // Catch: java.lang.Throwable -> L1d
            if (r0 == 0) goto Le
            cz.msebera.android.httpclient.impl.client.cache.AsynchronousValidator r0 = r3.parent     // Catch: java.lang.Throwable -> L1d
            java.lang.String r1 = r3.identifier     // Catch: java.lang.Throwable -> L1d
            r0.jobSuccessful(r1)     // Catch: java.lang.Throwable -> L1d
            goto L15
        Le:
            cz.msebera.android.httpclient.impl.client.cache.AsynchronousValidator r0 = r3.parent     // Catch: java.lang.Throwable -> L1d
            java.lang.String r1 = r3.identifier     // Catch: java.lang.Throwable -> L1d
            r0.jobFailed(r1)     // Catch: java.lang.Throwable -> L1d
        L15:
            cz.msebera.android.httpclient.impl.client.cache.AsynchronousValidator r0 = r3.parent
            java.lang.String r1 = r3.identifier
            r0.markComplete(r1)
            return
        L1d:
            r0 = move-exception
            cz.msebera.android.httpclient.impl.client.cache.AsynchronousValidator r1 = r3.parent
            java.lang.String r2 = r3.identifier
            r1.markComplete(r2)
            throw r0
    }
}
