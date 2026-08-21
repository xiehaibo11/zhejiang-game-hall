package cz.msebera.android.httpclient.pool;

public interface ConnFactory<T, C> {
    C create(T r1) throws java.io.IOException;
}
