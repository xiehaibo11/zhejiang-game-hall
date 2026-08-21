package com.bytedance.pangle.f.a;

final class c {
    int[] a;
    int b;
    int c;

    public c() {
            r1 = this;
            r1.<init>()
            r0 = 32
            int[] r0 = new int[r0]
            r1.a = r0
            return
    }

    public final void a() {
            r4 = this;
            r4.b()
            int r0 = r4.b
            int[] r1 = r4.a
            r2 = 0
            r1[r0] = r2
            int r3 = r0 + 1
            r1[r3] = r2
            int r0 = r0 + 2
            r4.b = r0
            int r0 = r4.c
            int r0 = r0 + 1
            r4.c = r0
            return
    }

    final void b() {
            r5 = this;
            int[] r0 = r5.a
            int r1 = r0.length
            int r2 = r5.b
            int r1 = r1 - r2
            r3 = 2
            if (r1 > r3) goto L14
            int r4 = r0.length
            int r4 = r4 + r1
            int r4 = r4 * r3
            int[] r1 = new int[r4]
            r3 = 0
            java.lang.System.arraycopy(r0, r3, r1, r3, r2)
            r5.a = r1
        L14:
            return
    }
}
