package cz.msebera.android.httpclient.pool;

public interface ConnPoolControl<T> {
    int getDefaultMaxPerRoute();

    int getMaxPerRoute(T r1);

    int getMaxTotal();

    cz.msebera.android.httpclient.pool.PoolStats getStats(T r1);

    cz.msebera.android.httpclient.pool.PoolStats getTotalStats();

    void setDefaultMaxPerRoute(int r1);

    void setMaxPerRoute(T r1, int r2);

    void setMaxTotal(int r1);
}
