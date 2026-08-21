package com.czhj.wire.okio;

import java.io.IOException;
import java.io.InterruptedIOException;

public class AsyncTimeout extends Timeout {
    private static final int a = 65536;
    private static AsyncTimeout b;
    private boolean c;
    private AsyncTimeout d;
    private long e;

    private static final class Watchdog extends Thread {
        public Watchdog() {
            super("Okio Watchdog");
            setDaemon(true);
        }

        @Override
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
    */
    private static synchronized void a(AsyncTimeout asyncTimeout, long j, boolean z) {
        AsyncTimeout asyncTimeout2;
        if (b == null) {
            b = new AsyncTimeout();
            new Watchdog().start();
        }
        long jNanoTime = System.nanoTime();
        if (j != 0 && z) {
            j = Math.min(j, asyncTimeout.deadlineNanoTime() - jNanoTime);
        } else if (j == 0) {
            if (!z) {
                throw new AssertionError();
            }
            asyncTimeout.e = asyncTimeout.deadlineNanoTime();
            long jA = asyncTimeout.a(jNanoTime);
            asyncTimeout2 = b;
            while (asyncTimeout2.d != null && jA >= asyncTimeout2.d.a(jNanoTime)) {
                asyncTimeout2 = asyncTimeout2.d;
            }
            asyncTimeout.d = asyncTimeout2.d;
            asyncTimeout2.d = asyncTimeout;
            if (asyncTimeout2 == b) {
                AsyncTimeout.class.notify();
            }
        }
        asyncTimeout.e = j + jNanoTime;
        long jA2 = asyncTimeout.a(jNanoTime);
        asyncTimeout2 = b;
        while (asyncTimeout2.d != null) {
            asyncTimeout2 = asyncTimeout2.d;
        }
        asyncTimeout.d = asyncTimeout2.d;
        asyncTimeout2.d = asyncTimeout;
        if (asyncTimeout2 == b) {
        }
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
    */
    private static synchronized boolean a(AsyncTimeout asyncTimeout) {
        boolean z;
        AsyncTimeout asyncTimeout2 = b;
        while (true) {
            if (asyncTimeout2 == null) {
                z = true;
                break;
            }
            if (asyncTimeout2.d == asyncTimeout) {
                break;
            }
            asyncTimeout2 = asyncTimeout2.d;
        }
        return z;
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
        return new Sink() {
            @Override
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

            @Override
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

            @Override
            public Timeout timeout() {
                return AsyncTimeout.this;
            }

            public String toString() {
                return "AsyncTimeout.sink(" + sink + ")";
            }

            @Override
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
        return new Source() {
            @Override
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

            @Override
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

            @Override
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
