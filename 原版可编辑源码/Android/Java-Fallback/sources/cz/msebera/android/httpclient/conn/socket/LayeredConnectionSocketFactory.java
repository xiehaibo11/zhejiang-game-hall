package cz.msebera.android.httpclient.conn.socket;

public interface LayeredConnectionSocketFactory extends cz.msebera.android.httpclient.conn.socket.ConnectionSocketFactory {
    java.net.Socket createLayeredSocket(java.net.Socket r1, java.lang.String r2, int r3, cz.msebera.android.httpclient.protocol.HttpContext r4) throws java.io.IOException, java.net.UnknownHostException;
}
