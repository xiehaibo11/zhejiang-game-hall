package cz.msebera.android.httpclient.conn;

@java.lang.Deprecated
public interface ClientConnectionRequest {
    void abortRequest();

    cz.msebera.android.httpclient.conn.ManagedClientConnection getConnection(long r1, java.util.concurrent.TimeUnit r3) throws java.lang.InterruptedException, cz.msebera.android.httpclient.conn.ConnectionPoolTimeoutException;
}
