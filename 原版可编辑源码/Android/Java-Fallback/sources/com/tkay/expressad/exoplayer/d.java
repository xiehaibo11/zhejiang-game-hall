package com.tkay.expressad.exoplayer;

public final class d implements com.tkay.expressad.exoplayer.p {
    public static final int a = 15000;
    public static final int b = 50000;
    public static final int c = 2500;
    public static final int d = 5000;
    public static final int e = -1;
    public static final boolean f = true;
    private final com.tkay.expressad.exoplayer.j.l g;
    private final long h;
    private final long i;
    private final long j;
    private final long k;
    private final int l;
    private final boolean m;
    private final com.tkay.expressad.exoplayer.k.v n;
    private int o;
    private boolean p;

    public static final class a {
        private com.tkay.expressad.exoplayer.j.l a;
        private int b;
        private int c;
        private int d;
        private int e;
        private int f;
        private boolean g;
        private com.tkay.expressad.exoplayer.k.v h;

        public a() {
                r2 = this;
                r2.<init>()
                r0 = 0
                r2.a = r0
                r1 = 15000(0x3a98, float:2.102E-41)
                r2.b = r1
                r1 = 50000(0xc350, float:7.0065E-41)
                r2.c = r1
                r1 = 2500(0x9c4, float:3.503E-42)
                r2.d = r1
                r1 = 5000(0x1388, float:7.006E-42)
                r2.e = r1
                r1 = -1
                r2.f = r1
                r1 = 1
                r2.g = r1
                r2.h = r0
                return
        }

        private com.tkay.expressad.exoplayer.d.a a(int r1) {
                r0 = this;
                r0.f = r1
                return r0
        }

        private com.tkay.expressad.exoplayer.d.a a(int r1, int r2, int r3, int r4) {
                r0 = this;
                r0.b = r1
                r0.c = r2
                r0.d = r3
                r0.e = r4
                return r0
        }

        private com.tkay.expressad.exoplayer.d.a a(com.tkay.expressad.exoplayer.j.l r1) {
                r0 = this;
                r0.a = r1
                return r0
        }

        private com.tkay.expressad.exoplayer.d.a a(com.tkay.expressad.exoplayer.k.v r1) {
                r0 = this;
                r0.h = r1
                return r0
        }

        private com.tkay.expressad.exoplayer.d.a a(boolean r1) {
                r0 = this;
                r0.g = r1
                return r0
        }

        private com.tkay.expressad.exoplayer.d a() {
                r11 = this;
                com.tkay.expressad.exoplayer.j.l r0 = r11.a
                if (r0 != 0) goto Lc
                com.tkay.expressad.exoplayer.j.l r0 = new com.tkay.expressad.exoplayer.j.l
                r1 = 0
                r0.<init>(r1)
                r11.a = r0
            Lc:
                com.tkay.expressad.exoplayer.d r0 = new com.tkay.expressad.exoplayer.d
                com.tkay.expressad.exoplayer.j.l r3 = r11.a
                int r4 = r11.b
                int r5 = r11.c
                int r6 = r11.d
                int r7 = r11.e
                int r8 = r11.f
                boolean r9 = r11.g
                com.tkay.expressad.exoplayer.k.v r10 = r11.h
                r2 = r0
                r2.<init>(r3, r4, r5, r6, r7, r8, r9, r10)
                return r0
        }
    }

    public d() {
            r2 = this;
            com.tkay.expressad.exoplayer.j.l r0 = new com.tkay.expressad.exoplayer.j.l
            r1 = 0
            r0.<init>(r1)
            r2.<init>(r0)
            return
    }

    @java.lang.Deprecated
    private d(com.tkay.expressad.exoplayer.j.l r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    @java.lang.Deprecated
    private d(com.tkay.expressad.exoplayer.j.l r10, byte r11) {
            r9 = this;
            r2 = 15000(0x3a98, float:2.102E-41)
            r3 = 50000(0xc350, float:7.0065E-41)
            r4 = 2500(0x9c4, float:3.503E-42)
            r5 = 5000(0x1388, float:7.006E-42)
            r6 = -1
            r7 = 1
            r8 = 0
            r0 = r9
            r1 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    @java.lang.Deprecated
    public d(com.tkay.expressad.exoplayer.j.l r5, int r6, int r7, int r8, int r9, int r10, boolean r11, com.tkay.expressad.exoplayer.k.v r12) {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = "0"
            java.lang.String r1 = "bufferForPlaybackMs"
            r2 = 0
            a(r8, r2, r1, r0)
            java.lang.String r3 = "bufferForPlaybackAfterRebufferMs"
            a(r9, r2, r3, r0)
            java.lang.String r0 = "minBufferMs"
            a(r6, r8, r0, r1)
            a(r6, r9, r0, r3)
            java.lang.String r1 = "maxBufferMs"
            a(r7, r6, r1, r0)
            r4.g = r5
            long r5 = (long) r6
            r0 = 1000(0x3e8, double:4.94E-321)
            long r5 = r5 * r0
            r4.h = r5
            long r5 = (long) r7
            long r5 = r5 * r0
            r4.i = r5
            long r5 = (long) r8
            long r5 = r5 * r0
            r4.j = r5
            long r5 = (long) r9
            long r5 = r5 * r0
            r4.k = r5
            r4.l = r10
            r4.m = r11
            r4.n = r12
            return
    }

    private static void a(int r0, int r1, java.lang.String r2, java.lang.String r3) {
            if (r0 < r1) goto L4
            r0 = 1
            goto L5
        L4:
            r0 = 0
        L5:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r2 = " cannot be less than "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.tkay.expressad.exoplayer.k.a.a(r0, r1)
            return
    }

    private void a(boolean r4) {
            r3 = this;
            r0 = 0
            r3.o = r0
            com.tkay.expressad.exoplayer.k.v r1 = r3.n
            if (r1 == 0) goto Le
            boolean r2 = r3.p
            if (r2 == 0) goto Le
            r1.c()
        Le:
            r3.p = r0
            if (r4 == 0) goto L17
            com.tkay.expressad.exoplayer.j.l r4 = r3.g
            r4.e()
        L17:
            return
    }

    private static int b(com.tkay.expressad.exoplayer.y[] r3, com.tkay.expressad.exoplayer.i.g r4) {
            r0 = 0
            r1 = r0
        L2:
            int r2 = r3.length
            if (r0 >= r2) goto L19
            com.tkay.expressad.exoplayer.i.f r2 = r4.a(r0)
            if (r2 == 0) goto L16
            r2 = r3[r0]
            int r2 = r2.a()
            int r2 = com.tkay.expressad.exoplayer.k.af.g(r2)
            int r1 = r1 + r2
        L16:
            int r0 = r0 + 1
            goto L2
        L19:
            return r1
    }

    @Override
    public final void a() {
            r1 = this;
            r0 = 0
            r1.a(r0)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.y[] r4, com.tkay.expressad.exoplayer.i.g r5) {
            r3 = this;
            int r0 = r3.l
            r1 = -1
            if (r0 != r1) goto L1f
            r0 = 0
            r1 = r0
        L7:
            int r2 = r4.length
            if (r0 >= r2) goto L1e
            com.tkay.expressad.exoplayer.i.f r2 = r5.a(r0)
            if (r2 == 0) goto L1b
            r2 = r4[r0]
            int r2 = r2.a()
            int r2 = com.tkay.expressad.exoplayer.k.af.g(r2)
            int r1 = r1 + r2
        L1b:
            int r0 = r0 + 1
            goto L7
        L1e:
            r0 = r1
        L1f:
            r3.o = r0
            com.tkay.expressad.exoplayer.j.l r4 = r3.g
            r4.a(r0)
            return
    }

    @Override
    public final boolean a(long r9, float r11) {
            r8 = this;
            com.tkay.expressad.exoplayer.j.l r0 = r8.g
            int r0 = r0.c()
            int r1 = r8.o
            r2 = 1
            r3 = 0
            if (r0 < r1) goto Le
            r0 = r2
            goto Lf
        Le:
            r0 = r3
        Lf:
            boolean r1 = r8.p
            long r4 = r8.h
            r6 = 1065353216(0x3f800000, float:1.0)
            int r6 = (r11 > r6 ? 1 : (r11 == r6 ? 0 : -1))
            if (r6 <= 0) goto L23
            long r4 = com.tkay.expressad.exoplayer.k.af.a(r4, r11)
            long r6 = r8.i
            long r4 = java.lang.Math.min(r4, r6)
        L23:
            int r11 = (r9 > r4 ? 1 : (r9 == r4 ? 0 : -1))
            if (r11 >= 0) goto L32
            boolean r9 = r8.m
            if (r9 != 0) goto L2f
            if (r0 != 0) goto L2e
            goto L2f
        L2e:
            r2 = r3
        L2f:
            r8.p = r2
            goto L3c
        L32:
            long r4 = r8.i
            int r9 = (r9 > r4 ? 1 : (r9 == r4 ? 0 : -1))
            if (r9 > 0) goto L3a
            if (r0 == 0) goto L3c
        L3a:
            r8.p = r3
        L3c:
            com.tkay.expressad.exoplayer.k.v r9 = r8.n
            if (r9 == 0) goto L4d
            boolean r10 = r8.p
            if (r10 == r1) goto L4d
            if (r10 == 0) goto L4a
            r9.a()
            goto L4d
        L4a:
            r9.c()
        L4d:
            boolean r9 = r8.p
            return r9
    }

    @Override
    public final boolean a(long r3, float r5, boolean r6) {
            r2 = this;
            long r3 = com.tkay.expressad.exoplayer.k.af.b(r3, r5)
            if (r6 == 0) goto L9
            long r5 = r2.k
            goto Lb
        L9:
            long r5 = r2.j
        Lb:
            r0 = 0
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 <= 0) goto L26
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 >= 0) goto L26
            boolean r3 = r2.m
            if (r3 != 0) goto L24
            com.tkay.expressad.exoplayer.j.l r3 = r2.g
            int r3 = r3.c()
            int r4 = r2.o
            if (r3 < r4) goto L24
            goto L26
        L24:
            r3 = 0
            return r3
        L26:
            r3 = 1
            return r3
    }

    @Override
    public final void b() {
            r1 = this;
            r0 = 1
            r1.a(r0)
            return
    }

    @Override
    public final void c() {
            r1 = this;
            r0 = 1
            r1.a(r0)
            return
    }

    @Override
    public final com.tkay.expressad.exoplayer.j.b d() {
            r1 = this;
            com.tkay.expressad.exoplayer.j.l r0 = r1.g
            return r0
    }

    @Override
    public final long e() {
            r2 = this;
            r0 = 0
            return r0
    }

    @Override
    public final boolean f() {
            r1 = this;
            r0 = 0
            return r0
    }
}
