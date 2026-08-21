package cz.msebera.android.httpclient.client;

@java.lang.Deprecated
public interface RedirectHandler {
    java.net.URI getLocationURI(cz.msebera.android.httpclient.HttpResponse r1, cz.msebera.android.httpclient.protocol.HttpContext r2) throws cz.msebera.android.httpclient.ProtocolException;

    boolean isRedirectRequested(cz.msebera.android.httpclient.HttpResponse r1, cz.msebera.android.httpclient.protocol.HttpContext r2);
}
