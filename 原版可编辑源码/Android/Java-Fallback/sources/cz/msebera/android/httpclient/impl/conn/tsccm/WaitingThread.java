package cz.msebera.android.httpclient.impl.conn.tsccm;

@java.lang.Deprecated
public class WaitingThread {
    private boolean aborted;
    private final java.util.concurrent.locks.Condition cond;
    private final cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool pool;
    private java.lang.Thread waiter;

    public WaitingThread(java.util.concurrent.locks.Condition r2, cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Condition"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.cond = r2
            r1.pool = r3
            return
    }

    public boolean await(java.util.Date r4) throws java.lang.InterruptedException {
            r3 = this;
            java.lang.Thread r0 = r3.waiter
            if (r0 != 0) goto L37
            boolean r0 = r3.aborted
            java.lang.String r1 = "Operation interrupted"
            if (r0 != 0) goto L31
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            r3.waiter = r0
            r0 = 0
            if (r4 == 0) goto L1a
            java.util.concurrent.locks.Condition r2 = r3.cond     // Catch: java.lang.Throwable -> L2d
            boolean r4 = r2.awaitUntil(r4)     // Catch: java.lang.Throwable -> L2d
            goto L20
        L1a:
            java.util.concurrent.locks.Condition r4 = r3.cond     // Catch: java.lang.Throwable -> L2d
            r4.await()     // Catch: java.lang.Throwable -> L2d
            r4 = 1
        L20:
            boolean r2 = r3.aborted     // Catch: java.lang.Throwable -> L2d
            if (r2 != 0) goto L27
            r3.waiter = r0
            return r4
        L27:
            java.lang.InterruptedException r4 = new java.lang.InterruptedException     // Catch: java.lang.Throwable -> L2d
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L2d
            throw r4     // Catch: java.lang.Throwable -> L2d
        L2d:
            r4 = move-exception
            r3.waiter = r0
            throw r4
        L31:
            java.lang.InterruptedException r4 = new java.lang.InterruptedException
            r4.<init>(r1)
            throw r4
        L37:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "A thread is already waiting on this object.\ncaller: "
            r0.append(r1)
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            r0.append(r1)
            java.lang.String r1 = "\nwaiter: "
            r0.append(r1)
            java.lang.Thread r1 = r3.waiter
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r4.<init>(r0)
            throw r4
    }

    public final java.util.concurrent.locks.Condition getCondition() {
            r1 = this;
            java.util.concurrent.locks.Condition r0 = r1.cond
            return r0
    }

    public final cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool getPool() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.tsccm.RouteSpecificPool r0 = r1.pool
            return r0
    }

    public final java.lang.Thread getThread() {
            r1 = this;
            java.lang.Thread r0 = r1.waiter
            return r0
    }

    public void interrupt() {
            r1 = this;
            r0 = 1
            r1.aborted = r0
            java.util.concurrent.locks.Condition r0 = r1.cond
            r0.signalAll()
            return
    }

    public void wakeup() {
            r2 = this;
            java.lang.Thread r0 = r2.waiter
            if (r0 == 0) goto La
            java.util.concurrent.locks.Condition r0 = r2.cond
            r0.signalAll()
            return
        La:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Nobody waiting on this object."
            r0.<init>(r1)
            throw r0
    }
}
