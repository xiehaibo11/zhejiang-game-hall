package cz.msebera.android.httpclient.client.cache;

public interface Resource extends java.io.Serializable {
    void dispose();

    java.io.InputStream getInputStream() throws java.io.IOException;

    long length();
}
