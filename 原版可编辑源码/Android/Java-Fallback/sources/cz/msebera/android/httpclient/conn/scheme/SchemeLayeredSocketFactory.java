package cz.msebera.android.httpclient.conn.scheme;

@java.lang.Deprecated
public interface SchemeLayeredSocketFactory extends cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory {
    java.net.Socket createLayeredSocket(java.net.Socket r1, java.lang.String r2, int r3, cz.msebera.android.httpclient.params.HttpParams r4) throws java.io.IOException, java.net.UnknownHostException;
}
