package cz.msebera.android.httpclient.conn.scheme;

@java.lang.Deprecated
public interface LayeredSocketFactory extends cz.msebera.android.httpclient.conn.scheme.SocketFactory {
    java.net.Socket createSocket(java.net.Socket r1, java.lang.String r2, int r3, boolean r4) throws java.io.IOException, java.net.UnknownHostException;
}
