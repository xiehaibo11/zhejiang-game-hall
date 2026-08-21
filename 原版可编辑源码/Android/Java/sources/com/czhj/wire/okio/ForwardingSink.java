package com.czhj.wire.okio;

import java.io.IOException;

public abstract class ForwardingSink implements Sink {
    private final Sink a;

    public ForwardingSink(Sink sink) {
        if (sink == null) {
            throw new IllegalArgumentException("delegate == null");
        }
        this.a = sink;
    }

    @Override
    public void close() throws IOException {
        this.a.close();
    }

    public final Sink delegate() {
        return this.a;
    }

    @Override
    public void flush() throws IOException {
        this.a.flush();
    }

    @Override
    public Timeout timeout() {
        return this.a.timeout();
    }

    public String toString() {
        return getClass().getSimpleName() + "(" + this.a.toString() + ")";
    }

    @Override
    public void write(Buffer buffer, long j) throws IOException {
        this.a.write(buffer, j);
    }
}
