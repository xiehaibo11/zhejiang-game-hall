package cz.msebera.android.httpclient.entity.mime.content;

public interface ContentBody extends cz.msebera.android.httpclient.entity.mime.content.ContentDescriptor {
    java.lang.String getFilename();

    void writeTo(java.io.OutputStream r1) throws java.io.IOException;
}
