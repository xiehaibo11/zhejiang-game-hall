package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.ThreadSafe
@java.lang.Deprecated
public class BasicClientConnectionManager implements cz.msebera.android.httpclient.conn.ClientConnectionManager {
    private static final java.util.concurrent.atomic.AtomicLong COUNTER = null;
    public static final java.lang.String MISUSE_MESSAGE = "Invalid use of BasicClientConnManager: connection still allocated.\nMake sure to release the connection before allocating another one.";

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.impl.conn.ManagedClientConnectionImpl conn;
    private final cz.msebera.android.httpclient.conn.ClientConnectionOperator connOperator;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private cz.msebera.android.httpclient.impl.conn.HttpPoolEntry poolEntry;
    private final cz.msebera.android.httpclient.conn.scheme.SchemeRegistry schemeRegistry;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private volatile boolean shutdown;


    static {
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r0.<init>()
            cz.msebera.android.httpclient.impl.conn.BasicClientConnectionManager.COUNTER = r0
            return
    }

    public BasicClientConnectionManager() {
            r1 = this;
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r0 = cz.msebera.android.httpclient.impl.conn.SchemeRegistryFactory.createDefault()
            r1.<init>(r0)
            return
    }

    public BasicClientConnectionManager(cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r3) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            java.lang.String r0 = "Scheme registry"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            r2.schemeRegistry = r3
            cz.msebera.android.httpclient.conn.ClientConnectionOperator r3 = r2.createConnectionOperator(r3)
            r2.connOperator = r3
            return
    }

    private void assertNotShutdown() {
            r2 = this;
            boolean r0 = r2.shutdown
            r0 = r0 ^ 1
            java.lang.String r1 = "Connection manager has been shut down"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)
            return
    }

    private void shutdownConnection(cz.msebera.android.httpclient.HttpClientConnection r3) {
            r2 = this;
            r3.shutdown()     // Catch: java.io.IOException -> L4
            goto L14
        L4:
            r3 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r2.log
            boolean r0 = r0.isDebugEnabled()
            if (r0 == 0) goto L14
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r2.log
            java.lang.String r1 = "I/O exception shutting down connection"
            r0.debug(r1, r3)
        L14:
            return
    }

    @Override
    public void closeExpiredConnections() {
            r3 = this;
            monitor-enter(r3)
            r3.assertNotShutdown()     // Catch: java.lang.Throwable -> L24
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L24
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r2 = r3.poolEntry     // Catch: java.lang.Throwable -> L24
            if (r2 == 0) goto L22
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r2 = r3.poolEntry     // Catch: java.lang.Throwable -> L24
            boolean r0 = r2.isExpired(r0)     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto L22
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r3.poolEntry     // Catch: java.lang.Throwable -> L24
            r0.close()     // Catch: java.lang.Throwable -> L24
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r3.poolEntry     // Catch: java.lang.Throwable -> L24
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = r0.getTracker()     // Catch: java.lang.Throwable -> L24
            r0.reset()     // Catch: java.lang.Throwable -> L24
        L22:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L24
            return
        L24:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L24
            throw r0
    }

    @Override
    public void closeIdleConnections(long r3, java.util.concurrent.TimeUnit r5) {
            r2 = this;
            java.lang.String r0 = "Time unit"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            monitor-enter(r2)
            r2.assertNotShutdown()     // Catch: java.lang.Throwable -> L37
            long r3 = r5.toMillis(r3)     // Catch: java.lang.Throwable -> L37
            r0 = 0
            int r5 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r5 >= 0) goto L14
            r3 = r0
        L14:
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L37
            long r0 = r0 - r3
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r3 = r2.poolEntry     // Catch: java.lang.Throwable -> L37
            if (r3 == 0) goto L35
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r3 = r2.poolEntry     // Catch: java.lang.Throwable -> L37
            long r3 = r3.getUpdated()     // Catch: java.lang.Throwable -> L37
            int r5 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r5 > 0) goto L35
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r3 = r2.poolEntry     // Catch: java.lang.Throwable -> L37
            r3.close()     // Catch: java.lang.Throwable -> L37
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r3 = r2.poolEntry     // Catch: java.lang.Throwable -> L37
            cz.msebera.android.httpclient.conn.routing.RouteTracker r3 = r3.getTracker()     // Catch: java.lang.Throwable -> L37
            r3.reset()     // Catch: java.lang.Throwable -> L37
        L35:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L37
            return
        L37:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L37
            throw r3
    }

    protected cz.msebera.android.httpclient.conn.ClientConnectionOperator createConnectionOperator(cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.DefaultClientConnectionOperator r0 = new cz.msebera.android.httpclient.impl.conn.DefaultClientConnectionOperator
            r0.<init>(r2)
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

    cz.msebera.android.httpclient.conn.ManagedClientConnection getConnection(cz.msebera.android.httpclient.conn.routing.HttpRoute r11, java.lang.Object r12) {
            r10 = this;
            java.lang.String r12 = "Route"
            cz.msebera.android.httpclient.util.Args.notNull(r11, r12)
            monitor-enter(r10)
            r10.assertNotShutdown()     // Catch: java.lang.Throwable -> L97
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r12 = r10.log     // Catch: java.lang.Throwable -> L97
            boolean r12 = r12.isDebugEnabled()     // Catch: java.lang.Throwable -> L97
            if (r12 == 0) goto L27
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r12 = r10.log     // Catch: java.lang.Throwable -> L97
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L97
            r0.<init>()     // Catch: java.lang.Throwable -> L97
            java.lang.String r1 = "Get connection for route "
            r0.append(r1)     // Catch: java.lang.Throwable -> L97
            r0.append(r11)     // Catch: java.lang.Throwable -> L97
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L97
            r12.debug(r0)     // Catch: java.lang.Throwable -> L97
        L27:
            cz.msebera.android.httpclient.impl.conn.ManagedClientConnectionImpl r12 = r10.conn     // Catch: java.lang.Throwable -> L97
            if (r12 != 0) goto L2d
            r12 = 1
            goto L2e
        L2d:
            r12 = 0
        L2e:
            java.lang.String r0 = "Invalid use of BasicClientConnManager: connection still allocated.\nMake sure to release the connection before allocating another one."
            cz.msebera.android.httpclient.util.Asserts.check(r12, r0)     // Catch: java.lang.Throwable -> L97
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r12 = r10.poolEntry     // Catch: java.lang.Throwable -> L97
            if (r12 == 0) goto L4b
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r12 = r10.poolEntry     // Catch: java.lang.Throwable -> L97
            cz.msebera.android.httpclient.conn.routing.HttpRoute r12 = r12.getPlannedRoute()     // Catch: java.lang.Throwable -> L97
            boolean r12 = r12.equals(r11)     // Catch: java.lang.Throwable -> L97
            if (r12 != 0) goto L4b
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r12 = r10.poolEntry     // Catch: java.lang.Throwable -> L97
            r12.close()     // Catch: java.lang.Throwable -> L97
            r12 = 0
            r10.poolEntry = r12     // Catch: java.lang.Throwable -> L97
        L4b:
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r12 = r10.poolEntry     // Catch: java.lang.Throwable -> L97
            if (r12 != 0) goto L6e
            java.util.concurrent.atomic.AtomicLong r12 = cz.msebera.android.httpclient.impl.conn.BasicClientConnectionManager.COUNTER     // Catch: java.lang.Throwable -> L97
            long r0 = r12.getAndIncrement()     // Catch: java.lang.Throwable -> L97
            java.lang.String r4 = java.lang.Long.toString(r0)     // Catch: java.lang.Throwable -> L97
            cz.msebera.android.httpclient.conn.ClientConnectionOperator r12 = r10.connOperator     // Catch: java.lang.Throwable -> L97
            cz.msebera.android.httpclient.conn.OperatedClientConnection r6 = r12.createConnection()     // Catch: java.lang.Throwable -> L97
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r12 = new cz.msebera.android.httpclient.impl.conn.HttpPoolEntry     // Catch: java.lang.Throwable -> L97
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r10.log     // Catch: java.lang.Throwable -> L97
            r7 = 0
            java.util.concurrent.TimeUnit r9 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Throwable -> L97
            r2 = r12
            r5 = r11
            r2.<init>(r3, r4, r5, r6, r7, r9)     // Catch: java.lang.Throwable -> L97
            r10.poolEntry = r12     // Catch: java.lang.Throwable -> L97
        L6e:
            long r11 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L97
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r10.poolEntry     // Catch: java.lang.Throwable -> L97
            boolean r11 = r0.isExpired(r11)     // Catch: java.lang.Throwable -> L97
            if (r11 == 0) goto L88
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r11 = r10.poolEntry     // Catch: java.lang.Throwable -> L97
            r11.close()     // Catch: java.lang.Throwable -> L97
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r11 = r10.poolEntry     // Catch: java.lang.Throwable -> L97
            cz.msebera.android.httpclient.conn.routing.RouteTracker r11 = r11.getTracker()     // Catch: java.lang.Throwable -> L97
            r11.reset()     // Catch: java.lang.Throwable -> L97
        L88:
            cz.msebera.android.httpclient.impl.conn.ManagedClientConnectionImpl r11 = new cz.msebera.android.httpclient.impl.conn.ManagedClientConnectionImpl     // Catch: java.lang.Throwable -> L97
            cz.msebera.android.httpclient.conn.ClientConnectionOperator r12 = r10.connOperator     // Catch: java.lang.Throwable -> L97
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r10.poolEntry     // Catch: java.lang.Throwable -> L97
            r11.<init>(r10, r12, r0)     // Catch: java.lang.Throwable -> L97
            r10.conn = r11     // Catch: java.lang.Throwable -> L97
            cz.msebera.android.httpclient.impl.conn.ManagedClientConnectionImpl r11 = r10.conn     // Catch: java.lang.Throwable -> L97
            monitor-exit(r10)     // Catch: java.lang.Throwable -> L97
            return r11
        L97:
            r11 = move-exception
            monitor-exit(r10)     // Catch: java.lang.Throwable -> L97
            throw r11
    }

    @Override
    public cz.msebera.android.httpclient.conn.scheme.SchemeRegistry getSchemeRegistry() {
            r1 = this;
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r0 = r1.schemeRegistry
            return r0
    }

    @Override
    public void releaseConnection(cz.msebera.android.httpclient.conn.ManagedClientConnection r5, long r6, java.util.concurrent.TimeUnit r8) {
            r4 = this;
            boolean r0 = r5 instanceof cz.msebera.android.httpclient.impl.conn.ManagedClientConnectionImpl
            java.lang.String r1 = "Connection class mismatch, connection not obtained from this manager"
            cz.msebera.android.httpclient.util.Args.check(r0, r1)
            r0 = r5
            cz.msebera.android.httpclient.impl.conn.ManagedClientConnectionImpl r0 = (cz.msebera.android.httpclient.impl.conn.ManagedClientConnectionImpl) r0
            monitor-enter(r0)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r4.log     // Catch: java.lang.Throwable -> Ld1
            boolean r1 = r1.isDebugEnabled()     // Catch: java.lang.Throwable -> Ld1
            if (r1 == 0) goto L29
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r4.log     // Catch: java.lang.Throwable -> Ld1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld1
            r2.<init>()     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r3 = "Releasing connection "
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld1
            r2.append(r5)     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> Ld1
            r1.debug(r5)     // Catch: java.lang.Throwable -> Ld1
        L29:
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r5 = r0.getPoolEntry()     // Catch: java.lang.Throwable -> Ld1
            if (r5 != 0) goto L31
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld1
            return
        L31:
            cz.msebera.android.httpclient.conn.ClientConnectionManager r5 = r0.getManager()     // Catch: java.lang.Throwable -> Ld1
            if (r5 != r4) goto L39
            r5 = 1
            goto L3a
        L39:
            r5 = 0
        L3a:
            java.lang.String r1 = "Connection not obtained from this manager"
            cz.msebera.android.httpclient.util.Asserts.check(r5, r1)     // Catch: java.lang.Throwable -> Ld1
            monitor-enter(r4)     // Catch: java.lang.Throwable -> Ld1
            boolean r5 = r4.shutdown     // Catch: java.lang.Throwable -> Lce
            if (r5 == 0) goto L4a
            r4.shutdownConnection(r0)     // Catch: java.lang.Throwable -> Lce
            monitor-exit(r4)     // Catch: java.lang.Throwable -> Lce
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld1
            return
        L4a:
            r5 = 0
            boolean r1 = r0.isOpen()     // Catch: java.lang.Throwable -> Lbd
            if (r1 == 0) goto L5a
            boolean r1 = r0.isMarkedReusable()     // Catch: java.lang.Throwable -> Lbd
            if (r1 != 0) goto L5a
            r4.shutdownConnection(r0)     // Catch: java.lang.Throwable -> Lbd
        L5a:
            boolean r1 = r0.isMarkedReusable()     // Catch: java.lang.Throwable -> Lbd
            if (r1 == 0) goto Lab
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r1 = r4.poolEntry     // Catch: java.lang.Throwable -> Lbd
            if (r8 == 0) goto L66
            r2 = r8
            goto L68
        L66:
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Throwable -> Lbd
        L68:
            r1.updateExpiry(r6, r2)     // Catch: java.lang.Throwable -> Lbd
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r4.log     // Catch: java.lang.Throwable -> Lbd
            boolean r1 = r1.isDebugEnabled()     // Catch: java.lang.Throwable -> Lbd
            if (r1 == 0) goto Lab
            r1 = 0
            int r3 = (r6 > r1 ? 1 : (r6 == r1 ? 0 : -1))
            if (r3 <= 0) goto L93
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbd
            r1.<init>()     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r2 = "for "
            r1.append(r2)     // Catch: java.lang.Throwable -> Lbd
            r1.append(r6)     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r6 = " "
            r1.append(r6)     // Catch: java.lang.Throwable -> Lbd
            r1.append(r8)     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Throwable -> Lbd
            goto L95
        L93:
            java.lang.String r6 = "indefinitely"
        L95:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r4.log     // Catch: java.lang.Throwable -> Lbd
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbd
            r8.<init>()     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r1 = "Connection can be kept alive "
            r8.append(r1)     // Catch: java.lang.Throwable -> Lbd
            r8.append(r6)     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r6 = r8.toString()     // Catch: java.lang.Throwable -> Lbd
            r7.debug(r6)     // Catch: java.lang.Throwable -> Lbd
        Lab:
            r0.detach()     // Catch: java.lang.Throwable -> Lce
            r4.conn = r5     // Catch: java.lang.Throwable -> Lce
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r6 = r4.poolEntry     // Catch: java.lang.Throwable -> Lce
            boolean r6 = r6.isClosed()     // Catch: java.lang.Throwable -> Lce
            if (r6 == 0) goto Lba
            r4.poolEntry = r5     // Catch: java.lang.Throwable -> Lce
        Lba:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> Lce
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld1
            return
        Lbd:
            r6 = move-exception
            r0.detach()     // Catch: java.lang.Throwable -> Lce
            r4.conn = r5     // Catch: java.lang.Throwable -> Lce
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r7 = r4.poolEntry     // Catch: java.lang.Throwable -> Lce
            boolean r7 = r7.isClosed()     // Catch: java.lang.Throwable -> Lce
            if (r7 == 0) goto Lcd
            r4.poolEntry = r5     // Catch: java.lang.Throwable -> Lce
        Lcd:
            throw r6     // Catch: java.lang.Throwable -> Lce
        Lce:
            r5 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> Lce
            throw r5     // Catch: java.lang.Throwable -> Ld1
        Ld1:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld1
            throw r5
    }

    @Override
    public final cz.msebera.android.httpclient.conn.ClientConnectionRequest requestConnection(cz.msebera.android.httpclient.conn.routing.HttpRoute r2, java.lang.Object r3) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.BasicClientConnectionManager$1 r0 = new cz.msebera.android.httpclient.impl.conn.BasicClientConnectionManager$1
            r0.<init>(r1, r2, r3)
            return r0
    }

    @Override
    public void shutdown() {
            r2 = this;
            monitor-enter(r2)
            r0 = 1
            r2.shutdown = r0     // Catch: java.lang.Throwable -> L1a
            r0 = 0
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r1 = r2.poolEntry     // Catch: java.lang.Throwable -> L14
            if (r1 == 0) goto Le
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r1 = r2.poolEntry     // Catch: java.lang.Throwable -> L14
            r1.close()     // Catch: java.lang.Throwable -> L14
        Le:
            r2.poolEntry = r0     // Catch: java.lang.Throwable -> L1a
            r2.conn = r0     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1a
            return
        L14:
            r1 = move-exception
            r2.poolEntry = r0     // Catch: java.lang.Throwable -> L1a
            r2.conn = r0     // Catch: java.lang.Throwable -> L1a
            throw r1     // Catch: java.lang.Throwable -> L1a
        L1a:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1a
            throw r0
    }
}
