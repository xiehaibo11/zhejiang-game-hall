package com.tkay.expressad.exoplayer.e.a;

final class l {
    public com.tkay.expressad.exoplayer.e.a.c a;
    public long b;
    public long c;
    public long d;
    public int e;
    public int f;
    public long[] g;
    public int[] h;
    public int[] i;
    public int[] j;
    public long[] k;
    public boolean[] l;
    public boolean m;
    public boolean[] n;
    public com.tkay.expressad.exoplayer.e.a.k o;
    public int p;
    public com.tkay.expressad.exoplayer.k.s q;
    public boolean r;
    public long s;

    l() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(com.tkay.expressad.exoplayer.e.f r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.k.s r0 = r3.q
            byte[] r0 = r0.a
            int r1 = r3.p
            r2 = 0
            r4.b(r0, r2, r1)
            com.tkay.expressad.exoplayer.k.s r4 = r3.q
            r4.c(r2)
            r3.r = r2
            return
    }

    public final void a() {
            r3 = this;
            r0 = 0
            r3.e = r0
            r1 = 0
            r3.s = r1
            r3.m = r0
            r3.r = r0
            r0 = 0
            r3.o = r0
            return
    }

    public final void a(int r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.k.s r0 = r1.q
            if (r0 == 0) goto La
            int r0 = r0.b()
            if (r0 >= r2) goto L11
        La:
            com.tkay.expressad.exoplayer.k.s r0 = new com.tkay.expressad.exoplayer.k.s
            r0.<init>(r2)
            r1.q = r0
        L11:
            r1.p = r2
            r2 = 1
            r1.m = r2
            r1.r = r2
            return
    }

    public final void a(int r2, int r3) {
            r1 = this;
            r1.e = r2
            r1.f = r3
            int[] r0 = r1.h
            if (r0 == 0) goto Lb
            int r0 = r0.length
            if (r0 >= r2) goto L13
        Lb:
            long[] r0 = new long[r2]
            r1.g = r0
            int[] r2 = new int[r2]
            r1.h = r2
        L13:
            int[] r2 = r1.i
            if (r2 == 0) goto L1a
            int r2 = r2.length
            if (r2 >= r3) goto L32
        L1a:
            int r3 = r3 * 125
            int r3 = r3 / 100
            int[] r2 = new int[r3]
            r1.i = r2
            int[] r2 = new int[r3]
            r1.j = r2
            long[] r2 = new long[r3]
            r1.k = r2
            boolean[] r2 = new boolean[r3]
            r1.l = r2
            boolean[] r2 = new boolean[r3]
            r1.n = r2
        L32:
            return
    }

    public final void a(com.tkay.expressad.exoplayer.k.s r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.k.s r0 = r3.q
            byte[] r0 = r0.a
            int r1 = r3.p
            r2 = 0
            r4.a(r0, r2, r1)
            com.tkay.expressad.exoplayer.k.s r4 = r3.q
            r4.c(r2)
            r3.r = r2
            return
    }

    public final long b(int r6) {
            r5 = this;
            long[] r0 = r5.k
            r1 = r0[r6]
            int[] r0 = r5.j
            r6 = r0[r6]
            long r3 = (long) r6
            long r1 = r1 + r3
            return r1
    }
}
