package cz.msebera.android.httpclient.impl.bootstrap;

public interface SSLServerSetupHandler {
    void initialize(javax.net.ssl.SSLServerSocket r1) throws javax.net.ssl.SSLException;
}
