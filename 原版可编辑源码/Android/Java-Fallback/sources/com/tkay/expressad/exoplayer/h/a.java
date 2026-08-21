package com.tkay.expressad.exoplayer.h;

abstract class a extends com.tkay.expressad.exoplayer.ae {
    private final int b;
    private final com.tkay.expressad.exoplayer.h.aa c;
    private final boolean d;

    public a(boolean r1, com.tkay.expressad.exoplayer.h.aa r2) {
            r0 = this;
            r0.<init>()
            r0.d = r1
            r0.c = r2
            int r1 = r2.a()
            r0.b = r1
            return
    }

    private int a(int r1, boolean r2) {
            r0 = this;
            if (r2 == 0) goto L9
            com.tkay.expressad.exoplayer.h.aa r2 = r0.c
            int r1 = r2.a(r1)
            return r1
        L9:
            int r2 = r0.b
            int r2 = r2 + (-1)
            if (r1 >= r2) goto L12
            int r1 = r1 + 1
            return r1
        L12:
            r1 = -1
            return r1
    }

    private int b(int r1, boolean r2) {
            r0 = this;
            if (r2 == 0) goto L9
            com.tkay.expressad.exoplayer.h.aa r2 = r0.c
            int r1 = r2.b(r1)
            return r1
        L9:
            if (r1 <= 0) goto Le
            int r1 = r1 + (-1)
            return r1
        Le:
            r1 = -1
            return r1
    }

    protected abstract int a(int r1);

    @Override
    public final int a(int r6, int r7, boolean r8) {
            r5 = this;
            boolean r0 = r5.d
            r1 = 0
            r2 = 2
            if (r0 == 0) goto Lb
            r8 = 1
            if (r7 != r8) goto La
            r7 = r2
        La:
            r8 = r1
        Lb:
            int r0 = r5.b(r6)
            int r3 = r5.e(r0)
            com.tkay.expressad.exoplayer.ae r4 = r5.c(r0)
            int r6 = r6 - r3
            if (r7 != r2) goto L1b
            goto L1c
        L1b:
            r1 = r7
        L1c:
            int r6 = r4.a(r6, r1, r8)
            r1 = -1
            if (r6 == r1) goto L25
            int r3 = r3 + r6
            return r3
        L25:
            int r6 = r5.a(r0, r8)
        L29:
            if (r6 == r1) goto L3a
            com.tkay.expressad.exoplayer.ae r0 = r5.c(r6)
            boolean r0 = r0.a()
            if (r0 == 0) goto L3a
            int r6 = r5.a(r6, r8)
            goto L29
        L3a:
            if (r6 == r1) goto L4a
            int r7 = r5.e(r6)
            com.tkay.expressad.exoplayer.ae r6 = r5.c(r6)
            int r6 = r6.b(r8)
            int r7 = r7 + r6
            return r7
        L4a:
            if (r7 != r2) goto L51
            int r6 = r5.b(r8)
            return r6
        L51:
            return r1
    }

    @Override
    public final int a(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof android.util.Pair
            r1 = -1
            if (r0 != 0) goto L6
            return r1
        L6:
            android.util.Pair r4 = (android.util.Pair) r4
            java.lang.Object r0 = r4.first
            java.lang.Object r4 = r4.second
            int r0 = r3.b(r0)
            if (r0 != r1) goto L13
            return r1
        L13:
            com.tkay.expressad.exoplayer.ae r2 = r3.c(r0)
            int r4 = r2.a(r4)
            if (r4 != r1) goto L1e
            return r1
        L1e:
            int r0 = r3.d(r0)
            int r0 = r0 + r4
            return r0
    }

    @Override
    public final int a(boolean r4) {
            r3 = this;
            int r0 = r3.b
            r1 = -1
            if (r0 != 0) goto L6
            return r1
        L6:
            boolean r0 = r3.d
            if (r0 == 0) goto Lb
            r4 = 0
        Lb:
            if (r4 == 0) goto L14
            com.tkay.expressad.exoplayer.h.aa r0 = r3.c
            int r0 = r0.b()
            goto L18
        L14:
            int r0 = r3.b
            int r0 = r0 + (-1)
        L18:
            com.tkay.expressad.exoplayer.ae r2 = r3.c(r0)
            boolean r2 = r2.a()
            if (r2 == 0) goto L29
            int r0 = r3.b(r0, r4)
            if (r0 != r1) goto L18
            return r1
        L29:
            int r1 = r3.e(r0)
            com.tkay.expressad.exoplayer.ae r0 = r3.c(r0)
            int r4 = r0.a(r4)
            int r1 = r1 + r4
            return r1
    }

    @Override
    public final com.tkay.expressad.exoplayer.ae.a a(int r5, com.tkay.expressad.exoplayer.ae.a r6, boolean r7) {
            r4 = this;
            int r0 = r4.a(r5)
            int r1 = r4.e(r0)
            int r2 = r4.d(r0)
            com.tkay.expressad.exoplayer.ae r3 = r4.c(r0)
            int r5 = r5 - r2
            r3.a(r5, r6, r7)
            int r5 = r6.c
            int r5 = r5 + r1
            r6.c = r5
            if (r7 == 0) goto L27
            java.lang.Object r5 = r4.f(r0)
            java.lang.Object r7 = r6.b
            android.util.Pair r5 = android.util.Pair.create(r5, r7)
            r6.b = r5
        L27:
            return r6
    }

    @Override
    public final com.tkay.expressad.exoplayer.ae.b a(int r10, com.tkay.expressad.exoplayer.ae.b r11, boolean r12, long r13) {
            r9 = this;
            int r0 = r9.b(r10)
            int r1 = r9.e(r0)
            int r2 = r9.d(r0)
            com.tkay.expressad.exoplayer.ae r3 = r9.c(r0)
            int r4 = r10 - r1
            r5 = r11
            r6 = r12
            r7 = r13
            r3.a(r4, r5, r6, r7)
            int r10 = r11.f
            int r10 = r10 + r2
            r11.f = r10
            int r10 = r11.g
            int r10 = r10 + r2
            r11.g = r10
            return r11
    }

    protected abstract int b(int r1);

    @Override
    public final int b(int r6, int r7, boolean r8) {
            r5 = this;
            boolean r0 = r5.d
            r1 = 0
            r2 = 2
            if (r0 == 0) goto Lb
            r8 = 1
            if (r7 != r8) goto La
            r7 = r2
        La:
            r8 = r1
        Lb:
            int r0 = r5.b(r6)
            int r3 = r5.e(r0)
            com.tkay.expressad.exoplayer.ae r4 = r5.c(r0)
            int r6 = r6 - r3
            if (r7 != r2) goto L1b
            goto L1c
        L1b:
            r1 = r7
        L1c:
            int r6 = r4.b(r6, r1, r8)
            r1 = -1
            if (r6 == r1) goto L25
            int r3 = r3 + r6
            return r3
        L25:
            int r6 = r5.b(r0, r8)
        L29:
            if (r6 == r1) goto L3a
            com.tkay.expressad.exoplayer.ae r0 = r5.c(r6)
            boolean r0 = r0.a()
            if (r0 == 0) goto L3a
            int r6 = r5.b(r6, r8)
            goto L29
        L3a:
            if (r6 == r1) goto L4a
            int r7 = r5.e(r6)
            com.tkay.expressad.exoplayer.ae r6 = r5.c(r6)
            int r6 = r6.a(r8)
            int r7 = r7 + r6
            return r7
        L4a:
            if (r7 != r2) goto L51
            int r6 = r5.a(r8)
            return r6
        L51:
            return r1
    }

    protected abstract int b(java.lang.Object r1);

    @Override
    public final int b(boolean r4) {
            r3 = this;
            int r0 = r3.b
            r1 = -1
            if (r0 != 0) goto L6
            return r1
        L6:
            boolean r0 = r3.d
            r2 = 0
            if (r0 == 0) goto Lc
            r4 = r2
        Lc:
            if (r4 == 0) goto L14
            com.tkay.expressad.exoplayer.h.aa r0 = r3.c
            int r2 = r0.c()
        L14:
            com.tkay.expressad.exoplayer.ae r0 = r3.c(r2)
            boolean r0 = r0.a()
            if (r0 == 0) goto L25
            int r2 = r3.a(r2, r4)
            if (r2 != r1) goto L14
            return r1
        L25:
            int r0 = r3.e(r2)
            com.tkay.expressad.exoplayer.ae r1 = r3.c(r2)
            int r4 = r1.b(r4)
            int r0 = r0 + r4
            return r0
    }

    protected abstract com.tkay.expressad.exoplayer.ae c(int r1);

    protected abstract int d(int r1);

    protected abstract int e(int r1);

    protected abstract java.lang.Object f(int r1);
}
