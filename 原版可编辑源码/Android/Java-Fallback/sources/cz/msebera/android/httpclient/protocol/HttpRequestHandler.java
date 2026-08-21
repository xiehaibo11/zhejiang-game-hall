package cz.msebera.android.httpclient.protocol;

public interface HttpRequestHandler {
    void handle(cz.msebera.android.httpclient.HttpRequest r1, cz.msebera.android.httpclient.HttpResponse r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws cz.msebera.android.httpclient.HttpException, java.io.IOException;
}
