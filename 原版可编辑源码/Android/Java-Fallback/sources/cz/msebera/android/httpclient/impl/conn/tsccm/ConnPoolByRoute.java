package cz.msebera.android.httpclient.impl.conn.tsccm;

@java.lang.Deprecated
public class ConnPoolByRoute extends cz.msebera.android.httpclient.impl.conn.tsccm.AbstractConnPool {
    protected final cz.msebera.android.httpclient.conn.params.ConnPerRoute connPerRoute;
    private final long connTTL;
    private final java.util.concurrent.TimeUnit connTTLTimeUnit;
    protected final java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> freeConnections;
    protected final java.util.Set<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> leasedConnections;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    protected volatile int maxTotalConnections;
    protected volatile int numConnections;
    protected final cz.msebera.android.httpclient.conn.ClientConnectionOperator operator;
    private final java.util.concurrent.locks.Lock poolLock;
    protected final java.util.Map<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool> routeToPool;
    protected volatile boolean shutdown;
    protected final java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread> waitingThreads;


    public ConnPoolByRoute(cz.msebera.android.httpclient.conn.ClientConnectionOperator r8, cz.msebera.android.httpclient.conn.params.ConnPerRoute r9, int r10) {
            r7 = this;
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.MILLISECONDS
            r4 = -1
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r0.<init>(r1, r2, r3, r4, r6)
            return
    }

    public ConnPoolByRoute(cz.msebera.android.httpclient.conn.ClientConnectionOperator r3, cz.msebera.android.httpclient.conn.params.ConnPerRoute r4, int r5, long r6, java.util.concurrent.TimeUnit r8) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            java.lang.String r0 = "Connection operator"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "Connections per route"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.util.concurrent.locks.Lock r0 = r2.poolLock
            r2.poolLock = r0
            java.util.Set<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r0 = r2.leasedConnections
            r2.leasedConnections = r0
            r2.operator = r3
            r2.connPerRoute = r4
            r2.maxTotalConnections = r5
            java.util.Queue r3 = r2.createFreeConnQueue()
            r2.freeConnections = r3
            java.util.Queue r3 = r2.createWaitingThreadQueue()
            r2.waitingThreads = r3
            java.util.Map r3 = r2.createRouteToPoolMap()
            r2.routeToPool = r3
            r2.connTTL = r6
            r2.connTTLTimeUnit = r8
            return
    }

    @java.lang.Deprecated
    public ConnPoolByRoute(cz.msebera.android.httpclient.conn.ClientConnectionOperator r2, cz.msebera.android.httpclient.params.HttpParams r3) {
            r1 = this;
            cz.msebera.android.httpclient.conn.params.ConnPerRoute r0 = cz.msebera.android.httpclient.conn.params.ConnManagerParams.getMaxConnectionsPerRoute(r3)
            int r3 = cz.msebera.android.httpclient.conn.params.ConnManagerParams.getMaxTotalConnections(r3)
            r1.<init>(r2, r0, r3)
            return
    }

    static java.util.concurrent.locks.Lock access$000(cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute r0) {
            java.util.concurrent.locks.Lock r0 = r0.poolLock
            return r0
    }

    private void closeConnection(cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r3) {
            r2 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r3 = r3.getConnection()
            if (r3 == 0) goto L12
            r3.close()     // Catch: java.io.IOException -> La
            goto L12
        La:
            r3 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r2.log
            java.lang.String r1 = "I/O error closing connection"
            r0.debug(r1, r3)
        L12:
            return
    }

    @Override
    public void closeExpiredConnections() {
            r9 = this;
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r9.log
            java.lang.String r1 = "Closing expired connections"
            r0.debug(r1)
            long r0 = java.lang.System.currentTimeMillis()
            java.util.concurrent.locks.Lock r2 = r9.poolLock
            r2.lock()
            java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r2 = r9.freeConnections     // Catch: java.lang.Throwable -> L5c
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L5c
        L16:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L5c
            if (r3 == 0) goto L56
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L5c
            cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r3 = (cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry) r3     // Catch: java.lang.Throwable -> L5c
            boolean r4 = r3.isExpired(r0)     // Catch: java.lang.Throwable -> L5c
            if (r4 == 0) goto L16
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r9.log     // Catch: java.lang.Throwable -> L5c
            boolean r4 = r4.isDebugEnabled()     // Catch: java.lang.Throwable -> L5c
            if (r4 == 0) goto L4f
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r9.log     // Catch: java.lang.Throwable -> L5c
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5c
            r5.<init>()     // Catch: java.lang.Throwable -> L5c
            java.lang.String r6 = "Closing connection expired @ "
            r5.append(r6)     // Catch: java.lang.Throwable -> L5c
            java.util.Date r6 = new java.util.Date     // Catch: java.lang.Throwable -> L5c
            long r7 = r3.getExpiry()     // Catch: java.lang.Throwable -> L5c
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L5c
            r5.append(r6)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L5c
            r4.debug(r5)     // Catch: java.lang.Throwable -> L5c
        L4f:
            r2.remove()     // Catch: java.lang.Throwable -> L5c
            r9.deleteEntry(r3)     // Catch: java.lang.Throwable -> L5c
            goto L16
        L56:
            java.util.concurrent.locks.Lock r0 = r9.poolLock
            r0.unlock()
            return
        L5c:
            r0 = move-exception
            java.util.concurrent.locks.Lock r1 = r9.poolLock
            r1.unlock()
            throw r0
    }

    @Override
    public void closeIdleConnections(long r7, java.util.concurrent.TimeUnit r9) {
            r6 = this;
            java.lang.String r0 = "Time unit"
            cz.msebera.android.httpclient.util.Args.notNull(r9, r0)
            r0 = 0
            int r2 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r2 <= 0) goto Lc
            goto Ld
        Lc:
            r7 = r0
        Ld:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r6.log
            boolean r0 = r0.isDebugEnabled()
            if (r0 == 0) goto L33
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r6.log
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Closing connections idle longer than "
            r1.append(r2)
            r1.append(r7)
            java.lang.String r2 = " "
            r1.append(r2)
            r1.append(r9)
            java.lang.String r1 = r1.toString()
            r0.debug(r1)
        L33:
            long r0 = java.lang.System.currentTimeMillis()
            long r7 = r9.toMillis(r7)
            long r0 = r0 - r7
            java.util.concurrent.locks.Lock r7 = r6.poolLock
            r7.lock()
            java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r7 = r6.freeConnections     // Catch: java.lang.Throwable -> L8f
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Throwable -> L8f
        L47:
            boolean r8 = r7.hasNext()     // Catch: java.lang.Throwable -> L8f
            if (r8 == 0) goto L89
            java.lang.Object r8 = r7.next()     // Catch: java.lang.Throwable -> L8f
            cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r8 = (cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry) r8     // Catch: java.lang.Throwable -> L8f
            long r2 = r8.getUpdated()     // Catch: java.lang.Throwable -> L8f
            int r9 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r9 > 0) goto L47
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r9 = r6.log     // Catch: java.lang.Throwable -> L8f
            boolean r9 = r9.isDebugEnabled()     // Catch: java.lang.Throwable -> L8f
            if (r9 == 0) goto L82
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r9 = r6.log     // Catch: java.lang.Throwable -> L8f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8f
            r2.<init>()     // Catch: java.lang.Throwable -> L8f
            java.lang.String r3 = "Closing connection last used @ "
            r2.append(r3)     // Catch: java.lang.Throwable -> L8f
            java.util.Date r3 = new java.util.Date     // Catch: java.lang.Throwable -> L8f
            long r4 = r8.getUpdated()     // Catch: java.lang.Throwable -> L8f
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L8f
            r2.append(r3)     // Catch: java.lang.Throwable -> L8f
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L8f
            r9.debug(r2)     // Catch: java.lang.Throwable -> L8f
        L82:
            r7.remove()     // Catch: java.lang.Throwable -> L8f
            r6.deleteEntry(r8)     // Catch: java.lang.Throwable -> L8f
            goto L47
        L89:
            java.util.concurrent.locks.Lock r7 = r6.poolLock
            r7.unlock()
            return
        L8f:
            r7 = move-exception
            java.util.concurrent.locks.Lock r8 = r6.poolLock
            r8.unlock()
            throw r7
    }

    protected cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry createEntry(cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool r9, cz.msebera.android.httpclient.conn.ClientConnectionOperator r10) {
            r8 = this;
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r8.log
            boolean r0 = r0.isDebugEnabled()
            if (r0 == 0) goto L27
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r8.log
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Creating new connection ["
            r1.append(r2)
            cz.msebera.android.httpclient.conn.routing.HttpRoute r2 = r9.getRoute()
            r1.append(r2)
            java.lang.String r2 = "]"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.debug(r1)
        L27:
            cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r0 = new cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry
            cz.msebera.android.httpclient.conn.routing.HttpRoute r4 = r9.getRoute()
            long r5 = r8.connTTL
            java.util.concurrent.TimeUnit r7 = r8.connTTLTimeUnit
            r2 = r0
            r3 = r10
            r2.<init>(r3, r4, r5, r7)
            java.util.concurrent.locks.Lock r10 = r8.poolLock
            r10.lock()
            r9.createdEntry(r0)     // Catch: java.lang.Throwable -> L4f
            int r9 = r8.numConnections     // Catch: java.lang.Throwable -> L4f
            int r9 = r9 + 1
            r8.numConnections = r9     // Catch: java.lang.Throwable -> L4f
            java.util.Set<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r9 = r8.leasedConnections     // Catch: java.lang.Throwable -> L4f
            r9.add(r0)     // Catch: java.lang.Throwable -> L4f
            java.util.concurrent.locks.Lock r9 = r8.poolLock
            r9.unlock()
            return r0
        L4f:
            r9 = move-exception
            java.util.concurrent.locks.Lock r10 = r8.poolLock
            r10.unlock()
            throw r9
    }

    protected java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> createFreeConnQueue() {
            r1 = this;
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            return r0
    }

    protected java.util.Map<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool> createRouteToPoolMap() {
            r1 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            return r0
    }

    protected java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread> createWaitingThreadQueue() {
            r1 = this;
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            return r0
    }

    @Override
    public void deleteClosedConnections() {
            r3 = this;
            java.util.concurrent.locks.Lock r0 = r3.poolLock
            r0.lock()
            java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r0 = r3.freeConnections     // Catch: java.lang.Throwable -> L2e
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L2e
        Lb:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L2e
            if (r1 == 0) goto L28
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L2e
            cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r1 = (cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry) r1     // Catch: java.lang.Throwable -> L2e
            cz.msebera.android.httpclient.conn.OperatedClientConnection r2 = r1.getConnection()     // Catch: java.lang.Throwable -> L2e
            boolean r2 = r2.isOpen()     // Catch: java.lang.Throwable -> L2e
            if (r2 != 0) goto Lb
            r0.remove()     // Catch: java.lang.Throwable -> L2e
            r3.deleteEntry(r1)     // Catch: java.lang.Throwable -> L2e
            goto Lb
        L28:
            java.util.concurrent.locks.Lock r0 = r3.poolLock
            r0.unlock()
            return
        L2e:
            r0 = move-exception
            java.util.concurrent.locks.Lock r1 = r3.poolLock
            r1.unlock()
            throw r0
    }

    protected void deleteEntry(cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r5) {
            r4 = this;
            cz.msebera.android.httpclient.conn.routing.HttpRoute r0 = r5.getPlannedRoute()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r4.log
            boolean r1 = r1.isDebugEnabled()
            if (r1 == 0) goto L33
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r4.log
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Deleting connection ["
            r2.append(r3)
            r2.append(r0)
            java.lang.String r3 = "]["
            r2.append(r3)
            java.lang.Object r3 = r5.getState()
            r2.append(r3)
            java.lang.String r3 = "]"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.debug(r2)
        L33:
            java.util.concurrent.locks.Lock r1 = r4.poolLock
            r1.lock()
            r4.closeConnection(r5)     // Catch: java.lang.Throwable -> L59
            r1 = 1
            cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool r2 = r4.getRoutePool(r0, r1)     // Catch: java.lang.Throwable -> L59
            r2.deleteEntry(r5)     // Catch: java.lang.Throwable -> L59
            int r5 = r4.numConnections     // Catch: java.lang.Throwable -> L59
            int r5 = r5 - r1
            r4.numConnections = r5     // Catch: java.lang.Throwable -> L59
            boolean r5 = r2.isUnused()     // Catch: java.lang.Throwable -> L59
            if (r5 == 0) goto L53
            java.util.Map<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool> r5 = r4.routeToPool     // Catch: java.lang.Throwable -> L59
            r5.remove(r0)     // Catch: java.lang.Throwable -> L59
        L53:
            java.util.concurrent.locks.Lock r5 = r4.poolLock
            r5.unlock()
            return
        L59:
            r5 = move-exception
            java.util.concurrent.locks.Lock r0 = r4.poolLock
            r0.unlock()
            throw r5
    }

    protected void deleteLeastUsedEntry() {
            r2 = this;
            java.util.concurrent.locks.Lock r0 = r2.poolLock
            r0.lock()
            java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r0 = r2.freeConnections     // Catch: java.lang.Throwable -> L28
            java.lang.Object r0 = r0.remove()     // Catch: java.lang.Throwable -> L28
            cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r0 = (cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry) r0     // Catch: java.lang.Throwable -> L28
            if (r0 == 0) goto L13
            r2.deleteEntry(r0)     // Catch: java.lang.Throwable -> L28
            goto L22
        L13:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r2.log     // Catch: java.lang.Throwable -> L28
            boolean r0 = r0.isDebugEnabled()     // Catch: java.lang.Throwable -> L28
            if (r0 == 0) goto L22
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r2.log     // Catch: java.lang.Throwable -> L28
            java.lang.String r1 = "No free connection to delete"
            r0.debug(r1)     // Catch: java.lang.Throwable -> L28
        L22:
            java.util.concurrent.locks.Lock r0 = r2.poolLock
            r0.unlock()
            return
        L28:
            r0 = move-exception
            java.util.concurrent.locks.Lock r1 = r2.poolLock
            r1.unlock()
            throw r0
    }

    @Override
    public void freeEntry(cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r7, boolean r8, long r9, java.util.concurrent.TimeUnit r11) {
            r6 = this;
            cz.msebera.android.httpclient.conn.routing.HttpRoute r0 = r7.getPlannedRoute()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r6.log
            boolean r1 = r1.isDebugEnabled()
            java.lang.String r2 = "]["
            if (r1 == 0) goto L33
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r6.log
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Releasing connection ["
            r3.append(r4)
            r3.append(r0)
            r3.append(r2)
            java.lang.Object r4 = r7.getState()
            r3.append(r4)
            java.lang.String r4 = "]"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r1.debug(r3)
        L33:
            java.util.concurrent.locks.Lock r1 = r6.poolLock
            r1.lock()
            boolean r1 = r6.shutdown     // Catch: java.lang.Throwable -> Lc9
            if (r1 == 0) goto L45
            r6.closeConnection(r7)     // Catch: java.lang.Throwable -> Lc9
            java.util.concurrent.locks.Lock r7 = r6.poolLock
            r7.unlock()
            return
        L45:
            java.util.Set<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r1 = r6.leasedConnections     // Catch: java.lang.Throwable -> Lc9
            r1.remove(r7)     // Catch: java.lang.Throwable -> Lc9
            r1 = 1
            cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool r3 = r6.getRoutePool(r0, r1)     // Catch: java.lang.Throwable -> Lc9
            if (r8 == 0) goto Lb5
            int r8 = r3.getCapacity()     // Catch: java.lang.Throwable -> Lc9
            if (r8 < 0) goto Lb5
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r8 = r6.log     // Catch: java.lang.Throwable -> Lc9
            boolean r8 = r8.isDebugEnabled()     // Catch: java.lang.Throwable -> Lc9
            if (r8 == 0) goto La9
            r4 = 0
            int r8 = (r9 > r4 ? 1 : (r9 == r4 ? 0 : -1))
            if (r8 <= 0) goto L7f
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc9
            r8.<init>()     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r1 = "for "
            r8.append(r1)     // Catch: java.lang.Throwable -> Lc9
            r8.append(r9)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r1 = " "
            r8.append(r1)     // Catch: java.lang.Throwable -> Lc9
            r8.append(r11)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lc9
            goto L81
        L7f:
            java.lang.String r8 = "indefinitely"
        L81:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r6.log     // Catch: java.lang.Throwable -> Lc9
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc9
            r4.<init>()     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r5 = "Pooling connection ["
            r4.append(r5)     // Catch: java.lang.Throwable -> Lc9
            r4.append(r0)     // Catch: java.lang.Throwable -> Lc9
            r4.append(r2)     // Catch: java.lang.Throwable -> Lc9
            java.lang.Object r0 = r7.getState()     // Catch: java.lang.Throwable -> Lc9
            r4.append(r0)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r0 = "]; keep alive "
            r4.append(r0)     // Catch: java.lang.Throwable -> Lc9
            r4.append(r8)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r8 = r4.toString()     // Catch: java.lang.Throwable -> Lc9
            r1.debug(r8)     // Catch: java.lang.Throwable -> Lc9
        La9:
            r3.freeEntry(r7)     // Catch: java.lang.Throwable -> Lc9
            r7.updateExpiry(r9, r11)     // Catch: java.lang.Throwable -> Lc9
            java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r8 = r6.freeConnections     // Catch: java.lang.Throwable -> Lc9
            r8.add(r7)     // Catch: java.lang.Throwable -> Lc9
            goto Lc0
        Lb5:
            r6.closeConnection(r7)     // Catch: java.lang.Throwable -> Lc9
            r3.dropEntry()     // Catch: java.lang.Throwable -> Lc9
            int r7 = r6.numConnections     // Catch: java.lang.Throwable -> Lc9
            int r7 = r7 - r1
            r6.numConnections = r7     // Catch: java.lang.Throwable -> Lc9
        Lc0:
            r6.notifyWaitingThread(r3)     // Catch: java.lang.Throwable -> Lc9
            java.util.concurrent.locks.Lock r7 = r6.poolLock
            r7.unlock()
            return
        Lc9:
            r7 = move-exception
            java.util.concurrent.locks.Lock r8 = r6.poolLock
            r8.unlock()
            throw r7
    }

    public int getConnectionsInPool() {
            r2 = this;
            java.util.concurrent.locks.Lock r0 = r2.poolLock
            r0.lock()
            int r0 = r2.numConnections     // Catch: java.lang.Throwable -> Ld
            java.util.concurrent.locks.Lock r1 = r2.poolLock
            r1.unlock()
            return r0
        Ld:
            r0 = move-exception
            java.util.concurrent.locks.Lock r1 = r2.poolLock
            r1.unlock()
            throw r0
    }

    public int getConnectionsInPool(cz.msebera.android.httpclient.conn.routing.HttpRoute r2) {
            r1 = this;
            java.util.concurrent.locks.Lock r0 = r1.poolLock
            r0.lock()
            r0 = 0
            cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool r2 = r1.getRoutePool(r2, r0)     // Catch: java.lang.Throwable -> L16
            if (r2 == 0) goto L10
            int r0 = r2.getEntryCount()     // Catch: java.lang.Throwable -> L16
        L10:
            java.util.concurrent.locks.Lock r2 = r1.poolLock
            r2.unlock()
            return r0
        L16:
            r2 = move-exception
            java.util.concurrent.locks.Lock r0 = r1.poolLock
            r0.unlock()
            throw r2
    }

    protected cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry getEntryBlocking(cz.msebera.android.httpclient.conn.routing.HttpRoute r10, java.lang.Object r11, long r12, java.util.concurrent.TimeUnit r14, cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThreadAborter r15) throws cz.msebera.android.httpclient.conn.ConnectionPoolTimeoutException, java.lang.InterruptedException {
            r9 = this;
            r0 = 0
            r1 = 0
            int r3 = (r12 > r1 ? 1 : (r12 == r1 ? 0 : -1))
            if (r3 <= 0) goto L16
            java.util.Date r1 = new java.util.Date
            long r2 = java.lang.System.currentTimeMillis()
            long r12 = r14.toMillis(r12)
            long r2 = r2 + r12
            r1.<init>(r2)
            goto L17
        L16:
            r1 = r0
        L17:
            java.util.concurrent.locks.Lock r12 = r9.poolLock
            r12.lock()
            r12 = 1
            cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool r13 = r9.getRoutePool(r10, r12)     // Catch: java.lang.Throwable -> L16c
            r14 = r0
        L22:
            if (r0 != 0) goto L166
            boolean r0 = r9.shutdown     // Catch: java.lang.Throwable -> L16c
            r2 = 0
            if (r0 != 0) goto L2b
            r0 = 1
            goto L2c
        L2b:
            r0 = 0
        L2c:
            java.lang.String r3 = "Connection pool shut down"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r3)     // Catch: java.lang.Throwable -> L16c
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r9.log     // Catch: java.lang.Throwable -> L16c
            boolean r0 = r0.isDebugEnabled()     // Catch: java.lang.Throwable -> L16c
            java.lang.String r3 = " out of "
            if (r0 == 0) goto L7f
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r9.log     // Catch: java.lang.Throwable -> L16c
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L16c
            r4.<init>()     // Catch: java.lang.Throwable -> L16c
            java.lang.String r5 = "["
            r4.append(r5)     // Catch: java.lang.Throwable -> L16c
            r4.append(r10)     // Catch: java.lang.Throwable -> L16c
            java.lang.String r5 = "] total kept alive: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L16c
            java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r5 = r9.freeConnections     // Catch: java.lang.Throwable -> L16c
            int r5 = r5.size()     // Catch: java.lang.Throwable -> L16c
            r4.append(r5)     // Catch: java.lang.Throwable -> L16c
            java.lang.String r5 = ", total issued: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L16c
            java.util.Set<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r5 = r9.leasedConnections     // Catch: java.lang.Throwable -> L16c
            int r5 = r5.size()     // Catch: java.lang.Throwable -> L16c
            r4.append(r5)     // Catch: java.lang.Throwable -> L16c
            java.lang.String r5 = ", total allocated: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L16c
            int r5 = r9.numConnections     // Catch: java.lang.Throwable -> L16c
            r4.append(r5)     // Catch: java.lang.Throwable -> L16c
            r4.append(r3)     // Catch: java.lang.Throwable -> L16c
            int r5 = r9.maxTotalConnections     // Catch: java.lang.Throwable -> L16c
            r4.append(r5)     // Catch: java.lang.Throwable -> L16c
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L16c
            r0.debug(r4)     // Catch: java.lang.Throwable -> L16c
        L7f:
            cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r0 = r9.getFreeEntry(r13, r11)     // Catch: java.lang.Throwable -> L16c
            if (r0 == 0) goto L87
            goto L166
        L87:
            int r4 = r13.getCapacity()     // Catch: java.lang.Throwable -> L16c
            if (r4 <= 0) goto L8e
            r2 = 1
        L8e:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r9.log     // Catch: java.lang.Throwable -> L16c
            boolean r4 = r4.isDebugEnabled()     // Catch: java.lang.Throwable -> L16c
            java.lang.String r5 = "]"
            java.lang.String r6 = "]["
            if (r4 == 0) goto Lcf
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r9.log     // Catch: java.lang.Throwable -> L16c
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L16c
            r7.<init>()     // Catch: java.lang.Throwable -> L16c
            java.lang.String r8 = "Available capacity: "
            r7.append(r8)     // Catch: java.lang.Throwable -> L16c
            int r8 = r13.getCapacity()     // Catch: java.lang.Throwable -> L16c
            r7.append(r8)     // Catch: java.lang.Throwable -> L16c
            r7.append(r3)     // Catch: java.lang.Throwable -> L16c
            int r3 = r13.getMaxEntries()     // Catch: java.lang.Throwable -> L16c
            r7.append(r3)     // Catch: java.lang.Throwable -> L16c
            java.lang.String r3 = " ["
            r7.append(r3)     // Catch: java.lang.Throwable -> L16c
            r7.append(r10)     // Catch: java.lang.Throwable -> L16c
            r7.append(r6)     // Catch: java.lang.Throwable -> L16c
            r7.append(r11)     // Catch: java.lang.Throwable -> L16c
            r7.append(r5)     // Catch: java.lang.Throwable -> L16c
            java.lang.String r3 = r7.toString()     // Catch: java.lang.Throwable -> L16c
            r4.debug(r3)     // Catch: java.lang.Throwable -> L16c
        Lcf:
            if (r2 == 0) goto Ldf
            int r3 = r9.numConnections     // Catch: java.lang.Throwable -> L16c
            int r4 = r9.maxTotalConnections     // Catch: java.lang.Throwable -> L16c
            if (r3 >= r4) goto Ldf
            cz.msebera.android.httpclient.conn.ClientConnectionOperator r0 = r9.operator     // Catch: java.lang.Throwable -> L16c
            cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r0 = r9.createEntry(r13, r0)     // Catch: java.lang.Throwable -> L16c
            goto L22
        Ldf:
            if (r2 == 0) goto Lf8
            java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r2 = r9.freeConnections     // Catch: java.lang.Throwable -> L16c
            boolean r2 = r2.isEmpty()     // Catch: java.lang.Throwable -> L16c
            if (r2 != 0) goto Lf8
            r9.deleteLeastUsedEntry()     // Catch: java.lang.Throwable -> L16c
            cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool r13 = r9.getRoutePool(r10, r12)     // Catch: java.lang.Throwable -> L16c
            cz.msebera.android.httpclient.conn.ClientConnectionOperator r0 = r9.operator     // Catch: java.lang.Throwable -> L16c
            cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r0 = r9.createEntry(r13, r0)     // Catch: java.lang.Throwable -> L16c
            goto L22
        Lf8:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r9.log     // Catch: java.lang.Throwable -> L16c
            boolean r2 = r2.isDebugEnabled()     // Catch: java.lang.Throwable -> L16c
            if (r2 == 0) goto L11f
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r9.log     // Catch: java.lang.Throwable -> L16c
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L16c
            r3.<init>()     // Catch: java.lang.Throwable -> L16c
            java.lang.String r4 = "Need to wait for connection ["
            r3.append(r4)     // Catch: java.lang.Throwable -> L16c
            r3.append(r10)     // Catch: java.lang.Throwable -> L16c
            r3.append(r6)     // Catch: java.lang.Throwable -> L16c
            r3.append(r11)     // Catch: java.lang.Throwable -> L16c
            r3.append(r5)     // Catch: java.lang.Throwable -> L16c
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L16c
            r2.debug(r3)     // Catch: java.lang.Throwable -> L16c
        L11f:
            if (r14 != 0) goto L12e
            java.util.concurrent.locks.Lock r14 = r9.poolLock     // Catch: java.lang.Throwable -> L16c
            java.util.concurrent.locks.Condition r14 = r14.newCondition()     // Catch: java.lang.Throwable -> L16c
            cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread r14 = r9.newWaitingThread(r14, r13)     // Catch: java.lang.Throwable -> L16c
            r15.setWaitingThread(r14)     // Catch: java.lang.Throwable -> L16c
        L12e:
            r13.queueThread(r14)     // Catch: java.lang.Throwable -> L15c
            java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread> r2 = r9.waitingThreads     // Catch: java.lang.Throwable -> L15c
            r2.add(r14)     // Catch: java.lang.Throwable -> L15c
            boolean r2 = r14.await(r1)     // Catch: java.lang.Throwable -> L15c
            r13.removeThread(r14)     // Catch: java.lang.Throwable -> L16c
            java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread> r3 = r9.waitingThreads     // Catch: java.lang.Throwable -> L16c
            r3.remove(r14)     // Catch: java.lang.Throwable -> L16c
            if (r2 != 0) goto L22
            if (r1 == 0) goto L22
            long r2 = r1.getTime()     // Catch: java.lang.Throwable -> L16c
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L16c
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 <= 0) goto L154
            goto L22
        L154:
            cz.msebera.android.httpclient.conn.ConnectionPoolTimeoutException r10 = new cz.msebera.android.httpclient.conn.ConnectionPoolTimeoutException     // Catch: java.lang.Throwable -> L16c
            java.lang.String r11 = "Timeout waiting for connection from pool"
            r10.<init>(r11)     // Catch: java.lang.Throwable -> L16c
            throw r10     // Catch: java.lang.Throwable -> L16c
        L15c:
            r10 = move-exception
            r13.removeThread(r14)     // Catch: java.lang.Throwable -> L16c
            java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread> r11 = r9.waitingThreads     // Catch: java.lang.Throwable -> L16c
            r11.remove(r14)     // Catch: java.lang.Throwable -> L16c
            throw r10     // Catch: java.lang.Throwable -> L16c
        L166:
            java.util.concurrent.locks.Lock r10 = r9.poolLock
            r10.unlock()
            return r0
        L16c:
            r10 = move-exception
            java.util.concurrent.locks.Lock r11 = r9.poolLock
            r11.unlock()
            throw r10
    }

    protected cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry getFreeEntry(cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool r9, java.lang.Object r10) {
            r8 = this;
            java.util.concurrent.locks.Lock r0 = r8.poolLock
            r0.lock()
            r0 = 0
            r1 = 1
            r2 = 0
        L8:
            if (r0 != 0) goto Lc0
            cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r2 = r9.allocEntry(r10)     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r3 = "]"
            java.lang.String r4 = "]["
            if (r2 == 0) goto L8b
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r8.log     // Catch: java.lang.Throwable -> Lb9
            boolean r5 = r5.isDebugEnabled()     // Catch: java.lang.Throwable -> Lb9
            if (r5 == 0) goto L3f
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r8.log     // Catch: java.lang.Throwable -> Lb9
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb9
            r6.<init>()     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r7 = "Getting free connection ["
            r6.append(r7)     // Catch: java.lang.Throwable -> Lb9
            cz.msebera.android.httpclient.conn.routing.HttpRoute r7 = r9.getRoute()     // Catch: java.lang.Throwable -> Lb9
            r6.append(r7)     // Catch: java.lang.Throwable -> Lb9
            r6.append(r4)     // Catch: java.lang.Throwable -> Lb9
            r6.append(r10)     // Catch: java.lang.Throwable -> Lb9
            r6.append(r3)     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> Lb9
            r5.debug(r6)     // Catch: java.lang.Throwable -> Lb9
        L3f:
            java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r5 = r8.freeConnections     // Catch: java.lang.Throwable -> Lb9
            r5.remove(r2)     // Catch: java.lang.Throwable -> Lb9
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lb9
            boolean r5 = r2.isExpired(r5)     // Catch: java.lang.Throwable -> Lb9
            if (r5 == 0) goto L85
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r8.log     // Catch: java.lang.Throwable -> Lb9
            boolean r5 = r5.isDebugEnabled()     // Catch: java.lang.Throwable -> Lb9
            if (r5 == 0) goto L79
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r8.log     // Catch: java.lang.Throwable -> Lb9
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb9
            r6.<init>()     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r7 = "Closing expired free connection ["
            r6.append(r7)     // Catch: java.lang.Throwable -> Lb9
            cz.msebera.android.httpclient.conn.routing.HttpRoute r7 = r9.getRoute()     // Catch: java.lang.Throwable -> Lb9
            r6.append(r7)     // Catch: java.lang.Throwable -> Lb9
            r6.append(r4)     // Catch: java.lang.Throwable -> Lb9
            r6.append(r10)     // Catch: java.lang.Throwable -> Lb9
            r6.append(r3)     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r3 = r6.toString()     // Catch: java.lang.Throwable -> Lb9
            r5.debug(r3)     // Catch: java.lang.Throwable -> Lb9
        L79:
            r8.closeConnection(r2)     // Catch: java.lang.Throwable -> Lb9
            r9.dropEntry()     // Catch: java.lang.Throwable -> Lb9
            int r3 = r8.numConnections     // Catch: java.lang.Throwable -> Lb9
            int r3 = r3 - r1
            r8.numConnections = r3     // Catch: java.lang.Throwable -> Lb9
            goto L8
        L85:
            java.util.Set<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r0 = r8.leasedConnections     // Catch: java.lang.Throwable -> Lb9
            r0.add(r2)     // Catch: java.lang.Throwable -> Lb9
            goto Lb6
        L8b:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r8.log     // Catch: java.lang.Throwable -> Lb9
            boolean r0 = r0.isDebugEnabled()     // Catch: java.lang.Throwable -> Lb9
            if (r0 == 0) goto Lb6
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r8.log     // Catch: java.lang.Throwable -> Lb9
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb9
            r5.<init>()     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r6 = "No free connections ["
            r5.append(r6)     // Catch: java.lang.Throwable -> Lb9
            cz.msebera.android.httpclient.conn.routing.HttpRoute r6 = r9.getRoute()     // Catch: java.lang.Throwable -> Lb9
            r5.append(r6)     // Catch: java.lang.Throwable -> Lb9
            r5.append(r4)     // Catch: java.lang.Throwable -> Lb9
            r5.append(r10)     // Catch: java.lang.Throwable -> Lb9
            r5.append(r3)     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Throwable -> Lb9
            r0.debug(r3)     // Catch: java.lang.Throwable -> Lb9
        Lb6:
            r0 = 1
            goto L8
        Lb9:
            r9 = move-exception
            java.util.concurrent.locks.Lock r10 = r8.poolLock
            r10.unlock()
            throw r9
        Lc0:
            java.util.concurrent.locks.Lock r9 = r8.poolLock
            r9.unlock()
            return r2
    }

    protected java.util.concurrent.locks.Lock getLock() {
            r1 = this;
            java.util.concurrent.locks.Lock r0 = r1.poolLock
            return r0
    }

    public int getMaxTotalConnections() {
            r1 = this;
            int r0 = r1.maxTotalConnections
            return r0
    }

    protected cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool getRoutePool(cz.msebera.android.httpclient.conn.routing.HttpRoute r2, boolean r3) {
            r1 = this;
            java.util.concurrent.locks.Lock r0 = r1.poolLock
            r0.lock()
            java.util.Map<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool> r0 = r1.routeToPool     // Catch: java.lang.Throwable -> L20
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L20
            cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool r0 = (cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool) r0     // Catch: java.lang.Throwable -> L20
            if (r0 != 0) goto L1a
            if (r3 == 0) goto L1a
            cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool r0 = r1.newRouteSpecificPool(r2)     // Catch: java.lang.Throwable -> L20
            java.util.Map<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool> r3 = r1.routeToPool     // Catch: java.lang.Throwable -> L20
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> L20
        L1a:
            java.util.concurrent.locks.Lock r2 = r1.poolLock
            r2.unlock()
            return r0
        L20:
            r2 = move-exception
            java.util.concurrent.locks.Lock r3 = r1.poolLock
            r3.unlock()
            throw r2
    }

    @Override
    protected void handleLostEntry(cz.msebera.android.httpclient.conn.routing.HttpRoute r4) {
            r3 = this;
            java.util.concurrent.locks.Lock r0 = r3.poolLock
            r0.lock()
            r0 = 1
            cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool r1 = r3.getRoutePool(r4, r0)     // Catch: java.lang.Throwable -> L26
            r1.dropEntry()     // Catch: java.lang.Throwable -> L26
            boolean r2 = r1.isUnused()     // Catch: java.lang.Throwable -> L26
            if (r2 == 0) goto L18
            java.util.Map<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool> r2 = r3.routeToPool     // Catch: java.lang.Throwable -> L26
            r2.remove(r4)     // Catch: java.lang.Throwable -> L26
        L18:
            int r4 = r3.numConnections     // Catch: java.lang.Throwable -> L26
            int r4 = r4 - r0
            r3.numConnections = r4     // Catch: java.lang.Throwable -> L26
            r3.notifyWaitingThread(r1)     // Catch: java.lang.Throwable -> L26
            java.util.concurrent.locks.Lock r4 = r3.poolLock
            r4.unlock()
            return
        L26:
            r4 = move-exception
            java.util.concurrent.locks.Lock r0 = r3.poolLock
            r0.unlock()
            throw r4
    }

    protected cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool newRouteSpecificPool(cz.msebera.android.httpclient.conn.routing.HttpRoute r3) {
            r2 = this;
            cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool r0 = new cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool
            cz.msebera.android.httpclient.conn.params.ConnPerRoute r1 = r2.connPerRoute
            r0.<init>(r3, r1)
            return r0
    }

    protected cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread newWaitingThread(java.util.concurrent.locks.Condition r2, cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool r3) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread r0 = new cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread
            r0.<init>(r2, r3)
            return r0
    }

    protected void notifyWaitingThread(cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool r4) {
            r3 = this;
            java.util.concurrent.locks.Lock r0 = r3.poolLock
            r0.lock()
            if (r4 == 0) goto L39
            boolean r0 = r4.hasThread()     // Catch: java.lang.Throwable -> L74
            if (r0 == 0) goto L39
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log     // Catch: java.lang.Throwable -> L74
            boolean r0 = r0.isDebugEnabled()     // Catch: java.lang.Throwable -> L74
            if (r0 == 0) goto L34
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log     // Catch: java.lang.Throwable -> L74
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L74
            r1.<init>()     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "Notifying thread waiting on pool ["
            r1.append(r2)     // Catch: java.lang.Throwable -> L74
            cz.msebera.android.httpclient.conn.routing.HttpRoute r2 = r4.getRoute()     // Catch: java.lang.Throwable -> L74
            r1.append(r2)     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "]"
            r1.append(r2)     // Catch: java.lang.Throwable -> L74
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L74
            r0.debug(r1)     // Catch: java.lang.Throwable -> L74
        L34:
            cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread r4 = r4.nextThread()     // Catch: java.lang.Throwable -> L74
            goto L69
        L39:
            java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread> r4 = r3.waitingThreads     // Catch: java.lang.Throwable -> L74
            boolean r4 = r4.isEmpty()     // Catch: java.lang.Throwable -> L74
            if (r4 != 0) goto L59
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r3.log     // Catch: java.lang.Throwable -> L74
            boolean r4 = r4.isDebugEnabled()     // Catch: java.lang.Throwable -> L74
            if (r4 == 0) goto L50
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r3.log     // Catch: java.lang.Throwable -> L74
            java.lang.String r0 = "Notifying thread waiting on any pool"
            r4.debug(r0)     // Catch: java.lang.Throwable -> L74
        L50:
            java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread> r4 = r3.waitingThreads     // Catch: java.lang.Throwable -> L74
            java.lang.Object r4 = r4.remove()     // Catch: java.lang.Throwable -> L74
            cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread r4 = (cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread) r4     // Catch: java.lang.Throwable -> L74
            goto L69
        L59:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r3.log     // Catch: java.lang.Throwable -> L74
            boolean r4 = r4.isDebugEnabled()     // Catch: java.lang.Throwable -> L74
            if (r4 == 0) goto L68
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r3.log     // Catch: java.lang.Throwable -> L74
            java.lang.String r0 = "Notifying no-one, there are no waiting threads"
            r4.debug(r0)     // Catch: java.lang.Throwable -> L74
        L68:
            r4 = 0
        L69:
            if (r4 == 0) goto L6e
            r4.wakeup()     // Catch: java.lang.Throwable -> L74
        L6e:
            java.util.concurrent.locks.Lock r4 = r3.poolLock
            r4.unlock()
            return
        L74:
            r4 = move-exception
            java.util.concurrent.locks.Lock r0 = r3.poolLock
            r0.unlock()
            throw r4
    }

    @Override
    public cz.msebera.android.httpclient.impl.conn.tsccm.PoolEntryRequest requestPoolEntry(cz.msebera.android.httpclient.conn.routing.HttpRoute r3, java.lang.Object r4) {
            r2 = this;
            cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThreadAborter r0 = new cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThreadAborter
            r0.<init>()
            cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute$1 r1 = new cz.msebera.android.httpclient.impl.conn.tsccm.ConnPoolByRoute$1
            r1.<init>(r2, r0, r3, r4)
            return r1
    }

    public void setMaxTotalConnections(int r2) {
            r1 = this;
            java.util.concurrent.locks.Lock r0 = r1.poolLock
            r0.lock()
            r1.maxTotalConnections = r2     // Catch: java.lang.Throwable -> Ld
            java.util.concurrent.locks.Lock r2 = r1.poolLock
            r2.unlock()
            return
        Ld:
            r2 = move-exception
            java.util.concurrent.locks.Lock r0 = r1.poolLock
            r0.unlock()
            throw r2
    }

    @Override
    public void shutdown() {
            r5 = this;
            java.util.concurrent.locks.Lock r0 = r5.poolLock
            r0.lock()
            boolean r0 = r5.shutdown     // Catch: java.lang.Throwable -> L9b
            if (r0 == 0) goto Lf
            java.util.concurrent.locks.Lock r0 = r5.poolLock
            r0.unlock()
            return
        Lf:
            r0 = 1
            r5.shutdown = r0     // Catch: java.lang.Throwable -> L9b
            java.util.Set<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r0 = r5.leasedConnections     // Catch: java.lang.Throwable -> L9b
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L9b
        L18:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L9b
            if (r1 == 0) goto L2b
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L9b
            cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r1 = (cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry) r1     // Catch: java.lang.Throwable -> L9b
            r0.remove()     // Catch: java.lang.Throwable -> L9b
            r5.closeConnection(r1)     // Catch: java.lang.Throwable -> L9b
            goto L18
        L2b:
            java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r0 = r5.freeConnections     // Catch: java.lang.Throwable -> L9b
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L9b
        L31:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L9b
            if (r1 == 0) goto L77
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L9b
            cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r1 = (cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry) r1     // Catch: java.lang.Throwable -> L9b
            r0.remove()     // Catch: java.lang.Throwable -> L9b
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r5.log     // Catch: java.lang.Throwable -> L9b
            boolean r2 = r2.isDebugEnabled()     // Catch: java.lang.Throwable -> L9b
            if (r2 == 0) goto L73
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r5.log     // Catch: java.lang.Throwable -> L9b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9b
            r3.<init>()     // Catch: java.lang.Throwable -> L9b
            java.lang.String r4 = "Closing connection ["
            r3.append(r4)     // Catch: java.lang.Throwable -> L9b
            cz.msebera.android.httpclient.conn.routing.HttpRoute r4 = r1.getPlannedRoute()     // Catch: java.lang.Throwable -> L9b
            r3.append(r4)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r4 = "]["
            r3.append(r4)     // Catch: java.lang.Throwable -> L9b
            java.lang.Object r4 = r1.getState()     // Catch: java.lang.Throwable -> L9b
            r3.append(r4)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r4 = "]"
            r3.append(r4)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L9b
            r2.debug(r3)     // Catch: java.lang.Throwable -> L9b
        L73:
            r5.closeConnection(r1)     // Catch: java.lang.Throwable -> L9b
            goto L31
        L77:
            java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread> r0 = r5.waitingThreads     // Catch: java.lang.Throwable -> L9b
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L9b
        L7d:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L9b
            if (r1 == 0) goto L90
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L9b
            cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread r1 = (cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread) r1     // Catch: java.lang.Throwable -> L9b
            r0.remove()     // Catch: java.lang.Throwable -> L9b
            r1.wakeup()     // Catch: java.lang.Throwable -> L9b
            goto L7d
        L90:
            java.util.Map<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool> r0 = r5.routeToPool     // Catch: java.lang.Throwable -> L9b
            r0.clear()     // Catch: java.lang.Throwable -> L9b
            java.util.concurrent.locks.Lock r0 = r5.poolLock
            r0.unlock()
            return
        L9b:
            r0 = move-exception
            java.util.concurrent.locks.Lock r1 = r5.poolLock
            r1.unlock()
            throw r0
    }
}
