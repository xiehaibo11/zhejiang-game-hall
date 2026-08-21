package com.tkay.expressad.exoplayer.k;

public final class m {
    private static final int a = 32;
    private int b;
    private long[] c;

    public m() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    private m(byte r1) {
            r0 = this;
            r0.<init>()
            r1 = 32
            long[] r1 = new long[r1]
            r0.c = r1
            return
    }

    private int a() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    private long a(int r4) {
            r3 = this;
            if (r4 < 0) goto Lb
            int r0 = r3.b
            if (r4 >= r0) goto Lb
            long[] r0 = r3.c
            r1 = r0[r4]
            return r1
        Lb:
            java.lang.IndexOutOfBoundsException r0 = new java.lang.IndexOutOfBoundsException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Invalid index "
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = ", size is "
            r1.append(r4)
            int r4 = r3.b
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    private void a(long r4) {
            r3 = this;
            int r0 = r3.b
            long[] r1 = r3.c
            int r2 = r1.length
            if (r0 != r2) goto Lf
            int r0 = r0 * 2
            long[] r0 = java.util.Arrays.copyOf(r1, r0)
            r3.c = r0
        Lf:
            long[] r0 = r3.c
            int r1 = r3.b
            int r2 = r1 + 1
            r3.b = r2
            r0[r1] = r4
            return
    }

    private long[] b() {
            r2 = this;
            long[] r0 = r2.c
            int r1 = r2.b
            long[] r0 = java.util.Arrays.copyOf(r0, r1)
            return r0
    }
}
