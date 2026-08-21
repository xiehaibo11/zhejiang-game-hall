package com.tkay.expressad.exoplayer.h;

final class w {
    private static final int a = 1000;
    private int b;
    private int[] c;
    private long[] d;
    private int[] e;
    private int[] f;
    private long[] g;
    private com.tkay.expressad.exoplayer.e.m.a[] h;
    private com.tkay.expressad.exoplayer.m[] i;
    private int j;
    private int k;
    private int l;
    private int m;
    private long n;
    private long o;
    private boolean p;
    private boolean q;
    private com.tkay.expressad.exoplayer.m r;
    private int s;

    public static final class a {
        public int a;
        public long b;
        public com.tkay.expressad.exoplayer.e.m.a c;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public w() {
            r2 = this;
            r2.<init>()
            r0 = 1000(0x3e8, float:1.401E-42)
            r2.b = r0
            int[] r1 = new int[r0]
            r2.c = r1
            long[] r1 = new long[r0]
            r2.d = r1
            long[] r1 = new long[r0]
            r2.g = r1
            int[] r1 = new int[r0]
            r2.f = r1
            int[] r1 = new int[r0]
            r2.e = r1
            com.tkay.expressad.exoplayer.e.m$a[] r1 = new com.tkay.expressad.exoplayer.e.m.a[r0]
            r2.h = r1
            com.tkay.expressad.exoplayer.m[] r0 = new com.tkay.expressad.exoplayer.m[r0]
            r2.i = r0
            r0 = -9223372036854775808
            r2.n = r0
            r2.o = r0
            r0 = 1
            r2.q = r0
            r2.p = r0
            return
    }

    private int a(int r7, int r8, long r9, boolean r11) {
            r6 = this;
            r0 = 0
            r1 = -1
            r2 = r0
        L3:
            if (r2 >= r8) goto L22
            long[] r3 = r6.g
            r4 = r3[r7]
            int r3 = (r4 > r9 ? 1 : (r4 == r9 ? 0 : -1))
            if (r3 > 0) goto L22
            if (r11 == 0) goto L17
            int[] r3 = r6.f
            r3 = r3[r7]
            r3 = r3 & 1
            if (r3 == 0) goto L18
        L17:
            r1 = r2
        L18:
            int r7 = r7 + 1
            int r3 = r6.b
            if (r7 != r3) goto L1f
            r7 = r0
        L1f:
            int r2 = r2 + 1
            goto L3
        L22:
            return r1
    }

    private synchronized void b(long r3) {
            r2 = this;
            monitor-enter(r2)
            long r0 = r2.o     // Catch: java.lang.Throwable -> Lb
            long r3 = java.lang.Math.max(r0, r3)     // Catch: java.lang.Throwable -> Lb
            r2.o = r3     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r2)
            return
        Lb:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    private long d(int r6) {
            r5 = this;
            long r0 = r5.n
            long r2 = r5.e(r6)
            long r0 = java.lang.Math.max(r0, r2)
            r5.n = r0
            int r0 = r5.j
            int r0 = r0 - r6
            r5.j = r0
            int r0 = r5.k
            int r0 = r0 + r6
            r5.k = r0
            int r0 = r5.l
            int r0 = r0 + r6
            r5.l = r0
            int r1 = r5.b
            if (r0 < r1) goto L22
            int r0 = r0 - r1
            r5.l = r0
        L22:
            int r0 = r5.m
            int r0 = r0 - r6
            r5.m = r0
            if (r0 >= 0) goto L2c
            r6 = 0
            r5.m = r6
        L2c:
            int r6 = r5.j
            if (r6 != 0) goto L43
            int r6 = r5.l
            if (r6 != 0) goto L36
            int r6 = r5.b
        L36:
            int r6 = r6 + (-1)
            long[] r0 = r5.d
            r1 = r0[r6]
            int[] r0 = r5.e
            r6 = r0[r6]
            long r3 = (long) r6
            long r1 = r1 + r3
            return r1
        L43:
            long[] r6 = r5.d
            int r0 = r5.l
            r0 = r6[r0]
            return r0
    }

    private long e(int r8) {
            r7 = this;
            r0 = -9223372036854775808
            if (r8 != 0) goto L5
            return r0
        L5:
            int r2 = r8 + (-1)
            int r2 = r7.f(r2)
            r3 = 0
        Lc:
            if (r3 >= r8) goto L2a
            long[] r4 = r7.g
            r5 = r4[r2]
            long r0 = java.lang.Math.max(r0, r5)
            int[] r4 = r7.f
            r4 = r4[r2]
            r4 = r4 & 1
            if (r4 != 0) goto L2a
            int r2 = r2 + (-1)
            r4 = -1
            if (r2 != r4) goto L27
            int r2 = r7.b
            int r2 = r2 + (-1)
        L27:
            int r3 = r3 + 1
            goto Lc
        L2a:
            return r0
    }

    private int f(int r2) {
            r1 = this;
            int r0 = r1.l
            int r0 = r0 + r2
            int r2 = r1.b
            if (r0 >= r2) goto L8
            return r0
        L8:
            int r0 = r0 - r2
            return r0
    }

    public final synchronized int a(long r9, boolean r11) {
            r8 = this;
            monitor-enter(r8)
            int r0 = r8.m     // Catch: java.lang.Throwable -> L39
            int r2 = r8.f(r0)     // Catch: java.lang.Throwable -> L39
            boolean r0 = r8.f()     // Catch: java.lang.Throwable -> L39
            r7 = -1
            if (r0 == 0) goto L37
            long[] r0 = r8.g     // Catch: java.lang.Throwable -> L39
            r3 = r0[r2]     // Catch: java.lang.Throwable -> L39
            int r0 = (r9 > r3 ? 1 : (r9 == r3 ? 0 : -1))
            if (r0 < 0) goto L37
            long r0 = r8.o     // Catch: java.lang.Throwable -> L39
            int r0 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
            if (r0 <= 0) goto L1f
            if (r11 != 0) goto L1f
            goto L37
        L1f:
            int r11 = r8.j     // Catch: java.lang.Throwable -> L39
            int r0 = r8.m     // Catch: java.lang.Throwable -> L39
            int r3 = r11 - r0
            r6 = 1
            r1 = r8
            r4 = r9
            int r9 = r1.a(r2, r3, r4, r6)     // Catch: java.lang.Throwable -> L39
            if (r9 != r7) goto L30
            monitor-exit(r8)
            return r7
        L30:
            int r10 = r8.m     // Catch: java.lang.Throwable -> L39
            int r10 = r10 + r9
            r8.m = r10     // Catch: java.lang.Throwable -> L39
            monitor-exit(r8)
            return r9
        L37:
            monitor-exit(r8)
            return r7
        L39:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }

    public final synchronized int a(com.tkay.expressad.exoplayer.n r5, com.tkay.expressad.exoplayer.c.e r6, boolean r7, boolean r8, com.tkay.expressad.exoplayer.m r9, com.tkay.expressad.exoplayer.h.w.a r10) {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = r4.f()     // Catch: java.lang.Throwable -> L6a
            r1 = -5
            r2 = -3
            r3 = -4
            if (r0 != 0) goto L24
            if (r8 == 0) goto L12
            r5 = 4
            r6.a(r5)     // Catch: java.lang.Throwable -> L6a
            monitor-exit(r4)
            return r3
        L12:
            com.tkay.expressad.exoplayer.m r6 = r4.r     // Catch: java.lang.Throwable -> L6a
            if (r6 == 0) goto L22
            if (r7 != 0) goto L1c
            com.tkay.expressad.exoplayer.m r6 = r4.r     // Catch: java.lang.Throwable -> L6a
            if (r6 == r9) goto L22
        L1c:
            com.tkay.expressad.exoplayer.m r6 = r4.r     // Catch: java.lang.Throwable -> L6a
            r5.a = r6     // Catch: java.lang.Throwable -> L6a
            monitor-exit(r4)
            return r1
        L22:
            monitor-exit(r4)
            return r2
        L24:
            int r8 = r4.m     // Catch: java.lang.Throwable -> L6a
            int r8 = r4.f(r8)     // Catch: java.lang.Throwable -> L6a
            if (r7 != 0) goto L62
            com.tkay.expressad.exoplayer.m[] r7 = r4.i     // Catch: java.lang.Throwable -> L6a
            r7 = r7[r8]     // Catch: java.lang.Throwable -> L6a
            if (r7 == r9) goto L33
            goto L62
        L33:
            boolean r5 = r6.f()     // Catch: java.lang.Throwable -> L6a
            if (r5 == 0) goto L3b
            monitor-exit(r4)
            return r2
        L3b:
            long[] r5 = r4.g     // Catch: java.lang.Throwable -> L6a
            r0 = r5[r8]     // Catch: java.lang.Throwable -> L6a
            r6.f = r0     // Catch: java.lang.Throwable -> L6a
            int[] r5 = r4.f     // Catch: java.lang.Throwable -> L6a
            r5 = r5[r8]     // Catch: java.lang.Throwable -> L6a
            r6.a(r5)     // Catch: java.lang.Throwable -> L6a
            int[] r5 = r4.e     // Catch: java.lang.Throwable -> L6a
            r5 = r5[r8]     // Catch: java.lang.Throwable -> L6a
            r10.a = r5     // Catch: java.lang.Throwable -> L6a
            long[] r5 = r4.d     // Catch: java.lang.Throwable -> L6a
            r6 = r5[r8]     // Catch: java.lang.Throwable -> L6a
            r10.b = r6     // Catch: java.lang.Throwable -> L6a
            com.tkay.expressad.exoplayer.e.m$a[] r5 = r4.h     // Catch: java.lang.Throwable -> L6a
            r5 = r5[r8]     // Catch: java.lang.Throwable -> L6a
            r10.c = r5     // Catch: java.lang.Throwable -> L6a
            int r5 = r4.m     // Catch: java.lang.Throwable -> L6a
            int r5 = r5 + 1
            r4.m = r5     // Catch: java.lang.Throwable -> L6a
            monitor-exit(r4)
            return r3
        L62:
            com.tkay.expressad.exoplayer.m[] r6 = r4.i     // Catch: java.lang.Throwable -> L6a
            r6 = r6[r8]     // Catch: java.lang.Throwable -> L6a
            r5.a = r6     // Catch: java.lang.Throwable -> L6a
            monitor-exit(r4)
            return r1
        L6a:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public final long a(int r6) {
            r5 = this;
            int r0 = r5.b()
            int r0 = r0 - r6
            r6 = 1
            if (r0 < 0) goto L11
            int r1 = r5.j
            int r2 = r5.m
            int r1 = r1 - r2
            if (r0 > r1) goto L11
            r1 = r6
            goto L12
        L11:
            r1 = 0
        L12:
            com.tkay.expressad.exoplayer.k.a.a(r1)
            int r1 = r5.j
            int r1 = r1 - r0
            r5.j = r1
            long r2 = r5.n
            long r0 = r5.e(r1)
            long r0 = java.lang.Math.max(r2, r0)
            r5.o = r0
            int r0 = r5.j
            if (r0 != 0) goto L2d
            r0 = 0
            return r0
        L2d:
            int r0 = r0 - r6
            int r6 = r5.f(r0)
            long[] r0 = r5.d
            r1 = r0[r6]
            int[] r0 = r5.e
            r6 = r0[r6]
            long r3 = (long) r6
            long r1 = r1 + r3
            return r1
    }

    public final synchronized long a(long r10, boolean r12, boolean r13) {
            r9 = this;
            monitor-enter(r9)
            int r0 = r9.j     // Catch: java.lang.Throwable -> L38
            r1 = -1
            if (r0 == 0) goto L36
            long[] r0 = r9.g     // Catch: java.lang.Throwable -> L38
            int r3 = r9.l     // Catch: java.lang.Throwable -> L38
            r3 = r0[r3]     // Catch: java.lang.Throwable -> L38
            int r0 = (r10 > r3 ? 1 : (r10 == r3 ? 0 : -1))
            if (r0 >= 0) goto L12
            goto L36
        L12:
            if (r13 == 0) goto L1f
            int r13 = r9.m     // Catch: java.lang.Throwable -> L38
            int r0 = r9.j     // Catch: java.lang.Throwable -> L38
            if (r13 == r0) goto L1f
            int r13 = r9.m     // Catch: java.lang.Throwable -> L38
            int r13 = r13 + 1
            goto L21
        L1f:
            int r13 = r9.j     // Catch: java.lang.Throwable -> L38
        L21:
            r5 = r13
            int r4 = r9.l     // Catch: java.lang.Throwable -> L38
            r3 = r9
            r6 = r10
            r8 = r12
            int r10 = r3.a(r4, r5, r6, r8)     // Catch: java.lang.Throwable -> L38
            r11 = -1
            if (r10 != r11) goto L30
            monitor-exit(r9)
            return r1
        L30:
            long r10 = r9.d(r10)     // Catch: java.lang.Throwable -> L38
            monitor-exit(r9)
            return r10
        L36:
            monitor-exit(r9)
            return r1
        L38:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    public final void a() {
            r2 = this;
            r0 = 0
            r2.j = r0
            r2.k = r0
            r2.l = r0
            r2.m = r0
            r0 = 1
            r2.p = r0
            r0 = -9223372036854775808
            r2.n = r0
            r2.o = r0
            return
    }

    public final synchronized void a(long r6, int r8, long r9, int r11, com.tkay.expressad.exoplayer.e.m.a r12) {
            r5 = this;
            monitor-enter(r5)
            boolean r0 = r5.p     // Catch: java.lang.Throwable -> Ld0
            r1 = 0
            if (r0 == 0) goto Le
            r0 = r8 & 1
            if (r0 != 0) goto Lc
            monitor-exit(r5)
            return
        Lc:
            r5.p = r1     // Catch: java.lang.Throwable -> Ld0
        Le:
            boolean r0 = r5.q     // Catch: java.lang.Throwable -> Ld0
            r2 = 1
            if (r0 != 0) goto L15
            r0 = r2
            goto L16
        L15:
            r0 = r1
        L16:
            com.tkay.expressad.exoplayer.k.a.b(r0)     // Catch: java.lang.Throwable -> Ld0
            r5.b(r6)     // Catch: java.lang.Throwable -> Ld0
            int r0 = r5.j     // Catch: java.lang.Throwable -> Ld0
            int r0 = r5.f(r0)     // Catch: java.lang.Throwable -> Ld0
            long[] r3 = r5.g     // Catch: java.lang.Throwable -> Ld0
            r3[r0] = r6     // Catch: java.lang.Throwable -> Ld0
            long[] r6 = r5.d     // Catch: java.lang.Throwable -> Ld0
            r6[r0] = r9     // Catch: java.lang.Throwable -> Ld0
            int[] r6 = r5.e     // Catch: java.lang.Throwable -> Ld0
            r6[r0] = r11     // Catch: java.lang.Throwable -> Ld0
            int[] r6 = r5.f     // Catch: java.lang.Throwable -> Ld0
            r6[r0] = r8     // Catch: java.lang.Throwable -> Ld0
            com.tkay.expressad.exoplayer.e.m$a[] r6 = r5.h     // Catch: java.lang.Throwable -> Ld0
            r6[r0] = r12     // Catch: java.lang.Throwable -> Ld0
            com.tkay.expressad.exoplayer.m[] r6 = r5.i     // Catch: java.lang.Throwable -> Ld0
            com.tkay.expressad.exoplayer.m r7 = r5.r     // Catch: java.lang.Throwable -> Ld0
            r6[r0] = r7     // Catch: java.lang.Throwable -> Ld0
            int[] r6 = r5.c     // Catch: java.lang.Throwable -> Ld0
            int r7 = r5.s     // Catch: java.lang.Throwable -> Ld0
            r6[r0] = r7     // Catch: java.lang.Throwable -> Ld0
            int r6 = r5.j     // Catch: java.lang.Throwable -> Ld0
            int r6 = r6 + r2
            r5.j = r6     // Catch: java.lang.Throwable -> Ld0
            int r7 = r5.b     // Catch: java.lang.Throwable -> Ld0
            if (r6 != r7) goto Lce
            int r6 = r5.b     // Catch: java.lang.Throwable -> Ld0
            int r6 = r6 + 1000
            int[] r7 = new int[r6]     // Catch: java.lang.Throwable -> Ld0
            long[] r8 = new long[r6]     // Catch: java.lang.Throwable -> Ld0
            long[] r9 = new long[r6]     // Catch: java.lang.Throwable -> Ld0
            int[] r10 = new int[r6]     // Catch: java.lang.Throwable -> Ld0
            int[] r11 = new int[r6]     // Catch: java.lang.Throwable -> Ld0
            com.tkay.expressad.exoplayer.e.m$a[] r12 = new com.tkay.expressad.exoplayer.e.m.a[r6]     // Catch: java.lang.Throwable -> Ld0
            com.tkay.expressad.exoplayer.m[] r0 = new com.tkay.expressad.exoplayer.m[r6]     // Catch: java.lang.Throwable -> Ld0
            int r2 = r5.b     // Catch: java.lang.Throwable -> Ld0
            int r3 = r5.l     // Catch: java.lang.Throwable -> Ld0
            int r2 = r2 - r3
            long[] r3 = r5.d     // Catch: java.lang.Throwable -> Ld0
            int r4 = r5.l     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r3, r4, r8, r1, r2)     // Catch: java.lang.Throwable -> Ld0
            long[] r3 = r5.g     // Catch: java.lang.Throwable -> Ld0
            int r4 = r5.l     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r3, r4, r9, r1, r2)     // Catch: java.lang.Throwable -> Ld0
            int[] r3 = r5.f     // Catch: java.lang.Throwable -> Ld0
            int r4 = r5.l     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r3, r4, r10, r1, r2)     // Catch: java.lang.Throwable -> Ld0
            int[] r3 = r5.e     // Catch: java.lang.Throwable -> Ld0
            int r4 = r5.l     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r3, r4, r11, r1, r2)     // Catch: java.lang.Throwable -> Ld0
            com.tkay.expressad.exoplayer.e.m$a[] r3 = r5.h     // Catch: java.lang.Throwable -> Ld0
            int r4 = r5.l     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r3, r4, r12, r1, r2)     // Catch: java.lang.Throwable -> Ld0
            com.tkay.expressad.exoplayer.m[] r3 = r5.i     // Catch: java.lang.Throwable -> Ld0
            int r4 = r5.l     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r3, r4, r0, r1, r2)     // Catch: java.lang.Throwable -> Ld0
            int[] r3 = r5.c     // Catch: java.lang.Throwable -> Ld0
            int r4 = r5.l     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r3, r4, r7, r1, r2)     // Catch: java.lang.Throwable -> Ld0
            int r3 = r5.l     // Catch: java.lang.Throwable -> Ld0
            long[] r4 = r5.d     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r4, r1, r8, r2, r3)     // Catch: java.lang.Throwable -> Ld0
            long[] r4 = r5.g     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r4, r1, r9, r2, r3)     // Catch: java.lang.Throwable -> Ld0
            int[] r4 = r5.f     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r4, r1, r10, r2, r3)     // Catch: java.lang.Throwable -> Ld0
            int[] r4 = r5.e     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r4, r1, r11, r2, r3)     // Catch: java.lang.Throwable -> Ld0
            com.tkay.expressad.exoplayer.e.m$a[] r4 = r5.h     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r4, r1, r12, r2, r3)     // Catch: java.lang.Throwable -> Ld0
            com.tkay.expressad.exoplayer.m[] r4 = r5.i     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r4, r1, r0, r2, r3)     // Catch: java.lang.Throwable -> Ld0
            int[] r4 = r5.c     // Catch: java.lang.Throwable -> Ld0
            java.lang.System.arraycopy(r4, r1, r7, r2, r3)     // Catch: java.lang.Throwable -> Ld0
            r5.d = r8     // Catch: java.lang.Throwable -> Ld0
            r5.g = r9     // Catch: java.lang.Throwable -> Ld0
            r5.f = r10     // Catch: java.lang.Throwable -> Ld0
            r5.e = r11     // Catch: java.lang.Throwable -> Ld0
            r5.h = r12     // Catch: java.lang.Throwable -> Ld0
            r5.i = r0     // Catch: java.lang.Throwable -> Ld0
            r5.c = r7     // Catch: java.lang.Throwable -> Ld0
            r5.l = r1     // Catch: java.lang.Throwable -> Ld0
            int r7 = r5.b     // Catch: java.lang.Throwable -> Ld0
            r5.j = r7     // Catch: java.lang.Throwable -> Ld0
            r5.b = r6     // Catch: java.lang.Throwable -> Ld0
        Lce:
            monitor-exit(r5)
            return
        Ld0:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public final synchronized boolean a(long r8) {
            r7 = this;
            monitor-enter(r7)
            int r0 = r7.j     // Catch: java.lang.Throwable -> L4a
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L10
            long r3 = r7.n     // Catch: java.lang.Throwable -> L4a
            int r8 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            monitor-exit(r7)
            if (r8 <= 0) goto Lf
            return r2
        Lf:
            return r1
        L10:
            long r3 = r7.n     // Catch: java.lang.Throwable -> L4a
            int r0 = r7.m     // Catch: java.lang.Throwable -> L4a
            long r5 = r7.e(r0)     // Catch: java.lang.Throwable -> L4a
            long r3 = java.lang.Math.max(r3, r5)     // Catch: java.lang.Throwable -> L4a
            int r0 = (r3 > r8 ? 1 : (r3 == r8 ? 0 : -1))
            if (r0 < 0) goto L22
            monitor-exit(r7)
            return r1
        L22:
            int r0 = r7.j     // Catch: java.lang.Throwable -> L4a
            int r1 = r7.j     // Catch: java.lang.Throwable -> L4a
            int r1 = r1 - r2
            int r1 = r7.f(r1)     // Catch: java.lang.Throwable -> L4a
        L2b:
            int r3 = r7.m     // Catch: java.lang.Throwable -> L4a
            if (r0 <= r3) goto L42
            long[] r3 = r7.g     // Catch: java.lang.Throwable -> L4a
            r4 = r3[r1]     // Catch: java.lang.Throwable -> L4a
            int r3 = (r4 > r8 ? 1 : (r4 == r8 ? 0 : -1))
            if (r3 < 0) goto L42
            int r0 = r0 + (-1)
            int r1 = r1 + (-1)
            r3 = -1
            if (r1 != r3) goto L2b
            int r1 = r7.b     // Catch: java.lang.Throwable -> L4a
            int r1 = r1 - r2
            goto L2b
        L42:
            int r8 = r7.k     // Catch: java.lang.Throwable -> L4a
            int r8 = r8 + r0
            r7.a(r8)     // Catch: java.lang.Throwable -> L4a
            monitor-exit(r7)
            return r2
        L4a:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    public final synchronized boolean a(com.tkay.expressad.exoplayer.m r4) {
            r3 = this;
            monitor-enter(r3)
            r0 = 1
            r1 = 0
            if (r4 != 0) goto L9
            r3.q = r0     // Catch: java.lang.Throwable -> L19
            monitor-exit(r3)
            return r1
        L9:
            r3.q = r1     // Catch: java.lang.Throwable -> L19
            com.tkay.expressad.exoplayer.m r2 = r3.r     // Catch: java.lang.Throwable -> L19
            boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r4, r2)     // Catch: java.lang.Throwable -> L19
            if (r2 == 0) goto L15
            monitor-exit(r3)
            return r1
        L15:
            r3.r = r4     // Catch: java.lang.Throwable -> L19
            monitor-exit(r3)
            return r0
        L19:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final int b() {
            r2 = this;
            int r0 = r2.k
            int r1 = r2.j
            int r0 = r0 + r1
            return r0
    }

    public final void b(int r1) {
            r0 = this;
            r0.s = r1
            return
    }

    public final int c() {
            r1 = this;
            int r0 = r1.k
            return r0
    }

    public final synchronized boolean c(int r3) {
            r2 = this;
            monitor-enter(r2)
            int r0 = r2.k     // Catch: java.lang.Throwable -> L17
            if (r0 > r3) goto L14
            int r0 = r2.k     // Catch: java.lang.Throwable -> L17
            int r1 = r2.j     // Catch: java.lang.Throwable -> L17
            int r0 = r0 + r1
            if (r3 > r0) goto L14
            int r0 = r2.k     // Catch: java.lang.Throwable -> L17
            int r3 = r3 - r0
            r2.m = r3     // Catch: java.lang.Throwable -> L17
            r3 = 1
            monitor-exit(r2)
            return r3
        L14:
            r3 = 0
            monitor-exit(r2)
            return r3
        L17:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final int d() {
            r2 = this;
            int r0 = r2.k
            int r1 = r2.m
            int r0 = r0 + r1
            return r0
    }

    public final int e() {
            r2 = this;
            int r0 = r2.m
            int r0 = r2.f(r0)
            boolean r1 = r2.f()
            if (r1 == 0) goto L11
            int[] r1 = r2.c
            r0 = r1[r0]
            return r0
        L11:
            int r0 = r2.s
            return r0
    }

    public final synchronized boolean f() {
            r2 = this;
            monitor-enter(r2)
            int r0 = r2.m     // Catch: java.lang.Throwable -> Lc
            int r1 = r2.j     // Catch: java.lang.Throwable -> Lc
            if (r0 == r1) goto La
            r0 = 1
        L8:
            monitor-exit(r2)
            return r0
        La:
            r0 = 0
            goto L8
        Lc:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final synchronized com.tkay.expressad.exoplayer.m g() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.q     // Catch: java.lang.Throwable -> Lc
            if (r0 == 0) goto L8
            r0 = 0
            monitor-exit(r1)
            return r0
        L8:
            com.tkay.expressad.exoplayer.m r0 = r1.r     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r1)
            return r0
        Lc:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized long h() {
            r2 = this;
            monitor-enter(r2)
            long r0 = r2.o     // Catch: java.lang.Throwable -> L5
            monitor-exit(r2)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final synchronized long i() {
            r3 = this;
            monitor-enter(r3)
            int r0 = r3.j     // Catch: java.lang.Throwable -> L11
            if (r0 != 0) goto L9
            r0 = -9223372036854775808
            monitor-exit(r3)
            return r0
        L9:
            long[] r0 = r3.g     // Catch: java.lang.Throwable -> L11
            int r1 = r3.l     // Catch: java.lang.Throwable -> L11
            r1 = r0[r1]     // Catch: java.lang.Throwable -> L11
            monitor-exit(r3)
            return r1
        L11:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    public final synchronized void j() {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            r1.m = r0     // Catch: java.lang.Throwable -> L6
            monitor-exit(r1)
            return
        L6:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized int k() {
            r2 = this;
            monitor-enter(r2)
            int r0 = r2.j     // Catch: java.lang.Throwable -> Lc
            int r1 = r2.m     // Catch: java.lang.Throwable -> Lc
            int r0 = r0 - r1
            int r1 = r2.j     // Catch: java.lang.Throwable -> Lc
            r2.m = r1     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r2)
            return r0
        Lc:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final synchronized long l() {
            r2 = this;
            monitor-enter(r2)
            int r0 = r2.m     // Catch: java.lang.Throwable -> L11
            if (r0 != 0) goto L9
            r0 = -1
            monitor-exit(r2)
            return r0
        L9:
            int r0 = r2.m     // Catch: java.lang.Throwable -> L11
            long r0 = r2.d(r0)     // Catch: java.lang.Throwable -> L11
            monitor-exit(r2)
            return r0
        L11:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final synchronized long m() {
            r2 = this;
            monitor-enter(r2)
            int r0 = r2.j     // Catch: java.lang.Throwable -> L11
            if (r0 != 0) goto L9
            r0 = -1
            monitor-exit(r2)
            return r0
        L9:
            int r0 = r2.j     // Catch: java.lang.Throwable -> L11
            long r0 = r2.d(r0)     // Catch: java.lang.Throwable -> L11
            monitor-exit(r2)
            return r0
        L11:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }
}
