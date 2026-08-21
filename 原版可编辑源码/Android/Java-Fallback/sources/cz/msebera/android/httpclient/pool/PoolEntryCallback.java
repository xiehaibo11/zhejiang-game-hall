package cz.msebera.android.httpclient.pool;

public interface PoolEntryCallback<T, C> {
    void process(cz.msebera.android.httpclient.pool.PoolEntry<T, C> r1);
}
