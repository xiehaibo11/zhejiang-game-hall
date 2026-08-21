package cz.msebera.android.httpclient;

public interface HttpClientConnection extends cz.msebera.android.httpclient.HttpConnection {
    void flush() throws java.io.IOException;

    boolean isResponseAvailable(int r1) throws java.io.IOException;

    void receiveResponseEntity(cz.msebera.android.httpclient.HttpResponse r1) throws cz.msebera.android.httpclient.HttpException, java.io.IOException;

    cz.msebera.android.httpclient.HttpResponse receiveResponseHeader() throws cz.msebera.android.httpclient.HttpException, java.io.IOException;

    void sendRequestEntity(cz.msebera.android.httpclient.HttpEntityEnclosingRequest r1) throws cz.msebera.android.httpclient.HttpException, java.io.IOException;

    void sendRequestHeader(cz.msebera.android.httpclient.HttpRequest r1) throws cz.msebera.android.httpclient.HttpException, java.io.IOException;
}
