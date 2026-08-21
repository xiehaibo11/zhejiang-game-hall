package cz.msebera.android.httpclient.conn;

public interface ConnectionKeepAliveStrategy {
    long getKeepAliveDuration(cz.msebera.android.httpclient.HttpResponse r1, cz.msebera.android.httpclient.protocol.HttpContext r2);
}
