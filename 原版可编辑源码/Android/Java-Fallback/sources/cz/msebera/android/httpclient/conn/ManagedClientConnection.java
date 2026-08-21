package cz.msebera.android.httpclient.conn;

@java.lang.Deprecated
public interface ManagedClientConnection extends cz.msebera.android.httpclient.HttpClientConnection, cz.msebera.android.httpclient.conn.HttpRoutedConnection, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection, cz.msebera.android.httpclient.conn.ConnectionReleaseTrigger {
    @Override
    cz.msebera.android.httpclient.conn.routing.HttpRoute getRoute();

    @Override
    javax.net.ssl.SSLSession getSSLSession();

    java.lang.Object getState();

    boolean isMarkedReusable();

    @Override
    boolean isSecure();

    void layerProtocol(cz.msebera.android.httpclient.protocol.HttpContext r1, cz.msebera.android.httpclient.params.HttpParams r2) throws java.io.IOException;

    void markReusable();

    void open(cz.msebera.android.httpclient.conn.routing.HttpRoute r1, cz.msebera.android.httpclient.protocol.HttpContext r2, cz.msebera.android.httpclient.params.HttpParams r3) throws java.io.IOException;

    void setIdleDuration(long r1, java.util.concurrent.TimeUnit r3);

    void setState(java.lang.Object r1);

    void tunnelProxy(cz.msebera.android.httpclient.HttpHost r1, boolean r2, cz.msebera.android.httpclient.params.HttpParams r3) throws java.io.IOException;

    void tunnelTarget(boolean r1, cz.msebera.android.httpclient.params.HttpParams r2) throws java.io.IOException;

    void unmarkReusable();
}
