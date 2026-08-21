package com.czhj.wire.okio;

public final class GzipSink implements com.czhj.wire.okio.Sink {
    private final com.czhj.wire.okio.BufferedSink a;
    private final java.util.zip.Deflater b;
    private final com.czhj.wire.okio.DeflaterSink c;
    private boolean d;
    private final java.util.zip.CRC32 e;

    public GzipSink(com.czhj.wire.okio.Sink r4) {
            r3 = this;
            r3.<init>()
            java.util.zip.CRC32 r0 = new java.util.zip.CRC32
            r0.<init>()
            r3.e = r0
            if (r4 == 0) goto L28
            java.util.zip.Deflater r0 = new java.util.zip.Deflater
            r1 = -1
            r2 = 1
            r0.<init>(r1, r2)
            r3.b = r0
            com.czhj.wire.okio.BufferedSink r4 = com.czhj.wire.okio.Okio.buffer(r4)
            r3.a = r4
            com.czhj.wire.okio.DeflaterSink r0 = new com.czhj.wire.okio.DeflaterSink
            java.util.zip.Deflater r1 = r3.b
            r0.<init>(r4, r1)
            r3.c = r0
            r3.a()
            return
        L28:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "sink == null"
            r4.<init>(r0)
            throw r4
    }

    private void a() {
            r2 = this;
            com.czhj.wire.okio.BufferedSink r0 = r2.a
            com.czhj.wire.okio.Buffer r0 = r0.buffer()
            r1 = 8075(0x1f8b, float:1.1315E-41)
            r0.writeShort(r1)
            r1 = 8
            r0.writeByte(r1)
            r1 = 0
            r0.writeByte(r1)
            r0.writeInt(r1)
            r0.writeByte(r1)
            r0.writeByte(r1)
            return
    }

    private void a(com.czhj.wire.okio.Buffer r5, long r6) {
            r4 = this;
            com.czhj.wire.okio.Segment r5 = r5.b
        L2:
            r0 = 0
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 <= 0) goto L21
            int r0 = r5.e
            int r1 = r5.d
            int r0 = r0 - r1
            long r0 = (long) r0
            long r0 = java.lang.Math.min(r6, r0)
            int r0 = (int) r0
            java.util.zip.CRC32 r1 = r4.e
            byte[] r2 = r5.c
            int r3 = r5.d
            r1.update(r2, r3, r0)
            long r0 = (long) r0
            long r6 = r6 - r0
            com.czhj.wire.okio.Segment r5 = r5.h
            goto L2
        L21:
            return
    }

    private void b() throws java.io.IOException {
            r3 = this;
            com.czhj.wire.okio.BufferedSink r0 = r3.a
            java.util.zip.CRC32 r1 = r3.e
            long r1 = r1.getValue()
            int r1 = (int) r1
            r0.writeIntLe(r1)
            com.czhj.wire.okio.BufferedSink r0 = r3.a
            java.util.zip.Deflater r1 = r3.b
            int r1 = r1.getTotalIn()
            r0.writeIntLe(r1)
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r2 = this;
            boolean r0 = r2.d
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 0
            com.czhj.wire.okio.DeflaterSink r1 = r2.c     // Catch: java.lang.Throwable -> Lf
            r1.a()     // Catch: java.lang.Throwable -> Lf
            r2.b()     // Catch: java.lang.Throwable -> Lf
            goto L10
        Lf:
            r0 = move-exception
        L10:
            java.util.zip.Deflater r1 = r2.b     // Catch: java.lang.Throwable -> L16
            r1.end()     // Catch: java.lang.Throwable -> L16
            goto L1a
        L16:
            r1 = move-exception
            if (r0 != 0) goto L1a
            r0 = r1
        L1a:
            com.czhj.wire.okio.BufferedSink r1 = r2.a     // Catch: java.lang.Throwable -> L20
            r1.close()     // Catch: java.lang.Throwable -> L20
            goto L24
        L20:
            r1 = move-exception
            if (r0 != 0) goto L24
            r0 = r1
        L24:
            r1 = 1
            r2.d = r1
            if (r0 == 0) goto L2c
            com.czhj.wire.okio.Util.sneakyRethrow(r0)
        L2c:
            return
    }

    @Override
    public void flush() throws java.io.IOException {
            r1 = this;
            com.czhj.wire.okio.DeflaterSink r0 = r1.c
            r0.flush()
            return
    }

    @Override
    public com.czhj.wire.okio.Timeout timeout() {
            r1 = this;
            com.czhj.wire.okio.BufferedSink r0 = r1.a
            com.czhj.wire.okio.Timeout r0 = r0.timeout()
            return r0
    }

    @Override
    public void write(com.czhj.wire.okio.Buffer r3, long r4) throws java.io.IOException {
            r2 = this;
            r0 = 0
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 < 0) goto L12
            if (r0 != 0) goto L9
            return
        L9:
            r2.a(r3, r4)
            com.czhj.wire.okio.DeflaterSink r0 = r2.c
            r0.write(r3, r4)
            return
        L12:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "byteCount < 0: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
    }
}
