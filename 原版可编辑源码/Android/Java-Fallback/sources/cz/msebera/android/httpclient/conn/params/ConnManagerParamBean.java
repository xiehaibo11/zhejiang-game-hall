package cz.msebera.android.httpclient.conn.params;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public class ConnManagerParamBean extends cz.msebera.android.httpclient.params.HttpAbstractParamBean {
    public ConnManagerParamBean(cz.msebera.android.httpclient.params.HttpParams r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public void setConnectionsPerRoute(cz.msebera.android.httpclient.conn.params.ConnPerRouteBean r3) {
            r2 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r2.params
            java.lang.String r1 = "http.conn-manager.max-per-route"
            r0.setParameter(r1, r3)
            return
    }

    public void setMaxTotalConnections(int r3) {
            r2 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r2.params
            java.lang.String r1 = "http.conn-manager.max-total"
            r0.setIntParameter(r1, r3)
            return
    }

    public void setTimeout(long r3) {
            r2 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r2.params
            java.lang.String r1 = "http.conn-manager.timeout"
            r0.setLongParameter(r1, r3)
            return
    }
}
