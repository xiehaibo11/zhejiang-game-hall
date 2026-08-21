package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.Immutable
public class DefaultServiceUnavailableRetryStrategy implements cz.msebera.android.httpclient.client.ServiceUnavailableRetryStrategy {
    private final int maxRetries;
    private final long retryInterval;

    public DefaultServiceUnavailableRetryStrategy() {
            r2 = this;
            r0 = 1
            r1 = 1000(0x3e8, float:1.401E-42)
            r2.<init>(r0, r1)
            return
    }

    public DefaultServiceUnavailableRetryStrategy(int r2, int r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Max retries"
            cz.msebera.android.httpclient.util.Args.positive(r2, r0)
            java.lang.String r0 = "Retry interval"
            cz.msebera.android.httpclient.util.Args.positive(r3, r0)
            r1.maxRetries = r2
            long r2 = (long) r3
            r1.retryInterval = r2
            return
    }

    @Override
    public long getRetryInterval() {
            r2 = this;
            long r0 = r2.retryInterval
            return r0
    }

    @Override
    public boolean retryRequest(cz.msebera.android.httpclient.HttpResponse r1, int r2, cz.msebera.android.httpclient.protocol.HttpContext r3) {
            r0 = this;
            int r3 = r0.maxRetries
            if (r2 > r3) goto L12
            cz.msebera.android.httpclient.StatusLine r1 = r1.getStatusLine()
            int r1 = r1.getStatusCode()
            r2 = 503(0x1f7, float:7.05E-43)
            if (r1 != r2) goto L12
            r1 = 1
            goto L13
        L12:
            r1 = 0
        L13:
            return r1
    }
}
