package cz.msebera.android.httpclient.protocol;

public interface HttpRequestHandlerMapper {
    cz.msebera.android.httpclient.protocol.HttpRequestHandler lookup(cz.msebera.android.httpclient.HttpRequest r1);
}
