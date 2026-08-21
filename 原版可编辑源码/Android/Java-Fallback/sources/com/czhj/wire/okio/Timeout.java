package com.czhj.wire.okio;

public class Timeout {
    public static final com.czhj.wire.okio.Timeout NONE = null;
    private boolean a;
    private long b;
    private long c;


    static {
            com.czhj.wire.okio.Timeout$1 r0 = new com.czhj.wire.okio.Timeout$1
            r0.<init>()
            com.czhj.wire.okio.Timeout.NONE = r0
            return
    }

    public Timeout() {
            r0 = this;
            r0.<init>()
            return
    }

    public com.czhj.wire.okio.Timeout clearDeadline() {
            r1 = this;
            r0 = 0
            r1.a = r0
            return r1
    }

    public com.czhj.wire.okio.Timeout clearTimeout() {
            r2 = this;
            r0 = 0
            r2.c = r0
            return r2
    }

    public final com.czhj.wire.okio.Timeout deadline(long r3, java.util.concurrent.TimeUnit r5) {
            r2 = this;
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 <= 0) goto L1e
            if (r5 == 0) goto L16
            long r0 = java.lang.System.nanoTime()
            long r3 = r5.toNanos(r3)
            long r0 = r0 + r3
            com.czhj.wire.okio.Timeout r3 = r2.deadlineNanoTime(r0)
            return r3
        L16:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "unit == null"
            r3.<init>(r4)
            throw r3
        L1e:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "duration <= 0: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r5.<init>(r3)
            throw r5
    }

    public long deadlineNanoTime() {
            r2 = this;
            boolean r0 = r2.a
            if (r0 == 0) goto L7
            long r0 = r2.b
            return r0
        L7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "No deadline"
            r0.<init>(r1)
            throw r0
    }

    public com.czhj.wire.okio.Timeout deadlineNanoTime(long r2) {
            r1 = this;
            r0 = 1
            r1.a = r0
            r1.b = r2
            return r1
    }

    public boolean hasDeadline() {
            r1 = this;
            boolean r0 = r1.a
            return r0
    }

    public void throwIfReached() throws java.io.IOException {
            r4 = this;
            boolean r0 = java.lang.Thread.interrupted()
            if (r0 != 0) goto L21
            boolean r0 = r4.a
            if (r0 == 0) goto L20
            long r0 = r4.b
            long r2 = java.lang.System.nanoTime()
            long r0 = r0 - r2
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L18
            goto L20
        L18:
            java.io.InterruptedIOException r0 = new java.io.InterruptedIOException
            java.lang.String r1 = "deadline reached"
            r0.<init>(r1)
            throw r0
        L20:
            return
        L21:
            java.io.InterruptedIOException r0 = new java.io.InterruptedIOException
            java.lang.String r1 = "thread interrupted"
            r0.<init>(r1)
            throw r0
    }

    public com.czhj.wire.okio.Timeout timeout(long r3, java.util.concurrent.TimeUnit r5) {
            r2 = this;
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 < 0) goto L17
            if (r5 == 0) goto Lf
            long r3 = r5.toNanos(r3)
            r2.c = r3
            return r2
        Lf:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "unit == null"
            r3.<init>(r4)
            throw r3
        L17:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "timeout < 0: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r5.<init>(r3)
            throw r5
    }

    public long timeoutNanos() {
            r2 = this;
            long r0 = r2.c
            return r0
    }
}
