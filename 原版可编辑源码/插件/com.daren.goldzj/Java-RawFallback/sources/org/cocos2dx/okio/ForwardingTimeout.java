package org.cocos2dx.okio;

public class ForwardingTimeout extends org.cocos2dx.okio.Timeout {
    private org.cocos2dx.okio.Timeout delegate;

    public ForwardingTimeout(org.cocos2dx.okio.Timeout r2) {
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
    public org.cocos2dx.okio.Timeout clearDeadline() {
            r1 = this;
            org.cocos2dx.okio.Timeout r0 = r1.delegate
            org.cocos2dx.okio.Timeout r0 = r0.clearDeadline()
            return r0
    }

    @Override
    public org.cocos2dx.okio.Timeout clearTimeout() {
            r1 = this;
            org.cocos2dx.okio.Timeout r0 = r1.delegate
            org.cocos2dx.okio.Timeout r0 = r0.clearTimeout()
            return r0
    }

    @Override
    public long deadlineNanoTime() {
            r2 = this;
            org.cocos2dx.okio.Timeout r0 = r2.delegate
            long r0 = r0.deadlineNanoTime()
            return r0
    }

    @Override
    public org.cocos2dx.okio.Timeout deadlineNanoTime(long r2) {
            r1 = this;
            org.cocos2dx.okio.Timeout r0 = r1.delegate
            org.cocos2dx.okio.Timeout r2 = r0.deadlineNanoTime(r2)
            return r2
    }

    public final org.cocos2dx.okio.Timeout delegate() {
            r1 = this;
            org.cocos2dx.okio.Timeout r0 = r1.delegate
            return r0
    }

    @Override
    public boolean hasDeadline() {
            r1 = this;
            org.cocos2dx.okio.Timeout r0 = r1.delegate
            boolean r0 = r0.hasDeadline()
            return r0
    }

    public final org.cocos2dx.okio.ForwardingTimeout setDelegate(org.cocos2dx.okio.Timeout r2) {
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
            org.cocos2dx.okio.Timeout r0 = r1.delegate
            r0.throwIfReached()
            return
    }

    @Override
    public org.cocos2dx.okio.Timeout timeout(long r2, java.util.concurrent.TimeUnit r4) {
            r1 = this;
            org.cocos2dx.okio.Timeout r0 = r1.delegate
            org.cocos2dx.okio.Timeout r2 = r0.timeout(r2, r4)
            return r2
    }

    @Override
    public long timeoutNanos() {
            r2 = this;
            org.cocos2dx.okio.Timeout r0 = r2.delegate
            long r0 = r0.timeoutNanos()
            return r0
    }
}
