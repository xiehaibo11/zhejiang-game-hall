package com.tkay.expressad.exoplayer.h;

public final class x implements com.tkay.expressad.exoplayer.e.m {
    public static final int a = -1;
    private static final int b = 32;
    private final com.tkay.expressad.exoplayer.j.b c;
    private final int d;
    private final com.tkay.expressad.exoplayer.h.w e;
    private final com.tkay.expressad.exoplayer.h.w.a f;
    private final com.tkay.expressad.exoplayer.k.s g;
    private com.tkay.expressad.exoplayer.h.x.a h;
    private com.tkay.expressad.exoplayer.h.x.a i;
    private com.tkay.expressad.exoplayer.h.x.a j;
    private com.tkay.expressad.exoplayer.m k;
    private boolean l;
    private com.tkay.expressad.exoplayer.m m;
    private long n;
    private long o;
    private boolean p;
    private com.tkay.expressad.exoplayer.h.x.b q;

    private static final class a {
        public final long a;
        public final long b;
        public boolean c;
        public com.tkay.expressad.exoplayer.j.a d;
        public com.tkay.expressad.exoplayer.h.x.a e;

        public a(long r3, int r5) {
                r2 = this;
                r2.<init>()
                r2.a = r3
                long r0 = (long) r5
                long r3 = r3 + r0
                r2.b = r3
                return
        }

        public final int a(long r3) {
                r2 = this;
                long r0 = r2.a
                long r3 = r3 - r0
                int r3 = (int) r3
                com.tkay.expressad.exoplayer.j.a r4 = r2.d
                int r4 = r4.b
                int r3 = r3 + r4
                return r3
        }

        public final com.tkay.expressad.exoplayer.h.x.a a() {
                r2 = this;
                r0 = 0
                r2.d = r0
                com.tkay.expressad.exoplayer.h.x$a r1 = r2.e
                r2.e = r0
                return r1
        }

        public final void a(com.tkay.expressad.exoplayer.j.a r1, com.tkay.expressad.exoplayer.h.x.a r2) {
                r0 = this;
                r0.d = r1
                r0.e = r2
                r1 = 1
                r0.c = r1
                return
        }
    }

    public interface b {
        void i();
    }

    public x(com.tkay.expressad.exoplayer.j.b r4) {
            r3 = this;
            r3.<init>()
            r3.c = r4
            int r4 = r4.d()
            r3.d = r4
            com.tkay.expressad.exoplayer.h.w r4 = new com.tkay.expressad.exoplayer.h.w
            r4.<init>()
            r3.e = r4
            com.tkay.expressad.exoplayer.h.w$a r4 = new com.tkay.expressad.exoplayer.h.w$a
            r4.<init>()
            r3.f = r4
            com.tkay.expressad.exoplayer.k.s r4 = new com.tkay.expressad.exoplayer.k.s
            r0 = 32
            r4.<init>(r0)
            r3.g = r4
            com.tkay.expressad.exoplayer.h.x$a r4 = new com.tkay.expressad.exoplayer.h.x$a
            int r0 = r3.d
            r1 = 0
            r4.<init>(r1, r0)
            r3.h = r4
            r3.i = r4
            r3.j = r4
            return
    }

    private static com.tkay.expressad.exoplayer.m a(com.tkay.expressad.exoplayer.m r4, long r5) {
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            r0 = 0
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 == 0) goto L1c
            long r0 = r4.l
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L1c
            long r0 = r4.l
            long r0 = r0 + r5
            com.tkay.expressad.exoplayer.m r4 = r4.a(r0)
        L1c:
            return r4
    }

    private void a(long r4, java.nio.ByteBuffer r6, int r7) {
            r3 = this;
            r3.b(r4)
        L3:
            if (r7 <= 0) goto L30
            com.tkay.expressad.exoplayer.h.x$a r0 = r3.i
            long r0 = r0.b
            long r0 = r0 - r4
            int r0 = (int) r0
            int r0 = java.lang.Math.min(r7, r0)
            com.tkay.expressad.exoplayer.h.x$a r1 = r3.i
            com.tkay.expressad.exoplayer.j.a r1 = r1.d
            byte[] r1 = r1.a
            com.tkay.expressad.exoplayer.h.x$a r2 = r3.i
            int r2 = r2.a(r4)
            r6.put(r1, r2, r0)
            int r7 = r7 - r0
            long r0 = (long) r0
            long r4 = r4 + r0
            com.tkay.expressad.exoplayer.h.x$a r0 = r3.i
            long r0 = r0.b
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 != 0) goto L3
            com.tkay.expressad.exoplayer.h.x$a r0 = r3.i
            com.tkay.expressad.exoplayer.h.x$a r0 = r0.e
            r3.i = r0
            goto L3
        L30:
            return
    }

    private void a(long r6, byte[] r8, int r9) {
            r5 = this;
            r5.b(r6)
            r0 = r9
        L4:
            if (r0 <= 0) goto L33
            com.tkay.expressad.exoplayer.h.x$a r1 = r5.i
            long r1 = r1.b
            long r1 = r1 - r6
            int r1 = (int) r1
            int r1 = java.lang.Math.min(r0, r1)
            com.tkay.expressad.exoplayer.h.x$a r2 = r5.i
            com.tkay.expressad.exoplayer.j.a r2 = r2.d
            byte[] r2 = r2.a
            com.tkay.expressad.exoplayer.h.x$a r3 = r5.i
            int r3 = r3.a(r6)
            int r4 = r9 - r0
            java.lang.System.arraycopy(r2, r3, r8, r4, r1)
            int r0 = r0 - r1
            long r1 = (long) r1
            long r6 = r6 + r1
            com.tkay.expressad.exoplayer.h.x$a r1 = r5.i
            long r1 = r1.b
            int r1 = (r6 > r1 ? 1 : (r6 == r1 ? 0 : -1))
            if (r1 != 0) goto L4
            com.tkay.expressad.exoplayer.h.x$a r1 = r5.i
            com.tkay.expressad.exoplayer.h.x$a r1 = r1.e
            r5.i = r1
            goto L4
        L33:
            return
    }

    private void a(com.tkay.expressad.exoplayer.c.e r19, com.tkay.expressad.exoplayer.h.w.a r20) {
            r18 = this;
            r0 = r18
            r1 = r19
            r2 = r20
            long r3 = r2.b
            com.tkay.expressad.exoplayer.k.s r5 = r0.g
            r6 = 1
            r5.a(r6)
            com.tkay.expressad.exoplayer.k.s r5 = r0.g
            byte[] r5 = r5.a
            r0.a(r3, r5, r6)
            r7 = 1
            long r3 = r3 + r7
            com.tkay.expressad.exoplayer.k.s r5 = r0.g
            byte[] r5 = r5.a
            r7 = 0
            r5 = r5[r7]
            r8 = r5 & 128(0x80, float:1.8E-43)
            if (r8 == 0) goto L25
            r8 = r6
            goto L26
        L25:
            r8 = r7
        L26:
            r5 = r5 & 127(0x7f, float:1.78E-43)
            com.tkay.expressad.exoplayer.c.b r9 = r1.d
            byte[] r9 = r9.a
            if (r9 != 0) goto L36
            com.tkay.expressad.exoplayer.c.b r9 = r1.d
            r10 = 16
            byte[] r10 = new byte[r10]
            r9.a = r10
        L36:
            com.tkay.expressad.exoplayer.c.b r9 = r1.d
            byte[] r9 = r9.a
            r0.a(r3, r9, r5)
            long r9 = (long) r5
            long r3 = r3 + r9
            if (r8 == 0) goto L57
            com.tkay.expressad.exoplayer.k.s r5 = r0.g
            r6 = 2
            r5.a(r6)
            com.tkay.expressad.exoplayer.k.s r5 = r0.g
            byte[] r5 = r5.a
            r0.a(r3, r5, r6)
            r5 = 2
            long r3 = r3 + r5
            com.tkay.expressad.exoplayer.k.s r5 = r0.g
            int r6 = r5.e()
        L57:
            r10 = r6
            com.tkay.expressad.exoplayer.c.b r5 = r1.d
            int[] r5 = r5.d
            if (r5 == 0) goto L61
            int r6 = r5.length
            if (r6 >= r10) goto L63
        L61:
            int[] r5 = new int[r10]
        L63:
            r11 = r5
            com.tkay.expressad.exoplayer.c.b r5 = r1.d
            int[] r5 = r5.e
            if (r5 == 0) goto L6d
            int r6 = r5.length
            if (r6 >= r10) goto L6f
        L6d:
            int[] r5 = new int[r10]
        L6f:
            r12 = r5
            if (r8 == 0) goto L9c
            int r5 = r10 * 6
            com.tkay.expressad.exoplayer.k.s r6 = r0.g
            r6.a(r5)
            com.tkay.expressad.exoplayer.k.s r6 = r0.g
            byte[] r6 = r6.a
            r0.a(r3, r6, r5)
            long r5 = (long) r5
            long r3 = r3 + r5
            com.tkay.expressad.exoplayer.k.s r5 = r0.g
            r5.c(r7)
        L87:
            if (r7 >= r10) goto La8
            com.tkay.expressad.exoplayer.k.s r5 = r0.g
            int r5 = r5.e()
            r11[r7] = r5
            com.tkay.expressad.exoplayer.k.s r5 = r0.g
            int r5 = r5.m()
            r12[r7] = r5
            int r7 = r7 + 1
            goto L87
        L9c:
            r11[r7] = r7
            int r5 = r2.a
            long r8 = r2.b
            long r8 = r3 - r8
            int r6 = (int) r8
            int r5 = r5 - r6
            r12[r7] = r5
        La8:
            com.tkay.expressad.exoplayer.e.m$a r5 = r2.c
            com.tkay.expressad.exoplayer.c.b r9 = r1.d
            byte[] r13 = r5.b
            com.tkay.expressad.exoplayer.c.b r1 = r1.d
            byte[] r14 = r1.a
            int r15 = r5.a
            int r1 = r5.c
            int r5 = r5.d
            r16 = r1
            r17 = r5
            r9.a(r10, r11, r12, r13, r14, r15, r16, r17)
            long r5 = r2.b
            long r3 = r3 - r5
            int r1 = (int) r3
            long r3 = r2.b
            long r5 = (long) r1
            long r3 = r3 + r5
            r2.b = r3
            int r3 = r2.a
            int r3 = r3 - r1
            r2.a = r3
            return
    }

    private void a(com.tkay.expressad.exoplayer.h.x.a r6) {
            r5 = this;
            boolean r0 = r6.c
            if (r0 != 0) goto L5
            return
        L5:
            com.tkay.expressad.exoplayer.h.x$a r0 = r5.j
            boolean r0 = r0.c
            com.tkay.expressad.exoplayer.h.x$a r1 = r5.j
            long r1 = r1.a
            long r3 = r6.a
            long r1 = r1 - r3
            int r1 = (int) r1
            int r2 = r5.d
            int r1 = r1 / r2
            int r0 = r0 + r1
            com.tkay.expressad.exoplayer.j.a[] r1 = new com.tkay.expressad.exoplayer.j.a[r0]
            r2 = 0
        L18:
            if (r2 >= r0) goto L25
            com.tkay.expressad.exoplayer.j.a r3 = r6.d
            r1[r2] = r3
            com.tkay.expressad.exoplayer.h.x$a r6 = r6.a()
            int r2 = r2 + 1
            goto L18
        L25:
            com.tkay.expressad.exoplayer.j.b r6 = r5.c
            r6.a(r1)
            return
    }

    private void b(long r3) {
            r2 = this;
        L0:
            com.tkay.expressad.exoplayer.h.x$a r0 = r2.i
            long r0 = r0.b
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 < 0) goto Lf
            com.tkay.expressad.exoplayer.h.x$a r0 = r2.i
            com.tkay.expressad.exoplayer.h.x$a r0 = r0.e
            r2.i = r0
            goto L0
        Lf:
            return
    }

    private void c(int r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.w r0 = r1.e
            r0.b(r2)
            return
    }

    private void c(long r3) {
            r2 = this;
            r0 = -1
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 != 0) goto L7
            return
        L7:
            com.tkay.expressad.exoplayer.h.x$a r0 = r2.h
            long r0 = r0.b
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 < 0) goto L21
            com.tkay.expressad.exoplayer.j.b r0 = r2.c
            com.tkay.expressad.exoplayer.h.x$a r1 = r2.h
            com.tkay.expressad.exoplayer.j.a r1 = r1.d
            r0.a(r1)
            com.tkay.expressad.exoplayer.h.x$a r0 = r2.h
            com.tkay.expressad.exoplayer.h.x$a r0 = r0.a()
            r2.h = r0
            goto L7
        L21:
            com.tkay.expressad.exoplayer.h.x$a r3 = r2.i
            long r3 = r3.a
            com.tkay.expressad.exoplayer.h.x$a r0 = r2.h
            long r0 = r0.a
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 >= 0) goto L31
            com.tkay.expressad.exoplayer.h.x$a r3 = r2.h
            r2.i = r3
        L31:
            return
    }

    private int d(int r7) {
            r6 = this;
            com.tkay.expressad.exoplayer.h.x$a r0 = r6.j
            boolean r0 = r0.c
            if (r0 != 0) goto L1c
            com.tkay.expressad.exoplayer.h.x$a r0 = r6.j
            com.tkay.expressad.exoplayer.j.b r1 = r6.c
            com.tkay.expressad.exoplayer.j.a r1 = r1.a()
            com.tkay.expressad.exoplayer.h.x$a r2 = new com.tkay.expressad.exoplayer.h.x$a
            com.tkay.expressad.exoplayer.h.x$a r3 = r6.j
            long r3 = r3.b
            int r5 = r6.d
            r2.<init>(r3, r5)
            r0.a(r1, r2)
        L1c:
            com.tkay.expressad.exoplayer.h.x$a r0 = r6.j
            long r0 = r0.b
            long r2 = r6.o
            long r0 = r0 - r2
            int r0 = (int) r0
            int r7 = java.lang.Math.min(r7, r0)
            return r7
    }

    private void e(int r5) {
            r4 = this;
            long r0 = r4.o
            long r2 = (long) r5
            long r0 = r0 + r2
            r4.o = r0
            com.tkay.expressad.exoplayer.h.x$a r5 = r4.j
            long r2 = r5.b
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 != 0) goto L14
            com.tkay.expressad.exoplayer.h.x$a r5 = r4.j
            com.tkay.expressad.exoplayer.h.x$a r5 = r5.e
            r4.j = r5
        L14:
            return
    }

    private void l() {
            r4 = this;
            com.tkay.expressad.exoplayer.h.w r0 = r4.e
            r0.a()
            com.tkay.expressad.exoplayer.h.x$a r0 = r4.h
            r4.a(r0)
            com.tkay.expressad.exoplayer.h.x$a r0 = new com.tkay.expressad.exoplayer.h.x$a
            int r1 = r4.d
            r2 = 0
            r0.<init>(r2, r1)
            r4.h = r0
            r4.i = r0
            r4.j = r0
            r4.o = r2
            com.tkay.expressad.exoplayer.j.b r0 = r4.c
            r0.b()
            return
    }

    private void m() {
            r1 = this;
            r0 = 1
            r1.p = r0
            return
    }

    private int n() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.w r0 = r1.e
            int r0 = r0.e()
            return r0
    }

    private void o() {
            r2 = this;
            com.tkay.expressad.exoplayer.h.w r0 = r2.e
            long r0 = r0.l()
            r2.c(r0)
            return
    }

    public final int a(long r2, boolean r4) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.w r0 = r1.e
            int r2 = r0.a(r2, r4)
            return r2
    }

    @Override
    public final int a(com.tkay.expressad.exoplayer.e.f r5, int r6, boolean r7) {
            r4 = this;
            int r6 = r4.d(r6)
            com.tkay.expressad.exoplayer.h.x$a r0 = r4.j
            com.tkay.expressad.exoplayer.j.a r0 = r0.d
            byte[] r0 = r0.a
            com.tkay.expressad.exoplayer.h.x$a r1 = r4.j
            long r2 = r4.o
            int r1 = r1.a(r2)
            int r5 = r5.a(r0, r1, r6)
            r6 = -1
            if (r5 != r6) goto L22
            if (r7 == 0) goto L1c
            return r6
        L1c:
            java.io.EOFException r5 = new java.io.EOFException
            r5.<init>()
            throw r5
        L22:
            r4.e(r5)
            return r5
    }

    public final int a(com.tkay.expressad.exoplayer.n r20, com.tkay.expressad.exoplayer.c.e r21, boolean r22, boolean r23, long r24) {
            r19 = this;
            r0 = r19
            r8 = r21
            com.tkay.expressad.exoplayer.h.w r1 = r0.e
            com.tkay.expressad.exoplayer.m r6 = r0.k
            com.tkay.expressad.exoplayer.h.w$a r7 = r0.f
            r2 = r20
            r3 = r21
            r4 = r22
            r5 = r23
            int r1 = r1.a(r2, r3, r4, r5, r6, r7)
            r2 = -5
            if (r1 == r2) goto L14b
            r2 = -4
            if (r1 == r2) goto L26
            r2 = -3
            if (r1 != r2) goto L20
            return r2
        L20:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            r1.<init>()
            throw r1
        L26:
            boolean r1 = r21.c()
            if (r1 != 0) goto L14a
            long r3 = r8.f
            int r1 = (r3 > r24 ? 1 : (r3 == r24 ? 0 : -1))
            if (r1 >= 0) goto L37
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            r8.b(r1)
        L37:
            boolean r1 = r21.g()
            if (r1 == 0) goto L109
            com.tkay.expressad.exoplayer.h.w$a r1 = r0.f
            long r3 = r1.b
            com.tkay.expressad.exoplayer.k.s r5 = r0.g
            r6 = 1
            r5.a(r6)
            com.tkay.expressad.exoplayer.k.s r5 = r0.g
            byte[] r5 = r5.a
            r0.a(r3, r5, r6)
            r9 = 1
            long r3 = r3 + r9
            com.tkay.expressad.exoplayer.k.s r5 = r0.g
            byte[] r5 = r5.a
            r7 = 0
            r5 = r5[r7]
            r9 = r5 & 128(0x80, float:1.8E-43)
            if (r9 == 0) goto L5e
            r9 = r6
            goto L5f
        L5e:
            r9 = r7
        L5f:
            r5 = r5 & 127(0x7f, float:1.78E-43)
            com.tkay.expressad.exoplayer.c.b r10 = r8.d
            byte[] r10 = r10.a
            if (r10 != 0) goto L6f
            com.tkay.expressad.exoplayer.c.b r10 = r8.d
            r11 = 16
            byte[] r11 = new byte[r11]
            r10.a = r11
        L6f:
            com.tkay.expressad.exoplayer.c.b r10 = r8.d
            byte[] r10 = r10.a
            r0.a(r3, r10, r5)
            long r10 = (long) r5
            long r3 = r3 + r10
            if (r9 == 0) goto L90
            com.tkay.expressad.exoplayer.k.s r5 = r0.g
            r6 = 2
            r5.a(r6)
            com.tkay.expressad.exoplayer.k.s r5 = r0.g
            byte[] r5 = r5.a
            r0.a(r3, r5, r6)
            r5 = 2
            long r3 = r3 + r5
            com.tkay.expressad.exoplayer.k.s r5 = r0.g
            int r6 = r5.e()
        L90:
            r11 = r6
            com.tkay.expressad.exoplayer.c.b r5 = r8.d
            int[] r5 = r5.d
            if (r5 == 0) goto L9a
            int r6 = r5.length
            if (r6 >= r11) goto L9c
        L9a:
            int[] r5 = new int[r11]
        L9c:
            r12 = r5
            com.tkay.expressad.exoplayer.c.b r5 = r8.d
            int[] r5 = r5.e
            if (r5 == 0) goto La6
            int r6 = r5.length
            if (r6 >= r11) goto La8
        La6:
            int[] r5 = new int[r11]
        La8:
            r13 = r5
            if (r9 == 0) goto Ld5
            int r5 = r11 * 6
            com.tkay.expressad.exoplayer.k.s r6 = r0.g
            r6.a(r5)
            com.tkay.expressad.exoplayer.k.s r6 = r0.g
            byte[] r6 = r6.a
            r0.a(r3, r6, r5)
            long r5 = (long) r5
            long r3 = r3 + r5
            com.tkay.expressad.exoplayer.k.s r5 = r0.g
            r5.c(r7)
        Lc0:
            if (r7 >= r11) goto Le1
            com.tkay.expressad.exoplayer.k.s r5 = r0.g
            int r5 = r5.e()
            r12[r7] = r5
            com.tkay.expressad.exoplayer.k.s r5 = r0.g
            int r5 = r5.m()
            r13[r7] = r5
            int r7 = r7 + 1
            goto Lc0
        Ld5:
            r12[r7] = r7
            int r5 = r1.a
            long r9 = r1.b
            long r9 = r3 - r9
            int r6 = (int) r9
            int r5 = r5 - r6
            r13[r7] = r5
        Le1:
            com.tkay.expressad.exoplayer.e.m$a r5 = r1.c
            com.tkay.expressad.exoplayer.c.b r10 = r8.d
            byte[] r14 = r5.b
            com.tkay.expressad.exoplayer.c.b r6 = r8.d
            byte[] r15 = r6.a
            int r6 = r5.a
            int r7 = r5.c
            int r5 = r5.d
            r16 = r6
            r17 = r7
            r18 = r5
            r10.a(r11, r12, r13, r14, r15, r16, r17, r18)
            long r5 = r1.b
            long r3 = r3 - r5
            int r3 = (int) r3
            long r4 = r1.b
            long r6 = (long) r3
            long r4 = r4 + r6
            r1.b = r4
            int r4 = r1.a
            int r4 = r4 - r3
            r1.a = r4
        L109:
            com.tkay.expressad.exoplayer.h.w$a r1 = r0.f
            int r1 = r1.a
            r8.d(r1)
            com.tkay.expressad.exoplayer.h.w$a r1 = r0.f
            long r3 = r1.b
            java.nio.ByteBuffer r1 = r8.e
            com.tkay.expressad.exoplayer.h.w$a r5 = r0.f
            int r5 = r5.a
            r0.b(r3)
        L11d:
            if (r5 <= 0) goto L14a
            com.tkay.expressad.exoplayer.h.x$a r6 = r0.i
            long r6 = r6.b
            long r6 = r6 - r3
            int r6 = (int) r6
            int r6 = java.lang.Math.min(r5, r6)
            com.tkay.expressad.exoplayer.h.x$a r7 = r0.i
            com.tkay.expressad.exoplayer.j.a r7 = r7.d
            byte[] r7 = r7.a
            com.tkay.expressad.exoplayer.h.x$a r8 = r0.i
            int r8 = r8.a(r3)
            r1.put(r7, r8, r6)
            int r5 = r5 - r6
            long r6 = (long) r6
            long r3 = r3 + r6
            com.tkay.expressad.exoplayer.h.x$a r6 = r0.i
            long r6 = r6.b
            int r6 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r6 != 0) goto L11d
            com.tkay.expressad.exoplayer.h.x$a r6 = r0.i
            com.tkay.expressad.exoplayer.h.x$a r6 = r6.e
            r0.i = r6
            goto L11d
        L14a:
            return r2
        L14b:
            r1 = r20
            com.tkay.expressad.exoplayer.m r1 = r1.a
            r0.k = r1
            return r2
    }

    public final void a() {
            r4 = this;
            com.tkay.expressad.exoplayer.h.w r0 = r4.e
            r0.a()
            com.tkay.expressad.exoplayer.h.x$a r0 = r4.h
            r4.a(r0)
            com.tkay.expressad.exoplayer.h.x$a r0 = new com.tkay.expressad.exoplayer.h.x$a
            int r1 = r4.d
            r2 = 0
            r0.<init>(r2, r1)
            r4.h = r0
            r4.i = r0
            r4.j = r0
            r4.o = r2
            com.tkay.expressad.exoplayer.j.b r0 = r4.c
            r0.b()
            return
    }

    public final void a(int r6) {
            r5 = this;
            com.tkay.expressad.exoplayer.h.w r0 = r5.e
            long r0 = r0.a(r6)
            r5.o = r0
            r2 = 0
            int r6 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r6 == 0) goto L4b
            com.tkay.expressad.exoplayer.h.x$a r6 = r5.h
            long r2 = r6.a
            int r6 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r6 != 0) goto L17
            goto L4b
        L17:
            com.tkay.expressad.exoplayer.h.x$a r6 = r5.h
        L19:
            long r0 = r5.o
            long r2 = r6.b
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L24
            com.tkay.expressad.exoplayer.h.x$a r6 = r6.e
            goto L19
        L24:
            com.tkay.expressad.exoplayer.h.x$a r0 = r6.e
            r5.a(r0)
            com.tkay.expressad.exoplayer.h.x$a r1 = new com.tkay.expressad.exoplayer.h.x$a
            long r2 = r6.b
            int r4 = r5.d
            r1.<init>(r2, r4)
            r6.e = r1
            long r1 = r5.o
            long r3 = r6.b
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L3f
            com.tkay.expressad.exoplayer.h.x$a r1 = r6.e
            goto L40
        L3f:
            r1 = r6
        L40:
            r5.j = r1
            com.tkay.expressad.exoplayer.h.x$a r1 = r5.i
            if (r1 != r0) goto L4a
            com.tkay.expressad.exoplayer.h.x$a r6 = r6.e
            r5.i = r6
        L4a:
            return
        L4b:
            com.tkay.expressad.exoplayer.h.x$a r6 = r5.h
            r5.a(r6)
            com.tkay.expressad.exoplayer.h.x$a r6 = new com.tkay.expressad.exoplayer.h.x$a
            long r0 = r5.o
            int r2 = r5.d
            r6.<init>(r0, r2)
            r5.h = r6
            r5.i = r6
            r5.j = r6
            return
    }

    public final void a(long r3) {
            r2 = this;
            long r0 = r2.n
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 == 0) goto Lb
            r2.n = r3
            r3 = 1
            r2.l = r3
        Lb:
            return
    }

    @Override
    public final void a(long r13, int r15, int r16, int r17, com.tkay.expressad.exoplayer.e.m.a r18) {
            r12 = this;
            r0 = r12
            r1 = r13
            boolean r3 = r0.l
            if (r3 == 0) goto Lb
            com.tkay.expressad.exoplayer.m r3 = r0.m
            r12.a(r3)
        Lb:
            boolean r3 = r0.p
            if (r3 == 0) goto L21
            r3 = r15 & 1
            if (r3 == 0) goto L20
            com.tkay.expressad.exoplayer.h.w r3 = r0.e
            boolean r3 = r3.a(r13)
            if (r3 != 0) goto L1c
            goto L20
        L1c:
            r3 = 0
            r0.p = r3
            goto L21
        L20:
            return
        L21:
            long r3 = r0.n
            long r5 = r1 + r3
            long r1 = r0.o
            r3 = r16
            long r7 = (long) r3
            long r1 = r1 - r7
            r4 = r17
            long r7 = (long) r4
            long r8 = r1 - r7
            com.tkay.expressad.exoplayer.h.w r4 = r0.e
            r7 = r15
            r10 = r16
            r11 = r18
            r4.a(r5, r7, r8, r10, r11)
            return
    }

    public final void a(long r2, boolean r4, boolean r5) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.w r0 = r1.e
            long r2 = r0.a(r2, r4, r5)
            r1.c(r2)
            return
    }

    public final void a(com.tkay.expressad.exoplayer.h.x.b r1) {
            r0 = this;
            r0.q = r1
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.k.s r6, int r7) {
            r5 = this;
        L0:
            if (r7 <= 0) goto L1c
            int r0 = r5.d(r7)
            com.tkay.expressad.exoplayer.h.x$a r1 = r5.j
            com.tkay.expressad.exoplayer.j.a r1 = r1.d
            byte[] r1 = r1.a
            com.tkay.expressad.exoplayer.h.x$a r2 = r5.j
            long r3 = r5.o
            int r2 = r2.a(r3)
            r6.a(r1, r2, r0)
            int r7 = r7 - r0
            r5.e(r0)
            goto L0
        L1c:
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.m r7) {
            r6 = this;
            long r0 = r6.n
            if (r7 != 0) goto L6
            r0 = 0
            goto L20
        L6:
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L1f
            long r2 = r7.l
            r4 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 == 0) goto L1f
            long r2 = r7.l
            long r2 = r2 + r0
            com.tkay.expressad.exoplayer.m r0 = r7.a(r2)
            goto L20
        L1f:
            r0 = r7
        L20:
            com.tkay.expressad.exoplayer.h.w r1 = r6.e
            boolean r0 = r1.a(r0)
            r6.m = r7
            r7 = 0
            r6.l = r7
            com.tkay.expressad.exoplayer.h.x$b r7 = r6.q
            if (r7 == 0) goto L34
            if (r0 == 0) goto L34
            r7.i()
        L34:
            return
    }

    public final int b() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.w r0 = r1.e
            int r0 = r0.b()
            return r0
    }

    public final boolean b(int r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.w r0 = r1.e
            boolean r2 = r0.c(r2)
            return r2
    }

    public final boolean c() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.w r0 = r1.e
            boolean r0 = r0.f()
            return r0
    }

    public final int d() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.w r0 = r1.e
            int r0 = r0.c()
            return r0
    }

    public final int e() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.w r0 = r1.e
            int r0 = r0.d()
            return r0
    }

    public final com.tkay.expressad.exoplayer.m f() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.w r0 = r1.e
            com.tkay.expressad.exoplayer.m r0 = r0.g()
            return r0
    }

    public final long g() {
            r2 = this;
            com.tkay.expressad.exoplayer.h.w r0 = r2.e
            long r0 = r0.h()
            return r0
    }

    public final long h() {
            r2 = this;
            com.tkay.expressad.exoplayer.h.w r0 = r2.e
            long r0 = r0.i()
            return r0
    }

    public final void i() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.w r0 = r1.e
            r0.j()
            com.tkay.expressad.exoplayer.h.x$a r0 = r1.h
            r1.i = r0
            return
    }

    public final void j() {
            r2 = this;
            com.tkay.expressad.exoplayer.h.w r0 = r2.e
            long r0 = r0.m()
            r2.c(r0)
            return
    }

    public final int k() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.w r0 = r1.e
            int r0 = r0.k()
            return r0
    }
}
