package cz.msebera.android.httpclient.conn;

public interface ManagedHttpClientConnection extends cz.msebera.android.httpclient.HttpClientConnection, cz.msebera.android.httpclient.HttpInetConnection {
    void bind(java.net.Socket r1) throws java.io.IOException;

    java.lang.String getId();

    javax.net.ssl.SSLSession getSSLSession();

    java.net.Socket getSocket();
}
