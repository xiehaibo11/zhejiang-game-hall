package com.czhj.wire.okio;

import java.io.IOException;

/* JADX INFO: loaded from: classes.dex */
public abstract class ForwardingSink implements Sink {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Sink f1886a;

    public ForwardingSink(Sink sink) {
        if (sink == null) {
            throw new IllegalArgumentException("delegate == null");
        }
        this.f1886a = sink;
    }

    @Override // com.czhj.wire.okio.Sink, java.io.Closeable, java.lang.AutoCloseable
    public void close() throws IOException {
        this.f1886a.close();
    }

    public final Sink delegate() {
        return this.f1886a;
    }

    @Override // com.czhj.wire.okio.Sink, java.io.Flushable
    public void flush() throws IOException {
        this.f1886a.flush();
    }

    @Override // com.czhj.wire.okio.Sink
    public Timeout timeout() {
        return this.f1886a.timeout();
    }

    public String toString() {
        return getClass().getSimpleName() + "(" + this.f1886a.toString() + ")";
    }

    @Override // com.czhj.wire.okio.Sink
    public void write(Buffer buffer, long j) throws IOException {
        this.f1886a.write(buffer, j);
    }
}
