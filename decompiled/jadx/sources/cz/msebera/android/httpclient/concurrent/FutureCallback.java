package cz.msebera.android.httpclient.concurrent;

/* JADX INFO: loaded from: classes4.dex */
public interface FutureCallback<T> {
    void cancelled();

    void completed(T t);

    void failed(Exception exc);
}
