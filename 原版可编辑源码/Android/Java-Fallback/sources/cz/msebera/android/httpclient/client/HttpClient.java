package cz.msebera.android.httpclient.client;

public interface HttpClient {
    cz.msebera.android.httpclient.HttpResponse execute(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException;

    cz.msebera.android.httpclient.HttpResponse execute(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException;

    cz.msebera.android.httpclient.HttpResponse execute(cz.msebera.android.httpclient.client.methods.HttpUriRequest r1) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException;

    cz.msebera.android.httpclient.HttpResponse execute(cz.msebera.android.httpclient.client.methods.HttpUriRequest r1, cz.msebera.android.httpclient.protocol.HttpContext r2) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException;

    <T> T execute(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.client.ResponseHandler<? extends T> r3) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException;

    <T> T execute(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.client.ResponseHandler<? extends T> r3, cz.msebera.android.httpclient.protocol.HttpContext r4) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException;

    <T> T execute(cz.msebera.android.httpclient.client.methods.HttpUriRequest r1, cz.msebera.android.httpclient.client.ResponseHandler<? extends T> r2) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException;

    <T> T execute(cz.msebera.android.httpclient.client.methods.HttpUriRequest r1, cz.msebera.android.httpclient.client.ResponseHandler<? extends T> r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws java.io.IOException, cz.msebera.android.httpclient.client.ClientProtocolException;

    @java.lang.Deprecated
    cz.msebera.android.httpclient.conn.ClientConnectionManager getConnectionManager();

    @java.lang.Deprecated
    cz.msebera.android.httpclient.params.HttpParams getParams();
}
