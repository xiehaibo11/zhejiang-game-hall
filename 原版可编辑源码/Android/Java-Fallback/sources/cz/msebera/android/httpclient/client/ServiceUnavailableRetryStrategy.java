package cz.msebera.android.httpclient.client;

public interface ServiceUnavailableRetryStrategy {
    long getRetryInterval();

    boolean retryRequest(cz.msebera.android.httpclient.HttpResponse r1, int r2, cz.msebera.android.httpclient.protocol.HttpContext r3);
}
