package cz.msebera.android.httpclient.client;

public interface ResponseHandler<T> {
    T handleResponse(cz.msebera.android.httpclient.HttpResponse r1) throws cz.msebera.android.httpclient.client.ClientProtocolException, java.io.IOException;
}
