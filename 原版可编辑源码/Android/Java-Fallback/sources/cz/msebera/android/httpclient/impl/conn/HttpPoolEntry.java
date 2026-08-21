package cz.msebera.android.httpclient.impl.conn;

@java.lang.Deprecated
class HttpPoolEntry extends cz.msebera.android.httpclient.pool.PoolEntry<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.OperatedClientConnection> {
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final cz.msebera.android.httpclient.conn.routing.RouteTracker tracker;

    public HttpPoolEntry(cz.msebera.android.httpclient.extras.HttpClientAndroidLog r8, java.lang.String r9, cz.msebera.android.httpclient.conn.routing.HttpRoute r10, cz.msebera.android.httpclient.conn.OperatedClientConnection r11, long r12, java.util.concurrent.TimeUnit r14) {
            r7 = this;
            r0 = r7
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r6 = r14
            r0.<init>(r1, r2, r3, r4, r6)
            r7.log = r8
            cz.msebera.android.httpclient.conn.routing.RouteTracker r8 = new cz.msebera.android.httpclient.conn.routing.RouteTracker
            r8.<init>(r10)
            r7.tracker = r8
            return
    }

    @Override
    public void close() {
            r3 = this;
            java.lang.Object r0 = r3.getConnection()
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = (cz.msebera.android.httpclient.conn.OperatedClientConnection) r0
            r0.close()     // Catch: java.io.IOException -> La
            goto L12
        La:
            r0 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r3.log
            java.lang.String r2 = "I/O error closing connection"
            r1.debug(r2, r0)
        L12:
            return
    }

    cz.msebera.android.httpclient.conn.routing.HttpRoute getEffectiveRoute() {
            r1 = this;
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = r1.tracker
            cz.msebera.android.httpclient.conn.routing.HttpRoute r0 = r0.toRoute()
            return r0
    }

    cz.msebera.android.httpclient.conn.routing.HttpRoute getPlannedRoute() {
            r1 = this;
            java.lang.Object r0 = r1.getRoute()
            cz.msebera.android.httpclient.conn.routing.HttpRoute r0 = (cz.msebera.android.httpclient.conn.routing.HttpRoute) r0
            return r0
    }

    cz.msebera.android.httpclient.conn.routing.RouteTracker getTracker() {
            r1 = this;
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = r1.tracker
            return r0
    }

    @Override
    public boolean isClosed() {
            r1 = this;
            java.lang.Object r0 = r1.getConnection()
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = (cz.msebera.android.httpclient.conn.OperatedClientConnection) r0
            boolean r0 = r0.isOpen()
            r0 = r0 ^ 1
            return r0
    }

    @Override
    public boolean isExpired(long r5) {
            r4 = this;
            boolean r5 = super.isExpired(r5)
            if (r5 == 0) goto L35
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r4.log
            boolean r6 = r6.isDebugEnabled()
            if (r6 == 0) goto L35
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r4.log
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Connection "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = " expired @ "
            r0.append(r1)
            java.util.Date r1 = new java.util.Date
            long r2 = r4.getExpiry()
            r1.<init>(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.debug(r0)
        L35:
            return r5
    }
}
