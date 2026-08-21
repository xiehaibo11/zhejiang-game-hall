package cz.msebera.android.httpclient;

public interface HttpEntity {
    @java.lang.Deprecated
    void consumeContent() throws java.io.IOException;

    java.io.InputStream getContent() throws java.io.IOException, java.lang.UnsupportedOperationException;

    cz.msebera.android.httpclient.Header getContentEncoding();

    long getContentLength();

    cz.msebera.android.httpclient.Header getContentType();

    boolean isChunked();

    boolean isRepeatable();

    boolean isStreaming();

    void writeTo(java.io.OutputStream r1) throws java.io.IOException;
}
