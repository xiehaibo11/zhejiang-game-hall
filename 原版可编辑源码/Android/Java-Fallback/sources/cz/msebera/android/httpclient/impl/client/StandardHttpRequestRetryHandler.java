package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.Immutable
public class StandardHttpRequestRetryHandler extends cz.msebera.android.httpclient.impl.client.DefaultHttpRequestRetryHandler {
    private final java.util.Map<java.lang.String, java.lang.Boolean> idempotentMethods;

    public StandardHttpRequestRetryHandler() {
            r2 = this;
            r0 = 3
            r1 = 0
            r2.<init>(r0, r1)
            return
    }

    public StandardHttpRequestRetryHandler(int r2, boolean r3) {
            r1 = this;
            r1.<init>(r2, r3)
            java.util.concurrent.ConcurrentHashMap r2 = new java.util.concurrent.ConcurrentHashMap
            r2.<init>()
            r1.idempotentMethods = r2
            java.util.Map<java.lang.String, java.lang.Boolean> r2 = r1.idempotentMethods
            java.lang.Boolean r3 = java.lang.Boolean.TRUE
            java.lang.String r0 = "GET"
            r2.put(r0, r3)
            java.util.Map<java.lang.String, java.lang.Boolean> r2 = r1.idempotentMethods
            java.lang.Boolean r3 = java.lang.Boolean.TRUE
            java.lang.String r0 = "HEAD"
            r2.put(r0, r3)
            java.util.Map<java.lang.String, java.lang.Boolean> r2 = r1.idempotentMethods
            java.lang.Boolean r3 = java.lang.Boolean.TRUE
            java.lang.String r0 = "PUT"
            r2.put(r0, r3)
            java.util.Map<java.lang.String, java.lang.Boolean> r2 = r1.idempotentMethods
            java.lang.Boolean r3 = java.lang.Boolean.TRUE
            java.lang.String r0 = "DELETE"
            r2.put(r0, r3)
            java.util.Map<java.lang.String, java.lang.Boolean> r2 = r1.idempotentMethods
            java.lang.Boolean r3 = java.lang.Boolean.TRUE
            java.lang.String r0 = "OPTIONS"
            r2.put(r0, r3)
            java.util.Map<java.lang.String, java.lang.Boolean> r2 = r1.idempotentMethods
            java.lang.Boolean r3 = java.lang.Boolean.TRUE
            java.lang.String r0 = "TRACE"
            r2.put(r0, r3)
            return
    }

    @Override
    protected boolean handleAsIdempotent(cz.msebera.android.httpclient.HttpRequest r2) {
            r1 = this;
            cz.msebera.android.httpclient.RequestLine r2 = r2.getRequestLine()
            java.lang.String r2 = r2.getMethod()
            java.util.Locale r0 = java.util.Locale.ROOT
            java.lang.String r2 = r2.toUpperCase(r0)
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r1.idempotentMethods
            java.lang.Object r2 = r0.get(r2)
            java.lang.Boolean r2 = (java.lang.Boolean) r2
            if (r2 == 0) goto L20
            boolean r2 = r2.booleanValue()
            if (r2 == 0) goto L20
            r2 = 1
            goto L21
        L20:
            r2 = 0
        L21:
            return r2
    }
}
