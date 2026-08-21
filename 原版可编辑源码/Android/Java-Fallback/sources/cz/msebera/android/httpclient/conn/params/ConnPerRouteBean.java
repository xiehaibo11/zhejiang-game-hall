package cz.msebera.android.httpclient.conn.params;

@cz.msebera.android.httpclient.annotation.ThreadSafe
@java.lang.Deprecated
public final class ConnPerRouteBean implements cz.msebera.android.httpclient.conn.params.ConnPerRoute {
    public static final int DEFAULT_MAX_CONNECTIONS_PER_ROUTE = 2;
    private volatile int defaultMax;
    private final java.util.concurrent.ConcurrentHashMap<cz.msebera.android.httpclient.conn.routing.HttpRoute, java.lang.Integer> maxPerHostMap;

    public ConnPerRouteBean() {
            r1 = this;
            r0 = 2
            r1.<init>(r0)
            return
    }

    public ConnPerRouteBean(int r2) {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.maxPerHostMap = r0
            r1.setDefaultMaxPerRoute(r2)
            return
    }

    public int getDefaultMax() {
            r1 = this;
            int r0 = r1.defaultMax
            return r0
    }

    public int getDefaultMaxPerRoute() {
            r1 = this;
            int r0 = r1.defaultMax
            return r0
    }

    @Override
    public int getMaxForRoute(cz.msebera.android.httpclient.conn.routing.HttpRoute r2) {
            r1 = this;
            java.lang.String r0 = "HTTP route"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.util.concurrent.ConcurrentHashMap<cz.msebera.android.httpclient.conn.routing.HttpRoute, java.lang.Integer> r0 = r1.maxPerHostMap
            java.lang.Object r2 = r0.get(r2)
            java.lang.Integer r2 = (java.lang.Integer) r2
            if (r2 == 0) goto L14
            int r2 = r2.intValue()
            return r2
        L14:
            int r2 = r1.defaultMax
            return r2
    }

    public void setDefaultMaxPerRoute(int r2) {
            r1 = this;
            java.lang.String r0 = "Default max per route"
            cz.msebera.android.httpclient.util.Args.positive(r2, r0)
            r1.defaultMax = r2
            return
    }

    public void setMaxForRoute(cz.msebera.android.httpclient.conn.routing.HttpRoute r2, int r3) {
            r1 = this;
            java.lang.String r0 = "HTTP route"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Max per route"
            cz.msebera.android.httpclient.util.Args.positive(r3, r0)
            java.util.concurrent.ConcurrentHashMap<cz.msebera.android.httpclient.conn.routing.HttpRoute, java.lang.Integer> r0 = r1.maxPerHostMap
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r0.put(r2, r3)
            return
    }

    public void setMaxForRoutes(java.util.Map<cz.msebera.android.httpclient.conn.routing.HttpRoute, java.lang.Integer> r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.concurrent.ConcurrentHashMap<cz.msebera.android.httpclient.conn.routing.HttpRoute, java.lang.Integer> r0 = r1.maxPerHostMap
            r0.clear()
            java.util.concurrent.ConcurrentHashMap<cz.msebera.android.httpclient.conn.routing.HttpRoute, java.lang.Integer> r0 = r1.maxPerHostMap
            r0.putAll(r2)
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<cz.msebera.android.httpclient.conn.routing.HttpRoute, java.lang.Integer> r0 = r1.maxPerHostMap
            java.lang.String r0 = r0.toString()
            return r0
    }
}
