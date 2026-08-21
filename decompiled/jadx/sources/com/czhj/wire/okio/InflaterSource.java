package com.czhj.wire.okio;

import java.io.EOFException;
import java.io.IOException;
import java.util.zip.DataFormatException;
import java.util.zip.Inflater;

/* JADX INFO: loaded from: classes.dex */
public final class InflaterSource implements Source {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final BufferedSource f1893a;
    private final Inflater b;
    private int c;
    private boolean d;

    InflaterSource(BufferedSource bufferedSource, Inflater inflater) {
        if (bufferedSource == null) {
            throw new IllegalArgumentException("source == null");
        }
        if (inflater == null) {
            throw new IllegalArgumentException("inflater == null");
        }
        this.f1893a = bufferedSource;
        this.b = inflater;
    }

    public InflaterSource(Source source, Inflater inflater) {
        this(Okio.buffer(source), inflater);
    }

    private void a() throws IOException {
        int i = this.c;
        if (i == 0) {
            return;
        }
        int remaining = i - this.b.getRemaining();
        this.c -= remaining;
        this.f1893a.skip(remaining);
    }

    @Override // com.czhj.wire.okio.Source, java.io.Closeable, java.lang.AutoCloseable
    public void close() throws IOException {
        if (this.d) {
            return;
        }
        this.b.end();
        this.d = true;
        this.f1893a.close();
    }

    @Override // com.czhj.wire.okio.Source
    public long read(Buffer buffer, long j) throws IOException {
        boolean zRefill;
        if (j < 0) {
            throw new IllegalArgumentException("byteCount < 0: " + j);
        }
        if (this.d) {
            throw new IllegalStateException("closed");
        }
        if (j == 0) {
            return 0L;
        }
        do {
            zRefill = refill();
            try {
                Segment segmentA = buffer.a(1);
                int iInflate = this.b.inflate(segmentA.c, segmentA.e, 8192 - segmentA.e);
                if (iInflate > 0) {
                    segmentA.e += iInflate;
                    long j2 = iInflate;
                    buffer.c += j2;
                    return j2;
                }
                if (!this.b.finished() && !this.b.needsDictionary()) {
                }
                a();
                if (segmentA.d != segmentA.e) {
                    return -1L;
                }
                buffer.b = segmentA.pop();
                SegmentPool.a(segmentA);
                return -1L;
            } catch (DataFormatException e) {
                throw new IOException(e);
            }
        } while (!zRefill);
        throw new EOFException("source exhausted prematurely");
    }

    public boolean refill() throws IOException {
        if (!this.b.needsInput()) {
            return false;
        }
        a();
        if (this.b.getRemaining() != 0) {
            throw new IllegalStateException("?");
        }
        if (this.f1893a.exhausted()) {
            return true;
        }
        Segment segment = this.f1893a.buffer().b;
        this.c = segment.e - segment.d;
        this.b.setInput(segment.c, segment.d, this.c);
        return false;
    }

    @Override // com.czhj.wire.okio.Source
    public Timeout timeout() {
        return this.f1893a.timeout();
    }
}
