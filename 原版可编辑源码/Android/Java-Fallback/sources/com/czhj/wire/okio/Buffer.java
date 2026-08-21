package com.czhj.wire.okio;

public final class Buffer implements com.czhj.wire.okio.BufferedSink, com.czhj.wire.okio.BufferedSource, java.lang.Cloneable {
    static final int a = 65533;
    private static final byte[] d = null;
    com.czhj.wire.okio.Segment b;
    long c;



    static {
            r0 = 16
            byte[] r0 = new byte[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            com.czhj.wire.okio.Buffer.d = r0
            return
    }

    public Buffer() {
            r0 = this;
            r0.<init>()
            return
    }

    private com.czhj.wire.okio.ByteString a(java.lang.String r6) {
            r5 = this;
            java.security.MessageDigest r6 = java.security.MessageDigest.getInstance(r6)     // Catch: java.security.NoSuchAlgorithmException -> L36
            com.czhj.wire.okio.Segment r0 = r5.b     // Catch: java.security.NoSuchAlgorithmException -> L36
            byte[] r0 = r0.c     // Catch: java.security.NoSuchAlgorithmException -> L36
            com.czhj.wire.okio.Segment r1 = r5.b     // Catch: java.security.NoSuchAlgorithmException -> L36
            int r1 = r1.d     // Catch: java.security.NoSuchAlgorithmException -> L36
            com.czhj.wire.okio.Segment r2 = r5.b     // Catch: java.security.NoSuchAlgorithmException -> L36
            int r2 = r2.e     // Catch: java.security.NoSuchAlgorithmException -> L36
            com.czhj.wire.okio.Segment r3 = r5.b     // Catch: java.security.NoSuchAlgorithmException -> L36
            int r3 = r3.d     // Catch: java.security.NoSuchAlgorithmException -> L36
            int r2 = r2 - r3
            r6.update(r0, r1, r2)     // Catch: java.security.NoSuchAlgorithmException -> L36
            com.czhj.wire.okio.Segment r0 = r5.b     // Catch: java.security.NoSuchAlgorithmException -> L36
        L1a:
            com.czhj.wire.okio.Segment r0 = r0.h     // Catch: java.security.NoSuchAlgorithmException -> L36
            com.czhj.wire.okio.Segment r1 = r5.b     // Catch: java.security.NoSuchAlgorithmException -> L36
            if (r0 == r1) goto L2d
            byte[] r1 = r0.c     // Catch: java.security.NoSuchAlgorithmException -> L36
            int r2 = r0.d     // Catch: java.security.NoSuchAlgorithmException -> L36
            int r3 = r0.e     // Catch: java.security.NoSuchAlgorithmException -> L36
            int r4 = r0.d     // Catch: java.security.NoSuchAlgorithmException -> L36
            int r3 = r3 - r4
            r6.update(r1, r2, r3)     // Catch: java.security.NoSuchAlgorithmException -> L36
            goto L1a
        L2d:
            byte[] r6 = r6.digest()     // Catch: java.security.NoSuchAlgorithmException -> L36
            com.czhj.wire.okio.ByteString r6 = com.czhj.wire.okio.ByteString.of(r6)     // Catch: java.security.NoSuchAlgorithmException -> L36
            return r6
        L36:
            java.lang.AssertionError r6 = new java.lang.AssertionError
            r6.<init>()
            throw r6
    }

    private void a(java.io.InputStream r5, long r6, boolean r8) throws java.io.IOException {
            r4 = this;
            if (r5 == 0) goto L3c
        L2:
            r0 = 0
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 > 0) goto Lc
            if (r8 == 0) goto Lb
            goto Lc
        Lb:
            return
        Lc:
            r0 = 1
            com.czhj.wire.okio.Segment r0 = r4.a(r0)
            int r1 = r0.e
            int r1 = 8192 - r1
            long r1 = (long) r1
            long r1 = java.lang.Math.min(r6, r1)
            int r1 = (int) r1
            byte[] r2 = r0.c
            int r3 = r0.e
            int r1 = r5.read(r2, r3, r1)
            r2 = -1
            if (r1 != r2) goto L2f
            if (r8 == 0) goto L29
            return
        L29:
            java.io.EOFException r5 = new java.io.EOFException
            r5.<init>()
            throw r5
        L2f:
            int r2 = r0.e
            int r2 = r2 + r1
            r0.e = r2
            long r2 = r4.c
            long r0 = (long) r1
            long r2 = r2 + r0
            r4.c = r2
            long r6 = r6 - r0
            goto L2
        L3c:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "in == null"
            r5.<init>(r6)
            throw r5
    }

    private boolean a(com.czhj.wire.okio.Segment r6, int r7, com.czhj.wire.okio.ByteString r8, int r9, int r10) {
            r5 = this;
            int r0 = r6.e
            byte[] r1 = r6.c
        L4:
            if (r9 >= r10) goto L23
            if (r7 != r0) goto L14
            com.czhj.wire.okio.Segment r6 = r6.h
            byte[] r7 = r6.c
            int r0 = r6.d
            int r1 = r6.e
            r4 = r1
            r1 = r7
            r7 = r0
            r0 = r4
        L14:
            r2 = r1[r7]
            byte r3 = r8.getByte(r9)
            if (r2 == r3) goto L1e
            r6 = 0
            return r6
        L1e:
            int r7 = r7 + 1
            int r9 = r9 + 1
            goto L4
        L23:
            r6 = 1
            return r6
    }

    int a(com.czhj.wire.okio.Options r10) {
            r9 = this;
            com.czhj.wire.okio.Segment r6 = r9.b
            com.czhj.wire.okio.ByteString[] r10 = r10.a
            int r7 = r10.length
            r0 = 0
            r8 = r0
        L7:
            if (r8 >= r7) goto L29
            r3 = r10[r8]
            long r0 = r9.c
            int r2 = r3.size()
            long r4 = (long) r2
            long r0 = java.lang.Math.min(r0, r4)
            int r5 = (int) r0
            if (r5 == 0) goto L28
            int r2 = r6.d
            r4 = 0
            r0 = r9
            r1 = r6
            boolean r0 = r0.a(r1, r2, r3, r4, r5)
            if (r0 == 0) goto L25
            goto L28
        L25:
            int r8 = r8 + 1
            goto L7
        L28:
            return r8
        L29:
            r10 = -1
            return r10
    }

    com.czhj.wire.okio.Segment a(int r4) {
            r3 = this;
            r0 = 1
            if (r4 < r0) goto L2a
            r0 = 8192(0x2000, float:1.148E-41)
            if (r4 > r0) goto L2a
            com.czhj.wire.okio.Segment r1 = r3.b
            if (r1 != 0) goto L16
            com.czhj.wire.okio.Segment r4 = com.czhj.wire.okio.SegmentPool.a()
            r3.b = r4
            r4.i = r4
            r4.h = r4
            return r4
        L16:
            com.czhj.wire.okio.Segment r1 = r1.i
            int r2 = r1.e
            int r2 = r2 + r4
            if (r2 > r0) goto L21
            boolean r4 = r1.g
            if (r4 != 0) goto L29
        L21:
            com.czhj.wire.okio.Segment r4 = com.czhj.wire.okio.SegmentPool.a()
            com.czhj.wire.okio.Segment r1 = r1.push(r4)
        L29:
            return r1
        L2a:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            r4.<init>()
            throw r4
    }

    java.lang.String a(long r7) throws java.io.EOFException {
            r6 = this;
            r0 = 0
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            r1 = 1
            if (r0 <= 0) goto L1c
            long r3 = r7 - r1
            byte r0 = r6.getByte(r3)
            r5 = 13
            if (r0 != r5) goto L1c
            java.lang.String r7 = r6.readUtf8(r3)
            r0 = 2
            r6.skip(r0)
            return r7
        L1c:
            java.lang.String r7 = r6.readUtf8(r7)
            r6.skip(r1)
            return r7
    }

    java.util.List<java.lang.Integer> a() {
            r4 = this;
            com.czhj.wire.okio.Segment r0 = r4.b
            if (r0 != 0) goto L9
            java.util.List r0 = java.util.Collections.emptyList()
            return r0
        L9:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.czhj.wire.okio.Segment r1 = r4.b
            int r1 = r1.e
            com.czhj.wire.okio.Segment r2 = r4.b
            int r2 = r2.d
            int r1 = r1 - r2
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.add(r1)
            com.czhj.wire.okio.Segment r1 = r4.b
        L20:
            com.czhj.wire.okio.Segment r1 = r1.h
            com.czhj.wire.okio.Segment r2 = r4.b
            if (r1 == r2) goto L33
            int r2 = r1.e
            int r3 = r1.d
            int r2 = r2 - r3
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.add(r2)
            goto L20
        L33:
            return r0
    }

    boolean a(long r6, com.czhj.wire.okio.ByteString r8) {
            r5 = this;
            int r0 = r8.size()
            long r1 = r5.c
            long r1 = r1 - r6
            long r3 = (long) r0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            r2 = 0
            if (r1 >= 0) goto Le
            return r2
        Le:
            r1 = r2
        Lf:
            if (r1 >= r0) goto L21
            long r3 = (long) r1
            long r3 = r3 + r6
            byte r3 = r5.getByte(r3)
            byte r4 = r8.getByte(r1)
            if (r3 == r4) goto L1e
            return r2
        L1e:
            int r1 = r1 + 1
            goto Lf
        L21:
            r6 = 1
            return r6
    }

    @Override
    public com.czhj.wire.okio.Buffer buffer() {
            r0 = this;
            return r0
    }

    public void clear() {
            r2 = this;
            long r0 = r2.c     // Catch: java.io.EOFException -> L6
            r2.skip(r0)     // Catch: java.io.EOFException -> L6
            return
        L6:
            r0 = move-exception
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>(r0)
            throw r1
    }

    public com.czhj.wire.okio.Buffer clone() {
            r5 = this;
            com.czhj.wire.okio.Buffer r0 = new com.czhj.wire.okio.Buffer
            r0.<init>()
            long r1 = r5.c
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto Le
            return r0
        Le:
            com.czhj.wire.okio.Segment r1 = new com.czhj.wire.okio.Segment
            com.czhj.wire.okio.Segment r2 = r5.b
            r1.<init>(r2)
            r0.b = r1
            r1.i = r1
            r1.h = r1
            com.czhj.wire.okio.Segment r1 = r5.b
        L1d:
            com.czhj.wire.okio.Segment r1 = r1.h
            com.czhj.wire.okio.Segment r2 = r5.b
            if (r1 == r2) goto L30
            com.czhj.wire.okio.Segment r2 = r0.b
            com.czhj.wire.okio.Segment r2 = r2.i
            com.czhj.wire.okio.Segment r3 = new com.czhj.wire.okio.Segment
            r3.<init>(r1)
            r2.push(r3)
            goto L1d
        L30:
            long r1 = r5.c
            r0.c = r1
            return r0
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            com.czhj.wire.okio.Buffer r0 = r1.clone()
            return r0
    }

    @Override
    public void close() {
            r0 = this;
            return
    }

    public long completeSegmentByteCount() {
            r5 = this;
            long r0 = r5.c
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto L9
            return r2
        L9:
            com.czhj.wire.okio.Segment r2 = r5.b
            com.czhj.wire.okio.Segment r2 = r2.i
            int r3 = r2.e
            r4 = 8192(0x2000, float:1.148E-41)
            if (r3 >= r4) goto L1e
            boolean r3 = r2.g
            if (r3 == 0) goto L1e
            int r3 = r2.e
            int r2 = r2.d
            int r3 = r3 - r2
            long r2 = (long) r3
            long r0 = r0 - r2
        L1e:
            return r0
    }

    public com.czhj.wire.okio.Buffer copyTo(com.czhj.wire.okio.Buffer r7, long r8, long r10) {
            r6 = this;
            if (r7 == 0) goto L63
            long r0 = r6.c
            r2 = r8
            r4 = r10
            com.czhj.wire.okio.Util.checkOffsetAndCount(r0, r2, r4)
            r0 = 0
            int r2 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r2 != 0) goto L10
            return r6
        L10:
            long r2 = r7.c
            long r2 = r2 + r10
            r7.c = r2
            com.czhj.wire.okio.Segment r2 = r6.b
        L17:
            int r3 = r2.e
            int r4 = r2.d
            int r3 = r3 - r4
            long r3 = (long) r3
            int r3 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r3 < 0) goto L2b
            int r3 = r2.e
            int r4 = r2.d
            int r3 = r3 - r4
            long r3 = (long) r3
            long r8 = r8 - r3
            com.czhj.wire.okio.Segment r2 = r2.h
            goto L17
        L2b:
            int r3 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r3 <= 0) goto L62
            com.czhj.wire.okio.Segment r3 = new com.czhj.wire.okio.Segment
            r3.<init>(r2)
            int r4 = r3.d
            long r4 = (long) r4
            long r4 = r4 + r8
            int r8 = (int) r4
            r3.d = r8
            int r8 = r3.d
            int r9 = (int) r10
            int r8 = r8 + r9
            int r9 = r3.e
            int r8 = java.lang.Math.min(r8, r9)
            r3.e = r8
            com.czhj.wire.okio.Segment r8 = r7.b
            if (r8 != 0) goto L52
            r3.i = r3
            r3.h = r3
            r7.b = r3
            goto L57
        L52:
            com.czhj.wire.okio.Segment r8 = r8.i
            r8.push(r3)
        L57:
            int r8 = r3.e
            int r9 = r3.d
            int r8 = r8 - r9
            long r8 = (long) r8
            long r10 = r10 - r8
            com.czhj.wire.okio.Segment r2 = r2.h
            r8 = r0
            goto L2b
        L62:
            return r6
        L63:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "out == null"
            r7.<init>(r8)
            throw r7
    }

    public com.czhj.wire.okio.Buffer copyTo(java.io.OutputStream r7) throws java.io.IOException {
            r6 = this;
            long r4 = r6.c
            r2 = 0
            r0 = r6
            r1 = r7
            com.czhj.wire.okio.Buffer r7 = r0.copyTo(r1, r2, r4)
            return r7
    }

    public com.czhj.wire.okio.Buffer copyTo(java.io.OutputStream r7, long r8, long r10) throws java.io.IOException {
            r6 = this;
            if (r7 == 0) goto L44
            long r0 = r6.c
            r2 = r8
            r4 = r10
            com.czhj.wire.okio.Util.checkOffsetAndCount(r0, r2, r4)
            r0 = 0
            int r2 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r2 != 0) goto L10
            return r6
        L10:
            com.czhj.wire.okio.Segment r2 = r6.b
        L12:
            int r3 = r2.e
            int r4 = r2.d
            int r3 = r3 - r4
            long r3 = (long) r3
            int r3 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r3 < 0) goto L26
            int r3 = r2.e
            int r4 = r2.d
            int r3 = r3 - r4
            long r3 = (long) r3
            long r8 = r8 - r3
            com.czhj.wire.okio.Segment r2 = r2.h
            goto L12
        L26:
            int r3 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r3 <= 0) goto L43
            int r3 = r2.d
            long r3 = (long) r3
            long r3 = r3 + r8
            int r8 = (int) r3
            int r9 = r2.e
            int r9 = r9 - r8
            long r3 = (long) r9
            long r3 = java.lang.Math.min(r3, r10)
            int r9 = (int) r3
            byte[] r3 = r2.c
            r7.write(r3, r8, r9)
            long r8 = (long) r9
            long r10 = r10 - r8
            com.czhj.wire.okio.Segment r2 = r2.h
            r8 = r0
            goto L26
        L43:
            return r6
        L44:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "out == null"
            r7.<init>(r8)
            throw r7
    }

    @Override
    public com.czhj.wire.okio.BufferedSink emit() {
            r0 = this;
            return r0
    }

    @Override
    public com.czhj.wire.okio.Buffer emitCompleteSegments() {
            r0 = this;
            return r0
    }

    @Override
    public com.czhj.wire.okio.BufferedSink emitCompleteSegments() throws java.io.IOException {
            r1 = this;
            com.czhj.wire.okio.Buffer r0 = r1.emitCompleteSegments()
            return r0
    }

    public boolean equals(java.lang.Object r14) {
            r13 = this;
            r0 = 1
            if (r13 != r14) goto L4
            return r0
        L4:
            boolean r1 = r14 instanceof com.czhj.wire.okio.Buffer
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.wire.okio.Buffer r14 = (com.czhj.wire.okio.Buffer) r14
            long r3 = r13.c
            long r5 = r14.c
            int r1 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r1 == 0) goto L15
            return r2
        L15:
            r5 = 0
            int r1 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r1 != 0) goto L1c
            return r0
        L1c:
            com.czhj.wire.okio.Segment r1 = r13.b
            com.czhj.wire.okio.Segment r14 = r14.b
            int r3 = r1.d
            int r4 = r14.d
        L24:
            long r7 = r13.c
            int r7 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r7 >= 0) goto L61
            int r7 = r1.e
            int r7 = r7 - r3
            int r8 = r14.e
            int r8 = r8 - r4
            int r7 = java.lang.Math.min(r7, r8)
            long r7 = (long) r7
            r9 = r2
        L36:
            long r10 = (long) r9
            int r10 = (r10 > r7 ? 1 : (r10 == r7 ? 0 : -1))
            if (r10 >= 0) goto L4f
            byte[] r10 = r1.c
            int r11 = r3 + 1
            r3 = r10[r3]
            byte[] r10 = r14.c
            int r12 = r4 + 1
            r4 = r10[r4]
            if (r3 == r4) goto L4a
            return r2
        L4a:
            int r9 = r9 + 1
            r3 = r11
            r4 = r12
            goto L36
        L4f:
            int r9 = r1.e
            if (r3 != r9) goto L57
            com.czhj.wire.okio.Segment r1 = r1.h
            int r3 = r1.d
        L57:
            int r9 = r14.e
            if (r4 != r9) goto L5f
            com.czhj.wire.okio.Segment r14 = r14.h
            int r4 = r14.d
        L5f:
            long r5 = r5 + r7
            goto L24
        L61:
            return r0
    }

    @Override
    public boolean exhausted() {
            r4 = this;
            long r0 = r4.c
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    @Override
    public void flush() {
            r0 = this;
            return
    }

    public byte getByte(long r7) {
            r6 = this;
            long r0 = r6.c
            r4 = 1
            r2 = r7
            com.czhj.wire.okio.Util.checkOffsetAndCount(r0, r2, r4)
            com.czhj.wire.okio.Segment r0 = r6.b
        La:
            int r1 = r0.e
            int r2 = r0.d
            int r1 = r1 - r2
            long r1 = (long) r1
            int r3 = (r7 > r1 ? 1 : (r7 == r1 ? 0 : -1))
            if (r3 >= 0) goto L1d
            byte[] r1 = r0.c
            int r0 = r0.d
            int r7 = (int) r7
            int r0 = r0 + r7
            r7 = r1[r0]
            return r7
        L1d:
            long r7 = r7 - r1
            com.czhj.wire.okio.Segment r0 = r0.h
            goto La
    }

    public int hashCode() {
            r5 = this;
            com.czhj.wire.okio.Segment r0 = r5.b
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            r1 = 1
        L7:
            int r2 = r0.d
            int r3 = r0.e
        Lb:
            if (r2 >= r3) goto L17
            int r1 = r1 * 31
            byte[] r4 = r0.c
            r4 = r4[r2]
            int r1 = r1 + r4
            int r2 = r2 + 1
            goto Lb
        L17:
            com.czhj.wire.okio.Segment r0 = r0.h
            com.czhj.wire.okio.Segment r2 = r5.b
            if (r0 != r2) goto L7
            return r1
    }

    @Override
    public long indexOf(byte r3) {
            r2 = this;
            r0 = 0
            long r0 = r2.indexOf(r3, r0)
            return r0
    }

    @Override
    public long indexOf(byte r10, long r11) {
            r9 = this;
            r0 = 0
            int r2 = (r11 > r0 ? 1 : (r11 == r0 ? 0 : -1))
            if (r2 < 0) goto L5e
            com.czhj.wire.okio.Segment r2 = r9.b
            r3 = -1
            if (r2 != 0) goto Ld
            return r3
        Ld:
            long r5 = r9.c
            long r7 = r5 - r11
            int r7 = (r7 > r11 ? 1 : (r7 == r11 ? 0 : -1))
            if (r7 >= 0) goto L23
        L15:
            int r0 = (r5 > r11 ? 1 : (r5 == r11 ? 0 : -1))
            if (r0 <= 0) goto L33
            com.czhj.wire.okio.Segment r2 = r2.i
            int r0 = r2.e
            int r1 = r2.d
            int r0 = r0 - r1
            long r0 = (long) r0
            long r5 = r5 - r0
            goto L15
        L23:
            int r5 = r2.e
            int r6 = r2.d
            int r5 = r5 - r6
            long r5 = (long) r5
            long r5 = r5 + r0
            int r7 = (r5 > r11 ? 1 : (r5 == r11 ? 0 : -1))
            if (r7 >= 0) goto L32
            com.czhj.wire.okio.Segment r2 = r2.h
            r0 = r5
            goto L23
        L32:
            r5 = r0
        L33:
            long r0 = r9.c
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 >= 0) goto L5d
            byte[] r0 = r2.c
            int r1 = r2.d
            long r7 = (long) r1
            long r7 = r7 + r11
            long r7 = r7 - r5
            int r11 = (int) r7
            int r12 = r2.e
        L43:
            if (r11 >= r12) goto L52
            r1 = r0[r11]
            if (r1 != r10) goto L4f
            int r10 = r2.d
            int r11 = r11 - r10
            long r10 = (long) r11
            long r10 = r10 + r5
            return r10
        L4f:
            int r11 = r11 + 1
            goto L43
        L52:
            int r11 = r2.e
            int r12 = r2.d
            int r11 = r11 - r12
            long r11 = (long) r11
            long r5 = r5 + r11
            com.czhj.wire.okio.Segment r2 = r2.h
            r11 = r5
            goto L33
        L5d:
            return r3
        L5e:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.String r11 = "fromIndex < 0"
            r10.<init>(r11)
            throw r10
    }

    @Override
    public long indexOf(com.czhj.wire.okio.ByteString r3) throws java.io.IOException {
            r2 = this;
            r0 = 0
            long r0 = r2.indexOf(r3, r0)
            return r0
    }

    @Override
    public long indexOf(com.czhj.wire.okio.ByteString r19, long r20) throws java.io.IOException {
            r18 = this;
            r6 = r18
            int r0 = r19.size()
            if (r0 == 0) goto La6
            r0 = 0
            int r2 = (r20 > r0 ? 1 : (r20 == r0 ? 0 : -1))
            if (r2 < 0) goto L9e
            com.czhj.wire.okio.Segment r2 = r6.b
            r7 = -1
            if (r2 != 0) goto L15
            return r7
        L15:
            long r3 = r6.c
            long r9 = r3 - r20
            int r5 = (r9 > r20 ? 1 : (r9 == r20 ? 0 : -1))
            if (r5 >= 0) goto L2b
        L1d:
            int r0 = (r3 > r20 ? 1 : (r3 == r20 ? 0 : -1))
            if (r0 <= 0) goto L3b
            com.czhj.wire.okio.Segment r2 = r2.i
            int r0 = r2.e
            int r1 = r2.d
            int r0 = r0 - r1
            long r0 = (long) r0
            long r3 = r3 - r0
            goto L1d
        L2b:
            int r3 = r2.e
            int r4 = r2.d
            int r3 = r3 - r4
            long r3 = (long) r3
            long r3 = r3 + r0
            int r5 = (r3 > r20 ? 1 : (r3 == r20 ? 0 : -1))
            if (r5 >= 0) goto L3a
            com.czhj.wire.okio.Segment r2 = r2.h
            r0 = r3
            goto L2b
        L3a:
            r3 = r0
        L3b:
            r0 = 0
            r9 = r19
            byte r10 = r9.getByte(r0)
            int r11 = r19.size()
            long r0 = r6.c
            long r12 = (long) r11
            long r0 = r0 - r12
            r12 = 1
            long r12 = r12 + r0
            r0 = r20
            r14 = r2
            r15 = r3
        L51:
            int r2 = (r15 > r12 ? 1 : (r15 == r12 ? 0 : -1))
            if (r2 >= 0) goto L9c
            byte[] r5 = r14.c
            int r2 = r14.e
            long r2 = (long) r2
            int r4 = r14.d
            long r7 = (long) r4
            long r7 = r7 + r12
            long r7 = r7 - r15
            long r2 = java.lang.Math.min(r2, r7)
            int r7 = (int) r2
            int r2 = r14.d
            long r2 = (long) r2
            long r2 = r2 + r0
            long r2 = r2 - r15
            int r0 = (int) r2
            r8 = r0
        L6b:
            if (r8 >= r7) goto L8f
            r0 = r5[r8]
            if (r0 != r10) goto L88
            int r2 = r8 + 1
            r4 = 1
            r0 = r18
            r1 = r14
            r3 = r19
            r17 = r5
            r5 = r11
            boolean r0 = r0.a(r1, r2, r3, r4, r5)
            if (r0 == 0) goto L8a
            int r0 = r14.d
            int r8 = r8 - r0
            long r0 = (long) r8
            long r0 = r0 + r15
            return r0
        L88:
            r17 = r5
        L8a:
            int r8 = r8 + 1
            r5 = r17
            goto L6b
        L8f:
            int r0 = r14.e
            int r1 = r14.d
            int r0 = r0 - r1
            long r0 = (long) r0
            long r15 = r15 + r0
            com.czhj.wire.okio.Segment r14 = r14.h
            r0 = r15
            r7 = -1
            goto L51
        L9c:
            r0 = r7
            return r0
        L9e:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "fromIndex < 0"
            r0.<init>(r1)
            throw r0
        La6:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "bytes is empty"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public long indexOfElement(com.czhj.wire.okio.ByteString r3) {
            r2 = this;
            r0 = 0
            long r0 = r2.indexOfElement(r3, r0)
            return r0
    }

    @Override
    public long indexOfElement(com.czhj.wire.okio.ByteString r12, long r13) {
            r11 = this;
            r0 = 0
            int r2 = (r13 > r0 ? 1 : (r13 == r0 ? 0 : -1))
            if (r2 < 0) goto La4
            com.czhj.wire.okio.Segment r2 = r11.b
            r3 = -1
            if (r2 != 0) goto Ld
            return r3
        Ld:
            long r5 = r11.c
            long r7 = r5 - r13
            int r7 = (r7 > r13 ? 1 : (r7 == r13 ? 0 : -1))
            if (r7 >= 0) goto L23
        L15:
            int r0 = (r5 > r13 ? 1 : (r5 == r13 ? 0 : -1))
            if (r0 <= 0) goto L33
            com.czhj.wire.okio.Segment r2 = r2.i
            int r0 = r2.e
            int r1 = r2.d
            int r0 = r0 - r1
            long r0 = (long) r0
            long r5 = r5 - r0
            goto L15
        L23:
            int r5 = r2.e
            int r6 = r2.d
            int r5 = r5 - r6
            long r5 = (long) r5
            long r5 = r5 + r0
            int r7 = (r5 > r13 ? 1 : (r5 == r13 ? 0 : -1))
            if (r7 >= 0) goto L32
            com.czhj.wire.okio.Segment r2 = r2.h
            r0 = r5
            goto L23
        L32:
            r5 = r0
        L33:
            int r0 = r12.size()
            r1 = 2
            r7 = 0
            if (r0 != r1) goto L71
            byte r0 = r12.getByte(r7)
            r1 = 1
            byte r12 = r12.getByte(r1)
        L44:
            long r7 = r11.c
            int r1 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r1 >= 0) goto La3
            byte[] r1 = r2.c
            int r7 = r2.d
            long r7 = (long) r7
            long r7 = r7 + r13
            long r7 = r7 - r5
            int r13 = (int) r7
            int r14 = r2.e
        L54:
            if (r13 >= r14) goto L66
            r7 = r1[r13]
            if (r7 == r0) goto L60
            if (r7 != r12) goto L5d
            goto L60
        L5d:
            int r13 = r13 + 1
            goto L54
        L60:
            int r12 = r2.d
            int r13 = r13 - r12
            long r12 = (long) r13
            long r12 = r12 + r5
            return r12
        L66:
            int r13 = r2.e
            int r14 = r2.d
            int r13 = r13 - r14
            long r13 = (long) r13
            long r5 = r5 + r13
            com.czhj.wire.okio.Segment r2 = r2.h
            r13 = r5
            goto L44
        L71:
            byte[] r12 = r12.a()
        L75:
            long r0 = r11.c
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 >= 0) goto La3
            byte[] r0 = r2.c
            int r1 = r2.d
            long r8 = (long) r1
            long r8 = r8 + r13
            long r8 = r8 - r5
            int r13 = (int) r8
            int r14 = r2.e
        L85:
            if (r13 >= r14) goto L98
            r1 = r0[r13]
            int r8 = r12.length
            r9 = r7
        L8b:
            if (r9 >= r8) goto L95
            r10 = r12[r9]
            if (r1 != r10) goto L92
            goto L60
        L92:
            int r9 = r9 + 1
            goto L8b
        L95:
            int r13 = r13 + 1
            goto L85
        L98:
            int r13 = r2.e
            int r14 = r2.d
            int r13 = r13 - r14
            long r13 = (long) r13
            long r5 = r5 + r13
            com.czhj.wire.okio.Segment r2 = r2.h
            r13 = r5
            goto L75
        La3:
            return r3
        La4:
            java.lang.IllegalArgumentException r12 = new java.lang.IllegalArgumentException
            java.lang.String r13 = "fromIndex < 0"
            r12.<init>(r13)
            throw r12
    }

    @Override
    public java.io.InputStream inputStream() {
            r1 = this;
            com.czhj.wire.okio.Buffer$2 r0 = new com.czhj.wire.okio.Buffer$2
            r0.<init>(r1)
            return r0
    }

    public com.czhj.wire.okio.ByteString md5() {
            r1 = this;
            java.lang.String r0 = "MD5"
            com.czhj.wire.okio.ByteString r0 = r1.a(r0)
            return r0
    }

    @Override
    public java.io.OutputStream outputStream() {
            r1 = this;
            com.czhj.wire.okio.Buffer$1 r0 = new com.czhj.wire.okio.Buffer$1
            r0.<init>(r1)
            return r0
    }

    @Override
    public int read(byte[] r3) {
            r2 = this;
            int r0 = r3.length
            r1 = 0
            int r3 = r2.read(r3, r1, r0)
            return r3
    }

    @Override
    public int read(byte[] r8, int r9, int r10) {
            r7 = this;
            int r0 = r8.length
            long r1 = (long) r0
            long r3 = (long) r9
            long r5 = (long) r10
            com.czhj.wire.okio.Util.checkOffsetAndCount(r1, r3, r5)
            com.czhj.wire.okio.Segment r0 = r7.b
            if (r0 != 0) goto Ld
            r8 = -1
            return r8
        Ld:
            int r1 = r0.e
            int r2 = r0.d
            int r1 = r1 - r2
            int r10 = java.lang.Math.min(r10, r1)
            byte[] r1 = r0.c
            int r2 = r0.d
            java.lang.System.arraycopy(r1, r2, r8, r9, r10)
            int r8 = r0.d
            int r8 = r8 + r10
            r0.d = r8
            long r8 = r7.c
            long r1 = (long) r10
            long r8 = r8 - r1
            r7.c = r8
            int r8 = r0.d
            int r9 = r0.e
            if (r8 != r9) goto L37
            com.czhj.wire.okio.Segment r8 = r0.pop()
            r7.b = r8
            com.czhj.wire.okio.SegmentPool.a(r0)
        L37:
            return r10
    }

    @Override
    public long read(com.czhj.wire.okio.Buffer r5, long r6) {
            r4 = this;
            if (r5 == 0) goto L31
            r0 = 0
            int r2 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r2 < 0) goto L1a
            long r2 = r4.c
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 != 0) goto L11
            r5 = -1
            return r5
        L11:
            int r0 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r0 <= 0) goto L16
            r6 = r2
        L16:
            r5.write(r4, r6)
            return r6
        L1a:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "byteCount < 0: "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            r5.<init>(r6)
            throw r5
        L31:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "sink == null"
            r5.<init>(r6)
            throw r5
    }

    @Override
    public long readAll(com.czhj.wire.okio.Sink r5) throws java.io.IOException {
            r4 = this;
            long r0 = r4.c
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto Lb
            r5.write(r4, r0)
        Lb:
            return r0
    }

    @Override
    public byte readByte() {
            r9 = this;
            long r0 = r9.c
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L2a
            com.czhj.wire.okio.Segment r0 = r9.b
            int r1 = r0.d
            int r2 = r0.e
            byte[] r3 = r0.c
            int r4 = r1 + 1
            r1 = r3[r1]
            long r5 = r9.c
            r7 = 1
            long r5 = r5 - r7
            r9.c = r5
            if (r4 != r2) goto L27
            com.czhj.wire.okio.Segment r2 = r0.pop()
            r9.b = r2
            com.czhj.wire.okio.SegmentPool.a(r0)
            goto L29
        L27:
            r0.d = r4
        L29:
            return r1
        L2a:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "size == 0"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public byte[] readByteArray() {
            r2 = this;
            long r0 = r2.c     // Catch: java.io.EOFException -> L7
            byte[] r0 = r2.readByteArray(r0)     // Catch: java.io.EOFException -> L7
            return r0
        L7:
            r0 = move-exception
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>(r0)
            throw r1
    }

    @Override
    public byte[] readByteArray(long r7) throws java.io.EOFException {
            r6 = this;
            long r0 = r6.c
            r2 = 0
            r4 = r7
            com.czhj.wire.okio.Util.checkOffsetAndCount(r0, r2, r4)
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r0 > 0) goto L16
            int r7 = (int) r7
            byte[] r7 = new byte[r7]
            r6.readFully(r7)
            return r7
        L16:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "byteCount > Integer.MAX_VALUE: "
            r1.append(r2)
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            r0.<init>(r7)
            throw r0
    }

    @Override
    public com.czhj.wire.okio.ByteString readByteString() {
            r2 = this;
            com.czhj.wire.okio.ByteString r0 = new com.czhj.wire.okio.ByteString
            byte[] r1 = r2.readByteArray()
            r0.<init>(r1)
            return r0
    }

    @Override
    public com.czhj.wire.okio.ByteString readByteString(long r2) throws java.io.EOFException {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = new com.czhj.wire.okio.ByteString
            byte[] r2 = r1.readByteArray(r2)
            r0.<init>(r2)
            return r0
    }

    @Override
    public long readDecimalLong() {
            r17 = this;
            r0 = r17
            long r1 = r0.c
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 == 0) goto Lb5
            r5 = -7
            r7 = 0
            r8 = r7
            r9 = r8
        Lf:
            com.czhj.wire.okio.Segment r10 = r0.b
            byte[] r11 = r10.c
            int r12 = r10.d
            int r13 = r10.e
        L17:
            if (r12 >= r13) goto L96
            r15 = r11[r12]
            r14 = 48
            if (r15 < r14) goto L68
            r1 = 57
            if (r15 > r1) goto L68
            int r14 = r14 - r15
            r1 = -922337203685477580(0xf333333333333334, double:-8.390303882365713E246)
            int r16 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r16 < 0) goto L3b
            if (r16 != 0) goto L35
            long r1 = (long) r14
            int r1 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r1 >= 0) goto L35
            goto L3b
        L35:
            r1 = 10
            long r3 = r3 * r1
            long r1 = (long) r14
            long r3 = r3 + r1
            goto L72
        L3b:
            com.czhj.wire.okio.Buffer r1 = new com.czhj.wire.okio.Buffer
            r1.<init>()
            com.czhj.wire.okio.Buffer r1 = r1.writeDecimalLong(r3)
            com.czhj.wire.okio.Buffer r1 = r1.writeByte(r15)
            if (r8 != 0) goto L4d
            r1.readByte()
        L4d:
            java.lang.NumberFormatException r2 = new java.lang.NumberFormatException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Number too large: "
            r3.append(r4)
            java.lang.String r1 = r1.readUtf8()
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r2.<init>(r1)
            throw r2
        L68:
            r1 = 45
            if (r15 != r1) goto L77
            if (r7 != 0) goto L77
            r1 = 1
            long r5 = r5 - r1
            r8 = 1
        L72:
            int r12 = r12 + 1
            int r7 = r7 + 1
            goto L17
        L77:
            if (r7 == 0) goto L7b
            r9 = 1
            goto L96
        L7b:
            java.lang.NumberFormatException r1 = new java.lang.NumberFormatException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Expected leading [0-9] or '-' character but was 0x"
            r2.append(r3)
            java.lang.String r3 = java.lang.Integer.toHexString(r15)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        L96:
            if (r12 != r13) goto La2
            com.czhj.wire.okio.Segment r1 = r10.pop()
            r0.b = r1
            com.czhj.wire.okio.SegmentPool.a(r10)
            goto La4
        La2:
            r10.d = r12
        La4:
            if (r9 != 0) goto Laa
            com.czhj.wire.okio.Segment r1 = r0.b
            if (r1 != 0) goto Lf
        Laa:
            long r1 = r0.c
            long r5 = (long) r7
            long r1 = r1 - r5
            r0.c = r1
            if (r8 == 0) goto Lb3
            goto Lb4
        Lb3:
            long r3 = -r3
        Lb4:
            return r3
        Lb5:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "size == 0"
            r1.<init>(r2)
            throw r1
    }

    public com.czhj.wire.okio.Buffer readFrom(java.io.InputStream r4) throws java.io.IOException {
            r3 = this;
            r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r2 = 1
            r3.a(r4, r0, r2)
            return r3
    }

    public com.czhj.wire.okio.Buffer readFrom(java.io.InputStream r3, long r4) throws java.io.IOException {
            r2 = this;
            r0 = 0
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 < 0) goto Lb
            r0 = 0
            r2.a(r3, r4, r0)
            return r2
        Lb:
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

    @Override
    public void readFully(com.czhj.wire.okio.Buffer r4, long r5) throws java.io.EOFException {
            r3 = this;
            long r0 = r3.c
            int r2 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r2 < 0) goto La
            r4.write(r3, r5)
            return
        La:
            r4.write(r3, r0)
            java.io.EOFException r4 = new java.io.EOFException
            r4.<init>()
            throw r4
    }

    @Override
    public void readFully(byte[] r4) throws java.io.EOFException {
            r3 = this;
            r0 = 0
        L1:
            int r1 = r4.length
            if (r0 >= r1) goto L15
            int r1 = r4.length
            int r1 = r1 - r0
            int r1 = r3.read(r4, r0, r1)
            r2 = -1
            if (r1 == r2) goto Lf
            int r0 = r0 + r1
            goto L1
        Lf:
            java.io.EOFException r4 = new java.io.EOFException
            r4.<init>()
            throw r4
        L15:
            return
    }

    @Override
    public long readHexadecimalUnsignedLong() {
            r14 = this;
            long r0 = r14.c
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Lac
            r0 = 0
            r1 = r0
            r4 = r2
        Lb:
            com.czhj.wire.okio.Segment r6 = r14.b
            byte[] r7 = r6.c
            int r8 = r6.d
            int r9 = r6.e
        L13:
            if (r8 >= r9) goto L91
            r10 = r7[r8]
            r11 = 48
            if (r10 < r11) goto L22
            r11 = 57
            if (r10 > r11) goto L22
            int r11 = r10 + (-48)
            goto L3a
        L22:
            r11 = 97
            if (r10 < r11) goto L2f
            r11 = 102(0x66, float:1.43E-43)
            if (r10 > r11) goto L2f
            int r11 = r10 + (-97)
        L2c:
            int r11 = r11 + 10
            goto L3a
        L2f:
            r11 = 65
            if (r10 < r11) goto L72
            r11 = 70
            if (r10 > r11) goto L72
            int r11 = r10 + (-65)
            goto L2c
        L3a:
            r12 = -1152921504606846976(0xf000000000000000, double:-3.105036184601418E231)
            long r12 = r12 & r4
            int r12 = (r12 > r2 ? 1 : (r12 == r2 ? 0 : -1))
            if (r12 != 0) goto L4a
            r10 = 4
            long r4 = r4 << r10
            long r10 = (long) r11
            long r4 = r4 | r10
            int r8 = r8 + 1
            int r0 = r0 + 1
            goto L13
        L4a:
            com.czhj.wire.okio.Buffer r0 = new com.czhj.wire.okio.Buffer
            r0.<init>()
            com.czhj.wire.okio.Buffer r0 = r0.writeHexadecimalUnsignedLong(r4)
            com.czhj.wire.okio.Buffer r0 = r0.writeByte(r10)
            java.lang.NumberFormatException r1 = new java.lang.NumberFormatException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Number too large: "
            r2.append(r3)
            java.lang.String r0 = r0.readUtf8()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        L72:
            if (r0 == 0) goto L76
            r1 = 1
            goto L91
        L76:
            java.lang.NumberFormatException r0 = new java.lang.NumberFormatException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Expected leading [0-9a-fA-F] character but was 0x"
            r1.append(r2)
            java.lang.String r2 = java.lang.Integer.toHexString(r10)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L91:
            if (r8 != r9) goto L9d
            com.czhj.wire.okio.Segment r7 = r6.pop()
            r14.b = r7
            com.czhj.wire.okio.SegmentPool.a(r6)
            goto L9f
        L9d:
            r6.d = r8
        L9f:
            if (r1 != 0) goto La5
            com.czhj.wire.okio.Segment r6 = r14.b
            if (r6 != 0) goto Lb
        La5:
            long r1 = r14.c
            long r6 = (long) r0
            long r1 = r1 - r6
            r14.c = r1
            return r4
        Lac:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "size == 0"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public int readInt() {
            r8 = this;
            long r0 = r8.c
            r2 = 4
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L6c
            com.czhj.wire.okio.Segment r0 = r8.b
            int r1 = r0.d
            int r4 = r0.e
            int r5 = r4 - r1
            r6 = 4
            if (r5 >= r6) goto L35
            byte r0 = r8.readByte()
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 24
            byte r1 = r8.readByte()
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 16
            r0 = r0 | r1
            byte r1 = r8.readByte()
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            r0 = r0 | r1
            byte r1 = r8.readByte()
            r1 = r1 & 255(0xff, float:3.57E-43)
            r0 = r0 | r1
            return r0
        L35:
            byte[] r5 = r0.c
            int r6 = r1 + 1
            r1 = r5[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 24
            int r7 = r6 + 1
            r6 = r5[r6]
            r6 = r6 & 255(0xff, float:3.57E-43)
            int r6 = r6 << 16
            r1 = r1 | r6
            int r6 = r7 + 1
            r7 = r5[r7]
            r7 = r7 & 255(0xff, float:3.57E-43)
            int r7 = r7 << 8
            r1 = r1 | r7
            int r7 = r6 + 1
            r5 = r5[r6]
            r5 = r5 & 255(0xff, float:3.57E-43)
            r1 = r1 | r5
            long r5 = r8.c
            long r5 = r5 - r2
            r8.c = r5
            if (r7 != r4) goto L69
            com.czhj.wire.okio.Segment r2 = r0.pop()
            r8.b = r2
            com.czhj.wire.okio.SegmentPool.a(r0)
            goto L6b
        L69:
            r0.d = r7
        L6b:
            return r1
        L6c:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "size < 4: "
            r1.append(r2)
            long r2 = r8.c
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    @Override
    public int readIntLe() {
            r1 = this;
            int r0 = r1.readInt()
            int r0 = com.czhj.wire.okio.Util.reverseBytesInt(r0)
            return r0
    }

    @Override
    public long readLong() {
            r15 = this;
            long r0 = r15.c
            r2 = 8
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L8c
            com.czhj.wire.okio.Segment r0 = r15.b
            int r1 = r0.d
            int r4 = r0.e
            int r5 = r4 - r1
            r6 = 32
            r7 = 8
            if (r5 >= r7) goto L2a
            int r0 = r15.readInt()
            long r0 = (long) r0
            r2 = 4294967295(0xffffffff, double:2.1219957905E-314)
            long r0 = r0 & r2
            long r0 = r0 << r6
            int r4 = r15.readInt()
            long r4 = (long) r4
            long r2 = r2 & r4
            long r0 = r0 | r2
            return r0
        L2a:
            byte[] r5 = r0.c
            int r8 = r1 + 1
            r1 = r5[r1]
            long r9 = (long) r1
            r11 = 255(0xff, double:1.26E-321)
            long r9 = r9 & r11
            r1 = 56
            long r9 = r9 << r1
            int r1 = r8 + 1
            r8 = r5[r8]
            long r13 = (long) r8
            long r13 = r13 & r11
            r8 = 48
            long r13 = r13 << r8
            long r8 = r9 | r13
            int r10 = r1 + 1
            r1 = r5[r1]
            long r13 = (long) r1
            long r13 = r13 & r11
            r1 = 40
            long r13 = r13 << r1
            long r8 = r8 | r13
            int r1 = r10 + 1
            r10 = r5[r10]
            long r13 = (long) r10
            long r13 = r13 & r11
            long r13 = r13 << r6
            long r8 = r8 | r13
            int r6 = r1 + 1
            r1 = r5[r1]
            long r13 = (long) r1
            long r13 = r13 & r11
            r1 = 24
            long r13 = r13 << r1
            long r8 = r8 | r13
            int r1 = r6 + 1
            r6 = r5[r6]
            long r13 = (long) r6
            long r13 = r13 & r11
            r6 = 16
            long r13 = r13 << r6
            long r8 = r8 | r13
            int r6 = r1 + 1
            r1 = r5[r1]
            long r13 = (long) r1
            long r13 = r13 & r11
            long r13 = r13 << r7
            long r7 = r8 | r13
            int r1 = r6 + 1
            r5 = r5[r6]
            long r5 = (long) r5
            long r5 = r5 & r11
            long r5 = r5 | r7
            long r7 = r15.c
            long r7 = r7 - r2
            r15.c = r7
            if (r1 != r4) goto L89
            com.czhj.wire.okio.Segment r1 = r0.pop()
            r15.b = r1
            com.czhj.wire.okio.SegmentPool.a(r0)
            goto L8b
        L89:
            r0.d = r1
        L8b:
            return r5
        L8c:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "size < 8: "
            r1.append(r2)
            long r2 = r15.c
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    @Override
    public long readLongLe() {
            r2 = this;
            long r0 = r2.readLong()
            long r0 = com.czhj.wire.okio.Util.reverseBytesLong(r0)
            return r0
    }

    @Override
    public short readShort() {
            r8 = this;
            long r0 = r8.c
            r2 = 2
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L4a
            com.czhj.wire.okio.Segment r0 = r8.b
            int r1 = r0.d
            int r4 = r0.e
            int r5 = r4 - r1
            r6 = 2
            if (r5 >= r6) goto L24
            byte r0 = r8.readByte()
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 8
            byte r1 = r8.readByte()
            r1 = r1 & 255(0xff, float:3.57E-43)
            r0 = r0 | r1
            short r0 = (short) r0
            return r0
        L24:
            byte[] r5 = r0.c
            int r6 = r1 + 1
            r1 = r5[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            int r7 = r6 + 1
            r5 = r5[r6]
            r5 = r5 & 255(0xff, float:3.57E-43)
            r1 = r1 | r5
            long r5 = r8.c
            long r5 = r5 - r2
            r8.c = r5
            if (r7 != r4) goto L46
            com.czhj.wire.okio.Segment r2 = r0.pop()
            r8.b = r2
            com.czhj.wire.okio.SegmentPool.a(r0)
            goto L48
        L46:
            r0.d = r7
        L48:
            short r0 = (short) r1
            return r0
        L4a:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "size < 2: "
            r1.append(r2)
            long r2 = r8.c
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    @Override
    public short readShortLe() {
            r1 = this;
            short r0 = r1.readShort()
            short r0 = com.czhj.wire.okio.Util.reverseBytesShort(r0)
            return r0
    }

    @Override
    public java.lang.String readString(long r7, java.nio.charset.Charset r9) throws java.io.EOFException {
            r6 = this;
            long r0 = r6.c
            r2 = 0
            r4 = r7
            com.czhj.wire.okio.Util.checkOffsetAndCount(r0, r2, r4)
            if (r9 == 0) goto L6e
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r0 > 0) goto L57
            r0 = 0
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r0 != 0) goto L1a
            java.lang.String r7 = ""
            return r7
        L1a:
            com.czhj.wire.okio.Segment r0 = r6.b
            int r1 = r0.d
            long r1 = (long) r1
            long r1 = r1 + r7
            int r3 = r0.e
            long r3 = (long) r3
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L31
            java.lang.String r0 = new java.lang.String
            byte[] r7 = r6.readByteArray(r7)
            r0.<init>(r7, r9)
            return r0
        L31:
            java.lang.String r1 = new java.lang.String
            byte[] r2 = r0.c
            int r3 = r0.d
            int r4 = (int) r7
            r1.<init>(r2, r3, r4, r9)
            int r9 = r0.d
            long r2 = (long) r9
            long r2 = r2 + r7
            int r9 = (int) r2
            r0.d = r9
            long r2 = r6.c
            long r2 = r2 - r7
            r6.c = r2
            int r7 = r0.d
            int r8 = r0.e
            if (r7 != r8) goto L56
            com.czhj.wire.okio.Segment r7 = r0.pop()
            r6.b = r7
            com.czhj.wire.okio.SegmentPool.a(r0)
        L56:
            return r1
        L57:
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "byteCount > Integer.MAX_VALUE: "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            r9.<init>(r7)
            throw r9
        L6e:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "charset == null"
            r7.<init>(r8)
            throw r7
    }

    @Override
    public java.lang.String readString(java.nio.charset.Charset r3) {
            r2 = this;
            long r0 = r2.c     // Catch: java.io.EOFException -> L7
            java.lang.String r3 = r2.readString(r0, r3)     // Catch: java.io.EOFException -> L7
            return r3
        L7:
            r3 = move-exception
            java.lang.AssertionError r0 = new java.lang.AssertionError
            r0.<init>(r3)
            throw r0
    }

    @Override
    public java.lang.String readUtf8() {
            r3 = this;
            long r0 = r3.c     // Catch: java.io.EOFException -> L9
            java.nio.charset.Charset r2 = com.czhj.wire.okio.Util.UTF_8     // Catch: java.io.EOFException -> L9
            java.lang.String r0 = r3.readString(r0, r2)     // Catch: java.io.EOFException -> L9
            return r0
        L9:
            r0 = move-exception
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>(r0)
            throw r1
    }

    @Override
    public java.lang.String readUtf8(long r2) throws java.io.EOFException {
            r1 = this;
            java.nio.charset.Charset r0 = com.czhj.wire.okio.Util.UTF_8
            java.lang.String r2 = r1.readString(r2, r0)
            return r2
    }

    @Override
    public int readUtf8CodePoint() throws java.io.EOFException {
            r12 = this;
            long r0 = r12.c
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Lac
            byte r0 = r12.getByte(r2)
            r1 = r0 & 128(0x80, float:1.8E-43)
            r2 = 1
            r3 = 128(0x80, float:1.8E-43)
            r4 = 65533(0xfffd, float:9.1831E-41)
            if (r1 != 0) goto L1c
            r1 = r0 & 127(0x7f, float:1.78E-43)
            r5 = 0
            r6 = r5
            r5 = r2
            goto L3e
        L1c:
            r1 = r0 & 224(0xe0, float:3.14E-43)
            r5 = 192(0xc0, float:2.69E-43)
            if (r1 != r5) goto L27
            r1 = r0 & 31
            r5 = 2
            r6 = r3
            goto L3e
        L27:
            r1 = r0 & 240(0xf0, float:3.36E-43)
            r5 = 224(0xe0, float:3.14E-43)
            if (r1 != r5) goto L33
            r1 = r0 & 15
            r5 = 3
            r6 = 2048(0x800, float:2.87E-42)
            goto L3e
        L33:
            r1 = r0 & 248(0xf8, float:3.48E-43)
            r5 = 240(0xf0, float:3.36E-43)
            if (r1 != r5) goto La6
            r1 = r0 & 7
            r5 = 4
            r6 = 65536(0x10000, float:9.1835E-41)
        L3e:
            long r7 = r12.c
            long r9 = (long) r5
            int r7 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r7 < 0) goto L74
        L45:
            if (r2 >= r5) goto L5c
            long r7 = (long) r2
            byte r0 = r12.getByte(r7)
            r11 = r0 & 192(0xc0, float:2.69E-43)
            if (r11 != r3) goto L58
            int r1 = r1 << 6
            r0 = r0 & 63
            r1 = r1 | r0
            int r2 = r2 + 1
            goto L45
        L58:
            r12.skip(r7)
            return r4
        L5c:
            r12.skip(r9)
            r0 = 1114111(0x10ffff, float:1.561202E-39)
            if (r1 <= r0) goto L65
            return r4
        L65:
            r0 = 55296(0xd800, float:7.7486E-41)
            if (r1 < r0) goto L70
            r0 = 57343(0xdfff, float:8.0355E-41)
            if (r1 > r0) goto L70
            return r4
        L70:
            if (r1 >= r6) goto L73
            return r4
        L73:
            return r1
        L74:
            java.io.EOFException r1 = new java.io.EOFException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "size < "
            r2.append(r3)
            r2.append(r5)
            java.lang.String r3 = ": "
            r2.append(r3)
            long r3 = r12.c
            r2.append(r3)
            java.lang.String r3 = " (to read code point prefixed 0x"
            r2.append(r3)
            java.lang.String r0 = java.lang.Integer.toHexString(r0)
            r2.append(r0)
            java.lang.String r0 = ")"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        La6:
            r0 = 1
            r12.skip(r0)
            return r4
        Lac:
            java.io.EOFException r0 = new java.io.EOFException
            r0.<init>()
            throw r0
    }

    @Override
    public java.lang.String readUtf8Line() throws java.io.EOFException {
            r4 = this;
            r0 = 10
            long r0 = r4.indexOf(r0)
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L1b
            long r0 = r4.c
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L19
            java.lang.String r0 = r4.readUtf8(r0)
            goto L1a
        L19:
            r0 = 0
        L1a:
            return r0
        L1b:
            java.lang.String r0 = r4.a(r0)
            return r0
    }

    @Override
    public java.lang.String readUtf8LineStrict() throws java.io.EOFException {
            r7 = this;
            r0 = 10
            long r0 = r7.indexOf(r0)
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L11
            java.lang.String r0 = r7.a(r0)
            return r0
        L11:
            com.czhj.wire.okio.Buffer r0 = new com.czhj.wire.okio.Buffer
            r0.<init>()
            r3 = 0
            r1 = 32
            long r5 = r7.c
            long r5 = java.lang.Math.min(r1, r5)
            r1 = r7
            r2 = r0
            r1.copyTo(r2, r3, r5)
            java.io.EOFException r1 = new java.io.EOFException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "\\n not found: size="
            r2.append(r3)
            long r3 = r7.size()
            r2.append(r3)
            java.lang.String r3 = " content="
            r2.append(r3)
            com.czhj.wire.okio.ByteString r0 = r0.readByteString()
            java.lang.String r0 = r0.hex()
            r2.append(r0)
            java.lang.String r0 = "…"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
    }

    @Override
    public boolean request(long r3) {
            r2 = this;
            long r0 = r2.c
            int r3 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r3 < 0) goto L8
            r3 = 1
            goto L9
        L8:
            r3 = 0
        L9:
            return r3
    }

    @Override
    public void require(long r3) throws java.io.EOFException {
            r2 = this;
            long r0 = r2.c
            int r3 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r3 < 0) goto L7
            return
        L7:
            java.io.EOFException r3 = new java.io.EOFException
            r3.<init>()
            throw r3
    }

    @Override
    public int select(com.czhj.wire.okio.Options r11) {
            r10 = this;
            com.czhj.wire.okio.Segment r6 = r10.b
            if (r6 != 0) goto Lb
            com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
            int r11 = r11.indexOf(r0)
            return r11
        Lb:
            com.czhj.wire.okio.ByteString[] r11 = r11.a
            r0 = 0
            int r7 = r11.length
            r8 = r0
        L10:
            if (r8 >= r7) goto L42
            r9 = r11[r8]
            long r0 = r10.c
            int r2 = r9.size()
            long r2 = (long) r2
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L3f
            int r2 = r6.d
            r4 = 0
            int r5 = r9.size()
            r0 = r10
            r1 = r6
            r3 = r9
            boolean r0 = r0.a(r1, r2, r3, r4, r5)
            if (r0 == 0) goto L3f
            int r11 = r9.size()     // Catch: java.io.EOFException -> L38
            long r0 = (long) r11     // Catch: java.io.EOFException -> L38
            r10.skip(r0)     // Catch: java.io.EOFException -> L38
            return r8
        L38:
            r11 = move-exception
            java.lang.AssertionError r0 = new java.lang.AssertionError
            r0.<init>(r11)
            throw r0
        L3f:
            int r8 = r8 + 1
            goto L10
        L42:
            r11 = -1
            return r11
    }

    public com.czhj.wire.okio.ByteString sha1() {
            r1 = this;
            java.lang.String r0 = "SHA-1"
            com.czhj.wire.okio.ByteString r0 = r1.a(r0)
            return r0
    }

    public com.czhj.wire.okio.ByteString sha256() {
            r1 = this;
            java.lang.String r0 = "SHA-256"
            com.czhj.wire.okio.ByteString r0 = r1.a(r0)
            return r0
    }

    public long size() {
            r2 = this;
            long r0 = r2.c
            return r0
    }

    @Override
    public void skip(long r6) throws java.io.EOFException {
            r5 = this;
        L0:
            r0 = 0
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 <= 0) goto L41
            com.czhj.wire.okio.Segment r0 = r5.b
            if (r0 == 0) goto L3b
            int r0 = r0.e
            com.czhj.wire.okio.Segment r1 = r5.b
            int r1 = r1.d
            int r0 = r0 - r1
            long r0 = (long) r0
            long r0 = java.lang.Math.min(r6, r0)
            int r0 = (int) r0
            long r1 = r5.c
            long r3 = (long) r0
            long r1 = r1 - r3
            r5.c = r1
            long r6 = r6 - r3
            com.czhj.wire.okio.Segment r1 = r5.b
            int r2 = r1.d
            int r2 = r2 + r0
            r1.d = r2
            com.czhj.wire.okio.Segment r0 = r5.b
            int r0 = r0.d
            com.czhj.wire.okio.Segment r1 = r5.b
            int r1 = r1.e
            if (r0 != r1) goto L0
            com.czhj.wire.okio.Segment r0 = r5.b
            com.czhj.wire.okio.Segment r1 = r0.pop()
            r5.b = r1
            com.czhj.wire.okio.SegmentPool.a(r0)
            goto L0
        L3b:
            java.io.EOFException r6 = new java.io.EOFException
            r6.<init>()
            throw r6
        L41:
            return
    }

    public com.czhj.wire.okio.ByteString snapshot() {
            r4 = this;
            long r0 = r4.c
            r2 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 > 0) goto Lf
            int r0 = (int) r0
            com.czhj.wire.okio.ByteString r0 = r4.snapshot(r0)
            return r0
        Lf:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "size > Integer.MAX_VALUE: "
            r1.append(r2)
            long r2 = r4.c
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    public com.czhj.wire.okio.ByteString snapshot(int r2) {
            r1 = this;
            if (r2 != 0) goto L5
            com.czhj.wire.okio.ByteString r2 = com.czhj.wire.okio.ByteString.EMPTY
            return r2
        L5:
            com.czhj.wire.okio.SegmentedByteString r0 = new com.czhj.wire.okio.SegmentedByteString
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public com.czhj.wire.okio.Timeout timeout() {
            r1 = this;
            com.czhj.wire.okio.Timeout r0 = com.czhj.wire.okio.Timeout.NONE
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = r1.snapshot()
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public com.czhj.wire.okio.Buffer write(com.czhj.wire.okio.ByteString r2) {
            r1 = this;
            if (r2 == 0) goto L6
            r2.a(r1)
            return r1
        L6:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "byteString == null"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public com.czhj.wire.okio.Buffer write(byte[] r3) {
            r2 = this;
            if (r3 == 0) goto L9
            r0 = 0
            int r1 = r3.length
            com.czhj.wire.okio.Buffer r3 = r2.write(r3, r0, r1)
            return r3
        L9:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "source == null"
            r3.<init>(r0)
            throw r3
    }

    @Override
    public com.czhj.wire.okio.Buffer write(byte[] r10, int r11, int r12) {
            r9 = this;
            if (r10 == 0) goto L30
            int r0 = r10.length
            long r1 = (long) r0
            long r3 = (long) r11
            long r7 = (long) r12
            r5 = r7
            com.czhj.wire.okio.Util.checkOffsetAndCount(r1, r3, r5)
            int r12 = r12 + r11
        Lb:
            if (r11 >= r12) goto L2a
            r0 = 1
            com.czhj.wire.okio.Segment r0 = r9.a(r0)
            int r1 = r12 - r11
            int r2 = r0.e
            int r2 = 8192 - r2
            int r1 = java.lang.Math.min(r1, r2)
            byte[] r2 = r0.c
            int r3 = r0.e
            java.lang.System.arraycopy(r10, r11, r2, r3, r1)
            int r11 = r11 + r1
            int r2 = r0.e
            int r2 = r2 + r1
            r0.e = r2
            goto Lb
        L2a:
            long r10 = r9.c
            long r10 = r10 + r7
            r9.c = r10
            return r9
        L30:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.String r11 = "source == null"
            r10.<init>(r11)
            throw r10
    }

    @Override
    public com.czhj.wire.okio.BufferedSink write(com.czhj.wire.okio.ByteString r1) throws java.io.IOException {
            r0 = this;
            com.czhj.wire.okio.Buffer r1 = r0.write(r1)
            return r1
    }

    @Override
    public com.czhj.wire.okio.BufferedSink write(com.czhj.wire.okio.Source r5, long r6) throws java.io.IOException {
            r4 = this;
        L0:
            r0 = 0
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 <= 0) goto L18
            long r0 = r5.read(r4, r6)
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L12
            long r6 = r6 - r0
            goto L0
        L12:
            java.io.EOFException r5 = new java.io.EOFException
            r5.<init>()
            throw r5
        L18:
            return r4
    }

    @Override
    public com.czhj.wire.okio.BufferedSink write(byte[] r1) throws java.io.IOException {
            r0 = this;
            com.czhj.wire.okio.Buffer r1 = r0.write(r1)
            return r1
    }

    @Override
    public com.czhj.wire.okio.BufferedSink write(byte[] r1, int r2, int r3) throws java.io.IOException {
            r0 = this;
            com.czhj.wire.okio.Buffer r1 = r0.write(r1, r2, r3)
            return r1
    }

    @Override
    public void write(com.czhj.wire.okio.Buffer r7, long r8) {
            r6 = this;
            if (r7 == 0) goto L93
            if (r7 == r6) goto L8b
            long r0 = r7.c
            r2 = 0
            r4 = r8
            com.czhj.wire.okio.Util.checkOffsetAndCount(r0, r2, r4)
        Lc:
            r0 = 0
            int r0 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r0 <= 0) goto L8a
            com.czhj.wire.okio.Segment r0 = r7.b
            int r0 = r0.e
            com.czhj.wire.okio.Segment r1 = r7.b
            int r1 = r1.d
            int r0 = r0 - r1
            long r0 = (long) r0
            int r0 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r0 >= 0) goto L5c
            com.czhj.wire.okio.Segment r0 = r6.b
            if (r0 == 0) goto L27
            com.czhj.wire.okio.Segment r0 = r0.i
            goto L28
        L27:
            r0 = 0
        L28:
            if (r0 == 0) goto L53
            boolean r1 = r0.g
            if (r1 == 0) goto L53
            int r1 = r0.e
            long r1 = (long) r1
            long r1 = r1 + r8
            boolean r3 = r0.f
            if (r3 == 0) goto L38
            r3 = 0
            goto L3a
        L38:
            int r3 = r0.d
        L3a:
            long r3 = (long) r3
            long r1 = r1 - r3
            r3 = 8192(0x2000, double:4.0474E-320)
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 > 0) goto L53
            com.czhj.wire.okio.Segment r1 = r7.b
            int r2 = (int) r8
            r1.writeTo(r0, r2)
            long r0 = r7.c
            long r0 = r0 - r8
            r7.c = r0
            long r0 = r6.c
            long r0 = r0 + r8
            r6.c = r0
            return
        L53:
            com.czhj.wire.okio.Segment r0 = r7.b
            int r1 = (int) r8
            com.czhj.wire.okio.Segment r0 = r0.split(r1)
            r7.b = r0
        L5c:
            com.czhj.wire.okio.Segment r0 = r7.b
            int r1 = r0.e
            int r2 = r0.d
            int r1 = r1 - r2
            long r1 = (long) r1
            com.czhj.wire.okio.Segment r3 = r0.pop()
            r7.b = r3
            com.czhj.wire.okio.Segment r3 = r6.b
            if (r3 != 0) goto L75
            r6.b = r0
            r0.i = r0
            r0.h = r0
            goto L7e
        L75:
            com.czhj.wire.okio.Segment r3 = r3.i
            com.czhj.wire.okio.Segment r0 = r3.push(r0)
            r0.compact()
        L7e:
            long r3 = r7.c
            long r3 = r3 - r1
            r7.c = r3
            long r3 = r6.c
            long r3 = r3 + r1
            r6.c = r3
            long r8 = r8 - r1
            goto Lc
        L8a:
            return
        L8b:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "source == this"
            r7.<init>(r8)
            throw r7
        L93:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "source == null"
            r7.<init>(r8)
            throw r7
    }

    @Override
    public long writeAll(com.czhj.wire.okio.Source r7) throws java.io.IOException {
            r6 = this;
            if (r7 == 0) goto L13
            r0 = 0
        L4:
            r2 = 8192(0x2000, double:4.0474E-320)
            long r2 = r7.read(r6, r2)
            r4 = -1
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 == 0) goto L12
            long r0 = r0 + r2
            goto L4
        L12:
            return r0
        L13:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "source == null"
            r7.<init>(r0)
            throw r7
    }

    @Override
    public com.czhj.wire.okio.Buffer writeByte(int r5) {
            r4 = this;
            r0 = 1
            com.czhj.wire.okio.Segment r0 = r4.a(r0)
            byte[] r1 = r0.c
            int r2 = r0.e
            int r3 = r2 + 1
            r0.e = r3
            byte r5 = (byte) r5
            r1[r2] = r5
            long r0 = r4.c
            r2 = 1
            long r0 = r0 + r2
            r4.c = r0
            return r4
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeByte(int r1) throws java.io.IOException {
            r0 = this;
            com.czhj.wire.okio.Buffer r1 = r0.writeByte(r1)
            return r1
    }

    @Override
    public com.czhj.wire.okio.Buffer writeDecimalLong(long r12) {
            r11 = this;
            r0 = 0
            int r2 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r2 != 0) goto Ld
            r12 = 48
            com.czhj.wire.okio.Buffer r12 = r11.writeByte(r12)
            return r12
        Ld:
            r3 = 0
            r4 = 1
            if (r2 >= 0) goto L1e
            long r12 = -r12
            int r2 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r2 >= 0) goto L1d
            java.lang.String r12 = "-9223372036854775808"
            com.czhj.wire.okio.Buffer r12 = r11.writeUtf8(r12)
            return r12
        L1d:
            r3 = r4
        L1e:
            r5 = 100000000(0x5f5e100, double:4.94065646E-316)
            int r2 = (r12 > r5 ? 1 : (r12 == r5 ? 0 : -1))
            r5 = 10
            if (r2 >= 0) goto L6a
            r7 = 10000(0x2710, double:4.9407E-320)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto L48
            r7 = 100
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto L3c
            int r2 = (r12 > r5 ? 1 : (r12 == r5 ? 0 : -1))
            if (r2 >= 0) goto L39
            goto Le2
        L39:
            r4 = 2
            goto Le2
        L3c:
            r7 = 1000(0x3e8, double:4.94E-321)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto L45
            r4 = 3
            goto Le2
        L45:
            r4 = 4
            goto Le2
        L48:
            r7 = 1000000(0xf4240, double:4.940656E-318)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto L5c
            r7 = 100000(0x186a0, double:4.94066E-319)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto L59
            r4 = 5
            goto Le2
        L59:
            r4 = 6
            goto Le2
        L5c:
            r7 = 10000000(0x989680, double:4.9406565E-317)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto L66
            r4 = 7
            goto Le2
        L66:
            r4 = 8
            goto Le2
        L6a:
            r7 = 1000000000000(0xe8d4a51000, double:4.94065645841E-312)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto L98
            r7 = 10000000000(0x2540be400, double:4.9406564584E-314)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto L89
            r7 = 1000000000(0x3b9aca00, double:4.94065646E-315)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto L86
            r4 = 9
            goto Le2
        L86:
            r4 = 10
            goto Le2
        L89:
            r7 = 100000000000(0x174876e800, double:4.9406564584E-313)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto L95
            r4 = 11
            goto Le2
        L95:
            r4 = 12
            goto Le2
        L98:
            r7 = 1000000000000000(0x38d7ea4c68000, double:4.940656458412465E-309)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto Lbc
            r7 = 10000000000000(0x9184e72a000, double:4.9406564584125E-311)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto Lad
            r4 = 13
            goto Le2
        Lad:
            r7 = 100000000000000(0x5af3107a4000, double:4.94065645841247E-310)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto Lb9
            r4 = 14
            goto Le2
        Lb9:
            r4 = 15
            goto Le2
        Lbc:
            r7 = 100000000000000000(0x16345785d8a0000, double:5.620395787888205E-302)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto Ld4
            r7 = 10000000000000000(0x2386f26fc10000, double:5.431165199810528E-308)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto Ld1
            r4 = 16
            goto Le2
        Ld1:
            r4 = 17
            goto Le2
        Ld4:
            r7 = 1000000000000000000(0xde0b6b3a7640000, double:7.832953389245686E-242)
            int r2 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r2 >= 0) goto Le0
            r4 = 18
            goto Le2
        Le0:
            r4 = 19
        Le2:
            if (r3 == 0) goto Le6
            int r4 = r4 + 1
        Le6:
            com.czhj.wire.okio.Segment r2 = r11.a(r4)
            byte[] r7 = r2.c
            int r8 = r2.e
            int r8 = r8 + r4
        Lef:
            int r9 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r9 == 0) goto L100
            long r9 = r12 % r5
            int r9 = (int) r9
            int r8 = r8 + (-1)
            byte[] r10 = com.czhj.wire.okio.Buffer.d
            r9 = r10[r9]
            r7[r8] = r9
            long r12 = r12 / r5
            goto Lef
        L100:
            if (r3 == 0) goto L108
            int r8 = r8 + (-1)
            r12 = 45
            r7[r8] = r12
        L108:
            int r12 = r2.e
            int r12 = r12 + r4
            r2.e = r12
            long r12 = r11.c
            long r0 = (long) r4
            long r12 = r12 + r0
            r11.c = r12
            return r11
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeDecimalLong(long r1) throws java.io.IOException {
            r0 = this;
            com.czhj.wire.okio.Buffer r1 = r0.writeDecimalLong(r1)
            return r1
    }

    @Override
    public com.czhj.wire.okio.Buffer writeHexadecimalUnsignedLong(long r10) {
            r9 = this;
            r0 = 0
            int r0 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r0 != 0) goto Ld
            r10 = 48
            com.czhj.wire.okio.Buffer r10 = r9.writeByte(r10)
            return r10
        Ld:
            long r0 = java.lang.Long.highestOneBit(r10)
            int r0 = java.lang.Long.numberOfTrailingZeros(r0)
            r1 = 4
            int r0 = r0 / r1
            int r0 = r0 + 1
            com.czhj.wire.okio.Segment r2 = r9.a(r0)
            byte[] r3 = r2.c
            int r4 = r2.e
            int r4 = r4 + r0
            int r4 = r4 + (-1)
            int r5 = r2.e
        L26:
            if (r4 < r5) goto L36
            byte[] r6 = com.czhj.wire.okio.Buffer.d
            r7 = 15
            long r7 = r7 & r10
            int r7 = (int) r7
            r6 = r6[r7]
            r3[r4] = r6
            long r10 = r10 >>> r1
            int r4 = r4 + (-1)
            goto L26
        L36:
            int r10 = r2.e
            int r10 = r10 + r0
            r2.e = r10
            long r10 = r9.c
            long r0 = (long) r0
            long r10 = r10 + r0
            r9.c = r10
            return r9
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeHexadecimalUnsignedLong(long r1) throws java.io.IOException {
            r0 = this;
            com.czhj.wire.okio.Buffer r1 = r0.writeHexadecimalUnsignedLong(r1)
            return r1
    }

    @Override
    public com.czhj.wire.okio.Buffer writeInt(int r6) {
            r5 = this;
            r0 = 4
            com.czhj.wire.okio.Segment r0 = r5.a(r0)
            byte[] r1 = r0.c
            int r2 = r0.e
            int r3 = r2 + 1
            int r4 = r6 >>> 24
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r1[r2] = r4
            int r2 = r3 + 1
            int r4 = r6 >>> 16
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r1[r3] = r4
            int r3 = r2 + 1
            int r4 = r6 >>> 8
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r1[r2] = r4
            int r2 = r3 + 1
            r6 = r6 & 255(0xff, float:3.57E-43)
            byte r6 = (byte) r6
            r1[r3] = r6
            r0.e = r2
            long r0 = r5.c
            r2 = 4
            long r0 = r0 + r2
            r5.c = r0
            return r5
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeInt(int r1) throws java.io.IOException {
            r0 = this;
            com.czhj.wire.okio.Buffer r1 = r0.writeInt(r1)
            return r1
    }

    @Override
    public com.czhj.wire.okio.Buffer writeIntLe(int r1) {
            r0 = this;
            int r1 = com.czhj.wire.okio.Util.reverseBytesInt(r1)
            com.czhj.wire.okio.Buffer r1 = r0.writeInt(r1)
            return r1
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeIntLe(int r1) throws java.io.IOException {
            r0 = this;
            com.czhj.wire.okio.Buffer r1 = r0.writeIntLe(r1)
            return r1
    }

    @Override
    public com.czhj.wire.okio.Buffer writeLong(long r10) {
            r9 = this;
            r0 = 8
            com.czhj.wire.okio.Segment r1 = r9.a(r0)
            byte[] r2 = r1.c
            int r3 = r1.e
            int r4 = r3 + 1
            r5 = 56
            long r5 = r10 >>> r5
            r7 = 255(0xff, double:1.26E-321)
            long r5 = r5 & r7
            int r5 = (int) r5
            byte r5 = (byte) r5
            r2[r3] = r5
            int r3 = r4 + 1
            r5 = 48
            long r5 = r10 >>> r5
            long r5 = r5 & r7
            int r5 = (int) r5
            byte r5 = (byte) r5
            r2[r4] = r5
            int r4 = r3 + 1
            r5 = 40
            long r5 = r10 >>> r5
            long r5 = r5 & r7
            int r5 = (int) r5
            byte r5 = (byte) r5
            r2[r3] = r5
            int r3 = r4 + 1
            r5 = 32
            long r5 = r10 >>> r5
            long r5 = r5 & r7
            int r5 = (int) r5
            byte r5 = (byte) r5
            r2[r4] = r5
            int r4 = r3 + 1
            r5 = 24
            long r5 = r10 >>> r5
            long r5 = r5 & r7
            int r5 = (int) r5
            byte r5 = (byte) r5
            r2[r3] = r5
            int r3 = r4 + 1
            r5 = 16
            long r5 = r10 >>> r5
            long r5 = r5 & r7
            int r5 = (int) r5
            byte r5 = (byte) r5
            r2[r4] = r5
            int r4 = r3 + 1
            long r5 = r10 >>> r0
            long r5 = r5 & r7
            int r0 = (int) r5
            byte r0 = (byte) r0
            r2[r3] = r0
            int r0 = r4 + 1
            long r10 = r10 & r7
            int r10 = (int) r10
            byte r10 = (byte) r10
            r2[r4] = r10
            r1.e = r0
            long r10 = r9.c
            r0 = 8
            long r10 = r10 + r0
            r9.c = r10
            return r9
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeLong(long r1) throws java.io.IOException {
            r0 = this;
            com.czhj.wire.okio.Buffer r1 = r0.writeLong(r1)
            return r1
    }

    @Override
    public com.czhj.wire.okio.Buffer writeLongLe(long r1) {
            r0 = this;
            long r1 = com.czhj.wire.okio.Util.reverseBytesLong(r1)
            com.czhj.wire.okio.Buffer r1 = r0.writeLong(r1)
            return r1
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeLongLe(long r1) throws java.io.IOException {
            r0 = this;
            com.czhj.wire.okio.Buffer r1 = r0.writeLongLe(r1)
            return r1
    }

    @Override
    public com.czhj.wire.okio.Buffer writeShort(int r6) {
            r5 = this;
            r0 = 2
            com.czhj.wire.okio.Segment r0 = r5.a(r0)
            byte[] r1 = r0.c
            int r2 = r0.e
            int r3 = r2 + 1
            int r4 = r6 >>> 8
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r1[r2] = r4
            int r2 = r3 + 1
            r6 = r6 & 255(0xff, float:3.57E-43)
            byte r6 = (byte) r6
            r1[r3] = r6
            r0.e = r2
            long r0 = r5.c
            r2 = 2
            long r0 = r0 + r2
            r5.c = r0
            return r5
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeShort(int r1) throws java.io.IOException {
            r0 = this;
            com.czhj.wire.okio.Buffer r1 = r0.writeShort(r1)
            return r1
    }

    @Override
    public com.czhj.wire.okio.Buffer writeShortLe(int r1) {
            r0 = this;
            short r1 = (short) r1
            short r1 = com.czhj.wire.okio.Util.reverseBytesShort(r1)
            com.czhj.wire.okio.Buffer r1 = r0.writeShort(r1)
            return r1
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeShortLe(int r1) throws java.io.IOException {
            r0 = this;
            com.czhj.wire.okio.Buffer r1 = r0.writeShortLe(r1)
            return r1
    }

    @Override
    public com.czhj.wire.okio.Buffer writeString(java.lang.String r2, int r3, int r4, java.nio.charset.Charset r5) {
            r1 = this;
            if (r2 == 0) goto L8b
            if (r3 < 0) goto L74
            if (r4 < r3) goto L55
            int r0 = r2.length()
            if (r4 > r0) goto L32
            if (r5 == 0) goto L2a
            java.nio.charset.Charset r0 = com.czhj.wire.okio.Util.UTF_8
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L1b
            com.czhj.wire.okio.Buffer r2 = r1.writeUtf8(r2)
            return r2
        L1b:
            java.lang.String r2 = r2.substring(r3, r4)
            byte[] r2 = r2.getBytes(r5)
            r3 = 0
            int r4 = r2.length
            com.czhj.wire.okio.Buffer r2 = r1.write(r2, r3, r4)
            return r2
        L2a:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "charset == null"
            r2.<init>(r3)
            throw r2
        L32:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "endIndex > string.length: "
            r5.append(r0)
            r5.append(r4)
            java.lang.String r4 = " > "
            r5.append(r4)
            int r2 = r2.length()
            r5.append(r2)
            java.lang.String r2 = r5.toString()
            r3.<init>(r2)
            throw r3
        L55:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "endIndex < beginIndex: "
            r5.append(r0)
            r5.append(r4)
            java.lang.String r4 = " < "
            r5.append(r4)
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r2.<init>(r3)
            throw r2
        L74:
            java.lang.IllegalAccessError r2 = new java.lang.IllegalAccessError
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "beginIndex < 0: "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            r2.<init>(r3)
            throw r2
        L8b:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "string == null"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public com.czhj.wire.okio.Buffer writeString(java.lang.String r3, java.nio.charset.Charset r4) {
            r2 = this;
            int r0 = r3.length()
            r1 = 0
            com.czhj.wire.okio.Buffer r3 = r2.writeString(r3, r1, r0, r4)
            return r3
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeString(java.lang.String r1, int r2, int r3, java.nio.charset.Charset r4) throws java.io.IOException {
            r0 = this;
            com.czhj.wire.okio.Buffer r1 = r0.writeString(r1, r2, r3, r4)
            return r1
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeString(java.lang.String r1, java.nio.charset.Charset r2) throws java.io.IOException {
            r0 = this;
            com.czhj.wire.okio.Buffer r1 = r0.writeString(r1, r2)
            return r1
    }

    public com.czhj.wire.okio.Buffer writeTo(java.io.OutputStream r3) throws java.io.IOException {
            r2 = this;
            long r0 = r2.c
            com.czhj.wire.okio.Buffer r3 = r2.writeTo(r3, r0)
            return r3
    }

    public com.czhj.wire.okio.Buffer writeTo(java.io.OutputStream r7, long r8) throws java.io.IOException {
            r6 = this;
            if (r7 == 0) goto L42
            long r0 = r6.c
            r2 = 0
            r4 = r8
            com.czhj.wire.okio.Util.checkOffsetAndCount(r0, r2, r4)
            com.czhj.wire.okio.Segment r0 = r6.b
        Lc:
            r1 = 0
            int r1 = (r8 > r1 ? 1 : (r8 == r1 ? 0 : -1))
            if (r1 <= 0) goto L41
            int r1 = r0.e
            int r2 = r0.d
            int r1 = r1 - r2
            long r1 = (long) r1
            long r1 = java.lang.Math.min(r8, r1)
            int r1 = (int) r1
            byte[] r2 = r0.c
            int r3 = r0.d
            r7.write(r2, r3, r1)
            int r2 = r0.d
            int r2 = r2 + r1
            r0.d = r2
            long r2 = r6.c
            long r4 = (long) r1
            long r2 = r2 - r4
            r6.c = r2
            long r8 = r8 - r4
            int r1 = r0.d
            int r2 = r0.e
            if (r1 != r2) goto Lc
            com.czhj.wire.okio.Segment r1 = r0.pop()
            r6.b = r1
            com.czhj.wire.okio.SegmentPool.a(r0)
            r0 = r1
            goto Lc
        L41:
            return r6
        L42:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "out == null"
            r7.<init>(r8)
            throw r7
    }

    @Override
    public com.czhj.wire.okio.Buffer writeUtf8(java.lang.String r3) {
            r2 = this;
            int r0 = r3.length()
            r1 = 0
            com.czhj.wire.okio.Buffer r3 = r2.writeUtf8(r3, r1, r0)
            return r3
    }

    @Override
    public com.czhj.wire.okio.Buffer writeUtf8(java.lang.String r8, int r9, int r10) {
            r7 = this;
            if (r8 == 0) goto L11e
            if (r9 < 0) goto L107
            if (r10 < r9) goto Le8
            int r0 = r8.length()
            if (r10 > r0) goto Lc5
        Lc:
            if (r9 >= r10) goto Lc4
            char r0 = r8.charAt(r9)
            r1 = 128(0x80, float:1.8E-43)
            if (r0 >= r1) goto L4e
            r2 = 1
            com.czhj.wire.okio.Segment r2 = r7.a(r2)
            byte[] r3 = r2.c
            int r4 = r2.e
            int r4 = r4 - r9
            int r5 = 8192 - r4
            int r5 = java.lang.Math.min(r10, r5)
            int r6 = r9 + 1
            int r9 = r9 + r4
            byte r0 = (byte) r0
            r3[r9] = r0
        L2c:
            if (r6 >= r5) goto L3d
            char r9 = r8.charAt(r6)
            if (r9 < r1) goto L35
            goto L3d
        L35:
            int r0 = r6 + 1
            int r6 = r6 + r4
            byte r9 = (byte) r9
            r3[r6] = r9
            r6 = r0
            goto L2c
        L3d:
            int r4 = r4 + r6
            int r9 = r2.e
            int r4 = r4 - r9
            int r9 = r2.e
            int r9 = r9 + r4
            r2.e = r9
            long r0 = r7.c
            long r2 = (long) r4
            long r0 = r0 + r2
            r7.c = r0
            r9 = r6
            goto Lc
        L4e:
            r2 = 2048(0x800, float:2.87E-42)
            if (r0 >= r2) goto L62
            int r2 = r0 >> 6
            r2 = r2 | 192(0xc0, float:2.69E-43)
        L56:
            r7.writeByte(r2)
            r0 = r0 & 63
            r0 = r0 | r1
            r7.writeByte(r0)
            int r9 = r9 + 1
            goto Lc
        L62:
            r2 = 55296(0xd800, float:7.7486E-41)
            r3 = 63
            if (r0 < r2) goto Lb8
            r2 = 57343(0xdfff, float:8.0355E-41)
            if (r0 <= r2) goto L6f
            goto Lb8
        L6f:
            int r4 = r9 + 1
            if (r4 >= r10) goto L78
            char r5 = r8.charAt(r4)
            goto L79
        L78:
            r5 = 0
        L79:
            r6 = 56319(0xdbff, float:7.892E-41)
            if (r0 > r6) goto Lb2
            r6 = 56320(0xdc00, float:7.8921E-41)
            if (r5 < r6) goto Lb2
            if (r5 <= r2) goto L86
            goto Lb2
        L86:
            r2 = 65536(0x10000, float:9.1835E-41)
            r4 = -55297(0xffffffffffff27ff, float:NaN)
            r0 = r0 & r4
            int r0 = r0 << 10
            r4 = -56321(0xffffffffffff23ff, float:NaN)
            r4 = r4 & r5
            r0 = r0 | r4
            int r0 = r0 + r2
            int r2 = r0 >> 18
            r2 = r2 | 240(0xf0, float:3.36E-43)
            r7.writeByte(r2)
            int r2 = r0 >> 12
            r2 = r2 & r3
            r2 = r2 | r1
            r7.writeByte(r2)
            int r2 = r0 >> 6
            r2 = r2 & r3
            r2 = r2 | r1
            r7.writeByte(r2)
            r0 = r0 & r3
            r0 = r0 | r1
            r7.writeByte(r0)
            int r9 = r9 + 2
            goto Lc
        Lb2:
            r7.writeByte(r3)
            r9 = r4
            goto Lc
        Lb8:
            int r2 = r0 >> 12
            r2 = r2 | 224(0xe0, float:3.14E-43)
            r7.writeByte(r2)
            int r2 = r0 >> 6
            r2 = r2 & r3
            r2 = r2 | r1
            goto L56
        Lc4:
            return r7
        Lc5:
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "endIndex > string.length: "
            r0.append(r1)
            r0.append(r10)
            java.lang.String r10 = " > "
            r0.append(r10)
            int r8 = r8.length()
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            r9.<init>(r8)
            throw r9
        Le8:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "endIndex < beginIndex: "
            r0.append(r1)
            r0.append(r10)
            java.lang.String r10 = " < "
            r0.append(r10)
            r0.append(r9)
            java.lang.String r9 = r0.toString()
            r8.<init>(r9)
            throw r8
        L107:
            java.lang.IllegalAccessError r8 = new java.lang.IllegalAccessError
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r0 = "beginIndex < 0: "
            r10.append(r0)
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            r8.<init>(r9)
            throw r8
        L11e:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r9 = "string == null"
            r8.<init>(r9)
            throw r8
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeUtf8(java.lang.String r1) throws java.io.IOException {
            r0 = this;
            com.czhj.wire.okio.Buffer r1 = r0.writeUtf8(r1)
            return r1
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeUtf8(java.lang.String r1, int r2, int r3) throws java.io.IOException {
            r0 = this;
            com.czhj.wire.okio.Buffer r1 = r0.writeUtf8(r1, r2, r3)
            return r1
    }

    @Override
    public com.czhj.wire.okio.Buffer writeUtf8CodePoint(int r4) {
            r3 = this;
            r0 = 128(0x80, float:1.8E-43)
            if (r4 >= r0) goto L8
        L4:
            r3.writeByte(r4)
            goto L60
        L8:
            r1 = 2048(0x800, float:2.87E-42)
            if (r4 >= r1) goto L17
            int r1 = r4 >> 6
            r1 = r1 | 192(0xc0, float:2.69E-43)
        L10:
            r3.writeByte(r1)
            r4 = r4 & 63
            r4 = r4 | r0
            goto L4
        L17:
            r1 = 65536(0x10000, float:9.1835E-41)
            java.lang.String r2 = "Unexpected code point: "
            if (r4 >= r1) goto L46
            r1 = 55296(0xd800, float:7.7486E-41)
            if (r4 < r1) goto L41
            r1 = 57343(0xdfff, float:8.0355E-41)
            if (r4 <= r1) goto L28
            goto L41
        L28:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r4 = java.lang.Integer.toHexString(r4)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L41:
            int r1 = r4 >> 12
            r1 = r1 | 224(0xe0, float:3.14E-43)
            goto L57
        L46:
            r1 = 1114111(0x10ffff, float:1.561202E-39)
            if (r4 > r1) goto L61
            int r1 = r4 >> 18
            r1 = r1 | 240(0xf0, float:3.36E-43)
            r3.writeByte(r1)
            int r1 = r4 >> 12
            r1 = r1 & 63
            r1 = r1 | r0
        L57:
            r3.writeByte(r1)
            int r1 = r4 >> 6
            r1 = r1 & 63
            r1 = r1 | r0
            goto L10
        L60:
            return r3
        L61:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r4 = java.lang.Integer.toHexString(r4)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    public com.czhj.wire.okio.BufferedSink writeUtf8CodePoint(int r1) throws java.io.IOException {
            r0 = this;
            com.czhj.wire.okio.Buffer r1 = r0.writeUtf8CodePoint(r1)
            return r1
    }
}
