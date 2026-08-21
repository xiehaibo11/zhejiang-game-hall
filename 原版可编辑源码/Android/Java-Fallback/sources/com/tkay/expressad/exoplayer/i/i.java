package com.tkay.expressad.exoplayer.i;

public final class i {
    public final int a;
    public final com.tkay.expressad.exoplayer.aa[] b;
    public final com.tkay.expressad.exoplayer.i.g c;
    public final java.lang.Object d;

    public i(com.tkay.expressad.exoplayer.aa[] r2, com.tkay.expressad.exoplayer.i.f[] r3, java.lang.Object r4) {
            r1 = this;
            r1.<init>()
            r1.b = r2
            com.tkay.expressad.exoplayer.i.g r0 = new com.tkay.expressad.exoplayer.i.g
            r0.<init>(r3)
            r1.c = r0
            r1.d = r4
            int r2 = r2.length
            r1.a = r2
            return
    }

    public final boolean a(int r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.aa[] r0 = r1.b
            r2 = r0[r2]
            if (r2 == 0) goto L8
            r2 = 1
            return r2
        L8:
            r2 = 0
            return r2
    }

    public final boolean a(com.tkay.expressad.exoplayer.i.i r4) {
            r3 = this;
            r0 = 0
            if (r4 == 0) goto L21
            com.tkay.expressad.exoplayer.i.g r1 = r4.c
            int r1 = r1.a
            com.tkay.expressad.exoplayer.i.g r2 = r3.c
            int r2 = r2.a
            if (r1 == r2) goto Le
            goto L21
        Le:
            r1 = r0
        Lf:
            com.tkay.expressad.exoplayer.i.g r2 = r3.c
            int r2 = r2.a
            if (r1 >= r2) goto L1f
            boolean r2 = r3.a(r4, r1)
            if (r2 != 0) goto L1c
            return r0
        L1c:
            int r1 = r1 + 1
            goto Lf
        L1f:
            r4 = 1
            return r4
        L21:
            return r0
    }

    public final boolean a(com.tkay.expressad.exoplayer.i.i r4, int r5) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            com.tkay.expressad.exoplayer.aa[] r1 = r3.b
            r1 = r1[r5]
            com.tkay.expressad.exoplayer.aa[] r2 = r4.b
            r2 = r2[r5]
            boolean r1 = com.tkay.expressad.exoplayer.k.af.a(r1, r2)
            if (r1 == 0) goto L26
            com.tkay.expressad.exoplayer.i.g r1 = r3.c
            com.tkay.expressad.exoplayer.i.f r1 = r1.a(r5)
            com.tkay.expressad.exoplayer.i.g r4 = r4.c
            com.tkay.expressad.exoplayer.i.f r4 = r4.a(r5)
            boolean r4 = com.tkay.expressad.exoplayer.k.af.a(r1, r4)
            if (r4 == 0) goto L26
            r4 = 1
            return r4
        L26:
            return r0
    }
}
