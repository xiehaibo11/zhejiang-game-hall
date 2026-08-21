package com.tkay.expressad.exoplayer.e.a;

public final class g implements com.tkay.expressad.exoplayer.e.e, com.tkay.expressad.exoplayer.e.k {
    public static final com.tkay.expressad.exoplayer.e.h d = null;
    public static final int e = 1;
    private static final int f = 0;
    private static final int g = 1;
    private static final int h = 2;
    private static final int i = 0;
    private static final long j = 262144;
    private static final long k = 10485760;
    private long[][] A;
    private int B;
    private long C;
    private boolean D;
    private final int l;
    private final com.tkay.expressad.exoplayer.k.s m;
    private final com.tkay.expressad.exoplayer.k.s n;
    private final com.tkay.expressad.exoplayer.k.s o;
    private final java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a.a> p;
    private int q;
    private int r;
    private long s;
    private int t;
    private com.tkay.expressad.exoplayer.k.s u;
    private int v;
    private int w;
    private int x;
    private com.tkay.expressad.exoplayer.e.g y;
    private com.tkay.expressad.exoplayer.e.a.g.b[] z;


    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface a {
    }

    private static final class b {
        public final com.tkay.expressad.exoplayer.e.a.j a;
        public final com.tkay.expressad.exoplayer.e.a.m b;
        public final com.tkay.expressad.exoplayer.e.m c;
        public int d;

        public b(com.tkay.expressad.exoplayer.e.a.j r1, com.tkay.expressad.exoplayer.e.a.m r2, com.tkay.expressad.exoplayer.e.m r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    private @interface c {
    }

    static {
            com.tkay.expressad.exoplayer.e.a.g$1 r0 = new com.tkay.expressad.exoplayer.e.a.g$1
            r0.<init>()
            com.tkay.expressad.exoplayer.e.a.g.d = r0
            java.lang.String r0 = "qt  "
            int r0 = com.tkay.expressad.exoplayer.k.af.f(r0)
            com.tkay.expressad.exoplayer.e.a.g.i = r0
            return
    }

    public g() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public g(int r2) {
            r1 = this;
            r1.<init>()
            r1.l = r2
            com.tkay.expressad.exoplayer.k.s r2 = new com.tkay.expressad.exoplayer.k.s
            r0 = 16
            r2.<init>(r0)
            r1.o = r2
            java.util.ArrayDeque r2 = new java.util.ArrayDeque
            r2.<init>()
            r1.p = r2
            com.tkay.expressad.exoplayer.k.s r2 = new com.tkay.expressad.exoplayer.k.s
            byte[] r0 = com.tkay.expressad.exoplayer.k.p.a
            r2.<init>(r0)
            r1.m = r2
            com.tkay.expressad.exoplayer.k.s r2 = new com.tkay.expressad.exoplayer.k.s
            r0 = 4
            r2.<init>(r0)
            r1.n = r2
            r2 = -1
            r1.v = r2
            return
    }

    private static int a(com.tkay.expressad.exoplayer.e.a.m r2, long r3) {
            int r0 = r2.a(r3)
            r1 = -1
            if (r0 != r1) goto Lb
            int r0 = r2.b(r3)
        Lb:
            return r0
    }

    private static long a(com.tkay.expressad.exoplayer.e.a.m r0, long r1, long r3) {
            int r1 = a(r0, r1)
            r2 = -1
            if (r1 != r2) goto L8
            return r3
        L8:
            long[] r0 = r0.c
            r1 = r0[r1]
            long r0 = java.lang.Math.min(r1, r3)
            return r0
    }

    private java.util.ArrayList<com.tkay.expressad.exoplayer.e.a.m> a(com.tkay.expressad.exoplayer.e.a.a.a r11, com.tkay.expressad.exoplayer.e.i r12, boolean r13) {
            r10 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
        L6:
            java.util.List<com.tkay.expressad.exoplayer.e.a.a$a> r2 = r11.aX
            int r2 = r2.size()
            if (r1 >= r2) goto L52
            java.util.List<com.tkay.expressad.exoplayer.e.a.a$a> r2 = r11.aX
            java.lang.Object r2 = r2.get(r1)
            com.tkay.expressad.exoplayer.e.a.a$a r2 = (com.tkay.expressad.exoplayer.e.a.a.a) r2
            int r3 = r2.aU
            int r4 = com.tkay.expressad.exoplayer.e.a.a.I
            if (r3 != r4) goto L4f
            int r3 = com.tkay.expressad.exoplayer.e.a.a.H
            com.tkay.expressad.exoplayer.e.a.a$b r4 = r11.d(r3)
            r5 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r7 = 0
            boolean r9 = r10.D
            r3 = r2
            r8 = r13
            com.tkay.expressad.exoplayer.e.a.j r3 = com.tkay.expressad.exoplayer.e.a.b.a(r3, r4, r5, r7, r8, r9)
            if (r3 == 0) goto L4f
            int r4 = com.tkay.expressad.exoplayer.e.a.a.J
            com.tkay.expressad.exoplayer.e.a.a$a r2 = r2.e(r4)
            int r4 = com.tkay.expressad.exoplayer.e.a.a.K
            com.tkay.expressad.exoplayer.e.a.a$a r2 = r2.e(r4)
            int r4 = com.tkay.expressad.exoplayer.e.a.a.L
            com.tkay.expressad.exoplayer.e.a.a$a r2 = r2.e(r4)
            com.tkay.expressad.exoplayer.e.a.m r2 = com.tkay.expressad.exoplayer.e.a.b.a(r3, r2, r12)
            int r3 = r2.b
            if (r3 == 0) goto L4f
            r0.add(r2)
        L4f:
            int r1 = r1 + 1
            goto L6
        L52:
            return r0
    }

    private void a(com.tkay.expressad.exoplayer.e.a.a.a r19) {
            r18 = this;
            r0 = r18
            r1 = r19
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            com.tkay.expressad.exoplayer.e.i r3 = new com.tkay.expressad.exoplayer.e.i
            r3.<init>()
            int r4 = com.tkay.expressad.exoplayer.e.a.a.aF
            com.tkay.expressad.exoplayer.e.a.a$b r4 = r1.d(r4)
            if (r4 == 0) goto L22
            boolean r5 = r0.D
            com.tkay.expressad.exoplayer.g.a r4 = com.tkay.expressad.exoplayer.e.a.b.a(r4, r5)
            if (r4 == 0) goto L23
            r3.a(r4)
            goto L23
        L22:
            r4 = 0
        L23:
            int r5 = r0.l
            r6 = 1
            r5 = r5 & r6
            r7 = 0
            if (r5 == 0) goto L2c
            r5 = r6
            goto L2d
        L2c:
            r5 = r7
        L2d:
            java.util.ArrayList r1 = r0.a(r1, r3, r5)     // Catch: com.tkay.expressad.exoplayer.e.a.b.g -> L32
            goto L3b
        L32:
            com.tkay.expressad.exoplayer.e.i r3 = new com.tkay.expressad.exoplayer.e.i
            r3.<init>()
            java.util.ArrayList r1 = r0.a(r1, r3, r6)
        L3b:
            int r5 = r1.size()
            r11 = -1
            r12 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
        L45:
            if (r7 >= r5) goto Lac
            java.lang.Object r14 = r1.get(r7)
            com.tkay.expressad.exoplayer.e.a.m r14 = (com.tkay.expressad.exoplayer.e.a.m) r14
            com.tkay.expressad.exoplayer.e.a.j r15 = r14.a
            com.tkay.expressad.exoplayer.e.a.g$b r10 = new com.tkay.expressad.exoplayer.e.a.g$b
            com.tkay.expressad.exoplayer.e.g r8 = r0.y
            int r9 = r15.d
            com.tkay.expressad.exoplayer.e.m r8 = r8.a(r7, r9)
            r10.<init>(r15, r14, r8)
            int r8 = r14.e
            int r8 = r8 + 30
            com.tkay.expressad.exoplayer.m r9 = r15.h
            com.tkay.expressad.exoplayer.m r8 = r9.a(r8)
            int r9 = r15.d
            if (r9 != r6) goto L7e
            boolean r9 = r3.a()
            if (r9 == 0) goto L78
            int r9 = r3.b
            int r6 = r3.c
            com.tkay.expressad.exoplayer.m r8 = r8.a(r9, r6)
        L78:
            if (r4 == 0) goto L7e
            com.tkay.expressad.exoplayer.m r8 = r8.a(r4)
        L7e:
            com.tkay.expressad.exoplayer.e.m r6 = r10.c
            r6.a(r8)
            long r8 = r15.g
            r16 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r6 = (r8 > r16 ? 1 : (r8 == r16 ? 0 : -1))
            if (r6 == 0) goto L91
            long r8 = r15.g
            goto L93
        L91:
            long r8 = r14.h
        L93:
            long r12 = java.lang.Math.max(r12, r8)
            int r6 = r15.d
            r8 = 2
            if (r6 != r8) goto La4
            r6 = -1
            if (r11 != r6) goto La5
            int r11 = r2.size()
            goto La5
        La4:
            r6 = -1
        La5:
            r2.add(r10)
            int r7 = r7 + 1
            r6 = 1
            goto L45
        Lac:
            r0.B = r11
            r0.C = r12
            int r1 = r2.size()
            com.tkay.expressad.exoplayer.e.a.g$b[] r1 = new com.tkay.expressad.exoplayer.e.a.g.b[r1]
            java.lang.Object[] r1 = r2.toArray(r1)
            com.tkay.expressad.exoplayer.e.a.g$b[] r1 = (com.tkay.expressad.exoplayer.e.a.g.b[]) r1
            r0.z = r1
            long[][] r1 = a(r1)
            r0.A = r1
            com.tkay.expressad.exoplayer.e.g r1 = r0.y
            r1.c_()
            com.tkay.expressad.exoplayer.e.g r1 = r0.y
            r1.a(r0)
            return
    }

    private static boolean a(int r1) {
            int r0 = com.tkay.expressad.exoplayer.e.a.a.W
            if (r1 == r0) goto L43
            int r0 = com.tkay.expressad.exoplayer.e.a.a.H
            if (r1 == r0) goto L43
            int r0 = com.tkay.expressad.exoplayer.e.a.a.X
            if (r1 == r0) goto L43
            int r0 = com.tkay.expressad.exoplayer.e.a.a.Y
            if (r1 == r0) goto L43
            int r0 = com.tkay.expressad.exoplayer.e.a.a.ar
            if (r1 == r0) goto L43
            int r0 = com.tkay.expressad.exoplayer.e.a.a.as
            if (r1 == r0) goto L43
            int r0 = com.tkay.expressad.exoplayer.e.a.a.at
            if (r1 == r0) goto L43
            int r0 = com.tkay.expressad.exoplayer.e.a.a.V
            if (r1 == r0) goto L43
            int r0 = com.tkay.expressad.exoplayer.e.a.a.au
            if (r1 == r0) goto L43
            int r0 = com.tkay.expressad.exoplayer.e.a.a.av
            if (r1 == r0) goto L43
            int r0 = com.tkay.expressad.exoplayer.e.a.a.aw
            if (r1 == r0) goto L43
            int r0 = com.tkay.expressad.exoplayer.e.a.a.ax
            if (r1 == r0) goto L43
            int r0 = com.tkay.expressad.exoplayer.e.a.a.ay
            if (r1 == r0) goto L43
            int r0 = com.tkay.expressad.exoplayer.e.a.a.T
            if (r1 == r0) goto L43
            int r0 = com.tkay.expressad.exoplayer.e.a.a.f
            if (r1 == r0) goto L43
            int r0 = com.tkay.expressad.exoplayer.e.a.a.aF
            if (r1 != r0) goto L41
            goto L43
        L41:
            r1 = 0
            return r1
        L43:
            r1 = 1
            return r1
    }

    private static boolean a(com.tkay.expressad.exoplayer.k.s r3) {
            r0 = 8
            r3.c(r0)
            int r0 = r3.i()
            int r1 = com.tkay.expressad.exoplayer.e.a.g.i
            r2 = 1
            if (r0 != r1) goto Lf
            return r2
        Lf:
            r0 = 4
            r3.d(r0)
        L13:
            int r0 = r3.a()
            if (r0 <= 0) goto L22
            int r0 = r3.i()
            int r1 = com.tkay.expressad.exoplayer.e.a.g.i
            if (r0 != r1) goto L13
            return r2
        L22:
            r3 = 0
            return r3
    }

    private static long[][] a(com.tkay.expressad.exoplayer.e.a.g.b[] r14) {
            int r0 = r14.length
            long[][] r0 = new long[r0][]
            int r1 = r14.length
            int[] r1 = new int[r1]
            int r2 = r14.length
            long[] r2 = new long[r2]
            int r3 = r14.length
            boolean[] r3 = new boolean[r3]
            r4 = 0
            r5 = r4
        Le:
            int r6 = r14.length
            if (r5 >= r6) goto L28
            r6 = r14[r5]
            com.tkay.expressad.exoplayer.e.a.m r6 = r6.b
            int r6 = r6.b
            long[] r6 = new long[r6]
            r0[r5] = r6
            r6 = r14[r5]
            com.tkay.expressad.exoplayer.e.a.m r6 = r6.b
            long[] r6 = r6.f
            r7 = r6[r4]
            r2[r5] = r7
            int r5 = r5 + 1
            goto Le
        L28:
            r5 = 0
            r7 = r4
        L2b:
            int r8 = r14.length
            if (r7 >= r8) goto L71
            r8 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r10 = -1
            r11 = r4
        L35:
            int r12 = r14.length
            if (r11 >= r12) goto L48
            boolean r12 = r3[r11]
            if (r12 != 0) goto L45
            r12 = r2[r11]
            int r12 = (r12 > r8 ? 1 : (r12 == r8 ? 0 : -1))
            if (r12 > 0) goto L45
            r8 = r2[r11]
            r10 = r11
        L45:
            int r11 = r11 + 1
            goto L35
        L48:
            r8 = r1[r10]
            r9 = r0[r10]
            r9[r8] = r5
            r9 = r14[r10]
            com.tkay.expressad.exoplayer.e.a.m r9 = r9.b
            int[] r9 = r9.d
            r9 = r9[r8]
            long r11 = (long) r9
            long r5 = r5 + r11
            r9 = 1
            int r8 = r8 + r9
            r1[r10] = r8
            r11 = r0[r10]
            int r11 = r11.length
            if (r8 >= r11) goto L6c
            r9 = r14[r10]
            com.tkay.expressad.exoplayer.e.a.m r9 = r9.b
            long[] r9 = r9.f
            r8 = r9[r8]
            r2[r10] = r8
            goto L2b
        L6c:
            r3[r10] = r9
            int r7 = r7 + 1
            goto L2b
        L71:
            return r0
    }

    private void b(long r5) {
            r4 = this;
        L0:
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r0 = r4.p
            boolean r0 = r0.isEmpty()
            r1 = 2
            if (r0 != 0) goto L44
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r0 = r4.p
            java.lang.Object r0 = r0.peek()
            com.tkay.expressad.exoplayer.e.a.a$a r0 = (com.tkay.expressad.exoplayer.e.a.a.a) r0
            long r2 = r0.aV
            int r0 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r0 != 0) goto L44
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r0 = r4.p
            java.lang.Object r0 = r0.pop()
            com.tkay.expressad.exoplayer.e.a.a$a r0 = (com.tkay.expressad.exoplayer.e.a.a.a) r0
            int r2 = r0.aU
            int r3 = com.tkay.expressad.exoplayer.e.a.a.G
            if (r2 != r3) goto L30
            r4.a(r0)
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r0 = r4.p
            r0.clear()
            r4.q = r1
            goto L0
        L30:
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r1 = r4.p
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L0
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r1 = r4.p
            java.lang.Object r1 = r1.peek()
            com.tkay.expressad.exoplayer.e.a.a$a r1 = (com.tkay.expressad.exoplayer.e.a.a.a) r1
            r1.a(r0)
            goto L0
        L44:
            int r5 = r4.q
            if (r5 == r1) goto L4b
            r4.d()
        L4b:
            return
    }

    private static boolean b(int r1) {
            int r0 = com.tkay.expressad.exoplayer.e.a.a.G
            if (r1 == r0) goto L1b
            int r0 = com.tkay.expressad.exoplayer.e.a.a.I
            if (r1 == r0) goto L1b
            int r0 = com.tkay.expressad.exoplayer.e.a.a.J
            if (r1 == r0) goto L1b
            int r0 = com.tkay.expressad.exoplayer.e.a.a.K
            if (r1 == r0) goto L1b
            int r0 = com.tkay.expressad.exoplayer.e.a.a.L
            if (r1 == r0) goto L1b
            int r0 = com.tkay.expressad.exoplayer.e.a.a.U
            if (r1 != r0) goto L19
            goto L1b
        L19:
            r1 = 0
            return r1
        L1b:
            r1 = 1
            return r1
    }

    private boolean b(com.tkay.expressad.exoplayer.e.f r9) {
            r8 = this;
            int r0 = r8.t
            r1 = 8
            r2 = 1
            r3 = 0
            if (r0 != 0) goto L2a
            com.tkay.expressad.exoplayer.k.s r0 = r8.o
            byte[] r0 = r0.a
            boolean r0 = r9.a(r0, r3, r1, r2)
            if (r0 != 0) goto L13
            return r3
        L13:
            r8.t = r1
            com.tkay.expressad.exoplayer.k.s r0 = r8.o
            r0.c(r3)
            com.tkay.expressad.exoplayer.k.s r0 = r8.o
            long r4 = r0.h()
            r8.s = r4
            com.tkay.expressad.exoplayer.k.s r0 = r8.o
            int r0 = r0.i()
            r8.r = r0
        L2a:
            long r4 = r8.s
            r6 = 1
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 != 0) goto L47
            com.tkay.expressad.exoplayer.k.s r0 = r8.o
            byte[] r0 = r0.a
            r9.b(r0, r1, r1)
            int r0 = r8.t
            int r0 = r0 + r1
            r8.t = r0
            com.tkay.expressad.exoplayer.k.s r0 = r8.o
            long r4 = r0.n()
            r8.s = r4
            goto L78
        L47:
            r6 = 0
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 != 0) goto L78
            long r4 = r9.d()
            r6 = -1
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 != 0) goto L69
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r0 = r8.p
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L69
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r0 = r8.p
            java.lang.Object r0 = r0.peek()
            com.tkay.expressad.exoplayer.e.a.a$a r0 = (com.tkay.expressad.exoplayer.e.a.a.a) r0
            long r4 = r0.aV
        L69:
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 == 0) goto L78
            long r6 = r9.c()
            long r4 = r4 - r6
            int r0 = r8.t
            long r6 = (long) r0
            long r4 = r4 + r6
            r8.s = r4
        L78:
            long r4 = r8.s
            int r0 = r8.t
            long r6 = (long) r0
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 < 0) goto L14a
            int r0 = r8.r
            int r4 = com.tkay.expressad.exoplayer.e.a.a.G
            if (r0 == r4) goto L9e
            int r4 = com.tkay.expressad.exoplayer.e.a.a.I
            if (r0 == r4) goto L9e
            int r4 = com.tkay.expressad.exoplayer.e.a.a.J
            if (r0 == r4) goto L9e
            int r4 = com.tkay.expressad.exoplayer.e.a.a.K
            if (r0 == r4) goto L9e
            int r4 = com.tkay.expressad.exoplayer.e.a.a.L
            if (r0 == r4) goto L9e
            int r4 = com.tkay.expressad.exoplayer.e.a.a.U
            if (r0 != r4) goto L9c
            goto L9e
        L9c:
            r0 = r3
            goto L9f
        L9e:
            r0 = r2
        L9f:
            if (r0 == 0) goto Lcb
            long r0 = r9.c()
            long r3 = r8.s
            long r0 = r0 + r3
            int r9 = r8.t
            long r3 = (long) r9
            long r0 = r0 - r3
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r9 = r8.p
            com.tkay.expressad.exoplayer.e.a.a$a r3 = new com.tkay.expressad.exoplayer.e.a.a$a
            int r4 = r8.r
            r3.<init>(r4, r0)
            r9.push(r3)
            long r3 = r8.s
            int r9 = r8.t
            long r5 = (long) r9
            int r9 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r9 != 0) goto Lc6
            r8.b(r0)
            goto L149
        Lc6:
            r8.d()
            goto L149
        Lcb:
            int r9 = r8.r
            int r0 = com.tkay.expressad.exoplayer.e.a.a.W
            if (r9 == r0) goto L110
            int r0 = com.tkay.expressad.exoplayer.e.a.a.H
            if (r9 == r0) goto L110
            int r0 = com.tkay.expressad.exoplayer.e.a.a.X
            if (r9 == r0) goto L110
            int r0 = com.tkay.expressad.exoplayer.e.a.a.Y
            if (r9 == r0) goto L110
            int r0 = com.tkay.expressad.exoplayer.e.a.a.ar
            if (r9 == r0) goto L110
            int r0 = com.tkay.expressad.exoplayer.e.a.a.as
            if (r9 == r0) goto L110
            int r0 = com.tkay.expressad.exoplayer.e.a.a.at
            if (r9 == r0) goto L110
            int r0 = com.tkay.expressad.exoplayer.e.a.a.V
            if (r9 == r0) goto L110
            int r0 = com.tkay.expressad.exoplayer.e.a.a.au
            if (r9 == r0) goto L110
            int r0 = com.tkay.expressad.exoplayer.e.a.a.av
            if (r9 == r0) goto L110
            int r0 = com.tkay.expressad.exoplayer.e.a.a.aw
            if (r9 == r0) goto L110
            int r0 = com.tkay.expressad.exoplayer.e.a.a.ax
            if (r9 == r0) goto L110
            int r0 = com.tkay.expressad.exoplayer.e.a.a.ay
            if (r9 == r0) goto L110
            int r0 = com.tkay.expressad.exoplayer.e.a.a.T
            if (r9 == r0) goto L110
            int r0 = com.tkay.expressad.exoplayer.e.a.a.f
            if (r9 == r0) goto L110
            int r0 = com.tkay.expressad.exoplayer.e.a.a.aF
            if (r9 != r0) goto L10e
            goto L110
        L10e:
            r9 = r3
            goto L111
        L110:
            r9 = r2
        L111:
            if (r9 == 0) goto L144
            int r9 = r8.t
            if (r9 != r1) goto L119
            r9 = r2
            goto L11a
        L119:
            r9 = r3
        L11a:
            com.tkay.expressad.exoplayer.k.a.b(r9)
            long r4 = r8.s
            r6 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r9 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r9 > 0) goto L128
            r9 = r2
            goto L129
        L128:
            r9 = r3
        L129:
            com.tkay.expressad.exoplayer.k.a.b(r9)
            com.tkay.expressad.exoplayer.k.s r9 = new com.tkay.expressad.exoplayer.k.s
            long r4 = r8.s
            int r0 = (int) r4
            r9.<init>(r0)
            r8.u = r9
            com.tkay.expressad.exoplayer.k.s r9 = r8.o
            byte[] r9 = r9.a
            com.tkay.expressad.exoplayer.k.s r0 = r8.u
            byte[] r0 = r0.a
            java.lang.System.arraycopy(r9, r3, r0, r3, r1)
            r8.q = r2
            goto L149
        L144:
            r9 = 0
            r8.u = r9
            r8.q = r2
        L149:
            return r2
        L14a:
            com.tkay.expressad.exoplayer.t r9 = new com.tkay.expressad.exoplayer.t
            java.lang.String r0 = "Atom size less than header length (unsupported)."
            r9.<init>(r0)
            throw r9
    }

    private boolean b(com.tkay.expressad.exoplayer.e.f r10, com.tkay.expressad.exoplayer.e.j r11) {
            r9 = this;
            long r0 = r9.s
            int r2 = r9.t
            long r2 = (long) r2
            long r0 = r0 - r2
            long r2 = r10.c()
            long r2 = r2 + r0
            com.tkay.expressad.exoplayer.k.s r4 = r9.u
            r5 = 0
            r6 = 1
            if (r4 == 0) goto L64
            byte[] r11 = r4.a
            int r4 = r9.t
            int r0 = (int) r0
            r10.b(r11, r4, r0)
            int r10 = r9.r
            int r11 = com.tkay.expressad.exoplayer.e.a.a.f
            if (r10 != r11) goto L47
            com.tkay.expressad.exoplayer.k.s r10 = r9.u
            r11 = 8
            r10.c(r11)
            int r11 = r10.i()
            int r0 = com.tkay.expressad.exoplayer.e.a.g.i
            if (r11 != r0) goto L30
        L2e:
            r10 = r6
            goto L44
        L30:
            r11 = 4
            r10.d(r11)
        L34:
            int r11 = r10.a()
            if (r11 <= 0) goto L43
            int r11 = r10.i()
            int r0 = com.tkay.expressad.exoplayer.e.a.g.i
            if (r11 != r0) goto L34
            goto L2e
        L43:
            r10 = r5
        L44:
            r9.D = r10
            goto L6f
        L47:
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r10 = r9.p
            boolean r10 = r10.isEmpty()
            if (r10 != 0) goto L6f
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r10 = r9.p
            java.lang.Object r10 = r10.peek()
            com.tkay.expressad.exoplayer.e.a.a$a r10 = (com.tkay.expressad.exoplayer.e.a.a.a) r10
            com.tkay.expressad.exoplayer.e.a.a$b r11 = new com.tkay.expressad.exoplayer.e.a.a$b
            int r0 = r9.r
            com.tkay.expressad.exoplayer.k.s r1 = r9.u
            r11.<init>(r0, r1)
            r10.a(r11)
            goto L6f
        L64:
            r7 = 262144(0x40000, double:1.295163E-318)
            int r4 = (r0 > r7 ? 1 : (r0 == r7 ? 0 : -1))
            if (r4 >= 0) goto L71
            int r11 = (int) r0
            r10.c(r11)
        L6f:
            r10 = r5
            goto L79
        L71:
            long r7 = r10.c()
            long r7 = r7 + r0
            r11.a = r7
            r10 = r6
        L79:
            r9.b(r2)
            if (r10 == 0) goto L84
            int r10 = r9.q
            r11 = 2
            if (r10 == r11) goto L84
            return r6
        L84:
            return r5
    }

    private int c(long r21) {
            r20 = this;
            r0 = r20
            r2 = -1
            r6 = r2
            r7 = 0
            r8 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r10 = 1
            r11 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r13 = 1
            r14 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
        L16:
            com.tkay.expressad.exoplayer.e.a.g$b[] r1 = r0.z
            int r3 = r1.length
            if (r7 >= r3) goto L5e
            r1 = r1[r7]
            int r3 = r1.d
            com.tkay.expressad.exoplayer.e.a.m r4 = r1.b
            int r4 = r4.b
            if (r3 == r4) goto L5b
            com.tkay.expressad.exoplayer.e.a.m r1 = r1.b
            long[] r1 = r1.c
            r4 = r1[r3]
            long[][] r1 = r0.A
            r1 = r1[r7]
            r16 = r1[r3]
            long r4 = r4 - r21
            r18 = 0
            int r1 = (r4 > r18 ? 1 : (r4 == r18 ? 0 : -1))
            if (r1 < 0) goto L43
            r18 = 262144(0x40000, double:1.295163E-318)
            int r1 = (r4 > r18 ? 1 : (r4 == r18 ? 0 : -1))
            if (r1 < 0) goto L41
            goto L43
        L41:
            r1 = 0
            goto L44
        L43:
            r1 = 1
        L44:
            if (r1 != 0) goto L48
            if (r13 != 0) goto L4e
        L48:
            if (r1 != r13) goto L53
            int r3 = (r4 > r14 ? 1 : (r4 == r14 ? 0 : -1))
            if (r3 >= 0) goto L53
        L4e:
            r13 = r1
            r14 = r4
            r6 = r7
            r11 = r16
        L53:
            int r3 = (r16 > r8 ? 1 : (r16 == r8 ? 0 : -1))
            if (r3 >= 0) goto L5b
            r10 = r1
            r2 = r7
            r8 = r16
        L5b:
            int r7 = r7 + 1
            goto L16
        L5e:
            r3 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r1 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r1 == 0) goto L73
            if (r10 == 0) goto L73
            r3 = 10485760(0xa00000, double:5.180654E-317)
            long r8 = r8 + r3
            int r1 = (r11 > r8 ? 1 : (r11 == r8 ? 0 : -1))
            if (r1 >= 0) goto L72
            goto L73
        L72:
            return r2
        L73:
            return r6
    }

    private int c(com.tkay.expressad.exoplayer.e.f r26, com.tkay.expressad.exoplayer.e.j r27) {
            r25 = this;
            r0 = r25
            r1 = r26
            long r2 = r26.c()
            int r4 = r0.v
            r5 = 262144(0x40000, double:1.295163E-318)
            r7 = 0
            r9 = -1
            if (r4 != r9) goto L8f
            r19 = r9
            r20 = r19
            r4 = 0
            r11 = 1
            r14 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r16 = 1
            r17 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r21 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
        L29:
            com.tkay.expressad.exoplayer.e.a.g$b[] r10 = r0.z
            int r9 = r10.length
            if (r4 >= r9) goto L70
            r9 = r10[r4]
            int r10 = r9.d
            com.tkay.expressad.exoplayer.e.a.m r12 = r9.b
            int r12 = r12.b
            if (r10 == r12) goto L6c
            com.tkay.expressad.exoplayer.e.a.m r9 = r9.b
            long[] r9 = r9.c
            r12 = r9[r10]
            long[][] r9 = r0.A
            r9 = r9[r4]
            r23 = r9[r10]
            long r12 = r12 - r2
            int r9 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r9 < 0) goto L50
            int r9 = (r12 > r5 ? 1 : (r12 == r5 ? 0 : -1))
            if (r9 < 0) goto L4e
            goto L50
        L4e:
            r9 = 0
            goto L51
        L50:
            r9 = 1
        L51:
            if (r9 != 0) goto L55
            if (r11 != 0) goto L5b
        L55:
            if (r9 != r11) goto L62
            int r10 = (r12 > r21 ? 1 : (r12 == r21 ? 0 : -1))
            if (r10 >= 0) goto L62
        L5b:
            r20 = r4
            r11 = r9
            r21 = r12
            r17 = r23
        L62:
            int r10 = (r23 > r14 ? 1 : (r23 == r14 ? 0 : -1))
            if (r10 >= 0) goto L6c
            r19 = r4
            r16 = r9
            r14 = r23
        L6c:
            int r4 = r4 + 1
            r9 = -1
            goto L29
        L70:
            r9 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r4 = (r14 > r9 ? 1 : (r14 == r9 ? 0 : -1))
            if (r4 == 0) goto L87
            if (r16 == 0) goto L87
            r9 = 10485760(0xa00000, double:5.180654E-317)
            long r14 = r14 + r9
            int r4 = (r17 > r14 ? 1 : (r17 == r14 ? 0 : -1))
            if (r4 >= 0) goto L84
            goto L87
        L84:
            r4 = r19
            goto L89
        L87:
            r4 = r20
        L89:
            r0.v = r4
            r9 = -1
            if (r4 != r9) goto L8f
            return r9
        L8f:
            com.tkay.expressad.exoplayer.e.a.g$b[] r4 = r0.z
            int r9 = r0.v
            r4 = r4[r9]
            com.tkay.expressad.exoplayer.e.m r9 = r4.c
            int r10 = r4.d
            com.tkay.expressad.exoplayer.e.a.m r11 = r4.b
            long[] r11 = r11.c
            r12 = r11[r10]
            com.tkay.expressad.exoplayer.e.a.m r11 = r4.b
            int[] r11 = r11.d
            r11 = r11[r10]
            long r2 = r12 - r2
            int r14 = r0.w
            long r14 = (long) r14
            long r2 = r2 + r14
            int r7 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
            if (r7 < 0) goto L15c
            int r5 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r5 < 0) goto Lb8
            r1 = r27
            r2 = 1
            goto L15f
        Lb8:
            com.tkay.expressad.exoplayer.e.a.j r5 = r4.a
            int r5 = r5.i
            r6 = 1
            if (r5 != r6) goto Lc4
            r5 = 8
            long r2 = r2 + r5
            int r11 = r11 + (-8)
        Lc4:
            int r2 = (int) r2
            r1.c(r2)
            com.tkay.expressad.exoplayer.e.a.j r2 = r4.a
            int r2 = r2.l
            if (r2 == 0) goto L124
            com.tkay.expressad.exoplayer.k.s r2 = r0.n
            byte[] r2 = r2.a
            r3 = 0
            r2[r3] = r3
            r5 = 1
            r2[r5] = r3
            r5 = 2
            r2[r5] = r3
            com.tkay.expressad.exoplayer.e.a.j r2 = r4.a
            int r2 = r2.l
            com.tkay.expressad.exoplayer.e.a.j r3 = r4.a
            int r3 = r3.l
            r5 = 4
            int r3 = 4 - r3
        Le6:
            int r6 = r0.w
            if (r6 >= r11) goto L13a
            int r6 = r0.x
            if (r6 != 0) goto L114
            com.tkay.expressad.exoplayer.k.s r6 = r0.n
            byte[] r6 = r6.a
            r1.b(r6, r3, r2)
            com.tkay.expressad.exoplayer.k.s r6 = r0.n
            r7 = 0
            r6.c(r7)
            com.tkay.expressad.exoplayer.k.s r6 = r0.n
            int r6 = r6.m()
            r0.x = r6
            com.tkay.expressad.exoplayer.k.s r6 = r0.m
            r6.c(r7)
            com.tkay.expressad.exoplayer.k.s r6 = r0.m
            r9.a(r6, r5)
            int r6 = r0.w
            int r6 = r6 + r5
            r0.w = r6
            int r11 = r11 + r3
            goto Le6
        L114:
            r7 = 0
            int r6 = r9.a(r1, r6, r7)
            int r7 = r0.w
            int r7 = r7 + r6
            r0.w = r7
            int r7 = r0.x
            int r7 = r7 - r6
            r0.x = r7
            goto Le6
        L124:
            int r2 = r0.w
            if (r2 >= r11) goto L13a
            int r2 = r11 - r2
            r3 = 0
            int r2 = r9.a(r1, r2, r3)
            int r3 = r0.w
            int r3 = r3 + r2
            r0.w = r3
            int r3 = r0.x
            int r3 = r3 - r2
            r0.x = r3
            goto L124
        L13a:
            r13 = r11
            com.tkay.expressad.exoplayer.e.a.m r1 = r4.b
            long[] r1 = r1.f
            r2 = r1[r10]
            com.tkay.expressad.exoplayer.e.a.m r1 = r4.b
            int[] r1 = r1.g
            r12 = r1[r10]
            r14 = 0
            r15 = 0
            r10 = r2
            r9.a(r10, r12, r13, r14, r15)
            int r1 = r4.d
            r2 = 1
            int r1 = r1 + r2
            r4.d = r1
            r1 = -1
            r0.v = r1
            r1 = 0
            r0.w = r1
            r0.x = r1
            return r1
        L15c:
            r2 = 1
            r1 = r27
        L15f:
            r1.a = r12
            return r2
    }

    private void d() {
            r1 = this;
            r0 = 0
            r1.q = r0
            r1.t = r0
            return
    }

    private void d(long r8) {
            r7 = this;
            com.tkay.expressad.exoplayer.e.a.g$b[] r0 = r7.z
            int r1 = r0.length
            r2 = 0
        L4:
            if (r2 >= r1) goto L1a
            r3 = r0[r2]
            com.tkay.expressad.exoplayer.e.a.m r4 = r3.b
            int r5 = r4.a(r8)
            r6 = -1
            if (r5 != r6) goto L15
            int r5 = r4.b(r8)
        L15:
            r3.d = r5
            int r2 = r2 + 1
            goto L4
        L1a:
            return
    }

    @Override
    public final int a(com.tkay.expressad.exoplayer.e.f r31, com.tkay.expressad.exoplayer.e.j r32) {
            r30 = this;
            r0 = r30
            r1 = r31
            r2 = r32
        L6:
            int r3 = r0.q
            r4 = 0
            r6 = -1
            r7 = 8
            r8 = 1
            if (r3 == 0) goto L1f5
            r10 = 262144(0x40000, double:1.295163E-318)
            r12 = 2
            if (r3 == r8) goto L16f
            if (r3 != r12) goto L169
            long r14 = r31.c()
            int r3 = r0.v
            if (r3 != r6) goto L93
            r16 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r22 = r6
            r23 = r22
            r7 = r8
            r13 = r7
            r18 = r16
            r20 = r18
            r24 = r20
            r3 = 0
        L32:
            com.tkay.expressad.exoplayer.e.a.g$b[] r12 = r0.z
            int r9 = r12.length
            if (r3 >= r9) goto L79
            r9 = r12[r3]
            int r12 = r9.d
            com.tkay.expressad.exoplayer.e.a.m r8 = r9.b
            int r8 = r8.b
            if (r12 == r8) goto L75
            com.tkay.expressad.exoplayer.e.a.m r8 = r9.b
            long[] r8 = r8.c
            r26 = r8[r12]
            long[][] r8 = r0.A
            r8 = r8[r3]
            r28 = r8[r12]
            long r26 = r26 - r14
            int r8 = (r26 > r4 ? 1 : (r26 == r4 ? 0 : -1))
            if (r8 < 0) goto L5a
            int r8 = (r26 > r10 ? 1 : (r26 == r10 ? 0 : -1))
            if (r8 < 0) goto L58
            goto L5a
        L58:
            r8 = 0
            goto L5b
        L5a:
            r8 = 1
        L5b:
            if (r8 != 0) goto L5f
            if (r13 != 0) goto L65
        L5f:
            if (r8 != r13) goto L6c
            int r9 = (r26 > r24 ? 1 : (r26 == r24 ? 0 : -1))
            if (r9 >= 0) goto L6c
        L65:
            r23 = r3
            r13 = r8
            r24 = r26
            r20 = r28
        L6c:
            int r9 = (r28 > r18 ? 1 : (r28 == r18 ? 0 : -1))
            if (r9 >= 0) goto L75
            r22 = r3
            r7 = r8
            r18 = r28
        L75:
            int r3 = r3 + 1
            r8 = 1
            goto L32
        L79:
            int r3 = (r18 > r16 ? 1 : (r18 == r16 ? 0 : -1))
            if (r3 == 0) goto L8c
            if (r7 == 0) goto L8c
            r7 = 10485760(0xa00000, double:5.180654E-317)
            long r18 = r18 + r7
            int r3 = (r20 > r18 ? 1 : (r20 == r18 ? 0 : -1))
            if (r3 >= 0) goto L89
            goto L8c
        L89:
            r3 = r22
            goto L8e
        L8c:
            r3 = r23
        L8e:
            r0.v = r3
            if (r3 != r6) goto L93
            return r6
        L93:
            com.tkay.expressad.exoplayer.e.a.g$b[] r3 = r0.z
            int r7 = r0.v
            r3 = r3[r7]
            com.tkay.expressad.exoplayer.e.m r7 = r3.c
            int r8 = r3.d
            com.tkay.expressad.exoplayer.e.a.m r9 = r3.b
            long[] r9 = r9.c
            r12 = r9[r8]
            com.tkay.expressad.exoplayer.e.a.m r9 = r3.b
            int[] r9 = r9.d
            r9 = r9[r8]
            long r14 = r12 - r14
            int r6 = r0.w
            long r10 = (long) r6
            long r14 = r14 + r10
            int r4 = (r14 > r4 ? 1 : (r14 == r4 ? 0 : -1))
            if (r4 < 0) goto L165
            r4 = 262144(0x40000, double:1.295163E-318)
            int r4 = (r14 > r4 ? 1 : (r14 == r4 ? 0 : -1))
            if (r4 < 0) goto Lbc
            goto L165
        Lbc:
            com.tkay.expressad.exoplayer.e.a.j r2 = r3.a
            int r2 = r2.i
            r4 = 1
            if (r2 != r4) goto Lc8
            r4 = 8
            long r14 = r14 + r4
            int r9 = r9 + (-8)
        Lc8:
            int r2 = (int) r14
            r1.c(r2)
            com.tkay.expressad.exoplayer.e.a.j r2 = r3.a
            int r2 = r2.l
            if (r2 == 0) goto L129
            com.tkay.expressad.exoplayer.k.s r2 = r0.n
            byte[] r2 = r2.a
            r4 = 0
            r2[r4] = r4
            r5 = 1
            r2[r5] = r4
            r5 = 2
            r2[r5] = r4
            com.tkay.expressad.exoplayer.e.a.j r2 = r3.a
            int r2 = r2.l
            com.tkay.expressad.exoplayer.e.a.j r4 = r3.a
            int r4 = r4.l
            r5 = 4
            int r13 = 4 - r4
        Lea:
            int r4 = r0.w
            if (r4 >= r9) goto L13f
            int r4 = r0.x
            if (r4 != 0) goto L119
            com.tkay.expressad.exoplayer.k.s r4 = r0.n
            byte[] r4 = r4.a
            r1.b(r4, r13, r2)
            com.tkay.expressad.exoplayer.k.s r4 = r0.n
            r5 = 0
            r4.c(r5)
            com.tkay.expressad.exoplayer.k.s r4 = r0.n
            int r4 = r4.m()
            r0.x = r4
            com.tkay.expressad.exoplayer.k.s r4 = r0.m
            r4.c(r5)
            com.tkay.expressad.exoplayer.k.s r4 = r0.m
            r6 = 4
            r7.a(r4, r6)
            int r4 = r0.w
            int r4 = r4 + r6
            r0.w = r4
            int r9 = r9 + r13
            goto Lea
        L119:
            r5 = 0
            int r4 = r7.a(r1, r4, r5)
            int r5 = r0.w
            int r5 = r5 + r4
            r0.w = r5
            int r5 = r0.x
            int r5 = r5 - r4
            r0.x = r5
            goto Lea
        L129:
            int r2 = r0.w
            if (r2 >= r9) goto L13f
            int r2 = r9 - r2
            r4 = 0
            int r2 = r7.a(r1, r2, r4)
            int r4 = r0.w
            int r4 = r4 + r2
            r0.w = r4
            int r4 = r0.x
            int r4 = r4 - r2
            r0.x = r4
            goto L129
        L13f:
            r20 = r9
            com.tkay.expressad.exoplayer.e.a.m r1 = r3.b
            long[] r1 = r1.f
            r17 = r1[r8]
            com.tkay.expressad.exoplayer.e.a.m r1 = r3.b
            int[] r1 = r1.g
            r19 = r1[r8]
            r21 = 0
            r22 = 0
            r16 = r7
            r16.a(r17, r19, r20, r21, r22)
            int r1 = r3.d
            r4 = 1
            int r1 = r1 + r4
            r3.d = r1
            r1 = -1
            r0.v = r1
            r1 = 0
            r0.w = r1
            r0.x = r1
            return r1
        L165:
            r4 = 1
            r2.a = r12
            return r4
        L169:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            r1.<init>()
            throw r1
        L16f:
            long r3 = r0.s
            int r5 = r0.t
            long r5 = (long) r5
            long r3 = r3 - r5
            long r5 = r31.c()
            long r5 = r5 + r3
            com.tkay.expressad.exoplayer.k.s r8 = r0.u
            if (r8 == 0) goto L1cf
            byte[] r8 = r8.a
            int r9 = r0.t
            int r3 = (int) r3
            r1.b(r8, r9, r3)
            int r3 = r0.r
            int r4 = com.tkay.expressad.exoplayer.e.a.a.f
            if (r3 != r4) goto L1b2
            com.tkay.expressad.exoplayer.k.s r3 = r0.u
            r3.c(r7)
            int r4 = r3.i()
            int r7 = com.tkay.expressad.exoplayer.e.a.g.i
            if (r4 != r7) goto L19b
        L199:
            r3 = 1
            goto L1af
        L19b:
            r4 = 4
            r3.d(r4)
        L19f:
            int r4 = r3.a()
            if (r4 <= 0) goto L1ae
            int r4 = r3.i()
            int r7 = com.tkay.expressad.exoplayer.e.a.g.i
            if (r4 != r7) goto L19f
            goto L199
        L1ae:
            r3 = 0
        L1af:
            r0.D = r3
            goto L1da
        L1b2:
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r3 = r0.p
            boolean r3 = r3.isEmpty()
            if (r3 != 0) goto L1da
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r3 = r0.p
            java.lang.Object r3 = r3.peek()
            com.tkay.expressad.exoplayer.e.a.a$a r3 = (com.tkay.expressad.exoplayer.e.a.a.a) r3
            com.tkay.expressad.exoplayer.e.a.a$b r4 = new com.tkay.expressad.exoplayer.e.a.a$b
            int r7 = r0.r
            com.tkay.expressad.exoplayer.k.s r8 = r0.u
            r4.<init>(r7, r8)
            r3.a(r4)
            goto L1da
        L1cf:
            r7 = 262144(0x40000, double:1.295163E-318)
            int r7 = (r3 > r7 ? 1 : (r3 == r7 ? 0 : -1))
            if (r7 >= 0) goto L1dc
            int r3 = (int) r3
            r1.c(r3)
        L1da:
            r3 = 0
            goto L1e4
        L1dc:
            long r7 = r31.c()
            long r7 = r7 + r3
            r2.a = r7
            r3 = 1
        L1e4:
            r0.b(r5)
            if (r3 == 0) goto L1f0
            int r3 = r0.q
            r4 = 2
            if (r3 == r4) goto L1f0
            r9 = 1
            goto L1f1
        L1f0:
            r9 = 0
        L1f1:
            if (r9 == 0) goto L6
            r3 = 1
            return r3
        L1f5:
            r3 = r8
            int r6 = r0.t
            if (r6 != 0) goto L21e
            com.tkay.expressad.exoplayer.k.s r6 = r0.o
            byte[] r6 = r6.a
            r8 = 0
            boolean r6 = r1.a(r6, r8, r7, r3)
            if (r6 != 0) goto L207
            goto L33f
        L207:
            r0.t = r7
            com.tkay.expressad.exoplayer.k.s r3 = r0.o
            r3.c(r8)
            com.tkay.expressad.exoplayer.k.s r3 = r0.o
            long r8 = r3.h()
            r0.s = r8
            com.tkay.expressad.exoplayer.k.s r3 = r0.o
            int r3 = r3.i()
            r0.r = r3
        L21e:
            long r8 = r0.s
            r10 = 1
            int r3 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r3 != 0) goto L23b
            com.tkay.expressad.exoplayer.k.s r3 = r0.o
            byte[] r3 = r3.a
            r1.b(r3, r7, r7)
            int r3 = r0.t
            int r3 = r3 + r7
            r0.t = r3
            com.tkay.expressad.exoplayer.k.s r3 = r0.o
            long r3 = r3.n()
            r0.s = r3
            goto L26a
        L23b:
            int r3 = (r8 > r4 ? 1 : (r8 == r4 ? 0 : -1))
            if (r3 != 0) goto L26a
            long r3 = r31.d()
            r5 = -1
            int r8 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r8 != 0) goto L25b
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r8 = r0.p
            boolean r8 = r8.isEmpty()
            if (r8 != 0) goto L25b
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r3 = r0.p
            java.lang.Object r3 = r3.peek()
            com.tkay.expressad.exoplayer.e.a.a$a r3 = (com.tkay.expressad.exoplayer.e.a.a.a) r3
            long r3 = r3.aV
        L25b:
            int r5 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r5 == 0) goto L26a
            long r5 = r31.c()
            long r3 = r3 - r5
            int r5 = r0.t
            long r5 = (long) r5
            long r3 = r3 + r5
            r0.s = r3
        L26a:
            long r3 = r0.s
            int r5 = r0.t
            long r5 = (long) r5
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 < 0) goto L343
            int r3 = r0.r
            int r4 = com.tkay.expressad.exoplayer.e.a.a.G
            if (r3 == r4) goto L290
            int r4 = com.tkay.expressad.exoplayer.e.a.a.I
            if (r3 == r4) goto L290
            int r4 = com.tkay.expressad.exoplayer.e.a.a.J
            if (r3 == r4) goto L290
            int r4 = com.tkay.expressad.exoplayer.e.a.a.K
            if (r3 == r4) goto L290
            int r4 = com.tkay.expressad.exoplayer.e.a.a.L
            if (r3 == r4) goto L290
            int r4 = com.tkay.expressad.exoplayer.e.a.a.U
            if (r3 != r4) goto L28e
            goto L290
        L28e:
            r4 = 0
            goto L291
        L290:
            r4 = 1
        L291:
            if (r4 == 0) goto L2bd
            long r3 = r31.c()
            long r5 = r0.s
            long r3 = r3 + r5
            int r5 = r0.t
            long r5 = (long) r5
            long r3 = r3 - r5
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r5 = r0.p
            com.tkay.expressad.exoplayer.e.a.a$a r6 = new com.tkay.expressad.exoplayer.e.a.a$a
            int r7 = r0.r
            r6.<init>(r7, r3)
            r5.push(r6)
            long r5 = r0.s
            int r7 = r0.t
            long r7 = (long) r7
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 != 0) goto L2b7
            r0.b(r3)
            goto L2ba
        L2b7:
            r30.d()
        L2ba:
            r3 = 1
            goto L33e
        L2bd:
            int r3 = r0.r
            int r4 = com.tkay.expressad.exoplayer.e.a.a.W
            if (r3 == r4) goto L302
            int r4 = com.tkay.expressad.exoplayer.e.a.a.H
            if (r3 == r4) goto L302
            int r4 = com.tkay.expressad.exoplayer.e.a.a.X
            if (r3 == r4) goto L302
            int r4 = com.tkay.expressad.exoplayer.e.a.a.Y
            if (r3 == r4) goto L302
            int r4 = com.tkay.expressad.exoplayer.e.a.a.ar
            if (r3 == r4) goto L302
            int r4 = com.tkay.expressad.exoplayer.e.a.a.as
            if (r3 == r4) goto L302
            int r4 = com.tkay.expressad.exoplayer.e.a.a.at
            if (r3 == r4) goto L302
            int r4 = com.tkay.expressad.exoplayer.e.a.a.V
            if (r3 == r4) goto L302
            int r4 = com.tkay.expressad.exoplayer.e.a.a.au
            if (r3 == r4) goto L302
            int r4 = com.tkay.expressad.exoplayer.e.a.a.av
            if (r3 == r4) goto L302
            int r4 = com.tkay.expressad.exoplayer.e.a.a.aw
            if (r3 == r4) goto L302
            int r4 = com.tkay.expressad.exoplayer.e.a.a.ax
            if (r3 == r4) goto L302
            int r4 = com.tkay.expressad.exoplayer.e.a.a.ay
            if (r3 == r4) goto L302
            int r4 = com.tkay.expressad.exoplayer.e.a.a.T
            if (r3 == r4) goto L302
            int r4 = com.tkay.expressad.exoplayer.e.a.a.f
            if (r3 == r4) goto L302
            int r4 = com.tkay.expressad.exoplayer.e.a.a.aF
            if (r3 != r4) goto L300
            goto L302
        L300:
            r4 = 0
            goto L303
        L302:
            r4 = 1
        L303:
            if (r4 == 0) goto L338
            int r3 = r0.t
            if (r3 != r7) goto L30b
            r4 = 1
            goto L30c
        L30b:
            r4 = 0
        L30c:
            com.tkay.expressad.exoplayer.k.a.b(r4)
            long r3 = r0.s
            r5 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 > 0) goto L31a
            r4 = 1
            goto L31b
        L31a:
            r4 = 0
        L31b:
            com.tkay.expressad.exoplayer.k.a.b(r4)
            com.tkay.expressad.exoplayer.k.s r3 = new com.tkay.expressad.exoplayer.k.s
            long r4 = r0.s
            int r4 = (int) r4
            r3.<init>(r4)
            r0.u = r3
            com.tkay.expressad.exoplayer.k.s r3 = r0.o
            byte[] r3 = r3.a
            com.tkay.expressad.exoplayer.k.s r4 = r0.u
            byte[] r4 = r4.a
            r5 = 0
            java.lang.System.arraycopy(r3, r5, r4, r5, r7)
            r3 = 1
            r0.q = r3
            goto L33e
        L338:
            r3 = 1
            r4 = 0
            r0.u = r4
            r0.q = r3
        L33e:
            r8 = r3
        L33f:
            if (r8 != 0) goto L6
            r3 = -1
            return r3
        L343:
            com.tkay.expressad.exoplayer.t r1 = new com.tkay.expressad.exoplayer.t
            java.lang.String r2 = "Atom size less than header length (unsupported)."
            r1.<init>(r2)
            throw r1
    }

    @Override
    public final com.tkay.expressad.exoplayer.e.k.a a(long r13) {
            r12 = this;
            com.tkay.expressad.exoplayer.e.a.g$b[] r0 = r12.z
            int r1 = r0.length
            if (r1 != 0) goto Ld
            com.tkay.expressad.exoplayer.e.k$a r13 = new com.tkay.expressad.exoplayer.e.k$a
            com.tkay.expressad.exoplayer.e.l r14 = com.tkay.expressad.exoplayer.e.l.a
            r13.<init>(r14)
            return r13
        Ld:
            r1 = -1
            int r3 = r12.B
            r4 = -1
            r5 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r3 == r4) goto L53
            r0 = r0[r3]
            com.tkay.expressad.exoplayer.e.a.m r0 = r0.b
            int r3 = a(r0, r13)
            if (r3 != r4) goto L2b
            com.tkay.expressad.exoplayer.e.k$a r13 = new com.tkay.expressad.exoplayer.e.k$a
            com.tkay.expressad.exoplayer.e.l r14 = com.tkay.expressad.exoplayer.e.l.a
            r13.<init>(r14)
            return r13
        L2b:
            long[] r7 = r0.f
            r8 = r7[r3]
            long[] r7 = r0.c
            r10 = r7[r3]
            int r7 = (r8 > r13 ? 1 : (r8 == r13 ? 0 : -1))
            if (r7 >= 0) goto L4e
            int r7 = r0.b
            int r7 = r7 + (-1)
            if (r3 >= r7) goto L4e
            int r13 = r0.b(r13)
            if (r13 == r4) goto L4e
            if (r13 == r3) goto L4e
            long[] r14 = r0.f
            r1 = r14[r13]
            long[] r14 = r0.c
            r13 = r14[r13]
            goto L50
        L4e:
            r13 = r1
            r1 = r5
        L50:
            r3 = r13
            r13 = r8
            goto L5a
        L53:
            r10 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r3 = r1
            r1 = r5
        L5a:
            r0 = 0
        L5b:
            com.tkay.expressad.exoplayer.e.a.g$b[] r7 = r12.z
            int r8 = r7.length
            if (r0 >= r8) goto L78
            int r8 = r12.B
            if (r0 == r8) goto L75
            r7 = r7[r0]
            com.tkay.expressad.exoplayer.e.a.m r7 = r7.b
            long r8 = a(r7, r13, r10)
            int r10 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r10 == 0) goto L74
            long r3 = a(r7, r1, r3)
        L74:
            r10 = r8
        L75:
            int r0 = r0 + 1
            goto L5b
        L78:
            com.tkay.expressad.exoplayer.e.l r0 = new com.tkay.expressad.exoplayer.e.l
            r0.<init>(r13, r10)
            int r13 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r13 != 0) goto L87
            com.tkay.expressad.exoplayer.e.k$a r13 = new com.tkay.expressad.exoplayer.e.k$a
            r13.<init>(r0)
            return r13
        L87:
            com.tkay.expressad.exoplayer.e.l r13 = new com.tkay.expressad.exoplayer.e.l
            r13.<init>(r1, r3)
            com.tkay.expressad.exoplayer.e.k$a r14 = new com.tkay.expressad.exoplayer.e.k$a
            r14.<init>(r0, r13)
            return r14
    }

    @Override
    public final void a(long r6, long r8) {
            r5 = this;
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.e.a.a$a> r0 = r5.p
            r0.clear()
            r0 = 0
            r5.t = r0
            r1 = -1
            r5.v = r1
            r5.w = r0
            r5.x = r0
            r2 = 0
            int r6 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r6 != 0) goto L19
            r5.d()
            return
        L19:
            com.tkay.expressad.exoplayer.e.a.g$b[] r6 = r5.z
            if (r6 == 0) goto L33
            int r7 = r6.length
        L1e:
            if (r0 >= r7) goto L33
            r2 = r6[r0]
            com.tkay.expressad.exoplayer.e.a.m r3 = r2.b
            int r4 = r3.a(r8)
            if (r4 != r1) goto L2e
            int r4 = r3.b(r8)
        L2e:
            r2.d = r4
            int r0 = r0 + 1
            goto L1e
        L33:
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.e.g r1) {
            r0 = this;
            r0.y = r1
            return
    }

    @Override
    public final boolean a() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final boolean a(com.tkay.expressad.exoplayer.e.f r1) {
            r0 = this;
            boolean r1 = com.tkay.expressad.exoplayer.e.a.i.b(r1)
            return r1
    }

    @Override
    public final long b() {
            r2 = this;
            long r0 = r2.C
            return r0
    }

    @Override
    public final void c() {
            r0 = this;
            return
    }
}
