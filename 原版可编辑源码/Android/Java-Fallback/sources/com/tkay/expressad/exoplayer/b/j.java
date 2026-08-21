package com.tkay.expressad.exoplayer.b;

final class j {
    private static final int a = 1;
    private static final int b = 2;
    private static final int c = 3;
    private static final long d = 5000000;
    private static final long e = 5000000;
    private static final long f = 200;
    private static final int g = 10;
    private static final int h = 30000;
    private static final int i = 500000;
    private long A;
    private long B;
    private int C;
    private int D;
    private long E;
    private long F;
    private long G;
    private long H;
    private final com.tkay.expressad.exoplayer.b.j.a j;
    private final long[] k;
    private android.media.AudioTrack l;
    private int m;
    private int n;
    private com.tkay.expressad.exoplayer.b.i o;
    private int p;
    private boolean q;
    private long r;
    private long s;
    private long t;
    private java.lang.reflect.Method u;
    private long v;
    private boolean w;
    private boolean x;
    private long y;
    private long z;

    public interface a {
        void a(int r1, long r2);

        void a(long r1);

        void a(long r1, long r3, long r5, long r7);

        void b(long r1, long r3, long r5, long r7);
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    private @interface b {
    }

    public j(com.tkay.expressad.exoplayer.b.j.a r3) {
            r2 = this;
            r2.<init>()
            java.lang.Object r3 = com.tkay.expressad.exoplayer.k.a.a(r3)
            com.tkay.expressad.exoplayer.b.j$a r3 = (com.tkay.expressad.exoplayer.b.j.a) r3
            r2.j = r3
            int r3 = com.tkay.expressad.exoplayer.k.af.a
            r0 = 18
            if (r3 < r0) goto L1e
            java.lang.Class<android.media.AudioTrack> r3 = android.media.AudioTrack.class
            java.lang.String r0 = "getLatency"
            r1 = 0
            java.lang.Class[] r1 = (java.lang.Class[]) r1     // Catch: java.lang.NoSuchMethodException -> L1e
            java.lang.reflect.Method r3 = r3.getMethod(r0, r1)     // Catch: java.lang.NoSuchMethodException -> L1e
            r2.u = r3     // Catch: java.lang.NoSuchMethodException -> L1e
        L1e:
            r3 = 10
            long[] r3 = new long[r3]
            r2.k = r3
            return
    }

    private void a(long r11, long r13) {
            r10 = this;
            com.tkay.expressad.exoplayer.b.i r0 = r10.o
            boolean r0 = r0.a(r11)
            if (r0 != 0) goto L9
            return
        L9:
            com.tkay.expressad.exoplayer.b.i r0 = r10.o
            long r4 = r0.f()
            com.tkay.expressad.exoplayer.b.i r0 = r10.o
            long r2 = r0.g()
            long r0 = r4 - r11
            long r0 = java.lang.Math.abs(r0)
            r6 = 5000000(0x4c4b40, double:2.470328E-317)
            int r0 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r0 <= 0) goto L2f
            com.tkay.expressad.exoplayer.b.j$a r1 = r10.j
            r6 = r11
            r8 = r13
            r1.b(r2, r4, r6, r8)
            com.tkay.expressad.exoplayer.b.i r11 = r10.o
            r11.a()
            return
        L2f:
            long r0 = r10.g(r2)
            long r0 = r0 - r13
            long r0 = java.lang.Math.abs(r0)
            int r0 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r0 <= 0) goto L49
            com.tkay.expressad.exoplayer.b.j$a r1 = r10.j
            r6 = r11
            r8 = r13
            r1.a(r2, r4, r6, r8)
            com.tkay.expressad.exoplayer.b.i r11 = r10.o
            r11.a()
            return
        L49:
            com.tkay.expressad.exoplayer.b.i r11 = r10.o
            r11.b()
            return
    }

    private static boolean a(int r2) {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 23
            if (r0 >= r1) goto Le
            r0 = 5
            if (r2 == r0) goto Lc
            r0 = 6
            if (r2 != r0) goto Le
        Lc:
            r2 = 1
            return r2
        Le:
            r2 = 0
            return r2
    }

    private void e() {
            r13 = this;
            long r7 = r13.h()
            r0 = 0
            int r2 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r2 != 0) goto Lb
            return
        Lb:
            long r2 = java.lang.System.nanoTime()
            r4 = 1000(0x3e8, double:4.94E-321)
            long r9 = r2 / r4
            long r2 = r13.t
            long r2 = r9 - r2
            r4 = 30000(0x7530, double:1.4822E-319)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 < 0) goto L4b
            long[] r2 = r13.k
            int r3 = r13.C
            long r4 = r7 - r9
            r2[r3] = r4
            int r3 = r3 + 1
            r2 = 10
            int r3 = r3 % r2
            r13.C = r3
            int r3 = r13.D
            if (r3 >= r2) goto L34
            int r3 = r3 + 1
            r13.D = r3
        L34:
            r13.t = r9
            r13.s = r0
            r0 = 0
        L39:
            int r1 = r13.D
            if (r0 >= r1) goto L4b
            long r2 = r13.s
            long[] r4 = r13.k
            r5 = r4[r0]
            long r11 = (long) r1
            long r5 = r5 / r11
            long r2 = r2 + r5
            r13.s = r2
            int r0 = r0 + 1
            goto L39
        L4b:
            boolean r0 = r13.q
            if (r0 == 0) goto L50
            return
        L50:
            com.tkay.expressad.exoplayer.b.i r0 = r13.o
            boolean r0 = r0.a(r9)
            if (r0 == 0) goto L9b
            com.tkay.expressad.exoplayer.b.i r0 = r13.o
            long r3 = r0.f()
            com.tkay.expressad.exoplayer.b.i r0 = r13.o
            long r1 = r0.g()
            long r5 = r3 - r9
            long r5 = java.lang.Math.abs(r5)
            r11 = 5000000(0x4c4b40, double:2.470328E-317)
            int r0 = (r5 > r11 ? 1 : (r5 == r11 ? 0 : -1))
            if (r0 <= 0) goto L7d
            com.tkay.expressad.exoplayer.b.j$a r0 = r13.j
            r5 = r9
            r0.b(r1, r3, r5, r7)
            com.tkay.expressad.exoplayer.b.i r0 = r13.o
            r0.a()
            goto L9b
        L7d:
            long r5 = r13.g(r1)
            long r5 = r5 - r7
            long r5 = java.lang.Math.abs(r5)
            int r0 = (r5 > r11 ? 1 : (r5 == r11 ? 0 : -1))
            if (r0 <= 0) goto L96
            com.tkay.expressad.exoplayer.b.j$a r0 = r13.j
            r5 = r9
            r0.a(r1, r3, r5, r7)
            com.tkay.expressad.exoplayer.b.i r0 = r13.o
            r0.a()
            goto L9b
        L96:
            com.tkay.expressad.exoplayer.b.i r0 = r13.o
            r0.b()
        L9b:
            r13.f(r9)
            return
    }

    private void f() {
            r3 = this;
            r0 = 0
            r3.s = r0
            r2 = 0
            r3.D = r2
            r3.C = r2
            r3.t = r0
            return
    }

    private void f(long r9) {
            r8 = this;
            boolean r0 = r8.x
            if (r0 == 0) goto L47
            java.lang.reflect.Method r0 = r8.u
            if (r0 == 0) goto L47
            long r1 = r8.y
            long r1 = r9 - r1
            r3 = 500000(0x7a120, double:2.47033E-318)
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 < 0) goto L47
            r1 = 0
            android.media.AudioTrack r2 = r8.l     // Catch: java.lang.Exception -> L43
            r3 = r1
            java.lang.Object[] r3 = (java.lang.Object[]) r3     // Catch: java.lang.Exception -> L43
            java.lang.Object r0 = r0.invoke(r2, r3)     // Catch: java.lang.Exception -> L43
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Exception -> L43
            int r0 = r0.intValue()     // Catch: java.lang.Exception -> L43
            long r2 = (long) r0     // Catch: java.lang.Exception -> L43
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 * r4
            long r4 = r8.r     // Catch: java.lang.Exception -> L43
            long r2 = r2 - r4
            r8.v = r2     // Catch: java.lang.Exception -> L43
            r4 = 0
            long r2 = java.lang.Math.max(r2, r4)     // Catch: java.lang.Exception -> L43
            r8.v = r2     // Catch: java.lang.Exception -> L43
            r6 = 5000000(0x4c4b40, double:2.470328E-317)
            int r0 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r0 <= 0) goto L45
            com.tkay.expressad.exoplayer.b.j$a r0 = r8.j     // Catch: java.lang.Exception -> L43
            r0.a(r2)     // Catch: java.lang.Exception -> L43
            r8.v = r4     // Catch: java.lang.Exception -> L43
            goto L45
        L43:
            r8.u = r1
        L45:
            r8.y = r9
        L47:
            return
    }

    private long g(long r3) {
            r2 = this;
            r0 = 1000000(0xf4240, double:4.940656E-318)
            long r3 = r3 * r0
            int r0 = r2.p
            long r0 = (long) r0
            long r3 = r3 / r0
            return r3
    }

    private boolean g() {
            r4 = this;
            boolean r0 = r4.q
            if (r0 == 0) goto L19
            android.media.AudioTrack r0 = r4.l
            int r0 = r0.getPlayState()
            r1 = 2
            if (r0 != r1) goto L19
            long r0 = r4.i()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L19
            r0 = 1
            return r0
        L19:
            r0 = 0
            return r0
    }

    private long h() {
            r2 = this;
            long r0 = r2.i()
            long r0 = r2.g(r0)
            return r0
    }

    private long i() {
            r10 = this;
            long r0 = r10.E
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L27
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            long r2 = r10.E
            long r0 = r0 - r2
            int r2 = r10.p
            long r2 = (long) r2
            long r0 = r0 * r2
            r2 = 1000000(0xf4240, double:4.940656E-318)
            long r0 = r0 / r2
            long r2 = r10.H
            long r4 = r10.G
            long r4 = r4 + r0
            long r0 = java.lang.Math.min(r2, r4)
            return r0
        L27:
            android.media.AudioTrack r0 = r10.l
            int r0 = r0.getPlayState()
            r1 = 1
            r4 = 0
            if (r0 != r1) goto L33
            return r4
        L33:
            r6 = 4294967295(0xffffffff, double:2.1219957905E-314)
            android.media.AudioTrack r1 = r10.l
            int r1 = r1.getPlaybackHeadPosition()
            long r8 = (long) r1
            long r6 = r6 & r8
            boolean r1 = r10.q
            if (r1 == 0) goto L52
            r1 = 2
            if (r0 != r1) goto L4f
            int r1 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r1 != 0) goto L4f
            long r8 = r10.z
            r10.B = r8
        L4f:
            long r8 = r10.B
            long r6 = r6 + r8
        L52:
            int r1 = com.tkay.expressad.exoplayer.k.af.a
            r8 = 28
            if (r1 > r8) goto L76
            int r1 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r1 != 0) goto L74
            long r8 = r10.z
            int r1 = (r8 > r4 ? 1 : (r8 == r4 ? 0 : -1))
            if (r1 <= 0) goto L74
            r1 = 3
            if (r0 != r1) goto L74
            long r0 = r10.F
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L71
            long r0 = android.os.SystemClock.elapsedRealtime()
            r10.F = r0
        L71:
            long r0 = r10.z
            return r0
        L74:
            r10.F = r2
        L76:
            long r0 = r10.z
            int r0 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r0 <= 0) goto L83
            long r0 = r10.A
            r2 = 1
            long r0 = r0 + r2
            r10.A = r0
        L83:
            r10.z = r6
            long r0 = r10.A
            r2 = 32
            long r0 = r0 << r2
            long r6 = r6 + r0
            return r6
    }

    public final long a(boolean r17) {
            r16 = this;
            r0 = r16
            android.media.AudioTrack r1 = r0.l
            int r1 = r1.getPlayState()
            r2 = 1000(0x3e8, double:4.94E-321)
            r4 = 3
            if (r1 != r4) goto La7
            long r12 = r16.h()
            r4 = 0
            int r1 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            if (r1 == 0) goto La7
            long r6 = java.lang.System.nanoTime()
            long r14 = r6 / r2
            long r6 = r0.t
            long r6 = r14 - r6
            r8 = 30000(0x7530, double:1.4822E-319)
            int r1 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r1 < 0) goto L55
            long[] r1 = r0.k
            int r6 = r0.C
            long r7 = r12 - r14
            r1[r6] = r7
            int r6 = r6 + 1
            r1 = 10
            int r6 = r6 % r1
            r0.C = r6
            int r6 = r0.D
            if (r6 >= r1) goto L3e
            int r6 = r6 + 1
            r0.D = r6
        L3e:
            r0.t = r14
            r0.s = r4
            r1 = 0
        L43:
            int r4 = r0.D
            if (r1 >= r4) goto L55
            long r5 = r0.s
            long[] r7 = r0.k
            r8 = r7[r1]
            long r10 = (long) r4
            long r8 = r8 / r10
            long r5 = r5 + r8
            r0.s = r5
            int r1 = r1 + 1
            goto L43
        L55:
            boolean r1 = r0.q
            if (r1 != 0) goto La7
            com.tkay.expressad.exoplayer.b.i r1 = r0.o
            boolean r1 = r1.a(r14)
            if (r1 == 0) goto La4
            com.tkay.expressad.exoplayer.b.i r1 = r0.o
            long r8 = r1.f()
            com.tkay.expressad.exoplayer.b.i r1 = r0.o
            long r6 = r1.g()
            long r4 = r8 - r14
            long r4 = java.lang.Math.abs(r4)
            r10 = 5000000(0x4c4b40, double:2.470328E-317)
            int r1 = (r4 > r10 ? 1 : (r4 == r10 ? 0 : -1))
            if (r1 <= 0) goto L86
            com.tkay.expressad.exoplayer.b.j$a r5 = r0.j
            r10 = r14
            r5.b(r6, r8, r10, r12)
            com.tkay.expressad.exoplayer.b.i r1 = r0.o
            r1.a()
            goto La4
        L86:
            long r4 = r0.g(r6)
            long r4 = r4 - r12
            long r4 = java.lang.Math.abs(r4)
            int r1 = (r4 > r10 ? 1 : (r4 == r10 ? 0 : -1))
            if (r1 <= 0) goto L9f
            com.tkay.expressad.exoplayer.b.j$a r5 = r0.j
            r10 = r14
            r5.a(r6, r8, r10, r12)
            com.tkay.expressad.exoplayer.b.i r1 = r0.o
            r1.a()
            goto La4
        L9f:
            com.tkay.expressad.exoplayer.b.i r1 = r0.o
            r1.b()
        La4:
            r0.f(r14)
        La7:
            long r4 = java.lang.System.nanoTime()
            long r4 = r4 / r2
            com.tkay.expressad.exoplayer.b.i r1 = r0.o
            boolean r1 = r1.c()
            if (r1 == 0) goto Ld0
            com.tkay.expressad.exoplayer.b.i r1 = r0.o
            long r1 = r1.g()
            long r1 = r0.g(r1)
            com.tkay.expressad.exoplayer.b.i r3 = r0.o
            boolean r3 = r3.d()
            if (r3 != 0) goto Lc7
            return r1
        Lc7:
            com.tkay.expressad.exoplayer.b.i r3 = r0.o
            long r6 = r3.f()
            long r4 = r4 - r6
            long r1 = r1 + r4
            return r1
        Ld0:
            int r1 = r0.D
            if (r1 != 0) goto Ld9
            long r1 = r16.h()
            goto Ldc
        Ld9:
            long r1 = r0.s
            long r1 = r1 + r4
        Ldc:
            if (r17 != 0) goto Le1
            long r3 = r0.v
            long r1 = r1 - r3
        Le1:
            return r1
    }

    public final void a() {
            r1 = this;
            com.tkay.expressad.exoplayer.b.i r0 = r1.o
            r0.e()
            return
    }

    public final void a(android.media.AudioTrack r4, int r5, int r6, int r7) {
            r3 = this;
            r3.l = r4
            r3.m = r6
            r3.n = r7
            com.tkay.expressad.exoplayer.b.i r0 = new com.tkay.expressad.exoplayer.b.i
            r0.<init>(r4)
            r3.o = r0
            int r4 = r4.getSampleRate()
            r3.p = r4
            int r4 = com.tkay.expressad.exoplayer.k.af.a
            r0 = 0
            r1 = 23
            if (r4 >= r1) goto L22
            r4 = 5
            if (r5 == r4) goto L20
            r4 = 6
            if (r5 != r4) goto L22
        L20:
            r4 = 1
            goto L23
        L22:
            r4 = r0
        L23:
            r3.q = r4
            boolean r4 = com.tkay.expressad.exoplayer.k.af.b(r5)
            r3.x = r4
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r4 == 0) goto L39
            int r7 = r7 / r6
            long r4 = (long) r7
            long r4 = r3.g(r4)
            goto L3a
        L39:
            r4 = r1
        L3a:
            r3.r = r4
            r4 = 0
            r3.z = r4
            r3.A = r4
            r3.B = r4
            r3.w = r0
            r3.E = r1
            r3.F = r1
            r3.v = r4
            return
    }

    public final boolean a(long r9) {
            r8 = this;
            android.media.AudioTrack r0 = r8.l
            int r0 = r0.getPlayState()
            boolean r1 = r8.q
            r2 = 1
            if (r1 == 0) goto L1f
            r1 = 2
            r3 = 0
            if (r0 != r1) goto L12
            r8.w = r3
            return r3
        L12:
            if (r0 != r2) goto L1f
            long r4 = r8.i()
            r6 = 0
            int r1 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r1 != 0) goto L1f
            return r3
        L1f:
            boolean r1 = r8.w
            boolean r9 = r8.e(r9)
            r8.w = r9
            if (r1 == 0) goto L3c
            if (r9 != 0) goto L3c
            if (r0 == r2) goto L3c
            com.tkay.expressad.exoplayer.b.j$a r9 = r8.j
            if (r9 == 0) goto L3c
            int r10 = r8.n
            long r0 = r8.r
            long r0 = com.tkay.expressad.exoplayer.b.a(r0)
            r9.a(r10, r0)
        L3c:
            return r2
    }

    public final int b(long r5) {
            r4 = this;
            long r0 = r4.i()
            int r2 = r4.m
            long r2 = (long) r2
            long r0 = r0 * r2
            long r5 = r5 - r0
            int r5 = (int) r5
            int r6 = r4.n
            int r6 = r6 - r5
            return r6
    }

    public final boolean b() {
            r2 = this;
            android.media.AudioTrack r0 = r2.l
            int r0 = r0.getPlayState()
            r1 = 3
            if (r0 != r1) goto Lb
            r0 = 1
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public final boolean c() {
            r4 = this;
            r4.f()
            long r0 = r4.E
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L15
            com.tkay.expressad.exoplayer.b.i r0 = r4.o
            r0.e()
            r0 = 1
            return r0
        L15:
            r0 = 0
            return r0
    }

    public final boolean c(long r5) {
            r4 = this;
            long r0 = r4.F
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L20
            r0 = 0
            int r5 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r5 <= 0) goto L20
            long r5 = android.os.SystemClock.elapsedRealtime()
            long r0 = r4.F
            long r5 = r5 - r0
            r0 = 200(0xc8, double:9.9E-322)
            int r5 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r5 < 0) goto L20
            r5 = 1
            return r5
        L20:
            r5 = 0
            return r5
    }

    public final void d() {
            r1 = this;
            r1.f()
            r0 = 0
            r1.l = r0
            r1.o = r0
            return
    }

    public final void d(long r5) {
            r4 = this;
            long r0 = r4.i()
            r4.G = r0
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            r4.E = r0
            r4.H = r5
            return
    }

    public final boolean e(long r3) {
            r2 = this;
            long r0 = r2.i()
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 > 0) goto L11
            boolean r3 = r2.g()
            if (r3 == 0) goto Lf
            goto L11
        Lf:
            r3 = 0
            return r3
        L11:
            r3 = 1
            return r3
    }
}
