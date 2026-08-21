package cz.msebera.android.httpclient.conn;

public interface ConnectionRequest extends cz.msebera.android.httpclient.concurrent.Cancellable {
    cz.msebera.android.httpclient.HttpClientConnection get(long r1, java.util.concurrent.TimeUnit r3) throws java.lang.InterruptedException, java.util.concurrent.ExecutionException, cz.msebera.android.httpclient.conn.ConnectionPoolTimeoutException;
}
