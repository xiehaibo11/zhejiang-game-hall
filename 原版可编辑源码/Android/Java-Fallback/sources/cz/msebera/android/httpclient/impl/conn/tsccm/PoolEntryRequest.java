package cz.msebera.android.httpclient.impl.conn.tsccm;

@java.lang.Deprecated
public interface PoolEntryRequest {
    void abortRequest();

    cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry getPoolEntry(long r1, java.util.concurrent.TimeUnit r3) throws java.lang.InterruptedException, cz.msebera.android.httpclient.conn.ConnectionPoolTimeoutException;
}
