package cz.msebera.android.httpclient;

public interface HttpServerConnection extends cz.msebera.android.httpclient.HttpConnection {
    void flush() throws java.io.IOException;

    void receiveRequestEntity(cz.msebera.android.httpclient.HttpEntityEnclosingRequest r1) throws cz.msebera.android.httpclient.HttpException, java.io.IOException;

    cz.msebera.android.httpclient.HttpRequest receiveRequestHeader() throws cz.msebera.android.httpclient.HttpException, java.io.IOException;

    void sendResponseEntity(cz.msebera.android.httpclient.HttpResponse r1) throws cz.msebera.android.httpclient.HttpException, java.io.IOException;

    void sendResponseHeader(cz.msebera.android.httpclient.HttpResponse r1) throws cz.msebera.android.httpclient.HttpException, java.io.IOException;
}
