package com.czhj.wire.okio;

public class AsyncTimeout extends com.czhj.wire.okio.Timeout {
    private static final int a = 65536;
    private static com.czhj.wire.okio.AsyncTimeout b;
    private boolean c;
    private com.czhj.wire.okio.AsyncTimeout d;
    private long e;



    private static final class Watchdog extends java.lang.Thread {
        public Watchdog() {
                r1 = this;
                java.lang.String r0 = "Okio Watchdog"
                r1.<init>(r0)
                r0 = 1
                r1.setDaemon(r0)
                return
        }

        @Override
        public void run() {
                r1 = this;
            L0:
                com.czhj.wire.okio.AsyncTimeout r0 = com.czhj.wire.okio.AsyncTimeout.a()     // Catch: java.lang.InterruptedException -> L0
                if (r0 != 0) goto L7
                goto L0
            L7:
                r0.timedOut()     // Catch: java.lang.InterruptedException -> L0
                goto L0
        }
    }

    public AsyncTimeout() {
            r0 = this;
            r0.<init>()
            return
    }

    private long a(long r3) {
            r2 = this;
            long r0 = r2.e
            long r0 = r0 - r3
            return r0
    }

    static synchronized com.czhj.wire.okio.AsyncTimeout a() throws java.lang.InterruptedException {
            java.lang.Class<com.czhj.wire.okio.AsyncTimeout> r0 = com.czhj.wire.okio.AsyncTimeout.class
            monitor-enter(r0)
            com.czhj.wire.okio.AsyncTimeout r1 = com.czhj.wire.okio.AsyncTimeout.b     // Catch: java.lang.Throwable -> L37
            com.czhj.wire.okio.AsyncTimeout r1 = r1.d     // Catch: java.lang.Throwable -> L37
            r2 = 0
            if (r1 != 0) goto Lf
            r0.wait()     // Catch: java.lang.Throwable -> L37
            monitor-exit(r0)
            return r2
        Lf:
            long r3 = java.lang.System.nanoTime()     // Catch: java.lang.Throwable -> L37
            long r3 = r1.a(r3)     // Catch: java.lang.Throwable -> L37
            r5 = 0
            int r5 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r5 <= 0) goto L2d
            r5 = 1000000(0xf4240, double:4.940656E-318)
            long r7 = r3 / r5
            java.lang.Long.signum(r7)
            long r5 = r5 * r7
            long r3 = r3 - r5
            int r1 = (int) r3
            r0.wait(r7, r1)     // Catch: java.lang.Throwable -> L37
            monitor-exit(r0)
            return r2
        L2d:
            com.czhj.wire.okio.AsyncTimeout r3 = com.czhj.wire.okio.AsyncTimeout.b     // Catch: java.lang.Throwable -> L37
            com.czhj.wire.okio.AsyncTimeout r4 = r1.d     // Catch: java.lang.Throwable -> L37
            r3.d = r4     // Catch: java.lang.Throwable -> L37
            r1.d = r2     // Catch: java.lang.Throwable -> L37
            monitor-exit(r0)
            return r1
        L37:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private static synchronized void a(com.czhj.wire.okio.AsyncTimeout r5, long r6, boolean r8) {
            java.lang.Class<com.czhj.wire.okio.AsyncTimeout> r0 = com.czhj.wire.okio.AsyncTimeout.class
            monitor-enter(r0)
            com.czhj.wire.okio.AsyncTimeout r1 = com.czhj.wire.okio.AsyncTimeout.b     // Catch: java.lang.Throwable -> L67
            if (r1 != 0) goto L16
            com.czhj.wire.okio.AsyncTimeout r1 = new com.czhj.wire.okio.AsyncTimeout     // Catch: java.lang.Throwable -> L67
            r1.<init>()     // Catch: java.lang.Throwable -> L67
            com.czhj.wire.okio.AsyncTimeout.b = r1     // Catch: java.lang.Throwable -> L67
            com.czhj.wire.okio.AsyncTimeout$Watchdog r1 = new com.czhj.wire.okio.AsyncTimeout$Watchdog     // Catch: java.lang.Throwable -> L67
            r1.<init>()     // Catch: java.lang.Throwable -> L67
            r1.start()     // Catch: java.lang.Throwable -> L67
        L16:
            long r1 = java.lang.System.nanoTime()     // Catch: java.lang.Throwable -> L67
            r3 = 0
            int r3 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r3 == 0) goto L2f
            if (r8 == 0) goto L2f
            long r3 = r5.deadlineNanoTime()     // Catch: java.lang.Throwable -> L67
            long r3 = r3 - r1
            long r6 = java.lang.Math.min(r6, r3)     // Catch: java.lang.Throwable -> L67
        L2b:
            long r6 = r6 + r1
            r5.e = r6     // Catch: java.lang.Throwable -> L67
            goto L3a
        L2f:
            if (r3 == 0) goto L32
            goto L2b
        L32:
            if (r8 == 0) goto L61
            long r6 = r5.deadlineNanoTime()     // Catch: java.lang.Throwable -> L67
            r5.e = r6     // Catch: java.lang.Throwable -> L67
        L3a:
            long r6 = r5.a(r1)     // Catch: java.lang.Throwable -> L67
            com.czhj.wire.okio.AsyncTimeout r8 = com.czhj.wire.okio.AsyncTimeout.b     // Catch: java.lang.Throwable -> L67
        L40:
            com.czhj.wire.okio.AsyncTimeout r3 = r8.d     // Catch: java.lang.Throwable -> L67
            if (r3 == 0) goto L52
            com.czhj.wire.okio.AsyncTimeout r3 = r8.d     // Catch: java.lang.Throwable -> L67
            long r3 = r3.a(r1)     // Catch: java.lang.Throwable -> L67
            int r3 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r3 >= 0) goto L4f
            goto L52
        L4f:
            com.czhj.wire.okio.AsyncTimeout r8 = r8.d     // Catch: java.lang.Throwable -> L67
            goto L40
        L52:
            com.czhj.wire.okio.AsyncTimeout r6 = r8.d     // Catch: java.lang.Throwable -> L67
            r5.d = r6     // Catch: java.lang.Throwable -> L67
            r8.d = r5     // Catch: java.lang.Throwable -> L67
            com.czhj.wire.okio.AsyncTimeout r5 = com.czhj.wire.okio.AsyncTimeout.b     // Catch: java.lang.Throwable -> L67
            if (r8 != r5) goto L5f
            r0.notify()     // Catch: java.lang.Throwable -> L67
        L5f:
            monitor-exit(r0)
            return
        L61:
            java.lang.AssertionError r5 = new java.lang.AssertionError     // Catch: java.lang.Throwable -> L67
            r5.<init>()     // Catch: java.lang.Throwable -> L67
            throw r5     // Catch: java.lang.Throwable -> L67
        L67:
            r5 = move-exception
            monitor-exit(r0)
            throw r5
    }

    private static synchronized boolean a(com.czhj.wire.okio.AsyncTimeout r3) {
            java.lang.Class<com.czhj.wire.okio.AsyncTimeout> r0 = com.czhj.wire.okio.AsyncTimeout.class
            monitor-enter(r0)
            com.czhj.wire.okio.AsyncTimeout r1 = com.czhj.wire.okio.AsyncTimeout.b     // Catch: java.lang.Throwable -> L1a
        L5:
            if (r1 == 0) goto L18
            com.czhj.wire.okio.AsyncTimeout r2 = r1.d     // Catch: java.lang.Throwable -> L1a
            if (r2 != r3) goto L15
            com.czhj.wire.okio.AsyncTimeout r2 = r3.d     // Catch: java.lang.Throwable -> L1a
            r1.d = r2     // Catch: java.lang.Throwable -> L1a
            r1 = 0
            r3.d = r1     // Catch: java.lang.Throwable -> L1a
            r3 = 0
        L13:
            monitor-exit(r0)
            return r3
        L15:
            com.czhj.wire.okio.AsyncTimeout r1 = r1.d     // Catch: java.lang.Throwable -> L1a
            goto L5
        L18:
            r3 = 1
            goto L13
        L1a:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    final java.io.IOException a(java.io.IOException r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.exit()
            if (r0 != 0) goto L7
            return r2
        L7:
            java.io.IOException r2 = r1.newTimeoutException(r2)
            return r2
    }

    final void a(boolean r2) throws java.io.IOException {
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

    public final void enter() {
            r5 = this;
            boolean r0 = r5.c
            if (r0 != 0) goto L1c
            long r0 = r5.timeoutNanos()
            boolean r2 = r5.hasDeadline()
            r3 = 0
            int r3 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r3 != 0) goto L15
            if (r2 != 0) goto L15
            return
        L15:
            r3 = 1
            r5.c = r3
            a(r5, r0, r2)
            return
        L1c:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Unbalanced enter/exit"
            r0.<init>(r1)
            throw r0
    }

    public final boolean exit() {
            r2 = this;
            boolean r0 = r2.c
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            r2.c = r1
            boolean r0 = a(r2)
            return r0
    }

    protected java.io.IOException newTimeoutException(java.io.IOException r3) {
            r2 = this;
            java.io.InterruptedIOException r0 = new java.io.InterruptedIOException
            java.lang.String r1 = "timeout"
            r0.<init>(r1)
            if (r3 == 0) goto Lc
            r0.initCause(r3)
        Lc:
            return r0
    }

    public final com.czhj.wire.okio.Sink sink(com.czhj.wire.okio.Sink r2) {
            r1 = this;
            com.czhj.wire.okio.AsyncTimeout$1 r0 = new com.czhj.wire.okio.AsyncTimeout$1
            r0.<init>(r1, r2)
            return r0
    }

    public final com.czhj.wire.okio.Source source(com.czhj.wire.okio.Source r2) {
            r1 = this;
            com.czhj.wire.okio.AsyncTimeout$2 r0 = new com.czhj.wire.okio.AsyncTimeout$2
            r0.<init>(r1, r2)
            return r0
    }

    protected void timedOut() {
            r0 = this;
            return
    }
}
