package cz.msebera.android.httpclient.concurrent;

public interface FutureCallback<T> {
    void cancelled();

    void completed(T r1);

    void failed(java.lang.Exception r1);
}
