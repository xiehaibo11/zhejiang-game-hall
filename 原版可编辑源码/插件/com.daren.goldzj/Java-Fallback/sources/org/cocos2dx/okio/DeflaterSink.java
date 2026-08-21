package org.cocos2dx.okio;

import java.io.IOException;
import java.util.zip.Deflater;
import org.codehaus.mojo.animal_sniffer.IgnoreJRERequirement;

public final class DeflaterSink implements Sink {
    private boolean closed;
    private final Deflater deflater;
    private final BufferedSink sink;

    public DeflaterSink(Sink r1, Deflater r2) {
        this(Okio.buffer(r1), r2);
    }

    DeflaterSink(BufferedSink r1, Deflater r2) {
        if (r1 == null) goto L10;
        if (r2 == null) goto L8;
        this.sink = r1;
        this.deflater = r2;
        return;
    L8:
        throw new IllegalArgumentException("inflater == null");
    L10:
        throw new IllegalArgumentException("source == null");
    }

    @Override
    public void write(Buffer r8, long r9) throws IOException {
        Util.checkOffsetAndCount(r8.size, 0, r9);
    L4:
        if (r9 <= 0) goto L9;
        Segment r0 = r8.head;
        int r2 = (int) Math.min(r9, r0.limit - r0.pos);
        this.deflater.setInput(r0.data, r0.pos, r2);
        deflate(false);
        long r5 = r2;
        r8.size -= r5;
        r0.pos += r2;
        if (r0.pos != r0.limit) goto L8;
        r8.head = r0.pop();
        SegmentPool.recycle(r0);
    L8:
        r9 = r9 - r5;
        goto L4
    }

    @IgnoreJRERequirement
    private void deflate(boolean r8) throws IOException {
        Buffer r0 = this.sink.buffer();
    L3:
        Segment r1 = r0.writableSegment(1);
        if (r8 == false) goto L6;
        int r2 = this.deflater.deflate(r1.data, r1.limit, 8192 - r1.limit, 2);
    L7:
        if (r2 > 0) goto L8;
        if (this.deflater.needsInput() == false) goto L3;
        if (r1.pos != r1.limit) goto L21;
        r0.head = r1.pop();
        SegmentPool.recycle(r1);
        return;
    L21:
        return;
    L8:
        r1.limit += r2;
        r0.size += (long) r2;
        this.sink.emitCompleteSegments();
        goto L3
    L6:
        r2 = this.deflater.deflate(r1.data, r1.limit, 8192 - r1.limit);
        goto L7
    }

    @Override
    public void flush() throws IOException {
        deflate(true);
        this.sink.flush();
    }

    void finishDeflate() throws IOException {
        this.deflater.finish();
        deflate(false);
    }

    @Override
    public void close() throws IOException {
        if (this.closed == false) goto L5;
        return;
    L5:
        Throwable th = null;
        finishDeflate();     // Catch: Throwable -> L8
    L27:
        this.deflater.end();     // Catch: Throwable -> L11
    L23:
        this.sink.close();     // Catch: Throwable -> L16
    L19:
        this.closed = true;
        if (th == null) goto L29;
        Util.sneakyRethrow(th);
        return;
    L29:
        return;
    L16:
        th = move-exception;
        if (th != null) goto L19;
        th = th;
    L11:
        th = move-exception;
        if (th != null) goto L23;
        th = th;
    L8:
        th = th;
        goto L27
    }

    @Override
    public Timeout timeout() {
        return this.sink.timeout();
    }

    public String toString() {
        return "DeflaterSink(" + this.sink + ")";
    }
}
