package com.czhj.wire.okio;

import java.io.IOException;
import java.io.InterruptedIOException;
import java.util.concurrent.TimeUnit;

public class Timeout {
    public static final Timeout NONE = new Timeout() {
        @Override
        public Timeout deadlineNanoTime(long j) {
            return this;
        }

        @Override
        public void throwIfReached() throws IOException {
        }

        @Override
        public Timeout timeout(long j, TimeUnit timeUnit) {
            return this;
        }
    };
    private boolean a;
    private long b;
    private long c;

    public Timeout clearDeadline() {
        this.a = false;
        return this;
    }

    public Timeout clearTimeout() {
        this.c = 0L;
        return this;
    }

    public final Timeout deadline(long j, TimeUnit timeUnit) {
        if (j > 0) {
            if (timeUnit != null) {
                return deadlineNanoTime(System.nanoTime() + timeUnit.toNanos(j));
            }
            throw new IllegalArgumentException("unit == null");
        }
        throw new IllegalArgumentException("duration <= 0: " + j);
    }

    public long deadlineNanoTime() {
        if (this.a) {
            return this.b;
        }
        throw new IllegalStateException("No deadline");
    }

    public Timeout deadlineNanoTime(long j) {
        this.a = true;
        this.b = j;
        return this;
    }

    public boolean hasDeadline() {
        return this.a;
    }

    public void throwIfReached() throws IOException {
        if (Thread.interrupted()) {
            throw new InterruptedIOException("thread interrupted");
        }
        if (this.a && this.b - System.nanoTime() <= 0) {
            throw new InterruptedIOException("deadline reached");
        }
    }

    public Timeout timeout(long j, TimeUnit timeUnit) {
        if (j >= 0) {
            if (timeUnit == null) {
                throw new IllegalArgumentException("unit == null");
            }
            this.c = timeUnit.toNanos(j);
            return this;
        }
        throw new IllegalArgumentException("timeout < 0: " + j);
    }

    public long timeoutNanos() {
        return this.c;
    }
}
