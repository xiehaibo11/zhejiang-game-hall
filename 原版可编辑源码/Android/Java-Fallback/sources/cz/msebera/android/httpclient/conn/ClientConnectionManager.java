package cz.msebera.android.httpclient.conn;

@java.lang.Deprecated
public interface ClientConnectionManager {
    void closeExpiredConnections();

    void closeIdleConnections(long r1, java.util.concurrent.TimeUnit r3);

    cz.msebera.android.httpclient.conn.scheme.SchemeRegistry getSchemeRegistry();

    void releaseConnection(cz.msebera.android.httpclient.conn.ManagedClientConnection r1, long r2, java.util.concurrent.TimeUnit r4);

    cz.msebera.android.httpclient.conn.ClientConnectionRequest requestConnection(cz.msebera.android.httpclient.conn.routing.HttpRoute r1, java.lang.Object r2);

    void shutdown();
}
