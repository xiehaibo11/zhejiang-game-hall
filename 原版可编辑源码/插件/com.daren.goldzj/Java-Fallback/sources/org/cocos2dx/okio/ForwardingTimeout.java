package org.cocos2dx.okio;

import java.io.IOException;
import java.util.concurrent.TimeUnit;

public class ForwardingTimeout extends Timeout {
    private Timeout delegate;

    public ForwardingTimeout(Timeout r2) {
        if (r2 == null) goto L7;
        this.delegate = r2;
        return;
    L7:
        throw new IllegalArgumentException("delegate == null");
    }

    public final Timeout delegate() {
        return this.delegate;
    }

    public final ForwardingTimeout setDelegate(Timeout r2) {
        if (r2 == null) goto L6;
        this.delegate = r2;
        return this;
    L6:
        throw new IllegalArgumentException("delegate == null");
    }

    @Override
    public Timeout timeout(long r2, TimeUnit r4) {
        return this.delegate.timeout(r2, r4);
    }

    @Override
    public long timeoutNanos() {
        return this.delegate.timeoutNanos();
    }

    @Override
    public boolean hasDeadline() {
        return this.delegate.hasDeadline();
    }

    @Override
    public long deadlineNanoTime() {
        return this.delegate.deadlineNanoTime();
    }

    @Override
    public Timeout deadlineNanoTime(long r2) {
        return this.delegate.deadlineNanoTime(r2);
    }

    @Override
    public Timeout clearTimeout() {
        return this.delegate.clearTimeout();
    }

    @Override
    public Timeout clearDeadline() {
        return this.delegate.clearDeadline();
    }

    @Override
    public void throwIfReached() throws IOException {
        this.delegate.throwIfReached();
    }
}
