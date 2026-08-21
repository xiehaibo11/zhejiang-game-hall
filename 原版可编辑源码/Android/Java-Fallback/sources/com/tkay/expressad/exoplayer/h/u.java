package com.tkay.expressad.exoplayer.h;

final class u implements com.tkay.expressad.exoplayer.h.r, com.tkay.expressad.exoplayer.h.r.a {
    public final com.tkay.expressad.exoplayer.h.r[] a;
    private final java.util.IdentityHashMap<com.tkay.expressad.exoplayer.h.y, java.lang.Integer> b;
    private final com.tkay.expressad.exoplayer.h.h c;
    private final java.util.ArrayList<com.tkay.expressad.exoplayer.h.r> d;
    private com.tkay.expressad.exoplayer.h.r.a e;
    private com.tkay.expressad.exoplayer.h.af f;
    private com.tkay.expressad.exoplayer.h.r[] g;
    private com.tkay.expressad.exoplayer.h.z h;

    public u(com.tkay.expressad.exoplayer.h.h r1, com.tkay.expressad.exoplayer.h.r... r2) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            r0.a = r2
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r0.d = r2
            r2 = 0
            com.tkay.expressad.exoplayer.h.z[] r2 = new com.tkay.expressad.exoplayer.h.z[r2]
            com.tkay.expressad.exoplayer.h.z r1 = r1.a(r2)
            r0.h = r1
            java.util.IdentityHashMap r1 = new java.util.IdentityHashMap
            r1.<init>()
            r0.b = r1
            return
    }

    private void f() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.r$a r0 = r1.e
            r0.a(r1)
            return
    }

    @Override
    public final long a(long r3, com.tkay.expressad.exoplayer.ac r5) {
            r2 = this;
            com.tkay.expressad.exoplayer.h.r[] r0 = r2.g
            r1 = 0
            r0 = r0[r1]
            long r3 = r0.a(r3, r5)
            return r3
    }

    @Override
    public final long a(com.tkay.expressad.exoplayer.i.f[] r20, boolean[] r21, com.tkay.expressad.exoplayer.h.y[] r22, boolean[] r23, long r24) {
            r19 = this;
            r0 = r19
            r1 = r20
            r2 = r22
            int r3 = r1.length
            int[] r3 = new int[r3]
            int r4 = r1.length
            int[] r4 = new int[r4]
            r6 = 0
        Ld:
            int r7 = r1.length
            if (r6 >= r7) goto L4e
            r7 = r2[r6]
            r8 = -1
            if (r7 != 0) goto L17
            r7 = r8
            goto L25
        L17:
            java.util.IdentityHashMap<com.tkay.expressad.exoplayer.h.y, java.lang.Integer> r7 = r0.b
            r9 = r2[r6]
            java.lang.Object r7 = r7.get(r9)
            java.lang.Integer r7 = (java.lang.Integer) r7
            int r7 = r7.intValue()
        L25:
            r3[r6] = r7
            r4[r6] = r8
            r7 = r1[r6]
            if (r7 == 0) goto L4b
            r7 = r1[r6]
            com.tkay.expressad.exoplayer.h.ae r7 = r7.f()
            r9 = 0
        L34:
            com.tkay.expressad.exoplayer.h.r[] r10 = r0.a
            int r11 = r10.length
            if (r9 >= r11) goto L4b
            r10 = r10[r9]
            com.tkay.expressad.exoplayer.h.af r10 = r10.b()
            int r10 = r10.a(r7)
            if (r10 == r8) goto L48
            r4[r6] = r9
            goto L4b
        L48:
            int r9 = r9 + 1
            goto L34
        L4b:
            int r6 = r6 + 1
            goto Ld
        L4e:
            java.util.IdentityHashMap<com.tkay.expressad.exoplayer.h.y, java.lang.Integer> r6 = r0.b
            r6.clear()
            int r6 = r1.length
            com.tkay.expressad.exoplayer.h.y[] r7 = new com.tkay.expressad.exoplayer.h.y[r6]
            int r8 = r1.length
            com.tkay.expressad.exoplayer.h.y[] r8 = new com.tkay.expressad.exoplayer.h.y[r8]
            int r9 = r1.length
            com.tkay.expressad.exoplayer.i.f[] r14 = new com.tkay.expressad.exoplayer.i.f[r9]
            java.util.ArrayList r15 = new java.util.ArrayList
            com.tkay.expressad.exoplayer.h.r[] r9 = r0.a
            int r9 = r9.length
            r15.<init>(r9)
            r16 = r24
            r13 = 0
        L67:
            com.tkay.expressad.exoplayer.h.r[] r9 = r0.a
            int r9 = r9.length
            if (r13 >= r9) goto Lf2
            r9 = 0
        L6d:
            int r10 = r1.length
            if (r9 >= r10) goto L86
            r10 = r3[r9]
            r11 = 0
            if (r10 != r13) goto L78
            r10 = r2[r9]
            goto L79
        L78:
            r10 = r11
        L79:
            r8[r9] = r10
            r10 = r4[r9]
            if (r10 != r13) goto L81
            r11 = r1[r9]
        L81:
            r14[r9] = r11
            int r9 = r9 + 1
            goto L6d
        L86:
            com.tkay.expressad.exoplayer.h.r[] r9 = r0.a
            r9 = r9[r13]
            r10 = r14
            r11 = r21
            r12 = r8
            r5 = r13
            r13 = r23
            r18 = r14
            r2 = r15
            r14 = r16
            long r9 = r9.a(r10, r11, r12, r13, r14)
            if (r5 != 0) goto L9f
            r16 = r9
            goto La3
        L9f:
            int r9 = (r9 > r16 ? 1 : (r9 == r16 ? 0 : -1))
            if (r9 != 0) goto Lea
        La3:
            r9 = 0
            r10 = 0
        La5:
            int r11 = r1.length
            if (r9 >= r11) goto Ld8
            r11 = r4[r9]
            r12 = 1
            if (r11 != r5) goto Lc8
            r10 = r8[r9]
            if (r10 == 0) goto Lb3
            r10 = r12
            goto Lb4
        Lb3:
            r10 = 0
        Lb4:
            com.tkay.expressad.exoplayer.k.a.b(r10)
            r10 = r8[r9]
            r7[r9] = r10
            java.util.IdentityHashMap<com.tkay.expressad.exoplayer.h.y, java.lang.Integer> r10 = r0.b
            r11 = r8[r9]
            java.lang.Integer r13 = java.lang.Integer.valueOf(r5)
            r10.put(r11, r13)
            r10 = r12
            goto Ld5
        Lc8:
            r11 = r3[r9]
            if (r11 != r5) goto Ld5
            r11 = r8[r9]
            if (r11 != 0) goto Ld1
            goto Ld2
        Ld1:
            r12 = 0
        Ld2:
            com.tkay.expressad.exoplayer.k.a.b(r12)
        Ld5:
            int r9 = r9 + 1
            goto La5
        Ld8:
            if (r10 == 0) goto Le1
            com.tkay.expressad.exoplayer.h.r[] r9 = r0.a
            r9 = r9[r5]
            r2.add(r9)
        Le1:
            int r13 = r5 + 1
            r15 = r2
            r14 = r18
            r2 = r22
            goto L67
        Lea:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "Children enabled at different positions."
            r1.<init>(r2)
            throw r1
        Lf2:
            r1 = r2
            r2 = r15
            r3 = 0
            java.lang.System.arraycopy(r7, r3, r1, r3, r6)
            int r1 = r2.size()
            com.tkay.expressad.exoplayer.h.r[] r1 = new com.tkay.expressad.exoplayer.h.r[r1]
            r0.g = r1
            r2.toArray(r1)
            com.tkay.expressad.exoplayer.h.h r1 = r0.c
            com.tkay.expressad.exoplayer.h.r[] r2 = r0.g
            com.tkay.expressad.exoplayer.h.z r1 = r1.a(r2)
            r0.h = r1
            return r16
    }

    @Override
    public final void a() {
            r4 = this;
            com.tkay.expressad.exoplayer.h.r[] r0 = r4.a
            int r1 = r0.length
            r2 = 0
        L4:
            if (r2 >= r1) goto Le
            r3 = r0[r2]
            r3.a()
            int r2 = r2 + 1
            goto L4
        Le:
            return
    }

    @Override
    public final void a(long r5, boolean r7) {
            r4 = this;
            com.tkay.expressad.exoplayer.h.r[] r0 = r4.g
            int r1 = r0.length
            r2 = 0
        L4:
            if (r2 >= r1) goto Le
            r3 = r0[r2]
            r3.a(r5, r7)
            int r2 = r2 + 1
            goto L4
        Le:
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.r.a r4, long r5) {
            r3 = this;
            r3.e = r4
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.r> r4 = r3.d
            com.tkay.expressad.exoplayer.h.r[] r0 = r3.a
            java.util.Collections.addAll(r4, r0)
            com.tkay.expressad.exoplayer.h.r[] r4 = r3.a
            int r0 = r4.length
            r1 = 0
        Ld:
            if (r1 >= r0) goto L17
            r2 = r4[r1]
            r2.a(r3, r5)
            int r1 = r1 + 1
            goto Ld
        L17:
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.r r11) {
            r10 = this;
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.r> r0 = r10.d
            r0.remove(r11)
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.r> r11 = r10.d
            boolean r11 = r11.isEmpty()
            if (r11 != 0) goto Le
            return
        Le:
            com.tkay.expressad.exoplayer.h.r[] r11 = r10.a
            int r0 = r11.length
            r1 = 0
            r2 = r1
            r3 = r2
        L14:
            if (r2 >= r0) goto L22
            r4 = r11[r2]
            com.tkay.expressad.exoplayer.h.af r4 = r4.b()
            int r4 = r4.b
            int r3 = r3 + r4
            int r2 = r2 + 1
            goto L14
        L22:
            com.tkay.expressad.exoplayer.h.ae[] r11 = new com.tkay.expressad.exoplayer.h.ae[r3]
            com.tkay.expressad.exoplayer.h.r[] r0 = r10.a
            int r2 = r0.length
            r3 = r1
            r4 = r3
        L29:
            if (r3 >= r2) goto L45
            r5 = r0[r3]
            com.tkay.expressad.exoplayer.h.af r5 = r5.b()
            int r6 = r5.b
            r7 = r1
        L34:
            if (r7 >= r6) goto L42
            int r8 = r4 + 1
            com.tkay.expressad.exoplayer.h.ae r9 = r5.a(r7)
            r11[r4] = r9
            int r7 = r7 + 1
            r4 = r8
            goto L34
        L42:
            int r3 = r3 + 1
            goto L29
        L45:
            com.tkay.expressad.exoplayer.h.af r0 = new com.tkay.expressad.exoplayer.h.af
            r0.<init>(r11)
            r10.f = r0
            com.tkay.expressad.exoplayer.h.r$a r11 = r10.e
            r11.a(r10)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.z r1) {
            r0 = this;
            com.tkay.expressad.exoplayer.h.r$a r1 = r0.e
            r1.a(r0)
            return
    }

    @Override
    public final void a_(long r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.z r0 = r1.h
            r0.a_(r2)
            return
    }

    @Override
    public final long b(long r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.h.r[] r0 = r3.g
            r1 = 0
            r0 = r0[r1]
            long r4 = r0.b(r4)
            r0 = 1
        La:
            com.tkay.expressad.exoplayer.h.r[] r1 = r3.g
            int r2 = r1.length
            if (r0 >= r2) goto L24
            r1 = r1[r0]
            long r1 = r1.b(r4)
            int r1 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
            if (r1 != 0) goto L1c
            int r0 = r0 + 1
            goto La
        L1c:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r5 = "Unexpected child seekToUs result."
            r4.<init>(r5)
            throw r4
        L24:
            return r4
    }

    @Override
    public final com.tkay.expressad.exoplayer.h.af b() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.af r0 = r1.f
            return r0
    }

    @Override
    public final long c() {
            r8 = this;
            com.tkay.expressad.exoplayer.h.r[] r0 = r8.a
            r1 = 0
            r0 = r0[r1]
            long r2 = r0.c()
            r0 = 1
        La:
            com.tkay.expressad.exoplayer.h.r[] r4 = r8.a
            int r5 = r4.length
            r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r0 >= r5) goto L29
            r4 = r4[r0]
            long r4 = r4.c()
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 != 0) goto L21
            int r0 = r0 + 1
            goto La
        L21:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Child reported discontinuity."
            r0.<init>(r1)
            throw r0
        L29:
            int r0 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r0 == 0) goto L4f
            com.tkay.expressad.exoplayer.h.r[] r0 = r8.g
            int r4 = r0.length
            r5 = r1
        L31:
            if (r5 >= r4) goto L4f
            r6 = r0[r5]
            com.tkay.expressad.exoplayer.h.r[] r7 = r8.a
            r7 = r7[r1]
            if (r6 == r7) goto L4c
            long r6 = r6.b(r2)
            int r6 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r6 != 0) goto L44
            goto L4c
        L44:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Unexpected child seekToUs result."
            r0.<init>(r1)
            throw r0
        L4c:
            int r5 = r5 + 1
            goto L31
        L4f:
            return r2
    }

    @Override
    public final boolean c(long r5) {
            r4 = this;
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.r> r0 = r4.d
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L21
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.r> r0 = r4.d
            int r0 = r0.size()
            r1 = 0
            r2 = r1
        L10:
            if (r2 >= r0) goto L20
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.r> r3 = r4.d
            java.lang.Object r3 = r3.get(r2)
            com.tkay.expressad.exoplayer.h.r r3 = (com.tkay.expressad.exoplayer.h.r) r3
            r3.c(r5)
            int r2 = r2 + 1
            goto L10
        L20:
            return r1
        L21:
            com.tkay.expressad.exoplayer.h.z r0 = r4.h
            boolean r5 = r0.c(r5)
            return r5
    }

    @Override
    public final long d() {
            r2 = this;
            com.tkay.expressad.exoplayer.h.z r0 = r2.h
            long r0 = r0.d()
            return r0
    }

    @Override
    public final long e() {
            r2 = this;
            com.tkay.expressad.exoplayer.h.z r0 = r2.h
            long r0 = r0.e()
            return r0
    }
}
