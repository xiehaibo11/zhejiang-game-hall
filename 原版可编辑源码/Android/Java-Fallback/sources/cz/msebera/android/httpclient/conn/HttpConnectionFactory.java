package cz.msebera.android.httpclient.conn;

import cz.msebera.android.httpclient.HttpConnection;

public interface HttpConnectionFactory<T, C extends cz.msebera.android.httpclient.HttpConnection> {
    C create(T r1, cz.msebera.android.httpclient.config.ConnectionConfig r2);
}
