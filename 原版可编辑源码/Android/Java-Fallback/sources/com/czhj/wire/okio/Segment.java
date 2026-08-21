package com.czhj.wire.okio;

final class Segment {
    static final int a = 8192;
    static final int b = 1024;
    final byte[] c;
    int d;
    int e;
    boolean f;
    boolean g;
    com.czhj.wire.okio.Segment h;
    com.czhj.wire.okio.Segment i;

    Segment() {
            r1 = this;
            r1.<init>()
            r0 = 8192(0x2000, float:1.148E-41)
            byte[] r0 = new byte[r0]
            r1.c = r0
            r0 = 1
            r1.g = r0
            r0 = 0
            r1.f = r0
            return
    }

    Segment(com.czhj.wire.okio.Segment r4) {
            r3 = this;
            byte[] r0 = r4.c
            int r1 = r4.d
            int r2 = r4.e
            r3.<init>(r0, r1, r2)
            r0 = 1
            r4.f = r0
            return
    }

    Segment(byte[] r1, int r2, int r3) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            r0.d = r2
            r0.e = r3
            r1 = 0
            r0.g = r1
            r1 = 1
            r0.f = r1
            return
    }

    public void compact() {
            r4 = this;
            com.czhj.wire.okio.Segment r0 = r4.i
            if (r0 == r4) goto L2a
            boolean r1 = r0.g
            if (r1 != 0) goto L9
            return
        L9:
            int r1 = r4.e
            int r2 = r4.d
            int r1 = r1 - r2
            int r2 = r0.e
            int r2 = 8192 - r2
            boolean r3 = r0.f
            if (r3 == 0) goto L18
            r0 = 0
            goto L1a
        L18:
            int r0 = r0.d
        L1a:
            int r2 = r2 + r0
            if (r1 <= r2) goto L1e
            return
        L1e:
            com.czhj.wire.okio.Segment r0 = r4.i
            r4.writeTo(r0, r1)
            r4.pop()
            com.czhj.wire.okio.SegmentPool.a(r4)
            return
        L2a:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>()
            throw r0
    }

    public com.czhj.wire.okio.Segment pop() {
            r4 = this;
            com.czhj.wire.okio.Segment r0 = r4.h
            r1 = 0
            if (r0 == r4) goto L6
            goto L7
        L6:
            r0 = r1
        L7:
            com.czhj.wire.okio.Segment r2 = r4.i
            com.czhj.wire.okio.Segment r3 = r4.h
            r2.h = r3
            com.czhj.wire.okio.Segment r3 = r4.h
            r3.i = r2
            r4.h = r1
            r4.i = r1
            return r0
    }

    public com.czhj.wire.okio.Segment push(com.czhj.wire.okio.Segment r2) {
            r1 = this;
            r2.i = r1
            com.czhj.wire.okio.Segment r0 = r1.h
            r2.h = r0
            com.czhj.wire.okio.Segment r0 = r1.h
            r0.i = r2
            r1.h = r2
            return r2
    }

    public com.czhj.wire.okio.Segment split(int r6) {
            r5 = this;
            if (r6 <= 0) goto L31
            int r0 = r5.e
            int r1 = r5.d
            int r0 = r0 - r1
            if (r6 > r0) goto L31
            r0 = 1024(0x400, float:1.435E-42)
            if (r6 < r0) goto L13
            com.czhj.wire.okio.Segment r0 = new com.czhj.wire.okio.Segment
            r0.<init>(r5)
            goto L21
        L13:
            com.czhj.wire.okio.Segment r0 = com.czhj.wire.okio.SegmentPool.a()
            byte[] r1 = r5.c
            int r2 = r5.d
            byte[] r3 = r0.c
            r4 = 0
            java.lang.System.arraycopy(r1, r2, r3, r4, r6)
        L21:
            int r1 = r0.d
            int r1 = r1 + r6
            r0.e = r1
            int r1 = r5.d
            int r1 = r1 + r6
            r5.d = r1
            com.czhj.wire.okio.Segment r6 = r5.i
            r6.push(r0)
            return r0
        L31:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            r6.<init>()
            throw r6
    }

    public void writeTo(com.czhj.wire.okio.Segment r5, int r6) {
            r4 = this;
            boolean r0 = r5.g
            if (r0 == 0) goto L4a
            int r0 = r5.e
            int r1 = r0 + r6
            r2 = 8192(0x2000, float:1.148E-41)
            if (r1 <= r2) goto L34
            boolean r1 = r5.f
            if (r1 != 0) goto L2e
            int r1 = r0 + r6
            int r3 = r5.d
            int r1 = r1 - r3
            if (r1 > r2) goto L28
            byte[] r1 = r5.c
            int r0 = r0 - r3
            r2 = 0
            java.lang.System.arraycopy(r1, r3, r1, r2, r0)
            int r0 = r5.e
            int r1 = r5.d
            int r0 = r0 - r1
            r5.e = r0
            r5.d = r2
            goto L34
        L28:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            r5.<init>()
            throw r5
        L2e:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            r5.<init>()
            throw r5
        L34:
            byte[] r0 = r4.c
            int r1 = r4.d
            byte[] r2 = r5.c
            int r3 = r5.e
            java.lang.System.arraycopy(r0, r1, r2, r3, r6)
            int r0 = r5.e
            int r0 = r0 + r6
            r5.e = r0
            int r5 = r4.d
            int r5 = r5 + r6
            r4.d = r5
            return
        L4a:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            r5.<init>()
            throw r5
    }
}
