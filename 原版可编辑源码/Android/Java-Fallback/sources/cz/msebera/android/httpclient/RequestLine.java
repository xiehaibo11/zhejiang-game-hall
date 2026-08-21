package cz.msebera.android.httpclient;

public interface RequestLine {
    java.lang.String getMethod();

    cz.msebera.android.httpclient.ProtocolVersion getProtocolVersion();

    java.lang.String getUri();
}
