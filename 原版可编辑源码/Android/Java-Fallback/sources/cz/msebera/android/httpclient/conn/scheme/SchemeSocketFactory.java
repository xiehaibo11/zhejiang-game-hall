package cz.msebera.android.httpclient.conn.scheme;

@java.lang.Deprecated
public interface SchemeSocketFactory {
    java.net.Socket connectSocket(java.net.Socket r1, java.net.InetSocketAddress r2, java.net.InetSocketAddress r3, cz.msebera.android.httpclient.params.HttpParams r4) throws java.io.IOException, java.net.UnknownHostException, cz.msebera.android.httpclient.conn.ConnectTimeoutException;

    java.net.Socket createSocket(cz.msebera.android.httpclient.params.HttpParams r1) throws java.io.IOException;

    boolean isSecure(java.net.Socket r1) throws java.lang.IllegalArgumentException;
}
