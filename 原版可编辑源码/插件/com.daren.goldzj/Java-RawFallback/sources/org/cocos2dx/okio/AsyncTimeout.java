package org.cocos2dx.okio;

public class AsyncTimeout extends org.cocos2dx.okio.Timeout {
    private static final long IDLE_TIMEOUT_MILLIS = 0;
    private static final long IDLE_TIMEOUT_NANOS = 0;
    private static final int TIMEOUT_WRITE_SIZE = 65536;

    @javax.annotation.Nullable
    static org.cocos2dx.okio.AsyncTimeout head;
    private boolean inQueue;

    @javax.annotation.Nullable
    private org.cocos2dx.okio.AsyncTimeout next;
    private long timeoutAt;



    private static final class Watchdog extends java.lang.Thread {
        Watchdog() {
                r1 = this;
                java.lang.String r0 = "Okio Watchdog"
                r1.<init>(r0)
                r0 = 1
                r1.setDaemon(r0)
                return
        }

        @Override
        public void run() {
                r3 = this;
            L0:
                java.lang.Class<org.cocos2dx.okio.AsyncTimeout> r0 = org.cocos2dx.okio.AsyncTimeout.class
                monitor-enter(r0)     // Catch: java.lang.InterruptedException -> L0
                org.cocos2dx.okio.AsyncTimeout r1 = org.cocos2dx.okio.AsyncTimeout.awaitTimeout()     // Catch: java.lang.Throwable -> L19
                if (r1 != 0) goto Lb
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
                goto L0
            Lb:
                org.cocos2dx.okio.AsyncTimeout r2 = org.cocos2dx.okio.AsyncTimeout.head     // Catch: java.lang.Throwable -> L19
                if (r1 != r2) goto L14
                r1 = 0
                org.cocos2dx.okio.AsyncTimeout.head = r1     // Catch: java.lang.Throwable -> L19
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
                return
            L14:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
                r1.timedOut()     // Catch: java.lang.InterruptedException -> L0
                goto L0
            L19:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
                throw r1     // Catch: java.lang.InterruptedException -> L0
        }
    }

    static {
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.SECONDS
            r1 = 60
            long r0 = r0.toMillis(r1)
            org.cocos2dx.okio.AsyncTimeout.IDLE_TIMEOUT_MILLIS = r0
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.MILLISECONDS
            long r1 = org.cocos2dx.okio.AsyncTimeout.IDLE_TIMEOUT_MILLIS
            long r0 = r0.toNanos(r1)
            org.cocos2dx.okio.AsyncTimeout.IDLE_TIMEOUT_NANOS = r0
            return
    }

    public AsyncTimeout() {
            r0 = this;
            r0.<init>()
            return
    }

    @javax.annotation.Nullable
    static org.cocos2dx.okio.AsyncTimeout awaitTimeout() throws java.lang.InterruptedException {
            org.cocos2dx.okio.AsyncTimeout r0 = org.cocos2dx.okio.AsyncTimeout.head
            org.cocos2dx.okio.AsyncTimeout r0 = r0.next
            r1 = 0
            if (r0 != 0) goto L26
            long r2 = java.lang.System.nanoTime()
            java.lang.Class<org.cocos2dx.okio.AsyncTimeout> r0 = org.cocos2dx.okio.AsyncTimeout.class
            long r4 = org.cocos2dx.okio.AsyncTimeout.IDLE_TIMEOUT_MILLIS
            r0.wait(r4)
            org.cocos2dx.okio.AsyncTimeout r0 = org.cocos2dx.okio.AsyncTimeout.head
            org.cocos2dx.okio.AsyncTimeout r0 = r0.next
            if (r0 != 0) goto L25
            long r4 = java.lang.System.nanoTime()
            long r4 = r4 - r2
            long r2 = org.cocos2dx.okio.AsyncTimeout.IDLE_TIMEOUT_NANOS
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 < 0) goto L25
            org.cocos2dx.okio.AsyncTimeout r1 = org.cocos2dx.okio.AsyncTimeout.head
        L25:
            return r1
        L26:
            long r2 = java.lang.System.nanoTime()
            long r2 = r0.remainingNanos(r2)
            r4 = 0
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 <= 0) goto L43
            r4 = 1000000(0xf4240, double:4.940656E-318)
            long r6 = r2 / r4
            long r4 = r4 * r6
            long r2 = r2 - r4
            java.lang.Class<org.cocos2dx.okio.AsyncTimeout> r0 = org.cocos2dx.okio.AsyncTimeout.class
            int r3 = (int) r2
            r0.wait(r6, r3)
            return r1
        L43:
            org.cocos2dx.okio.AsyncTimeout r2 = org.cocos2dx.okio.AsyncTimeout.head
            org.cocos2dx.okio.AsyncTimeout r3 = r0.next
            r2.next = r3
            r0.next = r1
            return r0
    }

    private static synchronized boolean cancelScheduledTimeout(org.cocos2dx.okio.AsyncTimeout r3) {
            java.lang.Class<org.cocos2dx.okio.AsyncTimeout> r0 = org.cocos2dx.okio.AsyncTimeout.class
            monitor-enter(r0)
            org.cocos2dx.okio.AsyncTimeout r1 = org.cocos2dx.okio.AsyncTimeout.head     // Catch: java.lang.Throwable -> L1b
        L5:
            if (r1 == 0) goto L18
            org.cocos2dx.okio.AsyncTimeout r2 = r1.next     // Catch: java.lang.Throwable -> L1b
            if (r2 != r3) goto L15
            org.cocos2dx.okio.AsyncTimeout r2 = r3.next     // Catch: java.lang.Throwable -> L1b
            r1.next = r2     // Catch: java.lang.Throwable -> L1b
            r1 = 0
            r3.next = r1     // Catch: java.lang.Throwable -> L1b
            r3 = 0
            monitor-exit(r0)
            return r3
        L15:
            org.cocos2dx.okio.AsyncTimeout r1 = r1.next     // Catch: java.lang.Throwable -> L1b
            goto L5
        L18:
            r3 = 1
            monitor-exit(r0)
            return r3
        L1b:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    private long remainingNanos(long r3) {
            r2 = this;
            long r0 = r2.timeoutAt
            long r0 = r0 - r3
            return r0
    }

    private static synchronized void scheduleTimeout(org.cocos2dx.okio.AsyncTimeout r6, long r7, boolean r9) {
            java.lang.Class<org.cocos2dx.okio.AsyncTimeout> r0 = org.cocos2dx.okio.AsyncTimeout.class
            monitor-enter(r0)
            org.cocos2dx.okio.AsyncTimeout r1 = org.cocos2dx.okio.AsyncTimeout.head     // Catch: java.lang.Throwable -> L6c
            if (r1 != 0) goto L16
            org.cocos2dx.okio.AsyncTimeout r1 = new org.cocos2dx.okio.AsyncTimeout     // Catch: java.lang.Throwable -> L6c
            r1.<init>()     // Catch: java.lang.Throwable -> L6c
            org.cocos2dx.okio.AsyncTimeout.head = r1     // Catch: java.lang.Throwable -> L6c
            org.cocos2dx.okio.AsyncTimeout$Watchdog r1 = new org.cocos2dx.okio.AsyncTimeout$Watchdog     // Catch: java.lang.Throwable -> L6c
            r1.<init>()     // Catch: java.lang.Throwable -> L6c
            r1.start()     // Catch: java.lang.Throwable -> L6c
        L16:
            long r1 = java.lang.System.nanoTime()     // Catch: java.lang.Throwable -> L6c
            r3 = 0
            int r5 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
            if (r5 == 0) goto L2f
            if (r9 == 0) goto L2f
            long r3 = r6.deadlineNanoTime()     // Catch: java.lang.Throwable -> L6c
            long r3 = r3 - r1
            long r7 = java.lang.Math.min(r7, r3)     // Catch: java.lang.Throwable -> L6c
            long r7 = r7 + r1
            r6.timeoutAt = r7     // Catch: java.lang.Throwable -> L6c
            goto L3d
        L2f:
            if (r5 == 0) goto L35
            long r7 = r7 + r1
            r6.timeoutAt = r7     // Catch: java.lang.Throwable -> L6c
            goto L3d
        L35:
            if (r9 == 0) goto L66
            long r7 = r6.deadlineNanoTime()     // Catch: java.lang.Throwable -> L6c
            r6.timeoutAt = r7     // Catch: java.lang.Throwable -> L6c
        L3d:
            long r7 = r6.remainingNanos(r1)     // Catch: java.lang.Throwable -> L6c
            org.cocos2dx.okio.AsyncTimeout r9 = org.cocos2dx.okio.AsyncTimeout.head     // Catch: java.lang.Throwable -> L6c
        L43:
            org.cocos2dx.okio.AsyncTimeout r3 = r9.next     // Catch: java.lang.Throwable -> L6c
            if (r3 == 0) goto L55
            org.cocos2dx.okio.AsyncTimeout r3 = r9.next     // Catch: java.lang.Throwable -> L6c
            long r3 = r3.remainingNanos(r1)     // Catch: java.lang.Throwable -> L6c
            int r5 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
            if (r5 >= 0) goto L52
            goto L55
        L52:
            org.cocos2dx.okio.AsyncTimeout r9 = r9.next     // Catch: java.lang.Throwable -> L6c
            goto L43
        L55:
            org.cocos2dx.okio.AsyncTimeout r7 = r9.next     // Catch: java.lang.Throwable -> L6c
            r6.next = r7     // Catch: java.lang.Throwable -> L6c
            r9.next = r6     // Catch: java.lang.Throwable -> L6c
            org.cocos2dx.okio.AsyncTimeout r6 = org.cocos2dx.okio.AsyncTimeout.head     // Catch: java.lang.Throwable -> L6c
            if (r9 != r6) goto L64
            java.lang.Class<org.cocos2dx.okio.AsyncTimeout> r6 = org.cocos2dx.okio.AsyncTimeout.class
            r6.notify()     // Catch: java.lang.Throwable -> L6c
        L64:
            monitor-exit(r0)
            return
        L66:
            java.lang.AssertionError r6 = new java.lang.AssertionError     // Catch: java.lang.Throwable -> L6c
            r6.<init>()     // Catch: java.lang.Throwable -> L6c
            throw r6     // Catch: java.lang.Throwable -> L6c
        L6c:
            r6 = move-exception
            monitor-exit(r0)
            throw r6
    }

    public final void enter() {
            r6 = this;
            boolean r0 = r6.inQueue
            if (r0 != 0) goto L1c
            long r0 = r6.timeoutNanos()
            boolean r2 = r6.hasDeadline()
            r3 = 0
            int r5 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r5 != 0) goto L15
            if (r2 != 0) goto L15
            return
        L15:
            r3 = 1
            r6.inQueue = r3
            scheduleTimeout(r6, r0, r2)
            return
        L1c:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Unbalanced enter/exit"
            r0.<init>(r1)
            throw r0
    }

    final java.io.IOException exit(java.io.IOException r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.exit()
            if (r0 != 0) goto L7
            return r2
        L7:
            java.io.IOException r2 = r1.newTimeoutException(r2)
            return r2
    }

    final void exit(boolean r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.exit()
            if (r0 == 0) goto Lf
            if (r2 != 0) goto L9
            goto Lf
        L9:
            r2 = 0
            java.io.IOException r2 = r1.newTimeoutException(r2)
            throw r2
        Lf:
            return
    }

    public final boolean exit() {
            r2 = this;
            boolean r0 = r2.inQueue
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            r2.inQueue = r1
            boolean r0 = cancelScheduledTimeout(r2)
            return r0
    }

    protected java.io.IOException newTimeoutException(@javax.annotation.Nullable java.io.IOException r3) {
            r2 = this;
            java.io.InterruptedIOException r0 = new java.io.InterruptedIOException
            java.lang.String r1 = "timeout"
            r0.<init>(r1)
            if (r3 == 0) goto Lc
            r0.initCause(r3)
        Lc:
            return r0
    }

    public final org.cocos2dx.okio.Sink sink(org.cocos2dx.okio.Sink r2) {
            r1 = this;
            org.cocos2dx.okio.AsyncTimeout$1 r0 = new org.cocos2dx.okio.AsyncTimeout$1
            r0.<init>(r1, r2)
            return r0
    }

    public final org.cocos2dx.okio.Source source(org.cocos2dx.okio.Source r2) {
            r1 = this;
            org.cocos2dx.okio.AsyncTimeout$2 r0 = new org.cocos2dx.okio.AsyncTimeout$2
            r0.<init>(r1, r2)
            return r0
    }

    protected void timedOut() {
            r0 = this;
            return
    }
}
