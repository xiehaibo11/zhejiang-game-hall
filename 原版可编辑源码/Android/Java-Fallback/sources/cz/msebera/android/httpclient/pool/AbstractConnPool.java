package cz.msebera.android.httpclient.pool;

import cz.msebera.android.httpclient.pool.PoolEntry;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public abstract class AbstractConnPool<T, C, E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> implements cz.msebera.android.httpclient.pool.ConnPool<T, E>, cz.msebera.android.httpclient.pool.ConnPoolControl<T> {
    private final java.util.LinkedList<E> available;
    private final cz.msebera.android.httpclient.pool.ConnFactory<T, C> connFactory;
    private volatile int defaultMaxPerRoute;
    private volatile boolean isShutDown;
    private final java.util.Set<E> leased;
    private final java.util.concurrent.locks.Lock lock;
    private final java.util.Map<T, java.lang.Integer> maxPerRoute;
    private volatile int maxTotal;
    private final java.util.LinkedList<cz.msebera.android.httpclient.pool.PoolEntryFuture<E>> pending;
    private final java.util.Map<T, cz.msebera.android.httpclient.pool.RouteSpecificPool<T, C, E>> routeToPool;
    private volatile int validateAfterInactivity;





    public AbstractConnPool(cz.msebera.android.httpclient.pool.ConnFactory<T, C> r2, int r3, int r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Connection factory"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.pool.ConnFactory r2 = (cz.msebera.android.httpclient.pool.ConnFactory) r2
            r1.connFactory = r2
            java.lang.String r2 = "Max per route value"
            int r2 = cz.msebera.android.httpclient.util.Args.positive(r3, r2)
            r1.defaultMaxPerRoute = r2
            java.lang.String r2 = "Max total value"
            int r2 = cz.msebera.android.httpclient.util.Args.positive(r4, r2)
            r1.maxTotal = r2
            java.util.concurrent.locks.ReentrantLock r2 = new java.util.concurrent.locks.ReentrantLock
            r2.<init>()
            r1.lock = r2
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            r1.routeToPool = r2
            java.util.HashSet r2 = new java.util.HashSet
            r2.<init>()
            r1.leased = r2
            java.util.LinkedList r2 = new java.util.LinkedList
            r2.<init>()
            r1.available = r2
            java.util.LinkedList r2 = new java.util.LinkedList
            r2.<init>()
            r1.pending = r2
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            r1.maxPerRoute = r2
            return
    }

    static cz.msebera.android.httpclient.pool.PoolEntry access$000(cz.msebera.android.httpclient.pool.AbstractConnPool r0, java.lang.Object r1, java.lang.Object r2, long r3, java.util.concurrent.TimeUnit r5, cz.msebera.android.httpclient.pool.PoolEntryFuture r6) throws java.io.IOException, java.lang.InterruptedException, java.util.concurrent.TimeoutException {
            cz.msebera.android.httpclient.pool.PoolEntry r0 = r0.getPoolEntryBlocking(r1, r2, r3, r5, r6)
            return r0
    }

    private int getMax(T r2) {
            r1 = this;
            java.util.Map<T, java.lang.Integer> r0 = r1.maxPerRoute
            java.lang.Object r2 = r0.get(r2)
            java.lang.Integer r2 = (java.lang.Integer) r2
            if (r2 == 0) goto Lf
            int r2 = r2.intValue()
            return r2
        Lf:
            int r2 = r1.defaultMaxPerRoute
            return r2
    }

    private cz.msebera.android.httpclient.pool.RouteSpecificPool<T, C, E> getPool(T r3) {
            r2 = this;
            java.util.Map<T, cz.msebera.android.httpclient.pool.RouteSpecificPool<T, C, E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>>> r0 = r2.routeToPool
            java.lang.Object r0 = r0.get(r3)
            cz.msebera.android.httpclient.pool.RouteSpecificPool r0 = (cz.msebera.android.httpclient.pool.RouteSpecificPool) r0
            if (r0 != 0) goto L14
            cz.msebera.android.httpclient.pool.AbstractConnPool$1 r0 = new cz.msebera.android.httpclient.pool.AbstractConnPool$1
            r0.<init>(r2, r3, r3)
            java.util.Map<T, cz.msebera.android.httpclient.pool.RouteSpecificPool<T, C, E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>>> r1 = r2.routeToPool
            r1.put(r3, r0)
        L14:
            return r0
    }

    private E getPoolEntryBlocking(T r8, java.lang.Object r9, long r10, java.util.concurrent.TimeUnit r12, cz.msebera.android.httpclient.pool.PoolEntryFuture<E> r13) throws java.io.IOException, java.lang.InterruptedException, java.util.concurrent.TimeoutException {
            r7 = this;
            r0 = 0
            r1 = 0
            int r3 = (r10 > r1 ? 1 : (r10 == r1 ? 0 : -1))
            if (r3 <= 0) goto L16
            java.util.Date r1 = new java.util.Date
            long r2 = java.lang.System.currentTimeMillis()
            long r10 = r12.toMillis(r10)
            long r2 = r2 + r10
            r1.<init>(r2)
            goto L17
        L16:
            r1 = r0
        L17:
            java.util.concurrent.locks.Lock r10 = r7.lock
            r10.lock()
            cz.msebera.android.httpclient.pool.RouteSpecificPool r10 = r7.getPool(r8)     // Catch: java.lang.Throwable -> L138
        L20:
            if (r0 != 0) goto L130
            boolean r11 = r7.isShutDown     // Catch: java.lang.Throwable -> L138
            r12 = 1
            r0 = 0
            if (r11 != 0) goto L2a
            r11 = 1
            goto L2b
        L2a:
            r11 = 0
        L2b:
            java.lang.String r2 = "Connection pool shut down"
            cz.msebera.android.httpclient.util.Asserts.check(r11, r2)     // Catch: java.lang.Throwable -> L138
        L30:
            cz.msebera.android.httpclient.pool.PoolEntry r11 = r10.getFree(r9)     // Catch: java.lang.Throwable -> L138
            if (r11 != 0) goto L37
            goto L71
        L37:
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L138
            boolean r2 = r11.isExpired(r2)     // Catch: java.lang.Throwable -> L138
            if (r2 == 0) goto L45
            r11.close()     // Catch: java.lang.Throwable -> L138
            goto L62
        L45:
            int r2 = r7.validateAfterInactivity     // Catch: java.lang.Throwable -> L138
            if (r2 <= 0) goto L62
            long r2 = r11.getUpdated()     // Catch: java.lang.Throwable -> L138
            int r4 = r7.validateAfterInactivity     // Catch: java.lang.Throwable -> L138
            long r4 = (long) r4     // Catch: java.lang.Throwable -> L138
            long r2 = r2 + r4
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L138
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 > 0) goto L62
            boolean r2 = r7.validate(r11)     // Catch: java.lang.Throwable -> L138
            if (r2 != 0) goto L62
            r11.close()     // Catch: java.lang.Throwable -> L138
        L62:
            boolean r2 = r11.isClosed()     // Catch: java.lang.Throwable -> L138
            if (r2 == 0) goto L71
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r2 = r7.available     // Catch: java.lang.Throwable -> L138
            r2.remove(r11)     // Catch: java.lang.Throwable -> L138
            r10.free(r11, r0)     // Catch: java.lang.Throwable -> L138
            goto L30
        L71:
            if (r11 == 0) goto L86
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r8 = r7.available     // Catch: java.lang.Throwable -> L138
            r8.remove(r11)     // Catch: java.lang.Throwable -> L138
            java.util.Set<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r8 = r7.leased     // Catch: java.lang.Throwable -> L138
            r8.add(r11)     // Catch: java.lang.Throwable -> L138
            r7.onReuse(r11)     // Catch: java.lang.Throwable -> L138
            java.util.concurrent.locks.Lock r8 = r7.lock
            r8.unlock()
            return r11
        L86:
            int r2 = r7.getMax(r8)     // Catch: java.lang.Throwable -> L138
            int r3 = r10.getAllocatedCount()     // Catch: java.lang.Throwable -> L138
            int r3 = r3 + r12
            int r3 = r3 - r2
            int r3 = java.lang.Math.max(r0, r3)     // Catch: java.lang.Throwable -> L138
            if (r3 <= 0) goto Lae
            r4 = 0
        L97:
            if (r4 >= r3) goto Lae
            cz.msebera.android.httpclient.pool.PoolEntry r5 = r10.getLastUsed()     // Catch: java.lang.Throwable -> L138
            if (r5 != 0) goto La0
            goto Lae
        La0:
            r5.close()     // Catch: java.lang.Throwable -> L138
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r6 = r7.available     // Catch: java.lang.Throwable -> L138
            r6.remove(r5)     // Catch: java.lang.Throwable -> L138
            r10.remove(r5)     // Catch: java.lang.Throwable -> L138
            int r4 = r4 + 1
            goto L97
        Lae:
            int r3 = r10.getAllocatedCount()     // Catch: java.lang.Throwable -> L138
            if (r3 >= r2) goto Lff
            java.util.Set<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r2 = r7.leased     // Catch: java.lang.Throwable -> L138
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L138
            int r3 = r7.maxTotal     // Catch: java.lang.Throwable -> L138
            int r3 = r3 - r2
            int r0 = java.lang.Math.max(r3, r0)     // Catch: java.lang.Throwable -> L138
            if (r0 <= 0) goto Lff
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r9 = r7.available     // Catch: java.lang.Throwable -> L138
            int r9 = r9.size()     // Catch: java.lang.Throwable -> L138
            int r0 = r0 - r12
            if (r9 <= r0) goto Lea
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r9 = r7.available     // Catch: java.lang.Throwable -> L138
            boolean r9 = r9.isEmpty()     // Catch: java.lang.Throwable -> L138
            if (r9 != 0) goto Lea
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r9 = r7.available     // Catch: java.lang.Throwable -> L138
            java.lang.Object r9 = r9.removeLast()     // Catch: java.lang.Throwable -> L138
            cz.msebera.android.httpclient.pool.PoolEntry r9 = (cz.msebera.android.httpclient.pool.PoolEntry) r9     // Catch: java.lang.Throwable -> L138
            r9.close()     // Catch: java.lang.Throwable -> L138
            java.lang.Object r11 = r9.getRoute()     // Catch: java.lang.Throwable -> L138
            cz.msebera.android.httpclient.pool.RouteSpecificPool r11 = r7.getPool(r11)     // Catch: java.lang.Throwable -> L138
            r11.remove(r9)     // Catch: java.lang.Throwable -> L138
        Lea:
            cz.msebera.android.httpclient.pool.ConnFactory<T, C> r9 = r7.connFactory     // Catch: java.lang.Throwable -> L138
            java.lang.Object r8 = r9.create(r8)     // Catch: java.lang.Throwable -> L138
            cz.msebera.android.httpclient.pool.PoolEntry r8 = r10.add(r8)     // Catch: java.lang.Throwable -> L138
            java.util.Set<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r9 = r7.leased     // Catch: java.lang.Throwable -> L138
            r9.add(r8)     // Catch: java.lang.Throwable -> L138
            java.util.concurrent.locks.Lock r9 = r7.lock
            r9.unlock()
            return r8
        Lff:
            r10.queue(r13)     // Catch: java.lang.Throwable -> L126
            java.util.LinkedList<cz.msebera.android.httpclient.pool.PoolEntryFuture<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>>> r12 = r7.pending     // Catch: java.lang.Throwable -> L126
            r12.add(r13)     // Catch: java.lang.Throwable -> L126
            boolean r12 = r13.await(r1)     // Catch: java.lang.Throwable -> L126
            r10.unqueue(r13)     // Catch: java.lang.Throwable -> L138
            java.util.LinkedList<cz.msebera.android.httpclient.pool.PoolEntryFuture<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>>> r0 = r7.pending     // Catch: java.lang.Throwable -> L138
            r0.remove(r13)     // Catch: java.lang.Throwable -> L138
            if (r12 != 0) goto L123
            if (r1 == 0) goto L123
            long r2 = r1.getTime()     // Catch: java.lang.Throwable -> L138
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L138
            int r12 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r12 <= 0) goto L130
        L123:
            r0 = r11
            goto L20
        L126:
            r8 = move-exception
            r10.unqueue(r13)     // Catch: java.lang.Throwable -> L138
            java.util.LinkedList<cz.msebera.android.httpclient.pool.PoolEntryFuture<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>>> r9 = r7.pending     // Catch: java.lang.Throwable -> L138
            r9.remove(r13)     // Catch: java.lang.Throwable -> L138
            throw r8     // Catch: java.lang.Throwable -> L138
        L130:
            java.util.concurrent.TimeoutException r8 = new java.util.concurrent.TimeoutException     // Catch: java.lang.Throwable -> L138
            java.lang.String r9 = "Timeout waiting for connection"
            r8.<init>(r9)     // Catch: java.lang.Throwable -> L138
            throw r8     // Catch: java.lang.Throwable -> L138
        L138:
            r8 = move-exception
            java.util.concurrent.locks.Lock r9 = r7.lock
            r9.unlock()
            throw r8
    }

    private void purgePoolMap() {
            r3 = this;
            java.util.Map<T, cz.msebera.android.httpclient.pool.RouteSpecificPool<T, C, E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>>> r0 = r3.routeToPool
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2b
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r1 = r1.getValue()
            cz.msebera.android.httpclient.pool.RouteSpecificPool r1 = (cz.msebera.android.httpclient.pool.RouteSpecificPool) r1
            int r2 = r1.getPendingCount()
            int r1 = r1.getAllocatedCount()
            int r2 = r2 + r1
            if (r2 != 0) goto La
            r0.remove()
            goto La
        L2b:
            return
    }

    public void closeExpired() {
            r3 = this;
            long r0 = java.lang.System.currentTimeMillis()
            cz.msebera.android.httpclient.pool.AbstractConnPool$4 r2 = new cz.msebera.android.httpclient.pool.AbstractConnPool$4
            r2.<init>(r3, r0)
            r3.enumAvailable(r2)
            return
    }

    public void closeIdle(long r3, java.util.concurrent.TimeUnit r5) {
            r2 = this;
            java.lang.String r0 = "Time unit"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            long r3 = r5.toMillis(r3)
            r0 = 0
            int r5 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r5 >= 0) goto L10
            r3 = r0
        L10:
            long r0 = java.lang.System.currentTimeMillis()
            long r0 = r0 - r3
            cz.msebera.android.httpclient.pool.AbstractConnPool$3 r3 = new cz.msebera.android.httpclient.pool.AbstractConnPool$3
            r3.<init>(r2, r0)
            r2.enumAvailable(r3)
            return
    }

    protected abstract E createEntry(T r1, C r2);

    protected void enumAvailable(cz.msebera.android.httpclient.pool.PoolEntryCallback<T, C> r4) {
            r3 = this;
            java.util.concurrent.locks.Lock r0 = r3.lock
            r0.lock()
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r0 = r3.available     // Catch: java.lang.Throwable -> L38
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L38
        Lb:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L38
            if (r1 == 0) goto L2f
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L38
            cz.msebera.android.httpclient.pool.PoolEntry r1 = (cz.msebera.android.httpclient.pool.PoolEntry) r1     // Catch: java.lang.Throwable -> L38
            r4.process(r1)     // Catch: java.lang.Throwable -> L38
            boolean r2 = r1.isClosed()     // Catch: java.lang.Throwable -> L38
            if (r2 == 0) goto Lb
            java.lang.Object r2 = r1.getRoute()     // Catch: java.lang.Throwable -> L38
            cz.msebera.android.httpclient.pool.RouteSpecificPool r2 = r3.getPool(r2)     // Catch: java.lang.Throwable -> L38
            r2.remove(r1)     // Catch: java.lang.Throwable -> L38
            r0.remove()     // Catch: java.lang.Throwable -> L38
            goto Lb
        L2f:
            r3.purgePoolMap()     // Catch: java.lang.Throwable -> L38
            java.util.concurrent.locks.Lock r4 = r3.lock
            r4.unlock()
            return
        L38:
            r4 = move-exception
            java.util.concurrent.locks.Lock r0 = r3.lock
            r0.unlock()
            throw r4
    }

    protected void enumLeased(cz.msebera.android.httpclient.pool.PoolEntryCallback<T, C> r3) {
            r2 = this;
            java.util.concurrent.locks.Lock r0 = r2.lock
            r0.lock()
            java.util.Set<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r0 = r2.leased     // Catch: java.lang.Throwable -> L21
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L21
        Lb:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L21
            if (r1 == 0) goto L1b
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L21
            cz.msebera.android.httpclient.pool.PoolEntry r1 = (cz.msebera.android.httpclient.pool.PoolEntry) r1     // Catch: java.lang.Throwable -> L21
            r3.process(r1)     // Catch: java.lang.Throwable -> L21
            goto Lb
        L1b:
            java.util.concurrent.locks.Lock r3 = r2.lock
            r3.unlock()
            return
        L21:
            r3 = move-exception
            java.util.concurrent.locks.Lock r0 = r2.lock
            r0.unlock()
            throw r3
    }

    @Override
    public int getDefaultMaxPerRoute() {
            r2 = this;
            java.util.concurrent.locks.Lock r0 = r2.lock
            r0.lock()
            int r0 = r2.defaultMaxPerRoute     // Catch: java.lang.Throwable -> Ld
            java.util.concurrent.locks.Lock r1 = r2.lock
            r1.unlock()
            return r0
        Ld:
            r0 = move-exception
            java.util.concurrent.locks.Lock r1 = r2.lock
            r1.unlock()
            throw r0
    }

    @Override
    public int getMaxPerRoute(T r2) {
            r1 = this;
            java.lang.String r0 = "Route"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.util.concurrent.locks.Lock r0 = r1.lock
            r0.lock()
            int r2 = r1.getMax(r2)     // Catch: java.lang.Throwable -> L14
            java.util.concurrent.locks.Lock r0 = r1.lock
            r0.unlock()
            return r2
        L14:
            r2 = move-exception
            java.util.concurrent.locks.Lock r0 = r1.lock
            r0.unlock()
            throw r2
    }

    @Override
    public int getMaxTotal() {
            r2 = this;
            java.util.concurrent.locks.Lock r0 = r2.lock
            r0.lock()
            int r0 = r2.maxTotal     // Catch: java.lang.Throwable -> Ld
            java.util.concurrent.locks.Lock r1 = r2.lock
            r1.unlock()
            return r0
        Ld:
            r0 = move-exception
            java.util.concurrent.locks.Lock r1 = r2.lock
            r1.unlock()
            throw r0
    }

    public java.util.Set<T> getRoutes() {
            r2 = this;
            java.util.concurrent.locks.Lock r0 = r2.lock
            r0.lock()
            java.util.HashSet r0 = new java.util.HashSet     // Catch: java.lang.Throwable -> L16
            java.util.Map<T, cz.msebera.android.httpclient.pool.RouteSpecificPool<T, C, E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>>> r1 = r2.routeToPool     // Catch: java.lang.Throwable -> L16
            java.util.Set r1 = r1.keySet()     // Catch: java.lang.Throwable -> L16
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L16
            java.util.concurrent.locks.Lock r1 = r2.lock
            r1.unlock()
            return r0
        L16:
            r0 = move-exception
            java.util.concurrent.locks.Lock r1 = r2.lock
            r1.unlock()
            throw r0
    }

    @Override
    public cz.msebera.android.httpclient.pool.PoolStats getStats(T r5) {
            r4 = this;
            java.lang.String r0 = "Route"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            java.util.concurrent.locks.Lock r0 = r4.lock
            r0.lock()
            cz.msebera.android.httpclient.pool.RouteSpecificPool r0 = r4.getPool(r5)     // Catch: java.lang.Throwable -> L29
            cz.msebera.android.httpclient.pool.PoolStats r1 = new cz.msebera.android.httpclient.pool.PoolStats     // Catch: java.lang.Throwable -> L29
            int r2 = r0.getLeasedCount()     // Catch: java.lang.Throwable -> L29
            int r3 = r0.getPendingCount()     // Catch: java.lang.Throwable -> L29
            int r0 = r0.getAvailableCount()     // Catch: java.lang.Throwable -> L29
            int r5 = r4.getMax(r5)     // Catch: java.lang.Throwable -> L29
            r1.<init>(r2, r3, r0, r5)     // Catch: java.lang.Throwable -> L29
            java.util.concurrent.locks.Lock r5 = r4.lock
            r5.unlock()
            return r1
        L29:
            r5 = move-exception
            java.util.concurrent.locks.Lock r0 = r4.lock
            r0.unlock()
            throw r5
    }

    @Override
    public cz.msebera.android.httpclient.pool.PoolStats getTotalStats() {
            r5 = this;
            java.util.concurrent.locks.Lock r0 = r5.lock
            r0.lock()
            cz.msebera.android.httpclient.pool.PoolStats r0 = new cz.msebera.android.httpclient.pool.PoolStats     // Catch: java.lang.Throwable -> L24
            java.util.Set<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r1 = r5.leased     // Catch: java.lang.Throwable -> L24
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L24
            java.util.LinkedList<cz.msebera.android.httpclient.pool.PoolEntryFuture<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>>> r2 = r5.pending     // Catch: java.lang.Throwable -> L24
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L24
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r3 = r5.available     // Catch: java.lang.Throwable -> L24
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L24
            int r4 = r5.maxTotal     // Catch: java.lang.Throwable -> L24
            r0.<init>(r1, r2, r3, r4)     // Catch: java.lang.Throwable -> L24
            java.util.concurrent.locks.Lock r1 = r5.lock
            r1.unlock()
            return r0
        L24:
            r0 = move-exception
            java.util.concurrent.locks.Lock r1 = r5.lock
            r1.unlock()
            throw r0
    }

    public int getValidateAfterInactivity() {
            r1 = this;
            int r0 = r1.validateAfterInactivity
            return r0
    }

    public boolean isShutdown() {
            r1 = this;
            boolean r0 = r1.isShutDown
            return r0
    }

    public java.util.concurrent.Future<E> lease(T r2, java.lang.Object r3) {
            r1 = this;
            r0 = 0
            java.util.concurrent.Future r2 = r1.lease(r2, r3, r0)
            return r2
    }

    @Override
    public java.util.concurrent.Future<E> lease(T r9, java.lang.Object r10, cz.msebera.android.httpclient.concurrent.FutureCallback<E> r11) {
            r8 = this;
            java.lang.String r0 = "Route"
            cz.msebera.android.httpclient.util.Args.notNull(r9, r0)
            boolean r0 = r8.isShutDown
            r0 = r0 ^ 1
            java.lang.String r1 = "Connection pool shut down"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)
            cz.msebera.android.httpclient.pool.AbstractConnPool$2 r0 = new cz.msebera.android.httpclient.pool.AbstractConnPool$2
            java.util.concurrent.locks.Lock r4 = r8.lock
            r2 = r0
            r3 = r8
            r5 = r11
            r6 = r9
            r7 = r10
            r2.<init>(r3, r4, r5, r6, r7)
            return r0
    }

    protected void onLease(E r1) {
            r0 = this;
            return
    }

    protected void onRelease(E r1) {
            r0 = this;
            return
    }

    protected void onReuse(E r1) {
            r0 = this;
            return
    }

    public void release(E r2, boolean r3) {
            r1 = this;
            java.util.concurrent.locks.Lock r0 = r1.lock
            r0.lock()
            java.util.Set<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r0 = r1.leased     // Catch: java.lang.Throwable -> L49
            boolean r0 = r0.remove(r2)     // Catch: java.lang.Throwable -> L49
            if (r0 == 0) goto L43
            java.lang.Object r0 = r2.getRoute()     // Catch: java.lang.Throwable -> L49
            cz.msebera.android.httpclient.pool.RouteSpecificPool r0 = r1.getPool(r0)     // Catch: java.lang.Throwable -> L49
            r0.free(r2, r3)     // Catch: java.lang.Throwable -> L49
            if (r3 == 0) goto L27
            boolean r3 = r1.isShutDown     // Catch: java.lang.Throwable -> L49
            if (r3 != 0) goto L27
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r3 = r1.available     // Catch: java.lang.Throwable -> L49
            r3.addFirst(r2)     // Catch: java.lang.Throwable -> L49
            r1.onRelease(r2)     // Catch: java.lang.Throwable -> L49
            goto L2a
        L27:
            r2.close()     // Catch: java.lang.Throwable -> L49
        L2a:
            cz.msebera.android.httpclient.pool.PoolEntryFuture r2 = r0.nextPending()     // Catch: java.lang.Throwable -> L49
            if (r2 == 0) goto L36
            java.util.LinkedList<cz.msebera.android.httpclient.pool.PoolEntryFuture<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>>> r3 = r1.pending     // Catch: java.lang.Throwable -> L49
            r3.remove(r2)     // Catch: java.lang.Throwable -> L49
            goto L3e
        L36:
            java.util.LinkedList<cz.msebera.android.httpclient.pool.PoolEntryFuture<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>>> r2 = r1.pending     // Catch: java.lang.Throwable -> L49
            java.lang.Object r2 = r2.poll()     // Catch: java.lang.Throwable -> L49
            cz.msebera.android.httpclient.pool.PoolEntryFuture r2 = (cz.msebera.android.httpclient.pool.PoolEntryFuture) r2     // Catch: java.lang.Throwable -> L49
        L3e:
            if (r2 == 0) goto L43
            r2.wakeup()     // Catch: java.lang.Throwable -> L49
        L43:
            java.util.concurrent.locks.Lock r2 = r1.lock
            r2.unlock()
            return
        L49:
            r2 = move-exception
            java.util.concurrent.locks.Lock r3 = r1.lock
            r3.unlock()
            throw r2
    }

    @Override
    public void release(java.lang.Object r1, boolean r2) {
            r0 = this;
            cz.msebera.android.httpclient.pool.PoolEntry r1 = (cz.msebera.android.httpclient.pool.PoolEntry) r1
            r0.release(r1, r2)
            return
    }

    @Override
    public void setDefaultMaxPerRoute(int r2) {
            r1 = this;
            java.lang.String r0 = "Max per route value"
            cz.msebera.android.httpclient.util.Args.positive(r2, r0)
            java.util.concurrent.locks.Lock r0 = r1.lock
            r0.lock()
            r1.defaultMaxPerRoute = r2     // Catch: java.lang.Throwable -> L12
            java.util.concurrent.locks.Lock r2 = r1.lock
            r2.unlock()
            return
        L12:
            r2 = move-exception
            java.util.concurrent.locks.Lock r0 = r1.lock
            r0.unlock()
            throw r2
    }

    @Override
    public void setMaxPerRoute(T r2, int r3) {
            r1 = this;
            java.lang.String r0 = "Route"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Max per route value"
            cz.msebera.android.httpclient.util.Args.positive(r3, r0)
            java.util.concurrent.locks.Lock r0 = r1.lock
            r0.lock()
            java.util.Map<T, java.lang.Integer> r0 = r1.maxPerRoute     // Catch: java.lang.Throwable -> L1e
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L1e
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L1e
            java.util.concurrent.locks.Lock r2 = r1.lock
            r2.unlock()
            return
        L1e:
            r2 = move-exception
            java.util.concurrent.locks.Lock r3 = r1.lock
            r3.unlock()
            throw r2
    }

    @Override
    public void setMaxTotal(int r2) {
            r1 = this;
            java.lang.String r0 = "Max value"
            cz.msebera.android.httpclient.util.Args.positive(r2, r0)
            java.util.concurrent.locks.Lock r0 = r1.lock
            r0.lock()
            r1.maxTotal = r2     // Catch: java.lang.Throwable -> L12
            java.util.concurrent.locks.Lock r2 = r1.lock
            r2.unlock()
            return
        L12:
            r2 = move-exception
            java.util.concurrent.locks.Lock r0 = r1.lock
            r0.unlock()
            throw r2
    }

    public void setValidateAfterInactivity(int r1) {
            r0 = this;
            r0.validateAfterInactivity = r1
            return
    }

    public void shutdown() throws java.io.IOException {
            r2 = this;
            boolean r0 = r2.isShutDown
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r2.isShutDown = r0
            java.util.concurrent.locks.Lock r0 = r2.lock
            r0.lock()
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r0 = r2.available     // Catch: java.lang.Throwable -> L68
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L68
        L13:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L68
            if (r1 == 0) goto L23
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L68
            cz.msebera.android.httpclient.pool.PoolEntry r1 = (cz.msebera.android.httpclient.pool.PoolEntry) r1     // Catch: java.lang.Throwable -> L68
            r1.close()     // Catch: java.lang.Throwable -> L68
            goto L13
        L23:
            java.util.Set<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r0 = r2.leased     // Catch: java.lang.Throwable -> L68
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L68
        L29:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L68
            if (r1 == 0) goto L39
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L68
            cz.msebera.android.httpclient.pool.PoolEntry r1 = (cz.msebera.android.httpclient.pool.PoolEntry) r1     // Catch: java.lang.Throwable -> L68
            r1.close()     // Catch: java.lang.Throwable -> L68
            goto L29
        L39:
            java.util.Map<T, cz.msebera.android.httpclient.pool.RouteSpecificPool<T, C, E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>>> r0 = r2.routeToPool     // Catch: java.lang.Throwable -> L68
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> L68
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L68
        L43:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L68
            if (r1 == 0) goto L53
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L68
            cz.msebera.android.httpclient.pool.RouteSpecificPool r1 = (cz.msebera.android.httpclient.pool.RouteSpecificPool) r1     // Catch: java.lang.Throwable -> L68
            r1.shutdown()     // Catch: java.lang.Throwable -> L68
            goto L43
        L53:
            java.util.Map<T, cz.msebera.android.httpclient.pool.RouteSpecificPool<T, C, E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>>> r0 = r2.routeToPool     // Catch: java.lang.Throwable -> L68
            r0.clear()     // Catch: java.lang.Throwable -> L68
            java.util.Set<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r0 = r2.leased     // Catch: java.lang.Throwable -> L68
            r0.clear()     // Catch: java.lang.Throwable -> L68
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r0 = r2.available     // Catch: java.lang.Throwable -> L68
            r0.clear()     // Catch: java.lang.Throwable -> L68
            java.util.concurrent.locks.Lock r0 = r2.lock
            r0.unlock()
            return
        L68:
            r0 = move-exception
            java.util.concurrent.locks.Lock r1 = r2.lock
            r1.unlock()
            throw r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[leased: "
            r0.append(r1)
            java.util.Set<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r1 = r2.leased
            r0.append(r1)
            java.lang.String r1 = "][available: "
            r0.append(r1)
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r1 = r2.available
            r0.append(r1)
            java.lang.String r1 = "][pending: "
            r0.append(r1)
            java.util.LinkedList<cz.msebera.android.httpclient.pool.PoolEntryFuture<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>>> r1 = r2.pending
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    protected boolean validate(E r1) {
            r0 = this;
            r1 = 1
            return r1
    }
}
