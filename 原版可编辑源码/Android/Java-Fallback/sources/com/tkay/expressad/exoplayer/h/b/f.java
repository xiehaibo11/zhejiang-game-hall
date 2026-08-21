package com.tkay.expressad.exoplayer.h.b;

import com.tkay.expressad.exoplayer.h.b.g;

public final class f<T extends com.tkay.expressad.exoplayer.h.b.g> implements com.tkay.expressad.exoplayer.h.y, com.tkay.expressad.exoplayer.h.z, com.tkay.expressad.exoplayer.j.t.a<com.tkay.expressad.exoplayer.h.b.c>, com.tkay.expressad.exoplayer.j.t.d {
    private static final java.lang.String d = "ChunkSampleStream";
    public final int a;
    long b;
    boolean c;
    private final int[] e;
    private final com.tkay.expressad.exoplayer.m[] f;
    private final boolean[] g;
    private final T h;
    private final com.tkay.expressad.exoplayer.h.z.a<com.tkay.expressad.exoplayer.h.b.f<T>> i;
    private final com.tkay.expressad.exoplayer.h.t.a j;
    private final int k;
    private final com.tkay.expressad.exoplayer.j.t l;
    private final com.tkay.expressad.exoplayer.h.b.e m;
    private final java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> n;
    private final java.util.List<com.tkay.expressad.exoplayer.h.b.a> o;
    private final com.tkay.expressad.exoplayer.h.x p;
    private final com.tkay.expressad.exoplayer.h.x[] q;
    private final com.tkay.expressad.exoplayer.h.b.b r;
    private com.tkay.expressad.exoplayer.m s;
    private com.tkay.expressad.exoplayer.h.b.f.b<T> t;
    private long u;
    private long v;

    public final class a implements com.tkay.expressad.exoplayer.h.y {
        public final com.tkay.expressad.exoplayer.h.b.f<T> a;
        final com.tkay.expressad.exoplayer.h.b.f b;
        private final com.tkay.expressad.exoplayer.h.x c;
        private final int d;
        private boolean e;

        public a(com.tkay.expressad.exoplayer.h.b.f r1, com.tkay.expressad.exoplayer.h.b.f<T> r2, com.tkay.expressad.exoplayer.h.x r3, int r4) {
                r0 = this;
                r0.b = r1
                r0.<init>()
                r0.a = r2
                r0.c = r3
                r0.d = r4
                return
        }

        private void a() {
                r3 = this;
                com.tkay.expressad.exoplayer.h.b.f r0 = r3.b
                boolean[] r0 = com.tkay.expressad.exoplayer.h.b.f.a(r0)
                int r1 = r3.d
                boolean r0 = r0[r1]
                com.tkay.expressad.exoplayer.k.a.b(r0)
                com.tkay.expressad.exoplayer.h.b.f r0 = r3.b
                boolean[] r0 = com.tkay.expressad.exoplayer.h.b.f.a(r0)
                int r1 = r3.d
                r2 = 0
                r0[r1] = r2
                return
        }

        private void d() {
                r8 = this;
                boolean r0 = r8.e
                if (r0 != 0) goto L2c
                com.tkay.expressad.exoplayer.h.b.f r0 = r8.b
                com.tkay.expressad.exoplayer.h.t$a r1 = com.tkay.expressad.exoplayer.h.b.f.e(r0)
                com.tkay.expressad.exoplayer.h.b.f r0 = r8.b
                int[] r0 = com.tkay.expressad.exoplayer.h.b.f.b(r0)
                int r2 = r8.d
                r2 = r0[r2]
                com.tkay.expressad.exoplayer.h.b.f r0 = r8.b
                com.tkay.expressad.exoplayer.m[] r0 = com.tkay.expressad.exoplayer.h.b.f.c(r0)
                int r3 = r8.d
                r3 = r0[r3]
                r4 = 0
                r5 = 0
                com.tkay.expressad.exoplayer.h.b.f r0 = r8.b
                long r6 = com.tkay.expressad.exoplayer.h.b.f.d(r0)
                r1.a(r2, r3, r4, r5, r6)
                r0 = 1
                r8.e = r0
            L2c:
                return
        }

        @Override
        public final int a(long r3) {
                r2 = this;
                com.tkay.expressad.exoplayer.h.b.f r0 = r2.b
                boolean r0 = r0.c
                if (r0 == 0) goto L17
                com.tkay.expressad.exoplayer.h.x r0 = r2.c
                long r0 = r0.g()
                int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
                if (r0 <= 0) goto L17
                com.tkay.expressad.exoplayer.h.x r3 = r2.c
                int r3 = r3.k()
                goto L22
            L17:
                com.tkay.expressad.exoplayer.h.x r0 = r2.c
                r1 = 1
                int r3 = r0.a(r3, r1)
                r4 = -1
                if (r3 != r4) goto L22
                r3 = 0
            L22:
                if (r3 <= 0) goto L27
                r2.d()
            L27:
                return r3
        }

        @Override
        public final int a(com.tkay.expressad.exoplayer.n r8, com.tkay.expressad.exoplayer.c.e r9, boolean r10) {
                r7 = this;
                com.tkay.expressad.exoplayer.h.b.f r0 = r7.b
                boolean r0 = r0.a()
                if (r0 == 0) goto La
                r8 = -3
                return r8
            La:
                com.tkay.expressad.exoplayer.h.x r0 = r7.c
                com.tkay.expressad.exoplayer.h.b.f r1 = r7.b
                boolean r4 = r1.c
                com.tkay.expressad.exoplayer.h.b.f r1 = r7.b
                long r5 = r1.b
                r1 = r8
                r2 = r9
                r3 = r10
                int r8 = r0.a(r1, r2, r3, r4, r5)
                r9 = -4
                if (r8 != r9) goto L21
                r7.d()
            L21:
                return r8
        }

        @Override
        public final boolean b() {
                r1 = this;
                com.tkay.expressad.exoplayer.h.b.f r0 = r1.b
                boolean r0 = r0.c
                if (r0 != 0) goto L19
                com.tkay.expressad.exoplayer.h.b.f r0 = r1.b
                boolean r0 = r0.a()
                if (r0 != 0) goto L17
                com.tkay.expressad.exoplayer.h.x r0 = r1.c
                boolean r0 = r0.c()
                if (r0 == 0) goto L17
                goto L19
            L17:
                r0 = 0
                return r0
            L19:
                r0 = 1
                return r0
        }

        @Override
        public final void c() {
                r0 = this;
                return
        }
    }

    public interface b<T extends com.tkay.expressad.exoplayer.h.b.g> {
        void a();
    }

    private f(int r1, int[] r2, com.tkay.expressad.exoplayer.m[] r3, T r4, com.tkay.expressad.exoplayer.h.z.a<com.tkay.expressad.exoplayer.h.b.f<T>> r5, com.tkay.expressad.exoplayer.j.b r6, long r7, int r9, com.tkay.expressad.exoplayer.h.t.a r10) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.e = r2
            r0.f = r3
            r0.h = r4
            r0.i = r5
            r0.j = r10
            r0.k = r9
            com.tkay.expressad.exoplayer.j.t r3 = new com.tkay.expressad.exoplayer.j.t
            java.lang.String r4 = "Loader:ChunkSampleStream"
            r3.<init>(r4)
            r0.l = r3
            com.tkay.expressad.exoplayer.h.b.e r3 = new com.tkay.expressad.exoplayer.h.b.e
            r3.<init>()
            r0.m = r3
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r0.n = r3
            java.util.List r3 = java.util.Collections.unmodifiableList(r3)
            r0.o = r3
            r3 = 0
            if (r2 != 0) goto L33
            r4 = r3
            goto L34
        L33:
            int r4 = r2.length
        L34:
            com.tkay.expressad.exoplayer.h.x[] r5 = new com.tkay.expressad.exoplayer.h.x[r4]
            r0.q = r5
            boolean[] r5 = new boolean[r4]
            r0.g = r5
            int r5 = r4 + 1
            int[] r9 = new int[r5]
            com.tkay.expressad.exoplayer.h.x[] r5 = new com.tkay.expressad.exoplayer.h.x[r5]
            com.tkay.expressad.exoplayer.h.x r10 = new com.tkay.expressad.exoplayer.h.x
            r10.<init>(r6)
            r0.p = r10
            r9[r3] = r1
            r5[r3] = r10
        L4d:
            if (r3 >= r4) goto L62
            com.tkay.expressad.exoplayer.h.x r1 = new com.tkay.expressad.exoplayer.h.x
            r1.<init>(r6)
            com.tkay.expressad.exoplayer.h.x[] r10 = r0.q
            r10[r3] = r1
            int r10 = r3 + 1
            r5[r10] = r1
            r1 = r2[r3]
            r9[r10] = r1
            r3 = r10
            goto L4d
        L62:
            com.tkay.expressad.exoplayer.h.b.b r1 = new com.tkay.expressad.exoplayer.h.b.b
            r1.<init>(r9, r5)
            r0.r = r1
            r0.u = r7
            r0.v = r7
            return
    }

    private int a(com.tkay.expressad.exoplayer.h.b.c r24, long r25, long r27, java.io.IOException r29) {
            r23 = this;
            r0 = r23
            r1 = r24
            long r17 = r24.d()
            boolean r2 = r1 instanceof com.tkay.expressad.exoplayer.h.b.a
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> r3 = r0.n
            int r3 = r3.size()
            r4 = 1
            int r3 = r3 - r4
            r5 = 0
            int r5 = (r17 > r5 ? 1 : (r17 == r5 ? 0 : -1))
            r21 = 0
            if (r5 == 0) goto L26
            if (r2 == 0) goto L26
            boolean r5 = r0.a(r3)
            if (r5 != 0) goto L23
            goto L26
        L23:
            r5 = r21
            goto L27
        L26:
            r5 = r4
        L27:
            T extends com.tkay.expressad.exoplayer.h.b.g r6 = r0.h
            boolean r6 = r6.f()
            if (r6 == 0) goto L57
            if (r5 != 0) goto L39
            java.lang.String r2 = "ChunkSampleStream"
            java.lang.String r3 = "Ignoring attempt to cancel non-cancelable load."
            android.util.Log.w(r2, r3)
            goto L57
        L39:
            if (r2 == 0) goto L54
            com.tkay.expressad.exoplayer.h.b.a r2 = r0.d(r3)
            if (r2 != r1) goto L43
            r2 = r4
            goto L45
        L43:
            r2 = r21
        L45:
            com.tkay.expressad.exoplayer.k.a.b(r2)
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> r2 = r0.n
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L54
            long r2 = r0.v
            r0.u = r2
        L54:
            r22 = r4
            goto L59
        L57:
            r22 = r21
        L59:
            com.tkay.expressad.exoplayer.h.t$a r2 = r0.j
            com.tkay.expressad.exoplayer.j.k r3 = r1.b
            int r4 = r1.c
            int r5 = r0.a
            com.tkay.expressad.exoplayer.m r6 = r1.d
            int r7 = r1.e
            java.lang.Object r8 = r1.f
            long r9 = r1.g
            long r11 = r1.h
            r13 = r25
            r15 = r27
            r19 = r29
            r20 = r22
            r2.a(r3, r4, r5, r6, r7, r8, r9, r11, r13, r15, r17, r19, r20)
            if (r22 == 0) goto L7f
            com.tkay.expressad.exoplayer.h.z$a<com.tkay.expressad.exoplayer.h.b.f<T extends com.tkay.expressad.exoplayer.h.b.g>> r1 = r0.i
            r1.a(r0)
            r1 = 2
            return r1
        L7f:
            return r21
    }

    private com.tkay.expressad.exoplayer.h.b.f<T>.a a(long r3, int r5) {
            r2 = this;
            r0 = 0
        L1:
            com.tkay.expressad.exoplayer.h.x[] r1 = r2.q
            int r1 = r1.length
            if (r0 >= r1) goto L34
            int[] r1 = r2.e
            r1 = r1[r0]
            if (r1 != r5) goto L31
            boolean[] r5 = r2.g
            boolean r5 = r5[r0]
            r1 = 1
            r5 = r5 ^ r1
            com.tkay.expressad.exoplayer.k.a.b(r5)
            boolean[] r5 = r2.g
            r5[r0] = r1
            com.tkay.expressad.exoplayer.h.x[] r5 = r2.q
            r5 = r5[r0]
            r5.i()
            com.tkay.expressad.exoplayer.h.x[] r5 = r2.q
            r5 = r5[r0]
            r5.a(r3, r1)
            com.tkay.expressad.exoplayer.h.b.f$a r3 = new com.tkay.expressad.exoplayer.h.b.f$a
            com.tkay.expressad.exoplayer.h.x[] r4 = r2.q
            r4 = r4[r0]
            r3.<init>(r2, r2, r4, r0)
            return r3
        L31:
            int r0 = r0 + 1
            goto L1
        L34:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            r3.<init>()
            throw r3
    }

    private void a(int r3, int r4) {
            r2 = this;
            int r0 = r3 - r4
            r1 = 0
            int r0 = r2.b(r0, r1)
            r1 = 1
            if (r4 != r1) goto Lc
            r3 = r0
            goto L11
        Lc:
            int r3 = r3 - r1
            int r3 = r2.b(r3, r0)
        L11:
            if (r0 > r3) goto L19
            r2.c(r0)
            int r0 = r0 + 1
            goto L11
        L19:
            return
    }

    private void a(long r6, boolean r8) {
            r5 = this;
            com.tkay.expressad.exoplayer.h.x r0 = r5.p
            int r0 = r0.d()
            com.tkay.expressad.exoplayer.h.x r1 = r5.p
            r2 = 1
            r1.a(r6, r8, r2)
            com.tkay.expressad.exoplayer.h.x r6 = r5.p
            int r6 = r6.d()
            if (r6 <= r0) goto L38
            com.tkay.expressad.exoplayer.h.x r7 = r5.p
            long r0 = r7.h()
            r7 = 0
            r2 = r7
        L1c:
            com.tkay.expressad.exoplayer.h.x[] r3 = r5.q
            int r4 = r3.length
            if (r2 >= r4) goto L2d
            r3 = r3[r2]
            boolean[] r4 = r5.g
            boolean r4 = r4[r2]
            r3.a(r0, r8, r4)
            int r2 = r2 + 1
            goto L1c
        L2d:
            int r6 = r5.b(r6, r7)
            if (r6 <= 0) goto L38
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> r8 = r5.n
            com.tkay.expressad.exoplayer.k.af.a(r8, r7, r6)
        L38:
            return
    }

    private void a(com.tkay.expressad.exoplayer.h.b.c r20, long r21, long r23) {
            r19 = this;
            r0 = r19
            r1 = r20
            r13 = r21
            r15 = r23
            com.tkay.expressad.exoplayer.h.t$a r2 = r0.j
            com.tkay.expressad.exoplayer.j.k r3 = r1.b
            int r4 = r1.c
            int r5 = r0.a
            com.tkay.expressad.exoplayer.m r6 = r1.d
            int r7 = r1.e
            java.lang.Object r8 = r1.f
            long r9 = r1.g
            long r11 = r1.h
            long r17 = r20.d()
            r2.a(r3, r4, r5, r6, r7, r8, r9, r11, r13, r15, r17)
            com.tkay.expressad.exoplayer.h.z$a<com.tkay.expressad.exoplayer.h.b.f<T extends com.tkay.expressad.exoplayer.h.b.g>> r1 = r0.i
            r1.a(r0)
            return
    }

    private void a(com.tkay.expressad.exoplayer.h.b.c r20, long r21, long r23, boolean r25) {
            r19 = this;
            r0 = r19
            r1 = r20
            r13 = r21
            r15 = r23
            com.tkay.expressad.exoplayer.h.t$a r2 = r0.j
            com.tkay.expressad.exoplayer.j.k r3 = r1.b
            int r4 = r1.c
            int r5 = r0.a
            com.tkay.expressad.exoplayer.m r6 = r1.d
            int r7 = r1.e
            java.lang.Object r8 = r1.f
            long r9 = r1.g
            long r11 = r1.h
            long r17 = r20.d()
            r2.b(r3, r4, r5, r6, r7, r8, r9, r11, r13, r15, r17)
            if (r25 != 0) goto L3b
            com.tkay.expressad.exoplayer.h.x r1 = r0.p
            r1.a()
            com.tkay.expressad.exoplayer.h.x[] r1 = r0.q
            int r2 = r1.length
            r3 = 0
        L2c:
            if (r3 >= r2) goto L36
            r4 = r1[r3]
            r4.a()
            int r3 = r3 + 1
            goto L2c
        L36:
            com.tkay.expressad.exoplayer.h.z$a<com.tkay.expressad.exoplayer.h.b.f<T extends com.tkay.expressad.exoplayer.h.b.g>> r1 = r0.i
            r1.a(r0)
        L3b:
            return
    }

    private void a(com.tkay.expressad.exoplayer.h.b.f.b<T> r4) {
            r3 = this;
            r3.t = r4
            com.tkay.expressad.exoplayer.h.x r4 = r3.p
            r4.j()
            com.tkay.expressad.exoplayer.h.x[] r4 = r3.q
            int r0 = r4.length
            r1 = 0
        Lb:
            if (r1 >= r0) goto L15
            r2 = r4[r1]
            r2.j()
            int r1 = r1 + 1
            goto Lb
        L15:
            com.tkay.expressad.exoplayer.j.t r4 = r3.l
            r4.a(r3)
            return
    }

    private boolean a(int r6) {
            r5 = this;
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> r0 = r5.n
            java.lang.Object r6 = r0.get(r6)
            com.tkay.expressad.exoplayer.h.b.a r6 = (com.tkay.expressad.exoplayer.h.b.a) r6
            com.tkay.expressad.exoplayer.h.x r0 = r5.p
            int r0 = r0.e()
            r1 = 0
            int r2 = r6.a(r1)
            r3 = 1
            if (r0 <= r2) goto L17
            return r3
        L17:
            r0 = r1
        L18:
            com.tkay.expressad.exoplayer.h.x[] r2 = r5.q
            int r4 = r2.length
            if (r0 >= r4) goto L2c
            r2 = r2[r0]
            int r2 = r2.e()
            int r0 = r0 + 1
            int r4 = r6.a(r0)
            if (r2 <= r4) goto L18
            return r3
        L2c:
            return r1
    }

    private static boolean a(com.tkay.expressad.exoplayer.h.b.c r0) {
            boolean r0 = r0 instanceof com.tkay.expressad.exoplayer.h.b.a
            return r0
    }

    static boolean[] a(com.tkay.expressad.exoplayer.h.b.f r0) {
            boolean[] r0 = r0.g
            return r0
    }

    private int b(int r3, int r4) {
            r2 = this;
        L0:
            int r4 = r4 + 1
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> r0 = r2.n
            int r0 = r0.size()
            if (r4 >= r0) goto L1c
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> r0 = r2.n
            java.lang.Object r0 = r0.get(r4)
            com.tkay.expressad.exoplayer.h.b.a r0 = (com.tkay.expressad.exoplayer.h.b.a) r0
            r1 = 0
            int r0 = r0.a(r1)
            if (r0 <= r3) goto L0
            int r4 = r4 + (-1)
            return r4
        L1c:
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> r3 = r2.n
            int r3 = r3.size()
            int r3 = r3 + (-1)
            return r3
    }

    private void b(int r3) {
            r2 = this;
            r0 = 0
            int r3 = r2.b(r3, r0)
            if (r3 <= 0) goto Lc
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> r1 = r2.n
            com.tkay.expressad.exoplayer.k.af.a(r1, r0, r3)
        Lc:
            return
    }

    private void b(long r10) {
            r9 = this;
            r9.v = r10
            com.tkay.expressad.exoplayer.h.x r0 = r9.p
            r0.i()
            boolean r0 = r9.a()
            r1 = 0
            if (r0 == 0) goto L10
            r0 = r1
            goto L67
        L10:
            r0 = 0
            r2 = r1
        L12:
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> r3 = r9.n
            int r3 = r3.size()
            if (r2 >= r3) goto L3a
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> r3 = r9.n
            java.lang.Object r3 = r3.get(r2)
            com.tkay.expressad.exoplayer.h.b.a r3 = (com.tkay.expressad.exoplayer.h.b.a) r3
            long r4 = r3.g
            int r4 = (r4 > r10 ? 1 : (r4 == r10 ? 0 : -1))
            if (r4 != 0) goto L35
            long r5 = r3.a
            r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 != 0) goto L35
            r0 = r3
            goto L3a
        L35:
            if (r4 > 0) goto L3a
            int r2 = r2 + 1
            goto L12
        L3a:
            if (r0 == 0) goto L4b
            com.tkay.expressad.exoplayer.h.x r2 = r9.p
            int r0 = r0.a(r1)
            boolean r0 = r2.b(r0)
            r2 = -9223372036854775808
            r9.b = r2
            goto L67
        L4b:
            com.tkay.expressad.exoplayer.h.x r0 = r9.p
            long r2 = r9.e()
            int r2 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            r3 = 1
            if (r2 >= 0) goto L58
            r2 = r3
            goto L59
        L58:
            r2 = r1
        L59:
            int r0 = r0.a(r10, r2)
            r2 = -1
            if (r0 == r2) goto L62
            r0 = r3
            goto L63
        L62:
            r0 = r1
        L63:
            long r2 = r9.v
            r9.b = r2
        L67:
            if (r0 == 0) goto L7b
            com.tkay.expressad.exoplayer.h.x[] r0 = r9.q
            int r2 = r0.length
            r3 = r1
        L6d:
            if (r3 >= r2) goto L7a
            r4 = r0[r3]
            r4.i()
            r4.a(r10, r1)
            int r3 = r3 + 1
            goto L6d
        L7a:
            return
        L7b:
            r9.u = r10
            r9.c = r1
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> r10 = r9.n
            r10.clear()
            com.tkay.expressad.exoplayer.j.t r10 = r9.l
            boolean r10 = r10.a()
            if (r10 == 0) goto L92
            com.tkay.expressad.exoplayer.j.t r10 = r9.l
            r10.b()
            return
        L92:
            com.tkay.expressad.exoplayer.h.x r10 = r9.p
            r10.a()
            com.tkay.expressad.exoplayer.h.x[] r10 = r9.q
            int r11 = r10.length
        L9a:
            if (r1 >= r11) goto La4
            r0 = r10[r1]
            r0.a()
            int r1 = r1 + 1
            goto L9a
        La4:
            return
    }

    static int[] b(com.tkay.expressad.exoplayer.h.b.f r0) {
            int[] r0 = r0.e
            return r0
    }

    private void c(int r9) {
            r8 = this;
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> r0 = r8.n
            java.lang.Object r9 = r0.get(r9)
            com.tkay.expressad.exoplayer.h.b.a r9 = (com.tkay.expressad.exoplayer.h.b.a) r9
            com.tkay.expressad.exoplayer.m r7 = r9.d
            com.tkay.expressad.exoplayer.m r0 = r8.s
            boolean r0 = r7.equals(r0)
            if (r0 != 0) goto L20
            com.tkay.expressad.exoplayer.h.t$a r0 = r8.j
            int r1 = r8.a
            int r3 = r9.e
            java.lang.Object r4 = r9.f
            long r5 = r9.g
            r2 = r7
            r0.a(r1, r2, r3, r4, r5)
        L20:
            r8.s = r7
            return
    }

    static com.tkay.expressad.exoplayer.m[] c(com.tkay.expressad.exoplayer.h.b.f r0) {
            com.tkay.expressad.exoplayer.m[] r0 = r0.f
            return r0
    }

    static long d(com.tkay.expressad.exoplayer.h.b.f r2) {
            long r0 = r2.v
            return r0
    }

    private com.tkay.expressad.exoplayer.h.b.a d(int r4) {
            r3 = this;
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> r0 = r3.n
            java.lang.Object r0 = r0.get(r4)
            com.tkay.expressad.exoplayer.h.b.a r0 = (com.tkay.expressad.exoplayer.h.b.a) r0
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> r1 = r3.n
            int r2 = r1.size()
            com.tkay.expressad.exoplayer.k.af.a(r1, r4, r2)
            com.tkay.expressad.exoplayer.h.x r4 = r3.p
            r1 = 0
            int r2 = r0.a(r1)
            r4.a(r2)
        L1b:
            com.tkay.expressad.exoplayer.h.x[] r4 = r3.q
            int r2 = r4.length
            if (r1 >= r2) goto L2c
            r4 = r4[r1]
            int r1 = r1 + 1
            int r2 = r0.a(r1)
            r4.a(r2)
            goto L1b
        L2c:
            return r0
    }

    static com.tkay.expressad.exoplayer.h.t.a e(com.tkay.expressad.exoplayer.h.b.f r0) {
            com.tkay.expressad.exoplayer.h.t$a r0 = r0.j
            return r0
    }

    private T f() {
            r1 = this;
            T extends com.tkay.expressad.exoplayer.h.b.g r0 = r1.h
            return r0
    }

    private long h() {
            r2 = this;
            T extends com.tkay.expressad.exoplayer.h.b.g r0 = r2.h
            long r0 = r0.a()
            return r0
    }

    private void i() {
            r4 = this;
            r0 = 0
            r4.t = r0
            com.tkay.expressad.exoplayer.h.x r0 = r4.p
            r0.j()
            com.tkay.expressad.exoplayer.h.x[] r0 = r4.q
            int r1 = r0.length
            r2 = 0
        Lc:
            if (r2 >= r1) goto L16
            r3 = r0[r2]
            r3.j()
            int r2 = r2 + 1
            goto Lc
        L16:
            com.tkay.expressad.exoplayer.j.t r0 = r4.l
            r0.a(r4)
            return
    }

    private com.tkay.expressad.exoplayer.h.b.a j() {
            r2 = this;
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> r0 = r2.n
            int r1 = r0.size()
            int r1 = r1 + (-1)
            java.lang.Object r0 = r0.get(r1)
            com.tkay.expressad.exoplayer.h.b.a r0 = (com.tkay.expressad.exoplayer.h.b.a) r0
            return r0
    }

    @Override
    public final int a(long r5) {
            r4 = this;
            boolean r0 = r4.a()
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            boolean r0 = r4.c
            if (r0 == 0) goto L1d
            com.tkay.expressad.exoplayer.h.x r0 = r4.p
            long r2 = r0.g()
            int r0 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r0 <= 0) goto L1d
            com.tkay.expressad.exoplayer.h.x r5 = r4.p
            int r1 = r5.k()
            goto L29
        L1d:
            com.tkay.expressad.exoplayer.h.x r0 = r4.p
            r2 = 1
            int r5 = r0.a(r5, r2)
            r6 = -1
            if (r5 != r6) goto L28
            goto L29
        L28:
            r1 = r5
        L29:
            if (r1 <= 0) goto L34
            com.tkay.expressad.exoplayer.h.x r5 = r4.p
            int r5 = r5.e()
            r4.a(r5, r1)
        L34:
            return r1
    }

    @Override
    public final int a(com.tkay.expressad.exoplayer.j.t.c r24, long r25, long r27, java.io.IOException r29) {
            r23 = this;
            r0 = r23
            r1 = r24
            com.tkay.expressad.exoplayer.h.b.c r1 = (com.tkay.expressad.exoplayer.h.b.c) r1
            long r17 = r1.d()
            boolean r2 = r1 instanceof com.tkay.expressad.exoplayer.h.b.a
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> r3 = r0.n
            int r3 = r3.size()
            r4 = 1
            int r3 = r3 - r4
            r5 = 0
            int r5 = (r17 > r5 ? 1 : (r17 == r5 ? 0 : -1))
            r21 = 0
            if (r5 == 0) goto L28
            if (r2 == 0) goto L28
            boolean r5 = r0.a(r3)
            if (r5 != 0) goto L25
            goto L28
        L25:
            r5 = r21
            goto L29
        L28:
            r5 = r4
        L29:
            T extends com.tkay.expressad.exoplayer.h.b.g r6 = r0.h
            boolean r6 = r6.f()
            if (r6 == 0) goto L59
            if (r5 != 0) goto L3b
            java.lang.String r2 = "ChunkSampleStream"
            java.lang.String r3 = "Ignoring attempt to cancel non-cancelable load."
            android.util.Log.w(r2, r3)
            goto L59
        L3b:
            if (r2 == 0) goto L56
            com.tkay.expressad.exoplayer.h.b.a r2 = r0.d(r3)
            if (r2 != r1) goto L45
            r2 = r4
            goto L47
        L45:
            r2 = r21
        L47:
            com.tkay.expressad.exoplayer.k.a.b(r2)
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> r2 = r0.n
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L56
            long r2 = r0.v
            r0.u = r2
        L56:
            r22 = r4
            goto L5b
        L59:
            r22 = r21
        L5b:
            com.tkay.expressad.exoplayer.h.t$a r2 = r0.j
            com.tkay.expressad.exoplayer.j.k r3 = r1.b
            int r4 = r1.c
            int r5 = r0.a
            com.tkay.expressad.exoplayer.m r6 = r1.d
            int r7 = r1.e
            java.lang.Object r8 = r1.f
            long r9 = r1.g
            long r11 = r1.h
            r13 = r25
            r15 = r27
            r19 = r29
            r20 = r22
            r2.a(r3, r4, r5, r6, r7, r8, r9, r11, r13, r15, r17, r19, r20)
            if (r22 == 0) goto L81
            com.tkay.expressad.exoplayer.h.z$a<com.tkay.expressad.exoplayer.h.b.f<T extends com.tkay.expressad.exoplayer.h.b.g>> r1 = r0.i
            r1.a(r0)
            r1 = 2
            return r1
        L81:
            return r21
    }

    @Override
    public final int a(com.tkay.expressad.exoplayer.n r8, com.tkay.expressad.exoplayer.c.e r9, boolean r10) {
            r7 = this;
            boolean r0 = r7.a()
            if (r0 == 0) goto L8
            r8 = -3
            return r8
        L8:
            com.tkay.expressad.exoplayer.h.x r0 = r7.p
            boolean r4 = r7.c
            long r5 = r7.b
            r1 = r8
            r2 = r9
            r3 = r10
            int r8 = r0.a(r1, r2, r3, r4, r5)
            r9 = -4
            if (r8 != r9) goto L22
            com.tkay.expressad.exoplayer.h.x r9 = r7.p
            int r9 = r9.e()
            r10 = 1
            r7.a(r9, r10)
        L22:
            return r8
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.j.t.c r19, long r20, long r22) {
            r18 = this;
            r0 = r18
            r12 = r20
            r14 = r22
            r10 = r19
            com.tkay.expressad.exoplayer.h.b.c r10 = (com.tkay.expressad.exoplayer.h.b.c) r10
            com.tkay.expressad.exoplayer.h.t$a r1 = r0.j
            com.tkay.expressad.exoplayer.j.k r2 = r10.b
            int r3 = r10.c
            int r4 = r0.a
            com.tkay.expressad.exoplayer.m r5 = r10.d
            int r6 = r10.e
            java.lang.Object r7 = r10.f
            long r8 = r10.g
            r19 = r1
            long r0 = r10.h
            r16 = r10
            r10 = r0
            long r16 = r16.d()
            r1 = r19
            r1.a(r2, r3, r4, r5, r6, r7, r8, r10, r12, r14, r16)
            r0 = r18
            com.tkay.expressad.exoplayer.h.z$a<com.tkay.expressad.exoplayer.h.b.f<T extends com.tkay.expressad.exoplayer.h.b.g>> r1 = r0.i
            r1.a(r0)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.j.t.c r19, long r20, long r22, boolean r24) {
            r18 = this;
            r0 = r18
            r12 = r20
            r14 = r22
            r10 = r19
            com.tkay.expressad.exoplayer.h.b.c r10 = (com.tkay.expressad.exoplayer.h.b.c) r10
            com.tkay.expressad.exoplayer.h.t$a r1 = r0.j
            com.tkay.expressad.exoplayer.j.k r2 = r10.b
            int r3 = r10.c
            int r4 = r0.a
            com.tkay.expressad.exoplayer.m r5 = r10.d
            int r6 = r10.e
            java.lang.Object r7 = r10.f
            long r8 = r10.g
            r19 = r1
            long r0 = r10.h
            r16 = r10
            r10 = r0
            long r16 = r16.d()
            r1 = r19
            r1.b(r2, r3, r4, r5, r6, r7, r8, r10, r12, r14, r16)
            r0 = r18
            if (r24 != 0) goto L46
            com.tkay.expressad.exoplayer.h.x r1 = r0.p
            r1.a()
            com.tkay.expressad.exoplayer.h.x[] r1 = r0.q
            int r2 = r1.length
            r3 = 0
        L37:
            if (r3 >= r2) goto L41
            r4 = r1[r3]
            r4.a()
            int r3 = r3 + 1
            goto L37
        L41:
            com.tkay.expressad.exoplayer.h.z$a<com.tkay.expressad.exoplayer.h.b.f<T extends com.tkay.expressad.exoplayer.h.b.g>> r1 = r0.i
            r1.a(r0)
        L46:
            return
    }

    final boolean a() {
            r4 = this;
            long r0 = r4.u
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Ld
            r0 = 1
            return r0
        Ld:
            r0 = 0
            return r0
    }

    @Override
    public final void a_(long r7) {
            r6 = this;
            com.tkay.expressad.exoplayer.j.t r7 = r6.l
            boolean r7 = r7.a()
            if (r7 != 0) goto L50
            boolean r7 = r6.a()
            if (r7 == 0) goto Lf
            goto L50
        Lf:
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> r7 = r6.n
            int r7 = r7.size()
            T extends com.tkay.expressad.exoplayer.h.b.g r8 = r6.h
            int r8 = r8.c()
            if (r7 > r8) goto L1e
            return
        L1e:
            if (r8 >= r7) goto L2a
            boolean r0 = r6.a(r8)
            if (r0 != 0) goto L27
            goto L2b
        L27:
            int r8 = r8 + 1
            goto L1e
        L2a:
            r8 = r7
        L2b:
            if (r8 != r7) goto L2e
            return
        L2e:
            com.tkay.expressad.exoplayer.h.b.a r7 = r6.j()
            long r4 = r7.h
            com.tkay.expressad.exoplayer.h.b.a r7 = r6.d(r8)
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> r8 = r6.n
            boolean r8 = r8.isEmpty()
            if (r8 == 0) goto L44
            long r0 = r6.v
            r6.u = r0
        L44:
            r8 = 0
            r6.c = r8
            com.tkay.expressad.exoplayer.h.t$a r0 = r6.j
            int r1 = r6.a
            long r2 = r7.g
            r0.a(r1, r2, r4)
        L50:
            return
    }

    @Override
    public final boolean b() {
            r1 = this;
            boolean r0 = r1.c
            if (r0 != 0) goto L15
            boolean r0 = r1.a()
            if (r0 != 0) goto L13
            com.tkay.expressad.exoplayer.h.x r0 = r1.p
            boolean r0 = r0.c()
            if (r0 == 0) goto L13
            goto L15
        L13:
            r0 = 0
            return r0
        L15:
            r0 = 1
            return r0
    }

    @Override
    public final void c() {
            r1 = this;
            com.tkay.expressad.exoplayer.j.t r0 = r1.l
            r0.c()
            com.tkay.expressad.exoplayer.j.t r0 = r1.l
            r0.a()
            return
    }

    @Override
    public final boolean c(long r22) {
            r21 = this;
            r0 = r21
            boolean r1 = r0.c
            r2 = 0
            if (r1 != 0) goto L81
            com.tkay.expressad.exoplayer.j.t r1 = r0.l
            boolean r1 = r1.a()
            if (r1 == 0) goto L11
            goto L81
        L11:
            boolean r1 = r21.a()
            if (r1 != 0) goto L1a
            r21.j()
        L1a:
            com.tkay.expressad.exoplayer.h.b.e r3 = r0.m
            boolean r3 = r3.b
            com.tkay.expressad.exoplayer.h.b.e r4 = r0.m
            com.tkay.expressad.exoplayer.h.b.c r4 = r4.a
            com.tkay.expressad.exoplayer.h.b.e r5 = r0.m
            r6 = 0
            r5.a = r6
            r5.b = r2
            r5 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r7 = 1
            if (r3 == 0) goto L36
            r0.u = r5
            r0.c = r7
            return r7
        L36:
            if (r4 != 0) goto L39
            return r2
        L39:
            boolean r3 = r4 instanceof com.tkay.expressad.exoplayer.h.b.a
            if (r3 == 0) goto L60
            r3 = r4
            com.tkay.expressad.exoplayer.h.b.a r3 = (com.tkay.expressad.exoplayer.h.b.a) r3
            if (r1 == 0) goto L56
            long r8 = r3.g
            long r10 = r0.u
            int r1 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r1 != 0) goto L4b
            r2 = r7
        L4b:
            if (r2 == 0) goto L50
            r1 = -9223372036854775808
            goto L52
        L50:
            long r1 = r0.u
        L52:
            r0.b = r1
            r0.u = r5
        L56:
            com.tkay.expressad.exoplayer.h.b.b r1 = r0.r
            r3.a(r1)
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> r1 = r0.n
            r1.add(r3)
        L60:
            com.tkay.expressad.exoplayer.j.t r1 = r0.l
            int r2 = r0.k
            long r19 = r1.a(r4, r0, r2)
            com.tkay.expressad.exoplayer.h.t$a r8 = r0.j
            com.tkay.expressad.exoplayer.j.k r9 = r4.b
            int r10 = r4.c
            int r11 = r0.a
            com.tkay.expressad.exoplayer.m r12 = r4.d
            int r13 = r4.e
            java.lang.Object r14 = r4.f
            long r1 = r4.g
            long r3 = r4.h
            r15 = r1
            r17 = r3
            r8.a(r9, r10, r11, r12, r13, r14, r15, r17, r19)
            return r7
        L81:
            return r2
    }

    @Override
    public final long d() {
            r4 = this;
            boolean r0 = r4.c
            if (r0 == 0) goto L7
            r0 = -9223372036854775808
            return r0
        L7:
            boolean r0 = r4.a()
            if (r0 == 0) goto L10
            long r0 = r4.u
            return r0
        L10:
            long r0 = r4.v
            com.tkay.expressad.exoplayer.h.b.a r2 = r4.j()
            boolean r3 = r2.f()
            if (r3 == 0) goto L1d
            goto L36
        L1d:
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> r2 = r4.n
            int r2 = r2.size()
            r3 = 1
            if (r2 <= r3) goto L35
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.b.a> r2 = r4.n
            int r3 = r2.size()
            int r3 = r3 + (-2)
            java.lang.Object r2 = r2.get(r3)
            com.tkay.expressad.exoplayer.h.b.a r2 = (com.tkay.expressad.exoplayer.h.b.a) r2
            goto L36
        L35:
            r2 = 0
        L36:
            if (r2 == 0) goto L3e
            long r2 = r2.h
            long r0 = java.lang.Math.max(r0, r2)
        L3e:
            com.tkay.expressad.exoplayer.h.x r2 = r4.p
            long r2 = r2.g()
            long r0 = java.lang.Math.max(r0, r2)
            return r0
    }

    @Override
    public final long e() {
            r2 = this;
            boolean r0 = r2.a()
            if (r0 == 0) goto L9
            long r0 = r2.u
            return r0
        L9:
            boolean r0 = r2.c
            if (r0 == 0) goto L10
            r0 = -9223372036854775808
            return r0
        L10:
            com.tkay.expressad.exoplayer.h.b.a r0 = r2.j()
            long r0 = r0.h
            return r0
    }

    @Override
    public final void g() {
            r4 = this;
            com.tkay.expressad.exoplayer.h.x r0 = r4.p
            r0.a()
            com.tkay.expressad.exoplayer.h.x[] r0 = r4.q
            int r1 = r0.length
            r2 = 0
        L9:
            if (r2 >= r1) goto L13
            r3 = r0[r2]
            r3.a()
            int r2 = r2 + 1
            goto L9
        L13:
            return
    }
}
