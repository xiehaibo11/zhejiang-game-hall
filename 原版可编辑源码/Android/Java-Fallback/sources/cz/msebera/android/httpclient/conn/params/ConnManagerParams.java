package cz.msebera.android.httpclient.conn.params;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public final class ConnManagerParams implements cz.msebera.android.httpclient.conn.params.ConnManagerPNames {
    private static final cz.msebera.android.httpclient.conn.params.ConnPerRoute DEFAULT_CONN_PER_ROUTE = null;
    public static final int DEFAULT_MAX_TOTAL_CONNECTIONS = 20;


    static {
            cz.msebera.android.httpclient.conn.params.ConnManagerParams$1 r0 = new cz.msebera.android.httpclient.conn.params.ConnManagerParams$1
            r0.<init>()
            cz.msebera.android.httpclient.conn.params.ConnManagerParams.DEFAULT_CONN_PER_ROUTE = r0
            return
    }

    public ConnManagerParams() {
            r0 = this;
            r0.<init>()
            return
    }

    public static cz.msebera.android.httpclient.conn.params.ConnPerRoute getMaxConnectionsPerRoute(cz.msebera.android.httpclient.params.HttpParams r1) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.conn-manager.max-per-route"
            java.lang.Object r1 = r1.getParameter(r0)
            cz.msebera.android.httpclient.conn.params.ConnPerRoute r1 = (cz.msebera.android.httpclient.conn.params.ConnPerRoute) r1
            if (r1 != 0) goto L11
            cz.msebera.android.httpclient.conn.params.ConnPerRoute r1 = cz.msebera.android.httpclient.conn.params.ConnManagerParams.DEFAULT_CONN_PER_ROUTE
        L11:
            return r1
    }

    public static int getMaxTotalConnections(cz.msebera.android.httpclient.params.HttpParams r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "http.conn-manager.max-total"
            r1 = 20
            int r2 = r2.getIntParameter(r0, r1)
            return r2
    }

    @java.lang.Deprecated
    public static long getTimeout(cz.msebera.android.httpclient.params.HttpParams r3) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "http.conn-manager.timeout"
            r1 = 0
            long r0 = r3.getLongParameter(r0, r1)
            return r0
    }

    public static void setMaxConnectionsPerRoute(cz.msebera.android.httpclient.params.HttpParams r1, cz.msebera.android.httpclient.conn.params.ConnPerRoute r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.conn-manager.max-per-route"
            r1.setParameter(r0, r2)
            return
    }

    public static void setMaxTotalConnections(cz.msebera.android.httpclient.params.HttpParams r1, int r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.conn-manager.max-total"
            r1.setIntParameter(r0, r2)
            return
    }

    @java.lang.Deprecated
    public static void setTimeout(cz.msebera.android.httpclient.params.HttpParams r1, long r2) {
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            java.lang.String r0 = "http.conn-manager.timeout"
            r1.setLongParameter(r0, r2)
            return
    }
}
