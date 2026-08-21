package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.ThreadSafe
@java.lang.Deprecated
public class DefaultHttpRoutePlanner implements cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner {
    protected final cz.msebera.android.httpclient.conn.scheme.SchemeRegistry schemeRegistry;

    public DefaultHttpRoutePlanner(cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Scheme registry"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.schemeRegistry = r2
            return
    }

    @Override
    public cz.msebera.android.httpclient.conn.routing.HttpRoute determineRoute(cz.msebera.android.httpclient.HttpHost r3, cz.msebera.android.httpclient.HttpRequest r4, cz.msebera.android.httpclient.protocol.HttpContext r5) throws cz.msebera.android.httpclient.HttpException {
            r2 = this;
            java.lang.String r5 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r5)
            cz.msebera.android.httpclient.params.HttpParams r5 = r4.getParams()
            cz.msebera.android.httpclient.conn.routing.HttpRoute r5 = cz.msebera.android.httpclient.conn.params.ConnRouteParams.getForcedRoute(r5)
            if (r5 == 0) goto L10
            return r5
        L10:
            java.lang.String r5 = "Target host"
            cz.msebera.android.httpclient.util.Asserts.notNull(r3, r5)
            cz.msebera.android.httpclient.params.HttpParams r5 = r4.getParams()
            java.net.InetAddress r5 = cz.msebera.android.httpclient.conn.params.ConnRouteParams.getLocalAddress(r5)
            cz.msebera.android.httpclient.params.HttpParams r4 = r4.getParams()
            cz.msebera.android.httpclient.HttpHost r4 = cz.msebera.android.httpclient.conn.params.ConnRouteParams.getDefaultProxy(r4)
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r0 = r2.schemeRegistry     // Catch: java.lang.IllegalStateException -> L42
            java.lang.String r1 = r3.getSchemeName()     // Catch: java.lang.IllegalStateException -> L42
            cz.msebera.android.httpclient.conn.scheme.Scheme r0 = r0.getScheme(r1)     // Catch: java.lang.IllegalStateException -> L42
            boolean r0 = r0.isLayered()
            if (r4 != 0) goto L3b
            cz.msebera.android.httpclient.conn.routing.HttpRoute r4 = new cz.msebera.android.httpclient.conn.routing.HttpRoute
            r4.<init>(r3, r5, r0)
            goto L41
        L3b:
            cz.msebera.android.httpclient.conn.routing.HttpRoute r1 = new cz.msebera.android.httpclient.conn.routing.HttpRoute
            r1.<init>(r3, r5, r4, r0)
            r4 = r1
        L41:
            return r4
        L42:
            r3 = move-exception
            cz.msebera.android.httpclient.HttpException r4 = new cz.msebera.android.httpclient.HttpException
            java.lang.String r3 = r3.getMessage()
            r4.<init>(r3)
            throw r4
    }
}
