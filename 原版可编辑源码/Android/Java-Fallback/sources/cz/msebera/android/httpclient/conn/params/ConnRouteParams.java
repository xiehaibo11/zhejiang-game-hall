package cz.msebera.android.httpclient.conn.params;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class ConnRouteParams implements cz.msebera.android.httpclient.conn.params.ConnRoutePNames {
    public static final cz.msebera.android.httpclient.HttpHost NO_HOST = null;
    public static final cz.msebera.android.httpclient.conn.routing.HttpRoute NO_ROUTE = null;

    static {
            cz.msebera.android.httpclient.HttpHost r0 = new cz.msebera.android.httpclient.HttpHost
            java.lang.String r1 = "127.0.0.255"
            r2 = 0
            java.lang.String r3 = "no-host"
            r0.<init>(r1, r2, r3)
            cz.msebera.android.httpclient.conn.params.ConnRouteParams.NO_HOST = r0
            cz.msebera.android.httpclient.conn.routing.HttpRoute r0 = new cz.msebera.android.httpclient.conn.routing.HttpRoute
            cz.msebera.android.httpclient.HttpHost r1 = cz.msebera.android.httpclient.conn.params.ConnRouteParams.NO_HOST
            r0.<init>(r1)
            cz.msebera.android.httpclient.conn.params.ConnRouteParams.NO_ROUTE = r0
            return
    }

    private ConnRouteParams() {
            r0 = this;
            r0.<init>()
            return
    }

    public static cz.msebera.android.httpclient.HttpHost getDefaultProxy(cz.msebera.android.httpclient.params.HttpParams r1) {
            java.lang.String r0 = "Parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.route.default-proxy"
            java.lang.Object r1 = r1.getParameter(r0)
            cz.msebera.android.httpclient.HttpHost r1 = (cz.msebera.android.httpclient.HttpHost) r1
            if (r1 == 0) goto L18
            cz.msebera.android.httpclient.HttpHost r0 = cz.msebera.android.httpclient.conn.params.ConnRouteParams.NO_HOST
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L18
            r1 = 0
        L18:
            return r1
    }

    public static cz.msebera.android.httpclient.conn.routing.HttpRoute getForcedRoute(cz.msebera.android.httpclient.params.HttpParams r1) {
            java.lang.String r0 = "Parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.route.forced-route"
            java.lang.Object r1 = r1.getParameter(r0)
            cz.msebera.android.httpclient.conn.routing.HttpRoute r1 = (cz.msebera.android.httpclient.conn.routing.HttpRoute) r1
            if (r1 == 0) goto L18
            cz.msebera.android.httpclient.conn.routing.HttpRoute r0 = cz.msebera.android.httpclient.conn.params.ConnRouteParams.NO_ROUTE
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L18
            r1 = 0
        L18:
            return r1
    }

    public static java.net.InetAddress getLocalAddress(cz.msebera.android.httpclient.params.HttpParams r1) {
            java.lang.String r0 = "Parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.route.local-address"
            java.lang.Object r1 = r1.getParameter(r0)
            java.net.InetAddress r1 = (java.net.InetAddress) r1
            return r1
    }

    public static void setDefaultProxy(cz.msebera.android.httpclient.params.HttpParams r1, cz.msebera.android.httpclient.HttpHost r2) {
            java.lang.String r0 = "Parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.route.default-proxy"
            r1.setParameter(r0, r2)
            return
    }

    public static void setForcedRoute(cz.msebera.android.httpclient.params.HttpParams r1, cz.msebera.android.httpclient.conn.routing.HttpRoute r2) {
            java.lang.String r0 = "Parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.route.forced-route"
            r1.setParameter(r0, r2)
            return
    }

    public static void setLocalAddress(cz.msebera.android.httpclient.params.HttpParams r1, java.net.InetAddress r2) {
            java.lang.String r0 = "Parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.route.local-address"
            r1.setParameter(r0, r2)
            return
    }
}
