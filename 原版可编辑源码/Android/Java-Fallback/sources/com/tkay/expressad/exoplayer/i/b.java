package com.tkay.expressad.exoplayer.i;

public abstract class b implements com.tkay.expressad.exoplayer.i.f {
    private final com.tkay.expressad.exoplayer.m[] a;
    private final long[] b;
    private int c;
    protected final com.tkay.expressad.exoplayer.h.ae g;
    protected final int h;
    protected final int[] i;

    static class 1 {
    }

    private static final class a implements java.util.Comparator<com.tkay.expressad.exoplayer.m> {
        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        a(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        private static int a(com.tkay.expressad.exoplayer.m r0, com.tkay.expressad.exoplayer.m r1) {
                int r1 = r1.d
                int r0 = r0.d
                int r1 = r1 - r0
                return r1
        }

        @Override
        public final int compare(com.tkay.expressad.exoplayer.m r1, com.tkay.expressad.exoplayer.m r2) {
                r0 = this;
                com.tkay.expressad.exoplayer.m r1 = (com.tkay.expressad.exoplayer.m) r1
                com.tkay.expressad.exoplayer.m r2 = (com.tkay.expressad.exoplayer.m) r2
                int r2 = r2.d
                int r1 = r1.d
                int r2 = r2 - r1
                return r2
        }
    }

    public b(com.tkay.expressad.exoplayer.h.ae r5, int... r6) {
            r4 = this;
            r4.<init>()
            int r0 = r6.length
            r1 = 0
            if (r0 <= 0) goto L9
            r0 = 1
            goto La
        L9:
            r0 = r1
        La:
            com.tkay.expressad.exoplayer.k.a.b(r0)
            java.lang.Object r0 = com.tkay.expressad.exoplayer.k.a.a(r5)
            com.tkay.expressad.exoplayer.h.ae r0 = (com.tkay.expressad.exoplayer.h.ae) r0
            r4.g = r0
            int r0 = r6.length
            r4.h = r0
            com.tkay.expressad.exoplayer.m[] r0 = new com.tkay.expressad.exoplayer.m[r0]
            r4.a = r0
            r0 = r1
        L1d:
            int r2 = r6.length
            if (r0 >= r2) goto L2d
            com.tkay.expressad.exoplayer.m[] r2 = r4.a
            r3 = r6[r0]
            com.tkay.expressad.exoplayer.m r3 = r5.a(r3)
            r2[r0] = r3
            int r0 = r0 + 1
            goto L1d
        L2d:
            com.tkay.expressad.exoplayer.m[] r6 = r4.a
            com.tkay.expressad.exoplayer.i.b$a r0 = new com.tkay.expressad.exoplayer.i.b$a
            r0.<init>(r1)
            java.util.Arrays.sort(r6, r0)
            int r6 = r4.h
            int[] r6 = new int[r6]
            r4.i = r6
        L3d:
            int r6 = r4.h
            if (r1 >= r6) goto L50
            int[] r6 = r4.i
            com.tkay.expressad.exoplayer.m[] r0 = r4.a
            r0 = r0[r1]
            int r0 = r5.a(r0)
            r6[r1] = r0
            int r1 = r1 + 1
            goto L3d
        L50:
            long[] r5 = new long[r6]
            r4.b = r5
            return
    }

    @Override
    public int a(long r1, java.util.List<? extends com.tkay.expressad.exoplayer.h.b.i> r3) {
            r0 = this;
            int r1 = r3.size()
            return r1
    }

    @Override
    public final int a(com.tkay.expressad.exoplayer.m r3) {
            r2 = this;
            r0 = 0
        L1:
            int r1 = r2.h
            if (r0 >= r1) goto Lf
            com.tkay.expressad.exoplayer.m[] r1 = r2.a
            r1 = r1[r0]
            if (r1 != r3) goto Lc
            return r0
        Lc:
            int r0 = r0 + 1
            goto L1
        Lf:
            r3 = -1
            return r3
    }

    @Override
    public final com.tkay.expressad.exoplayer.m a(int r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.m[] r0 = r1.a
            r2 = r0[r2]
            return r2
    }

    @Override
    public void a() {
            r0 = this;
            return
    }

    @Override
    public void a(float r1) {
            r0 = this;
            return
    }

    @Override
    public final boolean a(int r8, long r9) {
            r7 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            boolean r2 = r7.b(r8, r0)
            r3 = 0
            r4 = r3
        La:
            int r5 = r7.h
            r6 = 1
            if (r4 >= r5) goto L1f
            if (r2 != 0) goto L1f
            if (r4 == r8) goto L1b
            boolean r2 = r7.b(r4, r0)
            if (r2 != 0) goto L1b
            r2 = r6
            goto L1c
        L1b:
            r2 = r3
        L1c:
            int r4 = r4 + 1
            goto La
        L1f:
            if (r2 != 0) goto L22
            return r3
        L22:
            long[] r2 = r7.b
            r3 = r2[r8]
            long r0 = r0 + r9
            long r9 = java.lang.Math.max(r3, r0)
            r2[r8] = r9
            return r6
    }

    @Override
    public final int b(int r2) {
            r1 = this;
            int[] r0 = r1.i
            r2 = r0[r2]
            return r2
    }

    protected final boolean b(int r4, long r5) {
            r3 = this;
            long[] r0 = r3.b
            r1 = r0[r4]
            int r4 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r4 <= 0) goto La
            r4 = 1
            return r4
        La:
            r4 = 0
            return r4
    }

    @Override
    public final int c(int r3) {
            r2 = this;
            r0 = 0
        L1:
            int r1 = r2.h
            if (r0 >= r1) goto Lf
            int[] r1 = r2.i
            r1 = r1[r0]
            if (r1 != r3) goto Lc
            return r0
        Lc:
            int r0 = r0 + 1
            goto L1
        Lf:
            r3 = -1
            return r3
    }

    @Override
    public final void e() {
            r0 = this;
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L25
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L25
        L12:
            com.tkay.expressad.exoplayer.i.b r5 = (com.tkay.expressad.exoplayer.i.b) r5
            com.tkay.expressad.exoplayer.h.ae r2 = r4.g
            com.tkay.expressad.exoplayer.h.ae r3 = r5.g
            if (r2 != r3) goto L25
            int[] r2 = r4.i
            int[] r5 = r5.i
            boolean r5 = java.util.Arrays.equals(r2, r5)
            if (r5 == 0) goto L25
            return r0
        L25:
            return r1
    }

    @Override
    public final com.tkay.expressad.exoplayer.h.ae f() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.ae r0 = r1.g
            return r0
    }

    @Override
    public final int g() {
            r1 = this;
            int[] r0 = r1.i
            int r0 = r0.length
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.m h() {
            r2 = this;
            com.tkay.expressad.exoplayer.m[] r0 = r2.a
            int r1 = r2.b()
            r0 = r0[r1]
            return r0
    }

    public int hashCode() {
            r2 = this;
            int r0 = r2.c
            if (r0 != 0) goto L15
            com.tkay.expressad.exoplayer.h.ae r0 = r2.g
            int r0 = java.lang.System.identityHashCode(r0)
            int r0 = r0 * 31
            int[] r1 = r2.i
            int r1 = java.util.Arrays.hashCode(r1)
            int r0 = r0 + r1
            r2.c = r0
        L15:
            int r0 = r2.c
            return r0
    }

    @Override
    public final int i() {
            r2 = this;
            int[] r0 = r2.i
            int r1 = r2.b()
            r0 = r0[r1]
            return r0
    }
}
