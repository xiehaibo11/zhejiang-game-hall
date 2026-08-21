package cz.msebera.android.httpclient;

public interface HttpRequestFactory {
    cz.msebera.android.httpclient.HttpRequest newHttpRequest(cz.msebera.android.httpclient.RequestLine r1) throws cz.msebera.android.httpclient.MethodNotSupportedException;

    cz.msebera.android.httpclient.HttpRequest newHttpRequest(java.lang.String r1, java.lang.String r2) throws cz.msebera.android.httpclient.MethodNotSupportedException;
}
