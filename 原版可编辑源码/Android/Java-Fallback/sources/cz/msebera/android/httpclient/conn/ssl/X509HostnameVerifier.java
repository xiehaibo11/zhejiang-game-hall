package cz.msebera.android.httpclient.conn.ssl;

@java.lang.Deprecated
public interface X509HostnameVerifier extends javax.net.ssl.HostnameVerifier {
    void verify(java.lang.String r1, java.security.cert.X509Certificate r2) throws javax.net.ssl.SSLException;

    void verify(java.lang.String r1, javax.net.ssl.SSLSocket r2) throws java.io.IOException;

    void verify(java.lang.String r1, java.lang.String[] r2, java.lang.String[] r3) throws javax.net.ssl.SSLException;
}
