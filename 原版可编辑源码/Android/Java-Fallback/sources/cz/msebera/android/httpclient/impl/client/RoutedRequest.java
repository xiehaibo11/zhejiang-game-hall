package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public class RoutedRequest {
    protected final cz.msebera.android.httpclient.impl.client.RequestWrapper request;
    protected final cz.msebera.android.httpclient.conn.routing.HttpRoute route;

    public RoutedRequest(cz.msebera.android.httpclient.impl.client.RequestWrapper r1, cz.msebera.android.httpclient.conn.routing.HttpRoute r2) {
            r0 = this;
            r0.<init>()
            r0.request = r1
            r0.route = r2
            return
    }

    public final cz.msebera.android.httpclient.impl.client.RequestWrapper getRequest() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.RequestWrapper r0 = r1.request
            return r0
    }

    public final cz.msebera.android.httpclient.conn.routing.HttpRoute getRoute() {
            r1 = this;
            cz.msebera.android.httpclient.conn.routing.HttpRoute r0 = r1.route
            return r0
    }
}
