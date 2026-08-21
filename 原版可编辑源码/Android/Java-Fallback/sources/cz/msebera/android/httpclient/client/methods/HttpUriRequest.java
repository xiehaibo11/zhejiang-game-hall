package cz.msebera.android.httpclient.client.methods;

public interface HttpUriRequest extends cz.msebera.android.httpclient.HttpRequest {
    void abort() throws java.lang.UnsupportedOperationException;

    java.lang.String getMethod();

    java.net.URI getURI();

    boolean isAborted();
}
