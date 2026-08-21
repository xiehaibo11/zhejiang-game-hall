package okhttp3.internal.connection;

public final class StreamAllocation {
    static final boolean $assertionsDisabled = false;
    public final okhttp3.Address address;
    public final okhttp3.Call call;
    private final java.lang.Object callStackTrace;
    private boolean canceled;
    private okhttp3.internal.http.HttpCodec codec;
    private okhttp3.internal.connection.RealConnection connection;
    private final okhttp3.ConnectionPool connectionPool;
    public final okhttp3.EventListener eventListener;
    private int refusedStreamCount;
    private boolean released;
    private boolean reportedAcquired;
    private okhttp3.Route route;
    private okhttp3.internal.connection.RouteSelector.Selection routeSelection;
    private final okhttp3.internal.connection.RouteSelector routeSelector;

    public static final class StreamAllocationReference extends java.lang.ref.WeakReference<okhttp3.internal.connection.StreamAllocation> {
        public final java.lang.Object callStackTrace;

        StreamAllocationReference(okhttp3.internal.connection.StreamAllocation r1, java.lang.Object r2) {
                r0 = this;
                r0.<init>(r1)
                r0.callStackTrace = r2
                return
        }
    }

    static {
            return
    }

    public StreamAllocation(okhttp3.ConnectionPool r2, okhttp3.Address r3, okhttp3.Call r4, okhttp3.EventListener r5, java.lang.Object r6) {
            r1 = this;
            r1.<init>()
            r1.connectionPool = r2
            r1.address = r3
            r1.call = r4
            r1.eventListener = r5
            okhttp3.internal.connection.RouteSelector r2 = new okhttp3.internal.connection.RouteSelector
            okhttp3.internal.connection.RouteDatabase r0 = r1.routeDatabase()
            r2.<init>(r3, r0, r4, r5)
            r1.routeSelector = r2
            r1.callStackTrace = r6
            return
    }

    private java.net.Socket deallocate(boolean r2, boolean r3, boolean r4) {
            r1 = this;
            r0 = 0
            if (r4 == 0) goto L5
            r1.codec = r0
        L5:
            r4 = 1
            if (r3 == 0) goto La
            r1.released = r4
        La:
            okhttp3.internal.connection.RealConnection r3 = r1.connection
            if (r3 == 0) goto L4e
            if (r2 == 0) goto L12
            r3.noNewStreams = r4
        L12:
            okhttp3.internal.http.HttpCodec r2 = r1.codec
            if (r2 != 0) goto L4e
            boolean r2 = r1.released
            if (r2 != 0) goto L20
            okhttp3.internal.connection.RealConnection r2 = r1.connection
            boolean r2 = r2.noNewStreams
            if (r2 == 0) goto L4e
        L20:
            okhttp3.internal.connection.RealConnection r2 = r1.connection
            r1.release(r2)
            okhttp3.internal.connection.RealConnection r2 = r1.connection
            java.util.List<java.lang.ref.Reference<okhttp3.internal.connection.StreamAllocation>> r2 = r2.allocations
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L4a
            okhttp3.internal.connection.RealConnection r2 = r1.connection
            long r3 = java.lang.System.nanoTime()
            r2.idleAtNanos = r3
            okhttp3.internal.Internal r2 = okhttp3.internal.Internal.instance
            okhttp3.ConnectionPool r3 = r1.connectionPool
            okhttp3.internal.connection.RealConnection r4 = r1.connection
            boolean r2 = r2.connectionBecameIdle(r3, r4)
            if (r2 == 0) goto L4a
            okhttp3.internal.connection.RealConnection r2 = r1.connection
            java.net.Socket r2 = r2.socket()
            goto L4b
        L4a:
            r2 = r0
        L4b:
            r1.connection = r0
            goto L4f
        L4e:
            r2 = r0
        L4f:
            return r2
    }

    private okhttp3.internal.connection.RealConnection findConnection(int r19, int r20, int r21, int r22, boolean r23) throws java.io.IOException {
            r18 = this;
            r1 = r18
            okhttp3.ConnectionPool r2 = r1.connectionPool
            monitor-enter(r2)
            boolean r0 = r1.released     // Catch: java.lang.Throwable -> L144
            if (r0 != 0) goto L13c
            okhttp3.internal.http.HttpCodec r0 = r1.codec     // Catch: java.lang.Throwable -> L144
            if (r0 != 0) goto L134
            boolean r0 = r1.canceled     // Catch: java.lang.Throwable -> L144
            if (r0 != 0) goto L12c
            okhttp3.internal.connection.RealConnection r0 = r1.connection     // Catch: java.lang.Throwable -> L144
            java.net.Socket r3 = r18.releaseIfNoNewStreams()     // Catch: java.lang.Throwable -> L144
            okhttp3.internal.connection.RealConnection r4 = r1.connection     // Catch: java.lang.Throwable -> L144
            r5 = 0
            if (r4 == 0) goto L20
            okhttp3.internal.connection.RealConnection r0 = r1.connection     // Catch: java.lang.Throwable -> L144
            r4 = r5
            goto L22
        L20:
            r4 = r0
            r0 = r5
        L22:
            boolean r6 = r1.reportedAcquired     // Catch: java.lang.Throwable -> L144
            if (r6 != 0) goto L27
            r4 = r5
        L27:
            r6 = 1
            r7 = 0
            if (r0 != 0) goto L43
            okhttp3.internal.Internal r8 = okhttp3.internal.Internal.instance     // Catch: java.lang.Throwable -> L144
            okhttp3.ConnectionPool r9 = r1.connectionPool     // Catch: java.lang.Throwable -> L144
            okhttp3.Address r10 = r1.address     // Catch: java.lang.Throwable -> L144
            r8.get(r9, r10, r1, r5)     // Catch: java.lang.Throwable -> L144
            okhttp3.internal.connection.RealConnection r8 = r1.connection     // Catch: java.lang.Throwable -> L144
            if (r8 == 0) goto L3e
            okhttp3.internal.connection.RealConnection r0 = r1.connection     // Catch: java.lang.Throwable -> L144
            r8 = r0
            r9 = r5
            r0 = 1
            goto L46
        L3e:
            okhttp3.Route r8 = r1.route     // Catch: java.lang.Throwable -> L144
            r9 = r8
            r8 = r0
            goto L45
        L43:
            r8 = r0
            r9 = r5
        L45:
            r0 = 0
        L46:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L144
            okhttp3.internal.Util.closeQuietly(r3)
            if (r4 == 0) goto L53
            okhttp3.EventListener r2 = r1.eventListener
            okhttp3.Call r3 = r1.call
            r2.connectionReleased(r3, r4)
        L53:
            if (r0 == 0) goto L5c
            okhttp3.EventListener r2 = r1.eventListener
            okhttp3.Call r3 = r1.call
            r2.connectionAcquired(r3, r8)
        L5c:
            if (r8 == 0) goto L67
            okhttp3.internal.connection.RealConnection r0 = r1.connection
            okhttp3.Route r0 = r0.route()
            r1.route = r0
            return r8
        L67:
            if (r9 != 0) goto L7d
            okhttp3.internal.connection.RouteSelector$Selection r2 = r1.routeSelection
            if (r2 == 0) goto L73
            boolean r2 = r2.hasNext()
            if (r2 != 0) goto L7d
        L73:
            okhttp3.internal.connection.RouteSelector r2 = r1.routeSelector
            okhttp3.internal.connection.RouteSelector$Selection r2 = r2.next()
            r1.routeSelection = r2
            r2 = 1
            goto L7e
        L7d:
            r2 = 0
        L7e:
            okhttp3.ConnectionPool r3 = r1.connectionPool
            monitor-enter(r3)
            boolean r4 = r1.canceled     // Catch: java.lang.Throwable -> L129
            if (r4 != 0) goto L121
            if (r2 == 0) goto Lb0
            okhttp3.internal.connection.RouteSelector$Selection r2 = r1.routeSelection     // Catch: java.lang.Throwable -> L129
            java.util.List r2 = r2.getAll()     // Catch: java.lang.Throwable -> L129
            int r4 = r2.size()     // Catch: java.lang.Throwable -> L129
            r10 = 0
        L92:
            if (r10 >= r4) goto Lb0
            java.lang.Object r11 = r2.get(r10)     // Catch: java.lang.Throwable -> L129
            okhttp3.Route r11 = (okhttp3.Route) r11     // Catch: java.lang.Throwable -> L129
            okhttp3.internal.Internal r12 = okhttp3.internal.Internal.instance     // Catch: java.lang.Throwable -> L129
            okhttp3.ConnectionPool r13 = r1.connectionPool     // Catch: java.lang.Throwable -> L129
            okhttp3.Address r14 = r1.address     // Catch: java.lang.Throwable -> L129
            r12.get(r13, r14, r1, r11)     // Catch: java.lang.Throwable -> L129
            okhttp3.internal.connection.RealConnection r12 = r1.connection     // Catch: java.lang.Throwable -> L129
            if (r12 == 0) goto Lad
            okhttp3.internal.connection.RealConnection r8 = r1.connection     // Catch: java.lang.Throwable -> L129
            r1.route = r11     // Catch: java.lang.Throwable -> L129
            r0 = 1
            goto Lb0
        Lad:
            int r10 = r10 + 1
            goto L92
        Lb0:
            if (r0 != 0) goto Lc8
            if (r9 != 0) goto Lba
            okhttp3.internal.connection.RouteSelector$Selection r2 = r1.routeSelection     // Catch: java.lang.Throwable -> L129
            okhttp3.Route r9 = r2.next()     // Catch: java.lang.Throwable -> L129
        Lba:
            r1.route = r9     // Catch: java.lang.Throwable -> L129
            r1.refusedStreamCount = r7     // Catch: java.lang.Throwable -> L129
            okhttp3.internal.connection.RealConnection r8 = new okhttp3.internal.connection.RealConnection     // Catch: java.lang.Throwable -> L129
            okhttp3.ConnectionPool r2 = r1.connectionPool     // Catch: java.lang.Throwable -> L129
            r8.<init>(r2, r9)     // Catch: java.lang.Throwable -> L129
            r1.acquire(r8, r7)     // Catch: java.lang.Throwable -> L129
        Lc8:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L129
            if (r0 == 0) goto Ld3
            okhttp3.EventListener r0 = r1.eventListener
            okhttp3.Call r2 = r1.call
            r0.connectionAcquired(r2, r8)
            return r8
        Ld3:
            okhttp3.Call r0 = r1.call
            okhttp3.EventListener r2 = r1.eventListener
            r10 = r8
            r11 = r19
            r12 = r20
            r13 = r21
            r14 = r22
            r15 = r23
            r16 = r0
            r17 = r2
            r10.connect(r11, r12, r13, r14, r15, r16, r17)
            okhttp3.internal.connection.RouteDatabase r0 = r18.routeDatabase()
            okhttp3.Route r2 = r8.route()
            r0.connected(r2)
            okhttp3.ConnectionPool r2 = r1.connectionPool
            monitor-enter(r2)
            r1.reportedAcquired = r6     // Catch: java.lang.Throwable -> L11e
            okhttp3.internal.Internal r0 = okhttp3.internal.Internal.instance     // Catch: java.lang.Throwable -> L11e
            okhttp3.ConnectionPool r3 = r1.connectionPool     // Catch: java.lang.Throwable -> L11e
            r0.put(r3, r8)     // Catch: java.lang.Throwable -> L11e
            boolean r0 = r8.isMultiplexed()     // Catch: java.lang.Throwable -> L11e
            if (r0 == 0) goto L112
            okhttp3.internal.Internal r0 = okhttp3.internal.Internal.instance     // Catch: java.lang.Throwable -> L11e
            okhttp3.ConnectionPool r3 = r1.connectionPool     // Catch: java.lang.Throwable -> L11e
            okhttp3.Address r4 = r1.address     // Catch: java.lang.Throwable -> L11e
            java.net.Socket r5 = r0.deduplicate(r3, r4, r1)     // Catch: java.lang.Throwable -> L11e
            okhttp3.internal.connection.RealConnection r8 = r1.connection     // Catch: java.lang.Throwable -> L11e
        L112:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L11e
            okhttp3.internal.Util.closeQuietly(r5)
            okhttp3.EventListener r0 = r1.eventListener
            okhttp3.Call r2 = r1.call
            r0.connectionAcquired(r2, r8)
            return r8
        L11e:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L11e
            throw r0
        L121:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.lang.Throwable -> L129
            java.lang.String r2 = "Canceled"
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L129
            throw r0     // Catch: java.lang.Throwable -> L129
        L129:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L129
            throw r0
        L12c:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.lang.Throwable -> L144
            java.lang.String r3 = "Canceled"
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L144
            throw r0     // Catch: java.lang.Throwable -> L144
        L134:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L144
            java.lang.String r3 = "codec != null"
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L144
            throw r0     // Catch: java.lang.Throwable -> L144
        L13c:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L144
            java.lang.String r3 = "released"
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L144
            throw r0     // Catch: java.lang.Throwable -> L144
        L144:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L144
            throw r0
    }

    private okhttp3.internal.connection.RealConnection findHealthyConnection(int r4, int r5, int r6, int r7, boolean r8, boolean r9) throws java.io.IOException {
            r3 = this;
        L0:
            okhttp3.internal.connection.RealConnection r0 = r3.findConnection(r4, r5, r6, r7, r8)
            okhttp3.ConnectionPool r1 = r3.connectionPool
            monitor-enter(r1)
            int r2 = r0.successCount     // Catch: java.lang.Throwable -> L19
            if (r2 != 0) goto Ld
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L19
            return r0
        Ld:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L19
            boolean r1 = r0.isHealthy(r9)
            if (r1 != 0) goto L18
            r3.noNewStreams()
            goto L0
        L18:
            return r0
        L19:
            r4 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L19
            throw r4
    }

    private void release(okhttp3.internal.connection.RealConnection r4) {
            r3 = this;
            java.util.List<java.lang.ref.Reference<okhttp3.internal.connection.StreamAllocation>> r0 = r4.allocations
            int r0 = r0.size()
            r1 = 0
        L7:
            if (r1 >= r0) goto L20
            java.util.List<java.lang.ref.Reference<okhttp3.internal.connection.StreamAllocation>> r2 = r4.allocations
            java.lang.Object r2 = r2.get(r1)
            java.lang.ref.Reference r2 = (java.lang.ref.Reference) r2
            java.lang.Object r2 = r2.get()
            if (r2 != r3) goto L1d
            java.util.List<java.lang.ref.Reference<okhttp3.internal.connection.StreamAllocation>> r4 = r4.allocations
            r4.remove(r1)
            return
        L1d:
            int r1 = r1 + 1
            goto L7
        L20:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            r4.<init>()
            throw r4
    }

    private java.net.Socket releaseIfNoNewStreams() {
            r2 = this;
            okhttp3.internal.connection.RealConnection r0 = r2.connection
            if (r0 == 0) goto Lf
            boolean r0 = r0.noNewStreams
            if (r0 == 0) goto Lf
            r0 = 1
            r1 = 0
            java.net.Socket r0 = r2.deallocate(r1, r1, r0)
            return r0
        Lf:
            r0 = 0
            return r0
    }

    private okhttp3.internal.connection.RouteDatabase routeDatabase() {
            r2 = this;
            okhttp3.internal.Internal r0 = okhttp3.internal.Internal.instance
            okhttp3.ConnectionPool r1 = r2.connectionPool
            okhttp3.internal.connection.RouteDatabase r0 = r0.routeDatabase(r1)
            return r0
    }

    public void acquire(okhttp3.internal.connection.RealConnection r2, boolean r3) {
            r1 = this;
            okhttp3.internal.connection.RealConnection r0 = r1.connection
            if (r0 != 0) goto L15
            r1.connection = r2
            r1.reportedAcquired = r3
            java.util.List<java.lang.ref.Reference<okhttp3.internal.connection.StreamAllocation>> r2 = r2.allocations
            okhttp3.internal.connection.StreamAllocation$StreamAllocationReference r3 = new okhttp3.internal.connection.StreamAllocation$StreamAllocationReference
            java.lang.Object r0 = r1.callStackTrace
            r3.<init>(r1, r0)
            r2.add(r3)
            return
        L15:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            r2.<init>()
            throw r2
    }

    public void cancel() {
            r3 = this;
            okhttp3.ConnectionPool r0 = r3.connectionPool
            monitor-enter(r0)
            r1 = 1
            r3.canceled = r1     // Catch: java.lang.Throwable -> L17
            okhttp3.internal.http.HttpCodec r1 = r3.codec     // Catch: java.lang.Throwable -> L17
            okhttp3.internal.connection.RealConnection r2 = r3.connection     // Catch: java.lang.Throwable -> L17
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            if (r1 == 0) goto L11
            r1.cancel()
            goto L16
        L11:
            if (r2 == 0) goto L16
            r2.cancel()
        L16:
            return
        L17:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r1
    }

    public okhttp3.internal.http.HttpCodec codec() {
            r2 = this;
            okhttp3.ConnectionPool r0 = r2.connectionPool
            monitor-enter(r0)
            okhttp3.internal.http.HttpCodec r1 = r2.codec     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r1
    }

    public synchronized okhttp3.internal.connection.RealConnection connection() {
            r1 = this;
            monitor-enter(r1)
            okhttp3.internal.connection.RealConnection r0 = r1.connection     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public boolean hasMoreRoutes() {
            r1 = this;
            okhttp3.Route r0 = r1.route
            if (r0 != 0) goto L19
            okhttp3.internal.connection.RouteSelector$Selection r0 = r1.routeSelection
            if (r0 == 0) goto Le
            boolean r0 = r0.hasNext()
            if (r0 != 0) goto L19
        Le:
            okhttp3.internal.connection.RouteSelector r0 = r1.routeSelector
            boolean r0 = r0.hasNext()
            if (r0 == 0) goto L17
            goto L19
        L17:
            r0 = 0
            goto L1a
        L19:
            r0 = 1
        L1a:
            return r0
    }

    public okhttp3.internal.http.HttpCodec newStream(okhttp3.OkHttpClient r8, okhttp3.Interceptor.Chain r9, boolean r10) {
            r7 = this;
            int r1 = r9.connectTimeoutMillis()
            int r2 = r9.readTimeoutMillis()
            int r3 = r9.writeTimeoutMillis()
            int r4 = r8.pingIntervalMillis()
            boolean r5 = r8.retryOnConnectionFailure()
            r0 = r7
            r6 = r10
            okhttp3.internal.connection.RealConnection r10 = r0.findHealthyConnection(r1, r2, r3, r4, r5, r6)     // Catch: java.io.IOException -> L28
            okhttp3.internal.http.HttpCodec r8 = r10.newCodec(r8, r9, r7)     // Catch: java.io.IOException -> L28
            okhttp3.ConnectionPool r9 = r7.connectionPool     // Catch: java.io.IOException -> L28
            monitor-enter(r9)     // Catch: java.io.IOException -> L28
            r7.codec = r8     // Catch: java.lang.Throwable -> L25
            monitor-exit(r9)     // Catch: java.lang.Throwable -> L25
            return r8
        L25:
            r8 = move-exception
            monitor-exit(r9)     // Catch: java.lang.Throwable -> L25
            throw r8     // Catch: java.io.IOException -> L28
        L28:
            r8 = move-exception
            okhttp3.internal.connection.RouteException r9 = new okhttp3.internal.connection.RouteException
            r9.<init>(r8)
            throw r9
    }

    public void noNewStreams() {
            r4 = this;
            okhttp3.ConnectionPool r0 = r4.connectionPool
            monitor-enter(r0)
            okhttp3.internal.connection.RealConnection r1 = r4.connection     // Catch: java.lang.Throwable -> L1e
            r2 = 1
            r3 = 0
            java.net.Socket r2 = r4.deallocate(r2, r3, r3)     // Catch: java.lang.Throwable -> L1e
            okhttp3.internal.connection.RealConnection r3 = r4.connection     // Catch: java.lang.Throwable -> L1e
            if (r3 == 0) goto L10
            r1 = 0
        L10:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            okhttp3.internal.Util.closeQuietly(r2)
            if (r1 == 0) goto L1d
            okhttp3.EventListener r0 = r4.eventListener
            okhttp3.Call r2 = r4.call
            r0.connectionReleased(r2, r1)
        L1d:
            return
        L1e:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            throw r1
    }

    public void release() {
            r5 = this;
            okhttp3.ConnectionPool r0 = r5.connectionPool
            monitor-enter(r0)
            okhttp3.internal.connection.RealConnection r1 = r5.connection     // Catch: java.lang.Throwable -> L2d
            r2 = 1
            r3 = 0
            java.net.Socket r2 = r5.deallocate(r3, r2, r3)     // Catch: java.lang.Throwable -> L2d
            okhttp3.internal.connection.RealConnection r3 = r5.connection     // Catch: java.lang.Throwable -> L2d
            r4 = 0
            if (r3 == 0) goto L11
            r1 = r4
        L11:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2d
            okhttp3.internal.Util.closeQuietly(r2)
            if (r1 == 0) goto L2c
            okhttp3.internal.Internal r0 = okhttp3.internal.Internal.instance
            okhttp3.Call r2 = r5.call
            r0.timeoutExit(r2, r4)
            okhttp3.EventListener r0 = r5.eventListener
            okhttp3.Call r2 = r5.call
            r0.connectionReleased(r2, r1)
            okhttp3.EventListener r0 = r5.eventListener
            okhttp3.Call r1 = r5.call
            r0.callEnd(r1)
        L2c:
            return
        L2d:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2d
            throw r1
    }

    public java.net.Socket releaseAndAcquire(okhttp3.internal.connection.RealConnection r4) {
            r3 = this;
            okhttp3.internal.http.HttpCodec r0 = r3.codec
            if (r0 != 0) goto L26
            okhttp3.internal.connection.RealConnection r0 = r3.connection
            java.util.List<java.lang.ref.Reference<okhttp3.internal.connection.StreamAllocation>> r0 = r0.allocations
            int r0 = r0.size()
            r1 = 1
            if (r0 != r1) goto L26
            okhttp3.internal.connection.RealConnection r0 = r3.connection
            java.util.List<java.lang.ref.Reference<okhttp3.internal.connection.StreamAllocation>> r0 = r0.allocations
            r2 = 0
            java.lang.Object r0 = r0.get(r2)
            java.lang.ref.Reference r0 = (java.lang.ref.Reference) r0
            java.net.Socket r1 = r3.deallocate(r1, r2, r2)
            r3.connection = r4
            java.util.List<java.lang.ref.Reference<okhttp3.internal.connection.StreamAllocation>> r4 = r4.allocations
            r4.add(r0)
            return r1
        L26:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            r4.<init>()
            throw r4
    }

    public okhttp3.Route route() {
            r1 = this;
            okhttp3.Route r0 = r1.route
            return r0
    }

    public void streamFailed(java.io.IOException r7) {
            r6 = this;
            okhttp3.ConnectionPool r0 = r6.connectionPool
            monitor-enter(r0)
            boolean r1 = r7 instanceof okhttp3.internal.http2.StreamResetException     // Catch: java.lang.Throwable -> L6a
            r2 = 0
            r3 = 0
            r4 = 1
            if (r1 == 0) goto L25
            okhttp3.internal.http2.StreamResetException r7 = (okhttp3.internal.http2.StreamResetException) r7     // Catch: java.lang.Throwable -> L6a
            okhttp3.internal.http2.ErrorCode r7 = r7.errorCode     // Catch: java.lang.Throwable -> L6a
            okhttp3.internal.http2.ErrorCode r1 = okhttp3.internal.http2.ErrorCode.REFUSED_STREAM     // Catch: java.lang.Throwable -> L6a
            if (r7 != r1) goto L1e
            int r7 = r6.refusedStreamCount     // Catch: java.lang.Throwable -> L6a
            int r7 = r7 + r4
            r6.refusedStreamCount = r7     // Catch: java.lang.Throwable -> L6a
            int r7 = r6.refusedStreamCount     // Catch: java.lang.Throwable -> L6a
            if (r7 <= r4) goto L4c
            r6.route = r3     // Catch: java.lang.Throwable -> L6a
            goto L4a
        L1e:
            okhttp3.internal.http2.ErrorCode r1 = okhttp3.internal.http2.ErrorCode.CANCEL     // Catch: java.lang.Throwable -> L6a
            if (r7 == r1) goto L4c
            r6.route = r3     // Catch: java.lang.Throwable -> L6a
            goto L4a
        L25:
            okhttp3.internal.connection.RealConnection r1 = r6.connection     // Catch: java.lang.Throwable -> L6a
            if (r1 == 0) goto L4c
            okhttp3.internal.connection.RealConnection r1 = r6.connection     // Catch: java.lang.Throwable -> L6a
            boolean r1 = r1.isMultiplexed()     // Catch: java.lang.Throwable -> L6a
            if (r1 == 0) goto L35
            boolean r1 = r7 instanceof okhttp3.internal.http2.ConnectionShutdownException     // Catch: java.lang.Throwable -> L6a
            if (r1 == 0) goto L4c
        L35:
            okhttp3.internal.connection.RealConnection r1 = r6.connection     // Catch: java.lang.Throwable -> L6a
            int r1 = r1.successCount     // Catch: java.lang.Throwable -> L6a
            if (r1 != 0) goto L4a
            okhttp3.Route r1 = r6.route     // Catch: java.lang.Throwable -> L6a
            if (r1 == 0) goto L48
            if (r7 == 0) goto L48
            okhttp3.internal.connection.RouteSelector r1 = r6.routeSelector     // Catch: java.lang.Throwable -> L6a
            okhttp3.Route r5 = r6.route     // Catch: java.lang.Throwable -> L6a
            r1.connectFailed(r5, r7)     // Catch: java.lang.Throwable -> L6a
        L48:
            r6.route = r3     // Catch: java.lang.Throwable -> L6a
        L4a:
            r7 = 1
            goto L4d
        L4c:
            r7 = 0
        L4d:
            okhttp3.internal.connection.RealConnection r1 = r6.connection     // Catch: java.lang.Throwable -> L6a
            java.net.Socket r7 = r6.deallocate(r7, r2, r4)     // Catch: java.lang.Throwable -> L6a
            okhttp3.internal.connection.RealConnection r2 = r6.connection     // Catch: java.lang.Throwable -> L6a
            if (r2 != 0) goto L5b
            boolean r2 = r6.reportedAcquired     // Catch: java.lang.Throwable -> L6a
            if (r2 != 0) goto L5c
        L5b:
            r1 = r3
        L5c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L6a
            okhttp3.internal.Util.closeQuietly(r7)
            if (r1 == 0) goto L69
            okhttp3.EventListener r7 = r6.eventListener
            okhttp3.Call r0 = r6.call
            r7.connectionReleased(r0, r1)
        L69:
            return
        L6a:
            r7 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L6a
            throw r7
    }

    public void streamFinished(boolean r3, okhttp3.internal.http.HttpCodec r4, long r5, java.io.IOException r7) {
            r2 = this;
            okhttp3.EventListener r0 = r2.eventListener
            okhttp3.Call r1 = r2.call
            r0.responseBodyEnd(r1, r5)
            okhttp3.ConnectionPool r5 = r2.connectionPool
            monitor-enter(r5)
            if (r4 == 0) goto L59
            okhttp3.internal.http.HttpCodec r6 = r2.codec     // Catch: java.lang.Throwable -> L7a
            if (r4 != r6) goto L59
            r4 = 1
            if (r3 != 0) goto L1a
            okhttp3.internal.connection.RealConnection r6 = r2.connection     // Catch: java.lang.Throwable -> L7a
            int r0 = r6.successCount     // Catch: java.lang.Throwable -> L7a
            int r0 = r0 + r4
            r6.successCount = r0     // Catch: java.lang.Throwable -> L7a
        L1a:
            okhttp3.internal.connection.RealConnection r6 = r2.connection     // Catch: java.lang.Throwable -> L7a
            r0 = 0
            java.net.Socket r3 = r2.deallocate(r3, r0, r4)     // Catch: java.lang.Throwable -> L7a
            okhttp3.internal.connection.RealConnection r4 = r2.connection     // Catch: java.lang.Throwable -> L7a
            r0 = 0
            if (r4 == 0) goto L27
            r6 = r0
        L27:
            boolean r4 = r2.released     // Catch: java.lang.Throwable -> L7a
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L7a
            okhttp3.internal.Util.closeQuietly(r3)
            if (r6 == 0) goto L36
            okhttp3.EventListener r3 = r2.eventListener
            okhttp3.Call r5 = r2.call
            r3.connectionReleased(r5, r6)
        L36:
            if (r7 == 0) goto L48
            okhttp3.internal.Internal r3 = okhttp3.internal.Internal.instance
            okhttp3.Call r4 = r2.call
            java.io.IOException r3 = r3.timeoutExit(r4, r7)
            okhttp3.EventListener r4 = r2.eventListener
            okhttp3.Call r5 = r2.call
            r4.callFailed(r5, r3)
            goto L58
        L48:
            if (r4 == 0) goto L58
            okhttp3.internal.Internal r3 = okhttp3.internal.Internal.instance
            okhttp3.Call r4 = r2.call
            r3.timeoutExit(r4, r0)
            okhttp3.EventListener r3 = r2.eventListener
            okhttp3.Call r4 = r2.call
            r3.callEnd(r4)
        L58:
            return
        L59:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L7a
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7a
            r6.<init>()     // Catch: java.lang.Throwable -> L7a
            java.lang.String r7 = "expected "
            r6.append(r7)     // Catch: java.lang.Throwable -> L7a
            okhttp3.internal.http.HttpCodec r7 = r2.codec     // Catch: java.lang.Throwable -> L7a
            r6.append(r7)     // Catch: java.lang.Throwable -> L7a
            java.lang.String r7 = " but was "
            r6.append(r7)     // Catch: java.lang.Throwable -> L7a
            r6.append(r4)     // Catch: java.lang.Throwable -> L7a
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Throwable -> L7a
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L7a
            throw r3     // Catch: java.lang.Throwable -> L7a
        L7a:
            r3 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L7a
            throw r3
    }

    public java.lang.String toString() {
            r1 = this;
            okhttp3.internal.connection.RealConnection r0 = r1.connection()
            if (r0 == 0) goto Lb
            java.lang.String r0 = r0.toString()
            goto L11
        Lb:
            okhttp3.Address r0 = r1.address
            java.lang.String r0 = r0.toString()
        L11:
            return r0
    }
}
