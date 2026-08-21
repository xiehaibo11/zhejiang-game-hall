package com.tkay.expressad.exoplayer.h;

public final class d implements com.tkay.expressad.exoplayer.h.r, com.tkay.expressad.exoplayer.h.r.a {
    public final com.tkay.expressad.exoplayer.h.r a;
    long b;
    long c;
    private com.tkay.expressad.exoplayer.h.r.a d;
    private com.tkay.expressad.exoplayer.h.d.a[] e;
    private long f;

    private final class a implements com.tkay.expressad.exoplayer.h.y {
        public final com.tkay.expressad.exoplayer.h.y a;
        final com.tkay.expressad.exoplayer.h.d b;
        private boolean c;

        public a(com.tkay.expressad.exoplayer.h.d r1, com.tkay.expressad.exoplayer.h.y r2) {
                r0 = this;
                r0.b = r1
                r0.<init>()
                r0.a = r2
                return
        }

        @Override
        public final int a(long r2) {
                r1 = this;
                com.tkay.expressad.exoplayer.h.d r0 = r1.b
                boolean r0 = r0.f()
                if (r0 == 0) goto La
                r2 = -3
                return r2
            La:
                com.tkay.expressad.exoplayer.h.y r0 = r1.a
                int r2 = r0.a(r2)
                return r2
        }

        @Override
        public final int a(com.tkay.expressad.exoplayer.n r11, com.tkay.expressad.exoplayer.c.e r12, boolean r13) {
                r10 = this;
                com.tkay.expressad.exoplayer.h.d r0 = r10.b
                boolean r0 = r0.f()
                r1 = -3
                if (r0 == 0) goto La
                return r1
            La:
                boolean r0 = r10.c
                r2 = 4
                r3 = -4
                if (r0 == 0) goto L14
                r12.a(r2)
                return r3
            L14:
                com.tkay.expressad.exoplayer.h.y r0 = r10.a
                int r13 = r0.a(r11, r12, r13)
                r0 = -5
                r4 = -9223372036854775808
                if (r13 != r0) goto L4a
                com.tkay.expressad.exoplayer.m r12 = r11.a
                int r13 = r12.x
                if (r13 != 0) goto L29
                int r13 = r12.y
                if (r13 == 0) goto L49
            L29:
                com.tkay.expressad.exoplayer.h.d r13 = r10.b
                long r1 = r13.b
                r6 = 0
                int r13 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
                r1 = 0
                if (r13 == 0) goto L36
                r13 = r1
                goto L38
            L36:
                int r13 = r12.x
            L38:
                com.tkay.expressad.exoplayer.h.d r2 = r10.b
                long r2 = r2.c
                int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r2 == 0) goto L41
                goto L43
            L41:
                int r1 = r12.y
            L43:
                com.tkay.expressad.exoplayer.m r12 = r12.a(r13, r1)
                r11.a = r12
            L49:
                return r0
            L4a:
                com.tkay.expressad.exoplayer.h.d r11 = r10.b
                long r6 = r11.c
                int r11 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
                if (r11 == 0) goto L74
                if (r13 != r3) goto L5e
                long r6 = r12.f
                com.tkay.expressad.exoplayer.h.d r11 = r10.b
                long r8 = r11.c
                int r11 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
                if (r11 >= 0) goto L6a
            L5e:
                if (r13 != r1) goto L74
                com.tkay.expressad.exoplayer.h.d r11 = r10.b
                long r0 = r11.d()
                int r11 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
                if (r11 != 0) goto L74
            L6a:
                r12.a()
                r12.a(r2)
                r11 = 1
                r10.c = r11
                return r3
            L74:
                return r13
        }

        public final void a() {
                r1 = this;
                r0 = 0
                r1.c = r0
                return
        }

        @Override
        public final boolean b() {
                r1 = this;
                com.tkay.expressad.exoplayer.h.d r0 = r1.b
                boolean r0 = r0.f()
                if (r0 != 0) goto L12
                com.tkay.expressad.exoplayer.h.y r0 = r1.a
                boolean r0 = r0.b()
                if (r0 == 0) goto L12
                r0 = 1
                return r0
            L12:
                r0 = 0
                return r0
        }

        @Override
        public final void c() {
                r1 = this;
                com.tkay.expressad.exoplayer.h.y r0 = r1.a
                r0.c()
                return
        }
    }

    public d(com.tkay.expressad.exoplayer.h.r r1, boolean r2, long r3, long r5) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r1 = 0
            com.tkay.expressad.exoplayer.h.d$a[] r1 = new com.tkay.expressad.exoplayer.h.d.a[r1]
            r0.e = r1
            if (r2 == 0) goto Le
            r1 = r3
            goto L13
        Le:
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
        L13:
            r0.f = r1
            r0.b = r3
            r0.c = r5
            return
    }

    private static boolean a(long r2, com.tkay.expressad.exoplayer.i.f[] r4) {
            r0 = 0
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            r3 = 0
            if (r2 == 0) goto L20
            int r2 = r4.length
            r0 = r3
        L9:
            if (r0 >= r2) goto L20
            r1 = r4[r0]
            if (r1 == 0) goto L1d
            com.tkay.expressad.exoplayer.m r1 = r1.h()
            java.lang.String r1 = r1.h
            boolean r1 = com.tkay.expressad.exoplayer.k.o.a(r1)
            if (r1 != 0) goto L1d
            r2 = 1
            return r2
        L1d:
            int r0 = r0 + 1
            goto L9
        L20:
            return r3
    }

    private com.tkay.expressad.exoplayer.ac b(long r9, com.tkay.expressad.exoplayer.ac r11) {
            r8 = this;
            long r0 = r11.f
            long r2 = r8.b
            long r2 = r9 - r2
            long r0 = com.tkay.expressad.exoplayer.k.af.a(r0, r2)
            long r2 = r11.g
            long r4 = r8.c
            r6 = -9223372036854775808
            int r6 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r6 != 0) goto L1a
            r9 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            goto L1c
        L1a:
            long r9 = r4 - r9
        L1c:
            long r9 = com.tkay.expressad.exoplayer.k.af.a(r2, r9)
            long r2 = r11.f
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L2d
            long r2 = r11.g
            int r2 = (r9 > r2 ? 1 : (r9 == r2 ? 0 : -1))
            if (r2 != 0) goto L2d
            return r11
        L2d:
            com.tkay.expressad.exoplayer.ac r11 = new com.tkay.expressad.exoplayer.ac
            r11.<init>(r0, r9)
            return r11
    }

    private void g() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.r$a r0 = r1.d
            r0.a(r1)
            return
    }

    @Override
    public final long a(long r9, com.tkay.expressad.exoplayer.ac r11) {
            r8 = this;
            long r0 = r8.b
            int r2 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
            if (r2 != 0) goto L7
            return r0
        L7:
            long r0 = r11.f
            long r2 = r8.b
            long r2 = r9 - r2
            long r0 = com.tkay.expressad.exoplayer.k.af.a(r0, r2)
            long r2 = r11.g
            long r4 = r8.c
            r6 = -9223372036854775808
            int r6 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r6 != 0) goto L21
            r4 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            goto L22
        L21:
            long r4 = r4 - r9
        L22:
            long r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r4)
            long r4 = r11.f
            int r4 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r4 != 0) goto L33
            long r4 = r11.g
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 != 0) goto L33
            goto L38
        L33:
            com.tkay.expressad.exoplayer.ac r11 = new com.tkay.expressad.exoplayer.ac
            r11.<init>(r0, r2)
        L38:
            com.tkay.expressad.exoplayer.h.r r0 = r8.a
            long r9 = r0.a(r9, r11)
            return r9
    }

    @Override
    public final long a(com.tkay.expressad.exoplayer.i.f[] r16, boolean[] r17, com.tkay.expressad.exoplayer.h.y[] r18, boolean[] r19, long r20) {
            r15 = this;
            r0 = r15
            r8 = r16
            r9 = r18
            int r1 = r9.length
            com.tkay.expressad.exoplayer.h.d$a[] r1 = new com.tkay.expressad.exoplayer.h.d.a[r1]
            r0.e = r1
            int r1 = r9.length
            com.tkay.expressad.exoplayer.h.y[] r10 = new com.tkay.expressad.exoplayer.h.y[r1]
            r11 = 0
            r1 = r11
        Lf:
            int r2 = r9.length
            r12 = 0
            if (r1 >= r2) goto L28
            com.tkay.expressad.exoplayer.h.d$a[] r2 = r0.e
            r3 = r9[r1]
            com.tkay.expressad.exoplayer.h.d$a r3 = (com.tkay.expressad.exoplayer.h.d.a) r3
            r2[r1] = r3
            r3 = r2[r1]
            if (r3 == 0) goto L23
            r2 = r2[r1]
            com.tkay.expressad.exoplayer.h.y r12 = r2.a
        L23:
            r10[r1] = r12
            int r1 = r1 + 1
            goto Lf
        L28:
            com.tkay.expressad.exoplayer.h.r r1 = r0.a
            r2 = r16
            r3 = r17
            r4 = r10
            r5 = r19
            r6 = r20
            long r1 = r1.a(r2, r3, r4, r5, r6)
            boolean r3 = r15.f()
            r4 = 1
            if (r3 == 0) goto L68
            long r5 = r0.b
            int r3 = (r20 > r5 ? 1 : (r20 == r5 ? 0 : -1))
            if (r3 != 0) goto L68
            r13 = 0
            int r3 = (r5 > r13 ? 1 : (r5 == r13 ? 0 : -1))
            if (r3 == 0) goto L63
            int r3 = r8.length
            r5 = r11
        L4c:
            if (r5 >= r3) goto L63
            r6 = r8[r5]
            if (r6 == 0) goto L60
            com.tkay.expressad.exoplayer.m r6 = r6.h()
            java.lang.String r6 = r6.h
            boolean r6 = com.tkay.expressad.exoplayer.k.o.a(r6)
            if (r6 != 0) goto L60
            r3 = r4
            goto L64
        L60:
            int r5 = r5 + 1
            goto L4c
        L63:
            r3 = r11
        L64:
            if (r3 == 0) goto L68
            r5 = r1
            goto L6d
        L68:
            r5 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
        L6d:
            r0.f = r5
            int r3 = (r1 > r20 ? 1 : (r1 == r20 ? 0 : -1))
            if (r3 == 0) goto L87
            long r5 = r0.b
            int r3 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r3 < 0) goto L86
            long r5 = r0.c
            r7 = -9223372036854775808
            int r3 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r3 == 0) goto L87
            int r3 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r3 > 0) goto L86
            goto L87
        L86:
            r4 = r11
        L87:
            com.tkay.expressad.exoplayer.k.a.b(r4)
        L8a:
            int r3 = r9.length
            if (r11 >= r3) goto Lb8
            r3 = r10[r11]
            if (r3 != 0) goto L96
            com.tkay.expressad.exoplayer.h.d$a[] r3 = r0.e
            r3[r11] = r12
            goto Laf
        L96:
            r3 = r9[r11]
            if (r3 == 0) goto La4
            com.tkay.expressad.exoplayer.h.d$a[] r3 = r0.e
            r3 = r3[r11]
            com.tkay.expressad.exoplayer.h.y r3 = r3.a
            r4 = r10[r11]
            if (r3 == r4) goto Laf
        La4:
            com.tkay.expressad.exoplayer.h.d$a[] r3 = r0.e
            com.tkay.expressad.exoplayer.h.d$a r4 = new com.tkay.expressad.exoplayer.h.d$a
            r5 = r10[r11]
            r4.<init>(r15, r5)
            r3[r11] = r4
        Laf:
            com.tkay.expressad.exoplayer.h.d$a[] r3 = r0.e
            r3 = r3[r11]
            r9[r11] = r3
            int r11 = r11 + 1
            goto L8a
        Lb8:
            return r1
    }

    @Override
    public final void a() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.r r0 = r1.a
            r0.a()
            return
    }

    public final void a(long r1, long r3) {
            r0 = this;
            r0.b = r1
            r0.c = r3
            return
    }

    @Override
    public final void a(long r2, boolean r4) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.r r0 = r1.a
            r0.a(r2, r4)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.r.a r1, long r2) {
            r0 = this;
            r0.d = r1
            com.tkay.expressad.exoplayer.h.r r1 = r0.a
            r1.a(r0, r2)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.r r1) {
            r0 = this;
            com.tkay.expressad.exoplayer.h.r$a r1 = r0.d
            r1.a(r0)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.z r1) {
            r0 = this;
            com.tkay.expressad.exoplayer.h.r$a r1 = r0.d
            r1.a(r0)
            return
    }

    @Override
    public final void a_(long r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.r r0 = r1.a
            r0.a_(r2)
            return
    }

    @Override
    public final long b(long r6) {
            r5 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r5.f = r0
            com.tkay.expressad.exoplayer.h.d$a[] r0 = r5.e
            int r1 = r0.length
            r2 = 0
            r3 = r2
        Lc:
            if (r3 >= r1) goto L18
            r4 = r0[r3]
            if (r4 == 0) goto L15
            r4.a()
        L15:
            int r3 = r3 + 1
            goto Lc
        L18:
            com.tkay.expressad.exoplayer.h.r r0 = r5.a
            long r0 = r0.b(r6)
            int r6 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r6 == 0) goto L34
            long r6 = r5.b
            int r6 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r6 < 0) goto L35
            long r6 = r5.c
            r3 = -9223372036854775808
            int r3 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r3 == 0) goto L34
            int r6 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r6 > 0) goto L35
        L34:
            r2 = 1
        L35:
            com.tkay.expressad.exoplayer.k.a.b(r2)
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.h.af b() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.r r0 = r1.a
            com.tkay.expressad.exoplayer.h.af r0 = r0.b()
            return r0
    }

    @Override
    public final long c() {
            r9 = this;
            boolean r0 = r9.f()
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r0 == 0) goto L19
            long r3 = r9.f
            r9.f = r1
            long r5 = r9.c()
            int r0 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            if (r0 == 0) goto L18
            return r5
        L18:
            return r3
        L19:
            com.tkay.expressad.exoplayer.h.r r0 = r9.a
            long r3 = r0.c()
            int r0 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r0 != 0) goto L24
            return r1
        L24:
            long r0 = r9.b
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            r1 = 1
            r2 = 0
            if (r0 < 0) goto L2e
            r0 = r1
            goto L2f
        L2e:
            r0 = r2
        L2f:
            com.tkay.expressad.exoplayer.k.a.b(r0)
            long r5 = r9.c
            r7 = -9223372036854775808
            int r0 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r0 == 0) goto L40
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 > 0) goto L3f
            goto L40
        L3f:
            r1 = r2
        L40:
            com.tkay.expressad.exoplayer.k.a.b(r1)
            return r3
    }

    @Override
    public final boolean c(long r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.r r0 = r1.a
            boolean r2 = r0.c(r2)
            return r2
    }

    @Override
    public final long d() {
            r7 = this;
            com.tkay.expressad.exoplayer.h.r r0 = r7.a
            long r0 = r0.d()
            r2 = -9223372036854775808
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L18
            long r4 = r7.c
            int r6 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r6 == 0) goto L17
            int r4 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r4 < 0) goto L17
            goto L18
        L17:
            return r0
        L18:
            return r2
    }

    @Override
    public final long e() {
            r7 = this;
            com.tkay.expressad.exoplayer.h.r r0 = r7.a
            long r0 = r0.e()
            r2 = -9223372036854775808
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L18
            long r4 = r7.c
            int r6 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r6 == 0) goto L17
            int r4 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r4 < 0) goto L17
            goto L18
        L17:
            return r0
        L18:
            return r2
    }

    final boolean f() {
            r4 = this;
            long r0 = r4.f
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Ld
            r0 = 1
            return r0
        Ld:
            r0 = 0
            return r0
    }
}
