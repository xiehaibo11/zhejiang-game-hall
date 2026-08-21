package cz.msebera.android.httpclient.pool;

public interface ConnPool<T, E> {
    java.util.concurrent.Future<E> lease(T r1, java.lang.Object r2, cz.msebera.android.httpclient.concurrent.FutureCallback<E> r3);

    void release(E r1, boolean r2);
}
