package cz.msebera.android.httpclient.impl.conn.tsccm;

@java.lang.Deprecated
public class RouteSpecificPool {
    protected final cz.msebera.android.httpclient.conn.params.ConnPerRoute connPerRoute;
    protected final java.util.LinkedList<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> freeEntries;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    protected final int maxEntries;
    protected int numEntries;
    protected final cz.msebera.android.httpclient.conn.routing.HttpRoute route;
    protected final java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread> waitingThreads;


    @java.lang.Deprecated
    public RouteSpecificPool(cz.msebera.android.httpclient.conn.routing.HttpRoute r3, int r4) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            r2.route = r3
            r2.maxEntries = r4
            cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool$1 r3 = new cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool$1
            r3.<init>(r2)
            r2.connPerRoute = r3
            java.util.LinkedList r3 = new java.util.LinkedList
            r3.<init>()
            r2.freeEntries = r3
            java.util.LinkedList r3 = new java.util.LinkedList
            r3.<init>()
            r2.waitingThreads = r3
            r3 = 0
            r2.numEntries = r3
            return
    }

    public RouteSpecificPool(cz.msebera.android.httpclient.conn.routing.HttpRoute r3, cz.msebera.android.httpclient.conn.params.ConnPerRoute r4) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            r2.route = r3
            r2.connPerRoute = r4
            int r3 = r4.getMaxForRoute(r3)
            r2.maxEntries = r3
            java.util.LinkedList r3 = new java.util.LinkedList
            r3.<init>()
            r2.freeEntries = r3
            java.util.LinkedList r3 = new java.util.LinkedList
            r3.<init>()
            r2.waitingThreads = r3
            r3 = 0
            r2.numEntries = r3
            return
    }

    public cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry allocEntry(java.lang.Object r4) {
            r3 = this;
            java.util.LinkedList<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r0 = r3.freeEntries
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L32
            java.util.LinkedList<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r0 = r3.freeEntries
            int r1 = r0.size()
            java.util.ListIterator r0 = r0.listIterator(r1)
        L12:
            boolean r1 = r0.hasPrevious()
            if (r1 == 0) goto L32
            java.lang.Object r1 = r0.previous()
            cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r1 = (cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry) r1
            java.lang.Object r2 = r1.getState()
            if (r2 == 0) goto L2e
            java.lang.Object r2 = r1.getState()
            boolean r2 = cz.msebera.android.httpclient.util.LangUtils.equals(r4, r2)
            if (r2 == 0) goto L12
        L2e:
            r0.remove()
            return r1
        L32:
            int r4 = r3.getCapacity()
            if (r4 != 0) goto L5c
            java.util.LinkedList<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r4 = r3.freeEntries
            boolean r4 = r4.isEmpty()
            if (r4 != 0) goto L5c
            java.util.LinkedList<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r4 = r3.freeEntries
            java.lang.Object r4 = r4.remove()
            cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r4 = (cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry) r4
            r4.shutdownEntry()
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r4.getConnection()
            r0.close()     // Catch: java.io.IOException -> L53
            goto L5b
        L53:
            r0 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r3.log
            java.lang.String r2 = "I/O error closing connection"
            r1.debug(r2, r0)
        L5b:
            return r4
        L5c:
            r4 = 0
            return r4
    }

    public void createdEntry(cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r2) {
            r1 = this;
            cz.msebera.android.httpclient.conn.routing.HttpRoute r0 = r1.route
            cz.msebera.android.httpclient.conn.routing.HttpRoute r2 = r2.getPlannedRoute()
            boolean r2 = r0.equals(r2)
            java.lang.String r0 = "Entry not planned for this pool"
            cz.msebera.android.httpclient.util.Args.check(r2, r0)
            int r2 = r1.numEntries
            int r2 = r2 + 1
            r1.numEntries = r2
            return
    }

    public boolean deleteEntry(cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r2) {
            r1 = this;
            java.util.LinkedList<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r0 = r1.freeEntries
            boolean r2 = r0.remove(r2)
            if (r2 == 0) goto Le
            int r0 = r1.numEntries
            int r0 = r0 + (-1)
            r1.numEntries = r0
        Le:
            return r2
    }

    public void dropEntry() {
            r3 = this;
            int r0 = r3.numEntries
            r1 = 1
            if (r0 <= 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            java.lang.String r2 = "There is no entry that could be dropped"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r2)
            int r0 = r3.numEntries
            int r0 = r0 - r1
            r3.numEntries = r0
            return
    }

    public void freeEntry(cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r3) {
            r2 = this;
            int r0 = r2.numEntries
            r1 = 1
            if (r0 < r1) goto L2c
            java.util.LinkedList<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r1 = r2.freeEntries
            int r1 = r1.size()
            if (r0 <= r1) goto L13
            java.util.LinkedList<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> r0 = r2.freeEntries
            r0.add(r3)
            return
        L13:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "No entry allocated from this pool. "
            r0.append(r1)
            cz.msebera.android.httpclient.conn.routing.HttpRoute r1 = r2.route
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
        L2c:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "No entry created for this pool. "
            r0.append(r1)
            cz.msebera.android.httpclient.conn.routing.HttpRoute r1 = r2.route
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
    }

    public int getCapacity() {
            r2 = this;
            cz.msebera.android.httpclient.conn.params.ConnPerRoute r0 = r2.connPerRoute
            cz.msebera.android.httpclient.conn.routing.HttpRoute r1 = r2.route
            int r0 = r0.getMaxForRoute(r1)
            int r1 = r2.numEntries
            int r0 = r0 - r1
            return r0
    }

    public final int getEntryCount() {
            r1 = this;
            int r0 = r1.numEntries
            return r0
    }

    public final int getMaxEntries() {
            r1 = this;
            int r0 = r1.maxEntries
            return r0
    }

    public final cz.msebera.android.httpclient.conn.routing.HttpRoute getRoute() {
            r1 = this;
            cz.msebera.android.httpclient.conn.routing.HttpRoute r0 = r1.route
            return r0
    }

    public boolean hasThread() {
            r1 = this;
            java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread> r0 = r1.waitingThreads
            boolean r0 = r0.isEmpty()
            r0 = r0 ^ 1
            return r0
    }

    public boolean isUnused() {
            r2 = this;
            int r0 = r2.numEntries
            r1 = 1
            if (r0 >= r1) goto Le
            java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread> r0 = r2.waitingThreads
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto Le
            goto Lf
        Le:
            r1 = 0
        Lf:
            return r1
    }

    public cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread nextThread() {
            r1 = this;
            java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread> r0 = r1.waitingThreads
            java.lang.Object r0 = r0.peek()
            cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread r0 = (cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread) r0
            return r0
    }

    public void queueThread(cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread r2) {
            r1 = this;
            java.lang.String r0 = "Waiting thread"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread> r0 = r1.waitingThreads
            r0.add(r2)
            return
    }

    public void removeThread(cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.Queue<cz.msebera.android.httpclient.impl.conn.tsccm.WaitingThread> r0 = r1.waitingThreads
            r0.remove(r2)
            return
    }
}
