package com.czhj.wire.okio;

public class ForwardingTimeout extends com.czhj.wire.okio.Timeout {
    private com.czhj.wire.okio.Timeout a;

    public ForwardingTimeout(com.czhj.wire.okio.Timeout r2) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L8
            r1.a = r2
            return
        L8:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "delegate == null"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public com.czhj.wire.okio.Timeout clearDeadline() {
            r1 = this;
            com.czhj.wire.okio.Timeout r0 = r1.a
            com.czhj.wire.okio.Timeout r0 = r0.clearDeadline()
            return r0
    }

    @Override
    public com.czhj.wire.okio.Timeout clearTimeout() {
            r1 = this;
            com.czhj.wire.okio.Timeout r0 = r1.a
            com.czhj.wire.okio.Timeout r0 = r0.clearTimeout()
            return r0
    }

    @Override
    public long deadlineNanoTime() {
            r2 = this;
            com.czhj.wire.okio.Timeout r0 = r2.a
            long r0 = r0.deadlineNanoTime()
            return r0
    }

    @Override
    public com.czhj.wire.okio.Timeout deadlineNanoTime(long r2) {
            r1 = this;
            com.czhj.wire.okio.Timeout r0 = r1.a
            com.czhj.wire.okio.Timeout r2 = r0.deadlineNanoTime(r2)
            return r2
    }

    public final com.czhj.wire.okio.Timeout delegate() {
            r1 = this;
            com.czhj.wire.okio.Timeout r0 = r1.a
            return r0
    }

    @Override
    public boolean hasDeadline() {
            r1 = this;
            com.czhj.wire.okio.Timeout r0 = r1.a
            boolean r0 = r0.hasDeadline()
            return r0
    }

    public final com.czhj.wire.okio.ForwardingTimeout setDelegate(com.czhj.wire.okio.Timeout r2) {
            r1 = this;
            if (r2 == 0) goto L5
            r1.a = r2
            return r1
        L5:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "delegate == null"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void throwIfReached() throws java.io.IOException {
            r1 = this;
            com.czhj.wire.okio.Timeout r0 = r1.a
            r0.throwIfReached()
            return
    }

    @Override
    public com.czhj.wire.okio.Timeout timeout(long r2, java.util.concurrent.TimeUnit r4) {
            r1 = this;
            com.czhj.wire.okio.Timeout r0 = r1.a
            com.czhj.wire.okio.Timeout r2 = r0.timeout(r2, r4)
            return r2
    }

    @Override
    public long timeoutNanos() {
            r2 = this;
            com.czhj.wire.okio.Timeout r0 = r2.a
            long r0 = r0.timeoutNanos()
            return r0
    }
}
