package com.tkay.expressad.exoplayer.e;

public final class b implements com.tkay.expressad.exoplayer.e.f {
    private static final int a = 65536;
    private static final int b = 524288;
    private static final int c = 4096;
    private final byte[] d;
    private final com.tkay.expressad.exoplayer.j.h e;
    private final long f;
    private long g;
    private byte[] h;
    private int i;
    private int j;

    public b(com.tkay.expressad.exoplayer.j.h r1, long r2, long r4) {
            r0 = this;
            r0.<init>()
            r0.e = r1
            r0.g = r2
            r0.f = r4
            r1 = 65536(0x10000, float:9.1835E-41)
            byte[] r1 = new byte[r1]
            r0.h = r1
            r1 = 4096(0x1000, float:5.74E-42)
            byte[] r1 = new byte[r1]
            r0.d = r1
            return
    }

    private int a(byte[] r2, int r3, int r4, int r5, boolean r6) {
            r1 = this;
            boolean r0 = java.lang.Thread.interrupted()
            if (r0 != 0) goto L1e
            com.tkay.expressad.exoplayer.j.h r0 = r1.e
            int r3 = r3 + r5
            int r4 = r4 - r5
            int r2 = r0.a(r2, r3, r4)
            r3 = -1
            if (r2 != r3) goto L1c
            if (r5 != 0) goto L16
            if (r6 == 0) goto L16
            return r3
        L16:
            java.io.EOFException r2 = new java.io.EOFException
            r2.<init>()
            throw r2
        L1c:
            int r5 = r5 + r2
            return r5
        L1e:
            java.lang.InterruptedException r2 = new java.lang.InterruptedException
            r2.<init>()
            throw r2
    }

    private int e(byte[] r3, int r4, int r5) {
            r2 = this;
            int r0 = r2.j
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            int r5 = java.lang.Math.min(r0, r5)
            byte[] r0 = r2.h
            java.lang.System.arraycopy(r0, r1, r3, r4, r5)
            r2.h(r5)
            return r5
    }

    private void f(int r4) {
            r3 = this;
            int r0 = r3.i
            int r0 = r0 + r4
            byte[] r4 = r3.h
            int r1 = r4.length
            if (r0 <= r1) goto L1d
            int r4 = r4.length
            int r4 = r4 * 2
            r1 = 65536(0x10000, float:9.1835E-41)
            int r1 = r1 + r0
            r2 = 524288(0x80000, float:7.34684E-40)
            int r0 = r0 + r2
            int r4 = com.tkay.expressad.exoplayer.k.af.a(r4, r1, r0)
            byte[] r0 = r3.h
            byte[] r4 = java.util.Arrays.copyOf(r0, r4)
            r3.h = r4
        L1d:
            return
    }

    private int g(int r2) {
            r1 = this;
            int r0 = r1.j
            int r2 = java.lang.Math.min(r0, r2)
            r1.h(r2)
            return r2
    }

    private void h(int r6) {
            r5 = this;
            int r0 = r5.j
            int r0 = r0 - r6
            r5.j = r0
            r1 = 0
            r5.i = r1
            byte[] r2 = r5.h
            int r3 = r2.length
            r4 = 524288(0x80000, float:7.34684E-40)
            int r3 = r3 - r4
            if (r0 >= r3) goto L15
            r2 = 65536(0x10000, float:9.1835E-41)
            int r0 = r0 + r2
            byte[] r2 = new byte[r0]
        L15:
            byte[] r0 = r5.h
            int r3 = r5.j
            java.lang.System.arraycopy(r0, r6, r2, r1, r3)
            r5.h = r2
            return
    }

    private void i(int r5) {
            r4 = this;
            r0 = -1
            if (r5 == r0) goto L9
            long r0 = r4.g
            long r2 = (long) r5
            long r0 = r0 + r2
            r4.g = r0
        L9:
            return
    }

    @Override
    public final int a(int r8) {
            r7 = this;
            int r0 = r7.g(r8)
            if (r0 != 0) goto L15
            byte[] r2 = r7.d
            r3 = 0
            int r0 = r2.length
            int r4 = java.lang.Math.min(r8, r0)
            r5 = 0
            r6 = 1
            r1 = r7
            int r0 = r1.a(r2, r3, r4, r5, r6)
        L15:
            r7.i(r0)
            return r0
    }

    @Override
    public final int a(byte[] r8, int r9, int r10) {
            r7 = this;
            int r0 = r7.e(r8, r9, r10)
            if (r0 != 0) goto L10
            r5 = 0
            r6 = 1
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            int r0 = r1.a(r2, r3, r4, r5, r6)
        L10:
            r7.i(r0)
            return r0
    }

    @Override
    public final void a() {
            r1 = this;
            r0 = 0
            r1.i = r0
            return
    }

    @Override
    public final <E extends java.lang.Throwable> void a(long r3, E r5) {
            r2 = this;
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 < 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            com.tkay.expressad.exoplayer.k.a.a(r0)
            r2.g = r3
            throw r5
    }

    @Override
    public final boolean a(byte[] r8, int r9, int r10, boolean r11) {
            r7 = this;
            int r0 = r7.e(r8, r9, r10)
            r5 = r0
        L5:
            r0 = -1
            if (r5 >= r10) goto L14
            if (r5 == r0) goto L14
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r6 = r11
            int r5 = r1.a(r2, r3, r4, r5, r6)
            goto L5
        L14:
            r7.i(r5)
            if (r5 == r0) goto L1b
            r8 = 1
            return r8
        L1b:
            r8 = 0
            return r8
    }

    @Override
    public final long b() {
            r4 = this;
            long r0 = r4.g
            int r2 = r4.i
            long r2 = (long) r2
            long r0 = r0 + r2
            return r0
    }

    @Override
    public final void b(byte[] r2, int r3, int r4) {
            r1 = this;
            r0 = 0
            r1.a(r2, r3, r4, r0)
            return
    }

    @Override
    public final boolean b(int r8) {
            r7 = this;
            int r0 = r7.g(r8)
            r5 = r0
        L5:
            r0 = -1
            if (r5 >= r8) goto L1c
            if (r5 == r0) goto L1c
            byte[] r0 = r7.d
            int r0 = r0.length
            int r0 = r0 + r5
            int r4 = java.lang.Math.min(r8, r0)
            byte[] r2 = r7.d
            int r3 = -r5
            r6 = 0
            r1 = r7
            int r5 = r1.a(r2, r3, r4, r5, r6)
            goto L5
        L1c:
            r7.i(r5)
            if (r5 == r0) goto L23
            r8 = 1
            return r8
        L23:
            r8 = 0
            return r8
    }

    @Override
    public final long c() {
            r2 = this;
            long r0 = r2.g
            return r0
    }

    @Override
    public final void c(int r8) {
            r7 = this;
            int r0 = r7.g(r8)
            r5 = r0
        L5:
            if (r5 >= r8) goto L1c
            r0 = -1
            if (r5 == r0) goto L1c
            byte[] r0 = r7.d
            int r0 = r0.length
            int r0 = r0 + r5
            int r4 = java.lang.Math.min(r8, r0)
            byte[] r2 = r7.d
            int r3 = -r5
            r6 = 0
            r1 = r7
            int r5 = r1.a(r2, r3, r4, r5, r6)
            goto L5
        L1c:
            r7.i(r5)
            return
    }

    @Override
    public final boolean c(byte[] r3, int r4, int r5) {
            r2 = this;
            boolean r0 = r2.d(r5)
            if (r0 != 0) goto L8
            r3 = 0
            return r3
        L8:
            byte[] r0 = r2.h
            int r1 = r2.i
            int r1 = r1 - r5
            java.lang.System.arraycopy(r0, r1, r3, r4, r5)
            r3 = 1
            return r3
    }

    @Override
    public final long d() {
            r2 = this;
            long r0 = r2.f
            return r0
    }

    @Override
    public final void d(byte[] r3, int r4, int r5) {
            r2 = this;
            boolean r0 = r2.d(r5)
            if (r0 == 0) goto Le
            byte[] r0 = r2.h
            int r1 = r2.i
            int r1 = r1 - r5
            java.lang.System.arraycopy(r0, r1, r3, r4, r5)
        Le:
            return
    }

    @Override
    public final boolean d(int r8) {
            r7 = this;
            r7.f(r8)
            int r0 = r7.j
            int r1 = r7.i
            int r0 = r0 - r1
            int r0 = java.lang.Math.min(r0, r8)
            r5 = r0
        Ld:
            if (r5 >= r8) goto L1f
            byte[] r2 = r7.h
            int r3 = r7.i
            r6 = 0
            r1 = r7
            r4 = r8
            int r5 = r1.a(r2, r3, r4, r5, r6)
            r0 = -1
            if (r5 != r0) goto Ld
            r8 = 0
            return r8
        L1f:
            int r0 = r7.i
            int r0 = r0 + r8
            r7.i = r0
            int r8 = r7.j
            int r8 = java.lang.Math.max(r8, r0)
            r7.j = r8
            r8 = 1
            return r8
    }

    @Override
    public final void e(int r1) {
            r0 = this;
            r0.d(r1)
            return
    }
}
