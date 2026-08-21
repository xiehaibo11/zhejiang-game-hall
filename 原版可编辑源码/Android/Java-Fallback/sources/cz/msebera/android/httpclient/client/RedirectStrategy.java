package cz.msebera.android.httpclient.client;

public interface RedirectStrategy {
    cz.msebera.android.httpclient.client.methods.HttpUriRequest getRedirect(cz.msebera.android.httpclient.HttpRequest r1, cz.msebera.android.httpclient.HttpResponse r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws cz.msebera.android.httpclient.ProtocolException;

    boolean isRedirected(cz.msebera.android.httpclient.HttpRequest r1, cz.msebera.android.httpclient.HttpResponse r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws cz.msebera.android.httpclient.ProtocolException;
}
