package com.tkay.expressad.exoplayer.e.a;

public final class e implements com.tkay.expressad.exoplayer.e.e {
    public static final com.tkay.expressad.exoplayer.e.h d = null;
    public static final int e = 1;
    public static final int f = 2;
    public static final int g = 4;
    public static final int h = 16;
    private static final int i = 8;
    private static final java.lang.String j = "FragmentedMp4Extractor";
    private static final int k = 0;
    private static final byte[] l = null;
    private static final com.tkay.expressad.exoplayer.m m = null;
    private static final int n = 0;
    private static final int o = 1;
    private static final int p = 2;
    private static final int q = 3;
    private static final int r = 4;
    private final com.tkay.expressad.exoplayer.k.ac A;
    private final com.tkay.expressad.exoplayer.k.s B;
    private final byte[] C;
    private final java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a.a> D;
    private final java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.e.b> E;
    private final com.tkay.expressad.exoplayer.e.m F;
    private int G;
    private int H;
    private long I;
    private int J;
    private com.tkay.expressad.exoplayer.k.s K;
    private long L;
    private int M;
    private long N;
    private long O;
    private long P;
    private com.tkay.expressad.exoplayer.e.a.e.c Q;
    private int R;
    private int S;
    private int T;
    private boolean U;
    private com.tkay.expressad.exoplayer.e.g V;
    private com.tkay.expressad.exoplayer.e.m[] W;
    private com.tkay.expressad.exoplayer.e.m[] X;
    private boolean Y;
    private final int s;
    private final com.tkay.expressad.exoplayer.e.a.j t;
    private final java.util.List<com.tkay.expressad.exoplayer.m> u;
    private final com.tkay.expressad.exoplayer.d.e v;
    private final android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e.c> w;
    private final com.tkay.expressad.exoplayer.k.s x;
    private final com.tkay.expressad.exoplayer.k.s y;
    private final com.tkay.expressad.exoplayer.k.s z;


    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface a {
    }

    private static final class b {
        public final long a;
        public final int b;

        public b(long r1, int r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r3
                return
        }
    }

    private static final class c {
        public final com.tkay.expressad.exoplayer.e.m a;
        public final com.tkay.expressad.exoplayer.e.a.l b;
        public com.tkay.expressad.exoplayer.e.a.j c;
        public com.tkay.expressad.exoplayer.e.a.c d;
        public int e;
        public int f;
        public int g;
        public int h;
        private final com.tkay.expressad.exoplayer.k.s i;
        private final com.tkay.expressad.exoplayer.k.s j;

        public c(com.tkay.expressad.exoplayer.e.m r2) {
                r1 = this;
                r1.<init>()
                r1.a = r2
                com.tkay.expressad.exoplayer.e.a.l r2 = new com.tkay.expressad.exoplayer.e.a.l
                r2.<init>()
                r1.b = r2
                com.tkay.expressad.exoplayer.k.s r2 = new com.tkay.expressad.exoplayer.k.s
                r0 = 1
                r2.<init>(r0)
                r1.i = r2
                com.tkay.expressad.exoplayer.k.s r2 = new com.tkay.expressad.exoplayer.k.s
                r2.<init>()
                r1.j = r2
                return
        }

        static void a(com.tkay.expressad.exoplayer.e.a.e.c r3) {
                com.tkay.expressad.exoplayer.e.a.l r0 = r3.b
                boolean r0 = r0.m
                if (r0 == 0) goto L2a
                com.tkay.expressad.exoplayer.e.a.l r0 = r3.b
                com.tkay.expressad.exoplayer.k.s r0 = r0.q
                com.tkay.expressad.exoplayer.e.a.k r1 = r3.e()
                int r2 = r1.d
                if (r2 == 0) goto L17
                int r1 = r1.d
                r0.d(r1)
            L17:
                com.tkay.expressad.exoplayer.e.a.l r1 = r3.b
                boolean[] r1 = r1.n
                int r3 = r3.e
                boolean r3 = r1[r3]
                if (r3 == 0) goto L2a
                int r3 = r0.e()
                int r3 = r3 * 6
                r0.d(r3)
            L2a:
                return
        }

        private void d() {
                r3 = this;
                com.tkay.expressad.exoplayer.e.a.l r0 = r3.b
                boolean r0 = r0.m
                if (r0 != 0) goto L7
                return
            L7:
                com.tkay.expressad.exoplayer.e.a.l r0 = r3.b
                com.tkay.expressad.exoplayer.k.s r0 = r0.q
                com.tkay.expressad.exoplayer.e.a.k r1 = r3.e()
                int r2 = r1.d
                if (r2 == 0) goto L18
                int r1 = r1.d
                r0.d(r1)
            L18:
                com.tkay.expressad.exoplayer.e.a.l r1 = r3.b
                boolean[] r1 = r1.n
                int r2 = r3.e
                boolean r1 = r1[r2]
                if (r1 == 0) goto L2b
                int r1 = r0.e()
                int r1 = r1 * 6
                r0.d(r1)
            L2b:
                return
        }

        private com.tkay.expressad.exoplayer.e.a.k e() {
                r2 = this;
                com.tkay.expressad.exoplayer.e.a.l r0 = r2.b
                com.tkay.expressad.exoplayer.e.a.c r0 = r0.a
                int r0 = r0.a
                com.tkay.expressad.exoplayer.e.a.l r1 = r2.b
                com.tkay.expressad.exoplayer.e.a.k r1 = r1.o
                if (r1 == 0) goto L11
                com.tkay.expressad.exoplayer.e.a.l r0 = r2.b
                com.tkay.expressad.exoplayer.e.a.k r0 = r0.o
                return r0
            L11:
                com.tkay.expressad.exoplayer.e.a.j r1 = r2.c
                com.tkay.expressad.exoplayer.e.a.k r0 = r1.a(r0)
                return r0
        }

        public final void a() {
                r1 = this;
                com.tkay.expressad.exoplayer.e.a.l r0 = r1.b
                r0.a()
                r0 = 0
                r1.e = r0
                r1.g = r0
                r1.f = r0
                r1.h = r0
                return
        }

        public final void a(long r4) {
                r3 = this;
                long r4 = com.tkay.expressad.exoplayer.b.a(r4)
                int r0 = r3.e
            L6:
                com.tkay.expressad.exoplayer.e.a.l r1 = r3.b
                int r1 = r1.f
                if (r0 >= r1) goto L23
                com.tkay.expressad.exoplayer.e.a.l r1 = r3.b
                long r1 = r1.b(r0)
                int r1 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
                if (r1 >= 0) goto L23
                com.tkay.expressad.exoplayer.e.a.l r1 = r3.b
                boolean[] r1 = r1.l
                boolean r1 = r1[r0]
                if (r1 == 0) goto L20
                r3.h = r0
            L20:
                int r0 = r0 + 1
                goto L6
            L23:
                return
        }

        public final void a(com.tkay.expressad.exoplayer.d.e r4) {
                r3 = this;
                com.tkay.expressad.exoplayer.e.a.j r0 = r3.c
                com.tkay.expressad.exoplayer.e.a.l r1 = r3.b
                com.tkay.expressad.exoplayer.e.a.c r1 = r1.a
                int r1 = r1.a
                com.tkay.expressad.exoplayer.e.a.k r0 = r0.a(r1)
                if (r0 == 0) goto L11
                java.lang.String r0 = r0.b
                goto L12
            L11:
                r0 = 0
            L12:
                com.tkay.expressad.exoplayer.e.m r1 = r3.a
                com.tkay.expressad.exoplayer.e.a.j r2 = r3.c
                com.tkay.expressad.exoplayer.m r2 = r2.h
                com.tkay.expressad.exoplayer.d.e r4 = r4.a(r0)
                com.tkay.expressad.exoplayer.m r4 = r2.a(r4)
                r1.a(r4)
                return
        }

        public final void a(com.tkay.expressad.exoplayer.e.a.j r2, com.tkay.expressad.exoplayer.e.a.c r3) {
                r1 = this;
                java.lang.Object r0 = com.tkay.expressad.exoplayer.k.a.a(r2)
                com.tkay.expressad.exoplayer.e.a.j r0 = (com.tkay.expressad.exoplayer.e.a.j) r0
                r1.c = r0
                java.lang.Object r3 = com.tkay.expressad.exoplayer.k.a.a(r3)
                com.tkay.expressad.exoplayer.e.a.c r3 = (com.tkay.expressad.exoplayer.e.a.c) r3
                r1.d = r3
                com.tkay.expressad.exoplayer.e.m r3 = r1.a
                com.tkay.expressad.exoplayer.m r2 = r2.h
                r3.a(r2)
                r1.a()
                return
        }

        public final boolean b() {
                r4 = this;
                int r0 = r4.e
                r1 = 1
                int r0 = r0 + r1
                r4.e = r0
                int r0 = r4.f
                int r0 = r0 + r1
                r4.f = r0
                com.tkay.expressad.exoplayer.e.a.l r2 = r4.b
                int[] r2 = r2.h
                int r3 = r4.g
                r2 = r2[r3]
                if (r0 != r2) goto L1c
                int r3 = r3 + r1
                r4.g = r3
                r0 = 0
                r4.f = r0
                return r0
            L1c:
                return r1
        }

        public final int c() {
                r6 = this;
                com.tkay.expressad.exoplayer.e.a.l r0 = r6.b
                boolean r0 = r0.m
                r1 = 0
                if (r0 != 0) goto L8
                return r1
            L8:
                com.tkay.expressad.exoplayer.e.a.k r0 = r6.e()
                int r2 = r0.d
                if (r2 == 0) goto L17
                com.tkay.expressad.exoplayer.e.a.l r2 = r6.b
                com.tkay.expressad.exoplayer.k.s r2 = r2.q
                int r0 = r0.d
                goto L22
            L17:
                byte[] r0 = r0.e
                com.tkay.expressad.exoplayer.k.s r2 = r6.j
                int r3 = r0.length
                r2.a(r0, r3)
                com.tkay.expressad.exoplayer.k.s r2 = r6.j
                int r0 = r0.length
            L22:
                com.tkay.expressad.exoplayer.e.a.l r3 = r6.b
                boolean[] r3 = r3.n
                int r4 = r6.e
                boolean r3 = r3[r4]
                com.tkay.expressad.exoplayer.k.s r4 = r6.i
                byte[] r4 = r4.a
                if (r3 == 0) goto L33
                r5 = 128(0x80, float:1.8E-43)
                goto L34
            L33:
                r5 = r1
            L34:
                r5 = r5 | r0
                byte r5 = (byte) r5
                r4[r1] = r5
                com.tkay.expressad.exoplayer.k.s r4 = r6.i
                r4.c(r1)
                com.tkay.expressad.exoplayer.e.m r1 = r6.a
                com.tkay.expressad.exoplayer.k.s r4 = r6.i
                r5 = 1
                r1.a(r4, r5)
                com.tkay.expressad.exoplayer.e.m r1 = r6.a
                r1.a(r2, r0)
                if (r3 != 0) goto L4e
                int r0 = r0 + r5
                return r0
            L4e:
                com.tkay.expressad.exoplayer.e.a.l r1 = r6.b
                com.tkay.expressad.exoplayer.k.s r1 = r1.q
                int r2 = r1.e()
                r3 = -2
                r1.d(r3)
                int r2 = r2 * 6
                int r2 = r2 + 2
                com.tkay.expressad.exoplayer.e.m r3 = r6.a
                r3.a(r1, r2)
                int r0 = r0 + r5
                int r0 = r0 + r2
                return r0
        }
    }

    static {
            com.tkay.expressad.exoplayer.e.a.e$1 r0 = new com.tkay.expressad.exoplayer.e.a.e$1
            r0.<init>()
            com.tkay.expressad.exoplayer.e.a.e.d = r0
            java.lang.String r0 = "seig"
            int r0 = com.tkay.expressad.exoplayer.k.af.f(r0)
            com.tkay.expressad.exoplayer.e.a.e.k = r0
            r0 = 16
            byte[] r0 = new byte[r0]
            r0 = {x0022: FILL_ARRAY_DATA , data: [-94, 57, 79, 82, 90, -101, 79, 20, -94, 68, 108, 66, 124, 100, -115, -12} // fill-array
            com.tkay.expressad.exoplayer.e.a.e.l = r0
            r0 = 0
            java.lang.String r1 = "application/x-emsg"
            com.tkay.expressad.exoplayer.m r0 = com.tkay.expressad.exoplayer.m.a(r0, r1)
            com.tkay.expressad.exoplayer.e.a.e.m = r0
            return
    }

    public e() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public e(int r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    private e(int r2, com.tkay.expressad.exoplayer.k.ac r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0, r0)
            return
    }

    private e(int r7, com.tkay.expressad.exoplayer.k.ac r8, com.tkay.expressad.exoplayer.e.a.j r9, com.tkay.expressad.exoplayer.d.e r10) {
            r6 = this;
            java.util.List r5 = java.util.Collections.emptyList()
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    private e(int r8, com.tkay.expressad.exoplayer.k.ac r9, com.tkay.expressad.exoplayer.e.a.j r10, com.tkay.expressad.exoplayer.d.e r11, java.util.List<com.tkay.expressad.exoplayer.m> r12) {
            r7 = this;
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    private e(int r2, com.tkay.expressad.exoplayer.k.ac r3, com.tkay.expressad.exoplayer.e.a.j r4, com.tkay.expressad.exoplayer.d.e r5, java.util.List<com.tkay.expressad.exoplayer.m> r6, com.tkay.expressad.exoplayer.e.m r7) {
            r1 = this;
            r1.<init>()
            if (r4 == 0) goto L8
            r0 = 8
            goto L9
        L8:
            r0 = 0
        L9:
            r2 = r2 | r0
            r1.s = r2
            r1.A = r3
            r1.t = r4
            r1.v = r5
            java.util.List r2 = java.util.Collections.unmodifiableList(r6)
            r1.u = r2
            r1.F = r7
            com.tkay.expressad.exoplayer.k.s r2 = new com.tkay.expressad.exoplayer.k.s
            r3 = 16
            r2.<init>(r3)
            r1.B = r2
            com.tkay.expressad.exoplayer.k.s r2 = new com.tkay.expressad.exoplayer.k.s
            byte[] r4 = com.tkay.expressad.exoplayer.k.p.a
            r2.<init>(r4)
            r1.x = r2
            com.tkay.expressad.exoplayer.k.s r2 = new com.tkay.expressad.exoplayer.k.s
            r4 = 5
            r2.<init>(r4)
            r1.y = r2
            com.tkay.expressad.exoplayer.k.s r2 = new com.tkay.expressad.exoplayer.k.s
            r2.<init>()
            r1.z = r2
            byte[] r2 = new byte[r3]
            r1.C = r2
            java.util.ArrayDeque r2 = new java.util.ArrayDeque
            r2.<init>()
            r1.D = r2
            java.util.ArrayDeque r2 = new java.util.ArrayDeque
            r2.<init>()
            r1.E = r2
            android.util.SparseArray r2 = new android.util.SparseArray
            r2.<init>()
            r1.w = r2
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r1.O = r2
            r1.N = r2
            r1.P = r2
            r1.a()
            return
    }

    private static int a(com.tkay.expressad.exoplayer.e.a.e.c r31, int r32, long r33, int r35, com.tkay.expressad.exoplayer.k.s r36, int r37) {
            r0 = r31
            r1 = 8
            r2 = r36
            r2.c(r1)
            int r1 = r36.i()
            int r1 = com.tkay.expressad.exoplayer.e.a.a.b(r1)
            com.tkay.expressad.exoplayer.e.a.j r3 = r0.c
            com.tkay.expressad.exoplayer.e.a.l r0 = r0.b
            com.tkay.expressad.exoplayer.e.a.c r4 = r0.a
            int[] r5 = r0.h
            int r6 = r36.m()
            r5[r32] = r6
            long[] r5 = r0.g
            long r6 = r0.c
            r5[r32] = r6
            r5 = r1 & 1
            if (r5 == 0) goto L35
            long[] r5 = r0.g
            r6 = r5[r32]
            int r8 = r36.i()
            long r8 = (long) r8
            long r6 = r6 + r8
            r5[r32] = r6
        L35:
            r5 = r1 & 4
            r6 = 0
            r7 = 1
            if (r5 == 0) goto L3d
            r5 = r7
            goto L3e
        L3d:
            r5 = r6
        L3e:
            int r8 = r4.d
            if (r5 == 0) goto L46
            int r8 = r36.m()
        L46:
            r9 = r1 & 256(0x100, float:3.59E-43)
            if (r9 == 0) goto L4c
            r9 = r7
            goto L4d
        L4c:
            r9 = r6
        L4d:
            r10 = r1 & 512(0x200, float:7.17E-43)
            if (r10 == 0) goto L53
            r10 = r7
            goto L54
        L53:
            r10 = r6
        L54:
            r11 = r1 & 1024(0x400, float:1.435E-42)
            if (r11 == 0) goto L5a
            r11 = r7
            goto L5b
        L5a:
            r11 = r6
        L5b:
            r1 = r1 & 2048(0x800, float:2.87E-42)
            if (r1 == 0) goto L61
            r1 = r7
            goto L62
        L61:
            r1 = r6
        L62:
            long[] r12 = r3.j
            r13 = 0
            if (r12 == 0) goto L83
            long[] r12 = r3.j
            int r12 = r12.length
            if (r12 != r7) goto L83
            long[] r12 = r3.j
            r15 = r12[r6]
            int r12 = (r15 > r13 ? 1 : (r15 == r13 ? 0 : -1))
            if (r12 != 0) goto L83
            long[] r12 = r3.k
            r13 = r12[r6]
            r15 = 1000(0x3e8, double:4.94E-321)
            long r6 = r3.e
            r17 = r6
            long r13 = com.tkay.expressad.exoplayer.k.af.a(r13, r15, r17)
        L83:
            int[] r6 = r0.i
            int[] r7 = r0.j
            long[] r15 = r0.k
            boolean[] r12 = r0.l
            int r2 = r3.d
            r17 = r8
            r8 = 2
            if (r2 != r8) goto L9a
            r2 = 1
            r8 = r35 & 1
            if (r8 == 0) goto L9a
            r16 = 1
            goto L9c
        L9a:
            r16 = 0
        L9c:
            int[] r8 = r0.h
            r8 = r8[r32]
            int r8 = r37 + r8
            long r2 = r3.e
            r24 = r13
            r14 = r12
            if (r32 <= 0) goto Lac
            long r12 = r0.s
            goto Lae
        Lac:
            r12 = r33
        Lae:
            r32 = r12
            r12 = r37
        Lb2:
            if (r12 >= r8) goto L13b
            if (r9 == 0) goto Lbb
            int r13 = r36.m()
            goto Lbd
        Lbb:
            int r13 = r4.b
        Lbd:
            if (r10 == 0) goto Lc8
            int r18 = r36.m()
            r26 = r9
            r9 = r18
            goto Lcc
        Lc8:
            r26 = r9
            int r9 = r4.c
        Lcc:
            if (r12 != 0) goto Ld5
            if (r5 == 0) goto Ld5
            r27 = r5
            r5 = r17
            goto Le4
        Ld5:
            if (r11 == 0) goto Le0
            int r18 = r36.i()
            r27 = r5
            r5 = r18
            goto Le4
        Le0:
            r27 = r5
            int r5 = r4.d
        Le4:
            if (r1 == 0) goto Lfb
            r28 = r1
            int r1 = r36.i()
            r29 = r10
            r30 = r11
            long r10 = (long) r1
            r18 = 1000(0x3e8, double:4.94E-321)
            long r10 = r10 * r18
            long r10 = r10 / r2
            int r1 = (int) r10
            r7[r12] = r1
            r1 = 0
            goto L104
        Lfb:
            r28 = r1
            r29 = r10
            r30 = r11
            r1 = 0
            r7[r12] = r1
        L104:
            r20 = 1000(0x3e8, double:4.94E-321)
            r18 = r32
            r22 = r2
            long r10 = com.tkay.expressad.exoplayer.k.af.a(r18, r20, r22)
            long r10 = r10 - r24
            r15[r12] = r10
            r6[r12] = r9
            int r5 = r5 >> 16
            r9 = 1
            r5 = r5 & r9
            if (r5 != 0) goto L120
            if (r16 == 0) goto L11e
            if (r12 != 0) goto L120
        L11e:
            r5 = r9
            goto L121
        L120:
            r5 = r1
        L121:
            r14[r12] = r5
            long r10 = (long) r13
            r18 = r2
            r1 = r32
            long r1 = r1 + r10
            int r12 = r12 + 1
            r32 = r1
            r2 = r18
            r9 = r26
            r5 = r27
            r1 = r28
            r10 = r29
            r11 = r30
            goto Lb2
        L13b:
            r1 = r32
            r0.s = r1
            return r8
    }

    private static android.util.Pair<java.lang.Long, com.tkay.expressad.exoplayer.e.a> a(com.tkay.expressad.exoplayer.k.s r25, long r26) {
            r0 = r25
            r1 = 8
            r0.c(r1)
            int r1 = r25.i()
            int r1 = com.tkay.expressad.exoplayer.e.a.a.a(r1)
            r2 = 4
            r0.d(r2)
            long r9 = r25.h()
            if (r1 != 0) goto L22
            long r3 = r25.h()
            long r5 = r25.h()
            goto L2a
        L22:
            long r3 = r25.n()
            long r5 = r25.n()
        L2a:
            long r5 = r26 + r5
            r11 = r3
            r13 = r5
            r5 = 1000000(0xf4240, double:4.940656E-318)
            r3 = r11
            r7 = r9
            long r15 = com.tkay.expressad.exoplayer.k.af.a(r3, r5, r7)
            r1 = 2
            r0.d(r1)
            int r1 = r25.e()
            int[] r7 = new int[r1]
            long[] r8 = new long[r1]
            long[] r5 = new long[r1]
            long[] r6 = new long[r1]
            r3 = 0
            r17 = r15
            r23 = r11
            r11 = r3
            r3 = r23
        L4f:
            if (r11 >= r1) goto La6
            int r12 = r25.i()
            r19 = -2147483648(0xffffffff80000000, float:-0.0)
            r19 = r12 & r19
            if (r19 != 0) goto L9e
            long r19 = r25.h()
            r21 = 2147483647(0x7fffffff, float:NaN)
            r12 = r12 & r21
            r7[r11] = r12
            r8[r11] = r13
            r6[r11] = r17
            long r17 = r3 + r19
            r19 = 1000000(0xf4240, double:4.940656E-318)
            r3 = r17
            r12 = r5
            r2 = r6
            r5 = r19
            r26 = r1
            r1 = r7
            r22 = r8
            r7 = r9
            long r3 = com.tkay.expressad.exoplayer.k.af.a(r3, r5, r7)
            r5 = r2[r11]
            long r5 = r3 - r5
            r12[r11] = r5
            r5 = 4
            r0.d(r5)
            r6 = r1[r11]
            long r6 = (long) r6
            long r13 = r13 + r6
            int r11 = r11 + 1
            r7 = r1
            r6 = r2
            r2 = r5
            r5 = r12
            r8 = r22
            r1 = r26
            r23 = r3
            r3 = r17
            r17 = r23
            goto L4f
        L9e:
            com.tkay.expressad.exoplayer.t r0 = new com.tkay.expressad.exoplayer.t
            java.lang.String r1 = "Unhandled indirect reference"
            r0.<init>(r1)
            throw r0
        La6:
            r12 = r5
            r2 = r6
            r1 = r7
            r22 = r8
            java.lang.Long r0 = java.lang.Long.valueOf(r15)
            com.tkay.expressad.exoplayer.e.a r3 = new com.tkay.expressad.exoplayer.e.a
            r4 = r22
            r3.<init>(r1, r4, r12, r2)
            android.util.Pair r0 = android.util.Pair.create(r0, r3)
            return r0
    }

    private static com.tkay.expressad.exoplayer.d.e a(java.util.List<com.tkay.expressad.exoplayer.e.a.a.b> r8) {
            int r0 = r8.size()
            r1 = 0
            r2 = 0
            r3 = r1
        L7:
            if (r2 >= r0) goto L3b
            java.lang.Object r4 = r8.get(r2)
            com.tkay.expressad.exoplayer.e.a.a$b r4 = (com.tkay.expressad.exoplayer.e.a.a.b) r4
            int r5 = r4.aU
            int r6 = com.tkay.expressad.exoplayer.e.a.a.Z
            if (r5 != r6) goto L38
            if (r3 != 0) goto L1c
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
        L1c:
            com.tkay.expressad.exoplayer.k.s r4 = r4.aV
            byte[] r4 = r4.a
            java.util.UUID r5 = com.tkay.expressad.exoplayer.e.a.h.a(r4)
            if (r5 != 0) goto L2e
            java.lang.String r4 = "FragmentedMp4Extractor"
            java.lang.String r5 = "Skipped pssh atom (failed to extract uuid)"
            android.util.Log.w(r4, r5)
            goto L38
        L2e:
            com.tkay.expressad.exoplayer.d.e$a r6 = new com.tkay.expressad.exoplayer.d.e$a
            java.lang.String r7 = "video/mp4"
            r6.<init>(r5, r7, r4)
            r3.add(r6)
        L38:
            int r2 = r2 + 1
            goto L7
        L3b:
            if (r3 != 0) goto L3e
            return r1
        L3e:
            com.tkay.expressad.exoplayer.d.e r8 = new com.tkay.expressad.exoplayer.d.e
            r8.<init>(r3)
            return r8
    }

    private static com.tkay.expressad.exoplayer.e.a.c a(android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.c> r2, int r3) {
            int r0 = r2.size()
            r1 = 1
            if (r0 != r1) goto Lf
            r3 = 0
            java.lang.Object r2 = r2.valueAt(r3)
            com.tkay.expressad.exoplayer.e.a.c r2 = (com.tkay.expressad.exoplayer.e.a.c) r2
            return r2
        Lf:
            java.lang.Object r2 = r2.get(r3)
            com.tkay.expressad.exoplayer.e.a.c r2 = (com.tkay.expressad.exoplayer.e.a.c) r2
            java.lang.Object r2 = com.tkay.expressad.exoplayer.k.a.a(r2)
            com.tkay.expressad.exoplayer.e.a.c r2 = (com.tkay.expressad.exoplayer.e.a.c) r2
            return r2
    }

    private static com.tkay.expressad.exoplayer.e.a.e.c a(android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e.c> r9) {
            int r0 = r9.size()
            r1 = 0
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r4 = 0
        Lb:
            if (r4 >= r0) goto L2c
            java.lang.Object r5 = r9.valueAt(r4)
            com.tkay.expressad.exoplayer.e.a.e$c r5 = (com.tkay.expressad.exoplayer.e.a.e.c) r5
            int r6 = r5.g
            com.tkay.expressad.exoplayer.e.a.l r7 = r5.b
            int r7 = r7.e
            if (r6 == r7) goto L29
            com.tkay.expressad.exoplayer.e.a.l r6 = r5.b
            long[] r6 = r6.g
            int r7 = r5.g
            r7 = r6[r7]
            int r6 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r6 >= 0) goto L29
            r1 = r5
            r2 = r7
        L29:
            int r4 = r4 + 1
            goto Lb
        L2c:
            return r1
    }

    private static com.tkay.expressad.exoplayer.e.a.e.c a(com.tkay.expressad.exoplayer.k.s r5, android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e.c> r6) {
            r0 = 8
            r5.c(r0)
            int r0 = r5.i()
            int r0 = com.tkay.expressad.exoplayer.e.a.a.b(r0)
            int r1 = r5.i()
            com.tkay.expressad.exoplayer.e.a.e$c r6 = b(r6, r1)
            if (r6 != 0) goto L19
            r5 = 0
            return r5
        L19:
            r1 = r0 & 1
            if (r1 == 0) goto L29
            long r1 = r5.n()
            com.tkay.expressad.exoplayer.e.a.l r3 = r6.b
            r3.c = r1
            com.tkay.expressad.exoplayer.e.a.l r3 = r6.b
            r3.d = r1
        L29:
            com.tkay.expressad.exoplayer.e.a.c r1 = r6.d
            r2 = r0 & 2
            if (r2 == 0) goto L36
            int r2 = r5.m()
            int r2 = r2 + (-1)
            goto L38
        L36:
            int r2 = r1.a
        L38:
            r3 = r0 & 8
            if (r3 == 0) goto L41
            int r3 = r5.m()
            goto L43
        L41:
            int r3 = r1.b
        L43:
            r4 = r0 & 16
            if (r4 == 0) goto L4c
            int r4 = r5.m()
            goto L4e
        L4c:
            int r4 = r1.c
        L4e:
            r0 = r0 & 32
            if (r0 == 0) goto L57
            int r5 = r5.m()
            goto L59
        L57:
            int r5 = r1.d
        L59:
            com.tkay.expressad.exoplayer.e.a.l r0 = r6.b
            com.tkay.expressad.exoplayer.e.a.c r1 = new com.tkay.expressad.exoplayer.e.a.c
            r1.<init>(r2, r3, r4, r5)
            r0.a = r1
            return r6
    }

    private void a() {
            r1 = this;
            r0 = 0
            r1.G = r0
            r1.J = r0
            return
    }

    private void a(long r3) {
            r2 = this;
        L0:
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r0 = r2.D
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L22
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r0 = r2.D
            java.lang.Object r0 = r0.peek()
            com.tkay.expressad.exoplayer.e.a.a$a r0 = (com.tkay.expressad.exoplayer.e.a.a.a) r0
            long r0 = r0.aV
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 != 0) goto L22
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r0 = r2.D
            java.lang.Object r0 = r0.pop()
            com.tkay.expressad.exoplayer.e.a.a$a r0 = (com.tkay.expressad.exoplayer.e.a.a.a) r0
            r2.a(r0)
            goto L0
        L22:
            r2.a()
            return
    }

    private void a(com.tkay.expressad.exoplayer.e.a.a.a r3) {
            r2 = this;
            int r0 = r3.aU
            int r1 = com.tkay.expressad.exoplayer.e.a.a.G
            if (r0 != r1) goto La
            r2.b(r3)
            return
        La:
            int r0 = r3.aU
            int r1 = com.tkay.expressad.exoplayer.e.a.a.P
            if (r0 != r1) goto L14
            r2.c(r3)
            return
        L14:
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r0 = r2.D
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L27
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r0 = r2.D
            java.lang.Object r0 = r0.peek()
            com.tkay.expressad.exoplayer.e.a.a$a r0 = (com.tkay.expressad.exoplayer.e.a.a.a) r0
            r0.a(r3)
        L27:
            return
    }

    private static void a(com.tkay.expressad.exoplayer.e.a.a.a r5, android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e.c> r6, int r7, byte[] r8) {
            java.util.List<com.tkay.expressad.exoplayer.e.a.a$a> r0 = r5.aX
            int r0 = r0.size()
            r1 = 0
        L7:
            if (r1 >= r0) goto L1d
            java.util.List<com.tkay.expressad.exoplayer.e.a.a$a> r2 = r5.aX
            java.lang.Object r2 = r2.get(r1)
            com.tkay.expressad.exoplayer.e.a.a$a r2 = (com.tkay.expressad.exoplayer.e.a.a.a) r2
            int r3 = r2.aU
            int r4 = com.tkay.expressad.exoplayer.e.a.a.Q
            if (r3 != r4) goto L1a
            b(r2, r6, r7, r8)
        L1a:
            int r1 = r1 + 1
            goto L7
        L1d:
            return
    }

    private static void a(com.tkay.expressad.exoplayer.e.a.a.a r10, com.tkay.expressad.exoplayer.e.a.e.c r11, long r12, int r14) {
            java.util.List<com.tkay.expressad.exoplayer.e.a.a$b> r10 = r10.aW
            int r0 = r10.size()
            r1 = 0
            r2 = r1
            r3 = r2
            r4 = r3
        La:
            if (r2 >= r0) goto L2b
            java.lang.Object r5 = r10.get(r2)
            com.tkay.expressad.exoplayer.e.a.a$b r5 = (com.tkay.expressad.exoplayer.e.a.a.b) r5
            int r6 = r5.aU
            int r7 = com.tkay.expressad.exoplayer.e.a.a.E
            if (r6 != r7) goto L28
            com.tkay.expressad.exoplayer.k.s r5 = r5.aV
            r6 = 12
            r5.c(r6)
            int r5 = r5.m()
            if (r5 <= 0) goto L28
            int r4 = r4 + r5
            int r3 = r3 + 1
        L28:
            int r2 = r2 + 1
            goto La
        L2b:
            r11.g = r1
            r11.f = r1
            r11.e = r1
            com.tkay.expressad.exoplayer.e.a.l r2 = r11.b
            r2.a(r3, r4)
            r3 = r1
            r8 = r3
        L38:
            if (r1 >= r0) goto L56
            java.lang.Object r2 = r10.get(r1)
            com.tkay.expressad.exoplayer.e.a.a$b r2 = (com.tkay.expressad.exoplayer.e.a.a.b) r2
            int r4 = r2.aU
            int r5 = com.tkay.expressad.exoplayer.e.a.a.E
            if (r4 != r5) goto L53
            int r9 = r3 + 1
            com.tkay.expressad.exoplayer.k.s r7 = r2.aV
            r2 = r11
            r4 = r12
            r6 = r14
            int r2 = a(r2, r3, r4, r6, r7, r8)
            r8 = r2
            r3 = r9
        L53:
            int r1 = r1 + 1
            goto L38
        L56:
            return
    }

    private void a(com.tkay.expressad.exoplayer.e.a.a.b r25, long r26) {
            r24 = this;
            r0 = r24
            r1 = r25
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r2 = r0.D
            boolean r2 = r2.isEmpty()
            if (r2 != 0) goto L18
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r2 = r0.D
            java.lang.Object r2 = r2.peek()
            com.tkay.expressad.exoplayer.e.a.a$a r2 = (com.tkay.expressad.exoplayer.e.a.a.a) r2
            r2.a(r1)
            return
        L18:
            int r2 = r1.aU
            int r3 = com.tkay.expressad.exoplayer.e.a.a.F
            r4 = 0
            if (r2 != r3) goto Le5
            com.tkay.expressad.exoplayer.k.s r1 = r1.aV
            r2 = 8
            r1.c(r2)
            int r2 = r1.i()
            int r2 = com.tkay.expressad.exoplayer.e.a.a.a(r2)
            r3 = 4
            r1.d(r3)
            long r11 = r1.h()
            if (r2 != 0) goto L41
            long r5 = r1.h()
            long r7 = r1.h()
            goto L49
        L41:
            long r5 = r1.n()
            long r7 = r1.n()
        L49:
            long r7 = r26 + r7
            r13 = r5
            r15 = r7
            r7 = 1000000(0xf4240, double:4.940656E-318)
            r5 = r13
            r9 = r11
            long r17 = com.tkay.expressad.exoplayer.k.af.a(r5, r7, r9)
            r2 = 2
            r1.d(r2)
            int r2 = r1.e()
            int[] r9 = new int[r2]
            long[] r10 = new long[r2]
            long[] r7 = new long[r2]
            long[] r8 = new long[r2]
            r5 = r17
        L68:
            if (r4 >= r2) goto Lbd
            int r19 = r1.i()
            r20 = -2147483648(0xffffffff80000000, float:-0.0)
            r20 = r19 & r20
            if (r20 != 0) goto Lb5
            long r20 = r1.h()
            r22 = 2147483647(0x7fffffff, float:NaN)
            r19 = r19 & r22
            r9[r4] = r19
            r10[r4] = r15
            r8[r4] = r5
            long r13 = r13 + r20
            r19 = 1000000(0xf4240, double:4.940656E-318)
            r5 = r13
            r26 = r2
            r3 = r7
            r2 = r8
            r7 = r19
            r19 = r13
            r13 = r9
            r14 = r10
            r9 = r11
            long r5 = com.tkay.expressad.exoplayer.k.af.a(r5, r7, r9)
            r7 = r2[r4]
            long r7 = r5 - r7
            r3[r4] = r7
            r7 = 4
            r1.d(r7)
            r8 = r13[r4]
            long r8 = (long) r8
            long r15 = r15 + r8
            int r4 = r4 + 1
            r8 = r2
            r9 = r13
            r10 = r14
            r13 = r19
            r2 = r26
            r23 = r7
            r7 = r3
            r3 = r23
            goto L68
        Lb5:
            com.tkay.expressad.exoplayer.t r1 = new com.tkay.expressad.exoplayer.t
            java.lang.String r2 = "Unhandled indirect reference"
            r1.<init>(r2)
            throw r1
        Lbd:
            r3 = r7
            r2 = r8
            r13 = r9
            r14 = r10
            java.lang.Long r1 = java.lang.Long.valueOf(r17)
            com.tkay.expressad.exoplayer.e.a r4 = new com.tkay.expressad.exoplayer.e.a
            r4.<init>(r13, r14, r3, r2)
            android.util.Pair r1 = android.util.Pair.create(r1, r4)
            java.lang.Object r2 = r1.first
            java.lang.Long r2 = (java.lang.Long) r2
            long r2 = r2.longValue()
            r0.P = r2
            com.tkay.expressad.exoplayer.e.g r2 = r0.V
            java.lang.Object r1 = r1.second
            com.tkay.expressad.exoplayer.e.k r1 = (com.tkay.expressad.exoplayer.e.k) r1
            r2.a(r1)
            r1 = 1
            r0.Y = r1
            return
        Le5:
            int r2 = r1.aU
            int r3 = com.tkay.expressad.exoplayer.e.a.a.aL
            if (r2 != r3) goto L15b
            com.tkay.expressad.exoplayer.k.s r1 = r1.aV
            com.tkay.expressad.exoplayer.e.m[] r2 = r0.W
            if (r2 == 0) goto L15b
            int r2 = r2.length
            if (r2 != 0) goto Lf5
            goto L15b
        Lf5:
            r2 = 12
            r1.c(r2)
            int r3 = r1.a()
            r1.p()
            r1.p()
            long r9 = r1.h()
            long r5 = r1.h()
            r7 = 1000000(0xf4240, double:4.940656E-318)
            long r5 = com.tkay.expressad.exoplayer.k.af.a(r5, r7, r9)
            com.tkay.expressad.exoplayer.e.m[] r7 = r0.W
            int r8 = r7.length
            r9 = r4
        L117:
            if (r9 >= r8) goto L124
            r10 = r7[r9]
            r1.c(r2)
            r10.a(r1, r3)
            int r9 = r9 + 1
            goto L117
        L124:
            long r1 = r0.P
            r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r7 = (r1 > r7 ? 1 : (r1 == r7 ? 0 : -1))
            if (r7 == 0) goto L14b
            long r1 = r1 + r5
            com.tkay.expressad.exoplayer.k.ac r5 = r0.A
            if (r5 == 0) goto L138
            long r1 = r5.b(r1)
        L138:
            com.tkay.expressad.exoplayer.e.m[] r12 = r0.W
            int r13 = r12.length
        L13b:
            if (r4 >= r13) goto L14a
            r5 = r12[r4]
            r8 = 1
            r10 = 0
            r11 = 0
            r6 = r1
            r9 = r3
            r5.a(r6, r8, r9, r10, r11)
            int r4 = r4 + 1
            goto L13b
        L14a:
            return
        L14b:
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.e$b> r1 = r0.E
            com.tkay.expressad.exoplayer.e.a.e$b r2 = new com.tkay.expressad.exoplayer.e.a.e$b
            r2.<init>(r5, r3)
            r1.addLast(r2)
            int r1 = r0.M
            int r1 = r1 + r3
            r0.M = r1
        L15b:
            return
    }

    private static void a(com.tkay.expressad.exoplayer.e.a.k r7, com.tkay.expressad.exoplayer.k.s r8, com.tkay.expressad.exoplayer.e.a.l r9) {
            int r7 = r7.d
            r0 = 8
            r8.c(r0)
            int r1 = r8.i()
            int r1 = com.tkay.expressad.exoplayer.e.a.a.b(r1)
            r2 = 1
            r1 = r1 & r2
            if (r1 != r2) goto L16
            r8.d(r0)
        L16:
            int r0 = r8.d()
            int r1 = r8.m()
            int r3 = r9.f
            if (r1 != r3) goto L4a
            r3 = 0
            if (r0 != 0) goto L3a
            boolean[] r0 = r9.n
            r4 = r3
            r5 = r4
        L29:
            if (r4 >= r1) goto L46
            int r6 = r8.d()
            int r5 = r5 + r6
            if (r6 <= r7) goto L34
            r6 = r2
            goto L35
        L34:
            r6 = r3
        L35:
            r0[r4] = r6
            int r4 = r4 + 1
            goto L29
        L3a:
            if (r0 <= r7) goto L3d
            goto L3e
        L3d:
            r2 = r3
        L3e:
            int r0 = r0 * r1
            int r5 = r0 + 0
            boolean[] r7 = r9.n
            java.util.Arrays.fill(r7, r3, r1, r2)
        L46:
            r9.a(r5)
            return
        L4a:
            com.tkay.expressad.exoplayer.t r7 = new com.tkay.expressad.exoplayer.t
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r0 = "Length mismatch: "
            r8.<init>(r0)
            r8.append(r1)
            java.lang.String r0 = ", "
            r8.append(r0)
            int r9 = r9.f
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
    }

    private void a(com.tkay.expressad.exoplayer.k.s r13) {
            r12 = this;
            com.tkay.expressad.exoplayer.e.m[] r0 = r12.W
            if (r0 == 0) goto L70
            int r0 = r0.length
            if (r0 != 0) goto L8
            goto L70
        L8:
            r0 = 12
            r13.c(r0)
            int r8 = r13.a()
            r13.p()
            r13.p()
            long r5 = r13.h()
            long r1 = r13.h()
            r3 = 1000000(0xf4240, double:4.940656E-318)
            long r1 = com.tkay.expressad.exoplayer.k.af.a(r1, r3, r5)
            com.tkay.expressad.exoplayer.e.m[] r3 = r12.W
            int r4 = r3.length
            r5 = 0
            r6 = r5
        L2b:
            if (r6 >= r4) goto L38
            r7 = r3[r6]
            r13.c(r0)
            r7.a(r13, r8)
            int r6 = r6 + 1
            goto L2b
        L38:
            long r3 = r12.P
            r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r13 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r13 == 0) goto L61
            long r3 = r3 + r1
            com.tkay.expressad.exoplayer.k.ac r13 = r12.A
            if (r13 == 0) goto L4c
            long r3 = r13.b(r3)
        L4c:
            r9 = r3
            com.tkay.expressad.exoplayer.e.m[] r13 = r12.W
            int r0 = r13.length
            r11 = r5
        L51:
            if (r11 >= r0) goto L60
            r1 = r13[r11]
            r4 = 1
            r6 = 0
            r7 = 0
            r2 = r9
            r5 = r8
            r1.a(r2, r4, r5, r6, r7)
            int r11 = r11 + 1
            goto L51
        L60:
            return
        L61:
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.e$b> r13 = r12.E
            com.tkay.expressad.exoplayer.e.a.e$b r0 = new com.tkay.expressad.exoplayer.e.a.e$b
            r0.<init>(r1, r8)
            r13.addLast(r0)
            int r13 = r12.M
            int r13 = r13 + r8
            r12.M = r13
        L70:
            return
    }

    private static void a(com.tkay.expressad.exoplayer.k.s r3, int r4, com.tkay.expressad.exoplayer.e.a.l r5) {
            int r4 = r4 + 8
            r3.c(r4)
            int r4 = r3.i()
            int r4 = com.tkay.expressad.exoplayer.e.a.a.b(r4)
            r0 = r4 & 1
            if (r0 != 0) goto L4f
            r4 = r4 & 2
            r0 = 0
            if (r4 == 0) goto L18
            r4 = 1
            goto L19
        L18:
            r4 = r0
        L19:
            int r1 = r3.m()
            int r2 = r5.f
            if (r1 != r2) goto L31
            boolean[] r2 = r5.n
            java.util.Arrays.fill(r2, r0, r1, r4)
            int r4 = r3.a()
            r5.a(r4)
            r5.a(r3)
            return
        L31:
            com.tkay.expressad.exoplayer.t r3 = new com.tkay.expressad.exoplayer.t
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "Length mismatch: "
            r4.<init>(r0)
            r4.append(r1)
            java.lang.String r0 = ", "
            r4.append(r0)
            int r5 = r5.f
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
        L4f:
            com.tkay.expressad.exoplayer.t r3 = new com.tkay.expressad.exoplayer.t
            java.lang.String r4 = "Overriding TrackEncryptionBox parameters is unsupported."
            r3.<init>(r4)
            throw r3
    }

    private static void a(com.tkay.expressad.exoplayer.k.s r5, com.tkay.expressad.exoplayer.e.a.l r6) {
            r0 = 8
            r5.c(r0)
            int r1 = r5.i()
            int r2 = com.tkay.expressad.exoplayer.e.a.a.b(r1)
            r3 = 1
            r2 = r2 & r3
            if (r2 != r3) goto L14
            r5.d(r0)
        L14:
            int r0 = r5.m()
            if (r0 != r3) goto L2f
            int r0 = com.tkay.expressad.exoplayer.e.a.a.a(r1)
            long r1 = r6.d
            if (r0 != 0) goto L27
            long r3 = r5.h()
            goto L2b
        L27:
            long r3 = r5.n()
        L2b:
            long r1 = r1 + r3
            r6.d = r1
            return
        L2f:
            com.tkay.expressad.exoplayer.t r5 = new com.tkay.expressad.exoplayer.t
            java.lang.String r6 = java.lang.String.valueOf(r0)
            java.lang.String r0 = "Unexpected saio entry count: "
            java.lang.String r6 = r0.concat(r6)
            r5.<init>(r6)
            throw r5
    }

    private static void a(com.tkay.expressad.exoplayer.k.s r2, com.tkay.expressad.exoplayer.e.a.l r3, byte[] r4) {
            r0 = 8
            r2.c(r0)
            r0 = 16
            r1 = 0
            r2.a(r4, r1, r0)
            byte[] r1 = com.tkay.expressad.exoplayer.e.a.e.l
            boolean r4 = java.util.Arrays.equals(r4, r1)
            if (r4 != 0) goto L14
            return
        L14:
            a(r2, r0, r3)
            return
    }

    private static void a(com.tkay.expressad.exoplayer.k.s r12, com.tkay.expressad.exoplayer.k.s r13, java.lang.String r14, com.tkay.expressad.exoplayer.e.a.l r15) {
            r0 = 8
            r12.c(r0)
            int r1 = r12.i()
            int r2 = r12.i()
            int r3 = com.tkay.expressad.exoplayer.e.a.e.k
            if (r2 == r3) goto L12
            return
        L12:
            int r1 = com.tkay.expressad.exoplayer.e.a.a.a(r1)
            r2 = 4
            r3 = 1
            if (r1 != r3) goto L1d
            r12.d(r2)
        L1d:
            int r12 = r12.i()
            if (r12 != r3) goto La5
            r13.c(r0)
            int r12 = r13.i()
            int r0 = r13.i()
            int r1 = com.tkay.expressad.exoplayer.e.a.e.k
            if (r0 == r1) goto L33
            return
        L33:
            int r12 = com.tkay.expressad.exoplayer.e.a.a.a(r12)
            if (r12 != r3) goto L4c
            long r0 = r13.h()
            r4 = 0
            int r12 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r12 == 0) goto L44
            goto L52
        L44:
            com.tkay.expressad.exoplayer.t r12 = new com.tkay.expressad.exoplayer.t
            java.lang.String r13 = "Variable length description in sgpd found (unsupported)"
            r12.<init>(r13)
            throw r12
        L4c:
            r0 = 2
            if (r12 < r0) goto L52
            r13.d(r2)
        L52:
            long r0 = r13.h()
            r4 = 1
            int r12 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r12 != 0) goto L9d
            r13.d(r3)
            int r12 = r13.d()
            r0 = r12 & 240(0xf0, float:3.36E-43)
            int r9 = r0 >> 4
            r10 = r12 & 15
            int r12 = r13.d()
            r0 = 0
            if (r12 != r3) goto L72
            r12 = r3
            goto L73
        L72:
            r12 = r0
        L73:
            if (r12 != 0) goto L76
            return
        L76:
            int r7 = r13.d()
            r12 = 16
            byte[] r8 = new byte[r12]
            r13.a(r8, r0, r12)
            r12 = 0
            if (r7 != 0) goto L8f
            int r12 = r13.d()
            byte[] r1 = new byte[r12]
            r13.a(r1, r0, r12)
            r11 = r1
            goto L90
        L8f:
            r11 = r12
        L90:
            r15.m = r3
            com.tkay.expressad.exoplayer.e.a.k r12 = new com.tkay.expressad.exoplayer.e.a.k
            r5 = 1
            r4 = r12
            r6 = r14
            r4.<init>(r5, r6, r7, r8, r9, r10, r11)
            r15.o = r12
            return
        L9d:
            com.tkay.expressad.exoplayer.t r12 = new com.tkay.expressad.exoplayer.t
            java.lang.String r13 = "Entry count in sgpd != 1 (unsupported)."
            r12.<init>(r13)
            throw r12
        La5:
            com.tkay.expressad.exoplayer.t r12 = new com.tkay.expressad.exoplayer.t
            java.lang.String r13 = "Entry count in sbgp != 1 (unsupported)."
            r12.<init>(r13)
            throw r12
    }

    private static boolean a(int r1) {
            int r0 = com.tkay.expressad.exoplayer.e.a.a.X
            if (r1 == r0) goto L53
            int r0 = com.tkay.expressad.exoplayer.e.a.a.W
            if (r1 == r0) goto L53
            int r0 = com.tkay.expressad.exoplayer.e.a.a.H
            if (r1 == r0) goto L53
            int r0 = com.tkay.expressad.exoplayer.e.a.a.F
            if (r1 == r0) goto L53
            int r0 = com.tkay.expressad.exoplayer.e.a.a.Y
            if (r1 == r0) goto L53
            int r0 = com.tkay.expressad.exoplayer.e.a.a.B
            if (r1 == r0) goto L53
            int r0 = com.tkay.expressad.exoplayer.e.a.a.C
            if (r1 == r0) goto L53
            int r0 = com.tkay.expressad.exoplayer.e.a.a.T
            if (r1 == r0) goto L53
            int r0 = com.tkay.expressad.exoplayer.e.a.a.D
            if (r1 == r0) goto L53
            int r0 = com.tkay.expressad.exoplayer.e.a.a.E
            if (r1 == r0) goto L53
            int r0 = com.tkay.expressad.exoplayer.e.a.a.Z
            if (r1 == r0) goto L53
            int r0 = com.tkay.expressad.exoplayer.e.a.a.ah
            if (r1 == r0) goto L53
            int r0 = com.tkay.expressad.exoplayer.e.a.a.ai
            if (r1 == r0) goto L53
            int r0 = com.tkay.expressad.exoplayer.e.a.a.am
            if (r1 == r0) goto L53
            int r0 = com.tkay.expressad.exoplayer.e.a.a.al
            if (r1 == r0) goto L53
            int r0 = com.tkay.expressad.exoplayer.e.a.a.aj
            if (r1 == r0) goto L53
            int r0 = com.tkay.expressad.exoplayer.e.a.a.ak
            if (r1 == r0) goto L53
            int r0 = com.tkay.expressad.exoplayer.e.a.a.V
            if (r1 == r0) goto L53
            int r0 = com.tkay.expressad.exoplayer.e.a.a.S
            if (r1 == r0) goto L53
            int r0 = com.tkay.expressad.exoplayer.e.a.a.aL
            if (r1 != r0) goto L51
            goto L53
        L51:
            r1 = 0
            return r1
        L53:
            r1 = 1
            return r1
    }

    private static android.util.Pair<java.lang.Integer, com.tkay.expressad.exoplayer.e.a.c> b(com.tkay.expressad.exoplayer.k.s r5) {
            r0 = 12
            r5.c(r0)
            int r0 = r5.i()
            int r1 = r5.m()
            int r1 = r1 + (-1)
            int r2 = r5.m()
            int r3 = r5.m()
            int r5 = r5.i()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.tkay.expressad.exoplayer.e.a.c r4 = new com.tkay.expressad.exoplayer.e.a.c
            r4.<init>(r1, r2, r3, r5)
            android.util.Pair r5 = android.util.Pair.create(r0, r4)
            return r5
    }

    private static com.tkay.expressad.exoplayer.e.a.e.c b(android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e.c> r2, int r3) {
            int r0 = r2.size()
            r1 = 1
            if (r0 != r1) goto Lf
            r3 = 0
            java.lang.Object r2 = r2.valueAt(r3)
            com.tkay.expressad.exoplayer.e.a.e$c r2 = (com.tkay.expressad.exoplayer.e.a.e.c) r2
            return r2
        Lf:
            java.lang.Object r2 = r2.get(r3)
            com.tkay.expressad.exoplayer.e.a.e$c r2 = (com.tkay.expressad.exoplayer.e.a.e.c) r2
            return r2
    }

    private void b() {
            r8 = this;
            com.tkay.expressad.exoplayer.e.m[] r0 = r8.W
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L45
            r0 = 2
            com.tkay.expressad.exoplayer.e.m[] r0 = new com.tkay.expressad.exoplayer.e.m[r0]
            r8.W = r0
            com.tkay.expressad.exoplayer.e.m r3 = r8.F
            if (r3 == 0) goto L13
            r0[r1] = r3
            r0 = r2
            goto L14
        L13:
            r0 = r1
        L14:
            int r3 = r8.s
            r4 = 4
            r3 = r3 & r4
            if (r3 == 0) goto L2d
            com.tkay.expressad.exoplayer.e.m[] r3 = r8.W
            int r5 = r0 + 1
            com.tkay.expressad.exoplayer.e.g r6 = r8.V
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r7 = r8.w
            int r7 = r7.size()
            com.tkay.expressad.exoplayer.e.m r4 = r6.a(r7, r4)
            r3[r0] = r4
            r0 = r5
        L2d:
            com.tkay.expressad.exoplayer.e.m[] r3 = r8.W
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r3, r0)
            com.tkay.expressad.exoplayer.e.m[] r0 = (com.tkay.expressad.exoplayer.e.m[]) r0
            r8.W = r0
            int r3 = r0.length
            r4 = r1
        L39:
            if (r4 >= r3) goto L45
            r5 = r0[r4]
            com.tkay.expressad.exoplayer.m r6 = com.tkay.expressad.exoplayer.e.a.e.m
            r5.a(r6)
            int r4 = r4 + 1
            goto L39
        L45:
            com.tkay.expressad.exoplayer.e.m[] r0 = r8.X
            if (r0 != 0) goto L79
            java.util.List<com.tkay.expressad.exoplayer.m> r0 = r8.u
            int r0 = r0.size()
            com.tkay.expressad.exoplayer.e.m[] r0 = new com.tkay.expressad.exoplayer.e.m[r0]
            r8.X = r0
        L53:
            com.tkay.expressad.exoplayer.e.m[] r0 = r8.X
            int r0 = r0.length
            if (r1 >= r0) goto L79
            com.tkay.expressad.exoplayer.e.g r0 = r8.V
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r3 = r8.w
            int r3 = r3.size()
            int r3 = r3 + r2
            int r3 = r3 + r1
            r4 = 3
            com.tkay.expressad.exoplayer.e.m r0 = r0.a(r3, r4)
            java.util.List<com.tkay.expressad.exoplayer.m> r3 = r8.u
            java.lang.Object r3 = r3.get(r1)
            com.tkay.expressad.exoplayer.m r3 = (com.tkay.expressad.exoplayer.m) r3
            r0.a(r3)
            com.tkay.expressad.exoplayer.e.m[] r3 = r8.X
            r3[r1] = r0
            int r1 = r1 + 1
            goto L53
        L79:
            return
    }

    private void b(long r14) {
            r13 = this;
        L0:
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.e$b> r0 = r13.E
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L38
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.e$b> r0 = r13.E
            java.lang.Object r0 = r0.removeFirst()
            com.tkay.expressad.exoplayer.e.a.e$b r0 = (com.tkay.expressad.exoplayer.e.a.e.b) r0
            int r1 = r13.M
            int r2 = r0.b
            int r1 = r1 - r2
            r13.M = r1
            long r1 = r0.a
            long r1 = r1 + r14
            com.tkay.expressad.exoplayer.k.ac r3 = r13.A
            if (r3 == 0) goto L22
            long r1 = r3.b(r1)
        L22:
            com.tkay.expressad.exoplayer.e.m[] r10 = r13.W
            int r11 = r10.length
            r3 = 0
            r12 = r3
        L27:
            if (r12 >= r11) goto L0
            r3 = r10[r12]
            r6 = 1
            int r7 = r0.b
            int r8 = r13.M
            r9 = 0
            r4 = r1
            r3.a(r4, r6, r7, r8, r9)
            int r12 = r12 + 1
            goto L27
        L38:
            return
    }

    private void b(com.tkay.expressad.exoplayer.e.a.a.a r20) {
            r19 = this;
            r0 = r19
            r1 = r20
            com.tkay.expressad.exoplayer.e.a.j r2 = r0.t
            r3 = 1
            r4 = 0
            if (r2 != 0) goto Lc
            r2 = r3
            goto Ld
        Lc:
            r2 = r4
        Ld:
            java.lang.String r5 = "Unexpected moov box."
            com.tkay.expressad.exoplayer.k.a.b(r2, r5)
            com.tkay.expressad.exoplayer.d.e r2 = r0.v
            if (r2 == 0) goto L17
            goto L1d
        L17:
            java.util.List<com.tkay.expressad.exoplayer.e.a.a$b> r2 = r1.aW
            com.tkay.expressad.exoplayer.d.e r2 = a(r2)
        L1d:
            int r5 = com.tkay.expressad.exoplayer.e.a.a.R
            com.tkay.expressad.exoplayer.e.a.a$a r5 = r1.e(r5)
            android.util.SparseArray r12 = new android.util.SparseArray
            r12.<init>()
            r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            java.util.List<com.tkay.expressad.exoplayer.e.a.a$b> r8 = r5.aW
            int r8 = r8.size()
            r13 = r6
            r6 = r4
        L35:
            if (r6 >= r8) goto L6b
            java.util.List<com.tkay.expressad.exoplayer.e.a.a$b> r7 = r5.aW
            java.lang.Object r7 = r7.get(r6)
            com.tkay.expressad.exoplayer.e.a.a$b r7 = (com.tkay.expressad.exoplayer.e.a.a.b) r7
            int r9 = r7.aU
            int r10 = com.tkay.expressad.exoplayer.e.a.a.D
            if (r9 != r10) goto L5b
            com.tkay.expressad.exoplayer.k.s r7 = r7.aV
            android.util.Pair r7 = b(r7)
            java.lang.Object r9 = r7.first
            java.lang.Integer r9 = (java.lang.Integer) r9
            int r9 = r9.intValue()
            java.lang.Object r7 = r7.second
            com.tkay.expressad.exoplayer.e.a.c r7 = (com.tkay.expressad.exoplayer.e.a.c) r7
            r12.put(r9, r7)
            goto L68
        L5b:
            int r9 = r7.aU
            int r10 = com.tkay.expressad.exoplayer.e.a.a.S
            if (r9 != r10) goto L68
            com.tkay.expressad.exoplayer.k.s r7 = r7.aV
            long r9 = c(r7)
            r13 = r9
        L68:
            int r6 = r6 + 1
            goto L35
        L6b:
            android.util.SparseArray r15 = new android.util.SparseArray
            r15.<init>()
            java.util.List<com.tkay.expressad.exoplayer.e.a.a$a> r5 = r1.aX
            int r11 = r5.size()
            r10 = r4
        L77:
            if (r10 >= r11) goto Lb9
            java.util.List<com.tkay.expressad.exoplayer.e.a.a$a> r5 = r1.aX
            java.lang.Object r5 = r5.get(r10)
            com.tkay.expressad.exoplayer.e.a.a$a r5 = (com.tkay.expressad.exoplayer.e.a.a.a) r5
            int r6 = r5.aU
            int r7 = com.tkay.expressad.exoplayer.e.a.a.I
            if (r6 != r7) goto Lb0
            int r6 = com.tkay.expressad.exoplayer.e.a.a.H
            com.tkay.expressad.exoplayer.e.a.a$b r6 = r1.d(r6)
            int r7 = r0.s
            r7 = r7 & 16
            if (r7 == 0) goto L96
            r16 = r3
            goto L98
        L96:
            r16 = r4
        L98:
            r17 = 0
            r7 = r13
            r9 = r2
            r18 = r10
            r10 = r16
            r16 = r11
            r11 = r17
            com.tkay.expressad.exoplayer.e.a.j r5 = com.tkay.expressad.exoplayer.e.a.b.a(r5, r6, r7, r9, r10, r11)
            if (r5 == 0) goto Lb4
            int r6 = r5.c
            r15.put(r6, r5)
            goto Lb4
        Lb0:
            r18 = r10
            r16 = r11
        Lb4:
            int r10 = r18 + 1
            r11 = r16
            goto L77
        Lb9:
            int r1 = r15.size()
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r2 = r0.w
            int r2 = r2.size()
            if (r2 != 0) goto L100
        Lc5:
            if (r4 >= r1) goto Lf7
            java.lang.Object r2 = r15.valueAt(r4)
            com.tkay.expressad.exoplayer.e.a.j r2 = (com.tkay.expressad.exoplayer.e.a.j) r2
            com.tkay.expressad.exoplayer.e.a.e$c r3 = new com.tkay.expressad.exoplayer.e.a.e$c
            com.tkay.expressad.exoplayer.e.g r5 = r0.V
            int r6 = r2.d
            com.tkay.expressad.exoplayer.e.m r5 = r5.a(r4, r6)
            r3.<init>(r5)
            int r5 = r2.c
            com.tkay.expressad.exoplayer.e.a.c r5 = a(r12, r5)
            r3.a(r2, r5)
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r5 = r0.w
            int r6 = r2.c
            r5.put(r6, r3)
            long r5 = r0.O
            long r2 = r2.g
            long r2 = java.lang.Math.max(r5, r2)
            r0.O = r2
            int r4 = r4 + 1
            goto Lc5
        Lf7:
            r19.b()
            com.tkay.expressad.exoplayer.e.g r1 = r0.V
            r1.c_()
            return
        L100:
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r2 = r0.w
            int r2 = r2.size()
            if (r2 != r1) goto L109
            goto L10a
        L109:
            r3 = r4
        L10a:
            com.tkay.expressad.exoplayer.k.a.b(r3)
        L10d:
            if (r4 >= r1) goto L12b
            java.lang.Object r2 = r15.valueAt(r4)
            com.tkay.expressad.exoplayer.e.a.j r2 = (com.tkay.expressad.exoplayer.e.a.j) r2
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r3 = r0.w
            int r5 = r2.c
            java.lang.Object r3 = r3.get(r5)
            com.tkay.expressad.exoplayer.e.a.e$c r3 = (com.tkay.expressad.exoplayer.e.a.e.c) r3
            int r5 = r2.c
            com.tkay.expressad.exoplayer.e.a.c r5 = a(r12, r5)
            r3.a(r2, r5)
            int r4 = r4 + 1
            goto L10d
        L12b:
            return
    }

    private static void b(com.tkay.expressad.exoplayer.e.a.a.a r4, android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e.c> r5, int r6, byte[] r7) {
            int r0 = com.tkay.expressad.exoplayer.e.a.a.C
            com.tkay.expressad.exoplayer.e.a.a$b r0 = r4.d(r0)
            com.tkay.expressad.exoplayer.k.s r0 = r0.aV
            com.tkay.expressad.exoplayer.e.a.e$c r5 = a(r0, r5)
            if (r5 != 0) goto Lf
            return
        Lf:
            com.tkay.expressad.exoplayer.e.a.l r0 = r5.b
            long r1 = r0.s
            r5.a()
            int r3 = com.tkay.expressad.exoplayer.e.a.a.B
            com.tkay.expressad.exoplayer.e.a.a$b r3 = r4.d(r3)
            if (r3 == 0) goto L2e
            r3 = r6 & 2
            if (r3 != 0) goto L2e
            int r1 = com.tkay.expressad.exoplayer.e.a.a.B
            com.tkay.expressad.exoplayer.e.a.a$b r1 = r4.d(r1)
            com.tkay.expressad.exoplayer.k.s r1 = r1.aV
            long r1 = d(r1)
        L2e:
            a(r4, r5, r1, r6)
            com.tkay.expressad.exoplayer.e.a.j r5 = r5.c
            com.tkay.expressad.exoplayer.e.a.c r6 = r0.a
            int r6 = r6.a
            com.tkay.expressad.exoplayer.e.a.k r5 = r5.a(r6)
            int r6 = com.tkay.expressad.exoplayer.e.a.a.ah
            com.tkay.expressad.exoplayer.e.a.a$b r6 = r4.d(r6)
            if (r6 == 0) goto L48
            com.tkay.expressad.exoplayer.k.s r6 = r6.aV
            a(r5, r6, r0)
        L48:
            int r6 = com.tkay.expressad.exoplayer.e.a.a.ai
            com.tkay.expressad.exoplayer.e.a.a$b r6 = r4.d(r6)
            if (r6 == 0) goto L55
            com.tkay.expressad.exoplayer.k.s r6 = r6.aV
            a(r6, r0)
        L55:
            int r6 = com.tkay.expressad.exoplayer.e.a.a.am
            com.tkay.expressad.exoplayer.e.a.a$b r6 = r4.d(r6)
            r1 = 0
            if (r6 == 0) goto L63
            com.tkay.expressad.exoplayer.k.s r6 = r6.aV
            a(r6, r1, r0)
        L63:
            int r6 = com.tkay.expressad.exoplayer.e.a.a.aj
            com.tkay.expressad.exoplayer.e.a.a$b r6 = r4.d(r6)
            int r2 = com.tkay.expressad.exoplayer.e.a.a.ak
            com.tkay.expressad.exoplayer.e.a.a$b r2 = r4.d(r2)
            if (r6 == 0) goto L80
            if (r2 == 0) goto L80
            com.tkay.expressad.exoplayer.k.s r6 = r6.aV
            com.tkay.expressad.exoplayer.k.s r2 = r2.aV
            if (r5 == 0) goto L7c
            java.lang.String r5 = r5.b
            goto L7d
        L7c:
            r5 = 0
        L7d:
            a(r6, r2, r5, r0)
        L80:
            java.util.List<com.tkay.expressad.exoplayer.e.a.a$b> r5 = r4.aW
            int r5 = r5.size()
        L86:
            if (r1 >= r5) goto L9e
            java.util.List<com.tkay.expressad.exoplayer.e.a.a$b> r6 = r4.aW
            java.lang.Object r6 = r6.get(r1)
            com.tkay.expressad.exoplayer.e.a.a$b r6 = (com.tkay.expressad.exoplayer.e.a.a.b) r6
            int r2 = r6.aU
            int r3 = com.tkay.expressad.exoplayer.e.a.a.al
            if (r2 != r3) goto L9b
            com.tkay.expressad.exoplayer.k.s r6 = r6.aV
            a(r6, r0, r7)
        L9b:
            int r1 = r1 + 1
            goto L86
        L9e:
            return
    }

    private static void b(com.tkay.expressad.exoplayer.k.s r1, com.tkay.expressad.exoplayer.e.a.l r2) {
            r0 = 0
            a(r1, r0, r2)
            return
    }

    private static boolean b(int r1) {
            int r0 = com.tkay.expressad.exoplayer.e.a.a.G
            if (r1 == r0) goto L27
            int r0 = com.tkay.expressad.exoplayer.e.a.a.I
            if (r1 == r0) goto L27
            int r0 = com.tkay.expressad.exoplayer.e.a.a.J
            if (r1 == r0) goto L27
            int r0 = com.tkay.expressad.exoplayer.e.a.a.K
            if (r1 == r0) goto L27
            int r0 = com.tkay.expressad.exoplayer.e.a.a.L
            if (r1 == r0) goto L27
            int r0 = com.tkay.expressad.exoplayer.e.a.a.P
            if (r1 == r0) goto L27
            int r0 = com.tkay.expressad.exoplayer.e.a.a.Q
            if (r1 == r0) goto L27
            int r0 = com.tkay.expressad.exoplayer.e.a.a.R
            if (r1 == r0) goto L27
            int r0 = com.tkay.expressad.exoplayer.e.a.a.U
            if (r1 != r0) goto L25
            goto L27
        L25:
            r1 = 0
            return r1
        L27:
            r1 = 1
            return r1
    }

    private boolean b(com.tkay.expressad.exoplayer.e.f r9) {
            r8 = this;
            int r0 = r8.J
            r1 = 8
            r2 = 0
            r3 = 1
            if (r0 != 0) goto L2a
            com.tkay.expressad.exoplayer.k.s r0 = r8.B
            byte[] r0 = r0.a
            boolean r0 = r9.a(r0, r2, r1, r3)
            if (r0 != 0) goto L13
            return r2
        L13:
            r8.J = r1
            com.tkay.expressad.exoplayer.k.s r0 = r8.B
            r0.c(r2)
            com.tkay.expressad.exoplayer.k.s r0 = r8.B
            long r4 = r0.h()
            r8.I = r4
            com.tkay.expressad.exoplayer.k.s r0 = r8.B
            int r0 = r0.i()
            r8.H = r0
        L2a:
            long r4 = r8.I
            r6 = 1
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 != 0) goto L47
            com.tkay.expressad.exoplayer.k.s r0 = r8.B
            byte[] r0 = r0.a
            r9.b(r0, r1, r1)
            int r0 = r8.J
            int r0 = r0 + r1
            r8.J = r0
            com.tkay.expressad.exoplayer.k.s r0 = r8.B
            long r4 = r0.n()
            r8.I = r4
            goto L78
        L47:
            r6 = 0
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 != 0) goto L78
            long r4 = r9.d()
            r6 = -1
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 != 0) goto L69
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r0 = r8.D
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L69
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r0 = r8.D
            java.lang.Object r0 = r0.peek()
            com.tkay.expressad.exoplayer.e.a.a$a r0 = (com.tkay.expressad.exoplayer.e.a.a.a) r0
            long r4 = r0.aV
        L69:
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 == 0) goto L78
            long r6 = r9.c()
            long r4 = r4 - r6
            int r0 = r8.J
            long r6 = (long) r0
            long r4 = r4 + r6
            r8.I = r4
        L78:
            long r4 = r8.I
            int r0 = r8.J
            long r6 = (long) r0
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 < 0) goto L1c2
            long r4 = r9.c()
            int r0 = r8.J
            long r6 = (long) r0
            long r4 = r4 - r6
            int r0 = r8.H
            int r6 = com.tkay.expressad.exoplayer.e.a.a.P
            if (r0 != r6) goto Lab
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r0 = r8.w
            int r0 = r0.size()
            r6 = r2
        L96:
            if (r6 >= r0) goto Lab
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r7 = r8.w
            java.lang.Object r7 = r7.valueAt(r6)
            com.tkay.expressad.exoplayer.e.a.e$c r7 = (com.tkay.expressad.exoplayer.e.a.e.c) r7
            com.tkay.expressad.exoplayer.e.a.l r7 = r7.b
            r7.b = r4
            r7.d = r4
            r7.c = r4
            int r6 = r6 + 1
            goto L96
        Lab:
            int r0 = r8.H
            int r6 = com.tkay.expressad.exoplayer.e.a.a.m
            r7 = 0
            if (r0 != r6) goto Lcf
            r8.Q = r7
            long r0 = r8.I
            long r0 = r0 + r4
            r8.L = r0
            boolean r9 = r8.Y
            if (r9 != 0) goto Lcb
            com.tkay.expressad.exoplayer.e.g r9 = r8.V
            com.tkay.expressad.exoplayer.e.k$b r0 = new com.tkay.expressad.exoplayer.e.k$b
            long r1 = r8.O
            r0.<init>(r1, r4)
            r9.a(r0)
            r8.Y = r3
        Lcb:
            r9 = 2
            r8.G = r9
            return r3
        Lcf:
            int r0 = r8.H
            int r4 = com.tkay.expressad.exoplayer.e.a.a.G
            if (r0 == r4) goto Lf8
            int r4 = com.tkay.expressad.exoplayer.e.a.a.I
            if (r0 == r4) goto Lf8
            int r4 = com.tkay.expressad.exoplayer.e.a.a.J
            if (r0 == r4) goto Lf8
            int r4 = com.tkay.expressad.exoplayer.e.a.a.K
            if (r0 == r4) goto Lf8
            int r4 = com.tkay.expressad.exoplayer.e.a.a.L
            if (r0 == r4) goto Lf8
            int r4 = com.tkay.expressad.exoplayer.e.a.a.P
            if (r0 == r4) goto Lf8
            int r4 = com.tkay.expressad.exoplayer.e.a.a.Q
            if (r0 == r4) goto Lf8
            int r4 = com.tkay.expressad.exoplayer.e.a.a.R
            if (r0 == r4) goto Lf8
            int r4 = com.tkay.expressad.exoplayer.e.a.a.U
            if (r0 != r4) goto Lf6
            goto Lf8
        Lf6:
            r0 = r2
            goto Lf9
        Lf8:
            r0 = r3
        Lf9:
            if (r0 == 0) goto L124
            long r0 = r9.c()
            long r4 = r8.I
            long r0 = r0 + r4
            r4 = 8
            long r0 = r0 - r4
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r9 = r8.D
            com.tkay.expressad.exoplayer.e.a.a$a r2 = new com.tkay.expressad.exoplayer.e.a.a$a
            int r4 = r8.H
            r2.<init>(r4, r0)
            r9.push(r2)
            long r4 = r8.I
            int r9 = r8.J
            long r6 = (long) r9
            int r9 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r9 != 0) goto L11f
            r8.a(r0)
            goto L1b9
        L11f:
            r8.a()
            goto L1b9
        L124:
            int r9 = r8.H
            int r0 = com.tkay.expressad.exoplayer.e.a.a.X
            if (r9 == r0) goto L179
            int r0 = com.tkay.expressad.exoplayer.e.a.a.W
            if (r9 == r0) goto L179
            int r0 = com.tkay.expressad.exoplayer.e.a.a.H
            if (r9 == r0) goto L179
            int r0 = com.tkay.expressad.exoplayer.e.a.a.F
            if (r9 == r0) goto L179
            int r0 = com.tkay.expressad.exoplayer.e.a.a.Y
            if (r9 == r0) goto L179
            int r0 = com.tkay.expressad.exoplayer.e.a.a.B
            if (r9 == r0) goto L179
            int r0 = com.tkay.expressad.exoplayer.e.a.a.C
            if (r9 == r0) goto L179
            int r0 = com.tkay.expressad.exoplayer.e.a.a.T
            if (r9 == r0) goto L179
            int r0 = com.tkay.expressad.exoplayer.e.a.a.D
            if (r9 == r0) goto L179
            int r0 = com.tkay.expressad.exoplayer.e.a.a.E
            if (r9 == r0) goto L179
            int r0 = com.tkay.expressad.exoplayer.e.a.a.Z
            if (r9 == r0) goto L179
            int r0 = com.tkay.expressad.exoplayer.e.a.a.ah
            if (r9 == r0) goto L179
            int r0 = com.tkay.expressad.exoplayer.e.a.a.ai
            if (r9 == r0) goto L179
            int r0 = com.tkay.expressad.exoplayer.e.a.a.am
            if (r9 == r0) goto L179
            int r0 = com.tkay.expressad.exoplayer.e.a.a.al
            if (r9 == r0) goto L179
            int r0 = com.tkay.expressad.exoplayer.e.a.a.aj
            if (r9 == r0) goto L179
            int r0 = com.tkay.expressad.exoplayer.e.a.a.ak
            if (r9 == r0) goto L179
            int r0 = com.tkay.expressad.exoplayer.e.a.a.V
            if (r9 == r0) goto L179
            int r0 = com.tkay.expressad.exoplayer.e.a.a.S
            if (r9 == r0) goto L179
            int r0 = com.tkay.expressad.exoplayer.e.a.a.aL
            if (r9 != r0) goto L177
            goto L179
        L177:
            r9 = r2
            goto L17a
        L179:
            r9 = r3
        L17a:
            r4 = 2147483647(0x7fffffff, double:1.060997895E-314)
            if (r9 == 0) goto L1af
            int r9 = r8.J
            if (r9 != r1) goto L1a7
            long r6 = r8.I
            int r9 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r9 > 0) goto L19f
            com.tkay.expressad.exoplayer.k.s r9 = new com.tkay.expressad.exoplayer.k.s
            int r0 = (int) r6
            r9.<init>(r0)
            r8.K = r9
            com.tkay.expressad.exoplayer.k.s r9 = r8.B
            byte[] r9 = r9.a
            com.tkay.expressad.exoplayer.k.s r0 = r8.K
            byte[] r0 = r0.a
            java.lang.System.arraycopy(r9, r2, r0, r2, r1)
            r8.G = r3
            goto L1b9
        L19f:
            com.tkay.expressad.exoplayer.t r9 = new com.tkay.expressad.exoplayer.t
            java.lang.String r0 = "Leaf atom with length > 2147483647 (unsupported)."
            r9.<init>(r0)
            throw r9
        L1a7:
            com.tkay.expressad.exoplayer.t r9 = new com.tkay.expressad.exoplayer.t
            java.lang.String r0 = "Leaf atom defines extended atom size (unsupported)."
            r9.<init>(r0)
            throw r9
        L1af:
            long r0 = r8.I
            int r9 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r9 > 0) goto L1ba
            r8.K = r7
            r8.G = r3
        L1b9:
            return r3
        L1ba:
            com.tkay.expressad.exoplayer.t r9 = new com.tkay.expressad.exoplayer.t
            java.lang.String r0 = "Skipping atom with length > 2147483647 (unsupported)."
            r9.<init>(r0)
            throw r9
        L1c2:
            com.tkay.expressad.exoplayer.t r9 = new com.tkay.expressad.exoplayer.t
            java.lang.String r0 = "Atom size less than header length (unsupported)."
            r9.<init>(r0)
            throw r9
    }

    private static long c(com.tkay.expressad.exoplayer.k.s r2) {
            r0 = 8
            r2.c(r0)
            int r0 = r2.i()
            int r0 = com.tkay.expressad.exoplayer.e.a.a.a(r0)
            if (r0 != 0) goto L14
            long r0 = r2.h()
            return r0
        L14:
            long r0 = r2.n()
            return r0
    }

    private void c(com.tkay.expressad.exoplayer.e.a.a.a r8) {
            r7 = this;
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r0 = r7.w
            int r1 = r7.s
            byte[] r2 = r7.C
            a(r8, r0, r1, r2)
            com.tkay.expressad.exoplayer.d.e r0 = r7.v
            if (r0 == 0) goto Lf
            r8 = 0
            goto L15
        Lf:
            java.util.List<com.tkay.expressad.exoplayer.e.a.a$b> r8 = r8.aW
            com.tkay.expressad.exoplayer.d.e r8 = a(r8)
        L15:
            r0 = 0
            if (r8 == 0) goto L2f
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r1 = r7.w
            int r1 = r1.size()
            r2 = r0
        L1f:
            if (r2 >= r1) goto L2f
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r3 = r7.w
            java.lang.Object r3 = r3.valueAt(r2)
            com.tkay.expressad.exoplayer.e.a.e$c r3 = (com.tkay.expressad.exoplayer.e.a.e.c) r3
            r3.a(r8)
            int r2 = r2 + 1
            goto L1f
        L2f:
            long r1 = r7.N
            r3 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r8 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r8 == 0) goto L54
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r8 = r7.w
            int r8 = r8.size()
        L40:
            if (r0 >= r8) goto L52
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r1 = r7.w
            java.lang.Object r1 = r1.valueAt(r0)
            com.tkay.expressad.exoplayer.e.a.e$c r1 = (com.tkay.expressad.exoplayer.e.a.e.c) r1
            long r5 = r7.N
            r1.a(r5)
            int r0 = r0 + 1
            goto L40
        L52:
            r7.N = r3
        L54:
            return
    }

    private void c(com.tkay.expressad.exoplayer.e.f r26) {
            r25 = this;
            r0 = r25
            r1 = r26
            long r2 = r0.I
            int r2 = (int) r2
            int r3 = r0.J
            int r2 = r2 - r3
            com.tkay.expressad.exoplayer.k.s r3 = r0.K
            if (r3 == 0) goto L176
            byte[] r3 = r3.a
            r4 = 8
            r1.b(r3, r4, r2)
            com.tkay.expressad.exoplayer.e.a.a$b r2 = new com.tkay.expressad.exoplayer.e.a.a$b
            int r3 = r0.H
            com.tkay.expressad.exoplayer.k.s r5 = r0.K
            r2.<init>(r3, r5)
            long r5 = r26.c()
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r3 = r0.D
            boolean r3 = r3.isEmpty()
            if (r3 != 0) goto L37
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r3 = r0.D
            java.lang.Object r3 = r3.peek()
            com.tkay.expressad.exoplayer.e.a.a$a r3 = (com.tkay.expressad.exoplayer.e.a.a.a) r3
            r3.a(r2)
            goto L179
        L37:
            int r3 = r2.aU
            int r7 = com.tkay.expressad.exoplayer.e.a.a.F
            r8 = 0
            if (r3 != r7) goto Lff
            com.tkay.expressad.exoplayer.k.s r2 = r2.aV
            r2.c(r4)
            int r3 = r2.i()
            int r3 = com.tkay.expressad.exoplayer.e.a.a.a(r3)
            r4 = 4
            r2.d(r4)
            long r15 = r2.h()
            if (r3 != 0) goto L5e
            long r9 = r2.h()
            long r11 = r2.h()
            goto L66
        L5e:
            long r9 = r2.n()
            long r11 = r2.n()
        L66:
            long r5 = r5 + r11
            r17 = r9
            r11 = 1000000(0xf4240, double:4.940656E-318)
            r9 = r17
            r13 = r15
            long r19 = com.tkay.expressad.exoplayer.k.af.a(r9, r11, r13)
            r3 = 2
            r2.d(r3)
            int r3 = r2.e()
            int[] r7 = new int[r3]
            long[] r13 = new long[r3]
            long[] r14 = new long[r3]
            long[] r11 = new long[r3]
            r9 = r19
        L85:
            if (r8 >= r3) goto Ld7
            int r12 = r2.i()
            r21 = -2147483648(0xffffffff80000000, float:-0.0)
            r21 = r12 & r21
            if (r21 != 0) goto Lcf
            long r21 = r2.h()
            r23 = 2147483647(0x7fffffff, float:NaN)
            r12 = r12 & r23
            r7[r8] = r12
            r13[r8] = r5
            r11[r8] = r9
            long r17 = r17 + r21
            r21 = 1000000(0xf4240, double:4.940656E-318)
            r9 = r17
            r4 = r11
            r11 = r21
            r21 = r3
            r3 = r13
            r1 = r14
            r13 = r15
            long r9 = com.tkay.expressad.exoplayer.k.af.a(r9, r11, r13)
            r11 = r4[r8]
            long r11 = r9 - r11
            r1[r8] = r11
            r11 = 4
            r2.d(r11)
            r12 = r7[r8]
            long r12 = (long) r12
            long r5 = r5 + r12
            int r8 = r8 + 1
            r14 = r1
            r13 = r3
            r3 = r21
            r1 = r26
            r24 = r11
            r11 = r4
            r4 = r24
            goto L85
        Lcf:
            com.tkay.expressad.exoplayer.t r1 = new com.tkay.expressad.exoplayer.t
            java.lang.String r2 = "Unhandled indirect reference"
            r1.<init>(r2)
            throw r1
        Ld7:
            r4 = r11
            r3 = r13
            r1 = r14
            java.lang.Long r2 = java.lang.Long.valueOf(r19)
            com.tkay.expressad.exoplayer.e.a r5 = new com.tkay.expressad.exoplayer.e.a
            r5.<init>(r7, r3, r1, r4)
            android.util.Pair r1 = android.util.Pair.create(r2, r5)
            java.lang.Object r2 = r1.first
            java.lang.Long r2 = (java.lang.Long) r2
            long r2 = r2.longValue()
            r0.P = r2
            com.tkay.expressad.exoplayer.e.g r2 = r0.V
            java.lang.Object r1 = r1.second
            com.tkay.expressad.exoplayer.e.k r1 = (com.tkay.expressad.exoplayer.e.k) r1
            r2.a(r1)
            r1 = 1
            r0.Y = r1
            goto L173
        Lff:
            int r1 = r2.aU
            int r3 = com.tkay.expressad.exoplayer.e.a.a.aL
            if (r1 != r3) goto L173
            com.tkay.expressad.exoplayer.k.s r1 = r2.aV
            com.tkay.expressad.exoplayer.e.m[] r2 = r0.W
            if (r2 == 0) goto L173
            int r2 = r2.length
            if (r2 != 0) goto L10f
            goto L173
        L10f:
            r2 = 12
            r1.c(r2)
            int r3 = r1.a()
            r1.p()
            r1.p()
            long r13 = r1.h()
            long r9 = r1.h()
            r11 = 1000000(0xf4240, double:4.940656E-318)
            long r4 = com.tkay.expressad.exoplayer.k.af.a(r9, r11, r13)
            com.tkay.expressad.exoplayer.e.m[] r6 = r0.W
            int r7 = r6.length
            r9 = r8
        L131:
            if (r9 >= r7) goto L13e
            r10 = r6[r9]
            r1.c(r2)
            r10.a(r1, r3)
            int r9 = r9 + 1
            goto L131
        L13e:
            long r1 = r0.P
            r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r6 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r6 == 0) goto L164
            long r1 = r1 + r4
            com.tkay.expressad.exoplayer.k.ac r4 = r0.A
            if (r4 == 0) goto L152
            long r1 = r4.b(r1)
        L152:
            com.tkay.expressad.exoplayer.e.m[] r4 = r0.W
            int r5 = r4.length
        L155:
            if (r8 >= r5) goto L173
            r9 = r4[r8]
            r12 = 1
            r14 = 0
            r15 = 0
            r10 = r1
            r13 = r3
            r9.a(r10, r12, r13, r14, r15)
            int r8 = r8 + 1
            goto L155
        L164:
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.e$b> r1 = r0.E
            com.tkay.expressad.exoplayer.e.a.e$b r2 = new com.tkay.expressad.exoplayer.e.a.e$b
            r2.<init>(r4, r3)
            r1.addLast(r2)
            int r1 = r0.M
            int r1 = r1 + r3
            r0.M = r1
        L173:
            r1 = r26
            goto L179
        L176:
            r1.c(r2)
        L179:
            long r1 = r26.c()
            r0.a(r1)
            return
    }

    private static long d(com.tkay.expressad.exoplayer.k.s r2) {
            r0 = 8
            r2.c(r0)
            int r0 = r2.i()
            int r0 = com.tkay.expressad.exoplayer.e.a.a.a(r0)
            r1 = 1
            if (r0 != r1) goto L15
            long r0 = r2.n()
            return r0
        L15:
            long r0 = r2.h()
            return r0
    }

    private void d(com.tkay.expressad.exoplayer.e.f r12) {
            r11 = this;
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r0 = r11.w
            int r0 = r0.size()
            r1 = 0
            r2 = 0
            r3 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r5 = r1
        Le:
            if (r5 >= r0) goto L34
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r6 = r11.w
            java.lang.Object r6 = r6.valueAt(r5)
            com.tkay.expressad.exoplayer.e.a.e$c r6 = (com.tkay.expressad.exoplayer.e.a.e.c) r6
            com.tkay.expressad.exoplayer.e.a.l r6 = r6.b
            boolean r7 = r6.r
            if (r7 == 0) goto L31
            long r7 = r6.d
            int r7 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
            if (r7 >= 0) goto L31
            long r2 = r6.d
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r4 = r11.w
            java.lang.Object r4 = r4.valueAt(r5)
            com.tkay.expressad.exoplayer.e.a.e$c r4 = (com.tkay.expressad.exoplayer.e.a.e.c) r4
            r9 = r2
            r2 = r4
            r3 = r9
        L31:
            int r5 = r5 + 1
            goto Le
        L34:
            if (r2 != 0) goto L3a
            r12 = 3
            r11.G = r12
            return
        L3a:
            long r5 = r12.c()
            long r3 = r3 - r5
            int r0 = (int) r3
            if (r0 < 0) goto L58
            r12.c(r0)
            com.tkay.expressad.exoplayer.e.a.l r0 = r2.b
            com.tkay.expressad.exoplayer.k.s r2 = r0.q
            byte[] r2 = r2.a
            int r3 = r0.p
            r12.b(r2, r1, r3)
            com.tkay.expressad.exoplayer.k.s r12 = r0.q
            r12.c(r1)
            r0.r = r1
            return
        L58:
            com.tkay.expressad.exoplayer.t r12 = new com.tkay.expressad.exoplayer.t
            java.lang.String r0 = "Offset to encryption data was negative."
            r12.<init>(r0)
            throw r12
    }

    private boolean e(com.tkay.expressad.exoplayer.e.f r20) {
            r19 = this;
            r0 = r19
            r1 = r20
            int r2 = r0.G
            r3 = 3
            r4 = 4
            r5 = 0
            r6 = 1
            r7 = 0
            if (r2 != r3) goto Lc9
            com.tkay.expressad.exoplayer.e.a.e$c r2 = r0.Q
            if (r2 != 0) goto L77
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r2 = r0.w
            r8 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r10 = r2.size()
            r12 = r5
            r11 = r7
        L1e:
            if (r11 >= r10) goto L3f
            java.lang.Object r13 = r2.valueAt(r11)
            com.tkay.expressad.exoplayer.e.a.e$c r13 = (com.tkay.expressad.exoplayer.e.a.e.c) r13
            int r14 = r13.g
            com.tkay.expressad.exoplayer.e.a.l r15 = r13.b
            int r15 = r15.e
            if (r14 == r15) goto L3c
            com.tkay.expressad.exoplayer.e.a.l r14 = r13.b
            long[] r14 = r14.g
            int r15 = r13.g
            r15 = r14[r15]
            int r14 = (r15 > r8 ? 1 : (r15 == r8 ? 0 : -1))
            if (r14 >= 0) goto L3c
            r12 = r13
            r8 = r15
        L3c:
            int r11 = r11 + 1
            goto L1e
        L3f:
            if (r12 != 0) goto L5a
            long r2 = r0.L
            long r4 = r20.c()
            long r2 = r2 - r4
            int r2 = (int) r2
            if (r2 < 0) goto L52
            r1.c(r2)
            r19.a()
            return r7
        L52:
            com.tkay.expressad.exoplayer.t r1 = new com.tkay.expressad.exoplayer.t
            java.lang.String r2 = "Offset to end of mdat was negative."
            r1.<init>(r2)
            throw r1
        L5a:
            com.tkay.expressad.exoplayer.e.a.l r2 = r12.b
            long[] r2 = r2.g
            int r8 = r12.g
            r8 = r2[r8]
            long r10 = r20.c()
            long r8 = r8 - r10
            int r2 = (int) r8
            if (r2 >= 0) goto L72
            java.lang.String r2 = "FragmentedMp4Extractor"
            java.lang.String r8 = "Ignoring negative offset to sample data."
            android.util.Log.w(r2, r8)
            r2 = r7
        L72:
            r1.c(r2)
            r0.Q = r12
        L77:
            com.tkay.expressad.exoplayer.e.a.e$c r2 = r0.Q
            com.tkay.expressad.exoplayer.e.a.l r2 = r2.b
            int[] r2 = r2.i
            com.tkay.expressad.exoplayer.e.a.e$c r8 = r0.Q
            int r8 = r8.e
            r2 = r2[r8]
            r0.R = r2
            com.tkay.expressad.exoplayer.e.a.e$c r2 = r0.Q
            int r2 = r2.e
            com.tkay.expressad.exoplayer.e.a.e$c r8 = r0.Q
            int r8 = r8.h
            if (r2 >= r8) goto La6
            int r2 = r0.R
            r1.c(r2)
            com.tkay.expressad.exoplayer.e.a.e$c r1 = r0.Q
            com.tkay.expressad.exoplayer.e.a.e.c.a(r1)
            com.tkay.expressad.exoplayer.e.a.e$c r1 = r0.Q
            boolean r1 = r1.b()
            if (r1 != 0) goto La3
            r0.Q = r5
        La3:
            r0.G = r3
            return r6
        La6:
            com.tkay.expressad.exoplayer.e.a.e$c r2 = r0.Q
            com.tkay.expressad.exoplayer.e.a.j r2 = r2.c
            int r2 = r2.i
            if (r2 != r6) goto Lb8
            int r2 = r0.R
            r8 = 8
            int r2 = r2 - r8
            r0.R = r2
            r1.c(r8)
        Lb8:
            com.tkay.expressad.exoplayer.e.a.e$c r2 = r0.Q
            int r2 = r2.c()
            r0.S = r2
            int r8 = r0.R
            int r8 = r8 + r2
            r0.R = r8
            r0.G = r4
            r0.T = r7
        Lc9:
            com.tkay.expressad.exoplayer.e.a.e$c r2 = r0.Q
            com.tkay.expressad.exoplayer.e.a.l r2 = r2.b
            com.tkay.expressad.exoplayer.e.a.e$c r8 = r0.Q
            com.tkay.expressad.exoplayer.e.a.j r8 = r8.c
            com.tkay.expressad.exoplayer.e.a.e$c r9 = r0.Q
            com.tkay.expressad.exoplayer.e.m r10 = r9.a
            com.tkay.expressad.exoplayer.e.a.e$c r9 = r0.Q
            int r9 = r9.e
            long r11 = r2.b(r9)
            r13 = 1000(0x3e8, double:4.94E-321)
            long r11 = r11 * r13
            com.tkay.expressad.exoplayer.k.ac r13 = r0.A
            if (r13 == 0) goto Le8
            long r11 = r13.b(r11)
        Le8:
            r17 = r11
            int r11 = r8.l
            if (r11 == 0) goto L19d
            com.tkay.expressad.exoplayer.k.s r11 = r0.y
            byte[] r11 = r11.a
            r11[r7] = r7
            r11[r6] = r7
            r12 = 2
            r11[r12] = r7
            int r12 = r8.l
            int r12 = r12 + r6
            int r13 = r8.l
            int r13 = 4 - r13
        L100:
            int r14 = r0.S
            int r15 = r0.R
            if (r14 >= r15) goto L1ae
            int r14 = r0.T
            if (r14 != 0) goto L14c
            r1.b(r11, r13, r12)
            com.tkay.expressad.exoplayer.k.s r14 = r0.y
            r14.c(r7)
            com.tkay.expressad.exoplayer.k.s r14 = r0.y
            int r14 = r14.m()
            int r14 = r14 - r6
            r0.T = r14
            com.tkay.expressad.exoplayer.k.s r14 = r0.x
            r14.c(r7)
            com.tkay.expressad.exoplayer.k.s r14 = r0.x
            r10.a(r14, r4)
            com.tkay.expressad.exoplayer.k.s r14 = r0.y
            r10.a(r14, r6)
            com.tkay.expressad.exoplayer.e.m[] r14 = r0.X
            int r14 = r14.length
            if (r14 <= 0) goto L13d
            com.tkay.expressad.exoplayer.m r14 = r8.h
            java.lang.String r14 = r14.h
            r15 = r11[r4]
            boolean r14 = com.tkay.expressad.exoplayer.k.p.a(r14, r15)
            if (r14 == 0) goto L13d
            r14 = r6
            goto L13e
        L13d:
            r14 = r7
        L13e:
            r0.U = r14
            int r14 = r0.S
            int r14 = r14 + 5
            r0.S = r14
            int r14 = r0.R
            int r14 = r14 + r13
            r0.R = r14
            goto L100
        L14c:
            boolean r15 = r0.U
            if (r15 == 0) goto L18a
            com.tkay.expressad.exoplayer.k.s r15 = r0.z
            r15.a(r14)
            com.tkay.expressad.exoplayer.k.s r14 = r0.z
            byte[] r14 = r14.a
            int r15 = r0.T
            r1.b(r14, r7, r15)
            com.tkay.expressad.exoplayer.k.s r14 = r0.z
            int r15 = r0.T
            r10.a(r14, r15)
            int r14 = r0.T
            com.tkay.expressad.exoplayer.k.s r15 = r0.z
            byte[] r15 = r15.a
            com.tkay.expressad.exoplayer.k.s r4 = r0.z
            int r4 = r4.b()
            int r4 = com.tkay.expressad.exoplayer.k.p.a(r15, r4)
            com.tkay.expressad.exoplayer.k.s r15 = r0.z
            com.tkay.expressad.exoplayer.m r6 = r8.h
            java.lang.String r6 = r6.h
            java.lang.String r3 = "video/hevc"
            boolean r3 = r3.equals(r6)
            r15.c(r3)
            com.tkay.expressad.exoplayer.k.s r3 = r0.z
            r3.b(r4)
            goto L18e
        L18a:
            int r14 = r10.a(r1, r14, r7)
        L18e:
            int r3 = r0.S
            int r3 = r3 + r14
            r0.S = r3
            int r3 = r0.T
            int r3 = r3 - r14
            r0.T = r3
            r3 = 3
            r4 = 4
            r6 = 1
            goto L100
        L19d:
            int r3 = r0.S
            int r4 = r0.R
            if (r3 >= r4) goto L1ae
            int r4 = r4 - r3
            int r3 = r10.a(r1, r4, r7)
            int r4 = r0.S
            int r4 = r4 + r3
            r0.S = r4
            goto L19d
        L1ae:
            boolean[] r1 = r2.l
            boolean r1 = r1[r9]
            boolean r3 = r2.m
            if (r3 == 0) goto L1ce
            r3 = 1073741824(0x40000000, float:2.0)
            r1 = r1 | r3
            com.tkay.expressad.exoplayer.e.a.k r3 = r2.o
            if (r3 == 0) goto L1c0
            com.tkay.expressad.exoplayer.e.a.k r2 = r2.o
            goto L1c8
        L1c0:
            com.tkay.expressad.exoplayer.e.a.c r2 = r2.a
            int r2 = r2.a
            com.tkay.expressad.exoplayer.e.a.k r2 = r8.a(r2)
        L1c8:
            com.tkay.expressad.exoplayer.e.m$a r2 = r2.c
            r13 = r1
            r16 = r2
            goto L1d1
        L1ce:
            r13 = r1
            r16 = r5
        L1d1:
            int r14 = r0.R
            r15 = 0
            r11 = r17
            r10.a(r11, r13, r14, r15, r16)
        L1d9:
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.e$b> r1 = r0.E
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L211
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.e$b> r1 = r0.E
            java.lang.Object r1 = r1.removeFirst()
            com.tkay.expressad.exoplayer.e.a.e$b r1 = (com.tkay.expressad.exoplayer.e.a.e.b) r1
            int r2 = r0.M
            int r3 = r1.b
            int r2 = r2 - r3
            r0.M = r2
            long r2 = r1.a
            long r2 = r17 + r2
            com.tkay.expressad.exoplayer.k.ac r4 = r0.A
            if (r4 == 0) goto L1fc
            long r2 = r4.b(r2)
        L1fc:
            com.tkay.expressad.exoplayer.e.m[] r4 = r0.W
            int r6 = r4.length
            r15 = r7
        L200:
            if (r15 >= r6) goto L1d9
            r8 = r4[r15]
            r11 = 1
            int r12 = r1.b
            int r13 = r0.M
            r14 = 0
            r9 = r2
            r8.a(r9, r11, r12, r13, r14)
            int r15 = r15 + 1
            goto L200
        L211:
            com.tkay.expressad.exoplayer.e.a.e$c r1 = r0.Q
            boolean r1 = r1.b()
            if (r1 != 0) goto L21b
            r0.Q = r5
        L21b:
            r1 = 3
            r0.G = r1
            r1 = 1
            return r1
    }

    @Override
    public final int a(com.tkay.expressad.exoplayer.e.f r25, com.tkay.expressad.exoplayer.e.j r26) {
            r24 = this;
            r0 = r24
            r1 = r25
        L4:
            int r2 = r0.G
            r3 = 2
            r4 = 0
            r5 = 8
            r6 = 1
            if (r2 == 0) goto L41c
            r8 = 4
            if (r2 == r6) goto L29d
            r9 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r11 = 3
            if (r2 == r3) goto L241
            if (r2 != r11) goto Ld5
            com.tkay.expressad.exoplayer.e.a.e$c r2 = r0.Q
            if (r2 != 0) goto L83
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r2 = r0.w
            int r12 = r2.size()
            r14 = r4
            r13 = 0
        L26:
            if (r13 >= r12) goto L49
            java.lang.Object r15 = r2.valueAt(r13)
            com.tkay.expressad.exoplayer.e.a.e$c r15 = (com.tkay.expressad.exoplayer.e.a.e.c) r15
            int r3 = r15.g
            com.tkay.expressad.exoplayer.e.a.l r7 = r15.b
            int r7 = r7.e
            if (r3 == r7) goto L45
            com.tkay.expressad.exoplayer.e.a.l r3 = r15.b
            long[] r3 = r3.g
            int r7 = r15.g
            r17 = r3[r7]
            int r3 = (r17 > r9 ? 1 : (r17 == r9 ? 0 : -1))
            if (r3 >= 0) goto L45
            r14 = r15
            r9 = r17
        L45:
            int r13 = r13 + 1
            r3 = 2
            goto L26
        L49:
            if (r14 != 0) goto L66
            long r2 = r0.L
            long r4 = r25.c()
            long r2 = r2 - r4
            int r2 = (int) r2
            if (r2 < 0) goto L5e
            r1.c(r2)
            r24.a()
            r6 = 0
            goto L23d
        L5e:
            com.tkay.expressad.exoplayer.t r1 = new com.tkay.expressad.exoplayer.t
            java.lang.String r2 = "Offset to end of mdat was negative."
            r1.<init>(r2)
            throw r1
        L66:
            com.tkay.expressad.exoplayer.e.a.l r2 = r14.b
            long[] r2 = r2.g
            int r3 = r14.g
            r9 = r2[r3]
            long r2 = r25.c()
            long r9 = r9 - r2
            int r2 = (int) r9
            if (r2 >= 0) goto L7e
            java.lang.String r2 = "FragmentedMp4Extractor"
            java.lang.String r3 = "Ignoring negative offset to sample data."
            android.util.Log.w(r2, r3)
            r2 = 0
        L7e:
            r1.c(r2)
            r0.Q = r14
        L83:
            com.tkay.expressad.exoplayer.e.a.e$c r2 = r0.Q
            com.tkay.expressad.exoplayer.e.a.l r2 = r2.b
            int[] r2 = r2.i
            com.tkay.expressad.exoplayer.e.a.e$c r3 = r0.Q
            int r3 = r3.e
            r2 = r2[r3]
            r0.R = r2
            com.tkay.expressad.exoplayer.e.a.e$c r2 = r0.Q
            int r2 = r2.e
            com.tkay.expressad.exoplayer.e.a.e$c r3 = r0.Q
            int r3 = r3.h
            if (r2 >= r3) goto Lb3
            int r2 = r0.R
            r1.c(r2)
            com.tkay.expressad.exoplayer.e.a.e$c r2 = r0.Q
            com.tkay.expressad.exoplayer.e.a.e.c.a(r2)
            com.tkay.expressad.exoplayer.e.a.e$c r2 = r0.Q
            boolean r2 = r2.b()
            if (r2 != 0) goto Laf
            r0.Q = r4
        Laf:
            r0.G = r11
            goto L23d
        Lb3:
            com.tkay.expressad.exoplayer.e.a.e$c r2 = r0.Q
            com.tkay.expressad.exoplayer.e.a.j r2 = r2.c
            int r2 = r2.i
            if (r2 != r6) goto Lc3
            int r2 = r0.R
            int r2 = r2 - r5
            r0.R = r2
            r1.c(r5)
        Lc3:
            com.tkay.expressad.exoplayer.e.a.e$c r2 = r0.Q
            int r2 = r2.c()
            r0.S = r2
            int r3 = r0.R
            int r3 = r3 + r2
            r0.R = r3
            r0.G = r8
            r2 = 0
            r0.T = r2
        Ld5:
            com.tkay.expressad.exoplayer.e.a.e$c r2 = r0.Q
            com.tkay.expressad.exoplayer.e.a.l r2 = r2.b
            com.tkay.expressad.exoplayer.e.a.e$c r3 = r0.Q
            com.tkay.expressad.exoplayer.e.a.j r3 = r3.c
            com.tkay.expressad.exoplayer.e.a.e$c r5 = r0.Q
            com.tkay.expressad.exoplayer.e.m r5 = r5.a
            com.tkay.expressad.exoplayer.e.a.e$c r7 = r0.Q
            int r7 = r7.e
            long r9 = r2.b(r7)
            r12 = 1000(0x3e8, double:4.94E-321)
            long r9 = r9 * r12
            com.tkay.expressad.exoplayer.k.ac r12 = r0.A
            if (r12 == 0) goto Lf4
            long r9 = r12.b(r9)
        Lf4:
            int r12 = r3.l
            if (r12 == 0) goto L1ac
            com.tkay.expressad.exoplayer.k.s r12 = r0.y
            byte[] r12 = r12.a
            r13 = 0
            r12[r13] = r13
            r12[r6] = r13
            r14 = 2
            r12[r14] = r13
            int r13 = r3.l
            int r13 = r13 + r6
            int r14 = r3.l
            int r14 = 4 - r14
        L10b:
            int r15 = r0.S
            int r11 = r0.R
            if (r15 >= r11) goto L1be
            int r11 = r0.T
            if (r11 != 0) goto L158
            r1.b(r12, r14, r13)
            com.tkay.expressad.exoplayer.k.s r11 = r0.y
            r15 = 0
            r11.c(r15)
            com.tkay.expressad.exoplayer.k.s r11 = r0.y
            int r11 = r11.m()
            int r11 = r11 - r6
            r0.T = r11
            com.tkay.expressad.exoplayer.k.s r11 = r0.x
            r11.c(r15)
            com.tkay.expressad.exoplayer.k.s r11 = r0.x
            r5.a(r11, r8)
            com.tkay.expressad.exoplayer.k.s r11 = r0.y
            r5.a(r11, r6)
            com.tkay.expressad.exoplayer.e.m[] r11 = r0.X
            int r11 = r11.length
            if (r11 <= 0) goto L149
            com.tkay.expressad.exoplayer.m r11 = r3.h
            java.lang.String r11 = r11.h
            r15 = r12[r8]
            boolean r11 = com.tkay.expressad.exoplayer.k.p.a(r11, r15)
            if (r11 == 0) goto L149
            r11 = r6
            goto L14a
        L149:
            r11 = 0
        L14a:
            r0.U = r11
            int r11 = r0.S
            int r11 = r11 + 5
            r0.S = r11
            int r11 = r0.R
            int r11 = r11 + r14
            r0.R = r11
            goto L1a9
        L158:
            boolean r15 = r0.U
            if (r15 == 0) goto L197
            com.tkay.expressad.exoplayer.k.s r15 = r0.z
            r15.a(r11)
            com.tkay.expressad.exoplayer.k.s r11 = r0.z
            byte[] r11 = r11.a
            int r15 = r0.T
            r6 = 0
            r1.b(r11, r6, r15)
            com.tkay.expressad.exoplayer.k.s r6 = r0.z
            int r11 = r0.T
            r5.a(r6, r11)
            int r6 = r0.T
            com.tkay.expressad.exoplayer.k.s r11 = r0.z
            byte[] r11 = r11.a
            com.tkay.expressad.exoplayer.k.s r15 = r0.z
            int r15 = r15.b()
            int r11 = com.tkay.expressad.exoplayer.k.p.a(r11, r15)
            com.tkay.expressad.exoplayer.k.s r15 = r0.z
            com.tkay.expressad.exoplayer.m r8 = r3.h
            java.lang.String r8 = r8.h
            java.lang.String r4 = "video/hevc"
            boolean r4 = r4.equals(r8)
            r15.c(r4)
            com.tkay.expressad.exoplayer.k.s r4 = r0.z
            r4.b(r11)
            goto L19c
        L197:
            r4 = 0
            int r6 = r5.a(r1, r11, r4)
        L19c:
            int r4 = r0.S
            int r4 = r4 + r6
            r0.S = r4
            int r4 = r0.T
            int r4 = r4 - r6
            r0.T = r4
            r4 = 0
            r6 = 1
            r8 = 4
        L1a9:
            r11 = 3
            goto L10b
        L1ac:
            int r4 = r0.S
            int r6 = r0.R
            if (r4 >= r6) goto L1be
            int r6 = r6 - r4
            r4 = 0
            int r6 = r5.a(r1, r6, r4)
            int r4 = r0.S
            int r4 = r4 + r6
            r0.S = r4
            goto L1ac
        L1be:
            boolean[] r4 = r2.l
            boolean r4 = r4[r7]
            boolean r6 = r2.m
            if (r6 == 0) goto L1df
            r6 = 1073741824(0x40000000, float:2.0)
            r4 = r4 | r6
            com.tkay.expressad.exoplayer.e.a.k r6 = r2.o
            if (r6 == 0) goto L1d0
            com.tkay.expressad.exoplayer.e.a.k r2 = r2.o
            goto L1d8
        L1d0:
            com.tkay.expressad.exoplayer.e.a.c r2 = r2.a
            int r2 = r2.a
            com.tkay.expressad.exoplayer.e.a.k r2 = r3.a(r2)
        L1d8:
            com.tkay.expressad.exoplayer.e.m$a r2 = r2.c
            r23 = r2
            r20 = r4
            goto L1e3
        L1df:
            r20 = r4
            r23 = 0
        L1e3:
            int r2 = r0.R
            r22 = 0
            r17 = r5
            r18 = r9
            r21 = r2
            r17.a(r18, r20, r21, r22, r23)
        L1f0:
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.e$b> r2 = r0.E
            boolean r2 = r2.isEmpty()
            if (r2 != 0) goto L22e
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.e$b> r2 = r0.E
            java.lang.Object r2 = r2.removeFirst()
            com.tkay.expressad.exoplayer.e.a.e$b r2 = (com.tkay.expressad.exoplayer.e.a.e.b) r2
            int r3 = r0.M
            int r4 = r2.b
            int r3 = r3 - r4
            r0.M = r3
            long r3 = r2.a
            long r3 = r3 + r9
            com.tkay.expressad.exoplayer.k.ac r5 = r0.A
            if (r5 == 0) goto L212
            long r3 = r5.b(r3)
        L212:
            com.tkay.expressad.exoplayer.e.m[] r5 = r0.W
            int r6 = r5.length
            r7 = 0
        L216:
            if (r7 >= r6) goto L1f0
            r17 = r5[r7]
            r20 = 1
            int r8 = r2.b
            int r11 = r0.M
            r23 = 0
            r18 = r3
            r21 = r8
            r22 = r11
            r17.a(r18, r20, r21, r22, r23)
            int r7 = r7 + 1
            goto L216
        L22e:
            com.tkay.expressad.exoplayer.e.a.e$c r2 = r0.Q
            boolean r2 = r2.b()
            if (r2 != 0) goto L239
            r2 = 0
            r0.Q = r2
        L239:
            r2 = 3
            r0.G = r2
            r6 = 1
        L23d:
            if (r6 == 0) goto L4
            r2 = 0
            return r2
        L241:
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r2 = r0.w
            int r2 = r2.size()
            r3 = 0
            r4 = 0
        L249:
            if (r3 >= r2) goto L26e
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r5 = r0.w
            java.lang.Object r5 = r5.valueAt(r3)
            com.tkay.expressad.exoplayer.e.a.e$c r5 = (com.tkay.expressad.exoplayer.e.a.e.c) r5
            com.tkay.expressad.exoplayer.e.a.l r5 = r5.b
            boolean r6 = r5.r
            if (r6 == 0) goto L26b
            long r6 = r5.d
            int r6 = (r6 > r9 ? 1 : (r6 == r9 ? 0 : -1))
            if (r6 >= 0) goto L26b
            long r4 = r5.d
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r6 = r0.w
            java.lang.Object r6 = r6.valueAt(r3)
            com.tkay.expressad.exoplayer.e.a.e$c r6 = (com.tkay.expressad.exoplayer.e.a.e.c) r6
            r9 = r4
            r4 = r6
        L26b:
            int r3 = r3 + 1
            goto L249
        L26e:
            if (r4 != 0) goto L275
            r2 = 3
            r0.G = r2
            goto L4
        L275:
            long r2 = r25.c()
            long r9 = r9 - r2
            int r2 = (int) r9
            if (r2 < 0) goto L295
            r1.c(r2)
            com.tkay.expressad.exoplayer.e.a.l r2 = r4.b
            com.tkay.expressad.exoplayer.k.s r3 = r2.q
            byte[] r3 = r3.a
            int r4 = r2.p
            r5 = 0
            r1.b(r3, r5, r4)
            com.tkay.expressad.exoplayer.k.s r3 = r2.q
            r3.c(r5)
            r2.r = r5
            goto L4
        L295:
            com.tkay.expressad.exoplayer.t r1 = new com.tkay.expressad.exoplayer.t
            java.lang.String r2 = "Offset to encryption data was negative."
            r1.<init>(r2)
            throw r1
        L29d:
            long r2 = r0.I
            int r2 = (int) r2
            int r3 = r0.J
            int r2 = r2 - r3
            com.tkay.expressad.exoplayer.k.s r3 = r0.K
            if (r3 == 0) goto L410
            byte[] r3 = r3.a
            r1.b(r3, r5, r2)
            com.tkay.expressad.exoplayer.e.a.a$b r2 = new com.tkay.expressad.exoplayer.e.a.a$b
            int r3 = r0.H
            com.tkay.expressad.exoplayer.k.s r4 = r0.K
            r2.<init>(r3, r4)
            long r3 = r25.c()
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r6 = r0.D
            boolean r6 = r6.isEmpty()
            if (r6 != 0) goto L2ce
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r3 = r0.D
            java.lang.Object r3 = r3.peek()
            com.tkay.expressad.exoplayer.e.a.a$a r3 = (com.tkay.expressad.exoplayer.e.a.a.a) r3
            r3.a(r2)
            goto L413
        L2ce:
            int r6 = r2.aU
            int r7 = com.tkay.expressad.exoplayer.e.a.a.F
            if (r6 != r7) goto L398
            com.tkay.expressad.exoplayer.k.s r2 = r2.aV
            r2.c(r5)
            int r5 = r2.i()
            int r5 = com.tkay.expressad.exoplayer.e.a.a.a(r5)
            r6 = 4
            r2.d(r6)
            long r13 = r2.h()
            if (r5 != 0) goto L2f4
            long r5 = r2.h()
            long r7 = r2.h()
            goto L2fc
        L2f4:
            long r5 = r2.n()
            long r7 = r2.n()
        L2fc:
            long r3 = r3 + r7
            r9 = 1000000(0xf4240, double:4.940656E-318)
            r7 = r5
            r11 = r13
            long r18 = com.tkay.expressad.exoplayer.k.af.a(r7, r9, r11)
            r7 = 2
            r2.d(r7)
            int r15 = r2.e()
            int[] r11 = new int[r15]
            long[] r12 = new long[r15]
            long[] r9 = new long[r15]
            long[] r10 = new long[r15]
            r20 = r18
            r7 = 0
        L319:
            if (r7 >= r15) goto L36f
            int r8 = r2.i()
            r16 = -2147483648(0xffffffff80000000, float:-0.0)
            r16 = r8 & r16
            if (r16 != 0) goto L367
            long r22 = r2.h()
            r16 = 2147483647(0x7fffffff, float:NaN)
            r8 = r8 & r16
            r11[r7] = r8
            r12[r7] = r3
            r10[r7] = r20
            long r5 = r5 + r22
            r20 = 1000000(0xf4240, double:4.940656E-318)
            r16 = r7
            r7 = r5
            r22 = r5
            r5 = r9
            r6 = r10
            r9 = r20
            r1 = r12
            r26 = r15
            r15 = r11
            r11 = r13
            long r20 = com.tkay.expressad.exoplayer.k.af.a(r7, r9, r11)
            r7 = r6[r16]
            long r7 = r20 - r7
            r5[r16] = r7
            r7 = 4
            r2.d(r7)
            r8 = r15[r16]
            long r8 = (long) r8
            long r3 = r3 + r8
            int r8 = r16 + 1
            r12 = r1
            r9 = r5
            r10 = r6
            r7 = r8
            r11 = r15
            r5 = r22
            r1 = r25
            r15 = r26
            goto L319
        L367:
            com.tkay.expressad.exoplayer.t r1 = new com.tkay.expressad.exoplayer.t
            java.lang.String r2 = "Unhandled indirect reference"
            r1.<init>(r2)
            throw r1
        L36f:
            r5 = r9
            r6 = r10
            r15 = r11
            r1 = r12
            java.lang.Long r2 = java.lang.Long.valueOf(r18)
            com.tkay.expressad.exoplayer.e.a r3 = new com.tkay.expressad.exoplayer.e.a
            r3.<init>(r15, r1, r5, r6)
            android.util.Pair r1 = android.util.Pair.create(r2, r3)
            java.lang.Object r2 = r1.first
            java.lang.Long r2 = (java.lang.Long) r2
            long r2 = r2.longValue()
            r0.P = r2
            com.tkay.expressad.exoplayer.e.g r2 = r0.V
            java.lang.Object r1 = r1.second
            com.tkay.expressad.exoplayer.e.k r1 = (com.tkay.expressad.exoplayer.e.k) r1
            r2.a(r1)
            r1 = 1
            r0.Y = r1
            goto L40d
        L398:
            int r1 = r2.aU
            int r3 = com.tkay.expressad.exoplayer.e.a.a.aL
            if (r1 != r3) goto L40d
            com.tkay.expressad.exoplayer.k.s r1 = r2.aV
            com.tkay.expressad.exoplayer.e.m[] r2 = r0.W
            if (r2 == 0) goto L40d
            int r2 = r2.length
            if (r2 != 0) goto L3a8
            goto L40d
        L3a8:
            r2 = 12
            r1.c(r2)
            int r10 = r1.a()
            r1.p()
            r1.p()
            long r7 = r1.h()
            long r3 = r1.h()
            r5 = 1000000(0xf4240, double:4.940656E-318)
            long r3 = com.tkay.expressad.exoplayer.k.af.a(r3, r5, r7)
            com.tkay.expressad.exoplayer.e.m[] r5 = r0.W
            int r6 = r5.length
            r7 = 0
        L3ca:
            if (r7 >= r6) goto L3d7
            r8 = r5[r7]
            r1.c(r2)
            r8.a(r1, r10)
            int r7 = r7 + 1
            goto L3ca
        L3d7:
            long r1 = r0.P
            r5 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r5 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r5 == 0) goto L3fe
            long r1 = r1 + r3
            com.tkay.expressad.exoplayer.k.ac r3 = r0.A
            if (r3 == 0) goto L3eb
            long r1 = r3.b(r1)
        L3eb:
            com.tkay.expressad.exoplayer.e.m[] r11 = r0.W
            int r12 = r11.length
            r13 = 0
        L3ef:
            if (r13 >= r12) goto L40d
            r3 = r11[r13]
            r6 = 1
            r8 = 0
            r9 = 0
            r4 = r1
            r7 = r10
            r3.a(r4, r6, r7, r8, r9)
            int r13 = r13 + 1
            goto L3ef
        L3fe:
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.e$b> r1 = r0.E
            com.tkay.expressad.exoplayer.e.a.e$b r2 = new com.tkay.expressad.exoplayer.e.a.e$b
            r2.<init>(r3, r10)
            r1.addLast(r2)
            int r1 = r0.M
            int r1 = r1 + r10
            r0.M = r1
        L40d:
            r1 = r25
            goto L413
        L410:
            r1.c(r2)
        L413:
            long r2 = r25.c()
            r0.a(r2)
            goto L4
        L41c:
            int r2 = r0.J
            if (r2 != 0) goto L446
            com.tkay.expressad.exoplayer.k.s r2 = r0.B
            byte[] r2 = r2.a
            r3 = 1
            r4 = 0
            boolean r2 = r1.a(r2, r4, r5, r3)
            if (r2 != 0) goto L42f
            r6 = r4
            goto L5db
        L42f:
            r0.J = r5
            com.tkay.expressad.exoplayer.k.s r2 = r0.B
            r2.c(r4)
            com.tkay.expressad.exoplayer.k.s r2 = r0.B
            long r2 = r2.h()
            r0.I = r2
            com.tkay.expressad.exoplayer.k.s r2 = r0.B
            int r2 = r2.i()
            r0.H = r2
        L446:
            long r2 = r0.I
            r6 = 1
            int r4 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r4 != 0) goto L463
            com.tkay.expressad.exoplayer.k.s r2 = r0.B
            byte[] r2 = r2.a
            r1.b(r2, r5, r5)
            int r2 = r0.J
            int r2 = r2 + r5
            r0.J = r2
            com.tkay.expressad.exoplayer.k.s r2 = r0.B
            long r2 = r2.n()
            r0.I = r2
            goto L494
        L463:
            r6 = 0
            int r2 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r2 != 0) goto L494
            long r2 = r25.d()
            r6 = -1
            int r4 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r4 != 0) goto L485
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r4 = r0.D
            boolean r4 = r4.isEmpty()
            if (r4 != 0) goto L485
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r2 = r0.D
            java.lang.Object r2 = r2.peek()
            com.tkay.expressad.exoplayer.e.a.a$a r2 = (com.tkay.expressad.exoplayer.e.a.a.a) r2
            long r2 = r2.aV
        L485:
            int r4 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r4 == 0) goto L494
            long r6 = r25.c()
            long r2 = r2 - r6
            int r4 = r0.J
            long r6 = (long) r4
            long r2 = r2 + r6
            r0.I = r2
        L494:
            long r2 = r0.I
            int r4 = r0.J
            long r6 = (long) r4
            int r2 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r2 < 0) goto L5e7
            long r2 = r25.c()
            int r4 = r0.J
            long r6 = (long) r4
            long r2 = r2 - r6
            int r4 = r0.H
            int r6 = com.tkay.expressad.exoplayer.e.a.a.P
            if (r4 != r6) goto L4c7
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r4 = r0.w
            int r4 = r4.size()
            r6 = 0
        L4b2:
            if (r6 >= r4) goto L4c7
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r7 = r0.w
            java.lang.Object r7 = r7.valueAt(r6)
            com.tkay.expressad.exoplayer.e.a.e$c r7 = (com.tkay.expressad.exoplayer.e.a.e.c) r7
            com.tkay.expressad.exoplayer.e.a.l r7 = r7.b
            r7.b = r2
            r7.d = r2
            r7.c = r2
            int r6 = r6 + 1
            goto L4b2
        L4c7:
            int r4 = r0.H
            int r6 = com.tkay.expressad.exoplayer.e.a.a.m
            if (r4 != r6) goto L4ee
            r4 = 0
            r0.Q = r4
            long r4 = r0.I
            long r4 = r4 + r2
            r0.L = r4
            boolean r4 = r0.Y
            if (r4 != 0) goto L4e8
            com.tkay.expressad.exoplayer.e.g r4 = r0.V
            com.tkay.expressad.exoplayer.e.k$b r5 = new com.tkay.expressad.exoplayer.e.k$b
            long r6 = r0.O
            r5.<init>(r6, r2)
            r4.a(r5)
            r2 = 1
            r0.Y = r2
        L4e8:
            r2 = 2
            r0.G = r2
        L4eb:
            r2 = 1
            goto L5da
        L4ee:
            int r2 = r0.H
            int r3 = com.tkay.expressad.exoplayer.e.a.a.G
            if (r2 == r3) goto L517
            int r3 = com.tkay.expressad.exoplayer.e.a.a.I
            if (r2 == r3) goto L517
            int r3 = com.tkay.expressad.exoplayer.e.a.a.J
            if (r2 == r3) goto L517
            int r3 = com.tkay.expressad.exoplayer.e.a.a.K
            if (r2 == r3) goto L517
            int r3 = com.tkay.expressad.exoplayer.e.a.a.L
            if (r2 == r3) goto L517
            int r3 = com.tkay.expressad.exoplayer.e.a.a.P
            if (r2 == r3) goto L517
            int r3 = com.tkay.expressad.exoplayer.e.a.a.Q
            if (r2 == r3) goto L517
            int r3 = com.tkay.expressad.exoplayer.e.a.a.R
            if (r2 == r3) goto L517
            int r3 = com.tkay.expressad.exoplayer.e.a.a.U
            if (r2 != r3) goto L515
            goto L517
        L515:
            r2 = 0
            goto L518
        L517:
            r2 = 1
        L518:
            if (r2 == 0) goto L541
            long r2 = r25.c()
            long r4 = r0.I
            long r2 = r2 + r4
            r4 = 8
            long r2 = r2 - r4
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r4 = r0.D
            com.tkay.expressad.exoplayer.e.a.a$a r5 = new com.tkay.expressad.exoplayer.e.a.a$a
            int r6 = r0.H
            r5.<init>(r6, r2)
            r4.push(r5)
            long r4 = r0.I
            int r6 = r0.J
            long r6 = (long) r6
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 != 0) goto L53d
            r0.a(r2)
            goto L4eb
        L53d:
            r24.a()
            goto L4eb
        L541:
            int r2 = r0.H
            int r3 = com.tkay.expressad.exoplayer.e.a.a.X
            if (r2 == r3) goto L596
            int r3 = com.tkay.expressad.exoplayer.e.a.a.W
            if (r2 == r3) goto L596
            int r3 = com.tkay.expressad.exoplayer.e.a.a.H
            if (r2 == r3) goto L596
            int r3 = com.tkay.expressad.exoplayer.e.a.a.F
            if (r2 == r3) goto L596
            int r3 = com.tkay.expressad.exoplayer.e.a.a.Y
            if (r2 == r3) goto L596
            int r3 = com.tkay.expressad.exoplayer.e.a.a.B
            if (r2 == r3) goto L596
            int r3 = com.tkay.expressad.exoplayer.e.a.a.C
            if (r2 == r3) goto L596
            int r3 = com.tkay.expressad.exoplayer.e.a.a.T
            if (r2 == r3) goto L596
            int r3 = com.tkay.expressad.exoplayer.e.a.a.D
            if (r2 == r3) goto L596
            int r3 = com.tkay.expressad.exoplayer.e.a.a.E
            if (r2 == r3) goto L596
            int r3 = com.tkay.expressad.exoplayer.e.a.a.Z
            if (r2 == r3) goto L596
            int r3 = com.tkay.expressad.exoplayer.e.a.a.ah
            if (r2 == r3) goto L596
            int r3 = com.tkay.expressad.exoplayer.e.a.a.ai
            if (r2 == r3) goto L596
            int r3 = com.tkay.expressad.exoplayer.e.a.a.am
            if (r2 == r3) goto L596
            int r3 = com.tkay.expressad.exoplayer.e.a.a.al
            if (r2 == r3) goto L596
            int r3 = com.tkay.expressad.exoplayer.e.a.a.aj
            if (r2 == r3) goto L596
            int r3 = com.tkay.expressad.exoplayer.e.a.a.ak
            if (r2 == r3) goto L596
            int r3 = com.tkay.expressad.exoplayer.e.a.a.V
            if (r2 == r3) goto L596
            int r3 = com.tkay.expressad.exoplayer.e.a.a.S
            if (r2 == r3) goto L596
            int r3 = com.tkay.expressad.exoplayer.e.a.a.aL
            if (r2 != r3) goto L594
            goto L596
        L594:
            r2 = 0
            goto L597
        L596:
            r2 = 1
        L597:
            r3 = 2147483647(0x7fffffff, double:1.060997895E-314)
            if (r2 == 0) goto L5ce
            int r2 = r0.J
            if (r2 != r5) goto L5c6
            long r6 = r0.I
            int r2 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r2 > 0) goto L5be
            com.tkay.expressad.exoplayer.k.s r2 = new com.tkay.expressad.exoplayer.k.s
            int r3 = (int) r6
            r2.<init>(r3)
            r0.K = r2
            com.tkay.expressad.exoplayer.k.s r2 = r0.B
            byte[] r2 = r2.a
            com.tkay.expressad.exoplayer.k.s r3 = r0.K
            byte[] r3 = r3.a
            r4 = 0
            java.lang.System.arraycopy(r2, r4, r3, r4, r5)
            r2 = 1
            r0.G = r2
            goto L5da
        L5be:
            com.tkay.expressad.exoplayer.t r1 = new com.tkay.expressad.exoplayer.t
            java.lang.String r2 = "Leaf atom with length > 2147483647 (unsupported)."
            r1.<init>(r2)
            throw r1
        L5c6:
            com.tkay.expressad.exoplayer.t r1 = new com.tkay.expressad.exoplayer.t
            java.lang.String r2 = "Leaf atom defines extended atom size (unsupported)."
            r1.<init>(r2)
            throw r1
        L5ce:
            long r5 = r0.I
            int r2 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r2 > 0) goto L5df
            r2 = 0
            r0.K = r2
            r2 = 1
            r0.G = r2
        L5da:
            r6 = r2
        L5db:
            if (r6 != 0) goto L4
            r1 = -1
            return r1
        L5df:
            com.tkay.expressad.exoplayer.t r1 = new com.tkay.expressad.exoplayer.t
            java.lang.String r2 = "Skipping atom with length > 2147483647 (unsupported)."
            r1.<init>(r2)
            throw r1
        L5e7:
            com.tkay.expressad.exoplayer.t r1 = new com.tkay.expressad.exoplayer.t
            java.lang.String r2 = "Atom size less than header length (unsupported)."
            r1.<init>(r2)
            throw r1
    }

    @Override
    public final void a(long r3, long r5) {
            r2 = this;
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r3 = r2.w
            int r3 = r3.size()
            r4 = 0
            r0 = r4
        L8:
            if (r0 >= r3) goto L18
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r1 = r2.w
            java.lang.Object r1 = r1.valueAt(r0)
            com.tkay.expressad.exoplayer.e.a.e$c r1 = (com.tkay.expressad.exoplayer.e.a.e.c) r1
            r1.a()
            int r0 = r0 + 1
            goto L8
        L18:
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.e$b> r3 = r2.E
            r3.clear()
            r2.M = r4
            r2.N = r5
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r3 = r2.D
            r3.clear()
            r2.a()
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.e.g r4) {
            r3 = this;
            r3.V = r4
            com.tkay.expressad.exoplayer.e.a.j r0 = r3.t
            if (r0 == 0) goto L29
            com.tkay.expressad.exoplayer.e.a.e$c r1 = new com.tkay.expressad.exoplayer.e.a.e$c
            int r0 = r0.d
            r2 = 0
            com.tkay.expressad.exoplayer.e.m r4 = r4.a(r2, r0)
            r1.<init>(r4)
            com.tkay.expressad.exoplayer.e.a.j r4 = r3.t
            com.tkay.expressad.exoplayer.e.a.c r0 = new com.tkay.expressad.exoplayer.e.a.c
            r0.<init>(r2, r2, r2, r2)
            r1.a(r4, r0)
            android.util.SparseArray<com.tkay.expressad.exoplayer.e.a.e$c> r4 = r3.w
            r4.put(r2, r1)
            r3.b()
            com.tkay.expressad.exoplayer.e.g r4 = r3.V
            r4.c_()
        L29:
            return
    }

    @Override
    public final boolean a(com.tkay.expressad.exoplayer.e.f r1) {
            r0 = this;
            boolean r1 = com.tkay.expressad.exoplayer.e.a.i.a(r1)
            return r1
    }

    @Override
    public final void c() {
            r0 = this;
            return
    }
}
