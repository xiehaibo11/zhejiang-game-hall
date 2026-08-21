package com.czhj.wire.okio;

public final class InflaterSource implements com.czhj.wire.okio.Source {
    private final com.czhj.wire.okio.BufferedSource a;
    private final java.util.zip.Inflater b;
    private int c;
    private boolean d;

    InflaterSource(com.czhj.wire.okio.BufferedSource r1, java.util.zip.Inflater r2) {
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

    public InflaterSource(com.czhj.wire.okio.Source r1, java.util.zip.Inflater r2) {
            r0 = this;
            com.czhj.wire.okio.BufferedSource r1 = com.czhj.wire.okio.Okio.buffer(r1)
            r0.<init>(r1, r2)
            return
    }

    private void a() throws java.io.IOException {
            r4 = this;
            int r0 = r4.c
            if (r0 != 0) goto L5
            return
        L5:
            java.util.zip.Inflater r1 = r4.b
            int r1 = r1.getRemaining()
            int r0 = r0 - r1
            int r1 = r4.c
            int r1 = r1 - r0
            r4.c = r1
            com.czhj.wire.okio.BufferedSource r1 = r4.a
            long r2 = (long) r0
            r1.skip(r2)
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.d
            if (r0 == 0) goto L5
            return
        L5:
            java.util.zip.Inflater r0 = r1.b
            r0.end()
            r0 = 1
            r1.d = r0
            com.czhj.wire.okio.BufferedSource r0 = r1.a
            r0.close()
            return
    }

    @Override
    public long read(com.czhj.wire.okio.Buffer r5, long r6) throws java.io.IOException {
            r4 = this;
            r0 = 0
            int r2 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r2 < 0) goto L72
            boolean r6 = r4.d
            if (r6 != 0) goto L6a
            if (r2 != 0) goto Ld
            return r0
        Ld:
            boolean r6 = r4.refill()
            r7 = 1
            com.czhj.wire.okio.Segment r7 = r5.a(r7)     // Catch: java.util.zip.DataFormatException -> L63
            java.util.zip.Inflater r0 = r4.b     // Catch: java.util.zip.DataFormatException -> L63
            byte[] r1 = r7.c     // Catch: java.util.zip.DataFormatException -> L63
            int r2 = r7.e     // Catch: java.util.zip.DataFormatException -> L63
            int r3 = r7.e     // Catch: java.util.zip.DataFormatException -> L63
            int r3 = 8192 - r3
            int r0 = r0.inflate(r1, r2, r3)     // Catch: java.util.zip.DataFormatException -> L63
            if (r0 <= 0) goto L32
            int r6 = r7.e     // Catch: java.util.zip.DataFormatException -> L63
            int r6 = r6 + r0
            r7.e = r6     // Catch: java.util.zip.DataFormatException -> L63
            long r6 = r5.c     // Catch: java.util.zip.DataFormatException -> L63
            long r0 = (long) r0     // Catch: java.util.zip.DataFormatException -> L63
            long r6 = r6 + r0
            r5.c = r6     // Catch: java.util.zip.DataFormatException -> L63
            return r0
        L32:
            java.util.zip.Inflater r0 = r4.b     // Catch: java.util.zip.DataFormatException -> L63
            boolean r0 = r0.finished()     // Catch: java.util.zip.DataFormatException -> L63
            if (r0 != 0) goto L4e
            java.util.zip.Inflater r0 = r4.b     // Catch: java.util.zip.DataFormatException -> L63
            boolean r0 = r0.needsDictionary()     // Catch: java.util.zip.DataFormatException -> L63
            if (r0 == 0) goto L43
            goto L4e
        L43:
            if (r6 != 0) goto L46
            goto Ld
        L46:
            java.io.EOFException r5 = new java.io.EOFException     // Catch: java.util.zip.DataFormatException -> L63
            java.lang.String r6 = "source exhausted prematurely"
            r5.<init>(r6)     // Catch: java.util.zip.DataFormatException -> L63
            throw r5     // Catch: java.util.zip.DataFormatException -> L63
        L4e:
            r4.a()     // Catch: java.util.zip.DataFormatException -> L63
            int r6 = r7.d     // Catch: java.util.zip.DataFormatException -> L63
            int r0 = r7.e     // Catch: java.util.zip.DataFormatException -> L63
            if (r6 != r0) goto L60
            com.czhj.wire.okio.Segment r6 = r7.pop()     // Catch: java.util.zip.DataFormatException -> L63
            r5.b = r6     // Catch: java.util.zip.DataFormatException -> L63
            com.czhj.wire.okio.SegmentPool.a(r7)     // Catch: java.util.zip.DataFormatException -> L63
        L60:
            r5 = -1
            return r5
        L63:
            r5 = move-exception
            java.io.IOException r6 = new java.io.IOException
            r6.<init>(r5)
            throw r6
        L6a:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r6 = "closed"
            r5.<init>(r6)
            throw r5
        L72:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "byteCount < 0: "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            r5.<init>(r6)
            throw r5
    }

    public boolean refill() throws java.io.IOException {
            r5 = this;
            java.util.zip.Inflater r0 = r5.b
            boolean r0 = r0.needsInput()
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            r5.a()
            java.util.zip.Inflater r0 = r5.b
            int r0 = r0.getRemaining()
            if (r0 != 0) goto L3a
            com.czhj.wire.okio.BufferedSource r0 = r5.a
            boolean r0 = r0.exhausted()
            if (r0 == 0) goto L1f
            r0 = 1
            return r0
        L1f:
            com.czhj.wire.okio.BufferedSource r0 = r5.a
            com.czhj.wire.okio.Buffer r0 = r0.buffer()
            com.czhj.wire.okio.Segment r0 = r0.b
            int r2 = r0.e
            int r3 = r0.d
            int r2 = r2 - r3
            r5.c = r2
            java.util.zip.Inflater r2 = r5.b
            byte[] r3 = r0.c
            int r0 = r0.d
            int r4 = r5.c
            r2.setInput(r3, r0, r4)
            return r1
        L3a:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "?"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public com.czhj.wire.okio.Timeout timeout() {
            r1 = this;
            com.czhj.wire.okio.BufferedSource r0 = r1.a
            com.czhj.wire.okio.Timeout r0 = r0.timeout()
            return r0
    }
}
