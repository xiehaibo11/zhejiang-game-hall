package org.cocos2dx.okio;

public class Timeout {
    public static final org.cocos2dx.okio.Timeout NONE = null;
    private long deadlineNanoTime;
    private boolean hasDeadline;
    private long timeoutNanos;


    static {
            org.cocos2dx.okio.Timeout$1 r0 = new org.cocos2dx.okio.Timeout$1
            r0.<init>()
            org.cocos2dx.okio.Timeout.NONE = r0
            return
    }

    public Timeout() {
            r0 = this;
            r0.<init>()
            return
    }

    public org.cocos2dx.okio.Timeout clearDeadline() {
            r1 = this;
            r0 = 0
            r1.hasDeadline = r0
            return r1
    }

    public org.cocos2dx.okio.Timeout clearTimeout() {
            r2 = this;
            r0 = 0
            r2.timeoutNanos = r0
            return r2
    }

    public final org.cocos2dx.okio.Timeout deadline(long r4, java.util.concurrent.TimeUnit r6) {
            r3 = this;
            r0 = 0
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 <= 0) goto L1e
            if (r6 == 0) goto L16
            long r0 = java.lang.System.nanoTime()
            long r4 = r6.toNanos(r4)
            long r0 = r0 + r4
            org.cocos2dx.okio.Timeout r4 = r3.deadlineNanoTime(r0)
            return r4
        L16:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r5 = "unit == null"
            r4.<init>(r5)
            throw r4
        L1e:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "duration <= 0: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r6.<init>(r4)
            throw r6
    }

    public long deadlineNanoTime() {
            r2 = this;
            boolean r0 = r2.hasDeadline
            if (r0 == 0) goto L7
            long r0 = r2.deadlineNanoTime
            return r0
        L7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "No deadline"
            r0.<init>(r1)
            throw r0
    }

    public org.cocos2dx.okio.Timeout deadlineNanoTime(long r2) {
            r1 = this;
            r0 = 1
            r1.hasDeadline = r0
            r1.deadlineNanoTime = r2
            return r1
    }

    public boolean hasDeadline() {
            r1 = this;
            boolean r0 = r1.hasDeadline
            return r0
    }

    public void throwIfReached() throws java.io.IOException {
            r5 = this;
            boolean r0 = java.lang.Thread.interrupted()
            if (r0 != 0) goto L21
            boolean r0 = r5.hasDeadline
            if (r0 == 0) goto L20
            long r0 = r5.deadlineNanoTime
            long r2 = java.lang.System.nanoTime()
            long r0 = r0 - r2
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L18
            goto L20
        L18:
            java.io.InterruptedIOException r0 = new java.io.InterruptedIOException
            java.lang.String r1 = "deadline reached"
            r0.<init>(r1)
            throw r0
        L20:
            return
        L21:
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            r0.interrupt()
            java.io.InterruptedIOException r0 = new java.io.InterruptedIOException
            java.lang.String r1 = "interrupted"
            r0.<init>(r1)
            throw r0
    }

    public org.cocos2dx.okio.Timeout timeout(long r4, java.util.concurrent.TimeUnit r6) {
            r3 = this;
            r0 = 0
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 < 0) goto L17
            if (r6 == 0) goto Lf
            long r4 = r6.toNanos(r4)
            r3.timeoutNanos = r4
            return r3
        Lf:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r5 = "unit == null"
            r4.<init>(r5)
            throw r4
        L17:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "timeout < 0: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r6.<init>(r4)
            throw r6
    }

    public long timeoutNanos() {
            r2 = this;
            long r0 = r2.timeoutNanos
            return r0
    }

    public final void waitUntilNotified(java.lang.Object r10) throws java.io.InterruptedIOException {
            r9 = this;
            boolean r0 = r9.hasDeadline()     // Catch: java.lang.InterruptedException -> L56
            long r1 = r9.timeoutNanos()     // Catch: java.lang.InterruptedException -> L56
            r3 = 0
            if (r0 != 0) goto L14
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 != 0) goto L14
            r10.wait()     // Catch: java.lang.InterruptedException -> L56
            return
        L14:
            long r5 = java.lang.System.nanoTime()     // Catch: java.lang.InterruptedException -> L56
            if (r0 == 0) goto L28
            int r7 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r7 == 0) goto L28
            long r7 = r9.deadlineNanoTime()     // Catch: java.lang.InterruptedException -> L56
            long r7 = r7 - r5
            long r1 = java.lang.Math.min(r1, r7)     // Catch: java.lang.InterruptedException -> L56
            goto L30
        L28:
            if (r0 == 0) goto L30
            long r0 = r9.deadlineNanoTime()     // Catch: java.lang.InterruptedException -> L56
            long r1 = r0 - r5
        L30:
            int r0 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r0 <= 0) goto L49
            r3 = 1000000(0xf4240, double:4.940656E-318)
            long r7 = r1 / r3
            java.lang.Long.signum(r7)
            long r3 = r3 * r7
            long r3 = r1 - r3
            int r0 = (int) r3
            r10.wait(r7, r0)     // Catch: java.lang.InterruptedException -> L56
            long r3 = java.lang.System.nanoTime()     // Catch: java.lang.InterruptedException -> L56
            long r3 = r3 - r5
        L49:
            int r10 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r10 >= 0) goto L4e
            return
        L4e:
            java.io.InterruptedIOException r10 = new java.io.InterruptedIOException     // Catch: java.lang.InterruptedException -> L56
            java.lang.String r0 = "timeout"
            r10.<init>(r0)     // Catch: java.lang.InterruptedException -> L56
            throw r10     // Catch: java.lang.InterruptedException -> L56
        L56:
            java.lang.Thread r10 = java.lang.Thread.currentThread()
            r10.interrupt()
            java.io.InterruptedIOException r10 = new java.io.InterruptedIOException
            java.lang.String r0 = "interrupted"
            r10.<init>(r0)
            throw r10
    }
}
