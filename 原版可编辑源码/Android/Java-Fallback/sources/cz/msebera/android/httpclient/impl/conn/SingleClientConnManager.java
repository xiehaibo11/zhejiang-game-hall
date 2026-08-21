package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.ThreadSafe
@java.lang.Deprecated
public class SingleClientConnManager implements cz.msebera.android.httpclient.conn.ClientConnectionManager {
    public static final java.lang.String MISUSE_MESSAGE = "Invalid use of SingleClientConnManager: connection still allocated.\nMake sure to release the connection before allocating another one.";
    protected final boolean alwaysShutDown;
    protected final cz.msebera.android.httpclient.conn.ClientConnectionOperator connOperator;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    protected volatile long connectionExpiresTime;
    protected volatile boolean isShutDown;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    protected volatile long lastReleaseTime;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    protected volatile cz.msebera.android.httpclient.impl.conn.SingleClientConnManager.ConnAdapter managedConn;
    protected final cz.msebera.android.httpclient.conn.scheme.SchemeRegistry schemeRegistry;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    protected volatile cz.msebera.android.httpclient.impl.conn.SingleClientConnManager.PoolEntry uniquePoolEntry;


    protected class ConnAdapter extends cz.msebera.android.httpclient.impl.conn.AbstractPooledConnAdapter {
        final cz.msebera.android.httpclient.impl.conn.SingleClientConnManager this$0;

        protected ConnAdapter(cz.msebera.android.httpclient.impl.conn.SingleClientConnManager r1, cz.msebera.android.httpclient.impl.conn.SingleClientConnManager.PoolEntry r2, cz.msebera.android.httpclient.conn.routing.HttpRoute r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r1, r2)
                r0.markReusable()
                r2.route = r3
                return
        }
    }

    protected class PoolEntry extends cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry {
        final cz.msebera.android.httpclient.impl.conn.SingleClientConnManager this$0;

        protected PoolEntry(cz.msebera.android.httpclient.impl.conn.SingleClientConnManager r2) {
                r1 = this;
                r1.this$0 = r2
                cz.msebera.android.httpclient.conn.ClientConnectionOperator r2 = r2.connOperator
                r0 = 0
                r1.<init>(r2, r0)
                return
        }

        protected void close() throws java.io.IOException {
                r1 = this;
                r1.shutdownEntry()
                cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.connection
                boolean r0 = r0.isOpen()
                if (r0 == 0) goto L10
                cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.connection
                r0.close()
            L10:
                return
        }

        protected void shutdown() throws java.io.IOException {
                r1 = this;
                r1.shutdownEntry()
                cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.connection
                boolean r0 = r0.isOpen()
                if (r0 == 0) goto L10
                cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.connection
                r0.shutdown()
            L10:
                return
        }
    }

    public SingleClientConnManager() {
            r1 = this;
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r0 = cz.msebera.android.httpclient.impl.conn.SchemeRegistryFactory.createDefault()
            r1.<init>(r0)
            return
    }

    public SingleClientConnManager(cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r3) {
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
            cz.msebera.android.httpclient.impl.conn.SingleClientConnManager$PoolEntry r3 = new cz.msebera.android.httpclient.impl.conn.SingleClientConnManager$PoolEntry
            r3.<init>(r2)
            r2.uniquePoolEntry = r3
            r3 = 0
            r2.managedConn = r3
            r0 = -1
            r2.lastReleaseTime = r0
            r3 = 0
            r2.alwaysShutDown = r3
            r2.isShutDown = r3
            return
    }

    @java.lang.Deprecated
    public SingleClientConnManager(cz.msebera.android.httpclient.params.HttpParams r1, cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r2) {
            r0 = this;
            r0.<init>(r2)
            return
    }

    protected final void assertStillUp() throws java.lang.IllegalStateException {
            r2 = this;
            boolean r0 = r2.isShutDown
            r0 = r0 ^ 1
            java.lang.String r1 = "Manager is shut down"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)
            return
    }

    @Override
    public void closeExpiredConnections() {
            r5 = this;
            long r0 = r5.connectionExpiresTime
            long r2 = java.lang.System.currentTimeMillis()
            int r4 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r4 < 0) goto L11
            r0 = 0
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS
            r5.closeIdleConnections(r0, r2)
        L11:
            return
    }

    @Override
    public void closeIdleConnections(long r3, java.util.concurrent.TimeUnit r5) {
            r2 = this;
            r2.assertStillUp()
            java.lang.String r0 = "Time unit"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            monitor-enter(r2)
            cz.msebera.android.httpclient.impl.conn.SingleClientConnManager$ConnAdapter r0 = r2.managedConn     // Catch: java.lang.Throwable -> L36
            if (r0 != 0) goto L34
            cz.msebera.android.httpclient.impl.conn.SingleClientConnManager$PoolEntry r0 = r2.uniquePoolEntry     // Catch: java.lang.Throwable -> L36
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r0.connection     // Catch: java.lang.Throwable -> L36
            boolean r0 = r0.isOpen()     // Catch: java.lang.Throwable -> L36
            if (r0 == 0) goto L34
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L36
            long r3 = r5.toMillis(r3)     // Catch: java.lang.Throwable -> L36
            long r0 = r0 - r3
            long r3 = r2.lastReleaseTime     // Catch: java.lang.Throwable -> L36
            int r5 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r5 > 0) goto L34
            cz.msebera.android.httpclient.impl.conn.SingleClientConnManager$PoolEntry r3 = r2.uniquePoolEntry     // Catch: java.io.IOException -> L2c java.lang.Throwable -> L36
            r3.close()     // Catch: java.io.IOException -> L2c java.lang.Throwable -> L36
            goto L34
        L2c:
            r3 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r2.log     // Catch: java.lang.Throwable -> L36
            java.lang.String r5 = "Problem closing idle connection."
            r4.debug(r5, r3)     // Catch: java.lang.Throwable -> L36
        L34:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L36
            return
        L36:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L36
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

    public cz.msebera.android.httpclient.conn.ManagedClientConnection getConnection(cz.msebera.android.httpclient.conn.routing.HttpRoute r4, java.lang.Object r5) {
            r3 = this;
            java.lang.String r5 = "Route"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r5)
            r3.assertStillUp()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r3.log
            boolean r5 = r5.isDebugEnabled()
            if (r5 == 0) goto L26
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r3.log
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Get connection for route "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            r5.debug(r0)
        L26:
            monitor-enter(r3)
            cz.msebera.android.httpclient.impl.conn.SingleClientConnManager$ConnAdapter r5 = r3.managedConn     // Catch: java.lang.Throwable -> L81
            r0 = 1
            r1 = 0
            if (r5 != 0) goto L2f
            r5 = 1
            goto L30
        L2f:
            r5 = 0
        L30:
            java.lang.String r2 = "Invalid use of SingleClientConnManager: connection still allocated.\nMake sure to release the connection before allocating another one."
            cz.msebera.android.httpclient.util.Asserts.check(r5, r2)     // Catch: java.lang.Throwable -> L81
            r3.closeExpiredConnections()     // Catch: java.lang.Throwable -> L81
            cz.msebera.android.httpclient.impl.conn.SingleClientConnManager$PoolEntry r5 = r3.uniquePoolEntry     // Catch: java.lang.Throwable -> L81
            cz.msebera.android.httpclient.conn.OperatedClientConnection r5 = r5.connection     // Catch: java.lang.Throwable -> L81
            boolean r5 = r5.isOpen()     // Catch: java.lang.Throwable -> L81
            if (r5 == 0) goto L57
            cz.msebera.android.httpclient.impl.conn.SingleClientConnManager$PoolEntry r5 = r3.uniquePoolEntry     // Catch: java.lang.Throwable -> L81
            cz.msebera.android.httpclient.conn.routing.RouteTracker r5 = r5.tracker     // Catch: java.lang.Throwable -> L81
            if (r5 == 0) goto L55
            cz.msebera.android.httpclient.conn.routing.HttpRoute r5 = r5.toRoute()     // Catch: java.lang.Throwable -> L81
            boolean r5 = r5.equals(r4)     // Catch: java.lang.Throwable -> L81
            if (r5 != 0) goto L53
            goto L55
        L53:
            r5 = 0
            goto L59
        L55:
            r5 = 1
            goto L59
        L57:
            r5 = 0
            r1 = 1
        L59:
            if (r5 == 0) goto L6a
            cz.msebera.android.httpclient.impl.conn.SingleClientConnManager$PoolEntry r5 = r3.uniquePoolEntry     // Catch: java.io.IOException -> L61 java.lang.Throwable -> L81
            r5.shutdown()     // Catch: java.io.IOException -> L61 java.lang.Throwable -> L81
            goto L6b
        L61:
            r5 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r3.log     // Catch: java.lang.Throwable -> L81
            java.lang.String r2 = "Problem shutting down connection."
            r1.debug(r2, r5)     // Catch: java.lang.Throwable -> L81
            goto L6b
        L6a:
            r0 = r1
        L6b:
            if (r0 == 0) goto L74
            cz.msebera.android.httpclient.impl.conn.SingleClientConnManager$PoolEntry r5 = new cz.msebera.android.httpclient.impl.conn.SingleClientConnManager$PoolEntry     // Catch: java.lang.Throwable -> L81
            r5.<init>(r3)     // Catch: java.lang.Throwable -> L81
            r3.uniquePoolEntry = r5     // Catch: java.lang.Throwable -> L81
        L74:
            cz.msebera.android.httpclient.impl.conn.SingleClientConnManager$ConnAdapter r5 = new cz.msebera.android.httpclient.impl.conn.SingleClientConnManager$ConnAdapter     // Catch: java.lang.Throwable -> L81
            cz.msebera.android.httpclient.impl.conn.SingleClientConnManager$PoolEntry r0 = r3.uniquePoolEntry     // Catch: java.lang.Throwable -> L81
            r5.<init>(r3, r0, r4)     // Catch: java.lang.Throwable -> L81
            r3.managedConn = r5     // Catch: java.lang.Throwable -> L81
            cz.msebera.android.httpclient.impl.conn.SingleClientConnManager$ConnAdapter r4 = r3.managedConn     // Catch: java.lang.Throwable -> L81
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L81
            return r4
        L81:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L81
            throw r4
    }

    @Override
    public cz.msebera.android.httpclient.conn.scheme.SchemeRegistry getSchemeRegistry() {
            r1 = this;
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r0 = r1.schemeRegistry
            return r0
    }

    @Override
    public void releaseConnection(cz.msebera.android.httpclient.conn.ManagedClientConnection r9, long r10, java.util.concurrent.TimeUnit r12) {
            r8 = this;
            boolean r0 = r9 instanceof cz.msebera.android.httpclient.impl.conn.SingleClientConnManager.ConnAdapter
            java.lang.String r1 = "Connection class mismatch, connection not obtained from this manager"
            cz.msebera.android.httpclient.util.Args.check(r0, r1)
            r8.assertStillUp()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r8.log
            boolean r0 = r0.isDebugEnabled()
            if (r0 == 0) goto L28
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r8.log
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Releasing connection "
            r1.append(r2)
            r1.append(r9)
            java.lang.String r1 = r1.toString()
            r0.debug(r1)
        L28:
            cz.msebera.android.httpclient.impl.conn.SingleClientConnManager$ConnAdapter r9 = (cz.msebera.android.httpclient.impl.conn.SingleClientConnManager.ConnAdapter) r9
            monitor-enter(r9)
            cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry r0 = r9.poolEntry     // Catch: java.lang.Throwable -> Ldf
            if (r0 != 0) goto L31
            monitor-exit(r9)     // Catch: java.lang.Throwable -> Ldf
            return
        L31:
            cz.msebera.android.httpclient.conn.ClientConnectionManager r0 = r9.getManager()     // Catch: java.lang.Throwable -> Ldf
            if (r0 != r8) goto L39
            r0 = 1
            goto L3a
        L39:
            r0 = 0
        L3a:
            java.lang.String r1 = "Connection not obtained from this manager"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)     // Catch: java.lang.Throwable -> Ldf
            r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r2 = 0
            r4 = 0
            boolean r5 = r9.isOpen()     // Catch: java.lang.Throwable -> L8a java.io.IOException -> L8c
            if (r5 == 0) goto L69
            boolean r5 = r8.alwaysShutDown     // Catch: java.lang.Throwable -> L8a java.io.IOException -> L8c
            if (r5 != 0) goto L57
            boolean r5 = r9.isMarkedReusable()     // Catch: java.lang.Throwable -> L8a java.io.IOException -> L8c
            if (r5 != 0) goto L69
        L57:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r8.log     // Catch: java.lang.Throwable -> L8a java.io.IOException -> L8c
            boolean r5 = r5.isDebugEnabled()     // Catch: java.lang.Throwable -> L8a java.io.IOException -> L8c
            if (r5 == 0) goto L66
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r8.log     // Catch: java.lang.Throwable -> L8a java.io.IOException -> L8c
            java.lang.String r6 = "Released connection open but not reusable."
            r5.debug(r6)     // Catch: java.lang.Throwable -> L8a java.io.IOException -> L8c
        L66:
            r9.shutdown()     // Catch: java.lang.Throwable -> L8a java.io.IOException -> L8c
        L69:
            r9.detach()     // Catch: java.lang.Throwable -> Ldf
            monitor-enter(r8)     // Catch: java.lang.Throwable -> Ldf
            r8.managedConn = r4     // Catch: java.lang.Throwable -> L87
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L87
            r8.lastReleaseTime = r4     // Catch: java.lang.Throwable -> L87
            int r4 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r4 <= 0) goto L83
            long r10 = r12.toMillis(r10)     // Catch: java.lang.Throwable -> L87
            long r0 = r8.lastReleaseTime     // Catch: java.lang.Throwable -> L87
            long r10 = r10 + r0
            r8.connectionExpiresTime = r10     // Catch: java.lang.Throwable -> L87
            goto L85
        L83:
            r8.connectionExpiresTime = r0     // Catch: java.lang.Throwable -> L87
        L85:
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L87
            goto Lb9
        L87:
            r10 = move-exception
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L87
            throw r10     // Catch: java.lang.Throwable -> Ldf
        L8a:
            r5 = move-exception
            goto Lbe
        L8c:
            r5 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r8.log     // Catch: java.lang.Throwable -> L8a
            boolean r6 = r6.isDebugEnabled()     // Catch: java.lang.Throwable -> L8a
            if (r6 == 0) goto L9c
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r8.log     // Catch: java.lang.Throwable -> L8a
            java.lang.String r7 = "Exception shutting down released connection."
            r6.debug(r7, r5)     // Catch: java.lang.Throwable -> L8a
        L9c:
            r9.detach()     // Catch: java.lang.Throwable -> Ldf
            monitor-enter(r8)     // Catch: java.lang.Throwable -> Ldf
            r8.managedConn = r4     // Catch: java.lang.Throwable -> Lbb
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lbb
            r8.lastReleaseTime = r4     // Catch: java.lang.Throwable -> Lbb
            int r4 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r4 <= 0) goto Lb6
            long r10 = r12.toMillis(r10)     // Catch: java.lang.Throwable -> Lbb
            long r0 = r8.lastReleaseTime     // Catch: java.lang.Throwable -> Lbb
            long r10 = r10 + r0
            r8.connectionExpiresTime = r10     // Catch: java.lang.Throwable -> Lbb
            goto Lb8
        Lb6:
            r8.connectionExpiresTime = r0     // Catch: java.lang.Throwable -> Lbb
        Lb8:
            monitor-exit(r8)     // Catch: java.lang.Throwable -> Lbb
        Lb9:
            monitor-exit(r9)     // Catch: java.lang.Throwable -> Ldf
            return
        Lbb:
            r10 = move-exception
            monitor-exit(r8)     // Catch: java.lang.Throwable -> Lbb
            throw r10     // Catch: java.lang.Throwable -> Ldf
        Lbe:
            r9.detach()     // Catch: java.lang.Throwable -> Ldf
            monitor-enter(r8)     // Catch: java.lang.Throwable -> Ldf
            r8.managedConn = r4     // Catch: java.lang.Throwable -> Ldc
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Ldc
            r8.lastReleaseTime = r6     // Catch: java.lang.Throwable -> Ldc
            int r4 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r4 <= 0) goto Ld8
            long r10 = r12.toMillis(r10)     // Catch: java.lang.Throwable -> Ldc
            long r0 = r8.lastReleaseTime     // Catch: java.lang.Throwable -> Ldc
            long r10 = r10 + r0
            r8.connectionExpiresTime = r10     // Catch: java.lang.Throwable -> Ldc
            goto Lda
        Ld8:
            r8.connectionExpiresTime = r0     // Catch: java.lang.Throwable -> Ldc
        Lda:
            monitor-exit(r8)     // Catch: java.lang.Throwable -> Ldc
            throw r5     // Catch: java.lang.Throwable -> Ldf
        Ldc:
            r10 = move-exception
            monitor-exit(r8)     // Catch: java.lang.Throwable -> Ldc
            throw r10     // Catch: java.lang.Throwable -> Ldf
        Ldf:
            r10 = move-exception
            monitor-exit(r9)     // Catch: java.lang.Throwable -> Ldf
            throw r10
    }

    @Override
    public final cz.msebera.android.httpclient.conn.ClientConnectionRequest requestConnection(cz.msebera.android.httpclient.conn.routing.HttpRoute r2, java.lang.Object r3) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.SingleClientConnManager$1 r0 = new cz.msebera.android.httpclient.impl.conn.SingleClientConnManager$1
            r0.<init>(r1, r2, r3)
            return r0
    }

    protected void revokeConnection() {
            r3 = this;
            cz.msebera.android.httpclient.impl.conn.SingleClientConnManager$ConnAdapter r0 = r3.managedConn
            if (r0 != 0) goto L5
            return
        L5:
            r0.detach()
            monitor-enter(r3)
            cz.msebera.android.httpclient.impl.conn.SingleClientConnManager$PoolEntry r0 = r3.uniquePoolEntry     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L11
            r0.shutdown()     // Catch: java.lang.Throwable -> Lf java.io.IOException -> L11
            goto L19
        Lf:
            r0 = move-exception
            goto L1b
        L11:
            r0 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r3.log     // Catch: java.lang.Throwable -> Lf
            java.lang.String r2 = "Problem while shutting down connection."
            r1.debug(r2, r0)     // Catch: java.lang.Throwable -> Lf
        L19:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> Lf
            return
        L1b:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> Lf
            throw r0
    }

    @Override
    public void shutdown() {
            r4 = this;
            r0 = 1
            r4.isShutDown = r0
            monitor-enter(r4)
            r0 = 0
            cz.msebera.android.httpclient.impl.conn.SingleClientConnManager$PoolEntry r1 = r4.uniquePoolEntry     // Catch: java.lang.Throwable -> L13 java.io.IOException -> L15
            if (r1 == 0) goto Le
            cz.msebera.android.httpclient.impl.conn.SingleClientConnManager$PoolEntry r1 = r4.uniquePoolEntry     // Catch: java.lang.Throwable -> L13 java.io.IOException -> L15
            r1.shutdown()     // Catch: java.lang.Throwable -> L13 java.io.IOException -> L15
        Le:
            r4.uniquePoolEntry = r0     // Catch: java.lang.Throwable -> L27
        L10:
            r4.managedConn = r0     // Catch: java.lang.Throwable -> L27
            goto L20
        L13:
            r1 = move-exception
            goto L22
        L15:
            r1 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r4.log     // Catch: java.lang.Throwable -> L13
            java.lang.String r3 = "Problem while shutting down manager."
            r2.debug(r3, r1)     // Catch: java.lang.Throwable -> L13
            r4.uniquePoolEntry = r0     // Catch: java.lang.Throwable -> L27
            goto L10
        L20:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L27
            return
        L22:
            r4.uniquePoolEntry = r0     // Catch: java.lang.Throwable -> L27
            r4.managedConn = r0     // Catch: java.lang.Throwable -> L27
            throw r1     // Catch: java.lang.Throwable -> L27
        L27:
            r0 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L27
            throw r0
    }
}
