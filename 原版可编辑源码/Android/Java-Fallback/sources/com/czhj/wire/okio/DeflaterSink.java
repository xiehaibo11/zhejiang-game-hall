package com.czhj.wire.okio;

public final class DeflaterSink implements com.czhj.wire.okio.Sink {
    private final com.czhj.wire.okio.BufferedSink a;
    private final java.util.zip.Deflater b;
    private boolean c;

    DeflaterSink(com.czhj.wire.okio.BufferedSink r1, java.util.zip.Deflater r2) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto L14
            if (r2 == 0) goto Lc
            r0.a = r1
            r0.b = r2
            return
        Lc:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "inflater == null"
            r1.<init>(r2)
            throw r1
        L14:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "source == null"
            r1.<init>(r2)
            throw r1
    }

    public DeflaterSink(com.czhj.wire.okio.Sink r1, java.util.zip.Deflater r2) {
            r0 = this;
            com.czhj.wire.okio.BufferedSink r1 = com.czhj.wire.okio.Okio.buffer(r1)
            r0.<init>(r1, r2)
            return
    }

    private void a(boolean r9) throws java.io.IOException {
            r8 = this;
            com.czhj.wire.okio.BufferedSink r0 = r8.a
            com.czhj.wire.okio.Buffer r0 = r0.buffer()
        L6:
            r1 = 1
            com.czhj.wire.okio.Segment r1 = r0.a(r1)
            r2 = 0
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L41
            r4 = 19
            if (r3 < r4) goto L33
            if (r9 == 0) goto L24
            java.util.zip.Deflater r3 = r8.b     // Catch: java.lang.Throwable -> L41
            byte[] r4 = r1.c     // Catch: java.lang.Throwable -> L41
            int r5 = r1.e     // Catch: java.lang.Throwable -> L41
            int r6 = r1.e     // Catch: java.lang.Throwable -> L41
            int r6 = 8192 - r6
            r7 = 2
            int r2 = r3.deflate(r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L41
            goto L41
        L24:
            java.util.zip.Deflater r3 = r8.b     // Catch: java.lang.Throwable -> L41
            byte[] r4 = r1.c     // Catch: java.lang.Throwable -> L41
            int r5 = r1.e     // Catch: java.lang.Throwable -> L41
            int r6 = r1.e     // Catch: java.lang.Throwable -> L41
            int r6 = 8192 - r6
            int r2 = r3.deflate(r4, r5, r6)     // Catch: java.lang.Throwable -> L41
            goto L41
        L33:
            java.util.zip.Deflater r3 = r8.b     // Catch: java.lang.Throwable -> L41
            byte[] r4 = r1.c     // Catch: java.lang.Throwable -> L41
            int r5 = r1.e     // Catch: java.lang.Throwable -> L41
            int r6 = r1.e     // Catch: java.lang.Throwable -> L41
            int r6 = 8192 - r6
            int r2 = r3.deflate(r4, r5, r6)     // Catch: java.lang.Throwable -> L41
        L41:
            if (r2 <= 0) goto L54
            int r3 = r1.e
            int r3 = r3 + r2
            r1.e = r3
            long r3 = r0.c
            long r1 = (long) r2
            long r3 = r3 + r1
            r0.c = r3
            com.czhj.wire.okio.BufferedSink r1 = r8.a
            r1.emitCompleteSegments()
            goto L6
        L54:
            java.util.zip.Deflater r2 = r8.b
            boolean r2 = r2.needsInput()
            if (r2 == 0) goto L6
            int r9 = r1.d
            int r2 = r1.e
            if (r9 != r2) goto L6b
            com.czhj.wire.okio.Segment r9 = r1.pop()
            r0.b = r9
            com.czhj.wire.okio.SegmentPool.a(r1)
        L6b:
            return
    }

    void a() throws java.io.IOException {
            r1 = this;
            java.util.zip.Deflater r0 = r1.b
            r0.finish()
            r0 = 0
            r1.a(r0)
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r2 = this;
            boolean r0 = r2.c
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 0
            r2.a()     // Catch: java.lang.Throwable -> La
            goto Lb
        La:
            r0 = move-exception
        Lb:
            java.util.zip.Deflater r1 = r2.b     // Catch: java.lang.Throwable -> L11
            r1.end()     // Catch: java.lang.Throwable -> L11
            goto L15
        L11:
            r1 = move-exception
            if (r0 != 0) goto L15
            r0 = r1
        L15:
            com.czhj.wire.okio.BufferedSink r1 = r2.a     // Catch: java.lang.Throwable -> L1b
            r1.close()     // Catch: java.lang.Throwable -> L1b
            goto L1f
        L1b:
            r1 = move-exception
            if (r0 != 0) goto L1f
            r0 = r1
        L1f:
            r1 = 1
            r2.c = r1
            if (r0 == 0) goto L27
            com.czhj.wire.okio.Util.sneakyRethrow(r0)
        L27:
            return
    }

    @Override
    public void flush() throws java.io.IOException {
            r1 = this;
            r0 = 1
            r1.a(r0)
            com.czhj.wire.okio.BufferedSink r0 = r1.a
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

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "DeflaterSink("
            r0.append(r1)
            com.czhj.wire.okio.BufferedSink r1 = r2.a
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void write(com.czhj.wire.okio.Buffer r7, long r8) throws java.io.IOException {
            r6 = this;
            long r0 = r7.c
            r2 = 0
            r4 = r8
            com.czhj.wire.okio.Util.checkOffsetAndCount(r0, r2, r4)
        L8:
            r0 = 0
            int r0 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r0 <= 0) goto L44
            com.czhj.wire.okio.Segment r0 = r7.b
            int r1 = r0.e
            int r2 = r0.d
            int r1 = r1 - r2
            long r1 = (long) r1
            long r1 = java.lang.Math.min(r8, r1)
            int r1 = (int) r1
            java.util.zip.Deflater r2 = r6.b
            byte[] r3 = r0.c
            int r4 = r0.d
            r2.setInput(r3, r4, r1)
            r2 = 0
            r6.a(r2)
            long r2 = r7.c
            long r4 = (long) r1
            long r2 = r2 - r4
            r7.c = r2
            int r2 = r0.d
            int r2 = r2 + r1
            r0.d = r2
            int r1 = r0.d
            int r2 = r0.e
            if (r1 != r2) goto L42
            com.czhj.wire.okio.Segment r1 = r0.pop()
            r7.b = r1
            com.czhj.wire.okio.SegmentPool.a(r0)
        L42:
            long r8 = r8 - r4
            goto L8
        L44:
            return
    }
}
