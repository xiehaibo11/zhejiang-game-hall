package com.tkay.expressad.exoplayer.j.a;

public final class c implements com.tkay.expressad.exoplayer.j.h {
    public static final long a = 2097152;
    public static final int b = 1;
    public static final int c = 2;
    public static final int d = 4;
    public static final int e = 0;
    public static final int f = 1;
    private static final int g = -1;
    private static final long h = 102400;
    private boolean A;
    private long B;
    private long C;
    private final com.tkay.expressad.exoplayer.j.a.a i;
    private final com.tkay.expressad.exoplayer.j.h j;
    private final com.tkay.expressad.exoplayer.j.h k;
    private final com.tkay.expressad.exoplayer.j.h l;
    private final com.tkay.expressad.exoplayer.j.a.c.b m;
    private final boolean n;
    private final boolean o;
    private final boolean p;
    private com.tkay.expressad.exoplayer.j.h q;
    private boolean r;
    private android.net.Uri s;
    private android.net.Uri t;
    private int u;
    private java.lang.String v;
    private long w;
    private long x;
    private com.tkay.expressad.exoplayer.j.a.e y;
    private boolean z;

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface a {
    }

    public interface b {
        void a();

        void b();
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface c {
    }

    public c(com.tkay.expressad.exoplayer.j.a.a r2, com.tkay.expressad.exoplayer.j.h r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0, r0)
            return
    }

    private c(com.tkay.expressad.exoplayer.j.a.a r2, com.tkay.expressad.exoplayer.j.h r3, int r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r4, r0)
            return
    }

    private c(com.tkay.expressad.exoplayer.j.a.a r8, com.tkay.expressad.exoplayer.j.h r9, int r10, byte r11) {
            r7 = this;
            com.tkay.expressad.exoplayer.j.r r3 = new com.tkay.expressad.exoplayer.j.r
            r3.<init>()
            com.tkay.expressad.exoplayer.j.a.b r4 = new com.tkay.expressad.exoplayer.j.a.b
            r4.<init>(r8)
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r5 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    private c(com.tkay.expressad.exoplayer.j.a.a r2, com.tkay.expressad.exoplayer.j.h r3, com.tkay.expressad.exoplayer.j.h r4, com.tkay.expressad.exoplayer.j.g r5, int r6, com.tkay.expressad.exoplayer.j.a.c.b r7) {
            r1 = this;
            r1.<init>()
            r1.i = r2
            r1.j = r4
            r2 = r6 & 1
            r4 = 0
            r0 = 1
            if (r2 == 0) goto Lf
            r2 = r0
            goto L10
        Lf:
            r2 = r4
        L10:
            r1.n = r2
            r2 = r6 & 2
            if (r2 == 0) goto L18
            r2 = r0
            goto L19
        L18:
            r2 = r4
        L19:
            r1.o = r2
            r2 = r6 & 4
            if (r2 == 0) goto L20
            r4 = r0
        L20:
            r1.p = r4
            r1.l = r3
            com.tkay.expressad.exoplayer.j.z r2 = new com.tkay.expressad.exoplayer.j.z
            r2.<init>(r3, r5)
            r1.k = r2
            r1.m = r7
            return
    }

    private static android.net.Uri a(com.tkay.expressad.exoplayer.j.a.a r2, java.lang.String r3, android.net.Uri r4) {
            com.tkay.expressad.exoplayer.j.a.i r2 = r2.c(r3)
            r3 = 0
            r0 = r3
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "exo_redir"
            java.lang.String r2 = r2.a(r1, r0)
            if (r2 != 0) goto L11
            goto L15
        L11:
            android.net.Uri r3 = android.net.Uri.parse(r2)
        L15:
            if (r3 != 0) goto L18
            return r4
        L18:
            return r3
    }

    private void a(boolean r15) {
            r14 = this;
            boolean r0 = r14.A
            r1 = 0
            if (r0 == 0) goto L7
            r0 = r1
            goto L2d
        L7:
            boolean r0 = r14.n
            if (r0 == 0) goto L23
            com.tkay.expressad.exoplayer.j.a.a r0 = r14.i     // Catch: java.lang.InterruptedException -> L16
            java.lang.String r2 = r14.v     // Catch: java.lang.InterruptedException -> L16
            long r3 = r14.w     // Catch: java.lang.InterruptedException -> L16
            com.tkay.expressad.exoplayer.j.a.e r0 = r0.a(r2, r3)     // Catch: java.lang.InterruptedException -> L16
            goto L2d
        L16:
            java.lang.Thread r15 = java.lang.Thread.currentThread()
            r15.interrupt()
            java.io.InterruptedIOException r15 = new java.io.InterruptedIOException
            r15.<init>()
            throw r15
        L23:
            com.tkay.expressad.exoplayer.j.a.a r0 = r14.i
            java.lang.String r2 = r14.v
            long r3 = r14.w
            com.tkay.expressad.exoplayer.j.a.e r0 = r0.b(r2, r3)
        L2d:
            r2 = -1
            if (r0 != 0) goto L45
            com.tkay.expressad.exoplayer.j.h r1 = r14.l
            com.tkay.expressad.exoplayer.j.k r12 = new com.tkay.expressad.exoplayer.j.k
            android.net.Uri r5 = r14.s
            long r6 = r14.w
            long r8 = r14.x
            java.lang.String r10 = r14.v
            int r11 = r14.u
            r4 = r12
            r4.<init>(r5, r6, r8, r10, r11)
            goto La7
        L45:
            boolean r4 = r0.d
            if (r4 == 0) goto L74
            java.io.File r1 = r0.e
            android.net.Uri r5 = android.net.Uri.fromFile(r1)
            long r6 = r14.w
            long r8 = r0.b
            long r8 = r6 - r8
            long r6 = r0.c
            long r6 = r6 - r8
            long r10 = r14.x
            int r1 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r1 == 0) goto L62
            long r6 = java.lang.Math.min(r6, r10)
        L62:
            r10 = r6
            com.tkay.expressad.exoplayer.j.k r1 = new com.tkay.expressad.exoplayer.j.k
            long r6 = r14.w
            java.lang.String r12 = r14.v
            int r13 = r14.u
            r4 = r1
            r4.<init>(r5, r6, r8, r10, r12, r13)
            com.tkay.expressad.exoplayer.j.h r4 = r14.j
            r12 = r1
            r1 = r4
            goto La7
        L74:
            boolean r4 = r0.a()
            if (r4 == 0) goto L7d
            long r4 = r14.x
            goto L89
        L7d:
            long r4 = r0.c
            long r6 = r14.x
            int r8 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r8 == 0) goto L89
            long r4 = java.lang.Math.min(r4, r6)
        L89:
            r10 = r4
            com.tkay.expressad.exoplayer.j.k r4 = new com.tkay.expressad.exoplayer.j.k
            android.net.Uri r7 = r14.s
            long r8 = r14.w
            java.lang.String r12 = r14.v
            int r13 = r14.u
            r6 = r4
            r6.<init>(r7, r8, r10, r12, r13)
            com.tkay.expressad.exoplayer.j.h r5 = r14.k
            if (r5 == 0) goto L9d
            goto La5
        L9d:
            com.tkay.expressad.exoplayer.j.h r5 = r14.l
            com.tkay.expressad.exoplayer.j.a.a r6 = r14.i
            r6.a(r0)
            r0 = r1
        La5:
            r12 = r4
            r1 = r5
        La7:
            boolean r4 = r14.A
            if (r4 != 0) goto Lb6
            com.tkay.expressad.exoplayer.j.h r4 = r14.l
            if (r1 != r4) goto Lb6
            long r4 = r14.w
            r6 = 102400(0x19000, double:5.05923E-319)
            long r4 = r4 + r6
            goto Lbb
        Lb6:
            r4 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
        Lbb:
            r14.C = r4
            if (r15 == 0) goto Ldc
            boolean r15 = r14.e()
            com.tkay.expressad.exoplayer.k.a.b(r15)
            com.tkay.expressad.exoplayer.j.h r15 = r14.l
            if (r1 != r15) goto Lcb
            return
        Lcb:
            r14.h()     // Catch: java.lang.Throwable -> Lcf
            goto Ldc
        Lcf:
            r15 = move-exception
            boolean r1 = r0.b()
            if (r1 == 0) goto Ldb
            com.tkay.expressad.exoplayer.j.a.a r1 = r14.i
            r1.a(r0)
        Ldb:
            throw r15
        Ldc:
            if (r0 == 0) goto Le6
            boolean r15 = r0.b()
            if (r15 == 0) goto Le6
            r14.y = r0
        Le6:
            r14.q = r1
            long r4 = r12.g
            int r15 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            r0 = 1
            if (r15 != 0) goto Lf1
            r15 = r0
            goto Lf2
        Lf1:
            r15 = 0
        Lf2:
            r14.r = r15
            long r4 = r1.a(r12)
            com.tkay.expressad.exoplayer.j.a.k r15 = new com.tkay.expressad.exoplayer.j.a.k
            r15.<init>()
            boolean r1 = r14.r
            if (r1 == 0) goto L10d
            int r1 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r1 == 0) goto L10d
            r14.x = r4
            long r1 = r14.w
            long r1 = r1 + r4
            com.tkay.expressad.exoplayer.j.a.j.a(r15, r1)
        L10d:
            boolean r1 = r14.d()
            if (r1 == 0) goto L12f
            com.tkay.expressad.exoplayer.j.h r1 = r14.q
            android.net.Uri r1 = r1.a()
            r14.t = r1
            android.net.Uri r2 = r14.s
            boolean r1 = r2.equals(r1)
            r0 = r0 ^ r1
            if (r0 == 0) goto L12a
            android.net.Uri r0 = r14.t
            com.tkay.expressad.exoplayer.j.a.j.a(r15, r0)
            goto L12f
        L12a:
            java.lang.String r0 = "exo_redir"
            r15.a(r0)
        L12f:
            boolean r0 = r14.g()
            if (r0 == 0) goto L13c
            com.tkay.expressad.exoplayer.j.a.a r0 = r14.i
            java.lang.String r1 = r14.v
            r0.a(r1, r15)
        L13c:
            return
    }

    private static boolean a(java.io.IOException r1) {
        L0:
            if (r1 == 0) goto L14
            boolean r0 = r1 instanceof com.tkay.expressad.exoplayer.j.i
            if (r0 == 0) goto Lf
            r0 = r1
            com.tkay.expressad.exoplayer.j.i r0 = (com.tkay.expressad.exoplayer.j.i) r0
            int r0 = r0.b
            if (r0 != 0) goto Lf
            r1 = 1
            return r1
        Lf:
            java.lang.Throwable r1 = r1.getCause()
            goto L0
        L14:
            r1 = 0
            return r1
    }

    private int b(com.tkay.expressad.exoplayer.j.k r5) {
            r4 = this;
            boolean r0 = r4.o
            if (r0 == 0) goto La
            boolean r0 = r4.z
            if (r0 == 0) goto La
            r5 = 0
            return r5
        La:
            boolean r0 = r4.p
            if (r0 == 0) goto L18
            long r0 = r5.g
            r2 = -1
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 != 0) goto L18
            r5 = 1
            return r5
        L18:
            r5 = -1
            return r5
    }

    private void b(java.io.IOException r2) {
            r1 = this;
            boolean r0 = r1.f()
            if (r0 != 0) goto La
            boolean r2 = r2 instanceof com.tkay.expressad.exoplayer.j.a.a.a
            if (r2 == 0) goto Ld
        La:
            r2 = 1
            r1.z = r2
        Ld:
            return
    }

    private void c() {
            r4 = this;
            r0 = 0
            r4.x = r0
            boolean r0 = r4.g()
            if (r0 == 0) goto L13
            com.tkay.expressad.exoplayer.j.a.a r0 = r4.i
            java.lang.String r1 = r4.v
            long r2 = r4.w
            r0.d(r1, r2)
        L13:
            return
    }

    private boolean d() {
            r1 = this;
            boolean r0 = r1.f()
            if (r0 != 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    private boolean e() {
            r2 = this;
            com.tkay.expressad.exoplayer.j.h r0 = r2.q
            com.tkay.expressad.exoplayer.j.h r1 = r2.l
            if (r0 != r1) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    private boolean f() {
            r2 = this;
            com.tkay.expressad.exoplayer.j.h r0 = r2.q
            com.tkay.expressad.exoplayer.j.h r1 = r2.j
            if (r0 != r1) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    private boolean g() {
            r2 = this;
            com.tkay.expressad.exoplayer.j.h r0 = r2.q
            com.tkay.expressad.exoplayer.j.h r1 = r2.k
            if (r0 != r1) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    private void h() {
            r4 = this;
            com.tkay.expressad.exoplayer.j.h r0 = r4.q
            if (r0 != 0) goto L5
            return
        L5:
            r1 = 0
            r2 = 0
            r0.b()     // Catch: java.lang.Throwable -> L1a
            r4.q = r2
            r4.r = r1
            com.tkay.expressad.exoplayer.j.a.e r0 = r4.y
            if (r0 == 0) goto L19
            com.tkay.expressad.exoplayer.j.a.a r1 = r4.i
            r1.a(r0)
            r4.y = r2
        L19:
            return
        L1a:
            r0 = move-exception
            r4.q = r2
            r4.r = r1
            com.tkay.expressad.exoplayer.j.a.e r1 = r4.y
            if (r1 == 0) goto L2a
            com.tkay.expressad.exoplayer.j.a.a r3 = r4.i
            r3.a(r1)
            r4.y = r2
        L2a:
            throw r0
    }

    private static void i() {
            return
    }

    private void j() {
            r4 = this;
            com.tkay.expressad.exoplayer.j.a.c$b r0 = r4.m
            if (r0 == 0) goto L13
            long r0 = r4.B
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L13
            com.tkay.expressad.exoplayer.j.a.a r0 = r4.i
            r0.c()
            r4.B = r2
        L13:
            return
    }

    @Override
    public final int a(byte[] r11, int r12, int r13) {
            r10 = this;
            r0 = 0
            if (r13 != 0) goto L4
            return r0
        L4:
            long r1 = r10.x
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            r2 = -1
            if (r1 != 0) goto Le
            return r2
        Le:
            r1 = 1
            long r5 = r10.w     // Catch: java.io.IOException -> L63
            long r7 = r10.C     // Catch: java.io.IOException -> L63
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 < 0) goto L1a
            r10.a(r1)     // Catch: java.io.IOException -> L63
        L1a:
            com.tkay.expressad.exoplayer.j.h r5 = r10.q     // Catch: java.io.IOException -> L63
            int r5 = r5.a(r11, r12, r13)     // Catch: java.io.IOException -> L63
            r6 = -1
            if (r5 == r2) goto L42
            boolean r11 = r10.f()     // Catch: java.io.IOException -> L63
            if (r11 == 0) goto L30
            long r11 = r10.B     // Catch: java.io.IOException -> L63
            long r3 = (long) r5     // Catch: java.io.IOException -> L63
            long r11 = r11 + r3
            r10.B = r11     // Catch: java.io.IOException -> L63
        L30:
            long r11 = r10.w     // Catch: java.io.IOException -> L63
            long r3 = (long) r5     // Catch: java.io.IOException -> L63
            long r11 = r11 + r3
            r10.w = r11     // Catch: java.io.IOException -> L63
            long r11 = r10.x     // Catch: java.io.IOException -> L63
            int r11 = (r11 > r6 ? 1 : (r11 == r6 ? 0 : -1))
            if (r11 == 0) goto L57
            long r11 = r10.x     // Catch: java.io.IOException -> L63
            long r11 = r11 - r3
            r10.x = r11     // Catch: java.io.IOException -> L63
            goto L57
        L42:
            boolean r8 = r10.r     // Catch: java.io.IOException -> L63
            if (r8 == 0) goto L4a
            r10.c()     // Catch: java.io.IOException -> L63
            goto L57
        L4a:
            long r8 = r10.x     // Catch: java.io.IOException -> L63
            int r3 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r3 > 0) goto L58
            long r3 = r10.x     // Catch: java.io.IOException -> L63
            int r3 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r3 != 0) goto L57
            goto L58
        L57:
            return r5
        L58:
            r10.h()     // Catch: java.io.IOException -> L63
            r10.a(r0)     // Catch: java.io.IOException -> L63
            int r11 = r10.a(r11, r12, r13)     // Catch: java.io.IOException -> L63
            return r11
        L63:
            r11 = move-exception
            boolean r12 = r10.r
            if (r12 == 0) goto L83
            r12 = r11
        L69:
            if (r12 == 0) goto L7d
            boolean r13 = r12 instanceof com.tkay.expressad.exoplayer.j.i
            if (r13 == 0) goto L78
            r13 = r12
            com.tkay.expressad.exoplayer.j.i r13 = (com.tkay.expressad.exoplayer.j.i) r13
            int r13 = r13.b
            if (r13 != 0) goto L78
            r0 = r1
            goto L7d
        L78:
            java.lang.Throwable r12 = r12.getCause()
            goto L69
        L7d:
            if (r0 == 0) goto L83
            r10.c()
            return r2
        L83:
            r10.b(r11)
            throw r11
    }

    @Override
    public final long a(com.tkay.expressad.exoplayer.j.k r9) {
            r8 = this;
            java.lang.String r0 = com.tkay.expressad.exoplayer.j.a.f.a(r9)     // Catch: java.io.IOException -> L88
            r8.v = r0     // Catch: java.io.IOException -> L88
            android.net.Uri r0 = r9.c     // Catch: java.io.IOException -> L88
            r8.s = r0     // Catch: java.io.IOException -> L88
            com.tkay.expressad.exoplayer.j.a.a r1 = r8.i     // Catch: java.io.IOException -> L88
            java.lang.String r2 = r8.v     // Catch: java.io.IOException -> L88
            com.tkay.expressad.exoplayer.j.a.i r1 = r1.c(r2)     // Catch: java.io.IOException -> L88
            java.lang.String r2 = "exo_redir"
            r3 = 0
            r4 = r3
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.io.IOException -> L88
            java.lang.String r1 = r1.a(r2, r4)     // Catch: java.io.IOException -> L88
            if (r1 != 0) goto L1f
            goto L23
        L1f:
            android.net.Uri r3 = android.net.Uri.parse(r1)     // Catch: java.io.IOException -> L88
        L23:
            if (r3 != 0) goto L26
            goto L27
        L26:
            r0 = r3
        L27:
            r8.t = r0     // Catch: java.io.IOException -> L88
            int r0 = r9.i     // Catch: java.io.IOException -> L88
            r8.u = r0     // Catch: java.io.IOException -> L88
            long r0 = r9.f     // Catch: java.io.IOException -> L88
            r8.w = r0     // Catch: java.io.IOException -> L88
            boolean r0 = r8.o     // Catch: java.io.IOException -> L88
            r1 = 1
            r2 = -1
            r3 = -1
            r5 = 0
            if (r0 == 0) goto L40
            boolean r0 = r8.z     // Catch: java.io.IOException -> L88
            if (r0 == 0) goto L40
            r0 = r5
            goto L4d
        L40:
            boolean r0 = r8.p     // Catch: java.io.IOException -> L88
            if (r0 == 0) goto L4c
            long r6 = r9.g     // Catch: java.io.IOException -> L88
            int r0 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r0 != 0) goto L4c
            r0 = r1
            goto L4d
        L4c:
            r0 = r2
        L4d:
            if (r0 == r2) goto L50
            goto L51
        L50:
            r1 = r5
        L51:
            r8.A = r1     // Catch: java.io.IOException -> L88
            long r0 = r9.g     // Catch: java.io.IOException -> L88
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 != 0) goto L7e
            boolean r0 = r8.A     // Catch: java.io.IOException -> L88
            if (r0 == 0) goto L5e
            goto L7e
        L5e:
            com.tkay.expressad.exoplayer.j.a.a r0 = r8.i     // Catch: java.io.IOException -> L88
            java.lang.String r1 = r8.v     // Catch: java.io.IOException -> L88
            long r0 = r0.b(r1)     // Catch: java.io.IOException -> L88
            r8.x = r0     // Catch: java.io.IOException -> L88
            int r2 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r2 == 0) goto L82
            long r2 = r9.f     // Catch: java.io.IOException -> L88
            long r0 = r0 - r2
            r8.x = r0     // Catch: java.io.IOException -> L88
            r2 = 0
            int r9 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r9 <= 0) goto L78
            goto L82
        L78:
            com.tkay.expressad.exoplayer.j.i r9 = new com.tkay.expressad.exoplayer.j.i     // Catch: java.io.IOException -> L88
            r9.<init>()     // Catch: java.io.IOException -> L88
            throw r9     // Catch: java.io.IOException -> L88
        L7e:
            long r0 = r9.g     // Catch: java.io.IOException -> L88
            r8.x = r0     // Catch: java.io.IOException -> L88
        L82:
            r8.a(r5)     // Catch: java.io.IOException -> L88
            long r0 = r8.x     // Catch: java.io.IOException -> L88
            return r0
        L88:
            r9 = move-exception
            r8.b(r9)
            throw r9
    }

    @Override
    public final android.net.Uri a() {
            r1 = this;
            android.net.Uri r0 = r1.t
            return r0
    }

    @Override
    public final void b() {
            r4 = this;
            r0 = 0
            r4.s = r0
            r4.t = r0
            com.tkay.expressad.exoplayer.j.a.c$b r0 = r4.m
            if (r0 == 0) goto L18
            long r0 = r4.B
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L18
            com.tkay.expressad.exoplayer.j.a.a r0 = r4.i
            r0.c()
            r4.B = r2
        L18:
            r4.h()     // Catch: java.io.IOException -> L1c
            return
        L1c:
            r0 = move-exception
            r4.b(r0)
            throw r0
    }
}
