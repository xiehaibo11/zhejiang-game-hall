package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.Immutable
public class DefaultHttpRequestRetryHandler implements cz.msebera.android.httpclient.client.HttpRequestRetryHandler {
    public static final cz.msebera.android.httpclient.impl.client.DefaultHttpRequestRetryHandler INSTANCE = null;
    private final java.util.Set<java.lang.Class<? extends java.io.IOException>> nonRetriableClasses;
    private final boolean requestSentRetryEnabled;
    private final int retryCount;

    static {
            cz.msebera.android.httpclient.impl.client.DefaultHttpRequestRetryHandler r0 = new cz.msebera.android.httpclient.impl.client.DefaultHttpRequestRetryHandler
            r0.<init>()
            cz.msebera.android.httpclient.impl.client.DefaultHttpRequestRetryHandler.INSTANCE = r0
            return
    }

    public DefaultHttpRequestRetryHandler() {
            r2 = this;
            r0 = 3
            r1 = 0
            r2.<init>(r0, r1)
            return
    }

    public DefaultHttpRequestRetryHandler(int r4, boolean r5) {
            r3 = this;
            r0 = 4
            java.lang.Class[] r0 = new java.lang.Class[r0]
            java.lang.Class<java.io.InterruptedIOException> r1 = java.io.InterruptedIOException.class
            r2 = 0
            r0[r2] = r1
            java.lang.Class<java.net.UnknownHostException> r1 = java.net.UnknownHostException.class
            r2 = 1
            r0[r2] = r1
            java.lang.Class<java.net.ConnectException> r1 = java.net.ConnectException.class
            r2 = 2
            r0[r2] = r1
            java.lang.Class<javax.net.ssl.SSLException> r1 = javax.net.ssl.SSLException.class
            r2 = 3
            r0[r2] = r1
            java.util.List r0 = java.util.Arrays.asList(r0)
            r3.<init>(r4, r5, r0)
            return
    }

    protected DefaultHttpRequestRetryHandler(int r1, boolean r2, java.util.Collection<java.lang.Class<? extends java.io.IOException>> r3) {
            r0 = this;
            r0.<init>()
            r0.retryCount = r1
            r0.requestSentRetryEnabled = r2
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            r0.nonRetriableClasses = r1
            java.util.Iterator r1 = r3.iterator()
        L12:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L24
            java.lang.Object r2 = r1.next()
            java.lang.Class r2 = (java.lang.Class) r2
            java.util.Set<java.lang.Class<? extends java.io.IOException>> r3 = r0.nonRetriableClasses
            r3.add(r2)
            goto L12
        L24:
            return
    }

    public int getRetryCount() {
            r1 = this;
            int r0 = r1.retryCount
            return r0
    }

    protected boolean handleAsIdempotent(cz.msebera.android.httpclient.HttpRequest r1) {
            r0 = this;
            boolean r1 = r1 instanceof cz.msebera.android.httpclient.HttpEntityEnclosingRequest
            if (r1 != 0) goto L6
            r1 = 1
            goto L7
        L6:
            r1 = 0
        L7:
            return r1
    }

    public boolean isRequestSentRetryEnabled() {
            r1 = this;
            boolean r0 = r1.requestSentRetryEnabled
            return r0
    }

    @java.lang.Deprecated
    protected boolean requestIsAborted(cz.msebera.android.httpclient.HttpRequest r2) {
            r1 = this;
            boolean r0 = r2 instanceof cz.msebera.android.httpclient.impl.client.RequestWrapper
            if (r0 == 0) goto La
            cz.msebera.android.httpclient.impl.client.RequestWrapper r2 = (cz.msebera.android.httpclient.impl.client.RequestWrapper) r2
            cz.msebera.android.httpclient.HttpRequest r2 = r2.getOriginal()
        La:
            boolean r0 = r2 instanceof cz.msebera.android.httpclient.client.methods.HttpUriRequest
            if (r0 == 0) goto L18
            cz.msebera.android.httpclient.client.methods.HttpUriRequest r2 = (cz.msebera.android.httpclient.client.methods.HttpUriRequest) r2
            boolean r2 = r2.isAborted()
            if (r2 == 0) goto L18
            r2 = 1
            goto L19
        L18:
            r2 = 0
        L19:
            return r2
    }

    @Override
    public boolean retryRequest(java.io.IOException r3, int r4, cz.msebera.android.httpclient.protocol.HttpContext r5) {
            r2 = this;
            java.lang.String r0 = "Exception parameter"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            int r0 = r2.retryCount
            r1 = 0
            if (r4 <= r0) goto L10
            return r1
        L10:
            java.util.Set<java.lang.Class<? extends java.io.IOException>> r4 = r2.nonRetriableClasses
            java.lang.Class r0 = r3.getClass()
            boolean r4 = r4.contains(r0)
            if (r4 == 0) goto L1d
            return r1
        L1d:
            java.util.Set<java.lang.Class<? extends java.io.IOException>> r4 = r2.nonRetriableClasses
            java.util.Iterator r4 = r4.iterator()
        L23:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L36
            java.lang.Object r0 = r4.next()
            java.lang.Class r0 = (java.lang.Class) r0
            boolean r0 = r0.isInstance(r3)
            if (r0 == 0) goto L23
            return r1
        L36:
            cz.msebera.android.httpclient.client.protocol.HttpClientContext r3 = cz.msebera.android.httpclient.client.protocol.HttpClientContext.adapt(r5)
            cz.msebera.android.httpclient.HttpRequest r4 = r3.getRequest()
            boolean r5 = r2.requestIsAborted(r4)
            if (r5 == 0) goto L45
            return r1
        L45:
            boolean r4 = r2.handleAsIdempotent(r4)
            r5 = 1
            if (r4 == 0) goto L4d
            return r5
        L4d:
            boolean r3 = r3.isRequestSent()
            if (r3 == 0) goto L59
            boolean r3 = r2.requestSentRetryEnabled
            if (r3 == 0) goto L58
            goto L59
        L58:
            return r1
        L59:
            return r5
    }
}
