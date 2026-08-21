package cz.msebera.android.httpclient.impl;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class HttpConnectionMetricsImpl implements cz.msebera.android.httpclient.HttpConnectionMetrics {
    public static final java.lang.String RECEIVED_BYTES_COUNT = "http.received-bytes-count";
    public static final java.lang.String REQUEST_COUNT = "http.request-count";
    public static final java.lang.String RESPONSE_COUNT = "http.response-count";
    public static final java.lang.String SENT_BYTES_COUNT = "http.sent-bytes-count";
    private final cz.msebera.android.httpclient.io.HttpTransportMetrics inTransportMetric;
    private java.util.Map<java.lang.String, java.lang.Object> metricsCache;
    private final cz.msebera.android.httpclient.io.HttpTransportMetrics outTransportMetric;
    private long requestCount;
    private long responseCount;

    public HttpConnectionMetricsImpl(cz.msebera.android.httpclient.io.HttpTransportMetrics r3, cz.msebera.android.httpclient.io.HttpTransportMetrics r4) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.requestCount = r0
            r2.responseCount = r0
            r2.inTransportMetric = r3
            r2.outTransportMetric = r4
            return
    }

    @Override
    public java.lang.Object getMetric(java.lang.String r4) {
            r3 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r3.metricsCache
            r1 = 0
            if (r0 == 0) goto La
            java.lang.Object r0 = r0.get(r4)
            goto Lb
        La:
            r0 = r1
        Lb:
            if (r0 != 0) goto L57
            java.lang.String r2 = "http.request-count"
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L1c
            long r0 = r3.requestCount
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            goto L57
        L1c:
            java.lang.String r2 = "http.response-count"
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L2b
            long r0 = r3.responseCount
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            goto L57
        L2b:
            java.lang.String r2 = "http.received-bytes-count"
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L41
            cz.msebera.android.httpclient.io.HttpTransportMetrics r4 = r3.inTransportMetric
            if (r4 == 0) goto L40
            long r0 = r4.getBytesTransferred()
            java.lang.Long r4 = java.lang.Long.valueOf(r0)
            return r4
        L40:
            return r1
        L41:
            java.lang.String r2 = "http.sent-bytes-count"
            boolean r4 = r2.equals(r4)
            if (r4 == 0) goto L57
            cz.msebera.android.httpclient.io.HttpTransportMetrics r4 = r3.outTransportMetric
            if (r4 == 0) goto L56
            long r0 = r4.getBytesTransferred()
            java.lang.Long r4 = java.lang.Long.valueOf(r0)
            return r4
        L56:
            return r1
        L57:
            return r0
    }

    @Override
    public long getReceivedBytesCount() {
            r2 = this;
            cz.msebera.android.httpclient.io.HttpTransportMetrics r0 = r2.inTransportMetric
            if (r0 == 0) goto L9
            long r0 = r0.getBytesTransferred()
            return r0
        L9:
            r0 = -1
            return r0
    }

    @Override
    public long getRequestCount() {
            r2 = this;
            long r0 = r2.requestCount
            return r0
    }

    @Override
    public long getResponseCount() {
            r2 = this;
            long r0 = r2.responseCount
            return r0
    }

    @Override
    public long getSentBytesCount() {
            r2 = this;
            cz.msebera.android.httpclient.io.HttpTransportMetrics r0 = r2.outTransportMetric
            if (r0 == 0) goto L9
            long r0 = r0.getBytesTransferred()
            return r0
        L9:
            r0 = -1
            return r0
    }

    public void incrementRequestCount() {
            r4 = this;
            long r0 = r4.requestCount
            r2 = 1
            long r0 = r0 + r2
            r4.requestCount = r0
            return
    }

    public void incrementResponseCount() {
            r4 = this;
            long r0 = r4.responseCount
            r2 = 1
            long r0 = r0 + r2
            r4.responseCount = r0
            return
    }

    @Override
    public void reset() {
            r2 = this;
            cz.msebera.android.httpclient.io.HttpTransportMetrics r0 = r2.outTransportMetric
            if (r0 == 0) goto L7
            r0.reset()
        L7:
            cz.msebera.android.httpclient.io.HttpTransportMetrics r0 = r2.inTransportMetric
            if (r0 == 0) goto Le
            r0.reset()
        Le:
            r0 = 0
            r2.requestCount = r0
            r2.responseCount = r0
            r0 = 0
            r2.metricsCache = r0
            return
    }

    public void setMetric(java.lang.String r2, java.lang.Object r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.metricsCache
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.metricsCache = r0
        Lb:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.metricsCache
            r0.put(r2, r3)
            return
    }
}
