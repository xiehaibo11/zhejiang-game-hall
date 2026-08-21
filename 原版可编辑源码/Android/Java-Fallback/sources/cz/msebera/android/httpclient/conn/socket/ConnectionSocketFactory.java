package cz.msebera.android.httpclient.conn.socket;

public interface ConnectionSocketFactory {
    java.net.Socket connectSocket(int r1, java.net.Socket r2, cz.msebera.android.httpclient.HttpHost r3, java.net.InetSocketAddress r4, java.net.InetSocketAddress r5, cz.msebera.android.httpclient.protocol.HttpContext r6) throws java.io.IOException;

    java.net.Socket createSocket(cz.msebera.android.httpclient.protocol.HttpContext r1) throws java.io.IOException;
}
