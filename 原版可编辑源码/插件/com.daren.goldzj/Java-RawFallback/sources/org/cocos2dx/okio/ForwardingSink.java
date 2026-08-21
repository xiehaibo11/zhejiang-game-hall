package org.cocos2dx.okio;

public abstract class ForwardingSink implements org.cocos2dx.okio.Sink {
    private final org.cocos2dx.okio.Sink delegate;

    public ForwardingSink(org.cocos2dx.okio.Sink r2) {
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
    public void close() throws java.io.IOException {
            r1 = this;
            org.cocos2dx.okio.Sink r0 = r1.delegate
            r0.close()
            return
    }

    public final org.cocos2dx.okio.Sink delegate() {
            r1 = this;
            org.cocos2dx.okio.Sink r0 = r1.delegate
            return r0
    }

    @Override
    public void flush() throws java.io.IOException {
            r1 = this;
            org.cocos2dx.okio.Sink r0 = r1.delegate
            r0.flush()
            return
    }

    @Override
    public org.cocos2dx.okio.Timeout timeout() {
            r1 = this;
            org.cocos2dx.okio.Sink r0 = r1.delegate
            org.cocos2dx.okio.Timeout r0 = r0.timeout()
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r1 = "("
            r0.append(r1)
            org.cocos2dx.okio.Sink r1 = r2.delegate
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void write(org.cocos2dx.okio.Buffer r2, long r3) throws java.io.IOException {
            r1 = this;
            org.cocos2dx.okio.Sink r0 = r1.delegate
            r0.write(r2, r3)
            return
    }
}
