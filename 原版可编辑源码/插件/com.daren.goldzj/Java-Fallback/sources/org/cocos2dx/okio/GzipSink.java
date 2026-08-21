package org.cocos2dx.okio;

import java.io.IOException;
import java.util.zip.CRC32;
import java.util.zip.Deflater;

public final class GzipSink implements Sink {
    private boolean closed;
    private final CRC32 crc;
    private final Deflater deflater;
    private final DeflaterSink deflaterSink;
    private final BufferedSink sink;

    public GzipSink(Sink r4) {
        this.crc = new CRC32();
        if (r4 == null) goto L7;
        this.deflater = new Deflater(-1, true);
        this.sink = Okio.buffer(r4);
        this.deflaterSink = new DeflaterSink(this.sink, this.deflater);
        writeHeader();
        return;
    L7:
        throw new IllegalArgumentException("sink == null");
    }

    @Override
    public void write(Buffer r4, long r5) throws IOException {
        if (r5 < 0) goto L9;
        if (r5 != 0) goto L6;
        return;
    L6:
        updateCrc(r4, r5);
        this.deflaterSink.write(r4, r5);
        return;
    L9:
        throw new IllegalArgumentException("byteCount < 0: " + r5);
    }

    @Override
    public void flush() throws IOException {
        this.deflaterSink.flush();
    }

    @Override
    public Timeout timeout() {
        return this.sink.timeout();
    }

    @Override
    public void close() throws IOException {
        if (this.closed == false) goto L5;
        return;
    L5:
        Throwable th = null;
        this.deflaterSink.finishDeflate();     // Catch: Throwable -> L8
        writeFooter();     // Catch: Throwable -> L8
    L27:
        this.deflater.end();     // Catch: Throwable -> L11
    L25:
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
        if (th != null) goto L25;
        th = th;
    L8:
        th = th;
        goto L27
    }

    public final Deflater deflater() {
        return this.deflater;
    }

    private void writeHeader() {
        Buffer r0 = this.sink.buffer();
        r0.writeShort(8075);
        r0.writeByte(8);
        r0.writeByte(0);
        r0.writeInt(0);
        r0.writeByte(0);
        r0.writeByte(0);
    }

    private void writeFooter() throws IOException {
        this.sink.writeIntLe((int) this.crc.getValue());
        this.sink.writeIntLe((int) this.deflater.getBytesRead());
    }

    private void updateCrc(Buffer r5, long r6) {
        Segment r52 = r5.head;
    L4:
        if (r6 <= 0) goto L6;
        int r1 = (int) Math.min(r6, r52.limit - r52.pos);
        this.crc.update(r52.data, r52.pos, r1);
        r6 = r6 - ((long) r1);
        r52 = r52.next;
        goto L4
    }
}
