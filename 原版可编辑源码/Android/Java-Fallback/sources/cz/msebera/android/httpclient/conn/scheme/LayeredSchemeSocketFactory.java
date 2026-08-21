package cz.msebera.android.httpclient.conn.scheme;

@java.lang.Deprecated
public interface LayeredSchemeSocketFactory extends cz.msebera.android.httpclient.conn.scheme.SchemeSocketFactory {
    java.net.Socket createLayeredSocket(java.net.Socket r1, java.lang.String r2, int r3, boolean r4) throws java.io.IOException, java.net.UnknownHostException;
}
