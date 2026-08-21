package com.czhj.wire.okio;

import java.io.IOException;

/* JADX INFO: loaded from: classes.dex */
public abstract class ForwardingSource implements Source {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Source f1887a;

    public ForwardingSource(Source source) {
        if (source == null) {
            throw new IllegalArgumentException("delegate == null");
        }
        this.f1887a = source;
    }

    @Override // com.czhj.wire.okio.Source, java.io.Closeable, java.lang.AutoCloseable
    public void close() throws IOException {
        this.f1887a.close();
    }

    public final Source delegate() {
        return this.f1887a;
    }

    @Override // com.czhj.wire.okio.Source
    public long read(Buffer buffer, long j) throws IOException {
        return this.f1887a.read(buffer, j);
    }

    @Override // com.czhj.wire.okio.Source
    public Timeout timeout() {
        return this.f1887a.timeout();
    }

    public String toString() {
        return getClass().getSimpleName() + "(" + this.f1887a.toString() + ")";
    }
}
