package org.cocos2dx.okio;

import java.io.IOException;

public abstract class ForwardingSink implements Sink {
    private final Sink delegate;

    public ForwardingSink(Sink r2) {
        if (r2 == null) goto L7;
        this.delegate = r2;
        return;
    L7:
        throw new IllegalArgumentException("delegate == null");
    }

    public final Sink delegate() {
        return this.delegate;
    }

    @Override
    public void write(Buffer r2, long r3) throws IOException {
        this.delegate.write(r2, r3);
    }

    @Override
    public void flush() throws IOException {
        this.delegate.flush();
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
