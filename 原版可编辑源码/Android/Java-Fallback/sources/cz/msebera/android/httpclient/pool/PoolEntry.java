package cz.msebera.android.httpclient.pool;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public abstract class PoolEntry<T, C> {
    private final C conn;
    private final long created;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private long expiry;
    private final java.lang.String id;
    private final T route;
    private volatile java.lang.Object state;

    @cz.msebera.android.httpclient.annotation.GuardedBy("this")
    private long updated;
    private final long validityDeadline;

    public PoolEntry(java.lang.String r8, T r9, C r10) {
            r7 = this;
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.MILLISECONDS
            r4 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r0.<init>(r1, r2, r3, r4, r6)
            return
    }

    public PoolEntry(java.lang.String r2, T r3, C r4, long r5, java.util.concurrent.TimeUnit r7) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Route"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "Connection"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.lang.String r0 = "Time unit"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r0)
            r1.id = r2
            r1.route = r3
            r1.conn = r4
            long r2 = java.lang.System.currentTimeMillis()
            r1.created = r2
            r2 = 0
            int r4 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r4 <= 0) goto L2e
            long r2 = r1.created
            long r4 = r7.toMillis(r5)
            long r2 = r2 + r4
            r1.validityDeadline = r2
            goto L35
        L2e:
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r1.validityDeadline = r2
        L35:
            long r2 = r1.validityDeadline
            r1.expiry = r2
            return
    }

    public abstract void close();

    public C getConnection() {
            r1 = this;
            C r0 = r1.conn
            return r0
    }

    public long getCreated() {
            r2 = this;
            long r0 = r2.created
            return r0
    }

    public synchronized long getExpiry() {
            r2 = this;
            monitor-enter(r2)
            long r0 = r2.expiry     // Catch: java.lang.Throwable -> L5
            monitor-exit(r2)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = r1.id
            return r0
    }

    public T getRoute() {
            r1 = this;
            T r0 = r1.route
            return r0
    }

    public java.lang.Object getState() {
            r1 = this;
            java.lang.Object r0 = r1.state
            return r0
    }

    public synchronized long getUpdated() {
            r2 = this;
            monitor-enter(r2)
            long r0 = r2.updated     // Catch: java.lang.Throwable -> L5
            monitor-exit(r2)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    @java.lang.Deprecated
    public long getValidUnit() {
            r2 = this;
            long r0 = r2.validityDeadline
            return r0
    }

    public long getValidityDeadline() {
            r2 = this;
            long r0 = r2.validityDeadline
            return r0
    }

    public abstract boolean isClosed();

    public synchronized boolean isExpired(long r4) {
            r3 = this;
            monitor-enter(r3)
            long r0 = r3.expiry     // Catch: java.lang.Throwable -> Lc
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 < 0) goto L9
            r4 = 1
            goto La
        L9:
            r4 = 0
        La:
            monitor-exit(r3)
            return r4
        Lc:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public void setState(java.lang.Object r1) {
            r0 = this;
            r0.state = r1
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[id:"
            r0.append(r1)
            java.lang.String r1 = r2.id
            r0.append(r1)
            java.lang.String r1 = "][route:"
            r0.append(r1)
            T r1 = r2.route
            r0.append(r1)
            java.lang.String r1 = "][state:"
            r0.append(r1)
            java.lang.Object r1 = r2.state
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public synchronized void updateExpiry(long r4, java.util.concurrent.TimeUnit r6) {
            r3 = this;
            monitor-enter(r3)
            java.lang.String r0 = "Time unit"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)     // Catch: java.lang.Throwable -> L29
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L29
            r3.updated = r0     // Catch: java.lang.Throwable -> L29
            r0 = 0
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 <= 0) goto L1a
            long r0 = r3.updated     // Catch: java.lang.Throwable -> L29
            long r4 = r6.toMillis(r4)     // Catch: java.lang.Throwable -> L29
            long r0 = r0 + r4
            goto L1f
        L1a:
            r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
        L1f:
            long r4 = r3.validityDeadline     // Catch: java.lang.Throwable -> L29
            long r4 = java.lang.Math.min(r0, r4)     // Catch: java.lang.Throwable -> L29
            r3.expiry = r4     // Catch: java.lang.Throwable -> L29
            monitor-exit(r3)
            return
        L29:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }
}
