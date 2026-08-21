package com.czhj.wire.okio;

import java.io.IOException;
import java.util.zip.CRC32;
import java.util.zip.Deflater;

/* JADX INFO: loaded from: classes.dex */
public final class GzipSink implements Sink {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final BufferedSink f1889a;
    private final Deflater b;
    private final DeflaterSink c;
    private boolean d;
    private final CRC32 e = new CRC32();

    public GzipSink(Sink sink) {
        if (sink == null) {
            throw new IllegalArgumentException("sink == null");
        }
        this.b = new Deflater(-1, true);
        BufferedSink bufferedSinkBuffer = Okio.buffer(sink);
        this.f1889a = bufferedSinkBuffer;
        this.c = new DeflaterSink(bufferedSinkBuffer, this.b);
        a();
    }

    private void a() {
        Buffer buffer = this.f1889a.buffer();
        buffer.writeShort(8075);
        buffer.writeByte(8);
        buffer.writeByte(0);
        buffer.writeInt(0);
        buffer.writeByte(0);
        buffer.writeByte(0);
    }

    private void a(Buffer buffer, long j) {
        Segment segment = buffer.b;
        while (j > 0) {
            int iMin = (int) Math.min(j, segment.e - segment.d);
            this.e.update(segment.c, segment.d, iMin);
            j -= (long) iMin;
            segment = segment.h;
        }
    }

    private void b() throws IOException {
        this.f1889a.writeIntLe((int) this.e.getValue());
        this.f1889a.writeIntLe(this.b.getTotalIn());
    }

    @Override // com.czhj.wire.okio.Sink, java.io.Closeable, java.lang.AutoCloseable
    public void close() throws Throwable {
        if (this.d) {
            return;
        }
        Throwable th = null;
        try {
            this.c.a();
            b();
        } catch (Throwable th2) {
            th = th2;
        }
        try {
            this.b.end();
        } catch (Throwable th3) {
            if (th == null) {
                th = th3;
            }
        }
        try {
            this.f1889a.close();
        } catch (Throwable th4) {
            if (th == null) {
                th = th4;
            }
        }
        this.d = true;
        if (th != null) {
            Util.sneakyRethrow(th);
        }
    }

    @Override // com.czhj.wire.okio.Sink, java.io.Flushable
    public void flush() throws IOException {
        this.c.flush();
    }

    @Override // com.czhj.wire.okio.Sink
    public Timeout timeout() {
        return this.f1889a.timeout();
    }

    @Override // com.czhj.wire.okio.Sink
    public void write(Buffer buffer, long j) throws IOException {
        if (j < 0) {
            throw new IllegalArgumentException("byteCount < 0: " + j);
        }
        if (j == 0) {
            return;
        }
        a(buffer, j);
        this.c.write(buffer, j);
    }
}
