package cz.msebera.android.httpclient.impl.conn.tsccm;

@java.lang.Deprecated
public abstract class AbstractConnPool {
    protected cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler idleConnHandler;
    protected volatile boolean isShutDown;
    protected java.util.Set<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntryRef> issuedConnections;

    @cz.msebera.android.httpclient.annotation.GuardedBy("poolLock")
    protected java.util.Set<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> leasedConnections;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    @cz.msebera.android.httpclient.annotation.GuardedBy("poolLock")
    protected int numConnections;
    protected final java.util.concurrent.locks.Lock poolLock;
    protected java.lang.ref.ReferenceQueue<java.lang.Object> refQueue;

    protected AbstractConnPool() {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r2.leasedConnections = r0
            cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler r0 = new cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler
            r0.<init>()
            r2.idleConnHandler = r0
            java.util.concurrent.locks.ReentrantLock r0 = new java.util.concurrent.locks.ReentrantLock
            r0.<init>()
            r2.poolLock = r0
            return
    }

    protected void closeConnection(cz.msebera.android.httpclient.conn.OperatedClientConnection r3) {
            r2 = this;
            if (r3 == 0) goto Le
            r3.close()     // Catch: java.io.IOException -> L6
            goto Le
        L6:
            r3 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r2.log
            java.lang.String r1 = "I/O error closing connection"
            r0.debug(r1, r3)
        Le:
            return
    }

    public void closeExpiredConnections() {
            r2 = this;
            java.util.concurrent.locks.Lock r0 = r2.poolLock
            r0.lock()
            cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler r0 = r2.idleConnHandler     // Catch: java.lang.Throwable -> L10
            r0.closeExpiredConnections()     // Catch: java.lang.Throwable -> L10
            java.util.concurrent.locks.Lock r0 = r2.poolLock
            r0.unlock()
            return
        L10:
            r0 = move-exception
            java.util.concurrent.locks.Lock r1 = r2.poolLock
            r1.unlock()
            throw r0
    }

    public void closeIdleConnections(long r2, java.util.concurrent.TimeUnit r4) {
            r1 = this;
            java.lang.String r0 = "Time unit"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.util.concurrent.locks.Lock r0 = r1.poolLock
            r0.lock()
            cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler r0 = r1.idleConnHandler     // Catch: java.lang.Throwable -> L19
            long r2 = r4.toMillis(r2)     // Catch: java.lang.Throwable -> L19
            r0.closeIdleConnections(r2)     // Catch: java.lang.Throwable -> L19
            java.util.concurrent.locks.Lock r2 = r1.poolLock
            r2.unlock()
            return
        L19:
            r2 = move-exception
            java.util.concurrent.locks.Lock r3 = r1.poolLock
            r3.unlock()
            throw r2
    }

    public abstract void deleteClosedConnections();

    public void enableConnectionGC() throws java.lang.IllegalStateException {
            r0 = this;
            return
    }

    public abstract void freeEntry(cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r1, boolean r2, long r3, java.util.concurrent.TimeUnit r5);

    public final cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry getEntry(cz.msebera.android.httpclient.conn.routing.HttpRoute r1, java.lang.Object r2, long r3, java.util.concurrent.TimeUnit r5) throws cz.msebera.android.httpclient.conn.ConnectionPoolTimeoutException, java.lang.InterruptedException {
            r0 = this;
            cz.msebera.android.httpclient.impl.conn.tsccm.PoolEntryRequest r1 = r0.requestPoolEntry(r1, r2)
            cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r1 = r1.getPoolEntry(r3, r5)
            return r1
    }

    protected abstract void handleLostEntry(cz.msebera.android.httpclient.conn.routing.HttpRoute r1);

    public void handleReference(java.lang.ref.Reference<?> r1) {
            r0 = this;
            return
    }

    public abstract cz.msebera.android.httpclient.impl.conn.tsccm.PoolEntryRequest requestPoolEntry(cz.msebera.android.httpclient.conn.routing.HttpRoute r1, java.lang.Object r2);

    public void shutdown() {
            r2 = this;
            java.util.concurrent.locks.Lock r0 = r2.poolLock
            r0.lock()
            boolean r0 = r2.isShutDown     // Catch: java.lang.Throwable -> L3a
            if (r0 == 0) goto Lf
            java.util.concurrent.locks.Lock r0 = r2.poolLock
            r0.unlock()
            return
        Lf:
            java.util.Set<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r0 = r2.leasedConnections     // Catch: java.lang.Throwable -> L3a
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L3a
        L15:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L3a
            if (r1 == 0) goto L2c
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L3a
            cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r1 = (cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry) r1     // Catch: java.lang.Throwable -> L3a
            r0.remove()     // Catch: java.lang.Throwable -> L3a
            cz.msebera.android.httpclient.conn.OperatedClientConnection r1 = r1.getConnection()     // Catch: java.lang.Throwable -> L3a
            r2.closeConnection(r1)     // Catch: java.lang.Throwable -> L3a
            goto L15
        L2c:
            cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler r0 = r2.idleConnHandler     // Catch: java.lang.Throwable -> L3a
            r0.removeAll()     // Catch: java.lang.Throwable -> L3a
            r0 = 1
            r2.isShutDown = r0     // Catch: java.lang.Throwable -> L3a
            java.util.concurrent.locks.Lock r0 = r2.poolLock
            r0.unlock()
            return
        L3a:
            r0 = move-exception
            java.util.concurrent.locks.Lock r1 = r2.poolLock
            r1.unlock()
            throw r0
    }
}
