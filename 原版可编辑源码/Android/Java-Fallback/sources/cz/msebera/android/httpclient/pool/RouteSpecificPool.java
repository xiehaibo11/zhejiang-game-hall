package cz.msebera.android.httpclient.pool;

import cz.msebera.android.httpclient.pool.PoolEntry;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
abstract class RouteSpecificPool<T, C, E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> {
    private final java.util.LinkedList<E> available;
    private final java.util.Set<E> leased;
    private final java.util.LinkedList<cz.msebera.android.httpclient.pool.PoolEntryFuture<E>> pending;
    private final T route;

    RouteSpecificPool(T r1) {
            r0 = this;
            r0.<init>()
            r0.route = r1
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            r0.leased = r1
            java.util.LinkedList r1 = new java.util.LinkedList
            r1.<init>()
            r0.available = r1
            java.util.LinkedList r1 = new java.util.LinkedList
            r1.<init>()
            r0.pending = r1
            return
    }

    public E add(C r2) {
            r1 = this;
            cz.msebera.android.httpclient.pool.PoolEntry r2 = r1.createEntry(r2)
            java.util.Set<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r0 = r1.leased
            r0.add(r2)
            return r2
    }

    protected abstract E createEntry(C r1);

    public void free(E r3, boolean r4) {
            r2 = this;
            java.lang.String r0 = "Pool entry"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.util.Set<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r0 = r2.leased
            boolean r0 = r0.remove(r3)
            java.lang.String r1 = "Entry %s has not been leased from this pool"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1, r3)
            if (r4 == 0) goto L17
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r4 = r2.available
            r4.addFirst(r3)
        L17:
            return
    }

    public int getAllocatedCount() {
            r2 = this;
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r0 = r2.available
            int r0 = r0.size()
            java.util.Set<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r1 = r2.leased
            int r1 = r1.size()
            int r0 = r0 + r1
            return r0
    }

    public int getAvailableCount() {
            r1 = this;
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r0 = r1.available
            int r0 = r0.size()
            return r0
    }

    public E getFree(java.lang.Object r4) {
            r3 = this;
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r0 = r3.available
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L50
            if (r4 == 0) goto L2f
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r0 = r3.available
            java.util.Iterator r0 = r0.iterator()
        L10:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2f
            java.lang.Object r1 = r0.next()
            cz.msebera.android.httpclient.pool.PoolEntry r1 = (cz.msebera.android.httpclient.pool.PoolEntry) r1
            java.lang.Object r2 = r1.getState()
            boolean r2 = r4.equals(r2)
            if (r2 == 0) goto L10
            r0.remove()
            java.util.Set<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r4 = r3.leased
            r4.add(r1)
            return r1
        L2f:
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r4 = r3.available
            java.util.Iterator r4 = r4.iterator()
        L35:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L50
            java.lang.Object r0 = r4.next()
            cz.msebera.android.httpclient.pool.PoolEntry r0 = (cz.msebera.android.httpclient.pool.PoolEntry) r0
            java.lang.Object r1 = r0.getState()
            if (r1 != 0) goto L35
            r4.remove()
            java.util.Set<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r4 = r3.leased
            r4.add(r0)
            return r0
        L50:
            r4 = 0
            return r4
    }

    public E getLastUsed() {
            r1 = this;
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r0 = r1.available
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L11
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r0 = r1.available
            java.lang.Object r0 = r0.getLast()
            cz.msebera.android.httpclient.pool.PoolEntry r0 = (cz.msebera.android.httpclient.pool.PoolEntry) r0
            return r0
        L11:
            r0 = 0
            return r0
    }

    public int getLeasedCount() {
            r1 = this;
            java.util.Set<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r0 = r1.leased
            int r0 = r0.size()
            return r0
    }

    public int getPendingCount() {
            r1 = this;
            java.util.LinkedList<cz.msebera.android.httpclient.pool.PoolEntryFuture<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>>> r0 = r1.pending
            int r0 = r0.size()
            return r0
    }

    public final T getRoute() {
            r1 = this;
            T r0 = r1.route
            return r0
    }

    public cz.msebera.android.httpclient.pool.PoolEntryFuture<E> nextPending() {
            r1 = this;
            java.util.LinkedList<cz.msebera.android.httpclient.pool.PoolEntryFuture<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>>> r0 = r1.pending
            java.lang.Object r0 = r0.poll()
            cz.msebera.android.httpclient.pool.PoolEntryFuture r0 = (cz.msebera.android.httpclient.pool.PoolEntryFuture) r0
            return r0
    }

    public void queue(cz.msebera.android.httpclient.pool.PoolEntryFuture<E> r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.LinkedList<cz.msebera.android.httpclient.pool.PoolEntryFuture<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>>> r0 = r1.pending
            r0.add(r2)
            return
    }

    public boolean remove(E r2) {
            r1 = this;
            java.lang.String r0 = "Pool entry"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r0 = r1.available
            boolean r0 = r0.remove(r2)
            if (r0 != 0) goto L17
            java.util.Set<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r0 = r1.leased
            boolean r2 = r0.remove(r2)
            if (r2 != 0) goto L17
            r2 = 0
            return r2
        L17:
            r2 = 1
            return r2
    }

    public void shutdown() {
            r3 = this;
            java.util.LinkedList<cz.msebera.android.httpclient.pool.PoolEntryFuture<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>>> r0 = r3.pending
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L17
            java.lang.Object r1 = r0.next()
            cz.msebera.android.httpclient.pool.PoolEntryFuture r1 = (cz.msebera.android.httpclient.pool.PoolEntryFuture) r1
            r2 = 1
            r1.cancel(r2)
            goto L6
        L17:
            java.util.LinkedList<cz.msebera.android.httpclient.pool.PoolEntryFuture<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>>> r0 = r3.pending
            r0.clear()
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r0 = r3.available
            java.util.Iterator r0 = r0.iterator()
        L22:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L32
            java.lang.Object r1 = r0.next()
            cz.msebera.android.httpclient.pool.PoolEntry r1 = (cz.msebera.android.httpclient.pool.PoolEntry) r1
            r1.close()
            goto L22
        L32:
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r0 = r3.available
            r0.clear()
            java.util.Set<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r0 = r3.leased
            java.util.Iterator r0 = r0.iterator()
        L3d:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L4d
            java.lang.Object r1 = r0.next()
            cz.msebera.android.httpclient.pool.PoolEntry r1 = (cz.msebera.android.httpclient.pool.PoolEntry) r1
            r1.close()
            goto L3d
        L4d:
            java.util.Set<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r0 = r3.leased
            r0.clear()
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[route: "
            r0.append(r1)
            T r1 = r2.route
            r0.append(r1)
            java.lang.String r1 = "][leased: "
            r0.append(r1)
            java.util.Set<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r1 = r2.leased
            int r1 = r1.size()
            r0.append(r1)
            java.lang.String r1 = "][available: "
            r0.append(r1)
            java.util.LinkedList<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>> r1 = r2.available
            int r1 = r1.size()
            r0.append(r1)
            java.lang.String r1 = "][pending: "
            r0.append(r1)
            java.util.LinkedList<cz.msebera.android.httpclient.pool.PoolEntryFuture<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>>> r1 = r2.pending
            int r1 = r1.size()
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public void unqueue(cz.msebera.android.httpclient.pool.PoolEntryFuture<E> r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.LinkedList<cz.msebera.android.httpclient.pool.PoolEntryFuture<E extends cz.msebera.android.httpclient.pool.PoolEntry<T, C>>> r0 = r1.pending
            r0.remove(r2)
            return
    }
}
