package org.cocos2dx.okio;

import java.io.IOException;
import java.io.InterruptedIOException;
import java.util.concurrent.TimeUnit;
import javax.annotation.Nullable;

public class AsyncTimeout extends Timeout {
    private static final long IDLE_TIMEOUT_MILLIS = 0;
    private static final long IDLE_TIMEOUT_NANOS = 0;
    private static final int TIMEOUT_WRITE_SIZE = 65536;

    @Nullable
    static AsyncTimeout head;
    private boolean inQueue;

    @Nullable
    private AsyncTimeout next;
    private long timeoutAt;

    private static final class Watchdog extends Thread {
        Watchdog() {
            super("Okio Watchdog");
            setDaemon(true);
        }

        @Override
        public void run() {
        L20:
            monitor-enter(AsyncTimeout.class);     // Catch: InterruptedException -> L19
            AsyncTimeout r1 = AsyncTimeout.awaitTimeout();     // Catch: Throwable -> L16
            if (r1 == null) goto L6;
            if (r1 != AsyncTimeout.head) goto L13;
            AsyncTimeout.head = null;     // Catch: Throwable -> L16
            monitor-exit(AsyncTimeout.class);     // Catch: Throwable -> L16
            goto L20
        L12:
            return;
        L13:
            monitor-exit(AsyncTimeout.class);     // Catch: Throwable -> L16
            r1.timedOut();     // Catch: InterruptedException -> L19
            goto L20
        L6:
            monitor-exit(AsyncTimeout.class);     // Catch: Throwable -> L16
        L16:
            th = move-exception;
            throw th;     // Catch: InterruptedException -> L19
        }
    }

    protected void timedOut() {
    }

    public AsyncTimeout() {
    }

    static {
        IDLE_TIMEOUT_MILLIS = TimeUnit.SECONDS.toMillis(60);
        IDLE_TIMEOUT_NANOS = TimeUnit.MILLISECONDS.toNanos(IDLE_TIMEOUT_MILLIS);
    }

    public final void enter() {
        if (this.inQueue == true) goto L11;
        long r0 = timeoutNanos();
        boolean r2 = hasDeadline();
        if (r0 != 0) goto L8;
        if (r2 == true) goto L8;
        return;
    L8:
        this.inQueue = true;
        scheduleTimeout(this, r0, r2);
        return;
    L11:
        throw new IllegalStateException("Unbalanced enter/exit");
    }

    private static synchronized void scheduleTimeout(AsyncTimeout r6, long r7, boolean r9) {
        monitor-enter(AsyncTimeout.class);
    L29:
        th = move-exception;
        throw th;
    L5:
        if (head != null) goto L7;
        head = new AsyncTimeout();     // Catch: Throwable -> L29
        new Watchdog().start();     // Catch: Throwable -> L29
    L7:
        long r1 = System.nanoTime();     // Catch: Throwable -> L29
        if (r7 == 0) goto L11;
        if (r9 == false) goto L11;
        r6.timeoutAt = Math.min(r7, r6.deadlineNanoTime() - r1) + r1;     // Catch: Throwable -> L29
    L15:
        long r72 = r6.remainingNanos(r1);     // Catch: Throwable -> L29
        AsyncTimeout r92 = head;     // Catch: Throwable -> L29
    L17:
        if (r92.next == null) goto L22;
        if (r72 < r92.next.remainingNanos(r1)) goto L22;
        r92 = r92.next;     // Catch: Throwable -> L29
    L22:
        r6.next = r92.next;     // Catch: Throwable -> L29
        r92.next = r6;     // Catch: Throwable -> L29
        if (r92 != head) goto L25;
        AsyncTimeout.class.notify();     // Catch: Throwable -> L29
    L25:
        monitor-exit(AsyncTimeout.class);
        return;
    L11:
        if (r7 == 0) goto L13;
        r6.timeoutAt = r7 + r1;     // Catch: Throwable -> L29
        goto L15
    L13:
        if (r9 == false) goto L28;
        r6.timeoutAt = r6.deadlineNanoTime();     // Catch: Throwable -> L29
        goto L15
    L28:
        throw new AssertionError();     // Catch: Throwable -> L29
    }

    public final boolean exit() {
        if (this.inQueue == true) goto L5;
        return false;
    L5:
        this.inQueue = false;
        return cancelScheduledTimeout(this);
    }

    private static synchronized boolean cancelScheduledTimeout(AsyncTimeout r3) {
        monitor-enter(AsyncTimeout.class);
        AsyncTimeout r1 = head;     // Catch: Throwable -> L17
    L5:
        if (r1 == null) goto L15;
        if (r1.next == r3) goto L8;
        r1 = r1.next;     // Catch: Throwable -> L17
        goto L5
    L8:
        r1.next = r3.next;     // Catch: Throwable -> L17
        r3.next = null;     // Catch: Throwable -> L17
        monitor-exit(AsyncTimeout.class);
        return false;
    L15:
        monitor-exit(AsyncTimeout.class);
        return true;
    L17:
        th = move-exception;
        throw th;
    }

    private long remainingNanos(long r3) {
        return this.timeoutAt - r3;
    }

    public final Sink sink(final Sink r2) {
        return new 1(this, r2);
    }

    public final Source source(final Source r2) {
        return new 2(this, r2);
    }

    final void exit(boolean r2) throws IOException {
        if (exit() == false) goto L8;
        if (r2 == true) goto L7;
        return;
    L7:
        throw newTimeoutException(null);
    }

    final IOException exit(IOException r2) throws IOException {
        if (exit() == true) goto L6;
        return r2;
    L6:
        return newTimeoutException(r2);
    }

    protected IOException newTimeoutException(@Nullable IOException r3) {
        InterruptedIOException r0 = new InterruptedIOException("timeout");
        if (r3 == null) goto L5;
        r0.initCause(r3);
    L5:
        return r0;
    }

    @Nullable
    static AsyncTimeout awaitTimeout() throws InterruptedException {
        AsyncTimeout r0 = head.next;
        if (r0 != null) goto L10;
        long r2 = System.nanoTime();
        AsyncTimeout.class.wait(IDLE_TIMEOUT_MILLIS);
        if (head.next == null) goto L7;
        return null;
    L7:
        if ((System.nanoTime() - r2) >= IDLE_TIMEOUT_NANOS) goto L9;
        return null;
    L9:
        return head;
    L10:
        long r22 = r0.remainingNanos(System.nanoTime());
        if (r22 <= 0) goto L14;
        long r6 = r22 / 1000000;
        AsyncTimeout.class.wait(r6, (int) (r22 - (1000000 * r6)));
        return null;
    L14:
        AsyncTimeout r23 = head;
        r23.next = r0.next;
        r0.next = null;
        return r0;
    }
}
