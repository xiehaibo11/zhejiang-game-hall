package cz.msebera.android.httpclient.conn.routing;

public interface HttpRoutePlanner {
    cz.msebera.android.httpclient.conn.routing.HttpRoute determineRoute(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws cz.msebera.android.httpclient.HttpException;
}
