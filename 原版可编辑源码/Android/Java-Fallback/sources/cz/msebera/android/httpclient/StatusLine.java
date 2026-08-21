package cz.msebera.android.httpclient;

public interface StatusLine {
    cz.msebera.android.httpclient.ProtocolVersion getProtocolVersion();

    java.lang.String getReasonPhrase();

    int getStatusCode();
}
