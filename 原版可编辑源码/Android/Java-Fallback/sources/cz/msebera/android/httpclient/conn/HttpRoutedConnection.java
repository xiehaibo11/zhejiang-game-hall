package cz.msebera.android.httpclient.conn;

@java.lang.Deprecated
public interface HttpRoutedConnection extends cz.msebera.android.httpclient.HttpInetConnection {
    cz.msebera.android.httpclient.conn.routing.HttpRoute getRoute();

    javax.net.ssl.SSLSession getSSLSession();

    boolean isSecure();
}
