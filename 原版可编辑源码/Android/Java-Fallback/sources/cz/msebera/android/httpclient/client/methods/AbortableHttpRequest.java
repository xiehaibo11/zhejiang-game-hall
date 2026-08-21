package cz.msebera.android.httpclient.client.methods;

@java.lang.Deprecated
public interface AbortableHttpRequest {
    void abort();

    void setConnectionRequest(cz.msebera.android.httpclient.conn.ClientConnectionRequest r1) throws java.io.IOException;

    void setReleaseTrigger(cz.msebera.android.httpclient.conn.ConnectionReleaseTrigger r1) throws java.io.IOException;
}
