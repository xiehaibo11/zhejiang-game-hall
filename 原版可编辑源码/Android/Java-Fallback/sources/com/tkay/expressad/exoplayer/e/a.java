package com.tkay.expressad.exoplayer.e;

public final class a implements com.tkay.expressad.exoplayer.e.k {
    public final int a;
    public final int[] b;
    public final long[] c;
    public final long[] d;
    public final long[] e;
    private final long f;

    public a(int[] r3, long[] r4, long[] r5, long[] r6) {
            r2 = this;
            r2.<init>()
            r2.b = r3
            r2.c = r4
            r2.d = r5
            r2.e = r6
            int r3 = r3.length
            r2.a = r3
            if (r3 <= 0) goto L1c
            int r4 = r3 + (-1)
            r4 = r5[r4]
            int r3 = r3 + (-1)
            r0 = r6[r3]
            long r4 = r4 + r0
            r2.f = r4
            return
        L1c:
            r3 = 0
            r2.f = r3
            return
    }

    private int b(long r3) {
            r2 = this;
            long[] r0 = r2.e
            r1 = 1
            int r3 = com.tkay.expressad.exoplayer.k.af.a(r0, r3, r1)
            return r3
    }

    @Override
    public final com.tkay.expressad.exoplayer.e.k.a a(long r9) {
            r8 = this;
            long[] r0 = r8.e
            r1 = 1
            int r0 = com.tkay.expressad.exoplayer.k.af.a(r0, r9, r1)
            com.tkay.expressad.exoplayer.e.l r2 = new com.tkay.expressad.exoplayer.e.l
            long[] r3 = r8.e
            r4 = r3[r0]
            long[] r3 = r8.c
            r6 = r3[r0]
            r2.<init>(r4, r6)
            long r3 = r2.b
            int r9 = (r3 > r9 ? 1 : (r3 == r9 ? 0 : -1))
            if (r9 >= 0) goto L34
            int r9 = r8.a
            int r9 = r9 - r1
            if (r0 != r9) goto L20
            goto L34
        L20:
            com.tkay.expressad.exoplayer.e.l r9 = new com.tkay.expressad.exoplayer.e.l
            long[] r10 = r8.e
            int r0 = r0 + r1
            r3 = r10[r0]
            long[] r10 = r8.c
            r0 = r10[r0]
            r9.<init>(r3, r0)
            com.tkay.expressad.exoplayer.e.k$a r10 = new com.tkay.expressad.exoplayer.e.k$a
            r10.<init>(r2, r9)
            return r10
        L34:
            com.tkay.expressad.exoplayer.e.k$a r9 = new com.tkay.expressad.exoplayer.e.k$a
            r9.<init>(r2)
            return r9
    }

    @Override
    public final boolean a() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final long b() {
            r2 = this;
            long r0 = r2.f
            return r0
    }

    public final java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "ChunkIndex(length="
            r0.<init>(r1)
            int r1 = r2.a
            r0.append(r1)
            java.lang.String r1 = ", sizes="
            r0.append(r1)
            int[] r1 = r2.b
            java.lang.String r1 = java.util.Arrays.toString(r1)
            r0.append(r1)
            java.lang.String r1 = ", offsets="
            r0.append(r1)
            long[] r1 = r2.c
            java.lang.String r1 = java.util.Arrays.toString(r1)
            r0.append(r1)
            java.lang.String r1 = ", timeUs="
            r0.append(r1)
            long[] r1 = r2.e
            java.lang.String r1 = java.util.Arrays.toString(r1)
            r0.append(r1)
            java.lang.String r1 = ", durationsUs="
            r0.append(r1)
            long[] r1 = r2.d
            java.lang.String r1 = java.util.Arrays.toString(r1)
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
