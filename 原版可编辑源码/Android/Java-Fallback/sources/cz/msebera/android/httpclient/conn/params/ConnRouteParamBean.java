package cz.msebera.android.httpclient.conn.params;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public class ConnRouteParamBean extends cz.msebera.android.httpclient.params.HttpAbstractParamBean {
    public ConnRouteParamBean(cz.msebera.android.httpclient.params.HttpParams r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public void setDefaultProxy(cz.msebera.android.httpclient.HttpHost r3) {
            r2 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r2.params
            java.lang.String r1 = "http.route.default-proxy"
            r0.setParameter(r1, r3)
            return
    }

    public void setForcedRoute(cz.msebera.android.httpclient.conn.routing.HttpRoute r3) {
            r2 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r2.params
            java.lang.String r1 = "http.route.forced-route"
            r0.setParameter(r1, r3)
            return
    }

    public void setLocalAddress(java.net.InetAddress r3) {
            r2 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r2.params
            java.lang.String r1 = "http.route.local-address"
            r0.setParameter(r1, r3)
            return
    }
}
