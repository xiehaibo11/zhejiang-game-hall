package com.czhj.wire.okio;

public final class GzipSource implements com.czhj.wire.okio.Source {
    private static final byte a = 1;
    private static final byte b = 2;
    private static final byte c = 3;
    private static final byte d = 4;
    private static final byte e = 0;
    private static final byte f = 1;
    private static final byte g = 2;
    private static final byte h = 3;
    private int i;
    private final com.czhj.wire.okio.BufferedSource j;
    private final java.util.zip.Inflater k;
    private final com.czhj.wire.okio.InflaterSource l;
    private final java.util.zip.CRC32 m;

    public GzipSource(com.czhj.wire.okio.Source r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.i = r0
            java.util.zip.CRC32 r0 = new java.util.zip.CRC32
            r0.<init>()
            r2.m = r0
            if (r3 == 0) goto L27
            java.util.zip.Inflater r0 = new java.util.zip.Inflater
            r1 = 1
            r0.<init>(r1)
            r2.k = r0
            com.czhj.wire.okio.BufferedSource r3 = com.czhj.wire.okio.Okio.buffer(r3)
            r2.j = r3
            com.czhj.wire.okio.InflaterSource r0 = new com.czhj.wire.okio.InflaterSource
            java.util.zip.Inflater r1 = r2.k
            r0.<init>(r3, r1)
            r2.l = r0
            return
        L27:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "source == null"
            r3.<init>(r0)
            throw r3
    }

    private void a() throws java.io.IOException {
            r17 = this;
            r6 = r17
            com.czhj.wire.okio.BufferedSource r0 = r6.j
            r1 = 10
            r0.require(r1)
            com.czhj.wire.okio.BufferedSource r0 = r6.j
            com.czhj.wire.okio.Buffer r0 = r0.buffer()
            r1 = 3
            byte r7 = r0.getByte(r1)
            int r0 = r7 >> 1
            r8 = 1
            r0 = r0 & r8
            r9 = 0
            if (r0 != r8) goto L1e
            r10 = r8
            goto L1f
        L1e:
            r10 = r9
        L1f:
            if (r10 == 0) goto L30
            com.czhj.wire.okio.BufferedSource r0 = r6.j
            com.czhj.wire.okio.Buffer r1 = r0.buffer()
            r2 = 0
            r4 = 10
            r0 = r17
            r0.a(r1, r2, r4)
        L30:
            com.czhj.wire.okio.BufferedSource r0 = r6.j
            short r0 = r0.readShort()
            r1 = 8075(0x1f8b, float:1.1315E-41)
            java.lang.String r2 = "ID1ID2"
            r6.a(r2, r1, r0)
            com.czhj.wire.okio.BufferedSource r0 = r6.j
            r1 = 8
            r0.skip(r1)
            int r0 = r7 >> 2
            r0 = r0 & r8
            if (r0 != r8) goto L86
            com.czhj.wire.okio.BufferedSource r0 = r6.j
            r1 = 2
            r0.require(r1)
            if (r10 == 0) goto L61
            com.czhj.wire.okio.BufferedSource r0 = r6.j
            com.czhj.wire.okio.Buffer r1 = r0.buffer()
            r2 = 0
            r4 = 2
            r0 = r17
            r0.a(r1, r2, r4)
        L61:
            com.czhj.wire.okio.BufferedSource r0 = r6.j
            com.czhj.wire.okio.Buffer r0 = r0.buffer()
            short r0 = r0.readShortLe()
            com.czhj.wire.okio.BufferedSource r1 = r6.j
            long r11 = (long) r0
            r1.require(r11)
            if (r10 == 0) goto L81
            com.czhj.wire.okio.BufferedSource r0 = r6.j
            com.czhj.wire.okio.Buffer r1 = r0.buffer()
            r2 = 0
            r0 = r17
            r4 = r11
            r0.a(r1, r2, r4)
        L81:
            com.czhj.wire.okio.BufferedSource r0 = r6.j
            r0.skip(r11)
        L86:
            int r0 = r7 >> 3
            r0 = r0 & r8
            r11 = -1
            r13 = 1
            if (r0 != r8) goto Lb8
            com.czhj.wire.okio.BufferedSource r0 = r6.j
            long r15 = r0.indexOf(r9)
            int r0 = (r15 > r11 ? 1 : (r15 == r11 ? 0 : -1))
            if (r0 == 0) goto Lb2
            if (r10 == 0) goto Laa
            com.czhj.wire.okio.BufferedSource r0 = r6.j
            com.czhj.wire.okio.Buffer r1 = r0.buffer()
            r2 = 0
            long r4 = r15 + r13
            r0 = r17
            r0.a(r1, r2, r4)
        Laa:
            com.czhj.wire.okio.BufferedSource r0 = r6.j
            long r1 = r15 + r13
            r0.skip(r1)
            goto Lb8
        Lb2:
            java.io.EOFException r0 = new java.io.EOFException
            r0.<init>()
            throw r0
        Lb8:
            int r0 = r7 >> 4
            r0 = r0 & r8
            if (r0 != r8) goto Le5
            com.czhj.wire.okio.BufferedSource r0 = r6.j
            long r7 = r0.indexOf(r9)
            int r0 = (r7 > r11 ? 1 : (r7 == r11 ? 0 : -1))
            if (r0 == 0) goto Ldf
            if (r10 == 0) goto Ld8
            com.czhj.wire.okio.BufferedSource r0 = r6.j
            com.czhj.wire.okio.Buffer r1 = r0.buffer()
            r2 = 0
            long r4 = r7 + r13
            r0 = r17
            r0.a(r1, r2, r4)
        Ld8:
            com.czhj.wire.okio.BufferedSource r0 = r6.j
            long r7 = r7 + r13
            r0.skip(r7)
            goto Le5
        Ldf:
            java.io.EOFException r0 = new java.io.EOFException
            r0.<init>()
            throw r0
        Le5:
            if (r10 == 0) goto Lff
            com.czhj.wire.okio.BufferedSource r0 = r6.j
            short r0 = r0.readShortLe()
            java.util.zip.CRC32 r1 = r6.m
            long r1 = r1.getValue()
            int r1 = (int) r1
            short r1 = (short) r1
            java.lang.String r2 = "FHCRC"
            r6.a(r2, r0, r1)
            java.util.zip.CRC32 r0 = r6.m
            r0.reset()
        Lff:
            return
    }

    private void a(com.czhj.wire.okio.Buffer r5, long r6, long r8) {
            r4 = this;
            com.czhj.wire.okio.Segment r5 = r5.b
        L2:
            int r0 = r5.e
            int r1 = r5.d
            int r0 = r0 - r1
            long r0 = (long) r0
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 < 0) goto L16
            int r0 = r5.e
            int r1 = r5.d
            int r0 = r0 - r1
            long r0 = (long) r0
            long r6 = r6 - r0
            com.czhj.wire.okio.Segment r5 = r5.h
            goto L2
        L16:
            r0 = 0
        L18:
            int r2 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r2 <= 0) goto L37
            int r2 = r5.d
            long r2 = (long) r2
            long r2 = r2 + r6
            int r6 = (int) r2
            int r7 = r5.e
            int r7 = r7 - r6
            long r2 = (long) r7
            long r2 = java.lang.Math.min(r2, r8)
            int r7 = (int) r2
            java.util.zip.CRC32 r2 = r4.m
            byte[] r3 = r5.c
            r2.update(r3, r6, r7)
            long r6 = (long) r7
            long r8 = r8 - r6
            com.czhj.wire.okio.Segment r5 = r5.h
            r6 = r0
            goto L18
        L37:
            return
    }

    private void a(java.lang.String r4, int r5, int r6) throws java.io.IOException {
            r3 = this;
            if (r6 != r5) goto L3
            return
        L3:
            java.io.IOException r0 = new java.io.IOException
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r4
            r4 = 1
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r1[r4] = r6
            r4 = 2
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r1[r4] = r5
            java.lang.String r4 = "%s: actual 0x%08x != expected 0x%08x"
            java.lang.String r4 = java.lang.String.format(r4, r1)
            r0.<init>(r4)
            throw r0
    }

    private void b() throws java.io.IOException {
            r3 = this;
            com.czhj.wire.okio.BufferedSource r0 = r3.j
            int r0 = r0.readIntLe()
            java.util.zip.CRC32 r1 = r3.m
            long r1 = r1.getValue()
            int r1 = (int) r1
            java.lang.String r2 = "CRC"
            r3.a(r2, r0, r1)
            com.czhj.wire.okio.BufferedSource r0 = r3.j
            int r0 = r0.readIntLe()
            java.util.zip.Inflater r1 = r3.k
            int r1 = r1.getTotalOut()
            java.lang.String r2 = "ISIZE"
            r3.a(r2, r0, r1)
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            com.czhj.wire.okio.InflaterSource r0 = r1.l
            r0.close()
            return
    }

    @Override
    public long read(com.czhj.wire.okio.Buffer r12, long r13) throws java.io.IOException {
            r11 = this;
            r0 = 0
            int r2 = (r13 > r0 ? 1 : (r13 == r0 ? 0 : -1))
            if (r2 < 0) goto L4b
            if (r2 != 0) goto L9
            return r0
        L9:
            int r0 = r11.i
            r1 = 1
            if (r0 != 0) goto L13
            r11.a()
            r11.i = r1
        L13:
            int r0 = r11.i
            r2 = -1
            r4 = 2
            if (r0 != r1) goto L2f
            long r7 = r12.c
            com.czhj.wire.okio.InflaterSource r0 = r11.l
            long r13 = r0.read(r12, r13)
            int r0 = (r13 > r2 ? 1 : (r13 == r2 ? 0 : -1))
            if (r0 == 0) goto L2d
            r5 = r11
            r6 = r12
            r9 = r13
            r5.a(r6, r7, r9)
            return r13
        L2d:
            r11.i = r4
        L2f:
            int r12 = r11.i
            if (r12 != r4) goto L4a
            r11.b()
            r12 = 3
            r11.i = r12
            com.czhj.wire.okio.BufferedSource r12 = r11.j
            boolean r12 = r12.exhausted()
            if (r12 == 0) goto L42
            goto L4a
        L42:
            java.io.IOException r12 = new java.io.IOException
            java.lang.String r13 = "gzip finished without exhausting source"
            r12.<init>(r13)
            throw r12
        L4a:
            return r2
        L4b:
            java.lang.IllegalArgumentException r12 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "byteCount < 0: "
            r0.append(r1)
            r0.append(r13)
            java.lang.String r13 = r0.toString()
            r12.<init>(r13)
            throw r12
    }

    @Override
    public com.czhj.wire.okio.Timeout timeout() {
            r1 = this;
            com.czhj.wire.okio.BufferedSource r0 = r1.j
            com.czhj.wire.okio.Timeout r0 = r0.timeout()
            return r0
    }
}
