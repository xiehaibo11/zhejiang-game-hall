package com.czhj.wire.okio;

import java.io.IOException;

public abstract class ForwardingSource implements Source {
    private final Source a;

    public ForwardingSource(Source source) {
        if (source == null) {
            throw new IllegalArgumentException("delegate == null");
        }
        this.a = source;
    }

    @Override
    public void close() throws IOException {
        this.a.close();
    }

    public final Source delegate() {
        return this.a;
    }

    @Override
    public long read(Buffer buffer, long j) throws IOException {
        return this.a.read(buffer, j);
    }

    @Override
    public Timeout timeout() {
        return this.a.timeout();
    }

    public String toString() {
        return getClass().getSimpleName() + "(" + this.a.toString() + ")";
    }
}
