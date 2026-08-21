package cz.msebera.android.httpclient;

import cz.msebera.android.httpclient.HttpConnection;

public interface HttpConnectionFactory<T extends cz.msebera.android.httpclient.HttpConnection> {
    T createConnection(java.net.Socket r1) throws java.io.IOException;
}
