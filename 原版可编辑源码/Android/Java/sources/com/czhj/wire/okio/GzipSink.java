package com.czhj.wire.okio;

import java.io.IOException;
import java.util.zip.CRC32;
import java.util.zip.Deflater;

public final class GzipSink implements Sink {
    private final BufferedSink a;
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
        this.a = bufferedSinkBuffer;
        this.c = new DeflaterSink(bufferedSinkBuffer, this.b);
        a();
    }

    private void a() {
        Buffer buffer = this.a.buffer();
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
        this.a.writeIntLe((int) this.e.getValue());
        this.a.writeIntLe(this.b.getTotalIn());
    }

    @Override
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
            this.a.close();
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

    @Override
    public void flush() throws IOException {
        this.c.flush();
    }

    @Override
    public Timeout timeout() {
        return this.a.timeout();
    }

    @Override
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
