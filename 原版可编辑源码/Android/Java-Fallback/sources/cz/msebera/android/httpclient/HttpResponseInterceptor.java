package cz.msebera.android.httpclient;

public interface HttpResponseInterceptor {
    void process(cz.msebera.android.httpclient.HttpResponse r1, cz.msebera.android.httpclient.protocol.HttpContext r2) throws cz.msebera.android.httpclient.HttpException, java.io.IOException;
}
