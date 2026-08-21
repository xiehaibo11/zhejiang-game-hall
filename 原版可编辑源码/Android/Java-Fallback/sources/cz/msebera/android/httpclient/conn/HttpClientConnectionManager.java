package cz.msebera.android.httpclient.conn;

public interface HttpClientConnectionManager {
    void closeExpiredConnections();

    void closeIdleConnections(long r1, java.util.concurrent.TimeUnit r3);

    void connect(cz.msebera.android.httpclient.HttpClientConnection r1, cz.msebera.android.httpclient.conn.routing.HttpRoute r2, int r3, cz.msebera.android.httpclient.protocol.HttpContext r4) throws java.io.IOException;

    void releaseConnection(cz.msebera.android.httpclient.HttpClientConnection r1, java.lang.Object r2, long r3, java.util.concurrent.TimeUnit r5);

    cz.msebera.android.httpclient.conn.ConnectionRequest requestConnection(cz.msebera.android.httpclient.conn.routing.HttpRoute r1, java.lang.Object r2);

    void routeComplete(cz.msebera.android.httpclient.HttpClientConnection r1, cz.msebera.android.httpclient.conn.routing.HttpRoute r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws java.io.IOException;

    void shutdown();

    void upgrade(cz.msebera.android.httpclient.HttpClientConnection r1, cz.msebera.android.httpclient.conn.routing.HttpRoute r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws java.io.IOException;
}
