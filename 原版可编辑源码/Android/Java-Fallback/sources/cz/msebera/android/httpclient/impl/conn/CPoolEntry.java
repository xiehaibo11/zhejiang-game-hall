package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.ThreadSafe
class CPoolEntry extends cz.msebera.android.httpclient.pool.PoolEntry<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection> {
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private volatile boolean routeComplete;

    public CPoolEntry(cz.msebera.android.httpclient.extras.HttpClientAndroidLog r8, java.lang.String r9, cz.msebera.android.httpclient.conn.routing.HttpRoute r10, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r11, long r12, java.util.concurrent.TimeUnit r14) {
            r7 = this;
            r0 = r7
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r6 = r14
            r0.<init>(r1, r2, r3, r4, r6)
            r7.log = r8
            return
    }

    @Override
    public void close() {
            r3 = this;
            r3.closeConnection()     // Catch: java.io.IOException -> L4
            goto Lc
        L4:
            r0 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r3.log
            java.lang.String r2 = "I/O error closing connection"
            r1.debug(r2, r0)
        Lc:
            return
    }

    public void closeConnection() throws java.io.IOException {
            r1 = this;
            java.lang.Object r0 = r1.getConnection()
            cz.msebera.android.httpclient.HttpClientConnection r0 = (cz.msebera.android.httpclient.HttpClientConnection) r0
            r0.close()
            return
    }

    @Override
    public boolean isClosed() {
            r1 = this;
            java.lang.Object r0 = r1.getConnection()
            cz.msebera.android.httpclient.HttpClientConnection r0 = (cz.msebera.android.httpclient.HttpClientConnection) r0
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

    public boolean isRouteComplete() {
            r1 = this;
            boolean r0 = r1.routeComplete
            return r0
    }

    public void markRouteComplete() {
            r1 = this;
            r0 = 1
            r1.routeComplete = r0
            return
    }

    public void shutdownConnection() throws java.io.IOException {
            r1 = this;
            java.lang.Object r0 = r1.getConnection()
            cz.msebera.android.httpclient.HttpClientConnection r0 = (cz.msebera.android.httpclient.HttpClientConnection) r0
            r0.shutdown()
            return
    }
}
