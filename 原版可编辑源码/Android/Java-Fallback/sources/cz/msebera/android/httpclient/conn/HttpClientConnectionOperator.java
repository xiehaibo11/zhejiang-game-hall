package cz.msebera.android.httpclient.conn;

public interface HttpClientConnectionOperator {
    void connect(cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r1, cz.msebera.android.httpclient.HttpHost r2, java.net.InetSocketAddress r3, int r4, cz.msebera.android.httpclient.config.SocketConfig r5, cz.msebera.android.httpclient.protocol.HttpContext r6) throws java.io.IOException;

    void upgrade(cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r1, cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws java.io.IOException;
}
