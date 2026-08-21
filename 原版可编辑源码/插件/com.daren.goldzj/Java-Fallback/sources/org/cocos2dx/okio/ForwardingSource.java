package org.cocos2dx.okio;

import java.io.IOException;

public abstract class ForwardingSource implements Source {
    private final Source delegate;

    public ForwardingSource(Source r2) {
        if (r2 == null) goto L7;
        this.delegate = r2;
        return;
    L7:
        throw new IllegalArgumentException("delegate == null");
    }

    public final Source delegate() {
        return this.delegate;
    }

    @Override
    public long read(Buffer r2, long r3) throws IOException {
        return this.delegate.read(r2, r3);
    }

    @Override
    public Timeout timeout() {
        return this.delegate.timeout();
    }

    @Override
    public void close() throws IOException {
        this.delegate.close();
    }

    public String toString() {
        return getClass().getSimpleName() + "(" + this.delegate.toString() + ")";
    }
}
