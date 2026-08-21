package cz.msebera.android.httpclient;

public interface HttpRequestInterceptor {
    void process(cz.msebera.android.httpclient.HttpRequest r1, cz.msebera.android.httpclient.protocol.HttpContext r2) throws cz.msebera.android.httpclient.HttpException, java.io.IOException;
}
