package cz.msebera.android.httpclient;

public interface ConnectionReuseStrategy {
    boolean keepAlive(cz.msebera.android.httpclient.HttpResponse r1, cz.msebera.android.httpclient.protocol.HttpContext r2);
}
