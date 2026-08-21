package cz.msebera.android.httpclient.conn;

@java.lang.Deprecated
public interface OperatedClientConnection extends cz.msebera.android.httpclient.HttpClientConnection, cz.msebera.android.httpclient.HttpInetConnection {
    java.net.Socket getSocket();

    cz.msebera.android.httpclient.HttpHost getTargetHost();

    boolean isSecure();

    void openCompleted(boolean r1, cz.msebera.android.httpclient.params.HttpParams r2) throws java.io.IOException;

    void opening(java.net.Socket r1, cz.msebera.android.httpclient.HttpHost r2) throws java.io.IOException;

    void update(java.net.Socket r1, cz.msebera.android.httpclient.HttpHost r2, boolean r3, cz.msebera.android.httpclient.params.HttpParams r4) throws java.io.IOException;
}
