package com.czhj.wire.okio;

import java.io.IOException;
import java.io.InterruptedIOException;

/* JADX INFO: loaded from: classes.dex */
public class AsyncTimeout extends Timeout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final int f1877a = 65536;
    private static AsyncTimeout b;
    private boolean c;
    private AsyncTimeout d;
    private long e;

    private static final class Watchdog extends Thread {
        public Watchdog() {
            super("Okio Watchdog");
            setDaemon(true);
        }

        @Override // java.lang.Thread, java.lang.Runnable
        public void run() {
            while (true) {
                try {
                    AsyncTimeout asyncTimeoutA = AsyncTimeout.a();
                    if (asyncTimeoutA != null) {
                        asyncTimeoutA.timedOut();
                    }
                } catch (InterruptedException unused) {
                }
            }
        }
    }

    private long a(long j) {
        return this.e - j;
    }

    static synchronized AsyncTimeout a() throws InterruptedException {
        AsyncTimeout asyncTimeout = b.d;
        if (asyncTimeout == null) {
            AsyncTimeout.class.wait();
            return null;
        }
        long jA = asyncTimeout.a(System.nanoTime());
        if (jA > 0) {
            long j = jA / 1000000;
            Long.signum(j);
            AsyncTimeout.class.wait(j, (int) (jA - (1000000 * j)));
            return null;
        }
        b.d = asyncTimeout.d;
        asyncTimeout.d = null;
        return asyncTimeout;
    }

    /* JADX WARN: Removed duplicated region for block: B:25:0x005c A[Catch: all -> 0x0067, TRY_LEAVE, TryCatch #0 {, blocks: (B:4:0x0003, B:6:0x0007, B:7:0x0016, B:10:0x0022, B:11:0x002b, B:16:0x003a, B:17:0x0040, B:19:0x0044, B:22:0x004f, B:23:0x0052, B:25:0x005c, B:15:0x0034, B:28:0x0061, B:29:0x0066), top: B:33:0x0003 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static synchronized void a(com.czhj.wire.okio.AsyncTimeout r5, long r6, boolean r8) {
        /*
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
        */
        throw new UnsupportedOperationException("Method not decompiled: com.czhj.wire.okio.AsyncTimeout.a(com.czhj.wire.okio.AsyncTimeout, long, boolean):void");
    }

    /* JADX WARN: Code restructure failed: missing block: B:8:0x000b, code lost:
    
        r1.d = r3.d;
        r3.d = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:9:0x0012, code lost:
    
        r3 = false;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static synchronized boolean a(com.czhj.wire.okio.AsyncTimeout r3) {
        /*
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
        */
        throw new UnsupportedOperationException("Method not decompiled: com.czhj.wire.okio.AsyncTimeout.a(com.czhj.wire.okio.AsyncTimeout):boolean");
    }

    final IOException a(IOException iOException) throws IOException {
        return !exit() ? iOException : newTimeoutException(iOException);
    }

    final void a(boolean z) throws IOException {
        if (exit() && z) {
            throw newTimeoutException(null);
        }
    }

    public final void enter() {
        if (this.c) {
            throw new IllegalStateException("Unbalanced enter/exit");
        }
        long jTimeoutNanos = timeoutNanos();
        boolean zHasDeadline = hasDeadline();
        if (jTimeoutNanos != 0 || zHasDeadline) {
            this.c = true;
            a(this, jTimeoutNanos, zHasDeadline);
        }
    }

    public final boolean exit() {
        if (!this.c) {
            return false;
        }
        this.c = false;
        return a(this);
    }

    protected IOException newTimeoutException(IOException iOException) {
        InterruptedIOException interruptedIOException = new InterruptedIOException("timeout");
        if (iOException != null) {
            interruptedIOException.initCause(iOException);
        }
        return interruptedIOException;
    }

    public final Sink sink(final Sink sink) {
        return new Sink() { // from class: com.czhj.wire.okio.AsyncTimeout.1
            @Override // com.czhj.wire.okio.Sink, java.io.Closeable, java.lang.AutoCloseable
            public void close() throws IOException {
                AsyncTimeout.this.enter();
                try {
                    try {
                        sink.close();
                        AsyncTimeout.this.a(true);
                    } catch (IOException e) {
                        throw AsyncTimeout.this.a(e);
                    }
                } catch (Throwable th) {
                    AsyncTimeout.this.a(false);
                    throw th;
                }
            }

            @Override // com.czhj.wire.okio.Sink, java.io.Flushable
            public void flush() throws IOException {
                AsyncTimeout.this.enter();
                try {
                    try {
                        sink.flush();
                        AsyncTimeout.this.a(true);
                    } catch (IOException e) {
                        throw AsyncTimeout.this.a(e);
                    }
                } catch (Throwable th) {
                    AsyncTimeout.this.a(false);
                    throw th;
                }
            }

            @Override // com.czhj.wire.okio.Sink
            public Timeout timeout() {
                return AsyncTimeout.this;
            }

            public String toString() {
                return "AsyncTimeout.sink(" + sink + ")";
            }

            @Override // com.czhj.wire.okio.Sink
            public void write(Buffer buffer, long j) throws IOException {
                Util.checkOffsetAndCount(buffer.c, 0L, j);
                while (true) {
                    long j2 = 0;
                    if (j <= 0) {
                        return;
                    }
                    Segment segment = buffer.b;
                    while (true) {
                        if (j2 >= 65536) {
                            break;
                        }
                        j2 += (long) (buffer.b.e - buffer.b.d);
                        if (j2 >= j) {
                            j2 = j;
                            break;
                        }
                        segment = segment.h;
                    }
                    AsyncTimeout.this.enter();
                    try {
                        try {
                            sink.write(buffer, j2);
                            j -= j2;
                            AsyncTimeout.this.a(true);
                        } catch (IOException e) {
                            throw AsyncTimeout.this.a(e);
                        }
                    } catch (Throwable th) {
                        AsyncTimeout.this.a(false);
                        throw th;
                    }
                }
            }
        };
    }

    public final Source source(final Source source) {
        return new Source() { // from class: com.czhj.wire.okio.AsyncTimeout.2
            @Override // com.czhj.wire.okio.Source, java.io.Closeable, java.lang.AutoCloseable
            public void close() throws IOException {
                try {
                    try {
                        source.close();
                        AsyncTimeout.this.a(true);
                    } catch (IOException e) {
                        throw AsyncTimeout.this.a(e);
                    }
                } catch (Throwable th) {
                    AsyncTimeout.this.a(false);
                    throw th;
                }
            }

            @Override // com.czhj.wire.okio.Source
            public long read(Buffer buffer, long j) throws IOException {
                AsyncTimeout.this.enter();
                try {
                    try {
                        long j2 = source.read(buffer, j);
                        AsyncTimeout.this.a(true);
                        return j2;
                    } catch (IOException e) {
                        throw AsyncTimeout.this.a(e);
                    }
                } catch (Throwable th) {
                    AsyncTimeout.this.a(false);
                    throw th;
                }
            }

            @Override // com.czhj.wire.okio.Source
            public Timeout timeout() {
                return AsyncTimeout.this;
            }

            public String toString() {
                return "AsyncTimeout.source(" + source + ")";
            }
        };
    }

    protected void timedOut() {
    }
}
