package okio;

@kotlin.Metadata(d1 = {"\u0000H\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0004\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0001¢\u0006\u0002\u0010\u0003J\b\u0010\u000e\u001a\u00020\u000fH\u0016J\r\u0010\b\u001a\u00020\tH\u0007¢\u0006\u0002\b\u0010J\b\u0010\u0011\u001a\u00020\u000fH\u0016J\b\u0010\u0012\u001a\u00020\u0013H\u0016J\u0018\u0010\u0014\u001a\u00020\u000f2\u0006\u0010\u0015\u001a\u00020\u00162\u0006\u0010\u0017\u001a\u00020\u0018H\u0002J\u0018\u0010\u0019\u001a\u00020\u000f2\u0006\u0010\u001a\u001a\u00020\u00162\u0006\u0010\u0017\u001a\u00020\u0018H\u0016J\b\u0010\u001b\u001a\u00020\u000fH\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u0013\u0010\b\u001a\u00020\t8G¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\nR\u000e\u0010\u000b\u001a\u00020\fX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0002\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001c"}, d2 = {"Lokio/GzipSink;", "Lokio/Sink;", "sink", "(Lokio/Sink;)V", "closed", "", "crc", "Ljava/util/zip/CRC32;", "deflater", "Ljava/util/zip/Deflater;", "()Ljava/util/zip/Deflater;", "deflaterSink", "Lokio/DeflaterSink;", "Lokio/RealBufferedSink;", "close", "", "-deprecated_deflater", "flush", "timeout", "Lokio/Timeout;", "updateCrc", "buffer", "Lokio/Buffer;", "byteCount", "", "write", "source", "writeFooter", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
public final class GzipSink implements okio.Sink {
    private boolean closed;
    private final java.util.zip.CRC32 crc;
    private final java.util.zip.Deflater deflater;
    private final okio.DeflaterSink deflaterSink;
    private final okio.RealBufferedSink sink;

    public GzipSink(okio.Sink r3) {
            r2 = this;
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r2.<init>()
            okio.RealBufferedSink r0 = new okio.RealBufferedSink
            r0.<init>(r3)
            r2.sink = r0
            java.util.zip.Deflater r3 = new java.util.zip.Deflater
            r0 = -1
            r1 = 1
            r3.<init>(r0, r1)
            r2.deflater = r3
            okio.DeflaterSink r3 = new okio.DeflaterSink
            okio.RealBufferedSink r0 = r2.sink
            okio.BufferedSink r0 = (okio.BufferedSink) r0
            java.util.zip.Deflater r1 = r2.deflater
            r3.<init>(r0, r1)
            r2.deflaterSink = r3
            java.util.zip.CRC32 r3 = new java.util.zip.CRC32
            r3.<init>()
            r2.crc = r3
            okio.RealBufferedSink r3 = r2.sink
            okio.Buffer r3 = r3.bufferField
            r0 = 8075(0x1f8b, float:1.1315E-41)
            r3.writeShort(r0)
            r0 = 8
            r3.writeByte(r0)
            r0 = 0
            r3.writeByte(r0)
            r3.writeInt(r0)
            r3.writeByte(r0)
            r3.writeByte(r0)
            return
    }

    private final void updateCrc(okio.Buffer r5, long r6) {
            r4 = this;
            okio.Segment r5 = r5.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r5)
        L5:
            r0 = 0
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 <= 0) goto L27
            int r0 = r5.limit
            int r1 = r5.pos
            int r0 = r0 - r1
            long r0 = (long) r0
            long r0 = java.lang.Math.min(r6, r0)
            int r0 = (int) r0
            java.util.zip.CRC32 r1 = r4.crc
            byte[] r2 = r5.data
            int r3 = r5.pos
            r1.update(r2, r3, r0)
            long r0 = (long) r0
            long r6 = r6 - r0
            okio.Segment r5 = r5.next
            kotlin.jvm.internal.Intrinsics.checkNotNull(r5)
            goto L5
        L27:
            return
    }

    private final void writeFooter() {
            r3 = this;
            okio.RealBufferedSink r0 = r3.sink
            java.util.zip.CRC32 r1 = r3.crc
            long r1 = r1.getValue()
            int r1 = (int) r1
            r0.writeIntLe(r1)
            okio.RealBufferedSink r0 = r3.sink
            java.util.zip.Deflater r1 = r3.deflater
            long r1 = r1.getBytesRead()
            int r1 = (int) r1
            r0.writeIntLe(r1)
            return
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "deflater", imports = {}))
    public final java.util.zip.Deflater -deprecated_deflater() {
            r1 = this;
            java.util.zip.Deflater r0 = r1.deflater
            return r0
    }

    @Override
    public void close() throws java.io.IOException {
            r2 = this;
            boolean r0 = r2.closed
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 0
            okio.DeflaterSink r1 = r2.deflaterSink     // Catch: java.lang.Throwable -> Lf
            r1.finishDeflate$okio()     // Catch: java.lang.Throwable -> Lf
            r2.writeFooter()     // Catch: java.lang.Throwable -> Lf
            goto L10
        Lf:
            r0 = move-exception
        L10:
            java.util.zip.Deflater r1 = r2.deflater     // Catch: java.lang.Throwable -> L16
            r1.end()     // Catch: java.lang.Throwable -> L16
            goto L1a
        L16:
            r1 = move-exception
            if (r0 != 0) goto L1a
            r0 = r1
        L1a:
            okio.RealBufferedSink r1 = r2.sink     // Catch: java.lang.Throwable -> L20
            r1.close()     // Catch: java.lang.Throwable -> L20
            goto L24
        L20:
            r1 = move-exception
            if (r0 != 0) goto L24
            r0 = r1
        L24:
            r1 = 1
            r2.closed = r1
            if (r0 != 0) goto L2a
            return
        L2a:
            throw r0
    }

    public final java.util.zip.Deflater deflater() {
            r1 = this;
            java.util.zip.Deflater r0 = r1.deflater
            return r0
    }

    @Override
    public void flush() throws java.io.IOException {
            r1 = this;
            okio.DeflaterSink r0 = r1.deflaterSink
            r0.flush()
            return
    }

    @Override
    public okio.Timeout timeout() {
            r1 = this;
            okio.RealBufferedSink r0 = r1.sink
            okio.Timeout r0 = r0.timeout()
            return r0
    }

    @Override
    public void write(okio.Buffer r3, long r4) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r0 = 0
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 < 0) goto Ld
            r1 = 1
            goto Le
        Ld:
            r1 = 0
        Le:
            if (r1 == 0) goto L1c
            if (r0 != 0) goto L13
            return
        L13:
            r2.updateCrc(r3, r4)
            okio.DeflaterSink r0 = r2.deflaterSink
            r0.write(r3, r4)
            return
        L1c:
            java.lang.Long r3 = java.lang.Long.valueOf(r4)
            java.lang.String r4 = "byteCount < 0: "
            java.lang.String r3 = kotlin.jvm.internal.Intrinsics.stringPlus(r4, r3)
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r3 = r3.toString()
            r4.<init>(r3)
            java.lang.Throwable r4 = (java.lang.Throwable) r4
            throw r4
    }
}
