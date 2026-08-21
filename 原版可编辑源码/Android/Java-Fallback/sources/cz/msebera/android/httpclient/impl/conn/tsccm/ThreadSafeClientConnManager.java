package cz.msebera.android.httpclient.impl.conn.tsccm;

@cz.msebera.android.httpclient.annotation.ThreadSafe
@java.lang.Deprecated
public class ThreadSafeClientConnManager implements cz.msebera.android.httpclient.conn.ClientConnectionManager {
    protected final cz.msebera.android.httpclient.conn.ClientConnectionOperator connOperator;
    protected final cz.msebera.android.httpclient.conn.params.ConnPerRouteBean connPerRoute;
    protected final cz.msebera.android.httpclient.impl.conn.tsccm.AbstractConnPool connectionPool;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    protected final cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute pool;
    protected final cz.msebera.android.httpclient.conn.scheme.SchemeRegistry schemeRegistry;


    public ThreadSafeClientConnManager() {
            r1 = this;
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r0 = cz.msebera.android.httpclient.impl.conn.SchemeRegistryFactory.createDefault()
            r1.<init>(r0)
            return
    }

    public ThreadSafeClientConnManager(cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r4) {
            r3 = this;
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.MILLISECONDS
            r1 = -1
            r3.<init>(r4, r1, r0)
            return
    }

    public ThreadSafeClientConnManager(cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r7, long r8, java.util.concurrent.TimeUnit r10) {
            r6 = this;
            cz.msebera.android.httpclient.conn.params.ConnPerRouteBean r5 = new cz.msebera.android.httpclient.conn.params.ConnPerRouteBean
            r5.<init>()
            r0 = r6
            r1 = r7
            r2 = r8
            r4 = r10
            r0.<init>(r1, r2, r4, r5)
            return
    }

    public ThreadSafeClientConnManager(cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r3, long r4, java.util.concurrent.TimeUnit r6, cz.msebera.android.httpclient.conn.params.ConnPerRouteBean r7) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "Scheme registry"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            r2.schemeRegistry = r3
            r2.connPerRoute = r7
            cz.msebera.android.httpclient.conn.ClientConnectionOperator r3 = r2.createConnectionOperator(r3)
            r2.connOperator = r3
            cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute r3 = r2.createConnectionPool(r4, r6)
            r2.pool = r3
            cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute r3 = r2.pool
            r2.connectionPool = r3
            return
    }

    @java.lang.Deprecated
    public ThreadSafeClientConnManager(cz.msebera.android.httpclient.params.HttpParams r3, cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r4) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "Scheme registry"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            r2.schemeRegistry = r4
            cz.msebera.android.httpclient.conn.params.ConnPerRouteBean r0 = new cz.msebera.android.httpclient.conn.params.ConnPerRouteBean
            r0.<init>()
            r2.connPerRoute = r0
            cz.msebera.android.httpclient.conn.ClientConnectionOperator r4 = r2.createConnectionOperator(r4)
            r2.connOperator = r4
            cz.msebera.android.httpclient.impl.conn.tsccm.AbstractConnPool r3 = r2.createConnectionPool(r3)
            cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute r3 = (cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute) r3
            r2.pool = r3
            cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute r3 = r2.pool
            r2.connectionPool = r3
            return
    }

    @Override
    public void closeExpiredConnections() {
            r2 = this;
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r2.log
            java.lang.String r1 = "Closing expired connections"
            r0.debug(r1)
            cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute r0 = r2.pool
            r0.closeExpiredConnections()
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
            cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute r0 = r3.pool
            r0.closeIdleConnections(r4, r6)
            return
    }

    protected cz.msebera.android.httpclient.conn.ClientConnectionOperator createConnectionOperator(cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.DefaultClientConnectionOperator r0 = new cz.msebera.android.httpclient.impl.conn.DefaultClientConnectionOperator
            r0.<init>(r2)
            return r0
    }

    @java.lang.Deprecated
    protected cz.msebera.android.httpclient.impl.conn.tsccm.AbstractConnPool createConnectionPool(cz.msebera.android.httpclient.params.HttpParams r3) {
            r2 = this;
            cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute r0 = new cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute
            cz.msebera.android.httpclient.conn.ClientConnectionOperator r1 = r2.connOperator
            r0.<init>(r1, r3)
            return r0
    }

    protected cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute createConnectionPool(long r9, java.util.concurrent.TimeUnit r11) {
            r8 = this;
            cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute r7 = new cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute
            cz.msebera.android.httpclient.conn.ClientConnectionOperator r1 = r8.connOperator
            cz.msebera.android.httpclient.conn.params.ConnPerRouteBean r2 = r8.connPerRoute
            r3 = 20
            r0 = r7
            r4 = r9
            r6 = r11
            r0.<init>(r1, r2, r3, r4, r6)
            return r7
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

    public int getConnectionsInPool() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute r0 = r1.pool
            int r0 = r0.getConnectionsInPool()
            return r0
    }

    public int getConnectionsInPool(cz.msebera.android.httpclient.conn.routing.HttpRoute r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute r0 = r1.pool
            int r2 = r0.getConnectionsInPool(r2)
            return r2
    }

    public int getDefaultMaxPerRoute() {
            r1 = this;
            cz.msebera.android.httpclient.conn.params.ConnPerRouteBean r0 = r1.connPerRoute
            int r0 = r0.getDefaultMaxPerRoute()
            return r0
    }

    public int getMaxForRoute(cz.msebera.android.httpclient.conn.routing.HttpRoute r2) {
            r1 = this;
            cz.msebera.android.httpclient.conn.params.ConnPerRouteBean r0 = r1.connPerRoute
            int r2 = r0.getMaxForRoute(r2)
            return r2
    }

    public int getMaxTotal() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute r0 = r1.pool
            int r0 = r0.getMaxTotalConnections()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.conn.scheme.SchemeRegistry getSchemeRegistry() {
            r1 = this;
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r0 = r1.schemeRegistry
            return r0
    }

    @Override
    public void releaseConnection(cz.msebera.android.httpclient.conn.ManagedClientConnection r8, long r9, java.util.concurrent.TimeUnit r11) {
            r7 = this;
            boolean r0 = r8 instanceof cz.msebera.android.httpclient.impl.conn.tsccm.BasicPooledConnAdapter
            java.lang.String r1 = "Connection class mismatch, connection not obtained from this manager"
            cz.msebera.android.httpclient.util.Args.check(r0, r1)
            cz.msebera.android.httpclient.impl.conn.tsccm.BasicPooledConnAdapter r8 = (cz.msebera.android.httpclient.impl.conn.tsccm.BasicPooledConnAdapter) r8
            cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry r0 = r8.getPoolEntry()
            if (r0 == 0) goto L1d
            cz.msebera.android.httpclient.conn.ClientConnectionManager r0 = r8.getManager()
            if (r0 != r7) goto L17
            r0 = 1
            goto L18
        L17:
            r0 = 0
        L18:
            java.lang.String r1 = "Connection not obtained from this manager"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)
        L1d:
            monitor-enter(r8)
            cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry r0 = r8.getPoolEntry()     // Catch: java.lang.Throwable -> Lbf
            r2 = r0
            cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r2 = (cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry) r2     // Catch: java.lang.Throwable -> Lbf
            if (r2 != 0) goto L29
            monitor-exit(r8)     // Catch: java.lang.Throwable -> Lbf
            return
        L29:
            boolean r0 = r8.isOpen()     // Catch: java.lang.Throwable -> L60 java.io.IOException -> L62
            if (r0 == 0) goto L38
            boolean r0 = r8.isMarkedReusable()     // Catch: java.lang.Throwable -> L60 java.io.IOException -> L62
            if (r0 != 0) goto L38
            r8.shutdown()     // Catch: java.lang.Throwable -> L60 java.io.IOException -> L62
        L38:
            boolean r3 = r8.isMarkedReusable()     // Catch: java.lang.Throwable -> Lbf
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r7.log     // Catch: java.lang.Throwable -> Lbf
            boolean r0 = r0.isDebugEnabled()     // Catch: java.lang.Throwable -> Lbf
            if (r0 == 0) goto L55
            if (r3 == 0) goto L4e
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r7.log     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r1 = "Released connection is reusable."
            r0.debug(r1)     // Catch: java.lang.Throwable -> Lbf
            goto L55
        L4e:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r7.log     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r1 = "Released connection is not reusable."
            r0.debug(r1)     // Catch: java.lang.Throwable -> Lbf
        L55:
            r8.detach()     // Catch: java.lang.Throwable -> Lbf
            cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute r1 = r7.pool     // Catch: java.lang.Throwable -> Lbf
        L5a:
            r4 = r9
            r6 = r11
            r1.freeEntry(r2, r3, r4, r6)     // Catch: java.lang.Throwable -> Lbf
            goto L95
        L60:
            r0 = move-exception
            goto L97
        L62:
            r0 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r7.log     // Catch: java.lang.Throwable -> L60
            boolean r1 = r1.isDebugEnabled()     // Catch: java.lang.Throwable -> L60
            if (r1 == 0) goto L72
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r7.log     // Catch: java.lang.Throwable -> L60
            java.lang.String r3 = "Exception shutting down released connection."
            r1.debug(r3, r0)     // Catch: java.lang.Throwable -> L60
        L72:
            boolean r3 = r8.isMarkedReusable()     // Catch: java.lang.Throwable -> Lbf
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r7.log     // Catch: java.lang.Throwable -> Lbf
            boolean r0 = r0.isDebugEnabled()     // Catch: java.lang.Throwable -> Lbf
            if (r0 == 0) goto L8f
            if (r3 == 0) goto L88
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r7.log     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r1 = "Released connection is reusable."
            r0.debug(r1)     // Catch: java.lang.Throwable -> Lbf
            goto L8f
        L88:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r7.log     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r1 = "Released connection is not reusable."
            r0.debug(r1)     // Catch: java.lang.Throwable -> Lbf
        L8f:
            r8.detach()     // Catch: java.lang.Throwable -> Lbf
            cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute r1 = r7.pool     // Catch: java.lang.Throwable -> Lbf
            goto L5a
        L95:
            monitor-exit(r8)     // Catch: java.lang.Throwable -> Lbf
            return
        L97:
            boolean r3 = r8.isMarkedReusable()     // Catch: java.lang.Throwable -> Lbf
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r7.log     // Catch: java.lang.Throwable -> Lbf
            boolean r1 = r1.isDebugEnabled()     // Catch: java.lang.Throwable -> Lbf
            if (r1 == 0) goto Lb4
            if (r3 == 0) goto Lad
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r7.log     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r4 = "Released connection is reusable."
            r1.debug(r4)     // Catch: java.lang.Throwable -> Lbf
            goto Lb4
        Lad:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r7.log     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r4 = "Released connection is not reusable."
            r1.debug(r4)     // Catch: java.lang.Throwable -> Lbf
        Lb4:
            r8.detach()     // Catch: java.lang.Throwable -> Lbf
            cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute r1 = r7.pool     // Catch: java.lang.Throwable -> Lbf
            r4 = r9
            r6 = r11
            r1.freeEntry(r2, r3, r4, r6)     // Catch: java.lang.Throwable -> Lbf
            throw r0     // Catch: java.lang.Throwable -> Lbf
        Lbf:
            r9 = move-exception
            monitor-exit(r8)     // Catch: java.lang.Throwable -> Lbf
            throw r9
    }

    @Override
    public cz.msebera.android.httpclient.conn.ClientConnectionRequest requestConnection(cz.msebera.android.httpclient.conn.routing.HttpRoute r2, java.lang.Object r3) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute r0 = r1.pool
            cz.msebera.android.httpclient.impl.conn.tsccm.PoolEntryRequest r3 = r0.requestPoolEntry(r2, r3)
            cz.msebera.android.httpclient.impl.conn.tsccm.ThreadSafeClientConnManager$1 r0 = new cz.msebera.android.httpclient.impl.conn.tsccm.ThreadSafeClientConnManager$1
            r0.<init>(r1, r3, r2)
            return r0
    }

    public void setDefaultMaxPerRoute(int r2) {
            r1 = this;
            cz.msebera.android.httpclient.conn.params.ConnPerRouteBean r0 = r1.connPerRoute
            r0.setDefaultMaxPerRoute(r2)
            return
    }

    public void setMaxForRoute(cz.msebera.android.httpclient.conn.routing.HttpRoute r2, int r3) {
            r1 = this;
            cz.msebera.android.httpclient.conn.params.ConnPerRouteBean r0 = r1.connPerRoute
            r0.setMaxForRoute(r2, r3)
            return
    }

    public void setMaxTotal(int r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute r0 = r1.pool
            r0.setMaxTotalConnections(r2)
            return
    }

    @Override
    public void shutdown() {
            r2 = this;
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r2.log
            java.lang.String r1 = "Shutting down"
            r0.debug(r1)
            cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute r0 = r2.pool
            r0.shutdown()
            return
    }
}
