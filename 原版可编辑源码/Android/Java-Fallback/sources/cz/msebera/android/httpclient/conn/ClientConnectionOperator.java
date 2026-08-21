package cz.msebera.android.httpclient.conn;

@java.lang.Deprecated
public interface ClientConnectionOperator {
    cz.msebera.android.httpclient.conn.OperatedClientConnection createConnection();

    void openConnection(cz.msebera.android.httpclient.conn.OperatedClientConnection r1, cz.msebera.android.httpclient.HttpHost r2, java.net.InetAddress r3, cz.msebera.android.httpclient.protocol.HttpContext r4, cz.msebera.android.httpclient.params.HttpParams r5) throws java.io.IOException;

    void updateSecureConnection(cz.msebera.android.httpclient.conn.OperatedClientConnection r1, cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.protocol.HttpContext r3, cz.msebera.android.httpclient.params.HttpParams r4) throws java.io.IOException;
}
