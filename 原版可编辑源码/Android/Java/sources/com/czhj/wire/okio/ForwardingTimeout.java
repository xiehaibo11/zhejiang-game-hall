package com.czhj.wire.okio;

import java.io.IOException;
import java.util.concurrent.TimeUnit;

public class ForwardingTimeout extends Timeout {
    private Timeout a;

    public ForwardingTimeout(Timeout timeout) {
        if (timeout == null) {
            throw new IllegalArgumentException("delegate == null");
        }
        this.a = timeout;
    }

    @Override
    public Timeout clearDeadline() {
        return this.a.clearDeadline();
    }

    @Override
    public Timeout clearTimeout() {
        return this.a.clearTimeout();
    }

    @Override
    public long deadlineNanoTime() {
        return this.a.deadlineNanoTime();
    }

    @Override
    public Timeout deadlineNanoTime(long j) {
        return this.a.deadlineNanoTime(j);
    }

    public final Timeout delegate() {
        return this.a;
    }

    @Override
    public boolean hasDeadline() {
        return this.a.hasDeadline();
    }

    public final ForwardingTimeout setDelegate(Timeout timeout) {
        if (timeout == null) {
            throw new IllegalArgumentException("delegate == null");
        }
        this.a = timeout;
        return this;
    }

    @Override
    public void throwIfReached() throws IOException {
        this.a.throwIfReached();
    }

    @Override
    public Timeout timeout(long j, TimeUnit timeUnit) {
        return this.a.timeout(j, timeUnit);
    }

    @Override
    public long timeoutNanos() {
        return this.a.timeoutNanos();
    }
}
