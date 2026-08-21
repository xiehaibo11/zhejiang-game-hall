package com.czhj.wire.okio;

import android.os.Build;
import java.io.IOException;
import java.util.zip.Deflater;

public final class DeflaterSink implements Sink {
    private final BufferedSink a;
    private final Deflater b;
    private boolean c;

    DeflaterSink(BufferedSink bufferedSink, Deflater deflater) {
        if (bufferedSink == null) {
            throw new IllegalArgumentException("source == null");
        }
        if (deflater == null) {
            throw new IllegalArgumentException("inflater == null");
        }
        this.a = bufferedSink;
        this.b = deflater;
    }

    public DeflaterSink(Sink sink, Deflater deflater) {
        this(Okio.buffer(sink), deflater);
    }

    private void a(boolean z) throws IOException {
        Segment segmentA;
        Buffer buffer = this.a.buffer();
        while (true) {
            segmentA = buffer.a(1);
            int iDeflate = 0;
            try {
                iDeflate = (Build.VERSION.SDK_INT < 19 || !z) ? this.b.deflate(segmentA.c, segmentA.e, 8192 - segmentA.e) : this.b.deflate(segmentA.c, segmentA.e, 8192 - segmentA.e, 2);
            } catch (Throwable unused) {
            }
            if (iDeflate > 0) {
                segmentA.e += iDeflate;
                buffer.c += (long) iDeflate;
                this.a.emitCompleteSegments();
            } else if (this.b.needsInput()) {
                break;
            }
        }
        if (segmentA.d == segmentA.e) {
            buffer.b = segmentA.pop();
            SegmentPool.a(segmentA);
        }
    }

    void a() throws IOException {
        this.b.finish();
        a(false);
    }

    @Override
    public void close() throws Throwable {
        if (this.c) {
            return;
        }
        Throwable th = null;
        try {
            a();
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
        this.c = true;
        if (th != null) {
            Util.sneakyRethrow(th);
        }
    }

    @Override
    public void flush() throws IOException {
        a(true);
        this.a.flush();
    }

    @Override
    public Timeout timeout() {
        return this.a.timeout();
    }

    public String toString() {
        return "DeflaterSink(" + this.a + ")";
    }

    @Override
    public void write(Buffer buffer, long j) throws IOException {
        Util.checkOffsetAndCount(buffer.c, 0L, j);
        while (j > 0) {
            Segment segment = buffer.b;
            int iMin = (int) Math.min(j, segment.e - segment.d);
            this.b.setInput(segment.c, segment.d, iMin);
            a(false);
            long j2 = iMin;
            buffer.c -= j2;
            segment.d += iMin;
            if (segment.d == segment.e) {
                buffer.b = segment.pop();
                SegmentPool.a(segment);
            }
            j -= j2;
        }
    }
}
