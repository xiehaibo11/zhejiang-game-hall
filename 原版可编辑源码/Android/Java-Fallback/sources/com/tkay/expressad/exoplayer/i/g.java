package com.tkay.expressad.exoplayer.i;

public final class g {
    public final int a;
    private final com.tkay.expressad.exoplayer.i.f[] b;
    private int c;

    public g(com.tkay.expressad.exoplayer.i.f... r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            int r1 = r1.length
            r0.a = r1
            return
    }

    public final com.tkay.expressad.exoplayer.i.f a(int r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.i.f[] r0 = r1.b
            r2 = r0[r2]
            return r2
    }

    public final com.tkay.expressad.exoplayer.i.f[] a() {
            r1 = this;
            com.tkay.expressad.exoplayer.i.f[] r0 = r1.b
            java.lang.Object r0 = r0.clone()
            com.tkay.expressad.exoplayer.i.f[] r0 = (com.tkay.expressad.exoplayer.i.f[]) r0
            return r0
    }

    public final boolean equals(java.lang.Object r3) {
            r2 = this;
            if (r2 != r3) goto L4
            r3 = 1
            return r3
        L4:
            if (r3 == 0) goto L1c
            java.lang.Class r0 = r2.getClass()
            java.lang.Class r1 = r3.getClass()
            if (r0 == r1) goto L11
            goto L1c
        L11:
            com.tkay.expressad.exoplayer.i.g r3 = (com.tkay.expressad.exoplayer.i.g) r3
            com.tkay.expressad.exoplayer.i.f[] r0 = r2.b
            com.tkay.expressad.exoplayer.i.f[] r3 = r3.b
            boolean r3 = java.util.Arrays.equals(r0, r3)
            return r3
        L1c:
            r3 = 0
            return r3
    }

    public final int hashCode() {
            r1 = this;
            int r0 = r1.c
            if (r0 != 0) goto Le
            com.tkay.expressad.exoplayer.i.f[] r0 = r1.b
            int r0 = java.util.Arrays.hashCode(r0)
            int r0 = r0 + 527
            r1.c = r0
        Le:
            int r0 = r1.c
            return r0
    }
}
