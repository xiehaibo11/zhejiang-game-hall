package cz.msebera.android.httpclient.conn;

public interface ConnectionReleaseTrigger {
    void abortConnection() throws java.io.IOException;

    void releaseConnection() throws java.io.IOException;
}
