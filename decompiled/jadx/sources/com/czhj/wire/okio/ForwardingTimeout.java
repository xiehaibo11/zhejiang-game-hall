package com.czhj.wire.okio;

import java.io.IOException;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes.dex */
public class ForwardingTimeout extends Timeout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Timeout f1888a;

    public ForwardingTimeout(Timeout timeout) {
        if (timeout == null) {
            throw new IllegalArgumentException("delegate == null");
        }
        this.f1888a = timeout;
    }

    @Override // com.czhj.wire.okio.Timeout
    public Timeout clearDeadline() {
        return this.f1888a.clearDeadline();
    }

    @Override // com.czhj.wire.okio.Timeout
    public Timeout clearTimeout() {
        return this.f1888a.clearTimeout();
    }

    @Override // com.czhj.wire.okio.Timeout
    public long deadlineNanoTime() {
        return this.f1888a.deadlineNanoTime();
    }

    @Override // com.czhj.wire.okio.Timeout
    public Timeout deadlineNanoTime(long j) {
        return this.f1888a.deadlineNanoTime(j);
    }

    public final Timeout delegate() {
        return this.f1888a;
    }

    @Override // com.czhj.wire.okio.Timeout
    public boolean hasDeadline() {
        return this.f1888a.hasDeadline();
    }

    public final ForwardingTimeout setDelegate(Timeout timeout) {
        if (timeout == null) {
            throw new IllegalArgumentException("delegate == null");
        }
        this.f1888a = timeout;
        return this;
    }

    @Override // com.czhj.wire.okio.Timeout
    public void throwIfReached() throws IOException {
        this.f1888a.throwIfReached();
    }

    @Override // com.czhj.wire.okio.Timeout
    public Timeout timeout(long j, TimeUnit timeUnit) {
        return this.f1888a.timeout(j, timeUnit);
    }

    @Override // com.czhj.wire.okio.Timeout
    public long timeoutNanos() {
        return this.f1888a.timeoutNanos();
    }
}
