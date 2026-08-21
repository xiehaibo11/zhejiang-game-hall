package com.mbridge.msdk.thrid.okio;

public class ForwardingTimeout extends com.mbridge.msdk.thrid.okio.Timeout {
    private com.mbridge.msdk.thrid.okio.Timeout delegate;

    public ForwardingTimeout(com.mbridge.msdk.thrid.okio.Timeout r2) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L8
            r1.delegate = r2
            return
        L8:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "delegate == null"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public com.mbridge.msdk.thrid.okio.Timeout clearDeadline() {
            r1 = this;
            com.mbridge.msdk.thrid.okio.Timeout r0 = r1.delegate
            com.mbridge.msdk.thrid.okio.Timeout r0 = r0.clearDeadline()
            return r0
    }

    @Override
    public com.mbridge.msdk.thrid.okio.Timeout clearTimeout() {
            r1 = this;
            com.mbridge.msdk.thrid.okio.Timeout r0 = r1.delegate
            com.mbridge.msdk.thrid.okio.Timeout r0 = r0.clearTimeout()
            return r0
    }

    @Override
    public long deadlineNanoTime() {
            r2 = this;
            com.mbridge.msdk.thrid.okio.Timeout r0 = r2.delegate
            long r0 = r0.deadlineNanoTime()
            return r0
    }

    @Override
    public com.mbridge.msdk.thrid.okio.Timeout deadlineNanoTime(long r2) {
            r1 = this;
            com.mbridge.msdk.thrid.okio.Timeout r0 = r1.delegate
            com.mbridge.msdk.thrid.okio.Timeout r2 = r0.deadlineNanoTime(r2)
            return r2
    }

    public final com.mbridge.msdk.thrid.okio.Timeout delegate() {
            r1 = this;
            com.mbridge.msdk.thrid.okio.Timeout r0 = r1.delegate
            return r0
    }

    @Override
    public boolean hasDeadline() {
            r1 = this;
            com.mbridge.msdk.thrid.okio.Timeout r0 = r1.delegate
            boolean r0 = r0.hasDeadline()
            return r0
    }

    public final com.mbridge.msdk.thrid.okio.ForwardingTimeout setDelegate(com.mbridge.msdk.thrid.okio.Timeout r2) {
            r1 = this;
            if (r2 == 0) goto L5
            r1.delegate = r2
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
            com.mbridge.msdk.thrid.okio.Timeout r0 = r1.delegate
            r0.throwIfReached()
            return
    }

    @Override
    public com.mbridge.msdk.thrid.okio.Timeout timeout(long r2, java.util.concurrent.TimeUnit r4) {
            r1 = this;
            com.mbridge.msdk.thrid.okio.Timeout r0 = r1.delegate
            com.mbridge.msdk.thrid.okio.Timeout r2 = r0.timeout(r2, r4)
            return r2
    }

    @Override
    public long timeoutNanos() {
            r2 = this;
            com.mbridge.msdk.thrid.okio.Timeout r0 = r2.delegate
            long r0 = r0.timeoutNanos()
            return r0
    }
}
