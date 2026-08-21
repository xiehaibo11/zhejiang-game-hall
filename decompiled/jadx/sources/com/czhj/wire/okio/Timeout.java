package com.czhj.wire.okio;

import java.io.IOException;
import java.io.InterruptedIOException;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes.dex */
public class Timeout {
    public static final Timeout NONE = new Timeout() { // from class: com.czhj.wire.okio.Timeout.1
        @Override // com.czhj.wire.okio.Timeout
        public Timeout deadlineNanoTime(long j) {
            return this;
        }

        @Override // com.czhj.wire.okio.Timeout
        public void throwIfReached() throws IOException {
        }

        @Override // com.czhj.wire.okio.Timeout
        public Timeout timeout(long j, TimeUnit timeUnit) {
            return this;
        }
    };

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f1905a;
    private long b;
    private long c;

    public Timeout clearDeadline() {
        this.f1905a = false;
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
        if (this.f1905a) {
            return this.b;
        }
        throw new IllegalStateException("No deadline");
    }

    public Timeout deadlineNanoTime(long j) {
        this.f1905a = true;
        this.b = j;
        return this;
    }

    public boolean hasDeadline() {
        return this.f1905a;
    }

    public void throwIfReached() throws IOException {
        if (Thread.interrupted()) {
            throw new InterruptedIOException("thread interrupted");
        }
        if (this.f1905a && this.b - System.nanoTime() <= 0) {
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
