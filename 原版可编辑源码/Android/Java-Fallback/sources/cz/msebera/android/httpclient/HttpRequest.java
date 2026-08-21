package cz.msebera.android.httpclient;

public interface HttpRequest extends cz.msebera.android.httpclient.HttpMessage {
    cz.msebera.android.httpclient.RequestLine getRequestLine();
}
