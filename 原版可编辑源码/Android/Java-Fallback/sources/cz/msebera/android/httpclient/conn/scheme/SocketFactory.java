package cz.msebera.android.httpclient.conn.scheme;

@java.lang.Deprecated
public interface SocketFactory {
    java.net.Socket connectSocket(java.net.Socket r1, java.lang.String r2, int r3, java.net.InetAddress r4, int r5, cz.msebera.android.httpclient.params.HttpParams r6) throws java.io.IOException, java.net.UnknownHostException, cz.msebera.android.httpclient.conn.ConnectTimeoutException;

    java.net.Socket createSocket() throws java.io.IOException;

    boolean isSecure(java.net.Socket r1) throws java.lang.IllegalArgumentException;
}
