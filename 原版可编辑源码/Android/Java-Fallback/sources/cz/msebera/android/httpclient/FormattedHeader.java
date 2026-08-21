package cz.msebera.android.httpclient;

public interface FormattedHeader extends cz.msebera.android.httpclient.Header {
    cz.msebera.android.httpclient.util.CharArrayBuffer getBuffer();

    int getValuePos();
}
