package cz.msebera.android.httpclient.entity.mime.content;

public interface ContentDescriptor {
    java.lang.String getCharset();

    long getContentLength();

    java.lang.String getMediaType();

    java.lang.String getMimeType();

    java.lang.String getSubType();

    java.lang.String getTransferEncoding();
}
