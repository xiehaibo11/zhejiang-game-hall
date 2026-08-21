package cz.msebera.android.httpclient;

public interface HttpResponseFactory {
    cz.msebera.android.httpclient.HttpResponse newHttpResponse(cz.msebera.android.httpclient.ProtocolVersion r1, int r2, cz.msebera.android.httpclient.protocol.HttpContext r3);

    cz.msebera.android.httpclient.HttpResponse newHttpResponse(cz.msebera.android.httpclient.StatusLine r1, cz.msebera.android.httpclient.protocol.HttpContext r2);
}
