package cz.msebera.android.httpclient;

public interface HttpConnection extends java.io.Closeable {
    @Override
    void close() throws java.io.IOException;

    cz.msebera.android.httpclient.HttpConnectionMetrics getMetrics();

    int getSocketTimeout();

    boolean isOpen();

    boolean isStale();

    void setSocketTimeout(int r1);

    void shutdown() throws java.io.IOException;
}
