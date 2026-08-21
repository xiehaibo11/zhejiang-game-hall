package cz.msebera.android.httpclient.client;

public interface HttpRequestRetryHandler {
    boolean retryRequest(java.io.IOException r1, int r2, cz.msebera.android.httpclient.protocol.HttpContext r3);
}
