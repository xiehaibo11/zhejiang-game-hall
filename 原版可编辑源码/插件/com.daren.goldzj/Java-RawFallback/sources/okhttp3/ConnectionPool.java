package okhttp3;

public final class ConnectionPool {
    static final boolean $assertionsDisabled = false;
    private static final java.util.concurrent.Executor executor = null;
    private final java.lang.Runnable cleanupRunnable;
    boolean cleanupRunning;
    private final java.util.Deque<okhttp3.internal.connection.RealConnection> connections;
    private final long keepAliveDurationNs;
    private final int maxIdleConnections;
    final okhttp3.internal.connection.RouteDatabase routeDatabase;


    static {
            java.util.concurrent.ThreadPoolExecutor r8 = new java.util.concurrent.ThreadPoolExecutor
            r1 = 0
            r2 = 2147483647(0x7fffffff, float:NaN)
            r3 = 60
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.SynchronousQueue r6 = new java.util.concurrent.SynchronousQueue
            r6.<init>()
            r0 = 1
            java.lang.String r7 = "OkHttp ConnectionPool"
            java.util.concurrent.ThreadFactory r7 = okhttp3.internal.Util.threadFactory(r7, r0)
            r0 = r8
            r0.<init>(r1, r2, r3, r5, r6, r7)
            okhttp3.ConnectionPool.executor = r8
            return
    }

    public ConnectionPool() {
            r4 = this;
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.MINUTES
            r1 = 5
            r2 = 5
            r4.<init>(r1, r2, r0)
            return
    }

    public ConnectionPool(int r3, long r4, java.util.concurrent.TimeUnit r6) {
            r2 = this;
            r2.<init>()
            okhttp3.ConnectionPool$1 r0 = new okhttp3.ConnectionPool$1
            r0.<init>(r2)
            r2.cleanupRunnable = r0
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>()
            r2.connections = r0
            okhttp3.internal.connection.RouteDatabase r0 = new okhttp3.internal.connection.RouteDatabase
            r0.<init>()
            r2.routeDatabase = r0
            r2.maxIdleConnections = r3
            long r0 = r6.toNanos(r4)
            r2.keepAliveDurationNs = r0
            r0 = 0
            int r3 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r3 <= 0) goto L27
            return
        L27:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "keepAliveDuration <= 0: "
            r6.append(r0)
            r6.append(r4)
            java.lang.String r4 = r6.toString()
            r3.<init>(r4)
            throw r3
    }

    private int pruneAndGetAllocationCount(okhttp3.internal.connection.RealConnection r7, long r8) {
            r6 = this;
            java.util.List<java.lang.ref.Reference<okhttp3.internal.connection.StreamAllocation>> r0 = r7.allocations
            r1 = 0
            r2 = 0
        L4:
            int r3 = r0.size()
            if (r2 >= r3) goto L58
            java.lang.Object r3 = r0.get(r2)
            java.lang.ref.Reference r3 = (java.lang.ref.Reference) r3
            java.lang.Object r4 = r3.get()
            if (r4 == 0) goto L19
            int r2 = r2 + 1
            goto L4
        L19:
            okhttp3.internal.connection.StreamAllocation$StreamAllocationReference r3 = (okhttp3.internal.connection.StreamAllocation.StreamAllocationReference) r3
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "A connection to "
            r4.append(r5)
            okhttp3.Route r5 = r7.route()
            okhttp3.Address r5 = r5.address()
            okhttp3.HttpUrl r5 = r5.url()
            r4.append(r5)
            java.lang.String r5 = " was leaked. Did you forget to close a response body?"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            okhttp3.internal.platform.Platform r5 = okhttp3.internal.platform.Platform.get()
            java.lang.Object r3 = r3.callStackTrace
            r5.logCloseableLeak(r4, r3)
            r0.remove(r2)
            r3 = 1
            r7.noNewStreams = r3
            boolean r3 = r0.isEmpty()
            if (r3 == 0) goto L4
            long r2 = r6.keepAliveDurationNs
            long r8 = r8 - r2
            r7.idleAtNanos = r8
            return r1
        L58:
            int r7 = r0.size()
            return r7
    }

    long cleanup(long r12) {
            r11 = this;
            monitor-enter(r11)
            java.util.Deque<okhttp3.internal.connection.RealConnection> r0 = r11.connections     // Catch: java.lang.Throwable -> L5e
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L5e
            r1 = 0
            r2 = 0
            r3 = -9223372036854775808
            r5 = r2
            r2 = 0
            r6 = 0
        Le:
            boolean r7 = r0.hasNext()     // Catch: java.lang.Throwable -> L5e
            if (r7 == 0) goto L30
            java.lang.Object r7 = r0.next()     // Catch: java.lang.Throwable -> L5e
            okhttp3.internal.connection.RealConnection r7 = (okhttp3.internal.connection.RealConnection) r7     // Catch: java.lang.Throwable -> L5e
            int r8 = r11.pruneAndGetAllocationCount(r7, r12)     // Catch: java.lang.Throwable -> L5e
            if (r8 <= 0) goto L23
            int r6 = r6 + 1
            goto Le
        L23:
            int r2 = r2 + 1
            long r8 = r7.idleAtNanos     // Catch: java.lang.Throwable -> L5e
            long r8 = r12 - r8
            int r10 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r10 <= 0) goto Le
            r5 = r7
            r3 = r8
            goto Le
        L30:
            long r12 = r11.keepAliveDurationNs     // Catch: java.lang.Throwable -> L5e
            int r0 = (r3 > r12 ? 1 : (r3 == r12 ? 0 : -1))
            if (r0 >= 0) goto L4e
            int r12 = r11.maxIdleConnections     // Catch: java.lang.Throwable -> L5e
            if (r2 <= r12) goto L3b
            goto L4e
        L3b:
            if (r2 <= 0) goto L42
            long r12 = r11.keepAliveDurationNs     // Catch: java.lang.Throwable -> L5e
            long r12 = r12 - r3
            monitor-exit(r11)     // Catch: java.lang.Throwable -> L5e
            return r12
        L42:
            if (r6 <= 0) goto L48
            long r12 = r11.keepAliveDurationNs     // Catch: java.lang.Throwable -> L5e
            monitor-exit(r11)     // Catch: java.lang.Throwable -> L5e
            return r12
        L48:
            r11.cleanupRunning = r1     // Catch: java.lang.Throwable -> L5e
            r12 = -1
            monitor-exit(r11)     // Catch: java.lang.Throwable -> L5e
            return r12
        L4e:
            java.util.Deque<okhttp3.internal.connection.RealConnection> r12 = r11.connections     // Catch: java.lang.Throwable -> L5e
            r12.remove(r5)     // Catch: java.lang.Throwable -> L5e
            monitor-exit(r11)     // Catch: java.lang.Throwable -> L5e
            java.net.Socket r12 = r5.socket()
            okhttp3.internal.Util.closeQuietly(r12)
            r12 = 0
            return r12
        L5e:
            r12 = move-exception
            monitor-exit(r11)     // Catch: java.lang.Throwable -> L5e
            throw r12
    }

    boolean connectionBecameIdle(okhttp3.internal.connection.RealConnection r2) {
            r1 = this;
            boolean r0 = r2.noNewStreams
            if (r0 != 0) goto Le
            int r0 = r1.maxIdleConnections
            if (r0 != 0) goto L9
            goto Le
        L9:
            r1.notifyAll()
            r2 = 0
            return r2
        Le:
            java.util.Deque<okhttp3.internal.connection.RealConnection> r0 = r1.connections
            r0.remove(r2)
            r2 = 1
            return r2
    }

    public synchronized int connectionCount() {
            r1 = this;
            monitor-enter(r1)
            java.util.Deque<okhttp3.internal.connection.RealConnection> r0 = r1.connections     // Catch: java.lang.Throwable -> L9
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return r0
        L9:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @javax.annotation.Nullable
    java.net.Socket deduplicate(okhttp3.Address r4, okhttp3.internal.connection.StreamAllocation r5) {
            r3 = this;
            java.util.Deque<okhttp3.internal.connection.RealConnection> r0 = r3.connections
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            r2 = 0
            if (r1 == 0) goto L2a
            java.lang.Object r1 = r0.next()
            okhttp3.internal.connection.RealConnection r1 = (okhttp3.internal.connection.RealConnection) r1
            boolean r2 = r1.isEligible(r4, r2)
            if (r2 == 0) goto L6
            boolean r2 = r1.isMultiplexed()
            if (r2 == 0) goto L6
            okhttp3.internal.connection.RealConnection r2 = r5.connection()
            if (r1 == r2) goto L6
            java.net.Socket r4 = r5.releaseAndAcquire(r1)
            return r4
        L2a:
            return r2
    }

    public void evictAll() {
            r4 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            monitor-enter(r4)
            java.util.Deque<okhttp3.internal.connection.RealConnection> r1 = r4.connections     // Catch: java.lang.Throwable -> L44
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L44
        Lc:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L44
            if (r2 == 0) goto L2a
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L44
            okhttp3.internal.connection.RealConnection r2 = (okhttp3.internal.connection.RealConnection) r2     // Catch: java.lang.Throwable -> L44
            java.util.List<java.lang.ref.Reference<okhttp3.internal.connection.StreamAllocation>> r3 = r2.allocations     // Catch: java.lang.Throwable -> L44
            boolean r3 = r3.isEmpty()     // Catch: java.lang.Throwable -> L44
            if (r3 == 0) goto Lc
            r3 = 1
            r2.noNewStreams = r3     // Catch: java.lang.Throwable -> L44
            r0.add(r2)     // Catch: java.lang.Throwable -> L44
            r1.remove()     // Catch: java.lang.Throwable -> L44
            goto Lc
        L2a:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L44
            java.util.Iterator r0 = r0.iterator()
        L2f:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L43
            java.lang.Object r1 = r0.next()
            okhttp3.internal.connection.RealConnection r1 = (okhttp3.internal.connection.RealConnection) r1
            java.net.Socket r1 = r1.socket()
            okhttp3.internal.Util.closeQuietly(r1)
            goto L2f
        L43:
            return
        L44:
            r0 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L44
            throw r0
    }

    @javax.annotation.Nullable
    okhttp3.internal.connection.RealConnection get(okhttp3.Address r4, okhttp3.internal.connection.StreamAllocation r5, okhttp3.Route r6) {
            r3 = this;
            java.util.Deque<okhttp3.internal.connection.RealConnection> r0 = r3.connections
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1d
            java.lang.Object r1 = r0.next()
            okhttp3.internal.connection.RealConnection r1 = (okhttp3.internal.connection.RealConnection) r1
            boolean r2 = r1.isEligible(r4, r6)
            if (r2 == 0) goto L6
            r4 = 1
            r5.acquire(r1, r4)
            return r1
        L1d:
            r4 = 0
            return r4
    }

    public synchronized int idleConnectionCount() {
            r3 = this;
            monitor-enter(r3)
            r0 = 0
            java.util.Deque<okhttp3.internal.connection.RealConnection> r1 = r3.connections     // Catch: java.lang.Throwable -> L21
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L21
        L8:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L21
            if (r2 == 0) goto L1f
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L21
            okhttp3.internal.connection.RealConnection r2 = (okhttp3.internal.connection.RealConnection) r2     // Catch: java.lang.Throwable -> L21
            java.util.List<java.lang.ref.Reference<okhttp3.internal.connection.StreamAllocation>> r2 = r2.allocations     // Catch: java.lang.Throwable -> L21
            boolean r2 = r2.isEmpty()     // Catch: java.lang.Throwable -> L21
            if (r2 == 0) goto L8
            int r0 = r0 + 1
            goto L8
        L1f:
            monitor-exit(r3)
            return r0
        L21:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    void put(okhttp3.internal.connection.RealConnection r3) {
            r2 = this;
            boolean r0 = r2.cleanupRunning
            if (r0 != 0) goto Le
            r0 = 1
            r2.cleanupRunning = r0
            java.util.concurrent.Executor r0 = okhttp3.ConnectionPool.executor
            java.lang.Runnable r1 = r2.cleanupRunnable
            r0.execute(r1)
        Le:
            java.util.Deque<okhttp3.internal.connection.RealConnection> r0 = r2.connections
            r0.add(r3)
            return
    }
}
