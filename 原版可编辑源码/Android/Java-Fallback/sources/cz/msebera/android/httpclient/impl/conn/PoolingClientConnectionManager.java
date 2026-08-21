package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.ThreadSafe
@java.lang.Deprecated
public class PoolingClientConnectionManager implements cz.msebera.android.httpclient.conn.ClientConnectionManager, cz.msebera.android.httpclient.pool.ConnPoolControl<cz.msebera.android.httpclient.conn.routing.HttpRoute> {
    private final cz.msebera.android.httpclient.conn.DnsResolver dnsResolver;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final cz.msebera.android.httpclient.conn.ClientConnectionOperator operator;
    private final cz.msebera.android.httpclient.impl.conn.HttpConnPool pool;
    private final cz.msebera.android.httpclient.conn.scheme.SchemeRegistry schemeRegistry;


    public PoolingClientConnectionManager() {
            r1 = this;
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r0 = cz.msebera.android.httpclient.impl.conn.SchemeRegistryFactory.createDefault()
            r1.<init>(r0)
            return
    }

    public PoolingClientConnectionManager(cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r4) {
            r3 = this;
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.MILLISECONDS
            r1 = -1
            r3.<init>(r4, r1, r0)
            return
    }

    public PoolingClientConnectionManager(cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r7, long r8, java.util.concurrent.TimeUnit r10) {
            r6 = this;
            cz.msebera.android.httpclient.impl.conn.SystemDefaultDnsResolver r5 = new cz.msebera.android.httpclient.impl.conn.SystemDefaultDnsResolver
            r5.<init>()
            r0 = r6
            r1 = r7
            r2 = r8
            r4 = r10
            r0.<init>(r1, r2, r4, r5)
            return
    }

    public PoolingClientConnectionManager(cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r9, long r10, java.util.concurrent.TimeUnit r12, cz.msebera.android.httpclient.conn.DnsResolver r13) {
            r8 = this;
            r8.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r8.getClass()
            r0.<init>(r1)
            r8.log = r0
            java.lang.String r0 = "Scheme registry"
            cz.msebera.android.httpclient.util.Args.notNull(r9, r0)
            java.lang.String r0 = "DNS resolver"
            cz.msebera.android.httpclient.util.Args.notNull(r13, r0)
            r8.schemeRegistry = r9
            r8.dnsResolver = r13
            cz.msebera.android.httpclient.conn.ClientConnectionOperator r9 = r8.createConnectionOperator(r9)
            r8.operator = r9
            cz.msebera.android.httpclient.impl.conn.HttpConnPool r9 = new cz.msebera.android.httpclient.impl.conn.HttpConnPool
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r8.log
            cz.msebera.android.httpclient.conn.ClientConnectionOperator r2 = r8.operator
            r3 = 2
            r4 = 20
            r0 = r9
            r5 = r10
            r7 = r12
            r0.<init>(r1, r2, r3, r4, r5, r7)
            r8.pool = r9
            return
    }

    public PoolingClientConnectionManager(cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r7, cz.msebera.android.httpclient.conn.DnsResolver r8) {
            r6 = this;
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.MILLISECONDS
            r2 = -1
            r0 = r6
            r1 = r7
            r5 = r8
            r0.<init>(r1, r2, r4, r5)
            return
    }

    private java.lang.String format(cz.msebera.android.httpclient.conn.routing.HttpRoute r3, java.lang.Object r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[route: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "]"
            r0.append(r3)
            if (r4 == 0) goto L1f
            java.lang.String r1 = "[state: "
            r0.append(r1)
            r0.append(r4)
            r0.append(r3)
        L1f:
            java.lang.String r3 = r0.toString()
            return r3
    }

    private java.lang.String format(cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[id: "
            r0.append(r1)
            java.lang.String r1 = r4.getId()
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r2 = "[route: "
            r0.append(r2)
            java.lang.Object r2 = r4.getRoute()
            r0.append(r2)
            r0.append(r1)
            java.lang.Object r4 = r4.getState()
            if (r4 == 0) goto L36
            java.lang.String r2 = "[state: "
            r0.append(r2)
            r0.append(r4)
            r0.append(r1)
        L36:
            java.lang.String r4 = r0.toString()
            return r4
    }

    private java.lang.String formatStats(cz.msebera.android.httpclient.conn.routing.HttpRoute r6) {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            cz.msebera.android.httpclient.impl.conn.HttpConnPool r1 = r5.pool
            cz.msebera.android.httpclient.pool.PoolStats r1 = r1.getTotalStats()
            cz.msebera.android.httpclient.impl.conn.HttpConnPool r2 = r5.pool
            cz.msebera.android.httpclient.pool.PoolStats r6 = r2.getStats(r6)
            java.lang.String r2 = "[total kept alive: "
            r0.append(r2)
            int r2 = r1.getAvailable()
            r0.append(r2)
            java.lang.String r2 = "; "
            r0.append(r2)
            java.lang.String r3 = "route allocated: "
            r0.append(r3)
            int r3 = r6.getLeased()
            int r4 = r6.getAvailable()
            int r3 = r3 + r4
            r0.append(r3)
            java.lang.String r3 = " of "
            r0.append(r3)
            int r6 = r6.getMax()
            r0.append(r6)
            r0.append(r2)
            java.lang.String r6 = "total allocated: "
            r0.append(r6)
            int r6 = r1.getLeased()
            int r2 = r1.getAvailable()
            int r6 = r6 + r2
            r0.append(r6)
            r0.append(r3)
            int r6 = r1.getMax()
            r0.append(r6)
            java.lang.String r6 = "]"
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            return r6
    }

    @Override
    public void closeExpiredConnections() {
            r2 = this;
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r2.log
            java.lang.String r1 = "Closing expired connections"
            r0.debug(r1)
            cz.msebera.android.httpclient.impl.conn.HttpConnPool r0 = r2.pool
            r0.closeExpired()
            return
    }

    @Override
    public void closeIdleConnections(long r4, java.util.concurrent.TimeUnit r6) {
            r3 = this;
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            boolean r0 = r0.isDebugEnabled()
            if (r0 == 0) goto L26
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Closing connections idle longer than "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r2 = " "
            r1.append(r2)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            r0.debug(r1)
        L26:
            cz.msebera.android.httpclient.impl.conn.HttpConnPool r0 = r3.pool
            r0.closeIdle(r4, r6)
            return
    }

    protected cz.msebera.android.httpclient.conn.ClientConnectionOperator createConnectionOperator(cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r3) {
            r2 = this;
            cz.msebera.android.httpclient.impl.conn.DefaultClientConnectionOperator r0 = new cz.msebera.android.httpclient.impl.conn.DefaultClientConnectionOperator
            cz.msebera.android.httpclient.conn.DnsResolver r1 = r2.dnsResolver
            r0.<init>(r3, r1)
            return r0
    }

    protected void finalize() throws java.lang.Throwable {
            r1 = this;
            r1.shutdown()     // Catch: java.lang.Throwable -> L7
            super.finalize()
            return
        L7:
            r0 = move-exception
            super.finalize()
            throw r0
    }

    @Override
    public int getDefaultMaxPerRoute() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.HttpConnPool r0 = r1.pool
            int r0 = r0.getDefaultMaxPerRoute()
            return r0
    }

    public int getMaxPerRoute(cz.msebera.android.httpclient.conn.routing.HttpRoute r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.HttpConnPool r0 = r1.pool
            int r2 = r0.getMaxPerRoute(r2)
            return r2
    }

    @Override
    public int getMaxPerRoute(cz.msebera.android.httpclient.conn.routing.HttpRoute r1) {
            r0 = this;
            cz.msebera.android.httpclient.conn.routing.HttpRoute r1 = (cz.msebera.android.httpclient.conn.routing.HttpRoute) r1
            int r1 = r0.getMaxPerRoute(r1)
            return r1
    }

    @Override
    public int getMaxTotal() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.HttpConnPool r0 = r1.pool
            int r0 = r0.getMaxTotal()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.conn.scheme.SchemeRegistry getSchemeRegistry() {
            r1 = this;
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r0 = r1.schemeRegistry
            return r0
    }

    public cz.msebera.android.httpclient.pool.PoolStats getStats(cz.msebera.android.httpclient.conn.routing.HttpRoute r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.HttpConnPool r0 = r1.pool
            cz.msebera.android.httpclient.pool.PoolStats r2 = r0.getStats(r2)
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.pool.PoolStats getStats(cz.msebera.android.httpclient.conn.routing.HttpRoute r1) {
            r0 = this;
            cz.msebera.android.httpclient.conn.routing.HttpRoute r1 = (cz.msebera.android.httpclient.conn.routing.HttpRoute) r1
            cz.msebera.android.httpclient.pool.PoolStats r1 = r0.getStats(r1)
            return r1
    }

    @Override
    public cz.msebera.android.httpclient.pool.PoolStats getTotalStats() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.HttpConnPool r0 = r1.pool
            cz.msebera.android.httpclient.pool.PoolStats r0 = r0.getTotalStats()
            return r0
    }

    cz.msebera.android.httpclient.conn.ManagedClientConnection leaseConnection(java.util.concurrent.Future<cz.msebera.android.httpclient.impl.conn.HttpPoolEntry> r1, long r2, java.util.concurrent.TimeUnit r4) throws java.lang.InterruptedException, cz.msebera.android.httpclient.conn.ConnectionPoolTimeoutException {
            r0 = this;
            java.lang.Object r2 = r1.get(r2, r4)     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r2 = (cz.msebera.android.httpclient.impl.conn.HttpPoolEntry) r2     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            if (r2 == 0) goto L53
            boolean r1 = r1.isCancelled()     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            if (r1 != 0) goto L53
            java.lang.Object r1 = r2.getConnection()     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            if (r1 == 0) goto L16
            r1 = 1
            goto L17
        L16:
            r1 = 0
        L17:
            java.lang.String r3 = "Pool entry with no connection"
            cz.msebera.android.httpclient.util.Asserts.check(r1, r3)     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r0.log     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            boolean r1 = r1.isDebugEnabled()     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            if (r1 == 0) goto L4b
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r0.log     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            r3.<init>()     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            java.lang.String r4 = "Connection leased: "
            r3.append(r4)     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            java.lang.String r4 = r0.format(r2)     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            r3.append(r4)     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            java.lang.Object r4 = r2.getRoute()     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            cz.msebera.android.httpclient.conn.routing.HttpRoute r4 = (cz.msebera.android.httpclient.conn.routing.HttpRoute) r4     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            java.lang.String r4 = r0.formatStats(r4)     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            r3.append(r4)     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            java.lang.String r3 = r3.toString()     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            r1.debug(r3)     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
        L4b:
            cz.msebera.android.httpclient.impl.conn.ManagedClientConnectionImpl r1 = new cz.msebera.android.httpclient.impl.conn.ManagedClientConnectionImpl     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            cz.msebera.android.httpclient.conn.ClientConnectionOperator r3 = r0.operator     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            r1.<init>(r0, r3, r2)     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            return r1
        L53:
            java.lang.InterruptedException r1 = new java.lang.InterruptedException     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            r1.<init>()     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
            throw r1     // Catch: java.util.concurrent.TimeoutException -> L59 java.util.concurrent.ExecutionException -> L61
        L59:
            cz.msebera.android.httpclient.conn.ConnectionPoolTimeoutException r1 = new cz.msebera.android.httpclient.conn.ConnectionPoolTimeoutException
            java.lang.String r2 = "Timeout waiting for connection from pool"
            r1.<init>(r2)
            throw r1
        L61:
            r1 = move-exception
            java.lang.Throwable r2 = r1.getCause()
            if (r2 != 0) goto L69
            goto L6a
        L69:
            r1 = r2
        L6a:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r0.log
            java.lang.String r3 = "Unexpected exception leasing connection from pool"
            r2.error(r3, r1)
            java.lang.InterruptedException r1 = new java.lang.InterruptedException
            r1.<init>()
            throw r1
    }

    @Override
    public void releaseConnection(cz.msebera.android.httpclient.conn.ManagedClientConnection r5, long r6, java.util.concurrent.TimeUnit r8) {
            r4 = this;
            boolean r0 = r5 instanceof cz.msebera.android.httpclient.impl.conn.ManagedClientConnectionImpl
            java.lang.String r1 = "Connection class mismatch, connection not obtained from this manager"
            cz.msebera.android.httpclient.util.Args.check(r0, r1)
            cz.msebera.android.httpclient.impl.conn.ManagedClientConnectionImpl r5 = (cz.msebera.android.httpclient.impl.conn.ManagedClientConnectionImpl) r5
            cz.msebera.android.httpclient.conn.ClientConnectionManager r0 = r5.getManager()
            if (r0 != r4) goto L11
            r0 = 1
            goto L12
        L11:
            r0 = 0
        L12:
            java.lang.String r1 = "Connection not obtained from this manager"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)
            monitor-enter(r5)
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r5.detach()     // Catch: java.lang.Throwable -> Le0
            if (r0 != 0) goto L20
            monitor-exit(r5)     // Catch: java.lang.Throwable -> Le0
            return
        L20:
            boolean r1 = r5.isOpen()     // Catch: java.lang.Throwable -> Ld5
            if (r1 == 0) goto L40
            boolean r1 = r5.isMarkedReusable()     // Catch: java.lang.Throwable -> Ld5
            if (r1 != 0) goto L40
            r5.shutdown()     // Catch: java.io.IOException -> L30 java.lang.Throwable -> Ld5
            goto L40
        L30:
            r1 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r4.log     // Catch: java.lang.Throwable -> Ld5
            boolean r2 = r2.isDebugEnabled()     // Catch: java.lang.Throwable -> Ld5
            if (r2 == 0) goto L40
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r4.log     // Catch: java.lang.Throwable -> Ld5
            java.lang.String r3 = "I/O exception shutting down released connection"
            r2.debug(r3, r1)     // Catch: java.lang.Throwable -> Ld5
        L40:
            boolean r1 = r5.isMarkedReusable()     // Catch: java.lang.Throwable -> Ld5
            if (r1 == 0) goto L9b
            if (r8 == 0) goto L4a
            r1 = r8
            goto L4c
        L4a:
            java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Throwable -> Ld5
        L4c:
            r0.updateExpiry(r6, r1)     // Catch: java.lang.Throwable -> Ld5
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r4.log     // Catch: java.lang.Throwable -> Ld5
            boolean r1 = r1.isDebugEnabled()     // Catch: java.lang.Throwable -> Ld5
            if (r1 == 0) goto L9b
            r1 = 0
            int r3 = (r6 > r1 ? 1 : (r6 == r1 ? 0 : -1))
            if (r3 <= 0) goto L77
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld5
            r1.<init>()     // Catch: java.lang.Throwable -> Ld5
            java.lang.String r2 = "for "
            r1.append(r2)     // Catch: java.lang.Throwable -> Ld5
            r1.append(r6)     // Catch: java.lang.Throwable -> Ld5
            java.lang.String r6 = " "
            r1.append(r6)     // Catch: java.lang.Throwable -> Ld5
            r1.append(r8)     // Catch: java.lang.Throwable -> Ld5
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Throwable -> Ld5
            goto L79
        L77:
            java.lang.String r6 = "indefinitely"
        L79:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r4.log     // Catch: java.lang.Throwable -> Ld5
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld5
            r8.<init>()     // Catch: java.lang.Throwable -> Ld5
            java.lang.String r1 = "Connection "
            r8.append(r1)     // Catch: java.lang.Throwable -> Ld5
            java.lang.String r1 = r4.format(r0)     // Catch: java.lang.Throwable -> Ld5
            r8.append(r1)     // Catch: java.lang.Throwable -> Ld5
            java.lang.String r1 = " can be kept alive "
            r8.append(r1)     // Catch: java.lang.Throwable -> Ld5
            r8.append(r6)     // Catch: java.lang.Throwable -> Ld5
            java.lang.String r6 = r8.toString()     // Catch: java.lang.Throwable -> Ld5
            r7.debug(r6)     // Catch: java.lang.Throwable -> Ld5
        L9b:
            cz.msebera.android.httpclient.impl.conn.HttpConnPool r6 = r4.pool     // Catch: java.lang.Throwable -> Le0
            boolean r7 = r5.isMarkedReusable()     // Catch: java.lang.Throwable -> Le0
            r6.release(r0, r7)     // Catch: java.lang.Throwable -> Le0
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r4.log     // Catch: java.lang.Throwable -> Le0
            boolean r6 = r6.isDebugEnabled()     // Catch: java.lang.Throwable -> Le0
            if (r6 == 0) goto Ld3
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r4.log     // Catch: java.lang.Throwable -> Le0
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le0
            r7.<init>()     // Catch: java.lang.Throwable -> Le0
            java.lang.String r8 = "Connection released: "
            r7.append(r8)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r8 = r4.format(r0)     // Catch: java.lang.Throwable -> Le0
            r7.append(r8)     // Catch: java.lang.Throwable -> Le0
            java.lang.Object r8 = r0.getRoute()     // Catch: java.lang.Throwable -> Le0
            cz.msebera.android.httpclient.conn.routing.HttpRoute r8 = (cz.msebera.android.httpclient.conn.routing.HttpRoute) r8     // Catch: java.lang.Throwable -> Le0
            java.lang.String r8 = r4.formatStats(r8)     // Catch: java.lang.Throwable -> Le0
            r7.append(r8)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> Le0
            r6.debug(r7)     // Catch: java.lang.Throwable -> Le0
        Ld3:
            monitor-exit(r5)     // Catch: java.lang.Throwable -> Le0
            return
        Ld5:
            r6 = move-exception
            cz.msebera.android.httpclient.impl.conn.HttpConnPool r7 = r4.pool     // Catch: java.lang.Throwable -> Le0
            boolean r8 = r5.isMarkedReusable()     // Catch: java.lang.Throwable -> Le0
            r7.release(r0, r8)     // Catch: java.lang.Throwable -> Le0
            throw r6     // Catch: java.lang.Throwable -> Le0
        Le0:
            r6 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> Le0
            throw r6
    }

    @Override
    public cz.msebera.android.httpclient.conn.ClientConnectionRequest requestConnection(cz.msebera.android.httpclient.conn.routing.HttpRoute r4, java.lang.Object r5) {
            r3 = this;
            java.lang.String r0 = "HTTP route"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            boolean r0 = r0.isDebugEnabled()
            if (r0 == 0) goto L2e
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Connection request: "
            r1.append(r2)
            java.lang.String r2 = r3.format(r4, r5)
            r1.append(r2)
            java.lang.String r2 = r3.formatStats(r4)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.debug(r1)
        L2e:
            cz.msebera.android.httpclient.impl.conn.HttpConnPool r0 = r3.pool
            java.util.concurrent.Future r4 = r0.lease(r4, r5)
            cz.msebera.android.httpclient.impl.conn.PoolingClientConnectionManager$1 r5 = new cz.msebera.android.httpclient.impl.conn.PoolingClientConnectionManager$1
            r5.<init>(r3, r4)
            return r5
    }

    @Override
    public void setDefaultMaxPerRoute(int r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.HttpConnPool r0 = r1.pool
            r0.setDefaultMaxPerRoute(r2)
            return
    }

    public void setMaxPerRoute(cz.msebera.android.httpclient.conn.routing.HttpRoute r2, int r3) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.HttpConnPool r0 = r1.pool
            r0.setMaxPerRoute(r2, r3)
            return
    }

    @Override
    public void setMaxPerRoute(cz.msebera.android.httpclient.conn.routing.HttpRoute r1, int r2) {
            r0 = this;
            cz.msebera.android.httpclient.conn.routing.HttpRoute r1 = (cz.msebera.android.httpclient.conn.routing.HttpRoute) r1
            r0.setMaxPerRoute(r1, r2)
            return
    }

    @Override
    public void setMaxTotal(int r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.HttpConnPool r0 = r1.pool
            r0.setMaxTotal(r2)
            return
    }

    @Override
    public void shutdown() {
            r3 = this;
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            java.lang.String r1 = "Connection manager is shutting down"
            r0.debug(r1)
            cz.msebera.android.httpclient.impl.conn.HttpConnPool r0 = r3.pool     // Catch: java.io.IOException -> Ld
            r0.shutdown()     // Catch: java.io.IOException -> Ld
            goto L15
        Ld:
            r0 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r3.log
            java.lang.String r2 = "I/O exception shutting down connection manager"
            r1.debug(r2, r0)
        L15:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            java.lang.String r1 = "Connection manager shut down"
            r0.debug(r1)
            return
    }
}
